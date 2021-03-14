
unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param3;
    unsigned int v3 = param0;
    unsigned int v4 = param2;
    unsigned int v5 = param3;
    int v6 = 0;
    if(v1 >= 0x80000000) {
        unsigned int v7 = v5;
        unsigned int v8 = v3;
        v3 = (unsigned int)(0 - v3);
        v1 = (unsigned int)(0 - ((unsigned int)(v8 > 0) + v1));
        v6 = -1;
        if(v5 >= 0x80000000) {
        loc_8070391:
            unsigned int v9 = v4;
            v4 = (unsigned int)(0 - v4);
            v5 = (unsigned int)((unsigned int)(v9 > 0) + v5);
            v6 = ~v6;
            v5 = (unsigned int)(0 - v5);
        }
    }
    else if(v5 >= 0x80000000) {
        goto loc_8070391;
    }
    unsigned int v10 = v5;
    unsigned int v11 = v1;
    unsigned int v12 = v4;
    v4 = v3;
    if(!v5) {
        if(v1 < v12) {
            v0 = (unsigned int)((unsigned long long)v3 | ((unsigned long long)v1 << 32)) / v12;
        }
        else {
            if(!v12) {
                v12 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v1 % v12) << 32)) / v12;
        }
    }
    else if(v5 <= v1) {
        if(v5 != 0) {
            unsigned int i;
            for(i = 31; !(v5 >>> i); --i) {
            }
            v3 = i;
        }
        int v13 = v3 ^ 0x1f;
        int v14 = v3 ^ 0x1f;
        if(v3 ^ 0x1f) {
            int v15 = 32 - (v3 ^ 0x1f);
            unsigned int v16 = (unsigned int)((v5 << ((v3 ^ 0x1f) & 0x1f)) | (v12 >>> ((32 - (v3 ^ 0x1f)) & 0x1f)));
            int v17 = v12 << ((v3 ^ 0x1f) & 0x1f);
            int v18 = v1 >>> ((32 - (v3 ^ 0x1f)) & 0x1f);
            int v19 = (v1 << ((v3 ^ 0x1f) & 0x1f)) | (v4 >>> ((32 - (v3 ^ 0x1f)) & 0x1f));
            unsigned int v20 = (unsigned int)((unsigned long long)v19 | ((unsigned long long)v18 << 32)) / v16;
            unsigned int v21 = (unsigned int)((unsigned long long)v19 | ((unsigned long long)v18 << 32)) % v16;
            unsigned int v22 = (unsigned int)(((unsigned long long)v20 * (unsigned long long)v17) >>> 32L);
            v0 = v22 <= v21 && (v20 * v17 <= v4 << ((v3 ^ 0x1f) & 0x1f) || v22 != v21) ? v20: v20 - 1;
        }
        else if(v12 > v4 && v5 >= v1) {
            goto loc_807030E;
        }
        else {
            v0 = 1;
        }
    }
    else {
    loc_807030E:
        v0 = 0;
    }
    unsigned int result = v0;
    if(v6) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

unsigned int __moddi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param3;
    unsigned int v3 = param0;
    unsigned int v4 = param2;
    unsigned int v5 = param3;
    int v6 = 0;
    if(v1 >= 0x80000000) {
        unsigned int v7 = v3;
        v3 = (unsigned int)(0 - v3);
        v1 = (unsigned int)(0 - ((unsigned int)(v7 > 0) + v1));
        v6 = -1;
    }
    if(v5 >= 0x80000000) {
        unsigned int v8 = v4;
        v4 = (unsigned int)(0 - v4);
        v5 = (unsigned int)(0 - ((unsigned int)(v8 > 0) + v5));
    }
    unsigned int v9 = v5;
    unsigned int v10 = v4;
    unsigned int v11 = v3;
    unsigned int v12 = v3;
    unsigned int v13 = v4;
    unsigned int v14 = v1;
    if(!v5) {
        if(v1 < v13) {
            v0 = (unsigned int)((unsigned long long)v3 | ((unsigned long long)v1 << 32)) % v13;
        }
        else {
            if(!v13) {
                v13 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v12 | ((unsigned long long)(v1 % v13) << 32)) % v13;
        }
        int v15 = v6;
        result = v0;
        if(v6) {
            return (unsigned int)(0 - result);
        }
    }
    else {
        if(v5 > v1) {
            result = v3;
        }
        else {
            if(v5 != 0) {
                unsigned int i;
                for(i = 31; !(v5 >>> i); --i) {
                }
                v3 = i;
            }
            v4 = v3 ^ 0x1f;
            if(!(v3 ^ 0x1f)) {
                if(v12 >= v13 || v5 < v1) {
                    v12 -= v13;
                }
                result = v12;
            }
            else {
                int v16 = v5 << ((v3 ^ 0x1f) & 0x1f);
                v12 = (unsigned int)(32 - (v3 ^ 0x1f));
                int v17 = (unsigned int)(unsigned char)(v3 ^ 0x1f);
                unsigned int v18 = (unsigned int)((v13 >>> ((unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f)) | v16);
                int v19 = (unsigned int)(unsigned char)(unsigned int)(32 - (v3 ^ 0x1f));
                unsigned int v20 = v13 << ((unsigned int)(unsigned char)(v3 ^ 0x1f) & 0x1f);
                int v21 = v1 >>> ((unsigned int)(unsigned char)(unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f);
                int v22 = (v1 << ((v3 ^ 0x1f) & 0x1f)) | (v11 >>> ((unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f));
                unsigned int v23 = (unsigned int)((unsigned long long)v22 | ((unsigned long long)v21 << 32)) / v18;
                unsigned int v24 = (unsigned int)((unsigned long long)v22 | ((unsigned long long)v21 << 32)) % v18;
                v13 = v11 << ((v3 ^ 0x1f) & 0x1f);
                unsigned int v25 = v24;
                unsigned int v26 = v23 * v20;
                unsigned int v27 = (unsigned int)(((unsigned long long)v23 * (unsigned long long)v20) >>> 32L);
                if(v27 > v24 || (v26 > v13 && v27 == v24)) {
                    unsigned int v28 = v26;
                    v26 -= v20;
                    v27 -= (unsigned int)(v28 < v20) + v18;
                }
                result = (unsigned int)(((v24 - ((unsigned int)(v26 > v13) + v27)) << ((unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f)) | ((v13 - v26) >>> ((v3 ^ 0x1f) & 0x1f)));
            }
        }
        if(v6) {
            return (unsigned int)(0 - result);
        }
    }
    return result;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param2;
    unsigned int v3 = v1;
    if(param3) {
        if(param1 >= param3) {
            if(param3 != 0) {
                unsigned int i;
                for(i = 31; !(param3 >>> i); --i) {
                }
                v1 = i;
            }
            if((v1 ^ 0x1f)) {
                unsigned int v4 = (unsigned int)((param3 << ((v1 ^ 0x1f) & 0x1f)) | (v2 >>> ((32 - (v1 ^ 0x1f)) & 0x1f)));
                int v5 = v2 << ((v1 ^ 0x1f) & 0x1f);
                int v6 = param1 >>> ((32 - (v1 ^ 0x1f)) & 0x1f);
                int v7 = (param1 << ((v1 ^ 0x1f) & 0x1f)) | (v3 >>> ((32 - (v1 ^ 0x1f)) & 0x1f));
                unsigned int v8 = (unsigned int)((unsigned long long)v7 | ((unsigned long long)v6 << 32)) / v4;
                unsigned int v9 = (unsigned int)((unsigned long long)v7 | ((unsigned long long)v6 << 32)) % v4;
                unsigned int v10 = (unsigned int)(((unsigned long long)v8 * (unsigned long long)v5) >>> 32L);
                if(v10 <= v9 && (v8 * v5 <= v3 << ((v1 ^ 0x1f) & 0x1f) || v10 != v9)) {
                    v0 = v8;
                }
                else {
                    return v8 - 1;
                }
            }
            else if(v2 > v3 && param1 <= param3) {
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
    else if(v2 <= param1) {
        if(!v2) {
            v2 = 1 / 0;
        }
        return (int)((unsigned int)((unsigned long long)v3 | ((unsigned long long)(param1 % v2) << 32)) / v2);
    }
    return (int)((unsigned int)((unsigned long long)v1 | ((unsigned long long)param1 << 32)) / v2);
}

int alloc_group_entry() {
    char** ptr0;
    int v0 = 1;
    int v1 = 1;
    int* ptr1 = (int*)0x1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 3;
    int* ptr2 = &v0;
    int* ptr3 = &v1;
    int* ptr4 = &ptr1;
    v0 = caml_copy_string(ptr0[0]);
    v1 = caml_copy_string(ptr0[1]);
    ptr1 = caml_copy_string_array(ptr0[3]);
    int result = caml_alloc_small(4, 0);
    *(int*)result = v0;
    *(int*)(result + 4) = v1;
    *(unsigned int*)(result + 8) = (int*)((char*)((int)ptr0[2] * 2) + 1);
    *(int**)(result + 12) = ptr1;
    caml_local_roots = v2;
    return result;
}

int alloc_host_entry() {
    char** ptr0;
    int v0 = 1;
    int* ptr1 = (int*)0x1;
    int* ptr2 = (int*)0x1;
    int v1 = 1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 4;
    int* ptr3 = &v0;
    int* ptr4 = &ptr1;
    int* ptr5 = &ptr2;
    int* ptr6 = &v1;
    v0 = caml_copy_string(ptr0[0]);
    int* ptr7 = (int*)ptr0[1];
    ptr1 = ptr7 ? caml_copy_string_array(ptr7): (int*)&gvar_80821C4;
    entry_h_length = ptr0[3];
    ptr2 = caml_alloc_array(&alloc_one_addr, ptr0[4]);
    int result = caml_alloc_small(4, 0);
    *(int*)result = v0;
    *(int**)(result + 4) = ptr1;
    char* ptr8 = ptr0[2];
    *(int*)(result + 8) = ptr8 != 1 ? (ptr8 == 2 ? 0: 1) * 2 + 3: 1;
    *(int**)(result + 12) = ptr2;
    caml_local_roots = v2;
    return result;
}

int alloc_inet6_addr(int* param0) {
    int* ptr0 = param0;
    int result = caml_alloc_string(16);
    *(int*)result = *ptr0;
    *(int*)(result + 4) = *(ptr0 + 1);
    *(int*)(result + 8) = *(ptr0 + 2);
    *(int*)(result + 12) = *(ptr0 + 3);
    return result;
}

int alloc_inet_addr(int* param0) {
    int result = caml_alloc_string(4);
    *(int*)result = *param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_one_addr(int param0) {
    int result;
    int v0;
    int v1;
    char v2;
    char v3;
    if(entry_h_length == 16) {
        v1 = 16;
        v0 = param0;
        →memmove();
        result = alloc_inet6_addr(&v2);
    }
    else {
        v1 = 4;
        v0 = param0;
        →memmove();
        result = alloc_inet_addr(&v3);
    }
    return result;
}

int alloc_passwd_entry() {
    char** ptr0;
    int v0 = 1;
    int v1 = 1;
    int v2 = 1;
    int v3 = 1;
    int v4 = 1;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 5;
    int* ptr1 = &v0;
    int* ptr2 = &v1;
    int* ptr3 = &v2;
    int* ptr4 = &v3;
    int* ptr5 = &v4;
    v0 = caml_copy_string(ptr0[0]);
    v1 = caml_copy_string(ptr0[1]);
    v2 = caml_copy_string(ptr0[4]);
    v3 = caml_copy_string(ptr0[5]);
    v4 = caml_copy_string(ptr0[6]);
    int result = caml_alloc_small(7, 0);
    *(int*)result = v0;
    *(int*)(result + 4) = v1;
    *(unsigned int*)(result + 8) = (int*)((char*)((int)ptr0[2] * 2) + 1);
    *(unsigned int*)(result + 12) = (int*)((char*)((int)ptr0[3] * 2) + 1);
    *(int*)(result + 16) = v2;
    *(int*)(result + 20) = v3;
    *(int*)(result + 24) = v4;
    caml_local_roots = v5;
    return result;
}

int alloc_process_status(int param0, int param1) {
    int v0;
    int v1;
    if(!(param1 & 0x7f)) {
        int v2 = caml_alloc_small(1, 0);
        v0 = v2;
        *(int*)v2 = (unsigned int)(unsigned char)(param1 >>> 8) * 2 + 1;
    }
    else if((unsigned char)param1 == 127) {
        int v3 = caml_alloc_small(1, 2);
        int v4 = v3;
        v0 = v3;
        int v5 = caml_rev_convert_signal_number((unsigned int)(unsigned char)(param1 >>> 8));
        *(int*)v4 = v5 * 2 + 1;
    }
    else {
        int v6 = caml_alloc_small(1, 1);
        v0 = v6;
        int v7 = caml_rev_convert_signal_number(param1 & 0x7f);
        *(int*)v6 = v7 * 2 + 1;
    }
    unsigned int v8 = caml_local_roots;
    caml_local_roots = &v8;
    int result = caml_alloc_small(2, 0);
    *(int*)result = v1 * 2 + 1;
    *(int*)(result + 4) = v0;
    caml_local_roots = v8;
    return result;
}

int alloc_proto_entry() {
    char** ptr0;
    int v0 = 1;
    int* ptr1 = (int*)0x1;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v1;
    int v2 = 1;
    int v3 = 2;
    int* ptr2 = &v0;
    int* ptr3 = &ptr1;
    v0 = caml_copy_string(ptr0[0]);
    ptr1 = caml_copy_string_array(ptr0[1]);
    int result = caml_alloc_small(3, 0);
    *(int*)result = v0;
    *(int**)(result + 4) = ptr1;
    *(unsigned int*)(result + 8) = (int*)((char*)((int)ptr0[2] * 2) + 1);
    caml_local_roots = v1;
    return result;
}

int alloc_service_entry() {
    char** ptr0;
    int v0 = 1;
    int* ptr1 = (int*)0x1;
    int v1 = 1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 3;
    int* ptr2 = &v0;
    int* ptr3 = &ptr1;
    int* ptr4 = &v1;
    v0 = caml_copy_string(ptr0[0]);
    ptr1 = caml_copy_string_array(ptr0[1]);
    v1 = caml_copy_string(ptr0[3]);
    int result = caml_alloc_small(4, 0);
    *(int*)result = v0;
    *(int**)(result + 4) = ptr1;
    *(int*)(result + 8) = (unsigned int)__ror__((unsigned short)ptr0[2], 8) * 2 + 1;
    *(int*)(result + 12) = v1;
    caml_local_roots = v2;
    return result;
}

int alloc_sockaddr(short* param0, int param1, int __fd) {
    int* ptr0;
    int v0;
    int v1;
    int result;
    unsigned int v2;
    int v3;
    short* ptr1 = param0;
    short v4 = *ptr1;
    switch(v4) {
        case 1: {
            v3 = caml_copy_string((char*)(ptr1 + 1));
            v2 = caml_local_roots;
            caml_local_roots = &v2;
            result = caml_alloc_small(1, 0);
            *(int*)result = v3;
            caml_local_roots = v2;
            return result;
        }
        case 2: {
            v3 = alloc_inet_addr((int*)(ptr1 + 2));
            v2 = caml_local_roots;
            caml_local_roots = &v2;
            v1 = 1;
            v0 = 1;
            ptr0 = &v3;
            result = caml_alloc_small(2, 1);
            *(int*)result = v3;
            *(int*)(result + 4) = (unsigned int)__ror__(*(ptr1 + 1), 8) * 2 + 1;
            caml_local_roots = v2;
            return result;
        }
        case 10: {
            v3 = alloc_inet6_addr((int*)(ptr1 + 4));
            v2 = caml_local_roots;
            caml_local_roots = &v2;
            v1 = 1;
            v0 = 1;
            ptr0 = &v3;
            result = caml_alloc_small(2, 1);
            *(int*)result = v3;
            *(int*)(result + 4) = (unsigned int)__ror__(*(ptr1 + 1), 8) * 2 + 1;
            caml_local_roots = v2;
            return result;
        }
        default: {
            if(__fd != -1) {
                →close(__fd);
            }
            return unix_error(97, (char*)&gvar_80719A8, 0);
        }
    }
}

int alloc_tm() {
    int* ptr0;
    int result = caml_alloc_small(9, 0);
    *(int*)result = *ptr0 * 2 + 1;
    *(int*)(result + 4) = *(ptr0 + 1) * 2 + 1;
    *(int*)(result + 8) = *(ptr0 + 2) * 2 + 1;
    *(int*)(result + 12) = *(ptr0 + 3) * 2 + 1;
    *(int*)(result + 16) = *(ptr0 + 4) * 2 + 1;
    *(int*)(result + 20) = *(ptr0 + 5) * 2 + 1;
    *(int*)(result + 24) = *(ptr0 + 6) * 2 + 1;
    *(int*)(result + 28) = *(ptr0 + 7) * 2 + 1;
    *(int*)(result + 32) = ((*(unsigned int*)(ptr0 + 8) < 1 ? -1: 0) & 0xfffffffe) + 3;
    return result;
}

int* allocate_block(int* param0) {
    int v0;
    int* ptr0;
    int v1;
    int v2 = v0;
    int* ptr1 = param0;
    unsigned int v3 = (unsigned int)(*(ptr1 - 1) >>> 10);
    if((unsigned int)(v1 + 1) > v3) {
        caml_fl_cur_size += ~v3;
        *ptr0 = *ptr1;
        caml_fl_merge = caml_fl_merge == ptr1 ? ptr0: caml_fl_merge;
        *(ptr1 - 1) = 0;
        if(caml_allocation_policy != 1) {
            goto loc_8062E08;
        }
        else {
            int v4 = flp_size;
            if(v2 + 1 < v4 && *(int*)((v2 + 1) * 4 + (int)&flp) == ptr1) {
                *(unsigned int*)((v2 + 1) * 4 + (int)&flp) = ptr0;
            }
            else if(v4 - 1 != v2) {
                goto loc_8062E08;
            }
            else {
                beyond = ptr0 == 134723336 ? NULL: ptr0;
                flp_size = v4 - 1;
            }
        }
    }
    else {
        caml_fl_cur_size -= v1;
        *(ptr1 - 1) = (v3 - v1) * 0x400 + 0x200;
    loc_8062E08:
        if(!caml_allocation_policy) {
            fl_prev = ptr0;
        }
    }
    return (int*)((v3 - v1) * 4 + (int)ptr1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__append_1054() {
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    float* ptr1;
    float* ptr2;
    unsigned int v2;
    float* ptr3;
    __SyntheticTypeUnknown v3;
    int v4;
    float* ptr4;
    char v5;
    float* ptr5;
    int v6 = *(int*)(ptr4 - 1);
    unsigned int v7 = (unsigned int)(((unsigned char)v6 != 254 ? v6 >>> 9: v6 >>> 10) | 0x1);
    int v8 = *(int*)(ptr5 - 1);
    float* ptr6 = (float*)(((unsigned char)v8 != 254 ? v8 >>> 9: v8 >>> 10) | 0x1);
    if(v7 != 1) {
        ptr3 = ptr6;
        v2 = v7;
        ptr2 = ptr5;
        ptr1 = ptr4;
    }
    else if(ptr6 == 1) {
        return &camlArray__31;
    }
    else {
        ptr3 = ptr6;
        v2 = 1;
        ptr2 = ptr5;
        ptr1 = ptr4;
    }
    if((int)v7 > 1) {
        ptr5 = ptr4;
    }
    if(*(char*)(ptr5 - 1) == 254) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)ptr6, (int)v7);
            }
        }
        *ptr0 = 2301;
        v3[v5 - 1] = *(double*)ptr5;
        *(long long*)(ptr0 + 1) = v3[v5 - 1];
    }
    int* ptr7 = (int*)((char*)((int)ptr6 + v7) - 1);
    int result = caml_c_call();
    int v9 = 1;
    if((int)(v2 - 2) >= 1) {
        do {
            if(*(char*)(ptr1 - 1) != 254) {
                v7 = *(unsigned int*)((char*)(v9 * 2 + (int)ptr1) - 2);
            }
            else {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr1, (int)v7);
                    }
                }
                v7 = v1 + 4;
                *(int*)(v7 - 4) = 2301;
                *(long long*)v7 = *(double*)((int*)(v9 * 4 + (int)ptr1) - 1);
            }
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)(v9 * 2 + result - 2), v7);
            }
            else {
                *(long long*)(v9 * 4 + result - 4) = *(double*)v7;
            }
            v4 = v9;
            v9 += 2;
        }
        while((int)(v2 - 2) != v4);
    }
    ptr5 = (float*)0x1;
    if((int)(float*)((char*)ptr3 - 2) >= 1) {
        ptr3 = (float*)((char*)ptr3 - 2);
        do {
            if(*(char*)(ptr2 - 1) != 254) {
                v7 = *(unsigned int*)((char*)((int)(int*)((int)ptr5 * 2) + (int)ptr2) - 2);
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr2, (int)v7);
                    }
                }
                v7 = v0 + 4;
                *(int*)(v7 - 4) = 2301;
                *(long long*)v7 = *(double*)((int*)((int)(int*)((int)ptr5 * 4) + (int)ptr2) - 1);
            }
            int* ptr8 = (int*)((char*)((int)ptr5 + v2) - 1);
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr8 * 2) + result) - 2), v7);
            }
            else {
                *(long long*)((int*)((int)(int*)((int)ptr8 * 4) + result) - 1) = *(double*)v7;
            }
            ptr6 = ptr5;
            ptr5 = (float*)((char*)ptr5 + 2);
        }
        while(ptr6 != ptr3);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__blit_1093(int param0, int param1) {
    unsigned int v0;
    int v1;
    int* ptr0;
    unsigned int v2;
    int v3;
    __SyntheticTypeUnknown v4;
    int v5;
    char v6;
    int v7;
    int v8;
    int v9 = param0;
    if(v7 >= 1 && v5 >= 1) {
        param0 = *(int*)(v8 - 4);
        if((((unsigned char)param0 != 254 ? param0 >>> 9: param0 >>> 10) | 0x1) - v7 + 1 < v5 || param1 < 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
            caml_call_gc(v1, param1);
            goto loc_80521E5;
        }
        else {
            param0 = *(int*)(v9 - 4);
            if((((unsigned char)param0 != 254 ? param0 >>> 9: param0 >>> 10) | 0x1) - v7 + 1 < param1) {
                /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
                caml_call_gc(v1, param1);
                goto loc_80521E5;
            }
            else if(param1 > v5) {
                v7 -= 2;
                if(v7 >= 1) {
                    v3 = v5;
                    do {
                        int v10 = v7 + v3 - 1;
                        if(*(char*)(v8 - 4) != 254) {
                            v2 = *(unsigned int*)(v10 * 2 + v8 - 2);
                        }
                        else {
                            while(1) {
                                ptr0 = (int*)(caml_young_ptr - 12);
                                caml_young_ptr -= 12;
                                if(caml_young_limit <= (unsigned int)ptr0) {
                                    break;
                                }
                                else {
                                    caml_call_gc(param0, param1);
                                }
                            }
                            *ptr0 = 2301;
                            v4[v6 - 1] = *(double*)(v10 * 4 + v8 - 4);
                            *(long long*)(unsigned int)(ptr0 + 1) = v4[v6 - 1];
                            v2 = (unsigned int)(ptr0 + 1);
                        }
                        int v11 = param1 + v7 - 1;
                        param0 = (int)*(char*)(v9 - 4);
                        if(param0 != 254) {
                            caml_modify((unsigned int*)(v11 * 2 + v9 - 2), v2);
                        }
                        else {
                            v4[v6 - 1] = *(double*)v2;
                            *(long long*)(v11 * 4 + v9 - 4) = v4[v6 - 1];
                        }
                        v5 = v7;
                        v7 -= 2;
                    }
                    while(v5 != 1);
                }
                return 1;
            }
            else {
                int v12 = 1;
                v7 -= 2;
                if(v7 >= 1) {
                    v3 = v5;
                    int v13 = v8;
                loc_80521C5:
                    int v14 = v3 + v12 - 1;
                    v1 = (unsigned int)*(char*)(v13 - 4);
                    if(v1 == 254) {
                    loc_80521E5:
                        int* ptr1 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit > (unsigned int)ptr1) {
                            caml_call_gc(v1, param1);
                            goto loc_80521E5;
                        }
                        else {
                            *ptr1 = 2301;
                            v4[v6 - 1] = *(double*)(v14 * 4 + v13 - 4);
                            *(long long*)(unsigned int)(ptr1 + 1) = v4[v6 - 1];
                            v0 = (unsigned int)(ptr1 + 1);
                        loc_8052214:
                            int v15 = param1 + v12 - 1;
                            if(*(char*)(v9 - 4) != 254) {
                                caml_modify((unsigned int*)(v15 * 2 + v9 - 2), v0);
                            }
                            else {
                                v4[v6 - 1] = *(double*)v0;
                                *(long long*)(v15 * 4 + v9 - 4) = v4[v6 - 1];
                            }
                            v5 = v12;
                            v12 += 2;
                            if(v5 != v7) {
                                goto loc_80521C5;
                            }
                            else {
                                return 1;
                            }
                        }
                    }
                    else {
                        v0 = *(unsigned int*)(v14 * 2 + v13 - 2);
                        goto loc_8052214;
                    }
                }
            }
        }
    }
    else {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
        caml_call_gc(v1, param1);
        goto loc_80521E5;
    }
    return 1;
}

int camlArray__bubble_1174() {
    int v0;
    int v1 = sub_8051060(v0);
    if(gvar_80763A4 == *(int*)v1) {
        return *(int*)(v1 + 4);
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__bubbledown_1170(int param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    while(1) {
        v4 = v6;
        v3 = v7;
        v2 = param0;
        v7 = (unsigned int)camlArray__maxson_1155(*(int*)(param0 + 16));
        int v8 = *(int*)(v2 + 12);
        int v9 = *(int*)(v8 - 4);
        if((unsigned char)v9 != 254) {
            if((unsigned int)(v9 >>> 9) <= v7) {
                goto loc_8051025;
            }
            else {
                v1 = *(unsigned int*)(v7 * 2 + v8 - 2);
                goto loc_8050FB0;
            }
        }
        if((unsigned int)(v9 >>> 10) <= v7) {
            goto loc_8051020;
        }
        else {
            while(1) {
                v0 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v0) {
                    break;
                }
                else {
                    caml_call_gc(v8, 254);
                }
            }
            v1 = v0 + 4;
            *(int*)(v1 - 4) = 2301;
            *(long long*)v1 = *(double*)(v7 * 4 + v8 - 4);
        loc_8050FB0:
            int v10 = *(int*)(v2 + 12);
            int v11 = *(int*)(v10 - 4);
            if((unsigned char)v11 != 254) {
                if((unsigned int)(v11 >>> 9) <= v3) {
                    goto loc_805101B;
                }
                else {
                    caml_modify((unsigned int*)(v3 * 2 + v10 - 2), v1);
                    goto loc_8051001;
                }
            }
            if((unsigned int)(v11 >>> 10) <= v3) {
                break;
            }
            else {
                *(long long*)(v3 * 4 + v10 - 4) = *(double*)v1;
            loc_8051001:
                v6 = v4;
                param0 = v2;
            }
        }
    }
    caml_ml_array_bound_error(v2, v4, (int)v3, v5);
loc_805101B:
    caml_ml_array_bound_error(v2, v4, (int)v3, v5);
loc_8051020:
    caml_ml_array_bound_error(v2, v4, (int)v3, v5);
loc_8051025:
    /*BAD_CALL!*/ caml_ml_array_bound_error(v2, v4, (int)v3, v5);
}

int camlArray__concat_1075() {
    return camlArray__find_init_1077();
}

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
    float* ptr1;
    float* ptr2;
    char v3;
    int v4 = *(int*)(ptr2 - 1);
    float* ptr3 = (float*)(((unsigned char)v4 != 254 ? v4 >>> 9: v4 >>> 10) | 0x1);
    if(ptr3 == 1) {
        return &camlArray__32;
    }
    float* ptr4 = ptr3;
    float* ptr5 = ptr2;
    if(*(char*)(ptr2 - 1) != 254) {
        ptr0 = *ptr2;
    }
    else {
        while(1) {
            v1 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v1) {
                break;
            }
            else {
                caml_call_gc((int)ptr3, (int)param1);
            }
        }
        ptr0 = (long long*)(v1 + 4);
        *(int*)((char*)ptr0 - 4) = 2301;
        v2[v3 - 1] = *(double*)ptr2;
        *ptr0 = v2[v3 - 1];
    }
    long long* ptr6 = ptr0;
    float* ptr7 = ptr3;
    int result = caml_c_call();
    float* ptr8 = (float*)0x3;
    if((int)(int*)((char*)ptr4 - 2) >= 3) {
        do {
            if(*(char*)(ptr5 - 1) != 254) {
                param1 = *(unsigned int*)((char*)((int)(int*)((int)ptr8 * 2) + (int)ptr5) - 2);
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr5, (int)param1);
                    }
                }
                param1 = v0 + 4;
                *(int*)(param1 - 4) = 2301;
                *(long long*)param1 = *(double*)((int*)((int)(int*)((int)ptr8 * 4) + (int)ptr5) - 1);
            }
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr8 * 2) + result) - 2), param1);
            }
            else {
                *(long long*)((int*)((int)(int*)((int)ptr8 * 4) + result) - 1) = *(double*)param1;
            }
            ptr1 = ptr8;
            ptr8 = (float*)((char*)ptr8 + 2);
        }
        while((int*)((char*)ptr4 - 2) != ptr1);
    }
    return result;
}

int camlArray__entry(int param0, int param1) {
    camlArray = &camlArray__21;
    gvar_8076350 = &camlArray__20;
    gvar_8076354 = gvar_8076350;
    gvar_8076364 = &camlArray__19;
    gvar_8076358 = &camlArray__18;
    gvar_807639C = &camlArray__17;
    gvar_807635C = &camlArray__16;
    gvar_8076360 = &camlArray__15;
    gvar_8076368 = &camlArray__14;
    gvar_807636C = &camlArray__13;
    gvar_8076378 = &camlArray__12;
    gvar_807637C = &camlArray__11;
    gvar_8076380 = &camlArray__10;
    gvar_8076384 = &camlArray__9;
    gvar_8076370 = &camlArray__8;
    gvar_80763A0 = &camlArray__7;
    gvar_8076374 = &camlArray__6;
    gvar_8076388 = &camlArray__5;
    gvar_807638C = &camlArray__4;
    int v0 = caml_alloc1(param0, param1);
    *(int*)v0 = 0x400;
    *(int*)(v0 + 4) = "Array.Bottom";
    gvar_80763A4 = (int*)(v0 + 4);
    gvar_8076390 = &camlArray__2;
    gvar_80763A8 = 11;
    gvar_8076394 = &camlArray__1;
    gvar_8076398 = gvar_8076394;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__fill_1070(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    __SyntheticTypeUnknown v2;
    int* ptr0;
    int v3;
    int v4;
    char v5;
    int v6 = param0;
    while(ptr0 != 1) {
        int v7 = v4;
        int* ptr1 = *(unsigned int*)(ptr0 + 1);
        int v8 = *ptr0;
        int v9 = *ptr0;
        int v10 = 1;
        int v11 = *(int*)(v8 - 4);
        int v12 = (((unsigned char)v11 != 254 ? v11 >>> 9: v11 >>> 10) | 0x1) - 2;
        if(v12 >= 1) {
            do {
                int v13 = v9;
                if(*(char*)(v13 - 4) != 254) {
                    v1 = *(unsigned int*)(v10 * 2 + v13 - 2);
                }
                else {
                    while(1) {
                        v0 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v0) {
                            break;
                        }
                        else {
                            caml_call_gc(v13, param1);
                        }
                    }
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    v2[v5 - 1] = *(double*)(v10 * 4 + v13 - 4);
                    *(long long*)v1 = v2[v5 - 1];
                }
                int v14 = v10 + v7 - 1;
                param1 = *(int*)(v6 + 12);
                if(*(char*)(param1 - 4) != 254) {
                    caml_modify((unsigned int*)(v14 * 2 + param1 - 2), v1);
                }
                else {
                    v2[v5 - 1] = *(double*)v1;
                    *(long long*)(v14 * 4 + param1 - 4) = v2[v5 - 1];
                }
                v3 = v10;
                v10 += 2;
            }
            while(v3 != v12);
        }
        int v15 = *(int*)(v9 - 4);
        v4 = (((unsigned char)v15 != 254 ? v15 >>> 9: v15 >>> 10) | 0x1) + v7 - 1;
        ptr0 = ptr1;
        param0 = v6;
    }
    return 1;
}

int camlArray__fill_1087(int param0, int param1) {
    int v0;
    int v1;
    unsigned int v2 = (unsigned int)param1;
    if(v1 >= 1 && param0 >= 1) {
        param1 = *(int*)(v0 - 4);
        if((((unsigned char)param1 != 254 ? param1 >>> 9: param1 >>> 10) | 0x1) - param0 + 1 >= v1) {
            int v3 = v1;
            v1 = param0 + v1 - 3;
            if(v1 >= v3) {
                do {
                    if(*(char*)(v0 - 4) != 254) {
                        caml_modify((unsigned int*)(v3 * 2 + v0 - 2), v2);
                    }
                    else {
                        *(long long*)(v3 * 4 + v0 - 4) = *(double*)v2;
                    }
                    param0 = v3;
                    v3 += 2;
                }
                while(param0 != v1);
            }
            return 1;
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlArray__fill_1135(int param0) {
    int v0;
    int v1;
    unsigned int* ptr0;
    while(1) {
        int v2 = v1;
        v0 = param0;
        if(ptr0 == 1) {
            break;
        }
        else {
            unsigned int* ptr1 = *(ptr0 + 1);
            unsigned int v3 = *ptr0;
            int v4 = *(int*)(v0 + 12);
            if(*(char*)(v4 - 4) != 254) {
                caml_modify((unsigned int*)(v2 * 2 + v4 - 2), v3);
            }
            else {
                *(long long*)(v2 * 4 + v4 - 4) = *(double*)v3;
            }
            v1 = v2 + 2;
            ptr0 = ptr1;
            param0 = v0;
        }
    }
    return *(int*)(v0 + 12);
}

int camlArray__find_init_1077() {
    int* ptr0;
    double* ptr1;
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    unsigned int* ptr2;
    do {
        unsigned int* ptr3 = ptr2;
        if(ptr3 == 1) {
            return &camlArray__36;
        }
        ptr2 = *(ptr3 + 1);
        ptr1 = *ptr3;
        int v3 = *(int*)((char*)ptr1 - 4);
        v1 = ((unsigned char)v3 != 254 ? v3 >>> 9: v3 >>> 10) | 0x1;
    }
    while(v1 <= 1);
    if(*(char*)((char*)ptr1 - 4) == 254) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)ptr1, v1);
            }
        }
        *ptr0 = 2301;
        v0[v2 - 1] = *ptr1;
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
    int v5;
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
    ptr1[0] = v2;
    int v6 = 1;
    int v7 = *(int*)(param0 - 4);
    int v8 = (((unsigned char)v7 != 254 ? v7 >>> 9: v7 >>> 10) | 0x1) - 2;
    if(v8 >= 1) {
        int v9 = v8;
        int v10 = 1;
        unsigned int* ptr2 = ptr1;
        int v11 = param0;
        int* ptr3 = (int*)v3;
        do {
            if(*(char*)(v11 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v11, v6);
                    }
                }
                *ptr0 = 2301;
                v1[v4 - 1] = *(double*)(v6 * 4 + v11 - 4);
                *(long long*)(ptr0 + 1) = v1[v4 - 1];
            }
            caml_apply2(ptr3);
            ptr1 = ptr2;
            caml_modify(ptr1, v3);
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
    char v3;
    unsigned int v4;
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
    int v5 = *(int*)(v4 - 4);
    int v6 = (((unsigned char)v5 != 254 ? v5 >>> 9: v5 >>> 10) | 0x1) - 2;
    if(v6 >= 1) {
        int v7 = v6;
        unsigned int* ptr2 = ptr1;
        unsigned int v8 = v4;
        int* ptr3 = (int*)v2;
        do {
            if(*(char*)(v8 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v6, (int)v2);
                    }
                }
                *ptr0 = 2301;
                v1[v3 - 1] = *(double*)(v6 * 4 + v8 - 4);
                *(long long*)(ptr0 + 1) = v1[v3 - 1];
            }
            caml_apply2(ptr3);
            ptr1 = ptr2;
            /*BAD_CALL!*/ caml_modify(ptr1, v2);
            v6 = v7 - 2;
            v7 -= 2;
        }
        while(v7 != -1);
    }
    return ptr1[0];
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlArray__init_1037() {
    int v0;
    int* ptr0;
    int* result;
    if(ptr0 == 1) {
        return (int*)&camlArray__34;
    }
    int* ptr1 = result;
    int* ptr2 = ptr0;
    int v1 = *result((int)ptr0, (int)ptr1);
    int* ptr3 = ptr2;
    result = (int*)caml_c_call();
    if((int)(int*)((char*)ptr2 - 2) >= 3) {
        int* ptr4 = (int*)((char*)ptr2 - 2);
        int v2 = 3;
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

int camlArray__isortto_1209(int param0, int param1) {
    unsigned int v0;
    double* ptr0;
    int* ptr1;
    unsigned int v1;
    unsigned int v2;
    long long* ptr2;
    unsigned int v3;
    unsigned int* ptr3;
    __SyntheticTypeUnknown v4;
    int v5;
    char v6;
    unsigned int* ptr4;
    long long* ptr5;
    int v7;
    int v8;
camlArray__isortto_1209:
    while(1) {
        ptr3 = ptr3 - 10;
        int* ptr6 = (int*)0x1;
        if(param1 - 2 < 1) {
            break;
        }
        else {
            *(int*)(ptr3 + 4) = param1 - 2;
            *(int*)(ptr3 + 3) = 1;
            *(ptr3 + 6) = ptr4;
            *(int*)(ptr3 + 5) = param0;
            *(ptr3 + 7) = ptr5;
            *ptr3 = v7;
        loc_805150D:
            do {
                int* ptr7 = (int*)((char*)(*ptr3 + (int)ptr6) - 1);
                *(ptr3 + 1) = (int*)((char*)(*ptr3 + (int)ptr6) - 1);
                int v9 = *(int*)(*(int*)(ptr3 + 6) + 16);
                *(int*)(ptr3 + 2) = *(int*)(v9 - 4);
                if((unsigned char)*(int*)(ptr3 + 2) == 254) {
                    v3 = (unsigned int)(*(int*)(ptr3 + 2) >>> 10);
                }
                else if((unsigned int)(*(int*)(ptr3 + 2) >>> 9) <= (unsigned int)ptr7) {
                    goto loc_80517D8;
                }
                else {
                    ptr2 = *(unsigned int*)((char*)((int)(int*)((int)ptr7 * 2) + v9) - 2);
                    *(ptr3 + 1) = *(unsigned int*)((char*)((int)(int*)((int)ptr7 * 2) + v9) - 2);
                    goto loc_8051595;
                }
                if((unsigned int)ptr7 < v3) {
                    while(1) {
                        v2 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v2) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_80517A6;
                            /*BAD_CALL!*/ caml_call_gc(v9, (int)v3);
                        }
                    }
                    ptr2 = (long long*)(v2 + 4);
                    *(int*)((char*)ptr2 - 4) = 2301;
                    v4[v6 - 1] = *(double*)(*(int*)(ptr3 + 1) * 4 + v9 - 4);
                    *ptr2 = v4[v6 - 1];
                    *(ptr3 + 1) = ptr2;
                loc_8051595:
                    while(1) {
                        v1 = caml_young_ptr - 8;
                        caml_young_ptr -= 8;
                        if(caml_young_limit <= v1) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_805179C;
                            /*BAD_CALL!*/ caml_call_gc(v9, (int)ptr2);
                        }
                    }
                    ptr4 = (unsigned int*)(v1 + 4);
                    *(ptr3 + 2) = (unsigned int*)(v1 + 4);
                    *(int*)(ptr4 - 1) = 0x400;
                    *ptr4 = (int*)((char*)(*(int*)(ptr3 + 5) + (int)ptr6) - 3);
                    while(*(int*)(ptr3 + 5) <= *ptr4) {
                        unsigned int v10 = *ptr4;
                        int v11 = *(int*)((char*)ptr5 - 4);
                        if((unsigned char)v11 != 254) {
                            if((unsigned int)(v11 >>> 9) <= v10) {
                                goto loc_80517CE;
                            }
                            else {
                                goto loc_8051638;
                            }
                        }
                        if((unsigned int)(v11 >>> 10) <= v10) {
                            goto loc_80517C9;
                        }
                        else {
                            while(1) {
                                ptr1 = (int*)(caml_young_ptr - 12);
                                caml_young_ptr -= 12;
                                if(caml_young_limit <= (unsigned int)ptr1) {
                                    break;
                                }
                                else {
                                    --ptr3;
                                    *ptr3 = &loc_8051792;
                                    /*BAD_CALL!*/ caml_call_gc((int)v10, 254);
                                }
                            }
                            *ptr1 = 2301;
                            v4[v6 - 1] = *(double*)((int*)(v10 * 4 + (int)ptr5) - 1);
                            *(long long*)(ptr1 + 1) = v4[v6 - 1];
                        loc_8051638:
                            int v12 = *(int*)(*(int*)(ptr3 + 6) + 12);
                            --ptr3;
                            *ptr3 = &loc_8051644;
                            /*BAD_CALL!*/ caml_apply2(v12);
                            if(v5 <= 1) {
                                break;
                            }
                            else {
                                ptr4 = *(ptr3 + 2);
                                unsigned int v13 = *ptr4;
                                ptr5 = *(ptr3 + 7);
                                int v14 = *(int*)((char*)ptr5 - 4);
                                if((unsigned char)v14 != 254) {
                                    if((unsigned int)(v14 >>> 9) <= v13) {
                                        goto loc_80517C4;
                                    }
                                    else {
                                        ptr0 = *(unsigned int*)((char*)(v13 * 2 + (int)ptr5) - 2);
                                        goto loc_80516B6;
                                    }
                                }
                                if((unsigned int)(v14 >>> 10) <= v13) {
                                    goto loc_80517BF;
                                }
                                else {
                                    while(1) {
                                        v0 = caml_young_ptr - 12;
                                        caml_young_ptr -= 12;
                                        if(caml_young_limit <= v0) {
                                            break;
                                        }
                                        else {
                                            --ptr3;
                                            *ptr3 = &loc_8051788;
                                            /*BAD_CALL!*/ caml_call_gc((int)v13, 254);
                                        }
                                    }
                                    ptr0 = (double*)(v0 + 4);
                                    *(int*)((char*)ptr0 - 4) = 2301;
                                    *ptr0 = *(double*)((int*)(v13 * 4 + (int)ptr5) - 1);
                                    v6 = 7;
                                loc_80516B6:
                                    unsigned int v15 = (unsigned int)(*ptr4 + 2);
                                    int v16 = *(int*)((char*)ptr5 - 4);
                                    if((unsigned char)v16 != 254) {
                                        if((unsigned int)(v16 >>> 9) <= v15) {
                                            goto loc_80517BA;
                                        }
                                        else {
                                            --ptr3;
                                            *ptr3 = ptr0;
                                            --ptr3;
                                            *ptr3 = (int*)((char*)(v15 * 2 + (int)ptr5) - 2);
                                            --ptr3;
                                            *ptr3 = &loc_80516E2;
                                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(ptr3 + 2));
                                            ptr3 += 2;
                                            goto loc_8051701;
                                        }
                                    }
                                    if((unsigned int)(v16 >>> 10) <= v15) {
                                        goto loc_80517B5;
                                    }
                                    else {
                                        *(long long*)((int*)(v15 * 4 + (int)ptr5) - 1) = *ptr0;
                                        v6 = 7;
                                    loc_8051701:
                                        *ptr4 = *ptr4 - 2;
                                    }
                                }
                            }
                        }
                    }
                    unsigned int v17 = (unsigned int)(**(ptr3 + 2) + 2);
                    ptr5 = *(ptr3 + 7);
                    int v18 = *(int*)((char*)ptr5 - 4);
                    if((unsigned char)v18 != 254) {
                        if((unsigned int)(v18 >>> 9) <= v17) {
                            goto loc_80517B0;
                        }
                        else {
                            int v19 = *(int*)(ptr3 + 1);
                            --ptr3;
                            *ptr3 = v19;
                            --ptr3;
                            *ptr3 = (int*)((char*)(v17 * 2 + (int)ptr5) - 2);
                            --ptr3;
                            *ptr3 = &loc_8051746;
                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(ptr3 + 2));
                            ptr3 += 2;
                            goto loc_8051761;
                        }
                    }
                    if((unsigned int)(v18 >>> 10) > v17) {
                        v4[v6 - 1] = **(ptr3 + 1);
                        *(long long*)((int*)(v17 * 4 + (int)ptr5) - 1) = v4[v6 - 1];
                    loc_8051761:
                        int v20 = *(int*)(ptr3 + 3);
                        param0 = *(int*)(ptr3 + 3);
                        ptr6 = (int*)(v20 + 2);
                        *(ptr3 + 3) = (int*)(v20 + 2);
                        if(*(int*)(ptr3 + 4) != param0) {
                            goto loc_805150D;
                        }
                        else {
                            break camlArray__isortto_1209;
                        }
                    }
                    else {
                        --ptr3;
                        *ptr3 = &loc_80517B0;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517B0:
                        --ptr3;
                        *ptr3 = &loc_80517B5;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517B5:
                        --ptr3;
                        *ptr3 = &loc_80517BA;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517BA:
                        --ptr3;
                        *ptr3 = &loc_80517BF;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517BF:
                        --ptr3;
                        *ptr3 = &loc_80517C4;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517C4:
                        --ptr3;
                        *ptr3 = &loc_80517C9;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517C9:
                        --ptr3;
                        *ptr3 = &loc_80517CE;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    loc_80517CE:
                        --ptr3;
                        *ptr3 = &loc_80517D3;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                    }
                }
                --ptr3;
                *ptr3 = &loc_80517D8;
                /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
            loc_80517D8:
                --ptr3;
                *ptr3 = &loc_80517DD;
                v7 = /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                unsigned int* ptr8 = ptr4;
                ptr3 -= 6;
                if(param1 <= 11) {
                    ptr4 = *(ptr8 + 5);
                    ptr3 += 6;
                    continue camlArray__isortto_1209;
                }
                else {
                    *ptr3 = ptr8;
                    *(int*)(ptr3 + 2) = v8;
                    *(ptr3 + 5) = ptr5;
                    *(int*)(ptr3 + 4) = v7;
                    int v21 = param1 >> 1;
                    if(v21 < 0) {
                        ++v21;
                    }
                    *(int*)(ptr3 + 1) = (v21 >> 1) * 2 + 1;
                    *(int*)(ptr3 + 3) = param1 - ((v21 >> 1) * 2 + 1) + 1;
                    --ptr3;
                    *ptr3 = &loc_805183F;
                    /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr3 + 1));
                    --ptr3;
                    *ptr3 = &loc_805185A;
                    /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr3 + 1));
                    *ptr3 = *(int*)(*ptr3 + 16);
                    int v22 = *(int*)(ptr3 + 1);
                    unsigned int v23 = *(ptr3 + 2);
                    int v24 = *(int*)(ptr3 + 5);
                    caml_extra_params = v23;
                    gvar_807B7E0 = *ptr3;
                    /*BAD_CALL!*/ camlArray__merge_1191(v24, v22 + v23 - 1);
                }
            }
            while(1);
        }
    }
    jump *(int*)(ptr3 + 10);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__iter_1101() {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    int* ptr1;
    char v1;
    int v2;
    int v3 = 1;
    int v4 = *(int*)(v2 - 4);
    int v5 = (((unsigned char)v4 != 254 ? v4 >>> 9: v4 >>> 10) | 0x1) - 2;
    if(v5 >= 1) {
        int v6 = v5;
        int v7 = 1;
        int v8 = v2;
        int* ptr2 = ptr1;
        do {
            if(*(char*)(v8 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v3, v5);
                    }
                }
                *ptr0 = 2301;
                v0[v1 - 1] = *(double*)(v3 * 4 + v8 - 4);
                *(long long*)(ptr0 + 1) = v0[v1 - 1];
            }
            *ptr2();
            v2 = v7;
            v3 = v7 + 2;
            v7 += 2;
        }
        while(v2 != v6);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__iteri_1111() {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    int* ptr1;
    char v1;
    int v2;
    int v3 = 1;
    int v4 = *(int*)(v2 - 4);
    int v5 = (((unsigned char)v4 != 254 ? v4 >>> 9: v4 >>> 10) | 0x1) - 2;
    if(v5 >= 1) {
        int v6 = v5;
        int v7 = 1;
        int v8 = v2;
        int* ptr2 = ptr1;
        do {
            if(*(char*)(v8 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v3, v8);
                    }
                }
                *ptr0 = 2301;
                v0[v1 - 1] = *(double*)(v3 * 4 + v8 - 4);
                *(long long*)(ptr0 + 1) = v0[v1 - 1];
            }
            caml_apply2(ptr2);
            v2 = v7;
            v3 = v7 + 2;
            v7 += 2;
        }
        while(v2 != v6);
    }
    return 1;
}

int camlArray__list_length_1126() {
    int result;
    int v0;
    while(v0 != 1) {
        v0 = *(int*)(v0 + 4);
        result = result + 2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__loop_1201(int param0, unsigned int param1) {
    unsigned int v0;
    int* ptr0;
    int* ptr1;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    int result;
    unsigned int v5;
    unsigned int v6;
    int v7;
    while(1) {
        int v8 = v4;
        unsigned int v9 = v5;
        int v10 = param0;
        unsigned int v11 = param1;
        unsigned int v12 = v6;
        int v13 = v7;
        caml_apply2(*(int**)(v7 + 12));
        v7 = v13;
        if(result <= 1) {
            int v14 = *(int*)(v7 + 24);
            int v15 = *(int*)(v14 - 4);
            if((unsigned char)v15 != 254) {
                v3 = v12;
                if((unsigned int)(v15 >>> 9) <= v3) {
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return;
                }
                caml_modify((unsigned int*)(v3 * 2 + v14 - 2), v9);
                goto loc_805038D;
            }
            else {
                v3 = v12;
            }
            if((unsigned int)(v15 >>> 10) <= v3) {
                caml_ml_array_bound_error();
                /*BAD_CALL!*/ caml_ml_array_bound_error();
                return;
            }
            *(long long*)(v3 * 4 + v14 - 4) = *(double*)v9;
        loc_805038D:
            int v16 = v8 + 2;
            if(*(int*)(v7 + 28) <= v16) {
                camlArray__blit_1093(*(int*)(v7 + 24), (int)(v3 + 2));
                return result;
            }
            v2 = *(int*)(v7 + 16);
            v1 = *(int*)(v2 - 4);
            if((unsigned char)v1 != 254) {
                if((unsigned int)(v1 >>> 9) <= (unsigned int)v16) {
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return;
                }
                v5 = *(unsigned int*)(v16 * 2 + v2 - 2);
                goto loc_80503F8;
            }
            if((unsigned int)(v1 >>> 10) <= (unsigned int)v16) {
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                /*BAD_CALL!*/ caml_ml_array_bound_error();
                return;
            }
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(v16, v1);
                }
            }
            *ptr1 = 2301;
            *(long long*)(unsigned int)(ptr1 + 1) = *(double*)(v16 * 4 + v2 - 4);
            v5 = (unsigned int)(ptr1 + 1);
        loc_80503F8:
            v6 = v3 + 2;
            v4 = v16;
            param0 = v10;
            param1 = v11;
        }
        else {
            int v17 = *(int*)(v7 + 24);
            int v18 = *(int*)(v17 - 4);
            v3 = v12;
            if((unsigned char)v18 != 254) {
                if((unsigned int)(v18 >>> 9) <= v3) {
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return;
                }
                ptr0 = caml_modify((unsigned int*)(v3 * 2 + v17 - 2), v11);
                goto loc_805048D;
            }
            if((unsigned int)(v18 >>> 10) <= v3) {
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                /*BAD_CALL!*/ caml_ml_array_bound_error();
                return;
            }
            *(long long*)(v3 * 4 + v17 - 4) = *(double*)v11;
        loc_805048D:
            param0 = v10 + 2;
            if(*(int*)(v7 + 32) <= param0) {
                camlArray__blit_1093(*(int*)(v7 + 24), (int)(v3 + 2));
                return (int)ptr0;
            }
            v2 = *(int*)(v7 + 20);
            int v19 = *(int*)(v2 - 4);
            if((unsigned char)v19 != 254) {
                if((unsigned int)(v19 >>> 9) <= (unsigned int)param0) {
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return;
                }
                param1 = *(unsigned int*)(param0 * 2 + v2 - 2);
                goto loc_80504EE;
            }
            if((unsigned int)(v19 >>> 10) <= (unsigned int)param0) {
                break;
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc(param0, v19);
                    }
                }
                param1 = v0 + 4;
                *(int*)(param1 - 4) = 2301;
                *(long long*)param1 = *(double*)(param0 * 4 + v2 - 4);
            loc_80504EE:
                v6 = v3 + 2;
                v4 = v8;
                v5 = v9;
            }
        }
    }
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__make_matrix_1042(int param0) {
    int v0;
    int result = caml_c_call();
    if(v0 - 2 >= 1) {
        int v1 = v0 - 2;
        int v2 = 1;
        int v3 = result;
        do {
            unsigned int v4 = (unsigned int)caml_c_call();
            result = v3;
            caml_modify((unsigned int*)(v2 * 2 + result - 2), v4);
            v2 += 2;
        }
        while(v1 + 2 != v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__map_1105() {
    double* ptr0;
    int* ptr1;
    int* ptr2;
    __SyntheticTypeUnknown v0;
    int* ptr3;
    char v1;
    double* ptr4;
    int v2;
    int v3 = *(int*)((char*)ptr4 - 4);
    int v4 = ((unsigned int)(unsigned char)v3 != 254 ? v3 >>> 9: v3 >>> 10) | 0x1;
    if(v4 == 1) {
        return &camlArray__24;
    }
    int v5 = v4;
    double* ptr5 = ptr4;
    int* ptr6 = ptr3;
    if(*(char*)((char*)ptr4 - 4) == 254) {
        while(1) {
            ptr2 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr2) {
                break;
            }
            else {
                caml_call_gc((int)ptr3, (unsigned int)(unsigned char)v3);
            }
        }
        *ptr2 = 2301;
        v0[v1 - 1] = *ptr4;
        *(long long*)(ptr2 + 1) = v0[v1 - 1];
    }
    void* ptr7 = (void*)*ptr3();
    int v6 = v5;
    int result = caml_c_call();
    ptr4 = (double*)0x3;
    if(v5 - 2 >= 3) {
        int v7 = v5 - 2;
        double* ptr8 = (double*)0x3;
        v5 = result;
        do {
            if(*(char*)((char*)ptr5 - 4) == 254) {
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr5, v2);
                    }
                }
                *ptr1 = 2301;
                *(long long*)(ptr1 + 1) = *(double*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr5) - 1);
            }
            unsigned int v8 = (unsigned int)*ptr6();
            result = v5;
            if(*(char*)(result - 4) != 254) {
                ptr0 = ptr8;
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr0 * 2) + result) - 2), v8);
            }
            else {
                ptr0 = ptr8;
                *(long long*)((int*)((int)(int*)((int)ptr0 * 4) + result) - 1) = *(double*)v8;
            }
            ptr4 = (double*)((char*)ptr0 + 2);
            ptr8 = (double*)((char*)ptr0 + 2);
        }
        while(v7 + 2 != ptr8);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
double* camlArray__mapi_1115() {
    int v0;
    int* ptr0;
    int* ptr1;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    char v3;
    double* result;
    int v4;
    int v5 = *(int*)((char*)result - 4);
    double* ptr2 = (double*)(((unsigned int)(unsigned char)v5 != 254 ? v5 >>> 9: v5 >>> 10) | 0x1);
    if(ptr2 == 1) {
        return (double*)&camlArray__23;
    }
    double* ptr3 = ptr2;
    double* ptr4 = result;
    int* ptr5 = (int*)v2;
    if(*(char*)((char*)result - 4) == 254) {
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc((int)v2, (unsigned int)(unsigned char)v5);
            }
        }
        *ptr1 = 2301;
        v1[v3 - 1] = *result;
        *(long long*)(ptr1 + 1) = v1[v3 - 1];
    }
    caml_apply2((int*)v2);
    unsigned int v6 = v2;
    double* ptr6 = ptr3;
    result = (double*)caml_c_call();
    int v7 = 3;
    if((int)(int*)((char*)ptr3 - 2) >= 3) {
        int* ptr7 = (int*)((char*)ptr3 - 2);
        int v8 = 3;
        ptr3 = result;
        do {
            if(*(char*)((char*)ptr4 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr4, v4);
                    }
                }
                *ptr0 = 2301;
                *(long long*)(ptr0 + 1) = *(double*)((int*)(v7 * 4 + (int)ptr4) - 1);
            }
            caml_apply2(ptr5);
            result = ptr3;
            if(*(char*)((char*)result - 4) != 254) {
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
        while((int*)((char*)ptr7 + 2) != v8);
    }
    return result;
}

long long* camlArray__maxson_1155(long long* param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    unsigned int* ptr6;
    long long* ptr7;
    unsigned int* ptr8;
    int* ptr9;
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    long long* ptr10;
    unsigned int* ptr11;
    long long* result = (long long*)((int)ptr11 * 3);
    while(1) {
        ptr9 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr9) {
            break;
        }
        else {
            caml_call_gc((int)param0, (int)ptr10);
        }
    }
    *ptr9 = 0x400;
    *(unsigned int*)(ptr9 + 1) = (long long*)((int)ptr11 * 3);
    if((int)(int*)((char*)((int)ptr11 * 3) + 4) < (int)ptr10) {
        ptr8 = (unsigned int*)(ptr9 + 1);
        ptr7 = param0;
        ptr6 = *(unsigned int*)(param0 + 2);
        int v3 = *(int*)(ptr6 - 1);
        if((unsigned char)v3 != 254) {
            if((unsigned int)(int*)((char*)((int)ptr11 * 3) + 2) >= (unsigned int)(v3 >>> 9)) {
                goto loc_8050C57;
            }
            else {
                goto loc_8050924;
            }
        }
        else if((unsigned int)(int*)((char*)((int)ptr11 * 3) + 2) >= (unsigned int)(v3 >>> 10)) {
            goto loc_8050C52;
        }
        else {
            goto loc_8050900;
        }
    }
    else {
        ptr8 = ptr11;
        ptr7 = ptr10;
        if((int)(int*)((char*)((int)ptr11 * 3) + 2) < (int)ptr10) {
            int v4 = *(int*)(param0 + 2);
            ptr6 = *(unsigned int*)(v4 - 4);
            if((unsigned char)ptr6 != 254) {
                if((unsigned int)(long long*)((char*)((int)ptr11 * 3) + 2) >= (unsigned int)(int*)((int)ptr6 >>> 9)) {
                    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                    goto loc_8050C34;
                }
                else {
                    goto loc_8050B18;
                }
            }
            if((unsigned int)(long long*)((char*)((int)ptr11 * 3) + 2) >= (unsigned int)(int*)((int)ptr6 >>> 10)) {
                caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                goto loc_8050C34;
            }
            else {
                while(1) {
                    ptr5 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr5) {
                        break;
                    }
                    else {
                        caml_call_gc((int)param0, v4);
                    }
                }
                *ptr5 = 2301;
                v0[v2 - 1] = *(double*)((int*)((int)(int*)((int)(long long*)((char*)((int)ptr11 * 3) + 2) * 4) + v4) - 1);
                *(long long*)(ptr5 + 1) = v0[v2 - 1];
            loc_8050B18:
                int v5 = *(int*)(param0 + 2);
                ptr6 = *(unsigned int*)(v5 - 4);
                if((unsigned char)ptr6 != 254) {
                    if((unsigned int)(long long*)((int)ptr11 * 3) >= (unsigned int)(int*)((int)ptr6 >>> 9)) {
                        caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                        caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                        caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                        goto loc_8050C34;
                    }
                    else {
                        goto loc_8050B75;
                    }
                }
                if((unsigned int)(long long*)((int)ptr11 * 3) >= (unsigned int)(int*)((int)ptr6 >>> 10)) {
                    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
                    goto loc_8050C34;
                }
                else {
                    while(1) {
                        ptr4 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= (unsigned int)ptr4) {
                            break;
                        }
                        else {
                            caml_call_gc((int)param0, v5);
                        }
                    }
                    *ptr4 = 2301;
                    v0[v2 - 1] = *(double*)((int*)((int)(int*)((int)ptr11 * 12) + v5) - 1);
                    *(long long*)(ptr4 + 1) = v0[v2 - 1];
                loc_8050B75:
                    caml_apply2(*(int*)((char*)param0 + 12));
                }
            }
            if((int)ptr10 < 1) {
                return (long long*)((char*)result + 2);
            }
        }
    }
    if((int)ptr7 > (int)result) {
        return result;
    }
    while(1) {
        int* ptr12 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr12) {
            *ptr12 = 0x800;
            *(unsigned int*)(ptr12 + 1) = gvar_80763A4;
            *(unsigned int*)(ptr12 + 2) = ptr8;
            caml_raise_exn();
        }
        caml_call_gc((int)param0, (int)ptr10);
    }
loc_8050900:
    while(1) {
        ptr3 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr3) {
            break;
        }
        else {
            caml_call_gc((int)param0, (int)(int*)((char*)((int)ptr11 * 3) + 2));
        }
    }
    *ptr3 = 2301;
    v0[v2 - 1] = *(double*)((int*)((int)(int*)((int)(int*)((char*)((int)ptr11 * 3) + 2) * 4) + (int)ptr6) - 1);
    *(long long*)(ptr3 + 1) = v0[v2 - 1];
loc_8050924:
    int v6 = *(int*)(param0 + 2);
    int v7 = *(int*)(v6 - 4);
    if((unsigned char)v7 != 254) {
        if((unsigned int)(long long*)((int)ptr11 * 3) >= (unsigned int)(v7 >>> 9)) {
            goto loc_8050C4D;
        }
        else {
            goto loc_8050987;
        }
    }
    if((unsigned int)(long long*)((int)ptr11 * 3) < (unsigned int)(v7 >>> 10)) {
        while(1) {
            ptr2 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr2) {
                break;
            }
            else {
                caml_call_gc((int)param0, v6);
            }
        }
        *ptr2 = 2301;
        v0[v2 - 1] = *(double*)((int*)((int)(int*)((int)ptr11 * 12) + v6) - 1);
        *(long long*)(ptr2 + 1) = v0[v2 - 1];
    loc_8050987:
        caml_apply2(*(int*)((char*)param0 + 12));
        if((int)ptr10 < 1) {
            *ptr8 = (int*)((char*)result + 2);
        }
        int v8 = *(int*)(ptr7 + 2);
        int v9 = *(int*)(v8 - 4);
        if((unsigned char)v9 != 254) {
            if((unsigned int)(int*)((char*)result + 4) >= (unsigned int)(v9 >>> 9)) {
                goto loc_8050C43;
            }
            else {
                goto loc_8050A08;
            }
        }
        if((unsigned int)(int*)((char*)result + 4) < (unsigned int)(v9 >>> 10)) {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc((int)(int*)((char*)result + 4), v8);
                }
            }
            *ptr1 = 2301;
            *(long long*)(ptr1 + 1) = *(double*)((int*)((int)(int*)((int)(int*)((char*)result + 4) * 4) + v8) - 1);
        loc_8050A08:
            unsigned int v10 = *ptr8;
            int v11 = *(int*)(ptr7 + 2);
            int v12 = *(int*)(v11 - 4);
            if((unsigned char)v12 != 254) {
                if((unsigned int)(v12 >>> 9) <= v10) {
                    goto loc_8050C39;
                }
                else {
                    goto loc_8050A77;
                }
            }
            if((unsigned int)(v12 >>> 10) > v10) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v11, (int)v10);
                    }
                }
                *ptr0 = 2301;
                *(long long*)(ptr0 + 1) = *(double*)(v10 * 4 + v11 - 4);
            loc_8050A77:
                caml_apply2(*(int*)((char*)ptr7 + 12));
                if((int)ptr10 < 1) {
                    *ptr8 = (int*)((char*)result + 4);
                }
                return *ptr8;
            }
        loc_8050C34:
            caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
        loc_8050C39:
            caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
        }
        caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
    loc_8050C43:
        caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
    }
    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
loc_8050C4D:
    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
loc_8050C52:
    caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
loc_8050C57:
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr7, (int)ptr8, (int)result, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__merge_1191(int param0, int param1) {
    unsigned int v0;
    double* ptr0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    long long* ptr1;
    unsigned int v4;
    unsigned int v5;
    unsigned int v6;
    long long* ptr2;
    unsigned int v7;
    unsigned int* ptr3;
    unsigned int v8;
    unsigned int* ptr4;
    __SyntheticTypeUnknown v9;
    int v10;
    char v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
camlArray__merge_1191:
    while(1) {
        ptr4 = ptr4 - 7;
        *ptr4 = v17;
        *(int*)(ptr4 + 1) = param0;
        *(int*)(ptr4 + 4) = param1;
        *(int*)(ptr4 + 2) = v16;
        *(ptr4 + 3) = caml_extra_params;
        unsigned int v18 = gvar_807B7E0;
        v8 = *ptr4;
        int v19 = v8 + v13 - 1;
        ptr3 = (unsigned int*)(*(int*)(ptr4 + 4) + v14 - 1);
        while(1) {
            v7 = caml_young_ptr - 40;
            caml_young_ptr = v7;
            if(caml_young_limit <= v7) {
                break;
            }
            else {
                --ptr4;
                *ptr4 = &loc_80514C4;
                /*BAD_CALL!*/ caml_call_gc((int)v8, v19);
            }
        }
        int* ptr5 = (int*)(v7 + 4);
        *(ptr5 - 1) = 9463;
        *ptr5 = &caml_curry5;
        *(ptr5 + 1) = 11;
        *(ptr5 + 2) = &camlArray__loop_1201;
        *(ptr5 + 3) = *(int*)(v18 + 12);
        *(ptr5 + 4) = *(int*)(v18 + 16);
        ptr2 = *(ptr4 + 1);
        *(unsigned int*)(ptr5 + 5) = ptr2;
        *(ptr5 + 6) = *(int*)(ptr4 + 2);
        *(ptr5 + 7) = v19;
        *(unsigned int*)(ptr5 + 8) = ptr3;
        int v20 = *(int*)((char*)ptr2 - 4);
        if((unsigned char)v20 != 254) {
            if((unsigned int)(v20 >>> 9) <= *(ptr4 + 4)) {
                goto loc_80514D8;
            }
            else {
                v6 = *(unsigned int*)((char*)(*(int*)(ptr4 + 4) * 2 + (int)ptr2) - 2);
                goto loc_805144A;
            }
        }
        if((unsigned int)(v20 >>> 10) > *(ptr4 + 4)) {
            while(1) {
                v5 = caml_young_ptr - 12;
                caml_young_ptr = v5;
                if(caml_young_limit <= v5) {
                    break;
                }
                else {
                    --ptr4;
                    *ptr4 = &loc_80514BA;
                    /*BAD_CALL!*/ caml_call_gc((int)v8, 254);
                }
            }
            v6 = v5 + 4;
            *(int*)(v6 - 4) = 2301;
            char v21 = v11 - 1;
            v9[v21] = *(double*)((int*)(*(int*)(ptr4 + 4) * 4 + (int)ptr2) - 1);
            *(long long*)v6 = v9[v21];
            v11 = v21 + 1;
        loc_805144A:
            ptr3 = *(unsigned int*)(v18 + 16);
            int v22 = *(int*)(ptr3 - 1);
            ptr2 = (unsigned int)(v22 & 0xFF);
            if(ptr2 == 254) {
                if((unsigned int)(v22 >>> 10) > v8) {
                    goto loc_805147C;
                }
                else {
                    --ptr4;
                    *ptr4 = &loc_80514CE;
                    /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                }
            }
            else if((unsigned int)(v22 >>> 9) > v8) {
                goto loc_805149E;
            }
            --ptr4;
            *ptr4 = &loc_80514D3;
            /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
        }
        --ptr4;
        *ptr4 = &loc_80514D8;
        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
    loc_80514D8:
        --ptr4;
        *ptr4 = &loc_80514DD;
        int v23 = /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
        unsigned int* ptr6 = ptr3;
        ptr4 -= 10;
        ptr5 = (int*)0x1;
        int v24 = v12 - 2;
        if(v24 < 1) {
            break;
        }
        else {
            *(int*)(ptr4 + 4) = v24;
            *(int*)(ptr4 + 3) = 1;
            *(ptr4 + 6) = ptr6;
            *(int*)(ptr4 + 5) = v15;
            *(ptr4 + 7) = ptr2;
            *ptr4 = v23;
        loc_805150D:
            do {
                int* ptr7 = (int*)((char*)(*ptr4 + (int)ptr5) - 1);
                *(ptr4 + 1) = ptr7;
                int v25 = *(int*)(*(int*)(ptr4 + 6) + 16);
                *(int*)(ptr4 + 2) = *(int*)(v25 - 4);
                if((unsigned char)*(int*)(ptr4 + 2) == 254) {
                    v4 = (unsigned int)(*(int*)(ptr4 + 2) >>> 10);
                }
                else if((unsigned int)(*(int*)(ptr4 + 2) >>> 9) <= (unsigned int)ptr7) {
                    goto loc_80517D8;
                }
                else {
                    ptr1 = *(unsigned int*)((char*)((int)(int*)((int)ptr7 * 2) + v25) - 2);
                    *(ptr4 + 1) = ptr1;
                    goto loc_8051595;
                }
                if((unsigned int)ptr7 < v4) {
                    while(1) {
                        v3 = caml_young_ptr - 12;
                        caml_young_ptr = v3;
                        if(caml_young_limit <= v3) {
                            break;
                        }
                        else {
                            --ptr4;
                            *ptr4 = &loc_80517A6;
                            /*BAD_CALL!*/ caml_call_gc(v25, (int)v4);
                        }
                    }
                    ptr1 = (long long*)(v3 + 4);
                    *(int*)((char*)ptr1 - 4) = 2301;
                    *ptr1 = *(double*)(*(int*)(ptr4 + 1) * 4 + v25 - 4);
                    v11 = 7;
                    *(ptr4 + 1) = ptr1;
                loc_8051595:
                    while(1) {
                        v2 = caml_young_ptr - 8;
                        caml_young_ptr = v2;
                        if(caml_young_limit <= v2) {
                            break;
                        }
                        else {
                            --ptr4;
                            *ptr4 = &loc_805179C;
                            /*BAD_CALL!*/ caml_call_gc(v25, (int)ptr1);
                        }
                    }
                    ptr6 = (unsigned int*)(v2 + 4);
                    *(ptr4 + 2) = ptr6;
                    *(int*)(ptr6 - 1) = 0x400;
                    *ptr6 = (int*)((char*)(*(int*)(ptr4 + 5) + (int)ptr5) - 3);
                    while(*(int*)(ptr4 + 5) <= *ptr6) {
                        unsigned int v26 = *ptr6;
                        int v27 = *(int*)((char*)ptr2 - 4);
                        if((unsigned char)v27 != 254) {
                            if((unsigned int)(v27 >>> 9) <= v26) {
                                goto loc_80517CE;
                            }
                            else {
                                goto loc_8051638;
                            }
                        }
                        if((unsigned int)(v27 >>> 10) <= v26) {
                            goto loc_80517C9;
                        }
                        else {
                            while(1) {
                                v1 = caml_young_ptr - 12;
                                caml_young_ptr = v1;
                                if(caml_young_limit <= v1) {
                                    break;
                                }
                                else {
                                    --ptr4;
                                    *ptr4 = &loc_8051792;
                                    /*BAD_CALL!*/ caml_call_gc((int)v26, 254);
                                }
                            }
                            long long* ptr8 = (long long*)(v1 + 4);
                            *(int*)((char*)ptr8 - 4) = 2301;
                            *ptr8 = *(double*)((int*)(v26 * 4 + (int)ptr2) - 1);
                            v11 = 7;
                        loc_8051638:
                            int v28 = *(int*)(*(int*)(ptr4 + 6) + 12);
                            --ptr4;
                            *ptr4 = &loc_8051644;
                            /*BAD_CALL!*/ caml_apply2(v28);
                            if(v10 <= 1) {
                                break;
                            }
                            else {
                                ptr6 = *(ptr4 + 2);
                                unsigned int v29 = *ptr6;
                                ptr2 = *(ptr4 + 7);
                                int v30 = *(int*)((char*)ptr2 - 4);
                                if((unsigned char)v30 != 254) {
                                    if((unsigned int)(v30 >>> 9) <= v29) {
                                        goto loc_80517C4;
                                    }
                                    else {
                                        ptr0 = *(unsigned int*)((char*)(v29 * 2 + (int)ptr2) - 2);
                                        goto loc_80516B6;
                                    }
                                }
                                if((unsigned int)(v30 >>> 10) <= v29) {
                                    goto loc_80517BF;
                                }
                                else {
                                    while(1) {
                                        v0 = caml_young_ptr - 12;
                                        caml_young_ptr = v0;
                                        if(caml_young_limit <= v0) {
                                            break;
                                        }
                                        else {
                                            --ptr4;
                                            *ptr4 = &loc_8051788;
                                            /*BAD_CALL!*/ caml_call_gc((int)v29, 254);
                                        }
                                    }
                                    ptr0 = (double*)(v0 + 4);
                                    *(int*)((char*)ptr0 - 4) = 2301;
                                    *ptr0 = *(double*)((int*)(v29 * 4 + (int)ptr2) - 1);
                                    v11 = 7;
                                loc_80516B6:
                                    unsigned int v31 = (unsigned int)(*ptr6 + 2);
                                    int v32 = *(int*)((char*)ptr2 - 4);
                                    if((unsigned char)v32 != 254) {
                                        if((unsigned int)(v32 >>> 9) <= v31) {
                                            goto loc_80517BA;
                                        }
                                        else {
                                            --ptr4;
                                            *ptr4 = ptr0;
                                            --ptr4;
                                            *ptr4 = (int*)((char*)(v31 * 2 + (int)ptr2) - 2);
                                            --ptr4;
                                            *ptr4 = &loc_80516E2;
                                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr4 + 1), *(ptr4 + 2));
                                            ptr4 += 2;
                                            goto loc_8051701;
                                        }
                                    }
                                    if((unsigned int)(v32 >>> 10) <= v31) {
                                        goto loc_80517B5;
                                    }
                                    else {
                                        *(long long*)((int*)(v31 * 4 + (int)ptr2) - 1) = *ptr0;
                                        v11 = 7;
                                    loc_8051701:
                                        *ptr6 = *ptr6 - 2;
                                    }
                                }
                            }
                        }
                    }
                    unsigned int v33 = (unsigned int)(**(ptr4 + 2) + 2);
                    ptr2 = *(ptr4 + 7);
                    int v34 = *(int*)((char*)ptr2 - 4);
                    if((unsigned char)v34 != 254) {
                        if((unsigned int)(v34 >>> 9) <= v33) {
                            goto loc_80517B0;
                        }
                        else {
                            int v35 = *(int*)(ptr4 + 1);
                            --ptr4;
                            *ptr4 = v35;
                            --ptr4;
                            *ptr4 = (int*)((char*)(v33 * 2 + (int)ptr2) - 2);
                            --ptr4;
                            *ptr4 = &loc_8051746;
                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr4 + 1), *(ptr4 + 2));
                            ptr4 += 2;
                            goto loc_8051761;
                        }
                    }
                    if((unsigned int)(v34 >>> 10) > v33) {
                        *(long long*)((int*)(v33 * 4 + (int)ptr2) - 1) = **(ptr4 + 1);
                        v11 = 7;
                    loc_8051761:
                        int v36 = *(int*)(ptr4 + 3);
                        ptr5 = (int*)(v36 + 2);
                        *(ptr4 + 3) = ptr5;
                        if(*(int*)(ptr4 + 4) != v36) {
                            goto loc_805150D;
                        }
                        else {
                            break camlArray__merge_1191;
                        }
                    }
                    else {
                        --ptr4;
                        *ptr4 = &loc_80517B0;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517B0:
                        --ptr4;
                        *ptr4 = &loc_80517B5;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517B5:
                        --ptr4;
                        *ptr4 = &loc_80517BA;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517BA:
                        --ptr4;
                        *ptr4 = &loc_80517BF;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517BF:
                        --ptr4;
                        *ptr4 = &loc_80517C4;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517C4:
                        --ptr4;
                        *ptr4 = &loc_80517C9;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517C9:
                        --ptr4;
                        *ptr4 = &loc_80517CE;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    loc_80517CE:
                        --ptr4;
                        *ptr4 = &loc_80517D3;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                    }
                }
                --ptr4;
                *ptr4 = &loc_80517D8;
                /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
            loc_80517D8:
                --ptr4;
                *ptr4 = &loc_80517DD;
                int v37 = /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr4 + 1), *(int*)(ptr4 + 2), *(int*)(ptr4 + 3), *(int*)(ptr4 + 4));
                unsigned int* ptr9 = ptr6;
                ptr4 -= 6;
                if(v12 <= 11) {
                    ptr4 += 6;
                    /*BAD_CALL!*/ camlArray__isortto_1209(v15, v12);
                }
                *ptr4 = ptr9;
                *(int*)(ptr4 + 2) = v15;
                *(ptr4 + 5) = ptr2;
                *(int*)(ptr4 + 4) = v37;
                int v38 = v12 >> 1;
                if(v38 < 0) {
                    ++v38;
                }
                int v39 = (v38 >> 1) * 2 + 1;
                *(int*)(ptr4 + 1) = v39;
                *(int*)(ptr4 + 3) = v12 - v39 + 1;
                --ptr4;
                *ptr4 = &loc_805183F;
                /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr4 + 1));
                --ptr4;
                *ptr4 = &loc_805185A;
                /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr4 + 1));
                *ptr4 = *(int*)(*ptr4 + 16);
                v13 = *(int*)(ptr4 + 1);
                unsigned int v40 = *(ptr4 + 2);
                param1 = v13 + v40 - 1;
                v14 = *(int*)(ptr4 + 3);
                v17 = *(int*)(ptr4 + 4) + v14 - 1;
                param0 = *(int*)(ptr4 + 5);
                v16 = param0;
                caml_extra_params = v40;
                gvar_807B7E0 = *ptr4;
                ptr4 += 6;
                continue camlArray__merge_1191;
            }
            while(1);
        }
    }
    jump *(int*)(ptr4 + 10);
loc_805147C:
    unsigned int v41 = caml_young_ptr - 12;
    caml_young_ptr = v41;
    if(caml_young_limit <= v41) {
        ptr2 = (long long*)(v41 + 4);
        *(int*)((char*)ptr2 - 4) = 2301;
        char v42 = v11 - 1;
        v9[v42] = *(double*)((int*)(v8 * 4 + (int)ptr3) - 1);
        *ptr2 = v9[v42];
        v11 = v42 + 1;
    loc_805149E:
        int v43 = *(int*)(ptr4 + 4);
        ptr4 += 7;
        /*BAD_CALL!*/ camlArray__loop_1201(v43, v6);
    }
    --ptr4;
    *ptr4 = &loc_80514B3;
    /*BAD_CALL!*/ caml_call_gc((int)v8, (int)v6);
    goto loc_805147C;
}

int camlArray__of_list_1130() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    if(ptr1 != 1) {
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        int v4 = camlArray__list_length_1126();
        int v5 = caml_c_call();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 20);
            caml_young_ptr -= 20;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v0, v1);
            }
        }
        *ptr0 = 4343;
        *(int*)(int)(ptr0 + 1) = &caml_curry2;
        *(ptr0 + 2) = 5;
        *(ptr0 + 3) = &camlArray__fill_1135;
        *(ptr0 + 4) = v5;
        return camlArray__fill_1135((int)(ptr0 + 1));
    }
    return &camlArray__22;
}

int camlArray__size_1065() {
    int result;
    int v0;
    int* ptr0;
    while(ptr0 != 1) {
        int v1 = *(int*)(*ptr0 - 4);
        result = (((unsigned char)v1 != 254 ? v1 >>> 9: v1 >>> 10) | 0x1) + v0;
        v0 = result - 1;
        ptr0 = *(unsigned int*)(ptr0 + 1);
    }
    return result;
}

int camlArray__sort_1152(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    int* ptr0;
    unsigned int v4;
    int v5;
    unsigned int* ptr1;
    int* ptr2;
    __SyntheticTypeUnknown v6;
    char v7;
    int v8;
    unsigned int* ptr3;
    unsigned int* ptr4 = ptr3;
    while(1) {
        ptr2 = (int*)(caml_young_ptr - 144);
        caml_young_ptr -= 144;
        if(caml_young_limit <= (unsigned int)ptr2) {
            break;
        }
        else {
            caml_call_gc(v8, param1);
        }
    }
    *ptr2 = 5367;
    *(int*)(unsigned int)(ptr2 + 1) = &caml_curry2;
    *(ptr2 + 2) = 5;
    *(ptr2 + 3) = &camlArray__maxson_1155;
    *(ptr2 + 4) = v8;
    *(unsigned int**)(ptr2 + 5) = ptr3;
    *(ptr2 + 6) = 6391;
    *(ptr2 + 7) = &caml_curry3;
    *(ptr2 + 8) = 7;
    *(ptr2 + 9) = &camlArray__trickledown_1160;
    *(ptr2 + 10) = v8;
    *(unsigned int**)(ptr2 + 11) = ptr3;
    *(unsigned int*)(ptr2 + 12) = (unsigned int)(ptr2 + 1);
    int v9 = (int)(ptr2 + 14);
    *(ptr2 + 13) = 5367;
    *(int*)(int)(ptr2 + 14) = &caml_curry3;
    *(ptr2 + 15) = 7;
    *(ptr2 + 16) = &camlArray__trickle_1165;
    *(unsigned int**)(ptr2 + 17) = ptr3;
    *(unsigned int*)(ptr2 + 18) = ptr2 + 7;
    *(ptr2 + 19) = 5367;
    *(ptr2 + 20) = &caml_curry2;
    *(ptr2 + 21) = 5;
    *(ptr2 + 22) = &camlArray__bubbledown_1170;
    *(unsigned int**)(ptr2 + 23) = ptr3;
    *(unsigned int*)(ptr2 + 24) = (unsigned int)(ptr2 + 1);
    int* ptr5 = ptr2 + 26;
    *(ptr2 + 25) = 4343;
    *(ptr2 + 26) = &caml_curry2;
    *(ptr2 + 27) = 5;
    *(ptr2 + 28) = &camlArray__bubble_1174;
    *(unsigned int*)(ptr2 + 29) = ptr2 + 20;
    int v10 = (int)(ptr2 + 31);
    *(ptr2 + 30) = 5367;
    *(int*)(int)(ptr2 + 31) = &caml_curry2;
    *(ptr2 + 32) = 5;
    *(ptr2 + 33) = &camlArray__trickleup_1178;
    *(ptr2 + 34) = v8;
    *(unsigned int**)(ptr2 + 35) = ptr3;
    unsigned int v11 = ptr3[-1];
    int v12 = ((unsigned char)v11 != 254 ? v11 >>> 9: v11 >>> 10) | 0x1;
    int v13 = ((unsigned char)v11 != 254 ? v11 >>> 9: v11 >>> 10) | 0x1;
    unsigned int v14 = (unsigned int)(((v12 + 2) >> 1) % 3);
    unsigned int* ptr6 = (unsigned int*)(((v12 + 2) >> 1) / 3 * 2 - 1);
    if((int)ptr6 >= 1) {
        ptr1 = ptr6;
        do {
            unsigned int v15 = ptr4[-1];
            if((unsigned char)v15 != 254) {
                if(v15 >>> 9 <= (unsigned int)ptr6) {
                    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                    return 1;
                }
                v5 = *(int*)((char*)((int)(int*)((int)ptr6 * 2) + (int)ptr4) - 2);
                goto loc_8052BAC;
            }
            if(v15 >>> 10 <= (unsigned int)ptr6) {
                caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                return 1;
            }
            while(1) {
                v4 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v4) {
                    break;
                }
                else {
                    caml_call_gc(254, (int)ptr4);
                }
            }
            v5 = (int)(v4 + 4);
            *(int*)(v5 - 4) = 2301;
            v6[v7 - 1] = *(long long*)&ptr4[(unsigned int*)((char*)ptr6 - 1)];
            *(long long*)v5 = v6[v7 - 1];
        loc_8052BAC:
            camlArray__trickle_1165(v5, v9);
            ptr6 = (unsigned int*)((char*)ptr1 - 2);
            ptr1 = (unsigned int*)((char*)ptr1 - 2);
        }
        while(ptr1 != -1);
    }
    unsigned int v16 = (unsigned int)(v13 - 2);
    if((int)v16 >= 5) {
        ptr1 = (unsigned int*)v16;
        do {
            unsigned int v17 = ptr4[-1];
            if((unsigned char)v17 != 254) {
                if(v17 >>> 9 <= v16) {
                    caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                    caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                    return 1;
                }
                v9 = *(int*)((char*)(v16 * 2 + (int)ptr4) - 2);
                goto loc_8052C48;
            }
            if(v17 >>> 10 <= v16) {
                goto loc_8052F11;
            }
            else {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(254, (int)(unsigned int)(((v12 + 2) >> 1) % 3));
                    }
                }
                *ptr0 = 2301;
                v6[v7 - 1] = *(long long*)&ptr4[v16 - 1];
                *(long long*)(int)(ptr0 + 1) = v6[v7 - 1];
                v9 = (int)(ptr0 + 1);
            loc_8052C48:
                unsigned int v18 = ptr4[-1];
                if((unsigned char)v18 != 254) {
                    if(v18 >>> 9 <= 1) {
                        goto loc_8052F0C;
                    }
                    else {
                        v3 = ptr4[0];
                        goto loc_8052CA3;
                    }
                }
                if(v18 >>> 10 <= 1) {
                    goto loc_8052F07;
                }
                else {
                    while(1) {
                        v2 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v2) {
                            break;
                        }
                        else {
                            caml_call_gc(254, (int)(unsigned int)(((v12 + 2) >> 1) % 3));
                        }
                    }
                    v3 = v2 + 4;
                    *(int*)(v3 - 4) = 2301;
                    v6[v7 - 1] = (double)*(long long*)&ptr4[0];
                    *(long long*)v3 = v6[v7 - 1];
                loc_8052CA3:
                    unsigned int v19 = ptr4[-1];
                    if((unsigned char)v19 != 254) {
                        if(v19 >>> 9 <= v16) {
                            goto loc_8052F02;
                        }
                        else {
                            caml_modify((unsigned int*)((char*)(v16 * 2 + (int)ptr4) - 2), v3);
                            goto loc_8052CFB;
                        }
                    }
                    if(v19 >>> 10 <= v16) {
                        goto loc_8052EFD;
                    }
                    else {
                        v6[v7 - 1] = *(double*)v3;
                        *(long long*)&ptr4[v16 - 1] = v6[v7 - 1];
                    loc_8052CFB:
                        camlArray__bubble_1174();
                        camlArray__trickleup_1178(v10);
                        v16 = (unsigned int)((char*)ptr1 - 2);
                        ptr1 = (unsigned int*)(unsigned int)((char*)ptr1 - 2);
                    }
                }
            }
        }
        while(ptr1 != 3);
    }
    if(v13 > 3) {
        unsigned int v20 = ptr4[-1];
        if((unsigned char)v20 != 254) {
            if(v20 >>> 9 <= 3) {
                goto loc_8052EF8;
            }
            else {
                v16 = ptr4[1];
                goto loc_8052D94;
            }
        }
        if(v20 >>> 10 > 3) {
            while(1) {
                v1 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v1) {
                    break;
                }
                else {
                    caml_call_gc(254, (int)(unsigned int)(((v12 + 2) >> 1) % 3));
                }
            }
            v16 = v1 + 4;
            *(int*)(v16 - 4) = 2301;
            v6[v7 - 1] = *(long long*)&ptr4[2];
            *(long long*)v16 = v6[v7 - 1];
        loc_8052D94:
            unsigned int v21 = ptr4[-1];
            if((unsigned char)v21 != 254) {
                if(v21 >>> 9 <= 1) {
                    goto loc_8052EEE;
                }
                else {
                    v14 = ptr4[0];
                    goto loc_8052DF3;
                }
            }
            if(v21 >>> 10 > 1) {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc(254, (int)(unsigned int)(((v12 + 2) >> 1) % 3));
                    }
                }
                v14 = v0 + 4;
                *(int*)(v14 - 4) = 2301;
                v6[v7 - 1] = (double)*(long long*)&ptr4[0];
                *(long long*)v14 = v6[v7 - 1];
            loc_8052DF3:
                unsigned int v22 = ptr4[-1];
                if((unsigned char)v22 != 254) {
                    if(v22 >>> 9 <= 3) {
                        goto loc_8052EE4;
                    }
                    else {
                        caml_modify(ptr4 + 1, v14);
                        goto loc_8052E41;
                    }
                }
                if(v22 >>> 10 > 3) {
                    v6[v7 - 1] = *(double*)v14;
                    *(long long*)&ptr4[2] = v6[v7 - 1];
                loc_8052E41:
                    unsigned int v23 = ptr4[-1];
                    if((unsigned char)v23 != 254) {
                        if(v23 >>> 9 <= 1) {
                            goto loc_8052EDA;
                        }
                        else {
                            caml_modify(ptr4, v16);
                            return 1;
                        }
                    }
                    if(v23 >>> 10 > 1) {
                        v6[v7 - 1] = *(double*)v16;
                        *(long long*)&ptr4[0] = v6[v7 - 1];
                        return 1;
                    }
                    caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                loc_8052EDA:
                    caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
                }
                caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
            loc_8052EE4:
                caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
            }
            caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
        loc_8052EEE:
            caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
        }
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052EF8:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052EFD:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052F02:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052F07:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052F0C:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    loc_8052F11:
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
        caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
        /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr5, v9, v10, (int)ptr1);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__sortto_1217(int param0) {
    int v0;
    int v1;
    int v2;
    unsigned int* ptr0;
    long long* ptr1;
    unsigned int* ptr2 = ptr2 - 6;
    if(v1 <= 11) {
        ptr2 += 6;
        /*BAD_CALL!*/ camlArray__isortto_1209(v0, v1);
    }
    *ptr2 = ptr0;
    *(int*)(ptr2 + 2) = v0;
    *(ptr2 + 5) = ptr1;
    *(int*)(ptr2 + 4) = v2;
    int v3 = v1 >> 1;
    if(v3 < 0) {
        ++v3;
    }
    *(int*)(ptr2 + 1) = (v3 >> 1) * 2 + 1;
    *(int*)(ptr2 + 3) = v1 - ((v3 >> 1) * 2 + 1) + 1;
    int v4 = *(int*)(ptr2 + 3);
    --ptr2;
    *ptr2 = &loc_805183F;
    /*BAD_CALL!*/ camlArray__sortto_1217((v3 >> 1) * 2 + v0, v4);
    int v5 = *(int*)(ptr2 + 4) + *(int*)(ptr2 + 3) - 1;
    int v6 = *(int*)(ptr2 + 1);
    --ptr2;
    *ptr2 = &loc_805185A;
    /*BAD_CALL!*/ camlArray__sortto_1217(v5, v6);
    *ptr2 = *(int*)(*ptr2 + 16);
    int v7 = *(int*)(ptr2 + 1);
    unsigned int v8 = *(ptr2 + 2);
    int v9 = *(int*)(ptr2 + 5);
    caml_extra_params = v8;
    gvar_807B7E0 = *ptr2;
    /*BAD_CALL!*/ camlArray__merge_1191(v9, v7 + v8 - 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__stable_sort_1188(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    float* ptr2;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 76);
        caml_young_ptr -= 76;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(v2, param1);
        }
    }
    *ptr1 = 5367;
    *(ptr1 + 1) = &caml_curry7;
    *(ptr1 + 2) = 15;
    *(ptr1 + 3) = &camlArray__merge_1191;
    *(ptr1 + 4) = v2;
    *(unsigned int*)(ptr1 + 5) = ptr2;
    *(ptr1 + 6) = 5367;
    *(ptr1 + 7) = &caml_curry4;
    *(ptr1 + 8) = 9;
    *(ptr1 + 9) = &camlArray__isortto_1209;
    *(ptr1 + 10) = v2;
    *(unsigned int*)(ptr1 + 11) = ptr2;
    *(ptr1 + 12) = 6391;
    *(ptr1 + 13) = &caml_curry4;
    *(ptr1 + 14) = 9;
    *(ptr1 + 15) = &camlArray__sortto_1217;
    *(unsigned int*)(ptr1 + 16) = ptr2;
    *(unsigned int*)(ptr1 + 17) = ptr1 + 1;
    *(unsigned int*)(ptr1 + 18) = ptr1 + 7;
    int v4 = *(int*)(ptr2 - 1);
    int v5 = ((unsigned char)v4 != 254 ? v4 >>> 9: v4 >>> 10) | 0x1;
    if(v5 <= 11) {
        return camlArray__isortto_1209(1, v5);
    }
    int* ptr3 = ptr1 + 13;
    int* ptr4 = ptr1 + 1;
    float* ptr5 = ptr2;
    int v6 = v5 >> 1;
    if(v6 < 0) {
        ++v6;
    }
    int v7 = (v6 >> 1) * 2 + 1;
    int* ptr6 = (int*)(v5 - ((v6 >> 1) * 2 + 1) + 1);
    int* ptr7 = (int*)(v5 - ((v6 >> 1) * 2 + 1) + 1);
    int result = *(int*)(ptr2 - 1);
    if((unsigned char)result == 254) {
        if((unsigned int)(result >>> 10) <= 1) {
            caml_ml_array_bound_error((int)ptr3, (int)ptr7, v7, v0);
        loc_8053113:
            /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr3, (int)ptr7, v7, v0);
        }
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(254, (int)ptr6);
            }
        }
        *ptr0 = 2301;
        v1[v3 - 1] = *(double*)ptr2;
        *(long long*)(ptr0 + 1) = v1[v3 - 1];
    }
    else if((unsigned int)(result >>> 9) <= 1) {
        goto loc_8053113;
    }
    v0 = caml_c_call();
    camlArray__sortto_1217(1, (int)ptr7);
    camlArray__sortto_1217((int)ptr7, v7);
    caml_extra_params = 1;
    gvar_807B7E0 = ptr4;
    camlArray__merge_1191(v0, 1);
    return result;
}

int camlArray__sub_1081(int param0) {
    unsigned int v0;
    unsigned int v1;
    long long* ptr0;
    int result;
    __SyntheticTypeUnknown v2;
    int v3;
    char v4;
    int v5;
    int v6;
    int v7 = v3;
    if(v5 >= 1 && param0 >= 1) {
        result = *(int*)(v7 - 4);
        if((((unsigned char)result != 254 ? result >>> 9: result >>> 10) | 0x1) - param0 + 1 < v5) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v7);
            caml_call_gc(v6, v7);
            goto loc_8051EF5;
        }
        else if(param0 == 1) {
            return &camlArray__28;
        }
        else {
            int v8 = param0;
            int v9 = v5;
            int v10 = v7;
            if(*(char*)(v7 - 4) != 254) {
                ptr0 = *(unsigned int*)(v5 * 2 + v7 - 2);
            loc_8051E99:
                long long* ptr1 = ptr0;
                int v11 = param0;
                result = caml_c_call();
                v5 = 3;
                if(v8 - 2 >= 3) {
                    int v12 = v8 - 2;
                    v8 = result;
                loc_8051EC8:
                    v7 = v5 + v9 - 1;
                    v6 = v10;
                    if(*(char*)(v6 - 4) == 254) {
                    loc_8051EF5:
                        int* ptr2 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit > (unsigned int)ptr2) {
                            caml_call_gc(v6, v7);
                            goto loc_8051EF5;
                        }
                        else {
                            *ptr2 = 2301;
                            *(long long*)(unsigned int)(ptr2 + 1) = *(double*)(v7 * 4 + v6 - 4);
                            v1 = (unsigned int)(ptr2 + 1);
                        loc_8051F17:
                            result = v8;
                            if(*(char*)(result - 4) != 254) {
                                caml_modify((unsigned int*)(v5 * 2 + result - 2), v1);
                            }
                            else {
                                *(long long*)(v5 * 4 + result - 4) = *(double*)v1;
                            }
                            param0 = v5;
                            v5 += 2;
                            if(param0 != v12) {
                                goto loc_8051EC8;
                            }
                            else {
                                return result;
                            }
                        }
                    }
                    else {
                        v1 = *(unsigned int*)(v7 * 2 + v6 - 2);
                        goto loc_8051F17;
                    }
                }
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        ptr0 = (long long*)(v0 + 4);
                        *(int*)((char*)ptr0 - 4) = 2301;
                        v2[v4 - 1] = *(double*)(v5 * 4 + v7 - 4);
                        *ptr0 = v2[v4 - 1];
                        goto loc_8051E99;
                    }
                    else {
                        caml_call_gc(param0, v7);
                    }
                }
                ptr0 = (long long*)(v0 + 4);
                *(int*)((char*)ptr0 - 4) = 2301;
                v2[v4 - 1] = *(double*)(v5 * 4 + v7 - 4);
                *ptr0 = v2[v4 - 1];
                goto loc_8051E99;
            }
        }
    }
    else {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v7);
        caml_call_gc(v6, v7);
        goto loc_8051EF5;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__to_list_1121(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlArray__tolist_1123;
    *(ptr0 + 4) = v0;
    camlArray__tolist_1123((int)(ptr0 + 1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlArray__tolist_1123(int param0) {
    int* ptr0;
    unsigned int v0;
    long long* ptr1;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    unsigned int* result;
    for(int i = v2; i >= 1; i = v2) {
        int v4 = *(int*)(param0 + 12);
        if(*(char*)(v4 - 4) != 254) {
            ptr1 = *(unsigned int*)(i * 2 + v4 - 2);
        }
        else {
            while(1) {
                v0 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v0) {
                    break;
                }
                else {
                    caml_call_gc(param0, i);
                }
            }
            ptr1 = (long long*)(v0 + 4);
            *(int*)((char*)ptr1 - 4) = 2301;
            v1[v3 - 1] = *(double*)(i * 4 + v4 - 4);
            *ptr1 = v1[v3 - 1];
        }
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, i);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr1;
        *(unsigned int*)(ptr0 + 2) = result;
        v2 = i - 2;
        result = (unsigned int*)(ptr0 + 1);
    }
    return result;
}

int camlArray__trickle_1165(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5 = sub_8050F00(param1, param0, v0, v1, v2);
    if(gvar_80763A4 == *(unsigned int*)v5) {
        unsigned int v6 = *(unsigned int*)(v5 + 4);
        int v7 = *(int*)(v3 + 12);
        int v8 = *(int*)(v7 - 4);
        if((unsigned char)v8 != 254) {
            if((unsigned int)(v8 >>> 9) > v6) {
                caml_modify((unsigned int*)(v6 * 2 + v7 - 2), v4);
                return 1;
            }
        }
        else if((unsigned int)(v8 >>> 10) <= v6) {
            goto loc_8050F21;
        }
        else {
            *(long long*)(v6 * 4 + v7 - 4) = *(double*)v4;
            return 1;
        }
    }
    else {
        caml_raise_exn();
    loc_8050F21:
        caml_ml_array_bound_error(v3, (int)v4, v0, v1);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v3, (int)v4, v0, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__trickledown_1160(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    int v2;
    unsigned int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    unsigned int v9;
    while(1) {
        v5 = v8;
        v4 = v9;
        v3 = param0;
        v2 = param1;
        v9 = (unsigned int)camlArray__maxson_1155(*(int*)(param1 + 20));
        unsigned int v10 = v9;
        int v11 = v2;
        int v12 = *(int*)(v11 + 16);
        int v13 = *(int*)(v12 - 4);
        if((unsigned char)v13 != 254) {
            if((unsigned int)(v13 >>> 9) <= v9) {
                goto loc_8050E65;
            }
            else {
                goto loc_8050CEB;
            }
        }
        if((unsigned int)(v13 >>> 10) <= v9) {
            goto loc_8050E60;
        }
        else {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v12, v11);
                }
            }
            *ptr0 = 2301;
            *(long long*)(ptr0 + 1) = *(double*)(v9 * 4 + v12 - 4);
        loc_8050CEB:
            caml_apply2(*(int*)(v11 + 12));
            if(v6 <= 1) {
                break;
            }
            else {
                int v14 = *(int*)(v2 + 16);
                int v15 = *(int*)(v14 - 4);
                v9 = v10;
                if((unsigned char)v15 != 254) {
                    if((unsigned int)(v15 >>> 9) <= v9) {
                        goto loc_8050E5B;
                    }
                    else {
                        v1 = *(unsigned int*)(v9 * 2 + v14 - 2);
                        goto loc_8050D68;
                    }
                }
                if((unsigned int)(v15 >>> 10) <= v9) {
                    goto loc_8050E56;
                }
                else {
                    while(1) {
                        v0 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v0) {
                            break;
                        }
                        else {
                            caml_call_gc(v14, v7);
                        }
                    }
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    *(long long*)v1 = *(double*)(v9 * 4 + v14 - 4);
                loc_8050D68:
                    int v16 = *(int*)(v2 + 16);
                    int v17 = *(int*)(v16 - 4);
                    if((unsigned char)v17 != 254) {
                        if((unsigned int)(v17 >>> 9) <= v4) {
                            goto loc_8050E51;
                        }
                        else {
                            caml_modify((unsigned int*)(v4 * 2 + v16 - 2), v1);
                            goto loc_8050DB5;
                        }
                    }
                    if((unsigned int)(v17 >>> 10) <= v4) {
                        goto loc_8050E4C;
                    }
                    else {
                        *(long long*)(v4 * 4 + v16 - 4) = *(double*)v1;
                    loc_8050DB5:
                        v8 = v5;
                        param0 = v3;
                        param1 = v2;
                    }
                }
            }
        }
    }
    int v18 = *(int*)(v2 + 16);
    int v19 = *(int*)(v18 - 4);
    if((unsigned char)v19 == 254) {
        if((unsigned int)(v19 >>> 10) > v4) {
            *(long long*)(v4 * 4 + v18 - 4) = *(double*)v3;
            return 1;
        }
        caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
    }
    else if((unsigned int)(v19 >>> 9) > v4) {
        caml_modify((unsigned int*)(v4 * 2 + v18 - 2), v3);
        return 1;
    }
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E4C:
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E51:
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E56:
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E5B:
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E60:
    caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
loc_8050E65:
    /*BAD_CALL!*/ caml_ml_array_bound_error(v2, v5, (int)v3, (int)v4);
}

int camlArray__trickleup_1178(int param0) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int* ptr0;
    int* ptr1;
    unsigned int v3;
    unsigned int v4;
    int v5;
    unsigned int v6;
    int v7;
    __SyntheticTypeUnknown v8;
    char v9;
    int v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    while(1) {
        unsigned int v14 = v13;
        v7 = param0;
        unsigned int v15 = (unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1);
        if((unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1) != v14) {
            v6 = (unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1);
            v5 = v7;
            v4 = v12;
            v3 = v14;
        }
        else {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc((int)(unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1), ((v14 - 2) >> 1) % 3);
                }
            }
            *ptr1 = 0x800;
            *(ptr1 + 1) = &caml_exn_Assert_failure;
            *(ptr1 + 2) = &camlArray__35;
            caml_raise_exn();
        }
        int v16 = *(int*)(v7 + 16);
        int v17 = *(int*)(v16 - 4);
        if((unsigned char)v17 != 254) {
            if((unsigned int)(v17 >>> 9) <= (unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1)) {
                goto loc_8051349;
            }
            else {
                goto loc_8051157;
            }
        }
        if((unsigned int)(v17 >>> 10) <= (unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1)) {
            goto loc_8051344;
        }
        else {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc((int)(unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1), v16);
                }
            }
            *ptr0 = 2301;
            v8[v9 - 1] = *(double*)((unsigned int)(((v14 - 2) >> 1) / 3 * 2 + 1) * 4 + v16 - 4);
            *(long long*)(ptr0 + 1) = v8[v9 - 1];
        loc_8051157:
            caml_apply2(*(int*)(v7 + 12));
            if(v11 >= 1) {
                goto loc_80512A3;
            }
            else {
                v7 = v5;
                v12 = *(unsigned int*)(v7 + 16);
                int v18 = *(int*)(v12 - 4);
                if((unsigned char)v18 != 254) {
                    v2 = v6;
                    if((unsigned int)(v18 >>> 9) <= v2) {
                        goto loc_805133F;
                    }
                    else {
                        v1 = *(unsigned int*)(v2 * 2 + v12 - 2);
                        goto loc_80511D8;
                    }
                }
                else {
                    v2 = v6;
                }
                if((unsigned int)(v18 >>> 10) <= v2) {
                    goto loc_805133A;
                }
                else {
                    while(1) {
                        v0 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v0) {
                            break;
                        }
                        else {
                            caml_call_gc(254, v10);
                        }
                    }
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    *(long long*)v1 = *(double*)(v2 * 4 + v12 - 4);
                    v9 = 7;
                loc_80511D8:
                    int v19 = *(int*)(v7 + 16);
                    int v20 = *(int*)(v19 - 4);
                    if((unsigned char)v20 != 254) {
                        if((unsigned int)(v20 >>> 9) <= v3) {
                            goto loc_8051335;
                        }
                        else {
                            caml_modify((unsigned int*)(v3 * 2 + v19 - 2), v1);
                            goto loc_8051228;
                        }
                    }
                    if((unsigned int)(v20 >>> 10) <= v3) {
                        goto loc_8051330;
                    }
                    else {
                        *(long long*)(v3 * 4 + v19 - 4) = *(double*)v1;
                        v9 = 7;
                    loc_8051228:
                        if((int)v2 <= 1) {
                            break;
                        }
                        else {
                            v13 = v2;
                            v12 = v4;
                            param0 = v7;
                        }
                    }
                }
            }
        }
    }
    unsigned int* ptr2 = *(unsigned int**)(v7 + 16);
    v12 = ptr2[-1];
    if((unsigned char)v12 == 254) {
        if(v12 >>> 10 > 1) {
            *(long long*)&ptr2[0] = *(double*)v4;
            return 1;
        loc_80512A3:
            int v21 = *(int*)(v5 + 16);
            int v22 = *(int*)(v21 - 4);
            if((unsigned char)v22 == 254) {
                if((unsigned int)(v22 >>> 10) > v3) {
                    *(long long*)((int*)((int)(int*)(v3 * 4) + v21) - 1) = *(double*)v4;
                    return 1;
                }
                caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
            }
            else if((unsigned int)(v22 >>> 9) > v3) {
                caml_modify((unsigned int*)(v3 * 2 + v21 - 2), v4);
                return 1;
            }
            caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
        }
        caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
    }
    else if(v12 >>> 9 > 1) {
        caml_modify(ptr2, v4);
        return 1;
    }
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_8051330:
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_8051335:
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_805133A:
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_805133F:
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_8051344:
    caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
loc_8051349:
    /*BAD_CALL!*/ caml_ml_array_bound_error(v5, (int)v4, (int)v3, (int)v6);
}

int camlBuffer__add_buffer_1087() {
    int* ptr0;
    return camlBuffer__add_substring_1076(1, *(ptr0 + 1));
}

int camlBuffer__add_channel_1090(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    if(param0 < 1 || gvar_807833C < param0) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    if(*(int*)(v1 + 4) + v2 - 1 > *(int*)(v1 + 8)) {
        camlBuffer__resize_1066();
    }
    camlPervasives__really_input_1235(*(int*)(v1 + 4), (void*)v2);
    *(int*)(v1 + 4) = *(int*)(v1 + 4) + v2 - 1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__add_char_1072() {
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = *(ptr0 + 1);
    int v2 = *(ptr0 + 1);
    if(*(ptr0 + 2) <= v1) {
        camlBuffer__resize_1066();
    }
    int* ptr2 = ptr1;
    int v3 = *ptr2;
    int v4 = v2;
    int v5 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
    if((unsigned int)(v5 - (unsigned int)*(char*)(v5 + v3)) > (unsigned int)(v4 >> 1)) {
        *(char*)((unsigned int)(v4 >> 1) + v3) = (unsigned char)(v0 >>> 1);
        *(ptr2 + 1) = v4 + 2;
        return 1;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlBuffer__add_string_1082() {
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int v4 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int v5 = *(ptr0 + 1) + v3 - 1;
    int v6 = *(ptr0 + 1) + v3 - 1;
    if(*(ptr0 + 2) < v5) {
        camlBuffer__resize_1066();
    }
    camlString__blit_1056(*ptr1, *(ptr1 + 1));
    *(ptr1 + 1) = v6;
    return 1;
}

int camlBuffer__add_substitute_1122(int param0) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
    int v3 = (unsigned int)*(char*)(v2 + param0);
    int v4 = (v2 - v3) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 32);
        caml_young_ptr -= 32;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v3, param0);
        }
    }
    *ptr0 = 7415;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlBuffer__subst_1127;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = param0;
    *(ptr0 + 7) = v4;
    camlBuffer__subst_1127((int)(ptr0 + 1));
    return result;
}

int camlBuffer__add_substring_1076(int param0, int param1) {
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    int v2 = param0;
    int v3 = param1;
    if((param0 < 1 || param1 < 1)) {
    loc_805861F:
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    int v4 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    if((v4 - (unsigned int)*(char*)(v4 + v0)) * 2 - param1 + 2 < param0) {
        goto loc_805861F;
    }
    else {
        int v5 = *(ptr1 + 1) + v3 - 1;
        int v6 = *(ptr1 + 1) + v3 - 1;
        if(*(ptr1 + 2) < v5) {
            camlBuffer__resize_1066();
        }
        camlString__blit_1056(*ptr1, *(ptr1 + 1));
        *(ptr1 + 1) = v6;
        return 1;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__advance_1104(int param0, int param1) {
    int v0;
    int* ptr0;
    int result;
    while(1) {
        if(param0 <= result) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            v0 = caml_raise_exn();
        }
        int v1 = param0;
        int v2 = v0;
        int v3 = *(int*)(param1 + 12);
        int v4 = *(int*)(param1 + 20);
        int v5 = (*(int*)(v4 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v5 - (unsigned int)*(char*)(v4 + v5)) <= (unsigned int)(result >> 1)) {
            goto loc_805803E;
        }
        else if((unsigned int)*(char*)((unsigned int)(result >> 1) + v4) * 2 + 1 == v3) {
            result += 2;
            v0 = v2 + 2;
            param0 = v1;
        }
        else {
            v3 = *(int*)(param1 + 16);
            int v6 = *(int*)(param1 + 20);
            int v7 = (*(int*)(v6 - 4) >>> 10) * 4 - 1;
            if((unsigned int)(v7 - (unsigned int)*(char*)(v6 + v7)) <= (unsigned int)(result >> 1)) {
                break;
            }
            else if((unsigned int)*(char*)((unsigned int)(result >> 1) + v6) * 2 + 1 != v3) {
                result += 2;
                v0 = v2;
                param0 = v1;
            }
            else if(v2 == 1) {
                return result;
            }
            else {
                result += 2;
                v0 = v2 - 2;
                param0 = v1;
            }
        }
    }
    caml_ml_array_bound_error();
loc_805803E:
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlBuffer__advance_1111(int param0, int param1, int param2) {
    int v0;
    int result1;
    int v1;
    int result;
    while(result < result1) {
        int v2 = *(int*)(v1 + 12);
        unsigned int v3 = (unsigned int)(result >> 1);
        int v4 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v4 - (unsigned int)*(char*)(v4 + v2)) > v3) {
            int v5 = (unsigned int)*(char*)(v3 + v2) * 2 + 1;
            if(v5 >= 247 && v5 < 0x181) {
                return result;
            }
            else if(v5 == 193) {
                return result;
            }
            else if(v5 >= 247) {
                jump *(int*)(((v5 - 384) >> 1) * 4 + 134713484);
            }
            else if(v5 < 191 && v5 >= 117) {
                if((unsigned int)(v5 - 130) > 51) {
                    return result;
                }
            }
            else if(v5 < 97) {
                return result;
            }
            result += 2;
        }
        else {
            /*BAD_CALL!*/ caml_ml_array_bound_error(v0, param0, param1, param2);
        }
    }
    return result1;
}

int camlBuffer__advance_to_closing_1098(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 28);
        caml_young_ptr -= 28;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 6391;
    *(int*)(int)(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlBuffer__advance_1104;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = param1;
    int v2 = (*(int*)(param1 - 4) >>> 10) * 4 - 1;
    camlBuffer__advance_1104((v2 - (unsigned int)*(char*)(v2 + param1)) * 2 + 1, (int)(ptr0 + 1));
    return result;
}

int camlBuffer__advance_to_non_alpha_1108(int param0, int param1, int param2) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v1, v0);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlBuffer__advance_1111;
    *(ptr0 + 4) = v0;
    camlBuffer__advance_1111(param0, param1, param2);
    return result;
}

int camlBuffer__blit_1051(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    if(v1 >= 1 && v2 >= 1 && *(int*)(v0 + 4) - v1 + 1 >= v2 && param1 >= 1) {
        int v3 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
        if((v3 - (unsigned int)*(char*)(param0 + v3)) * 2 - v1 + 2 >= param1) {
            return camlString__blit_1056(param0, param1);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlBuffer__clear_1062() {
    int v0;
    *(int*)(v0 + 4) = 1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__closing_1097(int param0, int param1) {
    int* ptr0;
    int v0;
    if(v0 != 81) {
        if(v0 != 247) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = &caml_exn_Assert_failure;
            *(ptr0 + 2) = &camlBuffer__21;
            caml_raise_exn();
        }
        return 251;
    }
    return 83;
}

int camlBuffer__contents_1044(int param0, int param1) {
    int v0;
    return camlString__sub_1046(*(int*)(v0 + 4), param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlBuffer__create_1039() {
    int* ptr0;
    void* ptr1;
    if((int)ptr1 < 3) {
        ptr1 = (void*)0x3;
    }
    void* ptr2 = gvar_807833C < (int)ptr1 ? gvar_807833C: ptr1;
    int v0 = caml_c_call();
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
    *ptr0 = 0x1000;
    *(ptr0 + 1) = v0;
    *(ptr0 + 2) = 1;
    *(void**)(ptr0 + 3) = ptr2;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

int camlBuffer__entry() {
    camlBuffer = &camlBuffer__20;
    gvar_8078E70 = &camlBuffer__19;
    gvar_8078E74 = &camlBuffer__18;
    gvar_8078E78 = &camlBuffer__17;
    gvar_8078E7C = &camlBuffer__16;
    gvar_8078E80 = &camlBuffer__15;
    gvar_8078E84 = &camlBuffer__14;
    gvar_8078E88 = &camlBuffer__13;
    gvar_8078EA8 = &camlBuffer__12;
    gvar_8078E8C = &camlBuffer__11;
    gvar_8078E94 = &camlBuffer__10;
    gvar_8078E90 = &camlBuffer__9;
    gvar_8078E9C = &camlBuffer__8;
    gvar_8078EA0 = &camlBuffer__7;
    gvar_8078EA4 = &camlBuffer__6;
    gvar_8078EAC = &camlBuffer__5;
    gvar_8078EB0 = &camlBuffer__4;
    gvar_8078EB4 = &camlBuffer__3;
    gvar_8078EB8 = &camlBuffer__2;
    gvar_8078E98 = &camlBuffer__1;
    return 1;
}

int camlBuffer__find_ident_1114(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int v2;
    int v3;
    if(param0 <= v3) {
        while(1) {
            ptr2 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr2) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        *ptr2 = 0x400;
        *(ptr2 + 1) = &caml_exn_Not_found;
        v0 = caml_raise_exn();
    }
    int v4 = v3;
    int v5 = v0;
    int v6 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v7 = v6 - (int)*(char*)(v0 + v6);
    if((unsigned int)(v3 >> 1) < (unsigned int)v7) {
        int v8 = (unsigned int)*(char*)((unsigned int)(v3 >> 1) + v0) * 2 + 1;
        if(v8 != 81 && v8 != 247) {
            int v9 = camlBuffer__advance_to_non_alpha_1108(v1, v2, v4);
            v1 = v9;
            int v10 = camlString__sub_1046(v9 - v3 + 1, param1);
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(v10, param1);
                }
            }
            *ptr1 = 0x800;
            *(int*)(int)(ptr1 + 1) = v10;
            *(ptr1 + 2) = v1;
            return (int)(ptr1 + 1);
        }
        camlBuffer__closing_1097(v8, v7);
        int v11 = camlBuffer__advance_to_closing_1098(1, v0);
        v1 = v11;
        int v12 = camlString__sub_1046(v11 - v3 - 1, param1);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        *ptr0 = 0x800;
        *(int*)(int)(ptr0 + 1) = v12;
        *(ptr0 + 2) = v1 + 2;
        return (int)(ptr0 + 1);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v1, v2, v3, v0);
}

int camlBuffer__length_1060() {
    int v0;
    return *(int*)(v0 + 4);
}

int camlBuffer__nth_1057(int param0, int param1, int param2) {
    int v0;
    void* ptr0;
    int* ptr1;
    int v1;
    int v2;
    if(v1 < 1) {
    loc_8058405:
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, v2);
    }
    v0 = *(ptr1 + 1);
    if(v0 <= v1) {
        goto loc_8058405;
    }
    else {
        int v3 = *ptr1;
        v1 >>= 1;
        int v4 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v4 - (unsigned int)*(char*)(v3 + v4)) > (unsigned int)v1) {
            return (unsigned int)*(char*)(v3 + v1) * 2 + 1;
        }
    }
    int v5 = caml_ml_array_bound_error((int)ptr0, param0, param1, param2);
    return *(int*)(v5 + 4);
}

int camlBuffer__output_buffer_1094() {
    int* ptr0;
    return camlPervasives__output_1194(1, *(ptr0 + 1));
}

int camlBuffer__reset_1064() {
    unsigned int* ptr0;
    ptr0[1] = 1;
    caml_modify(ptr0, ptr0[3]);
    unsigned int v0 = ptr0[0];
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    ptr0[2] = (unsigned int)((v1 - (unsigned int)*(char*)(v1 + v0)) * 2 + 1);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__resize_1066() {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    unsigned int* ptr2 = ptr1;
    unsigned int v1 = ptr1[2];
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)ptr1, (int)v1);
        }
    }
    unsigned int* ptr3 = (unsigned int*)(ptr0 + 1);
    *ptr0 = 0x400;
    *(unsigned int*)(ptr0 + 1) = v1;
    while(ptr1[1] + v0 - 1 > *(ptr0 + 1)) {
        *(ptr0 + 1) = (*(ptr0 + 1) >> 1) * 4 + 1;
    }
    if(*(ptr0 + 1) > gvar_807833C) {
        int v2 = gvar_807833C;
        int v3 = ptr1[1];
        if(v3 + v0 - 1 > v2) {
            /*NO_RETURN*/ camlPervasives__failwith_1010(v3, v2);
        }
        *(unsigned int*)(ptr0 + 1) = gvar_807833C;
    }
    int v4 = caml_c_call();
    unsigned int v5 = (unsigned int)v4;
    camlString__blit_1056(v4, 1);
    caml_modify(ptr2, v5);
    ptr2[2] = *ptr3;
    return 1;
}

int camlBuffer__sub_1046(int param0, int param1) {
    int v0;
    int v1;
    if(v1 >= 1 && param0 >= 1) {
        param1 = *(int*)(v0 + 4) - param0 + 1;
        if(param1 >= v1) {
            int result = caml_c_call();
            camlString__blit_1056(result, 1);
            return result;
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlBuffer__subst_1127(int param0) {
    int v0;
    int v1;
    int v2;
    void* ptr0;
    int v3;
    int v4;
loc_80580F3:
    int v5 = v3;
    while(*(int*)(param0 + 24) > v4) {
        int v6 = *(int*)(param0 + 20);
        int v7 = (*(int*)(v6 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v7 - (unsigned int)*(char*)(v6 + v7)) > (unsigned int)(v4 >> 1)) {
            int v8 = (unsigned int)*(char*)((unsigned int)(v4 >> 1) + v6) * 2 + 1;
            if(v8 == 73) {
                v1 = param0;
                if(v5 == 185) {
                    v0 = v4;
                    camlBuffer__add_char_1072();
                    v4 = v0 + 2;
                    v3 = 65;
                }
                else {
                    int v9 = *(int*)(param0 + 24);
                    int v10 = camlBuffer__find_ident_1114(v9, v9);
                    v2 = *(int*)(v10 + 4);
                    **(unsigned int*)(v1 + 16)(*(int*)(v10 + 4));
                    camlBuffer__add_string_1082();
                    v3 = 65;
                    v4 = v2;
                }
                param0 = v1;
            }
            else if(v5 == 185) {
                v2 = v8;
                v1 = param0;
                v0 = v4;
                camlBuffer__add_char_1072();
                camlBuffer__add_char_1072();
                v4 = v0 + 2;
                v3 = 65;
                param0 = v1;
            }
            else if(v8 != 185) {
                v1 = param0;
                v0 = v4;
                v2 = v8;
                camlBuffer__add_char_1072();
                v4 = v0 + 2;
                v3 = v2;
                param0 = v1;
            }
            else {
                v3 = 185;
                v4 += 2;
            }
            goto loc_80580F3;
        }
        else {
            /*BAD_CALL!*/ caml_ml_array_bound_error(v2, v0, v1, (int)ptr0);
            v5 = v3;
        }
    }
    if(v5 == 185) {
        return camlBuffer__add_char_1072();
    }
    return 1;
}

int camlCallback__entry() {
    camlCallback = &camlCallback__2;
    gvar_807B1E4 = &camlCallback__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlCallback__register_1031() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlCallback__register_exception_1034() {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    char v1;
    float* ptr1;
    if(*(char*)(ptr1 - 1) == 254) {
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
        *ptr0 = 2301;
        v0[v1 - 1] = *(double*)ptr1;
        *(long long*)(ptr0 + 1) = v0[v1 - 1];
    }
    return caml_c_call();
}

int camlChar__chr_1032(int param0, int param1) {
    int result;
    if((result < 1 || result > 0x1ff)) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    return result;
}

int camlChar__compare_1048() {
    int v0;
    int v1;
    return v1 - v0 + 1;
}

int camlChar__entry() {
    camlChar = &camlChar__5;
    gvar_8077D80 = &camlChar__4;
    gvar_8077D84 = &camlChar__3;
    gvar_8077D88 = &camlChar__2;
    gvar_8077D8C = &camlChar__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlChar__escaped_1038() {
    int v0;
    if(v0 != 79) {
        if(v0 != 185) {
            int v1 = v0;
            if(v0 >= 0 && v0 <= 15) {
                goto loc_8055136;
            }
            else if(v0 < 29) {
                throw 0;
            }
            else {
            loc_8055136:
                int result = caml_c_call();
                if(result != 1) {
                    v0 = caml_c_call();
                    *(char*)v0 = (unsigned char)(v1 >>> 1);
                    return result;
                }
                int v2 = caml_c_call();
                *(char*)v2 = 92;
                *(char*)(v2 + 1) = (unsigned char)(((v1 >> 1) / 100 * 2 + 97) >>> 1);
                *(char*)(v2 + 2) = (unsigned char)(((v1 >> 1) / 10 % 10 * 2 + 97) >>> 1);
                *(char*)(v2 + 3) = (unsigned char)(((v1 >> 1) % 10 * 2 + 97) >>> 1);
                return v1 >> 1;
            }
        }
        return &camlChar__7;
    }
    return &camlChar__6;
}

int camlChar__lowercase_1043() {
    int result;
    if((result < 131 || result > 181) && (result < 0x181 || result > 429) && (result < 433 || result > 445)) {
        return result;
    }
    return result + 64;
}

int camlChar__uppercase_1045() {
    int result;
    if((result < 195 || result > 245) && (result < 0x1c1 || result > 493) && (result < 0x1f1 || result > 509)) {
        return result;
    }
    return result - 64;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlHashtbl__Make_1251(int param0, int param1) {
    int* ptr0;
    int v0;
    unsigned int v1 = camlHashtbl;
    unsigned int v2 = gvar_8078490;
    unsigned int v3 = gvar_8078498;
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
    unsigned int v4 = gvar_80784B0;
    unsigned int v5 = gvar_80784B4;
    unsigned int v6 = gvar_80784B8;
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

int camlHashtbl__add_1074(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int* ptr1;
    int v3;
    int v4;
    int* ptr2 = ptr2 - 1;
    int v5 = *(int*)(*(ptr1 + 1) - 4) >>> 10;
    if(v5) {
        *ptr2 = v3;
        --ptr2;
        *ptr2 = v4;
        --ptr2;
        *ptr2 = 201;
        --ptr2;
        *ptr2 = 21;
        --ptr2;
        *ptr2 = &loc_8057412;
        int v6 = /*BAD_CALL!*/ caml_hash_univ_param(*(ptr2 + 1), *(ptr2 + 2));
        ptr2 += 3;
        v1 = v5;
        v0 = (v6 >> 1) % v1;
    }
    else {
        --ptr2;
        *ptr2 = &loc_805742A;
        /*BAD_CALL!*/ caml_raise_exn();
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            --ptr2;
            *ptr2 = &loc_80574CE;
            /*BAD_CALL!*/ caml_call_gc(v1, (int)(unsigned int)(v0 * 2 + 1));
        }
    }
    *ptr0 = 0xc00;
    *(ptr0 + 1) = v4;
    *(ptr0 + 2) = *ptr2;
    int v7 = *(ptr1 + 1);
    if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(v7 - 4) >>> 9)) {
        *(ptr0 + 3) = *(int*)((unsigned int)(v0 * 2 + 1) * 2 + v7 - 2);
        int v8 = *(ptr1 + 1);
        if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
            --ptr2;
            *ptr2 = ptr0 + 1;
            --ptr2;
            *ptr2 = (unsigned int)(v0 * 2 + 1) * 2 + v8 - 2;
            --ptr2;
            *ptr2 = &loc_805748A;
            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr2 + 1), *(unsigned int*)(ptr2 + 2));
            ptr2 += 2;
            *ptr1 = *ptr1 + 2;
            if(((*(int*)(*(ptr1 + 1) - 4) >>> 9) | 0x1) * 2 - 1 < *ptr1) {
                ++ptr2;
                /*BAD_CALL!*/ camlHashtbl__resize_1061(v3, v2);
            }
            jump *(ptr2 + 1);
        }
        --ptr2;
        *ptr2 = &loc_80574D8;
        /*BAD_CALL!*/ caml_ml_array_bound_error(*(ptr2 + 1), *(ptr2 + 2), *(ptr2 + 3), *(ptr2 + 4));
    }
    --ptr2;
    *ptr2 = &loc_80574DD;
    /*BAD_CALL!*/ caml_ml_array_bound_error(*(ptr2 + 1), *(ptr2 + 2), *(ptr2 + 3), *(ptr2 + 4));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__add_1179(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2;
    int* ptr2;
    int v3;
    int v4;
    int v5;
    int v6 = *(int*)(*(ptr2 + 1) - 4) >>> 10;
    if(v6) {
        int v7 = v6;
        v2 = v3;
        v1 = v4;
        v0 = v5;
        ptr1 = ptr2;
        int v8 = **(unsigned int*)(*(int*)(*(int*)(v3 + 12) + 8) + 4)();
        param0 = v7;
        param1 = ((v8 & 0x7fffffff) >> 1) % param0;
    }
    else {
        caml_raise_exn();
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, (int)(unsigned int)(param1 * 2 + 1));
        }
    }
    *ptr0 = 0xc00;
    *(int*)(unsigned int)(ptr0 + 1) = v0;
    *(ptr0 + 2) = v1;
    int v9 = *(ptr1 + 1);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v9 - 4) >>> 9)) {
        *(ptr0 + 3) = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v9 - 2);
        v9 = *(ptr1 + 1);
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v9 - 4) >>> 9)) {
            caml_modify((unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v9 - 2), (unsigned int)(ptr0 + 1));
            *ptr1 = *ptr1 + 2;
            if(((*(int*)(*(ptr1 + 1) - 4) >>> 9) | 0x1) * 2 - 1 < *ptr1) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
        caml_ml_array_bound_error(v0, v1, (int)ptr1, v2);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v0, v1, (int)ptr1, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__clear_1054() {
    unsigned int v0;
    int* ptr0;
    unsigned int v1 = 1;
    int v2 = ((*(int*)(*(ptr0 + 1) - 4) >>> 9) | 0x1) - 2;
    if(v2 >= 1) {
        do {
            int v3 = *(ptr0 + 1);
            if((unsigned int)(*(int*)(v3 - 4) >>> 9) <= v1) {
                goto loc_805725B;
            }
            else {
                caml_modify((unsigned int*)(v1 * 2 + v3 - 2), 1);
                v0 = v1;
                v1 += 2;
            }
            if(v0 == v2) {
                break;
            loc_805725B:
                /*BAD_CALL!*/ caml_ml_array_bound_error();
            }
        }
        while(1);
    }
    *ptr0 = 1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__copy_1057(int param0, unsigned int param1) {
    int* ptr0;
    int* ptr1;
    int v0 = camlArray__copy_1049(param0, param1);
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, (int)param1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = *ptr1;
    *(ptr0 + 2) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__create_1051() {
    int* ptr0;
    int v0;
    int v1;
    camlPervasives__max_1025();
    int v2 = camlPervasives__min_1022();
    int v3 = caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = 1;
    *(ptr0 + 2) = v3;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__do_bucket_1132() {
    int v0;
    int v1;
    while(v1 != 1) {
        int v2 = v0;
        int v3 = *(int*)(v1 + 8);
        caml_apply2(*(int**)(v0 + 8));
        v1 = v3;
        v0 = v2;
    }
    return 1;
}

int camlHashtbl__do_bucket_1142(int param0) {
    int v0;
    int v1;
    int v2;
    int i;
    for(i = v1; v2 != 1; i = v1) {
        int v3 = param0;
        int v4 = *(int*)(v2 + 8);
        caml_apply3(i, *(int**)(param0 + 12));
        v1 = v0;
        v2 = v4;
        param0 = v3;
    }
    return i;
}

int camlHashtbl__entry() {
    gvar_80784C0 = &camlHashtbl__16;
    camlHashtbl = &camlHashtbl__15;
    gvar_8078490 = &camlHashtbl__14;
    gvar_8078498 = &camlHashtbl__13;
    gvar_80784B8 = &camlHashtbl__12;
    gvar_80784C4 = &camlHashtbl__11;
    gvar_8078494 = &camlHashtbl__10;
    gvar_80784A8 = &camlHashtbl__9;
    gvar_80784C8 = &camlHashtbl__8;
    gvar_807849C = &camlHashtbl__7;
    gvar_80784A0 = &camlHashtbl__6;
    gvar_80784AC = &camlHashtbl__5;
    gvar_80784A4 = &camlHashtbl__4;
    gvar_80784B0 = &camlHashtbl__3;
    gvar_80784B4 = &camlHashtbl__2;
    gvar_80784BC = &camlHashtbl__1;
    return 1;
}

int camlHashtbl__find_1093(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int result;
    unsigned int* ptr2;
    void* ptr3;
    void* ptr4;
    void* ptr5;
    int v0;
    int v1;
    void* ptr6;
    int v2;
    int v3 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v3) {
        ptr4 = ptr6;
        int v4 = caml_hash_univ_param(21, 201);
        param1 = (v4 >> 1) % v3;
    }
    else {
        caml_raise_exn();
    }
    int v5 = *(int*)(v2 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v5 - 4) >>> 9)) {
        unsigned int* ptr7 = *(unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v5 - 2);
        if(ptr7 != 1) {
            ptr3 = ptr6;
            ptr2 = *(ptr7 + 2);
            result = *(int*)(ptr7 + 1);
            ptr4 = *ptr7;
            void* ptr8 = ptr6;
            int v6 = caml_c_call();
            if(v6 == 1) {
                return result;
            }
            unsigned int* ptr9 = ptr2;
            if(ptr9 != 1) {
                ptr2 = *(ptr9 + 2);
                result = *(int*)(ptr9 + 1);
                ptr4 = *ptr9;
                ptr8 = ptr3;
                int v7 = caml_c_call();
                if(v7 == 1) {
                    return result;
                }
                unsigned int* ptr10 = ptr2;
                if(ptr10 != 1) {
                    ptr2 = *(ptr10 + 2);
                    result = *(int*)(ptr10 + 1);
                    int v8 = caml_c_call();
                    if(v8 == 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1088(v0, v1);
                }
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc(v0, v1);
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
                    caml_call_gc(v0, v1);
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
            caml_call_gc((int)ptr7, (int)(unsigned int)(param1 * 2 + 1));
        }
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr2, (int)ptr3, result, (int)ptr5);
}

int camlHashtbl__find_1198(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = *(int*)(*(int*)(v3 + 4) - 4) >>> 10;
    if(v7) {
        result = v7;
        v2 = v4;
        v1 = v5;
        v0 = v3;
        int v8 = **(unsigned int*)(*(int*)(*(int*)(v4 + 16) + 8) + 4)();
        param0 = result;
        param1 = ((v8 & 0x7fffffff) >> 1) % param0;
    }
    else {
        caml_raise_exn();
    }
    int v9 = *(int*)(v0 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v9 - 4) >>> 9)) {
        int v10 = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v9 - 2);
        if(v10 != 1) {
            v0 = *(int*)(v10 + 8);
            result = *(int*)(v10 + 4);
            caml_apply2(**(unsigned int*)(v2 + 12));
            if(v3 != 1) {
                return result;
            }
            int v11 = v0;
            if(v11 != 1) {
                v0 = *(int*)(v11 + 8);
                result = *(int*)(v11 + 4);
                caml_apply2(**(unsigned int*)(v2 + 12));
                if(v3 != 1) {
                    return result;
                }
                int v12 = v0;
                if(v12 != 1) {
                    v0 = *(int*)(v12 + 8);
                    result = *(int*)(v12 + 4);
                    caml_apply2(**(unsigned int*)(v2 + 12));
                    if(v3 != 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1193(*(int*)(v2 + 20), v6);
                }
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc(v4, v6);
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
                    caml_call_gc(v4, v6);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        while(1) {
            int* ptr2 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr2) {
                *ptr2 = 0x400;
                *(ptr2 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            caml_call_gc(param0, (int)(unsigned int)(param1 * 2 + 1));
        }
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v0, v2, v1, result);
}

int camlHashtbl__find_all_1105(int param0, int param1, int param2) {
    int v0;
    int result;
    int* ptr0;
    void* ptr1;
    int v1;
    int v2;
    void* ptr2;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)ptr2, v1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__find_in_bucket_1108;
    *(ptr0 + 2) = 3;
    *(void**)(ptr0 + 3) = ptr2;
    int v3 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v3) {
        void* ptr3 = ptr2;
        result = caml_hash_univ_param(21, 201);
        v0 = (result >> 1) % v3;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v2 + 4) - 4) >>> 9)) {
        camlHashtbl__find_in_bucket_1108();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, param0, param1, param2);
}

int camlHashtbl__find_all_1210(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int* ptr1;
    void* ptr2;
    int v2;
    int v3;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(param0, v2);
        }
    }
    *ptr1 = 4343;
    *(ptr1 + 1) = &camlHashtbl__find_in_bucket_1213;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = *(int*)(param0 + 12);
    *(ptr1 + 4) = v3;
    int v4 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v4) {
        v1 = v4;
        ptr0 = ptr1 + 1;
        v0 = v2;
        result = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((result & 0x7fffffff) >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(*(unsigned int*)(v0 + 4) - 1) >>> 9)) {
        camlHashtbl__find_in_bucket_1213();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v0, (int)ptr0, v1, (int)ptr2);
}

int* camlHashtbl__find_in_bucket_1108() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    while(ptr1 != 1) {
        int v2 = v0;
        int* ptr2 = *(unsigned int*)(ptr1 + 2);
        int v3 = *(ptr1 + 1);
        int v4 = *ptr1;
        void* ptr3 = *(void**)(v0 + 8);
        int v5 = v4;
        int v6 = caml_c_call();
        if(v6 == 1) {
            int v7 = camlHashtbl__find_in_bucket_1108();
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = v3;
                    *(ptr0 + 2) = v7;
                    return ptr0 + 1;
                }
                caml_call_gc(v7, v1);
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = v3;
            *(ptr0 + 2) = v7;
            return ptr0 + 1;
        }
        ptr1 = ptr2;
        v0 = v2;
    }
    return (int*)0x1;
}

int* camlHashtbl__find_in_bucket_1213() {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    while(v0 != 1) {
        int v4 = v2;
        int v5 = *(int*)(v0 + 8);
        int v6 = *(int*)(v0 + 4);
        caml_apply2(**(unsigned int*)(v2 + 8));
        if(v1 != 1) {
            int v7 = camlHashtbl__find_in_bucket_1213();
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = v6;
                    *(ptr0 + 2) = v7;
                    return ptr0 + 1;
                }
                caml_call_gc(v7, v3);
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = v6;
            *(ptr0 + 2) = v7;
            return ptr0 + 1;
        }
        v0 = v5;
        v2 = v4;
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
        int v4 = caml_c_call();
        if(v4 == 1) {
            return result;
        }
        v0 = v1;
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
    int* ptr0;
    int v0;
    int v1;
    while(ptr0 != 1) {
        int v2 = param0;
        int v3 = v1;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        int result = *(ptr0 + 1);
        caml_apply2(**(int***)(param0 + 12));
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
int camlHashtbl__fold_1138(unsigned int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 28);
        caml_young_ptr -= 28;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)param0, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlHashtbl__do_bucket_1142;
    *(ptr0 + 4) = v0;
    int v2 = *(int*)(v1 + 4);
    unsigned int* ptr1 = (unsigned int*)(ptr0 + 6);
    ptr1[-1] = 0x400;
    ptr1[0] = param0;
    int v3 = 1;
    int v4 = ((*(int*)(v2 - 4) >>> 9) | 0x1) - 2;
    if(v4 >= 1) {
        int v5 = v4;
        int v6 = 1;
        unsigned int* ptr2 = ptr1;
        int v7 = v2;
        int v8 = (int)(ptr0 + 1);
        while((unsigned int)(*(int*)(v7 - 4) >>> 9) > (unsigned int)v3) {
            int v9 = camlHashtbl__do_bucket_1142(v8);
            ptr1 = ptr2;
            caml_modify(ptr1, (unsigned int)v9);
            int v10 = v6;
            v3 = v6 + 2;
            v6 += 2;
            if(v10 == v5) {
                return (int)ptr1[0];
            }
        }
        /*BAD_CALL!*/ caml_ml_array_bound_error();
    }
    return (int)ptr1[0];
}

int camlHashtbl__hash_1031() {
    return caml_hash_univ_param(21, 201);
}

int camlHashtbl__insert_bucket_1068(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1;
    if(ptr1 != 1) {
        int v2 = v1;
        int v3 = *(ptr1 + 1);
        int v4 = *ptr1;
        camlHashtbl__insert_bucket_1068();
        int v5 = v2;
        int v6 = *(int*)(v5 + 12) >> 1;
        if(v6) {
            v0 = v6;
            v2 = v5;
            int v7 = **(unsigned int*)(v5 + 8)(v5);
            param1 = (v7 >> 1) % v0;
        }
        else {
            caml_raise_exn();
        }
        int v8 = *(int*)(v2 + 16);
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 16);
                caml_young_ptr -= 16;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v8, (int)(unsigned int)(param1 * 2 + 1));
                }
            }
            *ptr0 = 0xc00;
            *(int*)(unsigned int)(ptr0 + 1) = v4;
            *(ptr0 + 2) = v3;
            int v9 = *(int*)(v2 + 16);
            if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v9 - 4) >>> 9)) {
                *(ptr0 + 3) = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v9 - 2);
                caml_modify((unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v8 - 2), (unsigned int)(ptr0 + 1));
                return 1;
            }
            caml_ml_array_bound_error(v2, v3, v4, v0);
        }
        /*BAD_CALL!*/ caml_ml_array_bound_error(v2, v3, v4, v0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__iter_1129(int param0) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, v1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__do_bucket_1132;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v1;
    int v2 = *(int*)(v0 + 4);
    unsigned int v3 = 1;
    int v4 = ((*(int*)(v2 - 4) >>> 9) | 0x1) - 2;
    if(v4 >= 1) {
        int v5 = v4;
        unsigned int v6 = 1;
        int v7 = v2;
        int* ptr1 = ptr0 + 1;
        while((unsigned int)(*(int*)(v2 - 4) >>> 9) > v3) {
            camlHashtbl__do_bucket_1132();
            v3 = v6 + 2;
            v6 += 2;
            if(v4 + 2 == v6) {
                return 1;
            }
        }
        /*BAD_CALL!*/ caml_ml_array_bound_error();
    }
    return 1;
}

int camlHashtbl__length_1059() {
    int* ptr0;
    return *ptr0;
}

int camlHashtbl__mem_1122(int param0, int param1, int param2) {
    int v0;
    int result;
    int* ptr0;
    void* ptr1;
    int v1;
    int v2;
    void* ptr2;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)ptr2, v1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__mem_in_bucket_1125;
    *(ptr0 + 2) = 3;
    *(void**)(ptr0 + 3) = ptr2;
    int v3 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v3) {
        void* ptr3 = ptr2;
        result = caml_hash_univ_param(21, 201);
        v0 = (result >> 1) % v3;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v2 + 4) - 4) >>> 9)) {
        camlHashtbl__mem_in_bucket_1125();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, param0, param1, param2);
}

int camlHashtbl__mem_1227(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int* ptr1;
    void* ptr2;
    int v2;
    int v3;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(param0, v2);
        }
    }
    *ptr1 = 4343;
    *(ptr1 + 1) = &camlHashtbl__mem_in_bucket_1230;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = *(int*)(param0 + 12);
    *(ptr1 + 4) = v3;
    int v4 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v4) {
        v1 = v4;
        ptr0 = ptr1 + 1;
        v0 = v2;
        result = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((result & 0x7fffffff) >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(*(unsigned int*)(v0 + 4) - 1) >>> 9)) {
        camlHashtbl__mem_in_bucket_1230();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v0, (int)ptr0, v1, (int)ptr2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__mem_in_bucket_1125() {
    int* ptr0;
    int v0;
    while(ptr0 != 1) {
        int v1 = v0;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        int v2 = *ptr0;
        int v3 = *(int*)(v0 + 8);
        int v4 = v2;
        int v5 = caml_c_call();
        if(v5 == 1) {
            return 3;
        }
        ptr0 = ptr1;
        v0 = v1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__mem_in_bucket_1230() {
    int v0;
    int v1;
    int v2;
    while(v2 != 1) {
        int v3 = v1;
        int v4 = *(int*)(v2 + 8);
        caml_apply2(**(int***)(v1 + 8));
        if(v0 != 1) {
            return 3;
        }
        v2 = v4;
        v1 = v3;
    }
    return 1;
}

int camlHashtbl__remove_1080(int param0) {
    int v0;
    int* ptr0;
    int v1;
    int v2;
    int v3;
    void* ptr1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)ptr1, v3);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlHashtbl__remove_bucket_1083;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v2;
    *(void**)(ptr0 + 4) = ptr1;
    int v4 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v4) {
        void* ptr2 = ptr1;
        int v5 = caml_hash_univ_param(21, 201);
        v0 = (v5 >> 1) % v4;
    }
    else {
        caml_raise_exn();
    }
    unsigned int v6 = (unsigned int)(v0 * 2 + 1);
    int* ptr3 = *(unsigned int*)(v2 + 4);
    int* ptr4 = *(unsigned int*)(v2 + 4);
    if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(ptr3 - 1) >>> 9)) {
        if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v2 + 4) - 4) >>> 9)) {
            int* ptr5 = camlHashtbl__remove_bucket_1083();
            caml_modify((unsigned int*)((char*)(v6 * 2 + (int)ptr4) - 2), (unsigned int)ptr5);
            return 1;
        }
        caml_ml_array_bound_error((int)ptr4, (int)v6, v1, param0);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr3, (int)(unsigned int)(v0 * 2 + 1), v1, param0);
}

int camlHashtbl__remove_1185(int param0, int param1) {
    unsigned int v0;
    int* ptr0;
    unsigned int v1;
    int* ptr1;
    int v2;
    int v3;
    unsigned int v4;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(param0, (int)v4);
        }
    }
    *ptr1 = 5367;
    *(ptr1 + 1) = &camlHashtbl__remove_bucket_1188;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = *(int*)(param0 + 12);
    *(unsigned int*)(ptr1 + 4) = v4;
    *(ptr1 + 5) = v3;
    unsigned int v5 = (unsigned int)(*(int*)(*(int*)(v4 + 4) - 4) >>> 10);
    if(v5) {
        v1 = v5;
        ptr0 = ptr1 + 1;
        v0 = v4;
        int v6 = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((v6 & 0x7fffffff) >> 1) % (int)v1;
    }
    else {
        caml_raise_exn();
    }
    v1 = (unsigned int)(param1 * 2 + 1);
    unsigned int v7 = v0;
    unsigned int v8 = *(unsigned int*)(v7 + 4);
    v0 = *(unsigned int*)(v7 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(*(unsigned int*)(v7 + 4) - 4) >>> 9)) {
            int* ptr2 = camlHashtbl__remove_bucket_1188();
            caml_modify((unsigned int*)(v1 * 2 + v0 - 2), (unsigned int)ptr2);
            return 1;
        }
        caml_ml_array_bound_error((int)v8, (int)ptr0, (int)(unsigned int)(param1 * 2 + 1), v2);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)v8, (int)ptr0, (int)(unsigned int)(param1 * 2 + 1), v2);
}

int* camlHashtbl__remove_bucket_1083() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    if(ptr1 != 1) {
        int v2 = v0;
        int* result = *(unsigned int*)(ptr1 + 2);
        int v3 = *(ptr1 + 1);
        int v4 = *ptr1;
        int v5 = *ptr1;
        void* ptr2 = *(void**)(v0 + 12);
        int v6 = v4;
        int v7 = caml_c_call();
        if(v7 == 1) {
            int* ptr3 = *(unsigned int*)(v2 + 8);
            *ptr3 = *ptr3 - 2;
            return result;
        }
        int v8 = camlHashtbl__remove_bucket_1083();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v8, v1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v5;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = v8;
        return ptr0 + 1;
    }
    return (int*)0x1;
}

int* camlHashtbl__remove_bucket_1188() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    if(ptr1 != 1) {
        int v2 = v0;
        int* result = *(unsigned int*)(ptr1 + 2);
        int v3 = *(ptr1 + 1);
        int v4 = *ptr1;
        caml_apply2(**(unsigned int*)(v0 + 8));
        if(ptr1 != 1) {
            int* ptr2 = *(unsigned int*)(v2 + 12);
            *ptr2 = *ptr2 - 2;
            return result;
        }
        int v5 = camlHashtbl__remove_bucket_1188();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v5, v1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v4;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = v5;
        return ptr0 + 1;
    }
    return (int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__replace_1112(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0;
    unsigned int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &camlHashtbl__replace_bucket_1116;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v10;
    *(ptr0 + 4) = param0;
    unsigned int v12 = (unsigned int)(*(int*)(*(int*)(v11 + 4) - 4) >>> 10);
    if(v12) {
        v6 = (int)(ptr0 + 1);
        v5 = param0;
        v4 = v10;
        v3 = v11;
        void* ptr1 = (void*)v10;
        int v13 = caml_hash_univ_param(21, 201);
        v2 = (v13 >> 1) % (int)v12;
    }
    else {
        caml_raise_exn();
    }
    int v14 = v2 * 2 + 1;
    int v15 = *(int*)(v11 + 4);
    if((unsigned int)(v2 * 2 + 1) < (unsigned int)(*(int*)(v15 - 4) >>> 9)) {
        int v16 = sub_8057A20(v3, v4, v5, *(int*)((v2 * 2 + 1) * 2 + v15 - 2), v6, v7, v14, v8);
        v15 = *(int*)v16;
        if(v15 == &caml_exn_Not_found) {
            v15 = v3;
            v1 = *(int*)(v15 + 4);
            v0 = v14;
            if((unsigned int)(*(int*)(v1 - 4) >>> 9) > (unsigned int)v0) {
                goto loc_8057991;
            }
            else {
                caml_ml_array_bound_error(v3, v4, v5, v9);
                goto loc_8057A8C;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_8057A8C:
        caml_ml_array_bound_error(v3, v4, v5, v9);
        /*BAD_CALL!*/ camlHashtbl__mem_1122(v4, v5, v9);
    loc_8057991:
        int* ptr2 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr2) {
            *ptr2 = 0xc00;
            *(int*)(unsigned int)(ptr2 + 1) = v4;
            *(ptr2 + 2) = v5;
            *(ptr2 + 3) = v9;
            caml_modify((unsigned int*)(v0 * 2 + v1 - 2), (unsigned int)(ptr2 + 1));
            *(int*)v15 = *(int*)v15 + 2;
            if(((*(int*)(*(int*)(v15 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v15) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc(v0, v1);
    goto loc_8057991;
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
    int v7;
    int v8;
    int v9;
    int* ptr0;
    int v10;
    unsigned int v11;
    unsigned int v12;
    int v13;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 5367;
    *(int*)(int)(ptr0 + 1) = &camlHashtbl__replace_bucket_1221;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(param1 + 12);
    *(ptr0 + 4) = v13;
    *(ptr0 + 5) = param0;
    int v14 = *(int*)(*(int*)(v11 + 4) - 4) >>> 10;
    if(v14) {
        v9 = v14;
        v8 = (int)(ptr0 + 1);
        v7 = param1;
        v6 = param0;
        v5 = v13;
        v4 = (int)v11;
        int v15 = **(unsigned int*)(*(int*)(*(int*)(param1 + 16) + 8) + 4)((int)v11, v6, v9, v7, v8);
        v3 = ((v15 & 0x7fffffff) >> 1) % v9;
    }
    else {
        caml_raise_exn();
    }
    int v16 = v3 * 2 + 1;
    int v17 = *(int*)(v4 + 4);
    if((unsigned int)(v3 * 2 + 1) < (unsigned int)(*(int*)(v17 - 4) >>> 9)) {
        int v18 = sub_8057040(v4, v6, *(int*)((v3 * 2 + 1) * 2 + v17 - 2), v7, v8, v12, v16, v5, v10);
        v2 = *(int*)v18;
        if(v2 == &caml_exn_Not_found) {
            v2 = v4;
            v1 = *(int*)(v2 + 4);
            v0 = v16;
            if((unsigned int)(*(int*)(v1 - 4) >>> 9) > (unsigned int)v0) {
                goto loc_8056FB4;
            }
            else {
                caml_ml_array_bound_error(v4, v6, v9, v7);
                goto loc_80570AC;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_80570AC:
        caml_ml_array_bound_error(v4, v6, v9, v7);
        /*BAD_CALL!*/ camlHashtbl__mem_1227(param0, param1);
    loc_8056FB4:
        int* ptr1 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr1) {
            *ptr1 = 0xc00;
            *(int*)(unsigned int)(ptr1 + 1) = v5;
            *(ptr1 + 2) = v6;
            *(ptr1 + 3) = v9;
            caml_modify((unsigned int*)(v0 * 2 + v1 - 2), (unsigned int)(ptr1 + 1));
            *(int*)v2 = *(int*)v2 + 2;
            if(((*(int*)(*(int*)(v2 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v2) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc(v0, v1);
    goto loc_8056FB4;
}

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
        int v7 = caml_c_call();
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
        int v8 = camlHashtbl__replace_bucket_1116();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v8, param1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v5;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = v8;
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
        int v5 = camlHashtbl__replace_bucket_1221();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v5, param1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v4;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = v5;
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

int camlHashtbl__resize_1061(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    unsigned int* ptr2;
    int v0;
    int* ptr3;
    unsigned int v1;
    int v2;
camlHashtbl__resize_1061:
    while(1) {
        ptr2 = ptr2 - 6;
        *ptr2 = v1;
        *(ptr2 + 4) = ptr3;
        int v3 = *(ptr3 + 1);
        *(int*)(ptr2 + 5) = *(ptr3 + 1);
        *(int*)(ptr2 + 2) = (*(int*)(v3 - 4) >>> 9) | 0x1;
        --ptr2;
        *ptr2 = &loc_80572F2;
        int v4 = /*BAD_CALL!*/ camlPervasives__min_1022();
        int v5 = *(int*)(ptr2 + 2);
        if(v4 == v5) {
            break;
        }
        else {
            *(int*)(ptr2 + 1) = v4;
            *(int*)(ptr2 + 2) = v5;
            --ptr2;
            *ptr2 = 1;
            --ptr2;
            *ptr2 = v4;
            --ptr2;
            *ptr2 = &loc_8057313;
            int v6 = /*BAD_CALL!*/ caml_c_call();
            ptr2 += 2;
            *(int*)(ptr2 + 3) = v6;
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    --ptr2;
                    *ptr2 = &loc_80573DE;
                    /*BAD_CALL!*/ caml_call_gc(v2, v0);
                }
            }
            *ptr1 = 5367;
            *(ptr1 + 1) = &camlHashtbl__insert_bucket_1068;
            *(ptr1 + 2) = 3;
            *(ptr1 + 3) = *ptr2;
            *(ptr1 + 4) = *(int*)(ptr2 + 1);
            *(ptr1 + 5) = v6;
            unsigned int v7 = 1;
            v5 = *(int*)(ptr2 + 2) - 2;
            if(v5 >= 1) {
                *(int*)(ptr2 + 2) = v5;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = ptr1 + 1;
                do {
                    int v8 = *(int*)(ptr2 + 5);
                    int v9 = *(int*)(v8 - 4) >>> 9;
                    --ptr2;
                    if(v7 < (unsigned int)v9) {
                        *ptr2 = &loc_8057391;
                        /*BAD_CALL!*/ camlHashtbl__insert_bucket_1068(v9, v0);
                        int v10 = *(int*)(ptr2 + 1);
                        v7 = (unsigned int)(v10 + 2);
                        *(ptr2 + 1) = (unsigned int)(v10 + 2);
                        if(*(int*)(ptr2 + 2) == v10) {
                            break;
                        }
                    }
                    else {
                        *ptr2 = &loc_80573E8;
                        int* ptr4 = (int*)/*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2), *(int*)(ptr2 + 3), *(int*)(ptr2 + 4));
                        --ptr2;
                        int v11 = *(int*)(*(ptr4 + 1) - 4) >>> 10;
                        if(v11) {
                            *ptr2 = v2;
                            --ptr2;
                            *ptr2 = v8;
                            --ptr2;
                            *ptr2 = 201;
                            --ptr2;
                            *ptr2 = 21;
                            --ptr2;
                            *ptr2 = &loc_8057412;
                            int v12 = /*BAD_CALL!*/ caml_hash_univ_param(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2));
                            ptr2 += 3;
                            param0 = v11;
                            param1 = (v12 >> 1) % param0;
                        }
                        else {
                            --ptr2;
                            *ptr2 = &loc_805742A;
                            /*BAD_CALL!*/ caml_raise_exn();
                        }
                        unsigned int v13 = (unsigned int)(param1 * 2 + 1);
                        while(1) {
                            ptr0 = (int*)(caml_young_ptr - 16);
                            caml_young_ptr -= 16;
                            if(caml_young_limit <= (unsigned int)ptr0) {
                                break;
                            }
                            else {
                                --ptr2;
                                *ptr2 = &loc_80574CE;
                                /*BAD_CALL!*/ caml_call_gc(param0, (int)v13);
                            }
                        }
                        *ptr0 = 0xc00;
                        *(ptr0 + 1) = v8;
                        *(ptr0 + 2) = *ptr2;
                        int v14 = *(ptr4 + 1);
                        if((unsigned int)(*(int*)(v14 - 4) >>> 9) > v13) {
                            *(ptr0 + 3) = *(int*)(v13 * 2 + v14 - 2);
                            int v15 = *(ptr4 + 1);
                            if((unsigned int)(*(int*)(v15 - 4) >>> 9) > v13) {
                                --ptr2;
                                *ptr2 = ptr0 + 1;
                                --ptr2;
                                *ptr2 = v13 * 2 + v15 - 2;
                                --ptr2;
                                *ptr2 = &loc_805748A;
                                /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr2 + 1), *(ptr2 + 2));
                                ptr2 += 2;
                                *ptr4 = *ptr4 + 2;
                                if(((*(int*)(*(ptr4 + 1) - 4) >>> 9) | 0x1) * 2 - 1 < *ptr4) {
                                    v1 = gvar_80784C0;
                                    ptr3 = ptr4;
                                    ++ptr2;
                                    continue camlHashtbl__resize_1061;
                                }
                                else {
                                    jump *(int*)(ptr2 + 1);
                                }
                            }
                            --ptr2;
                            *ptr2 = &loc_80574D8;
                            /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2), *(int*)(ptr2 + 3), *(int*)(ptr2 + 4));
                        }
                        --ptr2;
                        *ptr2 = &loc_80574DD;
                        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2), *(int*)(ptr2 + 3), *(int*)(ptr2 + 4));
                    }
                }
                while(1);
            }
            int v16 = *(int*)(ptr2 + 3);
            --ptr2;
            *ptr2 = v16;
            int v17 = *(int*)(ptr2 + 5) + 4;
            --ptr2;
            *ptr2 = v17;
            --ptr2;
            *ptr2 = &loc_80573B8;
            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr2 + 1), *(ptr2 + 2));
            jump *(int*)(ptr2 + 8);
        }
    }
    jump *(int*)(ptr2 + 6);
}

int camlHashtbl__safehash_1177() {
    int v0;
    int v1 = **(unsigned int*)(*(int*)(v0 + 8) + 4)();
    return v1 & 0x7fffffff;
}

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
        int v5 = caml_c_call();
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

int camlList__assq_1174(int param0, int param1) {
    int v0;
    unsigned int* ptr0;
    while(ptr0 != 1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        int* ptr2 = *ptr0;
        param1 = *(ptr2 + 1);
        param0 = *ptr2;
        if(v0 == param0) {
            return param1;
        }
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

int camlList__chop_1243(int param0, int param1) {
    int result;
    int v0;
    while(v0 != 1) {
        if(result == 1) {
            while(1) {
                int* ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = &caml_exn_Assert_failure;
                    *(ptr0 + 2) = &camlList__39;
                    caml_raise_exn();
                }
                caml_call_gc(param0, param1);
            }
            return;
        }
        result = *(int*)(result + 4);
        v0 -= 2;
    }
    return result;
}

unsigned int* camlList__combine_1226(int param0) {
    int v0;
    int v1;
    int v2;
    int* ptr0;
    int* ptr1;
    int v3;
    if(ptr0 != 1) {
        if(ptr1 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, v3);
            caml_call_gc(v0, v3);
        }
        else {
            v0 = camlList__combine_1226(*ptr0, *ptr1);
        }
        goto loc_8054BFE;
    }
    if(ptr1 == 1) {
        return (unsigned int*)0x1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, v3);
    caml_call_gc(v0, v3);
loc_8054BFE:
    int* ptr2 = (int*)(caml_young_ptr - 24);
    caml_young_ptr -= 24;
    if(caml_young_limit <= (unsigned int)ptr2) {
        *ptr2 = 0x800;
        *(ptr2 + 1) = v1;
        *(ptr2 + 2) = v2;
        *(ptr2 + 3) = 0x800;
        *(unsigned int*)(ptr2 + 4) = ptr2 + 1;
        *(ptr2 + 5) = v0;
        return (unsigned int*)(ptr2 + 4);
    }
    caml_call_gc(v0, v3);
    goto loc_8054BFE;
}

int camlList__entry() {
    gvar_80772A8 = &camlList__38;
    camlList = &camlList__37;
    gvar_8077208 = &camlList__36;
    gvar_807720C = &camlList__35;
    gvar_8077210 = &camlList__34;
    gvar_8077218 = gvar_8075558;
    gvar_807721C = &camlList__33;
    gvar_8077214 = &camlList__32;
    gvar_8077224 = &camlList__31;
    gvar_8077220 = gvar_8077224;
    gvar_807722C = &camlList__30;
    gvar_8077230 = &camlList__29;
    gvar_8077228 = &camlList__28;
    gvar_8077234 = &camlList__27;
    gvar_8077238 = &camlList__26;
    gvar_8077240 = &camlList__25;
    gvar_8077244 = &camlList__24;
    gvar_807723C = &camlList__23;
    gvar_8077248 = &camlList__22;
    gvar_807724C = &camlList__21;
    gvar_8077250 = &camlList__20;
    gvar_8077254 = &camlList__19;
    gvar_8077258 = &camlList__18;
    gvar_807725C = &camlList__17;
    gvar_8077260 = &camlList__16;
    gvar_8077264 = &camlList__15;
    gvar_8077278 = &camlList__14;
    gvar_807727C = &camlList__13;
    gvar_8077280 = &camlList__12;
    gvar_8077284 = &camlList__11;
    gvar_8077288 = &camlList__10;
    gvar_807728C = &camlList__9;
    gvar_8077268 = &camlList__8;
    gvar_8077270 = &camlList__7;
    gvar_807726C = gvar_8077270;
    gvar_8077274 = &camlList__6;
    gvar_8077290 = &camlList__5;
    gvar_8077294 = &camlList__4;
    gvar_80772A4 = &camlList__3;
    gvar_80772AC = &camlList__2;
    gvar_807729C = &camlList__1;
    gvar_8077298 = gvar_807729C;
    gvar_80772A0 = gvar_807729C;
    return 1;
}

int camlList__exists2_1153(int param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    while(v1 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v3);
        }
        int v4 = v3;
        int v5 = *(int*)(param0 + 4);
        int v6 = *(int*)(v1 + 4);
        caml_apply2(v3);
        if(v0 != 1) {
            return 3;
        }
        v2 = v3;
        v1 = v6;
        param0 = v5;
    }
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v3);
    }
    return 1;
}

int camlList__exists_1141() {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    while(ptr3 != 1) {
        int v0 = *ptr2((int)ptr2, (int)*(unsigned int*)(ptr3 + 1));
        if(v0 != 1) {
            return 3;
        }
        ptr2 = ptr0;
        ptr3 = ptr1;
    }
    return 1;
}

int camlList__find_1201(int param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = ptr0;
    while(ptr1 != 1) {
        int* ptr3 = ptr2;
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        int result = *ptr1;
        int v0 = *ptr2();
        if(v0 != 1) {
            return result;
        }
        ptr0 = ptr3;
        ptr1 = ptr4;
        ptr2 = ptr0;
    }
    while(1) {
        int* ptr5 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr5) {
            *ptr5 = 0x400;
            *(ptr5 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, (int)ptr2);
    }
}

int camlList__find_1207(int* param0) {
    int result;
    int v0;
    int* ptr0;
    int* ptr1;
    int v1;
loc_8053376:
    while(ptr1 != 1) {
        int* ptr2 = param0;
        int* ptr3 = ptr0;
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        int v2 = *ptr1;
        result = *(int*)param0[3](*ptr1, (int)ptr3, (int)ptr4, (int)ptr2);
        if(result == 1) {
            ptr0 = ptr3;
            ptr1 = ptr4;
            param0 = ptr2;
        }
        else {
            while(1) {
                unsigned int v3 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v3) {
                loc_80533AD:
                    ptr0 = (int*)(v3 + 4);
                    *(ptr0 - 1) = 0x800;
                    *ptr0 = v2;
                    *(unsigned int*)(ptr0 + 1) = ptr3;
                    ptr1 = ptr4;
                    param0 = ptr2;
                    continue loc_8053376;
                }
                else {
                    caml_call_gc(v0, v1);
                }
            }
            goto loc_80533AD;
        }
    }
    camlList__rev_append_1051(param0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__find_all_1205(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlList__find_1207;
    *(ptr0 + 4) = v0;
    *(ptr0 + 1){caml_curry2}();
    return result;
}

unsigned int* camlList__flatten_1058() {
    int* ptr0;
    if(ptr0 != 1) {
        camlList__flatten_1058(*ptr0);
        return camlPervasives__$40_1143();
    }
    return (unsigned int*)0x1;
}

int camlList__fold_left2_1119(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    while(param0 != 1) {
        if(param1 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
        }
        int* ptr1 = ptr0;
        int v1 = *(int*)(param1 + 4);
        int v2 = *(int*)param1;
        int v3 = *(int*)(param0 + 4);
        caml_apply3(v2, ptr0);
        result = v0;
        ptr0 = ptr1;
        param0 = v3;
        param1 = v1;
    }
    if(param1 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__fold_left_1078(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int i;
    for(i = v1; param0 != 1; i = v1) {
        int* ptr1 = ptr0;
        int v2 = *(int*)(param0 + 4);
        caml_apply2(ptr0);
        v1 = v0;
        ptr0 = ptr1;
        param0 = v2;
    }
    return i;
}

int camlList__fold_right2_1128(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int result1;
    if(ptr1 != 1) {
        if(v0 != 1) {
            int* ptr2 = ptr0;
            int* ptr3 = *(int**)v0;
            int result = camlList__fold_right2_1128(*ptr1, *(int*)v0, (int)ptr0);
            caml_apply3(result, ptr0);
            return result;
        }
    }
    else if(v0 == 1) {
        return result1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, result1);
}

int* camlList__fold_right_1084(int param0) {
    int v0;
    int* ptr0;
    int result1;
    if(ptr0 != 1) {
        int v1 = v0;
        int* result = (int*)camlList__fold_right_1084(*ptr0, v0);
        caml_apply2(v1);
        return result;
    }
    return result1;
}

int camlList__for_all2_1145(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
loc_8054603:
    do {
        v0 = v3;
        if(v2 != 1) {
            if(param0 == 1) {
                /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v0);
            }
            int v4 = v0;
            int v5 = *(int*)(param0 + 4);
            int v6 = *(int*)(v2 + 4);
            caml_apply2(v0);
            if(v1 != 1) {
                v3 = v4;
                v2 = v6;
                param0 = v5;
                goto loc_8054603;
            }
            else {
                return 1;
            }
        }
    }
    while(v2 != 1);
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v0);
    }
    return 3;
}

int camlList__for_all_1137() {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    while(ptr3 != 1) {
        int v0 = *ptr2((int)ptr2, (int)*(unsigned int*)(ptr3 + 1));
        if(v0 != 1) {
            ptr2 = ptr0;
            ptr3 = ptr1;
        }
        else {
            return 1;
        }
    }
    return 3;
}

int camlList__hd_1036(int param0, int param1) {
    int* ptr0;
    if(ptr0 == 1) {
        /*NO_RETURN*/ camlPervasives__failwith_1010(param0, param1);
    }
    return *ptr0;
}

int camlList__iter2_1111(int param0) {
    int v0;
    int v1;
    int v2 = v1;
    while(v0 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v2);
        }
        int v3 = v2;
        int v4 = *(int*)(param0 + 4);
        int v5 = *(int*)(v0 + 4);
        caml_apply2(v2);
        v1 = v2;
        v0 = v5;
        param0 = v4;
    }
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v2);
    }
    return 1;
}

int camlList__iter_1074() {
    int v0;
    int* ptr0;
    while(v0 != 1) {
        int* ptr1 = ptr0;
        int v1 = *(int*)(v0 + 4);
        *ptr0((int)ptr1, *(int*)(v0 + 4));
        ptr0 = ptr1;
        v0 = v1;
    }
    return 1;
}

int camlList__length_1034() {
    return camlList__length_aux_1030();
}

int camlList__length_aux_1030() {
    int result;
    int v0;
    while(v0 != 1) {
        v0 = *(int*)(v0 + 4);
        result = result + 2;
    }
    return result;
}

int* camlList__map2_1090(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    if(v2 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v1);
            caml_call_gc(param0, v3);
        }
        else {
            int v4 = v1;
            int v5 = *(int*)(param0 + 4);
            int v6 = *(int*)(v2 + 4);
            caml_apply2(v1);
            v0 = v1;
            param0 = camlList__map2_1090();
        }
        goto loc_8054398;
    }
    if(param0 == 1) {
        return (int*)0x1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, v1);
    caml_call_gc(param0, v3);
loc_8054398:
    int* ptr0 = (int*)(caml_young_ptr - 12);
    caml_young_ptr -= 12;
    if(caml_young_limit <= (unsigned int)ptr0) {
        *ptr0 = 0x800;
        *(ptr0 + 1) = v0;
        *(ptr0 + 2) = param0;
        return ptr0 + 1;
    }
    caml_call_gc(param0, v3);
    goto loc_8054398;
}

int* camlList__map_1062() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    if(v0 != 1) {
        int* ptr2 = ptr1;
        int v2 = *(int*)(v0 + 4);
        int v3 = *ptr1((int)ptr2, *(int*)(v0 + 4));
        int v4 = camlList__map_1062();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v4, v1);
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v3;
        *(ptr0 + 2) = v4;
        return ptr0 + 1;
    }
    return (int*)0x1;
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
        v0 = v1;
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
        int v3 = caml_c_call();
        if(v3 == 1) {
            return 3;
        }
        v0 = v1;
        ptr0 = ptr1;
    }
    return 1;
}

int camlList__mem_assq_1184() {
    unsigned int* ptr0;
    int v0;
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
    int* ptr0;
    int v0;
    while(ptr0 != 1) {
        int* ptr1 = *(unsigned int*)(ptr0 + 1);
        if(*ptr0 == v0) {
            return 3;
        }
        ptr0 = ptr1;
    }
    return 1;
}

int* camlList__merge_1233(int* param0) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* result;
    int v1;
    if(result == 1) {
        return param0;
    }
    else if(param0 != 1) {
        int* ptr2 = param0;
        int* ptr3 = result;
        int v2 = v0;
        int v3 = *(param0 + 1);
        int v4 = *param0;
        int v5 = *(result + 1);
        int v6 = *result;
        caml_apply2(v2);
        if(v0 <= 1) {
            param0 = (int*)camlList__merge_1233();
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc((int)param0, v1);
                }
            }
            *ptr1 = 0x800;
            *(ptr1 + 1) = v6;
            *(unsigned int*)(ptr1 + 2) = param0;
            return ptr1 + 1;
        }
        param0 = (int*)camlList__merge_1233();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)param0, v1);
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v4;
        *(unsigned int*)(ptr0 + 2) = param0;
        return ptr0 + 1;
    }
    return result;
}

int camlList__nth_1042(int param0, int param1) {
    int v0;
    if(v0 < 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    return camlList__nth_aux_1045(&camlList__48, param1);
}

int camlList__nth_aux_1045(int param0, int param1) {
    int v0;
    int v1;
    while(v0 != 1) {
        param0 = *(int*)(v0 + 4);
        int result = *(int*)v0;
        if(v1 == 1) {
            return result;
        }
        v1 -= 2;
        v0 = param0;
    }
    /*NO_RETURN*/ camlPervasives__failwith_1010(param0, param1);
}

unsigned int* camlList__part_1215(unsigned int* param0, int param1) {
    int* ptr0;
    unsigned int v0;
    unsigned int v1;
    int* ptr1;
    unsigned int* ptr2;
    int* ptr3;
    int v2;
    unsigned int* ptr4;
    for(unsigned int* i = ptr2; param0 != 1; i = ptr2) {
        int v3 = param1;
        unsigned int* ptr5 = ptr4;
        unsigned int* ptr6 = *(param0 + 1);
        ptr1 = *param0;
        int v4 = **(unsigned int*)(param1 + 12)(*param0);
        if(v4 != 1) {
            while(1) {
                v1 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v1) {
                    break;
                }
                else {
                    caml_call_gc((int)ptr3, v2);
                }
            }
            ptr2 = (unsigned int*)(v1 + 4);
            *(int*)(ptr2 - 1) = 0x800;
            *ptr2 = ptr1;
            *(ptr2 + 1) = i;
            ptr4 = ptr5;
        }
        else {
            while(1) {
                v0 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v0) {
                    break;
                }
                else {
                    caml_call_gc((int)ptr3, v2);
                }
            }
            ptr4 = (unsigned int*)(v0 + 4);
            *(int*)(ptr4 - 1) = 0x800;
            *ptr4 = ptr1;
            *(ptr4 + 1) = ptr5;
            ptr2 = i;
        }
        param0 = ptr6;
        param1 = v3;
    }
    ptr1 = camlList__rev_append_1051((int*)0x1);
    int* ptr7 = camlList__rev_append_1051(ptr3);
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)ptr3, v2);
        }
    }
    *ptr0 = 0x800;
    *(int**)(ptr0 + 1) = ptr7;
    *(int**)(ptr0 + 2) = ptr1;
    return (unsigned int*)(ptr0 + 1);
}

int camlList__partition_1212(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    unsigned int* ptr1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc((int)ptr1, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlList__part_1215;
    *(ptr0 + 4) = v0;
    camlList__part_1215(ptr1, (int)(ptr0 + 1));
    return result;
}

unsigned int* camlList__remove_assoc_1189() {
    int* ptr0;
    void* ptr1;
    unsigned int* ptr2;
    int v0;
    if(ptr2 != 1) {
        void* ptr3 = ptr1;
        unsigned int* result = *(ptr2 + 1);
        unsigned int* ptr4 = *ptr2;
        int v1 = caml_c_call();
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

unsigned int* camlList__remove_assq_1195() {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    unsigned int* ptr2;
    int v1;
    if(ptr2 != 1) {
        unsigned int* result = *(ptr2 + 1);
        int* ptr3 = *ptr2;
        if(*ptr3 == v0) {
            return result;
        }
        int v2 = camlList__remove_assq_1195((int)ptr3);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v2, v1);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr1;
        *(ptr0 + 2) = v2;
        return (unsigned int*)(ptr0 + 1);
    }
    return (unsigned int*)0x1;
}

int* camlList__rev_1056(int* param0) {
    return camlList__rev_append_1051(param0);
}

int* camlList__rev_append_1051(int* param0) {
    unsigned int v0;
    int* ptr0;
    int* result;
    while(ptr0 != 1) {
        int* ptr1 = *(unsigned int*)(ptr0 + 1);
        int v1 = *ptr0;
        while(1) {
            v0 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v0) {
                break;
            }
            else {
                caml_call_gc((int)param0, v1);
            }
        }
        param0 = (int*)(v0 + 4);
        *(param0 - 1) = 0x800;
        *param0 = v1;
        *(unsigned int*)(param0 + 1) = result;
        ptr0 = ptr1;
        result = param0;
    }
    return result;
}

int camlList__rev_map2_1099(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlList__rmap2_f_1103;
    *(ptr0 + 4) = v0;
    camlList__rmap2_f_1103(param0, (int)(ptr0 + 1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__rev_map_1067(int param0) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, v0);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlList__rmap_f_1070;
    *(ptr0 + 4) = v0;
    camlList__rmap_f_1070((int)(ptr0 + 1));
    return result;
}

int camlList__rev_merge_1251(int* param0, int param1) {
    unsigned int v0;
    int result;
    unsigned int v1;
    int v2;
    int v3;
    int* ptr0;
    int* ptr1;
    int v4;
    while(ptr0 != 1) {
        if(ptr1 != 1) {
            int v5 = param1;
            int* ptr2 = param0;
            int* ptr3 = ptr1;
            int* ptr4 = ptr0;
            int* ptr5 = *(unsigned int*)(ptr1 + 1);
            int v6 = *ptr1;
            int* ptr6 = *(unsigned int*)(ptr0 + 1);
            int v7 = *ptr0;
            caml_apply2(*(int*)(param1 + 12));
            if(v4 <= 1) {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        result = caml_call_gc(v2, v3);
                    }
                }
                param0 = (int*)(v1 + 4);
                param0[-1] = 0x800;
                param0[0] = v7;
                param0[1] = (int)ptr2;
                ptr0 = ptr6;
                ptr1 = ptr3;
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc(v2, v3);
                    }
                }
                param0 = (int*)(v0 + 4);
                param0[-1] = 0x800;
                param0[0] = v6;
                param0[1] = (int)ptr2;
                ptr0 = ptr4;
                ptr1 = ptr5;
            }
            param1 = v5;
        }
        else {
            camlList__rev_append_1051(param0);
            return result;
        }
    }
    int* ptr7 = camlList__rev_append_1051(param0);
    return (int)ptr7;
}

int camlList__rev_merge_rev_1261(int* param0, int param1) {
    unsigned int v0;
    int result;
    unsigned int v1;
    int v2;
    int v3;
    int* ptr0;
    int* ptr1;
    int v4;
    while(ptr0 != 1) {
        if(ptr1 != 1) {
            int v5 = param1;
            int* ptr2 = param0;
            int* ptr3 = ptr1;
            int* ptr4 = ptr0;
            int* ptr5 = *(unsigned int*)(ptr1 + 1);
            int v6 = *ptr1;
            int* ptr6 = *(unsigned int*)(ptr0 + 1);
            int v7 = *ptr0;
            caml_apply2(*(int*)(param1 + 12));
            if(v4 > 1) {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        result = caml_call_gc(v2, v3);
                    }
                }
                param0 = (int*)(v1 + 4);
                param0[-1] = 0x800;
                param0[0] = v7;
                param0[1] = (int)ptr2;
                ptr0 = ptr6;
                ptr1 = ptr3;
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc(v2, v3);
                    }
                }
                param0 = (int*)(v0 + 4);
                param0[-1] = 0x800;
                param0[0] = v6;
                param0[1] = (int)ptr2;
                ptr0 = ptr4;
                ptr1 = ptr5;
            }
            param1 = v5;
        }
        else {
            camlList__rev_append_1051(param0);
            return result;
        }
    }
    int* ptr7 = camlList__rev_append_1051(param0);
    return (int)ptr7;
}

int camlList__rev_sort_1272(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    int* ptr6;
    int* ptr7;
    int v0;
    unsigned int* ptr8;
    int v1;
    int v2;
    int result;
    int v3;
    unsigned int* ptr9;
    if(result != 5) {
        v2 = param0;
        if(result == 7 && ptr9 != 1) {
            unsigned int* ptr10 = *(ptr9 + 1);
            if(ptr10 != 1) {
                param1 = *(int*)(ptr10 + 1);
                if(param1 != 1) {
                    v1 = *(int*)param1;
                    ptr8 = *ptr10;
                    v0 = *ptr9;
                    caml_apply2(*(int*)(param0 + 12));
                    if(result > 1) {
                        caml_apply2(*(int*)(v2 + 12));
                        if(result > 1) {
                            while(1) {
                                ptr7 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr7) {
                                    break;
                                }
                                else {
                                    caml_call_gc(param0, v3);
                                }
                            }
                            *ptr7 = 0x800;
                            *(ptr7 + 1) = v1;
                            *(ptr7 + 2) = 1;
                            *(ptr7 + 3) = 0x800;
                            *(unsigned int*)(ptr7 + 4) = ptr8;
                            *(unsigned int*)(ptr7 + 5) = ptr7 + 1;
                            *(ptr7 + 6) = 0x800;
                            *(int*)(int)(ptr7 + 7) = v0;
                            *(unsigned int*)(ptr7 + 8) = (unsigned int*)(ptr7 + 4);
                            return (int)(ptr7 + 7);
                        }
                        caml_apply2(*(int*)(v2 + 12));
                        if(result > 1) {
                            while(1) {
                                ptr6 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr6) {
                                    break;
                                }
                                else {
                                    caml_call_gc(param0, v3);
                                }
                            }
                            *ptr6 = 0x800;
                            *(unsigned int*)(ptr6 + 1) = ptr8;
                            *(ptr6 + 2) = 1;
                            *(ptr6 + 3) = 0x800;
                            *(ptr6 + 4) = v1;
                            *(unsigned int*)(ptr6 + 5) = (unsigned int*)(ptr6 + 1);
                            *(ptr6 + 6) = 0x800;
                            *(int*)(int)(ptr6 + 7) = v0;
                            *(unsigned int*)(ptr6 + 8) = (unsigned int*)(ptr6 + 4);
                            return (int)(ptr6 + 7);
                        }
                        while(1) {
                            ptr5 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr5) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr5 = 0x800;
                        *(unsigned int*)(ptr5 + 1) = ptr8;
                        *(ptr5 + 2) = 1;
                        *(ptr5 + 3) = 0x800;
                        *(unsigned int*)(ptr5 + 4) = v0;
                        *(unsigned int*)(ptr5 + 5) = (unsigned int*)(ptr5 + 1);
                        *(ptr5 + 6) = 0x800;
                        *(int*)(int)(ptr5 + 7) = v1;
                        *(unsigned int*)(ptr5 + 8) = (unsigned int*)(ptr5 + 4);
                        return (int)(ptr5 + 7);
                    }
                    caml_apply2(*(int*)(v2 + 12));
                    if(result > 1) {
                        while(1) {
                            ptr4 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr4) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr4 = 0x800;
                        *(ptr4 + 1) = v1;
                        *(ptr4 + 2) = 1;
                        *(ptr4 + 3) = 0x800;
                        *(unsigned int*)(ptr4 + 4) = v0;
                        *(unsigned int*)(ptr4 + 5) = ptr4 + 1;
                        *(ptr4 + 6) = 0x800;
                        *(unsigned int**)(int)(ptr4 + 7) = ptr8;
                        *(unsigned int*)(ptr4 + 8) = (unsigned int*)(ptr4 + 4);
                        return (int)(ptr4 + 7);
                    }
                    caml_apply2(*(int*)(v2 + 12));
                    if(result > 1) {
                        while(1) {
                            ptr3 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr3) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr3 = 0x800;
                        *(ptr3 + 1) = v0;
                        *(ptr3 + 2) = 1;
                        *(ptr3 + 3) = 0x800;
                        *(ptr3 + 4) = v1;
                        *(unsigned int*)(ptr3 + 5) = ptr3 + 1;
                        *(ptr3 + 6) = 0x800;
                        *(unsigned int**)(int)(ptr3 + 7) = ptr8;
                        *(unsigned int*)(ptr3 + 8) = (unsigned int*)(ptr3 + 4);
                        return (int)(ptr3 + 7);
                    }
                    while(1) {
                        ptr2 = (int*)(caml_young_ptr - 36);
                        caml_young_ptr -= 36;
                        if(caml_young_limit <= (unsigned int)ptr2) {
                            break;
                        }
                        else {
                            caml_call_gc(param0, v3);
                        }
                    }
                    *ptr2 = 0x800;
                    *(ptr2 + 1) = v0;
                    *(ptr2 + 2) = 1;
                    *(ptr2 + 3) = 0x800;
                    *(unsigned int*)(ptr2 + 4) = ptr8;
                    *(unsigned int*)(ptr2 + 5) = ptr2 + 1;
                    *(ptr2 + 6) = 0x800;
                    *(int*)(int)(ptr2 + 7) = v1;
                    *(unsigned int*)(ptr2 + 8) = (unsigned int*)(ptr2 + 4);
                    return (int)(ptr2 + 7);
                }
            }
        }
    }
    else {
        if(ptr9 != 1) {
            param1 = *(int*)(ptr9 + 1);
            if(param1 != 1) {
                v1 = *(int*)param1;
                ptr8 = *ptr9;
                caml_apply2(*(int*)(param0 + 12));
                if(result > 1) {
                    while(1) {
                        ptr1 = (int*)(caml_young_ptr - 24);
                        caml_young_ptr -= 24;
                        if(caml_young_limit <= (unsigned int)ptr1) {
                            break;
                        }
                        else {
                            caml_call_gc(param0, v3);
                        }
                    }
                    *ptr1 = 0x800;
                    *(ptr1 + 1) = v1;
                    *(ptr1 + 2) = 1;
                    *(ptr1 + 3) = 0x800;
                    *(unsigned int**)(int)(ptr1 + 4) = ptr8;
                    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
                    return (int)(ptr1 + 4);
                }
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 24);
                    caml_young_ptr -= 24;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(param0, v3);
                    }
                }
                *ptr0 = 0x800;
                *(unsigned int*)(ptr0 + 1) = ptr8;
                *(ptr0 + 2) = 1;
                *(ptr0 + 3) = 0x800;
                *(int*)(int)(ptr0 + 4) = v1;
                *(unsigned int*)(ptr0 + 5) = (unsigned int*)(ptr0 + 1);
                return result;
            }
        }
        v2 = param0;
    }
    ptr8 = ptr9;
    v0 = result - ((result >> 1) | 0x1) + 1;
    int v4 = camlList__chop_1243((result >> 1) | 0x1, param1);
    v1 = camlList__sort_1271(v2 - 16, v3);
    camlList__sort_1271(v2 - 16, v3);
    return camlList__rev_merge_1251((int*)0x1, *(int*)(v2 + 16));
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlList__rmap2_f_1103(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int* ptr0;
    int v3;
    int v4;
    int v5;
    int* result;
    int v6;
    int v7;
loc_80532D6:
    if(v5 != 1) {
        if(param0 != 1) {
            v3 = param1;
            ptr0 = result;
            v2 = *(int*)(param0 + 4);
            v1 = *(int*)(v5 + 4);
            caml_apply2(*(int**)(param1 + 12));
            v0 = v6;
            goto loc_8053307;
        }
    }
    else if(param0 == 1) {
        return result;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    caml_call_gc(v7, v4);
loc_8053307:
    unsigned int v8 = caml_young_ptr - 12;
    caml_young_ptr -= 12;
    if(caml_young_limit <= v8) {
        result = (int*)(v8 + 4);
        *(result - 1) = 0x800;
        *result = v0;
        *(unsigned int*)(result + 1) = ptr0;
        v5 = v1;
        param0 = v2;
        param1 = v3;
        goto loc_80532D6;
    }
    else {
        caml_call_gc(v7, v4);
        goto loc_8053307;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlList__rmap_f_1070(int param0) {
    unsigned int v0;
    int v1;
    int* result;
    while(v1 != 1) {
        int v2 = param0;
        int* ptr0 = result;
        int v3 = *(int*)(v1 + 4);
        int v4 = **(unsigned int*)(param0 + 12)((int)ptr0, *(int*)(v1 + 4), v2);
        while(1) {
            v0 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        result = (int*)(v0 + 4);
        *(result - 1) = 0x800;
        *result = v4;
        *(unsigned int*)(result + 1) = ptr0;
        v1 = v3;
        param0 = v2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__sort_1271(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    int* ptr6;
    int* ptr7;
    int v0;
    unsigned int* ptr8;
    int v1;
    int v2;
    int result;
    int v3;
    unsigned int* ptr9;
    if(result != 5) {
        v2 = param0;
        if(result == 7 && ptr9 != 1) {
            unsigned int* ptr10 = *(ptr9 + 1);
            if(ptr10 != 1) {
                param1 = *(int*)(ptr10 + 1);
                if(param1 != 1) {
                    v1 = *(int*)param1;
                    ptr8 = *ptr10;
                    v0 = *ptr9;
                    caml_apply2(*(int*)(param0 + 28));
                    if(result <= 1) {
                        caml_apply2(*(int*)(v2 + 28));
                        if(result <= 1) {
                            while(1) {
                                ptr7 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr7) {
                                    break;
                                }
                                else {
                                    caml_call_gc(param0, v3);
                                }
                            }
                            *ptr7 = 0x800;
                            *(ptr7 + 1) = v1;
                            *(ptr7 + 2) = 1;
                            *(ptr7 + 3) = 0x800;
                            *(unsigned int*)(ptr7 + 4) = ptr8;
                            *(unsigned int*)(ptr7 + 5) = ptr7 + 1;
                            *(ptr7 + 6) = 0x800;
                            *(int*)(int)(ptr7 + 7) = v0;
                            *(unsigned int*)(ptr7 + 8) = (unsigned int*)(ptr7 + 4);
                            return (int)(ptr7 + 7);
                        }
                        caml_apply2(*(int*)(v2 + 28));
                        if(result <= 1) {
                            while(1) {
                                ptr6 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr6) {
                                    break;
                                }
                                else {
                                    caml_call_gc(param0, v3);
                                }
                            }
                            *ptr6 = 0x800;
                            *(unsigned int*)(ptr6 + 1) = ptr8;
                            *(ptr6 + 2) = 1;
                            *(ptr6 + 3) = 0x800;
                            *(ptr6 + 4) = v1;
                            *(unsigned int*)(ptr6 + 5) = (unsigned int*)(ptr6 + 1);
                            *(ptr6 + 6) = 0x800;
                            *(int*)(int)(ptr6 + 7) = v0;
                            *(unsigned int*)(ptr6 + 8) = (unsigned int*)(ptr6 + 4);
                            return (int)(ptr6 + 7);
                        }
                        while(1) {
                            ptr5 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr5) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr5 = 0x800;
                        *(unsigned int*)(ptr5 + 1) = ptr8;
                        *(ptr5 + 2) = 1;
                        *(ptr5 + 3) = 0x800;
                        *(unsigned int*)(ptr5 + 4) = v0;
                        *(unsigned int*)(ptr5 + 5) = (unsigned int*)(ptr5 + 1);
                        *(ptr5 + 6) = 0x800;
                        *(int*)(int)(ptr5 + 7) = v1;
                        *(unsigned int*)(ptr5 + 8) = (unsigned int*)(ptr5 + 4);
                        return (int)(ptr5 + 7);
                    }
                    caml_apply2(*(int*)(v2 + 28));
                    if(result <= 1) {
                        while(1) {
                            ptr4 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr4) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr4 = 0x800;
                        *(ptr4 + 1) = v1;
                        *(ptr4 + 2) = 1;
                        *(ptr4 + 3) = 0x800;
                        *(unsigned int*)(ptr4 + 4) = v0;
                        *(unsigned int*)(ptr4 + 5) = ptr4 + 1;
                        *(ptr4 + 6) = 0x800;
                        *(unsigned int**)(int)(ptr4 + 7) = ptr8;
                        *(unsigned int*)(ptr4 + 8) = (unsigned int*)(ptr4 + 4);
                        return (int)(ptr4 + 7);
                    }
                    caml_apply2(*(int*)(v2 + 28));
                    if(result <= 1) {
                        while(1) {
                            ptr3 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr3) {
                                break;
                            }
                            else {
                                caml_call_gc(param0, v3);
                            }
                        }
                        *ptr3 = 0x800;
                        *(ptr3 + 1) = v0;
                        *(ptr3 + 2) = 1;
                        *(ptr3 + 3) = 0x800;
                        *(ptr3 + 4) = v1;
                        *(unsigned int*)(ptr3 + 5) = ptr3 + 1;
                        *(ptr3 + 6) = 0x800;
                        *(unsigned int**)(int)(ptr3 + 7) = ptr8;
                        *(unsigned int*)(ptr3 + 8) = (unsigned int*)(ptr3 + 4);
                        return (int)(ptr3 + 7);
                    }
                    while(1) {
                        ptr2 = (int*)(caml_young_ptr - 36);
                        caml_young_ptr -= 36;
                        if(caml_young_limit <= (unsigned int)ptr2) {
                            break;
                        }
                        else {
                            caml_call_gc(param0, v3);
                        }
                    }
                    *ptr2 = 0x800;
                    *(ptr2 + 1) = v0;
                    *(ptr2 + 2) = 1;
                    *(ptr2 + 3) = 0x800;
                    *(unsigned int*)(ptr2 + 4) = ptr8;
                    *(unsigned int*)(ptr2 + 5) = ptr2 + 1;
                    *(ptr2 + 6) = 0x800;
                    *(int*)(int)(ptr2 + 7) = v1;
                    *(unsigned int*)(ptr2 + 8) = (unsigned int*)(ptr2 + 4);
                    return (int)(ptr2 + 7);
                }
            }
        }
    }
    else {
        if(ptr9 != 1) {
            param1 = *(int*)(ptr9 + 1);
            if(param1 != 1) {
                v1 = *(int*)param1;
                ptr8 = *ptr9;
                caml_apply2(*(int*)(param0 + 28));
                if(result <= 1) {
                    while(1) {
                        ptr1 = (int*)(caml_young_ptr - 24);
                        caml_young_ptr -= 24;
                        if(caml_young_limit <= (unsigned int)ptr1) {
                            break;
                        }
                        else {
                            caml_call_gc(param0, v3);
                        }
                    }
                    *ptr1 = 0x800;
                    *(ptr1 + 1) = v1;
                    *(ptr1 + 2) = 1;
                    *(ptr1 + 3) = 0x800;
                    *(unsigned int**)(int)(ptr1 + 4) = ptr8;
                    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
                    return (int)(ptr1 + 4);
                }
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 24);
                    caml_young_ptr -= 24;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(param0, v3);
                    }
                }
                *ptr0 = 0x800;
                *(unsigned int*)(ptr0 + 1) = ptr8;
                *(ptr0 + 2) = 1;
                *(ptr0 + 3) = 0x800;
                *(int*)(int)(ptr0 + 4) = v1;
                *(unsigned int*)(ptr0 + 5) = (unsigned int*)(ptr0 + 1);
                return result;
            }
        }
        v2 = param0;
    }
    ptr8 = ptr9;
    v1 = (result >> 1) | 0x1;
    v0 = result - ((result >> 1) | 0x1) + 1;
    int v4 = camlList__chop_1243((result >> 1) | 0x1, param1);
    v1 = camlList__rev_sort_1272(v2 + 16);
    camlList__rev_sort_1272(v2 + 16);
    return camlList__rev_merge_rev_1261((int*)0x1, *(int*)(v2 + 36));
}

unsigned int* camlList__split_1220(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    unsigned int* ptr1;
    if(ptr1 != 1) {
        int* ptr2 = *ptr1;
        int* ptr3 = (int*)camlList__split_1220(*(ptr2 + 1), *ptr2);
        int v3 = *(ptr3 + 1);
        int v4 = *ptr3;
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 36);
            caml_young_ptr -= 36;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v2, v4);
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v0;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = 0x800;
        *(ptr0 + 4) = v1;
        *(ptr0 + 5) = v4;
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
    int v2 = v1;
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
    int result = camlList__length_aux_1030();
    if(result >= 5) {
        camlList__sort_1271((int)ptr1);
    }
    return result;
}

int camlList__tl_1039(int param0, int param1) {
    int v0;
    if(v0 == 1) {
        /*NO_RETURN*/ camlPervasives__failwith_1010(param0, param1);
    }
    return *(int*)(v0 + 4);
}

unsigned int* camlPervasives__$40_1143() {
    int* ptr0;
    unsigned int* ptr1;
    int* ptr2;
    int v0;
    unsigned int* result;
    if(ptr2 != 1) {
        int v1 = camlPervasives__$40_1143(*ptr2);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v1, v0);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr1;
        *(ptr0 + 2) = v1;
        return (unsigned int*)(ptr0 + 1);
    }
    return result;
}

int camlPervasives__$5e$5e_1312() {
    camlPervasives__$5e_1112();
    return camlPervasives__$5e_1112();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__$5e_1112() {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int v4 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v5 = (v4 - (unsigned int)*(char*)(v4 + v0)) * 2 + 1;
    int v6 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
    int v7 = (v6 - (unsigned int)*(char*)(v6 + v1)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v2, 1, result, 1, v5);
    caml_blit_string(v3, 1, result, v5, v7);
    return result;
}

int camlPervasives__abs_1044() {
    int result;
    if(result >= 1) {
        return result;
    }
    return 2 - result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__at_exit_1322(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1 = *gvar_807564C;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(int*)(unsigned int)(ptr0 + 1) = &camlPervasives__fun_1500;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    caml_modify(gvar_807564C, (unsigned int)(ptr0 + 1));
    return 1;
}

int camlPervasives__bool_of_string_1129() {
    int* ptr0;
    int v0;
    int v1;
    int v2 = caml_string_notequal(ptr0, "false");
    if(v2 != 1) {
        int v3 = caml_string_notequal(ptr0, "true");
        if(v3 != 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, v1);
        }
        return 3;
    }
    return 1;
}

int camlPervasives__build_result_1243(int* param0) {
    int v0;
    int v1;
    int result = v0;
    while(param0 != 1) {
        int* ptr0 = *(unsigned int*)(param0 + 1);
        int v2 = *param0;
        int v3 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
        int v4 = (v3 - (unsigned int)*(char*)(v2 + v3)) * 2 + 1;
        caml_blit_string(v2, 1, result, v1 - v4 + 1, v4);
        v1 = v1 - v4 + 1;
        v0 = result;
        param0 = ptr0;
    }
    return result;
}

int camlPervasives__char_of_int_1120(int param0, int param1) {
    int result;
    if((result < 1 || result > 0x1ff)) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
    }
    return result;
}

int camlPervasives__close_in_noerr_1263() {
    int v0;
    sub_804FB10(v0);
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
    sub_804F8A0(v2, v0);
    sub_804F8E0(v1, v0);
    return 1;
}

int camlPervasives__do_at_exit_1325() {
    jump **gvar_807564C;
}

int camlPervasives__entry(int param0, int param1) {
    gvar_8075624 = &camlPervasives__84;
    gvar_807561C = &camlPervasives__83;
    gvar_8075618 = &camlPervasives__82;
    gvar_8075614 = &camlPervasives__81;
    gvar_8075610 = &camlPervasives__80;
    gvar_807560C = &camlPervasives__79;
    gvar_8075608 = &camlPervasives__78;
    gvar_8075604 = &camlPervasives__77;
    gvar_80755F4 = &camlPervasives__76;
    gvar_80755E4 = &camlPervasives__75;
    gvar_80755D8 = &camlPervasives__74;
    gvar_80755D4 = &camlPervasives__73;
    gvar_80755D0 = &camlPervasives__72;
    gvar_80755C8 = &camlPervasives__71;
    gvar_80755C4 = &camlPervasives__70;
    gvar_80755B8 = &camlPervasives__69;
    gvar_80755B0 = &camlPervasives__68;
    gvar_8075508 = &camlPervasives__67;
    camlPervasives = &camlPervasives__66;
    int v0 = caml_alloc1(param0, param1);
    *(int*)v0 = 0x400;
    *(int*)(v0 + 4) = "Pervasives.Exit";
    gvar_807550C = (int*)(v0 + 4);
    gvar_8075510 = &camlPervasives__64;
    gvar_8075514 = &camlPervasives__63;
    gvar_8075518 = &camlPervasives__62;
    gvar_8075524 = &camlPervasives__61;
    gvar_8075520 = 0x80000001;
    gvar_807551C = 0x7fffffff;
    unsigned int v1 = (unsigned int)caml_c_call();
    gvar_8075528 = v1;
    unsigned int v2 = (unsigned int)caml_c_call();
    gvar_807552C = v2;
    unsigned int v3 = (unsigned int)caml_c_call();
    gvar_8075530 = v3;
    unsigned int v4 = (unsigned int)caml_c_call();
    gvar_8075534 = v4;
    unsigned int v5 = (unsigned int)caml_c_call();
    gvar_8075538 = v5;
    unsigned int v6 = (unsigned int)caml_c_call();
    gvar_807553C = v6;
    gvar_8075540 = &camlPervasives__54;
    gvar_8075544 = &camlPervasives__53;
    gvar_8075548 = &camlPervasives__52;
    gvar_807554C = &camlPervasives__51;
    gvar_8075550 = &camlPervasives__50;
    gvar_8075648 = &camlPervasives__49;
    gvar_807563C = &camlPervasives__48;
    gvar_8075554 = &camlPervasives__47;
    gvar_8075558 = &camlPervasives__46;
    unsigned int v7 = (unsigned int)caml_c_call();
    gvar_807555C = v7;
    unsigned int v8 = (unsigned int)caml_c_call();
    gvar_8075560 = v8;
    unsigned int v9 = (unsigned int)caml_c_call();
    gvar_8075564 = v9;
    gvar_80755AC = &camlPervasives__45;
    gvar_80755A4 = &camlPervasives__44;
    gvar_80755A8 = &camlPervasives__43;
    gvar_80755B4 = &camlPervasives__42;
    gvar_80755BC = &camlPervasives__41;
    gvar_80755C0 = &camlPervasives__40;
    gvar_80755CC = &camlPervasives__39;
    gvar_80755DC = &camlPervasives__38;
    gvar_80755E0 = &camlPervasives__37;
    gvar_80755F0 = &camlPervasives__36;
    gvar_80755E8 = &camlPervasives__35;
    gvar_80755EC = &camlPervasives__34;
    gvar_80755FC = &camlPervasives__33;
    gvar_8075640 = &camlPervasives__32;
    gvar_8075600 = &camlPervasives__31;
    gvar_80755F8 = &camlPervasives__30;
    gvar_8075620 = &camlPervasives__29;
    gvar_8075568 = &camlPervasives__28;
    gvar_807556C = &camlPervasives__27;
    gvar_8075570 = &camlPervasives__26;
    gvar_8075574 = &camlPervasives__25;
    gvar_8075578 = &camlPervasives__24;
    gvar_807557C = &camlPervasives__23;
    gvar_8075580 = &camlPervasives__22;
    gvar_8075584 = &camlPervasives__21;
    gvar_8075588 = &camlPervasives__20;
    gvar_807558C = &camlPervasives__19;
    gvar_8075590 = &camlPervasives__18;
    gvar_8075594 = &camlPervasives__17;
    gvar_8075598 = &camlPervasives__16;
    gvar_807559C = &camlPervasives__15;
    gvar_80755A0 = &camlPervasives__14;
    int v10 = caml_allocN(param0, param1);
    *(int*)v10 = 0x1800;
    *(int*)(v10 + 4) = &camlPervasives__7;
    *(int*)(v10 + 8) = &camlPervasives__8;
    *(int*)(v10 + 12) = &camlPervasives__9;
    *(int*)(v10 + 16) = &camlPervasives__10;
    *(int*)(v10 + 20) = &camlPervasives__11;
    *(int*)(v10 + 24) = &camlPervasives__12;
    gvar_8075628 = (int*)(v10 + 4);
    gvar_8075630 = &camlPervasives__6;
    gvar_807562C = &camlPervasives__5;
    *(int*)(v10 + 28) = 0x400;
    *(unsigned int*)(v10 + 32) = gvar_80755B4;
    gvar_807564C = (unsigned int*)(v10 + 32);
    gvar_8075638 = &camlPervasives__4;
    gvar_8075644 = &camlPervasives__3;
    gvar_8075634 = &camlPervasives__2;
    caml_c_call();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__exit_1326() {
    int v0;
    **gvar_807564C(v0);
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__failwith_1010(int param0, int param1) {
    int v0;
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 0x800;
            *(ptr0 + 1) = &caml_exn_Failure;
            *(ptr0 + 2) = v0;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

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
    int v0;
    int v1 = v0;
    **(unsigned int*)(v0 + 8)(v0);
    jump **(unsigned int*)(v0 + 12);
}

int camlPervasives__input_1224(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlPervasives__input_line_1241(int param0) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, v0);
        }
    }
    *ptr0 = 5367;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPervasives__scan_1249;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = &camlPervasives__86;
    camlPervasives__scan_1249((int)(ptr0 + 1));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__invalid_arg_1012(int param0, int param1) {
    int v0;
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 0x800;
            *(ptr0 + 1) = &caml_exn_Invalid_argument;
            *(ptr0 + 2) = v0;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__iter_1186() {
    int v0;
    int v1;
    int v2;
    while(v2 != 1) {
        sub_804F010(*(int*)(v2 + 4), v0);
        v2 = v1;
    }
    return 1;
}

int camlPervasives__lnot_1049() {
    int v0;
    return ~v0 | 0x1;
}

int camlPervasives__loop_1138(int param0, int param1, int param2) {
    void* ptr0;
    int v0;
    int v1;
    while(*(int*)(v1 + 12) > v0) {
        int v2 = *(int*)(v1 + 8);
        int v3 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v3 - (unsigned int)*(char*)(v2 + v3)) > (unsigned int)(v0 >> 1)) {
            int v4 = (unsigned int)*(char*)((unsigned int)(v0 >> 1) + v2) * 2 + 1;
            if(v4 >= 117 || (v4 < 97 && v4 != 91)) {
                return *(int*)(v1 + 8);
            }
            v0 += 2;
        }
        else {
            /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr0, param0, param1, param2);
        }
    }
    return camlPervasives__$5e_1112();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__max_1025() {
    int result;
    int result1;
    int v0 = caml_c_call();
    if(v0 != 1) {
        return result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__min_1022() {
    int result;
    int result1;
    int v0 = caml_c_call();
    if(v0 != 1) {
        return result;
    }
    return result1;
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
int camlPervasives__output_1194(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
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

int camlPervasives__read_float_1290() {
    camlPervasives__read_line_1288();
    return caml_c_call();
}

int camlPervasives__read_int_1289() {
    camlPervasives__read_line_1288();
    return caml_c_call();
}

int camlPervasives__read_line_1288() {
    int v0;
    caml_c_call();
    return camlPervasives__input_line_1241(v0);
}

int camlPervasives__really_input_1235(int param0, void* param1) {
    int v0;
    if(param0 >= 1 && (int)param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((int)(int*)((char*)((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - (int)param1) + 2) >= param0) {
            return camlPervasives__unsafe_really_input_1229(param0, param1);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, (int)param1);
}

int camlPervasives__scan_1249(int param0) {
    unsigned int v0;
    int* ptr0;
    int result2;
    int* ptr1;
    int v1;
    int* ptr2;
    int result;
    int v2;
    int v3;
    while(1) {
        int* ptr3 = ptr2;
        int v4 = v3;
        int v5 = param0;
        int v6 = caml_c_call();
        if(v6 == 1) {
            if(ptr3 != 1) {
                caml_c_call();
                camlPervasives__build_result_1243(ptr3);
                return result;
            }
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(v1, v2);
                }
            }
            *ptr1 = 0x400;
            *(ptr1 + 1) = &caml_exn_End_of_file;
            v6 = caml_raise_exn();
        }
        int v7 = v6;
        if(v6 > 1) {
            result2 = caml_c_call();
            caml_c_call();
            caml_c_call();
            if(ptr3 != 1) {
                int v8 = v7 + v4 - 3;
                v5 = v7 + v4 - 3;
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr3, v8);
                    }
                }
                v7 = (int)(ptr0 + 1);
                *ptr0 = 0x800;
                *(int*)(int)(ptr0 + 1) = result2;
                *(int**)(ptr0 + 2) = ptr3;
                int result1 = caml_c_call();
                camlPervasives__build_result_1243((int*)v7);
                return result1;
            }
            return result2;
        }
        int v9 = caml_c_call();
        result2 = v9;
        int v10 = 2 - v7;
        int v11 = v9;
        int v12 = *(int*)(v5 + 12);
        caml_c_call();
        while(1) {
            v0 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v0) {
                break;
            }
            else {
                result = caml_call_gc(v1, v2);
            }
        }
        ptr2 = (int*)(v0 + 4);
        ptr2[-1] = 0x800;
        ptr2[0] = result2;
        ptr2[1] = ptr3;
        v3 = v4 - v7 + 1;
        param0 = v5;
    }
}

int camlPervasives__string_of_bool_1127() {
    int v0;
    if(v0 != 1) {
        return "true";
    }
    return "false";
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
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v1, 1, result, 1, v3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__string_of_int_1130() {
    return caml_c_call();
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
        int v5 = v3;
        int v6 = v1;
        int v7 = caml_c_call();
        if(v7 == 1) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v2, v0);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_End_of_file;
            v7 = caml_raise_exn();
        }
        param1 = (void*)((char*)((int)ptr1 - v7) + 1);
        param0 = v7 + v4 - 1;
        v1 = v6;
        v3 = v5;
    }
    return 1;
}

int camlPervasives__valid_float_lexem_1135(int param0, int param1, int param2) {
    int result;
    int* ptr0;
    int v0;
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v2 = (v1 - (unsigned int)*(char*)(v1 + v0)) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, v2);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPervasives__loop_1138;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v2;
    camlPervasives__loop_1138(param0, param1, param2);
    return result;
}

int camlPrintf__add_char_1166() {
    int v0;
    camlBuffer__add_char_1072();
    return v0 + 2;
}

int camlPrintf__add_char_1192() {
    int v0;
    return v0 + 2;
}

int camlPrintf__add_conv_1169(int param0, int param1) {
    int v0;
    int v1;
    if(v0 != 1) {
        camlBuffer__add_string_1082();
    }
    else {
        camlBuffer__add_char_1072();
    }
    camlBuffer__add_char_1072();
    return v1 + 2;
}

int camlPrintf__add_conv_1191(int param0, int param1) {
    int v0;
    if(param0 != 83 && param0 != 251) {
        camlPrintf__incr_ac_1187(*(int*)(param1 + 12));
    }
    return v0 + 2;
}

int camlPrintf__add_int_index_1040() {
    return camlPrintf__index_of_int_1037();
}

int camlPrintf__bad_conversion_1057(int param0) {
    int v0;
    int v1;
    camlPervasives__$5e_1112();
    camlPervasives__$5e_1112();
    camlPervasives__string_of_int_1130();
    camlPervasives__$5e_1112();
    camlPervasives__$5e_1112();
    camlString__make_1038();
    camlPervasives__$5e_1112();
    camlPervasives__$5e_1112();
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v0, v1);
}

int camlPrintf__bad_conversion_format_1061(int param0, int param1) {
    int v0;
    int v1;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    camlString__sub_1046((v2 - (unsigned int)*(char*)(v0 + v2)) * 2 + 1, param1);
    /*NO_RETURN*/ camlPrintf__bad_conversion_1057(v1);
}

int camlPrintf__bprintf_1400(int param0, int param1) {
    return camlPrintf__kbprintf_1397(param0, param1);
}

int camlPrintf__cont_a_1362(int param0, int param1) {
    int v0;
    int v1;
    int v2 = param1;
    int v3 = v0;
    if(*(int*)(v0 + 60) != 1) {
        caml_apply2(v1);
        caml_apply2(*(int*)(v3 + 68));
    }
    else {
        caml_apply2(v1);
    }
    return camlPrintf__doprn_1360((unsigned int)(v3 - 32));
}

int camlPrintf__cont_f_1364(int param0) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int v4 = param0;
    **(unsigned int*)(param0 + 40)(param0, v0, v1);
    return camlPrintf__doprn_1360((unsigned int)(v4 - 64));
}

int camlPrintf__cont_m_1365(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2;
    camlPrintf__ac_of_format_1184();
    int v3 = camlPrintf__index_of_int_1037();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v1, v3);
        }
    }
    *ptr0 = 5367;
    *(ptr0 + 1) = &camlPrintf__fun_1673;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0 - 80;
    *(ptr0 + 4) = v1;
    *(ptr0 + 5) = v3;
    camlPrintf__pr_1354(v2, *(int*)(v0 + 44));
    return result;
}

int camlPrintf__cont_s_1361(int param0, int param1) {
    int v0 = param1;
    caml_apply2(*(int*)(param1 + 84));
    return camlPrintf__doprn_1360((unsigned int)(v0 - 16));
}

int camlPrintf__cont_t_1363(int param0, int param1) {
    int* ptr0;
    int v0 = param1;
    if(*(int*)(param1 + 44) != 1) {
        *ptr0();
        caml_apply2(*(int*)(v0 + 52));
    }
    else {
        *ptr0();
    }
    return camlPrintf__doprn_1360((unsigned int)(v0 - 48));
}

int camlPrintf__count_arguments_of_format_1198() {
    int* ptr0 = (int*)camlPrintf__ac_of_format_1184();
    return *ptr0;
}

int camlPrintf__doprn_1360(unsigned int param0) {
    int v0;
    int v1;
    int v2;
loc_8059063:
    do {
        int v3 = v1;
        v0 = v2;
        if(*(int*)(param0 + 128) > v0) {
            if((unsigned int)*(char*)((v0 >> 1) + *(int*)(param0 + 120)) * 2 != 74) {
                unsigned int v4 = param0;
                int v5 = v0;
                int v6 = v3;
                caml_apply2(*(int*)(param0 + 96));
                v2 = v5 + 2;
                v1 = v6;
                param0 = v4;
                goto loc_8059063;
            }
            else {
                caml_extra_params = param0 + 48;
                gvar_807B7E0 = (int)(param0 + 64);
                gvar_807B7E4 = (int)(param0 + 80);
                return camlPrintf__scan_format_1278(v3, v0);
            }
        }
    }
    while(*(int*)(param0 + 128) > v0);
    jump **(unsigned int*)(param0 + 116);
}

int camlPrintf__entry(int param0, int param1) {
    int v0;
    unsigned int v1 = &camlPrintf__38;
    int v2 = caml_allocN(&camlPrintf__38, param1);
    int* ptr0 = (int*)(v2 + 4);
    *(int*)v2 = 4343;
    *(int*)(v2 + 4) = &caml_curry2;
    *(int*)(v2 + 8) = 5;
    *(int*)(v2 + 12) = &camlPrintf__add_int_index_1040;
    *(int*)(v2 + 16) = v0;
    int v3 = *(int*)(v2 + 4)();
    int v4 = caml_allocN(v0, param1);
    *(int*)v4 = 3319;
    *(int*)(v4 + 4) = &camlPrintf__index_of_literal_position_1044;
    *(int*)(v4 + 8) = 3;
    *(unsigned int*)(v4 + 12) = v1;
    *(int*)(v4 + 16) = 3319;
    *(int*)(v4 + 20) = &camlPrintf__to_string_1054;
    *(int*)(v4 + 24) = 3;
    *(int*)(v4 + 28) = &camlPrintf__37;
    *(int*)(v4 + 32) = 0x1800;
    *(unsigned int*)(v4 + 36) = v1;
    *(unsigned int*)(v4 + 40) = ptr0;
    *(int*)(v4 + 44) = v3;
    *(unsigned int*)(v4 + 48) = (int*)(v4 + 4);
    *(int*)(v4 + 52) = &camlPrintf__37;
    *(unsigned int*)(v4 + 56) = (int*)(v4 + 20);
    gvar_807951C = (unsigned int*)(v4 + 36);
    gvar_8079520 = &camlPrintf__36;
    gvar_8079524 = &camlPrintf__35;
    gvar_8079528 = &camlPrintf__34;
    gvar_807952C = &camlPrintf__33;
    gvar_8079530 = &camlPrintf__32;
    gvar_8079534 = &camlPrintf__31;
    gvar_8079538 = &camlPrintf__30;
    gvar_807953C = &camlPrintf__29;
    gvar_8079540 = &camlPrintf__28;
    gvar_8079544 = &camlPrintf__27;
    gvar_8079548 = &camlPrintf__26;
    gvar_807954C = &camlPrintf__25;
    gvar_8079550 = &camlPrintf__24;
    gvar_8079554 = &camlPrintf__23;
    gvar_8079558 = &camlPrintf__22;
    gvar_807955C = &camlPrintf__21;
    gvar_8079560 = &camlPrintf__20;
    gvar_8079564 = &camlPrintf__19;
    gvar_8079568 = &camlPrintf__18;
    gvar_807956C = &camlPrintf__17;
    gvar_8079570 = &camlPrintf__16;
    *(int*)(v4 + 60) = 4343;
    *(int*)(v4 + 64) = &caml_curry2;
    *(int*)(v4 + 68) = 5;
    *(int*)(v4 + 72) = &camlPrintf__fun_1600;
    *(int*)(v4 + 76) = &camlPrintf__15;
    gvar_8079574 = (int*)(v4 + 64);
    gvar_8079578 = &camlPrintf__14;
    gvar_807957C = &camlPrintf__13;
    gvar_8079508 = &camlPrintf__12;
    gvar_80794FC = &camlPrintf__11;
    camlPrintf = &camlPrintf__10;
    gvar_80794F4 = &camlPrintf__9;
    gvar_80794F8 = &camlPrintf__8;
    gvar_8079510 = &camlPrintf__7;
    gvar_8079504 = &camlPrintf__6;
    gvar_8079580 = &camlPrintf__5;
    gvar_8079584 = &camlPrintf__4;
    gvar_8079588 = &camlPrintf__3;
    gvar_807950C = &camlPrintf__2;
    gvar_8079500 = &camlPrintf__1;
    gvar_8079514 = gvar_807950C;
    v1 = gvar_807951C;
    unsigned int v5 = gvar_8079558;
    unsigned int v6 = gvar_8079544;
    unsigned int v7 = gvar_8079550;
    unsigned int v8 = gvar_8079578;
    unsigned int v9 = gvar_8079564;
    *(int*)(v4 + 80) = 0x1400;
    *(unsigned int*)(v4 + 84) = v5;
    *(unsigned int*)(v4 + 88) = v6;
    *(unsigned int*)(v4 + 92) = v7;
    *(unsigned int*)(v4 + 96) = v8;
    *(unsigned int*)(v4 + 100) = v9;
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
    gvar_8079518 = (unsigned int*)(v4 + 140);
    return 1;
}

int camlPrintf__eprintf_1395(int param0, int param1) {
    int v0 = camlPrintf__fprintf_1391(param0, param1);
    jump *(int*)v0;
}

int camlPrintf__extract_format_1085(int* param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int* ptr2 = param0;
    int v2 = param1;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc((int)param0, param1);
        }
    }
    int* ptr3 = ptr1 + 1;
    *ptr1 = 3319;
    *(ptr1 + 1) = &camlPrintf__skip_positional_spec_1090;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = v0;
    int v3 = camlPrintf__skip_positional_spec_1090();
    int* ptr4 = camlBuffer__create_1039();
    camlBuffer__add_char_1072();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 32);
        caml_young_ptr -= 32;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)param0, param1);
        }
    }
    int v4 = (int)(ptr0 + 1);
    *ptr0 = 7415;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__fill_format_1096;
    *(ptr0 + 4) = v1;
    *(int**)(ptr0 + 5) = ptr2;
    *(unsigned int*)(ptr0 + 6) = ptr3;
    *(int**)(ptr0 + 7) = ptr4;
    camlList__rev_append_1051(param0);
    camlPrintf__fill_format_1096(v4);
    return camlString__sub_1046(ptr4[1], param1);
}

int camlPrintf__extract_format_float_1110(int param0, int param1) {
    int v0;
    int v1;
    void* ptr0;
    int* ptr1;
    int v2;
    void* ptr2 = ptr0;
    int result = camlPrintf__extract_format_1085(ptr1, v2);
    if(ptr2 != 141) {
        return result;
    }
    int v3 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    void* ptr3 = (void*)(((v3 - (unsigned int)*(char*)(result + v3)) * 2 - 1) >> 1);
    int v4 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    if((unsigned int)(v4 - (unsigned int)*(char*)(result + v4)) > (unsigned int)ptr3) {
        *(char*)(result + (int)ptr3) = 103;
        return result;
    }
    caml_ml_array_bound_error(141, v0, param0, param1);
    /*BAD_CALL!*/ camlPrintf__sub_format_1117(v1, (int)ptr1);
}

int camlPrintf__extract_format_int_1103(int param0, int param1) {
    int v0;
    void* ptr0;
    int* ptr1;
    int v1;
    void* ptr2 = ptr0;
    int result = camlPrintf__extract_format_1085(ptr1, v1);
    if(ptr2 != 157 && ptr2 != 221) {
        return result;
    }
    int v2 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    void* ptr3 = (void*)(((v2 - (unsigned int)*(char*)(result + v2)) * 2 - 1) >> 1);
    int v3 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    if((unsigned int)(v3 - (unsigned int)*(char*)(result + v3)) > (unsigned int)ptr3) {
        *(char*)(result + (int)ptr3) = 117;
        return result;
    }
    caml_ml_array_bound_error((int)ptr2, v0, param0, param1);
    /*BAD_CALL!*/ camlPrintf__extract_format_float_1110(v0, param0);
}

int camlPrintf__fill_format_1096(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    while(*(int*)(param0 + 16) >= v3) {
        if((unsigned int)*(char*)((v3 >> 1) + *(int*)(param0 + 12)) * 2 + 1 != 85) {
            v2 = param0;
            v1 = v4;
            v0 = v3;
            camlBuffer__add_char_1072();
            v3 = v0 + 2;
            v4 = v1;
            param0 = v2;
        }
        else if(v4 != 1) {
            v2 = param0;
            v0 = v3;
            v1 = *(int*)(v4 + 4);
            camlPervasives__string_of_int_1130();
            camlBuffer__add_string_1082();
            v3 = camlPrintf__skip_positional_spec_1090();
            v4 = v1;
            param0 = v2;
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
    int v1 = camlPrintf__parse_string_conversion_1067(param0, param1);
    return camlPrintf__pad_string_1072(*(int*)(v1 + 4), v0);
}

int camlPrintf__fprintf_1391(int param0, int param1) {
    return camlPrintf__kfprintf_1386(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1565(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2 = (unsigned int)(*(int*)(param0 + 12) - v0 - 1);
    int v3 = *(int*)(param0 + 16);
    int v4 = *(int*)(v3 - 4);
    if((unsigned char)v4 == 254) {
        if((unsigned int)(v4 >>> 10) > v2) {
            *(long long*)(v2 * 4 + v3 - 4) = *(double*)v1;
            return 1;
        }
        caml_ml_array_bound_error();
    }
    else if((unsigned int)(v4 >>> 9) > v2) {
        caml_modify((unsigned int*)(v2 * 2 + v3 - 2), v1);
        return 1;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1568() {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v0;
    *(ptr0 + 2) = *(int*)(v1 + 16);
    camlPrintf__loop_1240(*(int*)(v1 + 8));
    return result;
}

int camlPrintf__fun_1572() {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    unsigned int v4 = v2;
    int result = v3;
    int v5 = 1;
    int v6 = 3;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v7 = ptr0[-1];
    if((unsigned char)v7 == 254) {
        if(v7 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v4;
            caml_apply2(*(int*)(result + 8));
            return result;
        }
        caml_ml_array_bound_error(result, (int)v4, v0, v1);
    }
    else if(v7 >>> 9 > 1) {
        caml_modify(ptr0, v4);
        caml_apply2(*(int*)(result + 8));
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(result, (int)v4, v0, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1575(int param0) {
    unsigned int v0;
    unsigned int v1;
    int result;
    unsigned int v2 = v0;
    unsigned int v3 = v1;
    int v4 = 5;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v5 = ptr0[-1];
    if((unsigned char)v5 == 254) {
        if(v5 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v2;
        loc_805A1E0:
            unsigned int v6 = ptr0[-1];
            if((unsigned char)v6 == 254) {
                if(v6 >>> 10 > 3) {
                    *(long long*)&ptr0[2] = *(double*)v3;
                    caml_apply2(*(int**)(result + 12));
                    return result;
                }
                caml_ml_array_bound_error();
            }
            else if(v6 >>> 9 > 3) {
                caml_modify(ptr0 + 1, v3);
                caml_apply2(*(int**)(result + 12));
                return result;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v5 >>> 9 > 1) {
        caml_modify(ptr0, v2);
        goto loc_805A1E0;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1578(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    int result;
    unsigned int v2 = v1;
    unsigned int v3 = v0;
    unsigned int v4 = param0;
    int v5 = 7;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v6 = ptr0[-1];
    if((unsigned char)v6 == 254) {
        if(v6 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v2;
        loc_805A0B4:
            unsigned int v7 = ptr0[-1];
            if((unsigned char)v7 == 254) {
                if(v7 >>> 10 > 3) {
                    *(long long*)&ptr0[2] = *(double*)v3;
                loc_805A101:
                    unsigned int v8 = ptr0[-1];
                    if((unsigned char)v8 == 254) {
                        if(v8 >>> 10 > 5) {
                            *(long long*)&ptr0[4] = *(double*)v4;
                            caml_apply2(*(int**)(result + 12));
                            return result;
                        }
                        caml_ml_array_bound_error();
                    }
                    else if(v8 >>> 9 > 5) {
                        caml_modify(ptr0 + 2, v4);
                        caml_apply2(*(int**)(result + 12));
                        return result;
                    }
                    caml_ml_array_bound_error();
                }
                caml_ml_array_bound_error();
            }
            else if(v7 >>> 9 > 3) {
                caml_modify(ptr0 + 1, v3);
                goto loc_805A101;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v6 >>> 9 > 1) {
        caml_modify(ptr0, v2);
        goto loc_805A0B4;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1581(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    int result;
    unsigned int v2 = v0;
    unsigned int v3 = v1;
    unsigned int v4 = param0;
    unsigned int v5 = param1;
    int v6 = 9;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v7 = ptr0[-1];
    if((unsigned char)v7 == 254) {
        if(v7 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v2;
        loc_8059F14:
            unsigned int v8 = ptr0[-1];
            if((unsigned char)v8 == 254) {
                if(v8 >>> 10 > 3) {
                    *(long long*)&ptr0[2] = *(double*)v3;
                loc_8059F65:
                    unsigned int v9 = ptr0[-1];
                    if((unsigned char)v9 == 254) {
                        if(v9 >>> 10 > 5) {
                            *(long long*)&ptr0[4] = *(double*)v4;
                        loc_8059FB1:
                            unsigned int v10 = ptr0[-1];
                            if((unsigned char)v10 == 254) {
                                if(v10 >>> 10 > 7) {
                                    *(long long*)&ptr0[6] = *(double*)v5;
                                    caml_apply2(*(int**)(result + 12));
                                    return result;
                                }
                                caml_ml_array_bound_error();
                            }
                            else if(v10 >>> 9 > 7) {
                                caml_modify(ptr0 + 3, v5);
                                caml_apply2(*(int**)(result + 12));
                                return result;
                            }
                            caml_ml_array_bound_error();
                        }
                        caml_ml_array_bound_error();
                    }
                    else if(v9 >>> 9 > 5) {
                        caml_modify(ptr0 + 2, v4);
                        goto loc_8059FB1;
                    }
                    caml_ml_array_bound_error();
                }
                caml_ml_array_bound_error();
            }
            else if(v8 >>> 9 > 3) {
                caml_modify(ptr0 + 1, v3);
                goto loc_8059F65;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v7 >>> 9 > 1) {
        caml_modify(ptr0, v2);
        goto loc_8059F14;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1584(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int result;
    unsigned int v3 = v1;
    unsigned int v4 = v0;
    unsigned int v5 = param0;
    unsigned int v6 = param1;
    unsigned int v7 = v2;
    int v8 = 11;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v9 = ptr0[-1];
    if((unsigned char)v9 == 254) {
        if(v9 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v3;
        loc_8059D14:
            unsigned int v10 = ptr0[-1];
            if((unsigned char)v10 == 254) {
                if(v10 >>> 10 > 3) {
                    *(long long*)&ptr0[2] = *(double*)v4;
                loc_8059D65:
                    unsigned int v11 = ptr0[-1];
                    if((unsigned char)v11 == 254) {
                        if(v11 >>> 10 > 5) {
                            *(long long*)&ptr0[4] = *(double*)v5;
                        loc_8059DB5:
                            unsigned int v12 = ptr0[-1];
                            if((unsigned char)v12 == 254) {
                                if(v12 >>> 10 > 7) {
                                    *(long long*)&ptr0[6] = *(double*)v6;
                                loc_8059E01:
                                    unsigned int v13 = ptr0[-1];
                                    if((unsigned char)v13 == 254) {
                                        if(v13 >>> 10 > 9) {
                                            *(long long*)&ptr0[8] = *(double*)v7;
                                            caml_apply2(*(int**)(result + 12));
                                            return result;
                                        }
                                        caml_ml_array_bound_error();
                                    }
                                    else if(v13 >>> 9 > 9) {
                                        caml_modify(ptr0 + 4, v7);
                                        caml_apply2(*(int**)(result + 12));
                                        return result;
                                    }
                                    caml_ml_array_bound_error();
                                }
                                caml_ml_array_bound_error();
                            }
                            else if(v12 >>> 9 > 7) {
                                caml_modify(ptr0 + 3, v6);
                                goto loc_8059E01;
                            }
                            caml_ml_array_bound_error();
                        }
                        caml_ml_array_bound_error();
                    }
                    else if(v11 >>> 9 > 5) {
                        caml_modify(ptr0 + 2, v5);
                        goto loc_8059DB5;
                    }
                    caml_ml_array_bound_error();
                }
                caml_ml_array_bound_error();
            }
            else if(v10 >>> 9 > 3) {
                caml_modify(ptr0 + 1, v4);
                goto loc_8059D65;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v9 >>> 9 > 1) {
        caml_modify(ptr0, v3);
        goto loc_8059D14;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1587(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4 = v0;
    unsigned int v5 = v1;
    unsigned int v6 = param0;
    unsigned int v7 = param1;
    unsigned int v8 = v2;
    unsigned int v9 = v3;
    unsigned int result = caml_extra_params;
    int v10 = 13;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v11 = ptr0[-1];
    if((unsigned char)v11 == 254) {
        if(v11 >>> 10 > 1) {
            *(long long*)&ptr0[0] = *(double*)v4;
        loc_8059AC4:
            unsigned int v12 = ptr0[-1];
            if((unsigned char)v12 == 254) {
                if(v12 >>> 10 > 3) {
                    *(long long*)&ptr0[2] = *(double*)v5;
                loc_8059B15:
                    unsigned int v13 = ptr0[-1];
                    if((unsigned char)v13 == 254) {
                        if(v13 >>> 10 > 5) {
                            *(long long*)&ptr0[4] = *(double*)v6;
                        loc_8059B65:
                            unsigned int v14 = ptr0[-1];
                            if((unsigned char)v14 == 254) {
                                if(v14 >>> 10 > 7) {
                                    *(long long*)&ptr0[6] = *(double*)v7;
                                loc_8059BB5:
                                    unsigned int v15 = ptr0[-1];
                                    if((unsigned char)v15 == 254) {
                                        if(v15 >>> 10 > 9) {
                                            *(long long*)&ptr0[8] = *(double*)v8;
                                        loc_8059C01:
                                            unsigned int v16 = ptr0[-1];
                                            if((unsigned char)v16 == 254) {
                                                if(v16 >>> 10 > 11) {
                                                    *(long long*)&ptr0[10] = *(double*)v9;
                                                    caml_apply2(*(int**)(result + 12));
                                                    return result;
                                                }
                                                caml_ml_array_bound_error();
                                            }
                                            else if(v16 >>> 9 > 11) {
                                                caml_modify(ptr0 + 5, v9);
                                                caml_apply2(*(int**)(result + 12));
                                                return result;
                                            }
                                            caml_ml_array_bound_error();
                                        }
                                        caml_ml_array_bound_error();
                                    }
                                    else if(v15 >>> 9 > 9) {
                                        caml_modify(ptr0 + 4, v8);
                                        goto loc_8059C01;
                                    }
                                    caml_ml_array_bound_error();
                                }
                                caml_ml_array_bound_error();
                            }
                            else if(v14 >>> 9 > 7) {
                                caml_modify(ptr0 + 3, v7);
                                goto loc_8059BB5;
                            }
                            caml_ml_array_bound_error();
                        }
                        caml_ml_array_bound_error();
                    }
                    else if(v13 >>> 9 > 5) {
                        caml_modify(ptr0 + 2, v6);
                        goto loc_8059B65;
                    }
                    caml_ml_array_bound_error();
                }
                caml_ml_array_bound_error();
            }
            else if(v12 >>> 9 > 3) {
                caml_modify(ptr0 + 1, v5);
                goto loc_8059B15;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v11 >>> 9 > 1) {
        caml_modify(ptr0, v4);
        goto loc_8059AC4;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlPrintf__fun_1600(int param0, int param1, int param2) {
    int result = caml_c_call();
    int v0 = caml_c_call();
    if(v0 >= 7) {
        return result;
    }
    return camlPrintf__make_valid_float_lexeme_1270(param0, param1, param2);
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
int camlPrintf__get_arg_1288(int param0) {
    int* ptr0;
    unsigned int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    unsigned int* ptr1;
    int v3;
    if(ptr1 != 1) {
        v0 = *ptr1;
    }
    int v4 = *(int*)(param0 + 12);
    int v5 = *(int*)(v4 - 4);
    if((unsigned char)v5 != 254) {
        if((unsigned int)(v5 >>> 9) > v0) {
            return *(int*)(v0 * 2 + v4 - 2);
        }
    }
    else if((unsigned int)(v5 >>> 10) > v0) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v4, 254);
            }
        }
        *ptr0 = 2301;
        v1[v2 - 1] = *(double*)(v0 * 4 + v4 - 4);
        *(long long*)(int)(ptr0 + 1) = v1[v2 - 1];
        return (int)(ptr0 + 1);
    }
    else {
        caml_ml_array_bound_error();
    }
    caml_ml_array_bound_error();
    /*BAD_CALL!*/ camlPrintf__scan_conv_1293(param0, v3);
}

int* camlPrintf__get_buff_1402() {
    return camlBuffer__create_1039();
}

int camlPrintf__get_cont_1408(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1 = v0;
    camlString__sub_1046(*(int*)(v0 + 4), param1);
    *(int*)(v1 + 4) = 1;
    jump *ptr0;
}

int camlPrintf__get_contents_1405(int param0, int param1) {
    int v0;
    int v1 = v0;
    int result = camlString__sub_1046(*(int*)(v0 + 4), param1);
    *(int*)(v1 + 4) = 1;
    return result;
}

int camlPrintf__get_index_1265() {
    int result;
    int* ptr0;
    if(ptr0 != 1) {
        return *ptr0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__get_int_literal_1258(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int result;
    int v2;
    int result1;
    int v3;
    int v4 = (unsigned int)*(char*)((v3 >> 1) + *(int*)(param0 + 12)) * 2 + 1;
    while(v4 >= 97) {
        if(v4 >= 117) {
            caml_apply2(*(int**)(param0 + 16));
            return result;
        }
        v3 += 2;
        result = (result >> 1) * 20 + v4 - 96;
        v4 = (unsigned int)*(char*)((v3 >> 1) + *(int*)(param0 + 12)) * 2 + 1;
    }
    if(v4 == 73) {
        if(result == 1) {
            /*NO_RETURN*/ camlPervasives__failwith_1010(param0, 73);
        }
        v1 = param0;
        int v5 = v3;
        v0 = camlPrintf__index_of_int_1037();
    }
    else {
        caml_apply2(*(int**)(param0 + 16));
        return result;
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, v2);
        }
    }
    *ptr0 = 0x400;
    *(ptr0 + 1) = v0;
    caml_apply2(*(int**)(v1 + 16));
    return result1;
}

int camlPrintf__got_spec_1297(int param0) {
    int v0;
    return camlPrintf__scan_flags_1292(*(int*)(param0 + 20), v0);
}

int camlPrintf__got_spec_1304(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = param0;
    int v5 = camlPrintf__get_arg_1288(*(int*)(param0 + 12));
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
    *(int*)(int)(ptr0 + 1) = v5;
    *(ptr0 + 2) = *(int*)(v4 + 28);
    int result = *(int*)(v4 + 24);
    if(v3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    camlPrintf__scan_flags_1292(v6, v1);
    return result;
}

int camlPrintf__ifprintf_1389() {
    jump *gvar_8079564;
}

int camlPrintf__incomplete_format_1065(int param0, int param1) {
    int v0;
    int v1;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    camlString__sub_1046((v2 - (unsigned int)*(char*)(v0 + v2)) * 2 + 1, param1);
    camlPervasives__$5e_1112();
    camlPervasives__$5e_1112();
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v1, param1);
}

int camlPrintf__incr_ac_1187(int param0) {
    int v0;
    int v1;
    if(v0 == 229) {
        int v2 = *(int*)(param0 + 12);
        *(int*)(v2 + 8) = *(int*)(v2 + 8) + 2;
    }
    if(v1 != 1) {
        *(*(unsigned int*)(param0 + 12) + 1) = (v0 == 195 ? 5: 3) + *(int*)(*(int*)(param0 + 12) + 4) - 1;
    }
    else {
        **(unsigned int*)(param0 + 12) = (v0 == 195 ? 5: 3) + **(unsigned int*)(param0 + 12) - 1;
    }
    return 1;
}

int camlPrintf__index_of_int_1037() {
    int result;
    int v0;
    int v1;
    if(result < 1) {
        camlPervasives__string_of_int_1130();
        camlPervasives__$5e_1112();
        /*NO_RETURN*/ camlPervasives__failwith_1010(v0, v1);
    }
    return result;
}

int camlPrintf__index_of_literal_position_1044() {
    return camlPrintf__index_of_int_1037();
}

int camlPrintf__kapr_1209() {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    int* ptr6;
    int v0;
    int* ptr7;
    int v1;
    int v2;
    int v3;
    unsigned int* ptr8 = (unsigned int*)camlPrintf__ac_of_format_1184();
    unsigned int v4 = *ptr8;
    switch(v4) {
        case 0: 
        case 1: {
            caml_apply2(v0);
            return (int)ptr7;
        }
        case 2: 
        case 3: {
            while(1) {
                ptr6 = (int*)(caml_young_ptr - 20);
                caml_young_ptr -= 20;
                if(caml_young_limit <= (unsigned int)ptr6) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr6 = 4343;
            *(ptr6 + 1) = &camlPrintf__fun_1572;
            *(ptr6 + 2) = 3;
            *(ptr6 + 3) = v0;
            *(ptr6 + 4) = v1;
            return (int)(ptr6 + 1);
        }
        case 4: 
        case 5: {
            while(1) {
                ptr5 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr5) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr5 = 5367;
            *(ptr5 + 1) = &caml_curry2;
            *(ptr5 + 2) = 5;
            *(ptr5 + 3) = &camlPrintf__fun_1575;
            *(ptr5 + 4) = v0;
            *(ptr5 + 5) = v1;
            return (int)ptr5;
        }
        case 6: 
        case 7: {
            while(1) {
                ptr4 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr4) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr4 = 5367;
            *(ptr4 + 1) = &caml_curry3;
            *(ptr4 + 2) = 7;
            *(ptr4 + 3) = &camlPrintf__fun_1578;
            *(ptr4 + 4) = v0;
            *(ptr4 + 5) = v1;
            return (int)ptr4;
        }
        case 8: 
        case 9: {
            break;
        }
        case 10: 
        case 11: {
            while(1) {
                ptr3 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr3) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr3 = 5367;
            *(ptr3 + 1) = &caml_curry5;
            *(ptr3 + 2) = 11;
            *(ptr3 + 3) = &camlPrintf__fun_1584;
            *(ptr3 + 4) = v0;
            *(ptr3 + 5) = v1;
            return (int)ptr3;
        }
        case 12: 
        case 13: {
            while(1) {
                ptr2 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr2) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr2 = 5367;
            *(ptr2 + 1) = &caml_curry6;
            *(ptr2 + 2) = 13;
            *(ptr2 + 3) = &camlPrintf__fun_1587;
            *(ptr2 + 4) = v0;
            *(ptr2 + 5) = v1;
            return (int)ptr2;
        }
        default: {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 28);
                caml_young_ptr -= 28;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(v2, v3);
                }
            }
            *ptr1 = 6391;
            *(ptr1 + 1) = &caml_curry2;
            *(ptr1 + 2) = 5;
            *(ptr1 + 3) = &camlPrintf__loop_1240;
            *(ptr1 + 4) = v0;
            *(ptr1 + 5) = v1;
            *(unsigned int*)(ptr1 + 6) = v4;
            ptr7 = (int*)camlPrintf__loop_1240((int)(ptr1 + 1));
            return (int)ptr7;
        }
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v2, v3);
        }
    }
    *ptr0 = 5367;
    *(ptr0 + 1) = &caml_curry4;
    *(ptr0 + 2) = 9;
    *(ptr0 + 3) = &camlPrintf__fun_1581;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    return (int)ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__kbprintf_1397(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlPrintf__fun_1694;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    int v1 = gvar_8078E90;
    int v2 = gvar_8078E8C;
    caml_extra_params = gvar_807957C;
    caml_apply6(v2, v1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__kfprintf_1386(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlPrintf__fun_1680;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    int v1 = gvar_80755BC;
    int v2 = gvar_80755B8;
    caml_extra_params = gvar_807957C;
    caml_apply6(v2, v1);
    return result;
}

int camlPrintf__ksprintf_1411() {
    *gvar_8079588();
    int v0 = gvar_8078E90;
    int v1 = gvar_8078E8C;
    caml_extra_params = gvar_807957C;
    return caml_apply6(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__loop_1159() {
    int v0;
    unsigned int v1;
    while(*(int*)(v1 + 16) - 4 > v0) {
        unsigned int v2 = v1;
        int* ptr0 = *(int**)(v1 + 12);
        int v3 = *(int*)(v1 + 8);
        int v4 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v4 - (unsigned int)*(char*)(v3 + v4)) > (unsigned int)(v0 >> 1)) {
            caml_apply2(ptr0);
            v1 = v2;
        }
        else {
            /*BAD_CALL!*/ caml_ml_array_bound_error();
        }
    }
    return 1;
}

int camlPrintf__make_valid_float_lexeme_1270(int param0, int param1, int param2) {
    int result;
    int* ptr0;
    int v0;
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v2 = (v1 - (unsigned int)*(char*)(v1 + v0)) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v0, v2);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPrintf__valid_float_loop_1273;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v2;
    camlPrintf__valid_float_loop_1273(param0, param1, param2);
    return result;
}

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
    int result = camlPrintf__index_of_int_1037();
    caml_apply2((int)ptr2);
    camlPrintf__kapr_1209();
    return result;
}

int* camlPrintf__next_index_1262() {
    int* result;
    int v0;
    if(v0 != 1) {
        return result;
    }
    jump **(unsigned int*)(gvar_807951C + 8);
}

int camlPrintf__pad_string_1072(int param0, int param1) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    if(v1 == v2 && v3 == 1) {
        return param1;
    }
    else if(v1 <= v2) {
        return camlString__sub_1046(v2, param1);
    }
    int v4 = camlString__make_1038();
    if(v0 != 1) {
        result = camlString__blit_1056(v4, 1);
    }
    else {
        camlString__blit_1056(v4, v1 - v2 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlPrintf__parse_1069(int param0) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2;
    int* ptr2;
    while(1) {
        v0 = v1;
        int v3 = *(int*)(param0 + 12);
        int v4 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
        if((v4 - (unsigned int)*(char*)(v4 + v3)) * 2 + 1 <= (int)ptr2) {
            break;
        }
        else {
            int v5 = (unsigned int)*(char*)((int)(int*)((int)ptr2 >> 1) + *(int*)(param0 + 12)) * 2 + 1;
            if(v5 == 91) {
                ptr2 = (int*)((char*)ptr2 + 2);
                v1 = 3;
            }
            else if(v5 < 99) {
            loc_8059240:
                ptr2 = (int*)((char*)ptr2 + 2);
                v1 = v0;
            }
            else if(v5 < 117) {
                int v6 = v0;
                int v7 = *(int*)(param0 + 12);
                int v8 = (*(int*)(v7 - 4) >>> 10) * 4 - 1;
                int v9 = (v8 - (unsigned int)*(char*)(v8 + v7)) * 2 - (int)ptr2;
                int v10 = camlString__sub_1046(v9, v9);
                param0 = caml_c_call();
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        *ptr1 = 0x800;
                        *(ptr1 + 1) = param0;
                        *(ptr1 + 2) = v6;
                        return ptr1 + 1;
                    }
                    caml_call_gc(param0, v2);
                }
                *ptr1 = 0x800;
                *(ptr1 + 1) = param0;
                *(ptr1 + 2) = v6;
                return ptr1 + 1;
            }
            else {
                goto loc_8059240;
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

int camlPrintf__parse_string_conversion_1067(int param0, int param1) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = v1;
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 4343;
            *(ptr0 + 1) = &caml_curry2;
            *(ptr0 + 2) = 5;
            *(ptr0 + 3) = &camlPrintf__parse_1069;
            *(ptr0 + 4) = v2;
            int v4 = sub_805B110(v3, v0);
            v2 = *(int*)v4;
            if(v2 == &caml_exn_Failure) {
                /*NO_RETURN*/ camlPrintf__bad_conversion_1057(231);
            }
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

int camlPrintf__pr_1354(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
    int v3 = (unsigned int)*(char*)(v2 + param0);
    int v4 = (v2 - v3) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 0x88);
        caml_young_ptr -= 0x88;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v3, param1);
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
    *(ptr0 + 30) = v0;
    *(ptr0 + 31) = param0;
    *(ptr0 + 32) = param1;
    *(ptr0 + 33) = v4;
    camlPrintf__doprn_1360((unsigned int)(ptr0 + 1));
    return result;
}

int camlPrintf__printf_1393(int param0, int param1) {
    int v0 = camlPrintf__fprintf_1391(param0, param1);
    jump *(int*)v0;
}

int camlPrintf__scan_conv_1143(int param0) {
    int v0;
    int v1 = *(int*)(param0 + 36);
    if(v1 < v0) {
        int v2 = /*NO_RETURN*/ camlPrintf__incomplete_format_1065(v1, param0);
    }
    int v3 = (unsigned int)*(char*)((v0 >> 1) + *(int*)(param0 + 24)) * 2 + 1;
    if((v3 < 0 || v3 > 15) && v3 < 253) {
        throw 0;
    }
    /*NO_RETURN*/ camlPrintf__bad_conversion_format_1061(v3, param0);
}

int camlPrintf__scan_conv_1293(int param0, int param1) {
    int v0;
    int v1 = (unsigned int)*(char*)((param1 >> 1) + *(int*)(v0 + 12)) * 2 + 1;
    if((v1 < 0 || v1 > 15) && v1 < 249) {
        throw 0;
    }
    /*NO_RETURN*/ camlPrintf__bad_conversion_format_1061(v1, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__scan_flags_1292(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2;
camlPrintf__scan_flags_1292:
    int v3 = v0;
    int v4 = v1;
    switch((unsigned int)((unsigned int)*(char*)((param1 >> 1) + *(int*)(v2 + 28)) * 2 - 63)) {
        case 20: 
        case 21: {
            break;
        }
        case 0: 
        case 1: 
        case 6: 
        case 7: 
        case 22: 
        case 23: 
        case 26: 
        case 27: 
        case 28: 
        case 29: 
        case 32: 
        case 33: 
        case 34: 
        case 35: 
        case 36: 
        case 37: 
        case 38: 
        case 39: 
        case 40: 
        case 41: 
        case 42: 
        case 43: 
        case 44: 
        case 45: 
        case 46: 
        case 47: 
        case 48: 
        case 49: 
        case 50: 
        case 51: {
            param1 += 2;
            v0 = v3;
            v1 = v4;
            goto camlPrintf__scan_flags_1292;
        }
        default: {
            unsigned int v5 = (unsigned int)camlPrintf__scan_conv_1293(param0, param1);
            return (int)v5;
        }
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 36);
        caml_young_ptr -= 36;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 8439;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__got_spec_1304;
    *(ptr0 + 4) = *(int*)(v2 + 56);
    *(ptr0 + 5) = v2;
    *(ptr0 + 6) = v3;
    *(ptr0 + 7) = v4;
    *(ptr0 + 8) = param0;
    camlPrintf__scan_positional_spec_1252(v4, param1 + 2);
    return result;
}

int camlPrintf__scan_format_1278(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = param0;
    int v5 = param1;
    unsigned int v6 = caml_extra_params;
    unsigned int v7 = gvar_807B7E0;
    unsigned int v8 = gvar_807B7E4;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 100);
        caml_young_ptr -= 100;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__get_arg_1288;
    *(ptr0 + 4) = v2;
    *(ptr0 + 5) = 19703;
    *(int*)(int)(ptr0 + 6) = &caml_curry3;
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
    *(ptr0 + 17) = v0;
    *(ptr0 + 18) = v5;
    *(ptr0 + 19) = v3;
    *(ptr0 + 20) = v1;
    *(unsigned int*)(ptr0 + 21) = v6;
    *(unsigned int*)(ptr0 + 22) = v7;
    *(unsigned int*)(ptr0 + 23) = v8;
    *(unsigned int*)(ptr0 + 24) = ptr0 + 1;
    camlPrintf__scan_positional_1291(v5 + 2, (int)(ptr0 + 6));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__scan_positional_1291(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 28);
        caml_young_ptr -= 28;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__got_spec_1297;
    *(ptr0 + 4) = param1 + 16;
    *(ptr0 + 5) = v0;
    *(ptr0 + 6) = v1;
    camlPrintf__scan_positional_spec_1252(v0, param0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__scan_positional_spec_1252(int param0, int param1) {
    int* ptr0;
    int v0;
    int* ptr1;
    int v1 = (unsigned int)*(char*)((param1 >> 1) + v0) * 2 + 1;
    if((unsigned int)(v1 - 96) > 19) {
        caml_apply2(ptr1);
    }
    else {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 28);
            caml_young_ptr -= 28;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, v1);
            }
        }
        *ptr0 = 6391;
        *(int*)(int)(ptr0 + 1) = &caml_curry2;
        *(ptr0 + 2) = 5;
        *(ptr0 + 3) = &camlPrintf__get_int_literal_1258;
        *(ptr0 + 4) = v0;
        *(int**)(ptr0 + 5) = ptr1;
        *(ptr0 + 6) = param1;
        camlPrintf__get_int_literal_1258((int)(ptr0 + 1));
    }
    return (unsigned int)(v1 - 96);
}

int camlPrintf__skip_int_literal_1092() {
    int v0;
    int v1;
    int v2 = (unsigned int)*(char*)((v1 >> 1) + *(int*)(v0 + 8)) * 2 + 1;
    while(v2 >= 97) {
        if(v2 >= 117) {
            return *(int*)(v0 + 12);
        }
        v1 += 2;
        v2 = (unsigned int)*(char*)((v1 >> 1) + *(int*)(v0 + 8)) * 2 + 1;
    }
    if(v2 == 73) {
        return v1 + 2;
    }
    return *(int*)(v0 + 12);
}

int camlPrintf__skip_positional_spec_1090() {
    int result1;
    int* ptr0;
    int result;
    int* ptr1;
    if((unsigned int)((unsigned int)*(char*)((result >> 1) + *(ptr1 + 2)) * 2 - 95) > 19) {
        return result;
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result1 = caml_call_gc(result, result >> 1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPrintf__skip_int_literal_1092;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(ptr1 + 2);
    *(ptr0 + 4) = result;
    camlPrintf__skip_int_literal_1092();
    return result1;
}

int camlPrintf__sprintf_1413() {
    int v0 = camlPrintf__ksprintf_1411();
    jump *(int*)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__sub_1128(int param0, int param1, int param2) {
    int v0;
    int v1;
    while(*(int*)(v1 + 32) > v0) {
        int v2 = *(int*)(v1 + 28);
        int v3 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(int*)(v3 - (unsigned int)*(char*)(v2 + v3)) > (unsigned int)(v0 >> 1)) {
            if((unsigned int)*(char*)((unsigned int)(v0 >> 1) + v2) * 2 != 74) {
                v0 += 2;
                continue;
            }
            else {
                /*BAD_CALL!*/ camlPrintf__sub_sub_1129();
            }
        }
        unsigned int* ptr0 = ptr0 - 1;
        *ptr0 = &camlPrintf__loop_1159;
        /*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3), *(int*)(ptr0 + 4));
    }
    jump *(int*)*(int*)(v1 + 20);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__sub_fmt_1124(int param0) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 52);
        caml_young_ptr -= 52;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, v1);
        }
    }
    *ptr0 = 12535;
    *(ptr0 + 1) = &camlPrintf__sub_1128;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = 3321;
    *(ptr0 + 4) = &camlPrintf__sub_sub_1129;
    *(ptr0 + 5) = 3;
    *(ptr0 + 6) = *(int*)(param0 + 12);
    *(ptr0 + 7) = *(int*)(param0 + 16);
    *(ptr0 + 8) = *(int*)(param0 + 20);
    *(ptr0 + 9) = *(int*)(param0 + 24);
    *(ptr0 + 10) = param0;
    *(ptr0 + 11) = v1;
    *(ptr0 + 12) = v0 == 81 ? 83: 251;
    camlPrintf__sub_1128();
    return result;
}

int camlPrintf__sub_format_1117(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2 = (*(int*)(param1 - 4) >>> 10) * 4 - 1;
    int v3 = (unsigned int)*(char*)(v2 + param1);
    int v4 = (v2 - v3) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 32);
        caml_young_ptr -= 32;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(v3, param1);
        }
    }
    *ptr0 = 7415;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__sub_fmt_1124;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = param1;
    *(ptr0 + 7) = v4;
    camlPrintf__sub_fmt_1124((int)(ptr0 + 1));
    return result;
}

int camlPrintf__sub_format_for_printf_1135() {
    int result;
    caml_apply3(result, gvar_8079544);
    return result;
}

int camlPrintf__sub_sub_1129(int param0, int param1, int param2) {
    int v0;
    int v1;
camlPrintf__sub_sub_1129:
    int* ptr0 = ptr0 - 1;
    while(*(int*)(v1 + 20) > v0) {
        int v2 = *(int*)(v1 + 16);
        unsigned int v3 = (unsigned int)(v0 >> 1);
        int v4 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v4 - (unsigned int)*(char*)(v2 + v4)) > v3) {
            int v5 = (unsigned int)*(char*)(v3 + v2) * 2 + 1;
            unsigned int v6 = (unsigned int)(v5 - 80);
            if(v6 > 3) {
                if(v6 - 166 <= 5) {
                    *ptr0 = v1;
                    v6 = (v6 - 166) >> 1;
                    if(v6 < 1) {
                        goto loc_8058C50;
                    }
                    else if(v6 != 1) {
                        if((int)v6 >= 1) {
                            goto loc_8058C75;
                        }
                        else {
                            goto loc_8058C30;
                        }
                    }
                }
                v1 -= 12;
                ++ptr0;
                /*BAD_CALL!*/ camlPrintf__sub_1128(*(ptr0 + 1), *(ptr0 + 2), *(ptr0 + 3));
                goto loc_8058C50;
            }
            else {
            loc_8058C30:
                if(v6 == 1) {
                    *ptr0 = v1;
                loc_8058C50:
                    int v7 = *(int*)(v1 + 24);
                    --ptr0;
                    *ptr0 = &loc_8058C5F;
                    /*BAD_CALL!*/ camlPrintf__sub_fmt_1124(v7);
                    v1 = *ptr0 - 12;
                    ++ptr0;
                    /*BAD_CALL!*/ camlPrintf__sub_1128(*(ptr0 + 1), *(ptr0 + 2), *(ptr0 + 3));
                }
            }
        loc_8058C75:
            if(*(int*)(v1 + 32) == v5) {
                jump *(ptr0 + 1);
            }
            int* ptr1 = *(int**)(v1 + 12);
            v1 = *(int*)(v1 + 28);
            ++ptr0;
            /*BAD_CALL!*/ caml_apply3(v5, ptr1);
        }
        --ptr0;
        *ptr0 = &loc_8058C9C;
        int v8 = /*BAD_CALL!*/ caml_ml_array_bound_error(*(ptr0 + 1), *(ptr0 + 2), *(ptr0 + 3), *(ptr0 + 4));
        if(*(int*)(v1 + 32) <= v8) {
            jump *(int*)*(int*)(v1 + 20);
        }
        int v9 = *(int*)(v1 + 28);
        int v10 = (*(int*)(v9 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(int*)(v10 - (unsigned int)*(char*)(v9 + v10)) > (unsigned int)(v8 >> 1)) {
            if((unsigned int)*(char*)((unsigned int)(v8 >> 1) + v9) * 2 != 74) {
                v8 = /*BAD_CALL!*/ camlPrintf__sub_1128(*(ptr0 + 1), *(ptr0 + 2), *(ptr0 + 3));
            }
            v1 += 12;
            v0 = v8 + 2;
            goto camlPrintf__sub_sub_1129;
        }
        else {
            --ptr0;
            *ptr0 = &camlPrintf__loop_1159;
            /*BAD_CALL!*/ caml_ml_array_bound_error(*(ptr0 + 1), *(ptr0 + 2), *(ptr0 + 3), *(ptr0 + 4));
            --ptr0;
        }
    }
    jump *(int*)*(int*)(v1 + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__summarize_format_type_1162() {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1 = camlBuffer__create_1039();
    int* ptr2 = ptr1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 44);
        caml_young_ptr -= 44;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, (int)ptr1);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__add_char_1166;
    *(int**)(ptr0 + 4) = ptr1;
    *(ptr0 + 5) = 5367;
    *(ptr0 + 6) = &caml_curry3;
    *(ptr0 + 7) = 7;
    *(ptr0 + 8) = &camlPrintf__add_conv_1169;
    *(int**)(ptr0 + 9) = ptr1;
    *(ptr0 + 10) = (int)(ptr0 + 1);
    int result = camlPrintf__iter_on_format_args_1137((int)(ptr0 + 1));
    camlString__sub_1046(ptr2[1], v1);
    return result;
}

int camlPrintf__to_string_1054(int param0, int param1) {
    int v0;
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    return camlString__sub_1046((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 + 1, param1);
}

int camlPrintf__valid_float_loop_1273(int param0, int param1, int param2) {
    void* ptr0;
    int result;
    int v0;
    while(*(int*)(v0 + 12) > result) {
        int v1 = *(int*)(v0 + 8);
        int v2 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
        if((unsigned int)(v2 - (unsigned int)*(char*)(v1 + v2)) > (unsigned int)(result >> 1)) {
            unsigned int v3 = (unsigned int)((unsigned int)*(char*)((unsigned int)(result >> 1) + v1) * 2 - 91);
            if(v3 == 111 || (v3 <= 47 && v3 - 2 > 43)) {
                return *(int*)(v0 + 8);
            }
            result += 2;
        }
        else {
            /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr0, param0, param1, param2);
        }
    }
    camlPervasives__$5e_1112();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSource__entry(int param0, int param1) {
    camlSource = &camlSource__2;
    unsigned int v0 = ((*(int*)(camlSys - 4) >>> 9) | 0x1) > 3 ? (unsigned int)caml_c_call(): 3;
    gvar_8072CB8 = v0;
    int v1 = camlPrintf__printf_1393(param0, param1);
    camlSource__fib_1030();
    *(int*)v1();
    return 1;
}

int camlSource__fib_1030() {
    int v0;
    if(v0 < 5) {
        return 3;
    }
    int v1 = camlSource__fib_1030();
    int v2 = camlSource__fib_1030();
    return v2 + v1 - 1;
}

int camlStd_exit__entry() {
    **gvar_807564C();
    return 1;
}

int camlString__apply1_1100() {
    int v0;
    int result;
    int v1 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    if((v1 - (unsigned int)*(char*)(v1 + result)) * 2 + 1 == 1) {
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

int camlString__blit_1056(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    if(v1 >= 1 && v2 >= 1) {
        int v3 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v3 - (unsigned int)*(char*)(v0 + v3)) * 2 - v1 + 2 >= v2 && param1 >= 1) {
            int v4 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
            if((v4 - (unsigned int)*(char*)(param0 + v4)) * 2 - v1 + 2 >= param1) {
                return caml_blit_string(v0, v2, param0, param1, v1);
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
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
        int v2 = *(ptr2 + 1);
        int v3 = *ptr2;
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
        int* ptr3 = ptr1 + 3;
        *(ptr1 + 2) = 0x400;
        *(ptr1 + 3) = 1;
        *(ptr1 + 4) = 4343;
        *(ptr1 + 5) = &camlString__fun_1160;
        *(ptr1 + 6) = 3;
        *(ptr1 + 7) = (int)(ptr1 + 1);
        *(unsigned int*)(ptr1 + 8) = ptr1 + 3;
        camlList__iter_1074();
        int v4 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
        void* ptr4 = (void*)((v4 - (unsigned int)*(char*)(v4 + v1)) * 2 * ((*(int*)result - 2) >> 1) + *ptr3);
        int v5 = caml_c_call();
        result = v5;
        int v6 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
        caml_blit_string(v3, 1, v5, 1, (v6 - (unsigned int)*(char*)(v6 + v3)) * 2 + 1);
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
        int v7 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
        *(ptr0 + 1) = (v7 - (unsigned int)*(char*)(v7 + v3)) * 2 + 1;
        *(ptr0 + 2) = 5367;
        *(ptr0 + 3) = &camlString__fun_1163;
        *(ptr0 + 4) = 3;
        *(ptr0 + 5) = v1;
        *(ptr0 + 6) = v5;
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

int camlString__contains_from_1132(int param0) {
    int v0;
    int v1;
    int v2;
    int v3 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
    int v4 = (int)*(char*)(v1 + v3);
    if(v2 >= 1 && (v3 - v4) * 2 + 1 >= v2) {
        int v5 = sub_8055DF0(v0);
        if(*(int*)v5 == &caml_exn_Not_found) {
            return 1;
        }
        caml_raise_exn();
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v4, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__copy_1042() {
    int v0;
    int v1 = v0;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v1, 1, result, 1, v3);
    return result;
}

int camlString__entry() {
    camlString = &camlString__24;
    gvar_8077EA4 = &camlString__23;
    gvar_8077EA8 = &camlString__22;
    gvar_8077EAC = &camlString__21;
    gvar_8077EB0 = &camlString__20;
    gvar_8077EB8 = &camlString__19;
    gvar_8077EB4 = &camlString__18;
    gvar_8077EBC = &camlString__17;
    gvar_8077EF0 = &camlString__16;
    gvar_8077EDC = &camlString__15;
    gvar_8077EE0 = &camlString__14;
    gvar_8077EF4 = &camlString__13;
    gvar_8077EE4 = &camlString__12;
    gvar_8077EE8 = &camlString__11;
    gvar_8077EF8 = &camlString__10;
    gvar_8077EC0 = &camlString__9;
    gvar_8077EC8 = &camlString__8;
    gvar_8077EFC = &camlString__7;
    gvar_8077EC4 = &camlString__6;
    gvar_8077ECC = &camlString__5;
    gvar_8077ED4 = &camlString__4;
    gvar_8077ED0 = &camlString__3;
    gvar_8077ED8 = &camlString__2;
    gvar_8077EEC = &camlString__1;
    return 1;
}

int camlString__fill_1051(int param0, int param1) {
    int v0;
    int v1;
    if(v1 >= 1 && param0 >= 1) {
        int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v2 - (unsigned int)*(char*)(v0 + v2)) * 2 - param0 + 2 >= v1) {
            return caml_fill_string(v0, v1, param0, param1);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlString__fun_1160() {
    int v0;
    int v1;
    int* ptr0 = *(unsigned int*)(v0 + 8);
    *ptr0 = *ptr0 + 2;
    int v2 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
    **(unsigned int*)(v0 + 12) = (v2 - (unsigned int)*(char*)(v1 + v2)) * 2 + **(unsigned int*)(v0 + 12);
    return 1;
}

int camlString__fun_1163() {
    int v0;
    int v1;
    int v2 = *(int*)(v1 + 8);
    int v3 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
    caml_blit_string(*(int*)(v1 + 8), 1, *(int*)(v1 + 12), **(int**)(v1 + 16), (v3 - (unsigned int)*(char*)(v3 + v2)) * 2 + 1);
    int v4 = *(int*)(v1 + 8);
    int v5 = (*(int*)(v4 - 4) >>> 10) * 4 - 1;
    **(unsigned int*)(v1 + 16) = (v5 - (unsigned int)*(char*)(v5 + v4)) * 2 + **(unsigned int*)(v1 + 16);
    int v6 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    caml_blit_string(v0, 1, *(int*)(v1 + 12), **(int**)(v1 + 16), (v6 - (unsigned int)*(char*)(v6 + v0)) * 2 + 1);
    int v7 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    **(unsigned int*)(v1 + 16) = (v7 - (unsigned int)*(char*)(v0 + v7)) * 2 + **(unsigned int*)(v1 + 16);
    return 1;
}

int camlString__index_1113() {
    int v0;
    return camlString__index_rec_1108(1, v0);
}

int camlString__index_from_1116(int param0) {
    int v0;
    int v1;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v3 = (int)*(char*)(v0 + v2);
    if((v1 < 1 || (v2 - v3) * 2 + 1 < v1)) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012(v3, param0);
    }
    return camlString__index_rec_1108(v1, param0);
}

int camlString__index_rec_1108(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1;
    while(1) {
        if(param0 >= v1) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            v0 = caml_raise_exn();
        }
        if((unsigned int)*(char*)((param0 >> 1) + v0) * 2 + 1 == param1) {
            return param0;
        }
        param0 += 2;
    }
}

int camlString__iter_1062() {
    int v0;
    int* ptr0;
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v2 = (v1 - (unsigned int)*(char*)(v1 + v0)) * 2 - 1;
    if(v2 >= 1) {
        int v3 = v2;
        int v4 = 1;
        int v5 = v0;
        int* ptr1 = ptr0;
        do {
            *ptr0();
            v0 = v4;
            v4 += 2;
        }
        while(v0 != v3);
    }
    return 1;
}

int camlString__lowercase_1098() {
    return camlString__map_1090();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__make_1038() {
    int v0;
    int v1;
    int result = caml_c_call();
    caml_fill_string(result, 1, v1, v0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__map_1090() {
    int result1;
    int result;
    int* ptr0;
    int v0 = (*(int*)(result - 4) >>> 10) * 4 - 1;
    void* ptr1 = (void*)((v0 - (unsigned int)*(char*)(v0 + result)) * 2 + 1);
    if(ptr1 == 1) {
        return result;
    }
    int v1 = result;
    int* ptr2 = ptr0;
    void* ptr3 = ptr1;
    int v2 = caml_c_call();
    ptr1 = (void*)((int)ptr1 - 2);
    if((int)ptr1 >= 1) {
        void* ptr4 = ptr1;
        int v3 = 1;
        int v4 = v2;
        do {
            result1 = *ptr2();
            *(char*)((v3 >> 1) + v4) = (unsigned char)(result1 >>> 1);
            v3 += 2;
        }
        while((int*)((int)ptr4 + 2) != v3);
    }
    return result1;
}

int camlString__rcontains_from_1140(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    if(v2 >= 1) {
        int v3 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
        param1 = (v3 - (unsigned int)*(char*)(v1 + v3)) * 2 + 1;
        if(param1 > v2) {
            int v4 = sub_8055E90(v0);
            if(*(int*)v4 == &caml_exn_Not_found) {
                return 1;
            }
            caml_raise_exn();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlString__rindex_1125() {
    int v0;
    int v1;
    return camlString__rindex_rec_1121(v1, (int)*(char*)((*(int*)(v0 - 4) >>> 10) * 4 + v0 - 1));
}

int camlString__rindex_from_1128(int param0, int param1) {
    int v0;
    int v1;
    if((((v1 + 1) ^ v1) & ~v1) < 0 == v1 < -1) {
        int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        param1 = (v2 - (unsigned int)*(char*)(v0 + v2)) * 2 + 1;
        if(param1 > v1) {
            return camlString__rindex_rec_1121(param0, param1);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlString__rindex_rec_1121(int param0, int param1) {
    int v0;
    int* ptr0;
    int result;
    while(1) {
        if(result < 1) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            v0 = caml_raise_exn();
        }
        param1 = (unsigned int)*(char*)((result >> 1) + v0) * 2 + 1;
        if(param0 == param1) {
            return result;
        }
        result -= 2;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__sub_1046(int param0, int param1) {
    int result;
    int v0;
    if(result >= 1 && param0 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        param1 = (v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param0 + 2;
        if(param1 >= result) {
            int v2 = result;
            result = caml_c_call();
            caml_blit_string(v0, v2, result, 1, param0);
            return result;
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlString__uncapitalize_1106() {
    return camlString__apply1_1100();
}

int camlString__uppercase_1096() {
    return camlString__map_1090();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSys__catch_break_1082(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    if(v0 != 1) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                result = caml_call_gc(param0, param1);
            }
        }
        *ptr0 = 0x400;
        *(ptr0 + 1) = &camlSys__5;
        camlSys__set_signal_1057();
        return result;
    }
    return camlSys__set_signal_1057();
}

int camlSys__entry() {
    int v0;
    int v1 = 1;
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v2 = *(ptr0 + 1);
    gvar_807832C = *ptr0;
    camlSys = v2;
    unsigned int* ptr1 = (unsigned int*)caml_c_call();
    unsigned int v3 = *(ptr1 + 1);
    gvar_8078334 = *ptr1;
    gvar_8078338 = v3;
    int v4 = (gvar_8078338 - 20) >> 1;
    gvar_8078340 = (unsigned int)((2 << (v4 & 0x1f)) - 1);
    int v5 = gvar_8078340 >> 1;
    int v6 = (int)(gvar_8078338 >> 1);
    if(v6 < 0) {
        v6 += 7;
    }
    gvar_807833C = (unsigned int)((v6 >> 3) * 2 * v5 - 1);
    int v7 = caml_alloc3(v4, v0);
    *(int*)v7 = 0x400;
    *(int*)(v7 + 4) = 1;
    gvar_8078330 = (int*)(v7 + 4);
    gvar_8078344 = &camlSys__4;
    gvar_8078348 = 0xffffffff;
    gvar_807834C = 0xfffffffd;
    gvar_8078350 = 0xfffffffb;
    gvar_8078354 = 0xfffffff9;
    gvar_8078358 = 0xfffffff7;
    gvar_807835C = 0xfffffff5;
    gvar_8078360 = 0xfffffff3;
    gvar_8078364 = 0xfffffff1;
    gvar_8078368 = 0xffffffef;
    gvar_807836C = 0xffffffed;
    gvar_8078370 = 0xffffffeb;
    gvar_8078374 = 0xffffffe9;
    gvar_8078378 = 0xffffffe7;
    gvar_807837C = 0xffffffe5;
    gvar_8078380 = 0xffffffe3;
    gvar_8078384 = 0xffffffe1;
    gvar_8078388 = 0xffffffdf;
    gvar_807838C = 0xffffffdd;
    gvar_8078390 = 0xffffffdb;
    gvar_8078394 = 0xffffffd9;
    gvar_8078398 = 0xffffffd7;
    *(int*)(v7 + 8) = 0x400;
    *(int*)(v7 + 12) = "Sys.Break";
    gvar_807839C = (int*)(v7 + 12);
    gvar_80783A0 = &camlSys__2;
    gvar_80783A4 = "3.12.1";
    return 1;
}

void camlSys__fun_1093(int param0, int param1) {
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 0x400;
            *(unsigned int*)(ptr0 + 1) = gvar_807839C;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSys__set_signal_1057() {
    caml_c_call();
    return 1;
}

int camlUnixLabels__entry() {
    camlUnixLabels = camlUnix;
    gvar_8075290 = gvar_8072D1C;
    gvar_8075294 = gvar_8072D20;
    gvar_8075298 = gvar_8072D24;
    gvar_807529C = gvar_8072D28;
    gvar_80752A0 = gvar_8072D2C;
    gvar_80752A4 = gvar_8072D30;
    gvar_80752A8 = gvar_8072D34;
    gvar_80752AC = gvar_8072D38;
    gvar_80752B0 = gvar_8072D3C;
    gvar_80752B4 = gvar_8072D40;
    gvar_80752B8 = gvar_8072D44;
    gvar_80752BC = gvar_8072D48;
    gvar_80752C0 = gvar_8072D4C;
    gvar_80752C4 = gvar_8072D50;
    gvar_80752C8 = gvar_8072D54;
    gvar_80752CC = gvar_8072D58;
    gvar_80752D0 = 1;
    gvar_80752D4 = 3;
    gvar_80752D8 = 5;
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
    gvar_80754DC = gvar_8072F68;
    gvar_80754E0 = gvar_8072F6C;
    gvar_80754E4 = gvar_8072F70;
    gvar_80754E8 = gvar_8072F74;
    gvar_80754EC = gvar_8072F78;
    gvar_80754F0 = gvar_8072F7C;
    gvar_80754F4 = gvar_8072F80;
    return 1;
}

int camlUnix__accept_non_intr_2024() {
    int v0;
    int v1;
    int v2;
    while(1) {
        int v3 = sub_804DF10(v2, v0);
        if(camlUnix == *(int*)v3) {
            int v4 = *(int*)(v3 + 4);
            if((v4 & 0x1) && v4 == 23) {
                v2 = v1;
                continue;
            }
        }
        break;
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

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
    int v6 = sub_804DCC0(v4, v1, v3, v0);
    if(*(int*)v6 != &caml_exn_Sys_error) {
        caml_raise_exn();
    }
    int v7 = camlUnix__waitpid_non_intr_2001();
    return *(int*)(v7 + 4);
}

int camlUnix__close_process_full_2013(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = v3;
    int v6 = v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v2, v1);
        }
    }
    *ptr0 = 3075;
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = v3;
    *(ptr0 + 3) = v2;
    camlUnix__find_proc_id_1997();
    int v7 = v1;
    caml_c_call();
    int v8 = sub_804DD80(v6, v4, v1, v5, v0);
    if(*(int*)v8 != &caml_exn_Sys_error) {
        caml_raise_exn();
        /*BAD_CALL!*/ sub_804DD80(v4, v1, v5, v0, param0);
    }
    caml_c_call();
    return camlUnix__waitpid_non_intr_2001();
}

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

int camlUnix__create_process_1907(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int result = caml_c_call();
    if(result != 1) {
        return result;
    }
    int result1 = sub_804D250(v2, v3, v4, v5, v1, v0);
    camlPervasives__exit_1326();
    return result1;
}

int camlUnix__create_process_env_1914(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int result = caml_c_call();
    if(result != 1) {
        return result;
    }
    int result1 = sub_804D300(v2, v3, v4, v5, v6, v1, v0);
    camlPervasives__exit_1326();
    return result1;
}

int camlUnix__domain_of_sockaddr_1529() {
    int* ptr0;
    if(*(char*)(ptr0 - 1)) {
        int v0 = *ptr0;
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v1 + v0)) * 2 == 32) {
            return 5;
        }
        return 3;
    }
    return 1;
}

int camlUnix__entry(int param0, int param1) {
    int v0;
    gvar_8072F80 = &camlUnix__175;
    gvar_8072F7C = &camlUnix__174;
    gvar_8072F78 = &camlUnix__173;
    gvar_8072F74 = &camlUnix__172;
    gvar_8072F70 = &camlUnix__171;
    gvar_8072F6C = &camlUnix__170;
    gvar_8072F68 = &camlUnix__169;
    gvar_8072F5C = &camlUnix__168;
    gvar_8072F58 = &camlUnix__167;
    gvar_8072F54 = &camlUnix__166;
    gvar_8072F50 = &camlUnix__165;
    gvar_8072F4C = &camlUnix__164;
    gvar_8072F48 = &camlUnix__163;
    gvar_8072F44 = &camlUnix__162;
    gvar_8072F00 = &camlUnix__161;
    gvar_8072EFC = &camlUnix__160;
    gvar_8072EF8 = &camlUnix__159;
    gvar_8072EF4 = &camlUnix__158;
    gvar_8072EF0 = &camlUnix__157;
    gvar_8072EEC = &camlUnix__156;
    gvar_8072EE8 = &camlUnix__155;
    gvar_8072EE4 = &camlUnix__154;
    gvar_8072EDC = &camlUnix__153;
    gvar_8072EC8 = &camlUnix__152;
    gvar_8072EC4 = &camlUnix__151;
    gvar_8072EC0 = &camlUnix__150;
    gvar_8072EBC = &camlUnix__149;
    gvar_8072EB8 = &camlUnix__148;
    gvar_8072EB4 = &camlUnix__147;
    gvar_8072EB0 = &camlUnix__146;
    gvar_8072EAC = &camlUnix__145;
    gvar_8072EA8 = &camlUnix__144;
    gvar_8072EA4 = &camlUnix__143;
    gvar_8072EA0 = &camlUnix__142;
    gvar_8072E9C = &camlUnix__141;
    gvar_8072E98 = &camlUnix__140;
    gvar_8072E94 = &camlUnix__139;
    gvar_8072E90 = &camlUnix__138;
    gvar_8072E8C = &camlUnix__137;
    gvar_8072E88 = &camlUnix__136;
    gvar_8072E84 = &camlUnix__135;
    gvar_8072E80 = &camlUnix__134;
    gvar_8072E7C = &camlUnix__133;
    gvar_8072E78 = &camlUnix__132;
    gvar_8072E74 = &camlUnix__131;
    gvar_8072E70 = &camlUnix__130;
    gvar_8072E6C = &camlUnix__129;
    gvar_8072E68 = &camlUnix__128;
    gvar_8072E64 = &camlUnix__127;
    gvar_8072E60 = &camlUnix__126;
    gvar_8072E58 = &camlUnix__125;
    gvar_8072E54 = &camlUnix__124;
    gvar_8072E50 = &camlUnix__123;
    gvar_8072E4C = &camlUnix__122;
    gvar_8072E48 = &camlUnix__121;
    gvar_8072E44 = &camlUnix__120;
    gvar_8072E40 = &camlUnix__119;
    gvar_8072E3C = &camlUnix__118;
    gvar_8072E10 = &camlUnix__117;
    gvar_8072E0C = &camlUnix__116;
    gvar_8072E08 = &camlUnix__115;
    gvar_8072E04 = &camlUnix__114;
    gvar_8072E00 = &camlUnix__113;
    gvar_8072DFC = &camlUnix__112;
    gvar_8072DF8 = &camlUnix__111;
    gvar_8072DF4 = &camlUnix__110;
    gvar_8072DF0 = &camlUnix__109;
    gvar_8072DEC = &camlUnix__108;
    gvar_8072DE8 = &camlUnix__107;
    gvar_8072DE4 = &camlUnix__106;
    gvar_8072DE0 = &camlUnix__105;
    gvar_8072DDC = &camlUnix__104;
    gvar_8072DD8 = &camlUnix__103;
    gvar_8072DD4 = &camlUnix__102;
    gvar_8072DD0 = &camlUnix__101;
    gvar_8072DCC = &camlUnix__100;
    gvar_8072DC8 = &camlUnix__99;
    gvar_8072DC4 = &camlUnix__98;
    gvar_8072DC0 = &camlUnix__97;
    gvar_8072DBC = &camlUnix__96;
    gvar_8072DB8 = &camlUnix__95;
    gvar_8072DB4 = &camlUnix__94;
    gvar_8072DB0 = &camlUnix__93;
    gvar_8072DAC = &camlUnix__92;
    gvar_8072DA4 = &camlUnix__91;
    gvar_8072DA0 = &camlUnix__90;
    gvar_8072D9C = &camlUnix__89;
    gvar_8072D98 = &camlUnix__88;
    gvar_8072D94 = &camlUnix__87;
    gvar_8072D90 = &camlUnix__86;
    gvar_8072D8C = &camlUnix__85;
    gvar_8072D88 = &camlUnix__84;
    gvar_8072D84 = &camlUnix__83;
    gvar_8072D80 = &camlUnix__82;
    gvar_8072D7C = &camlUnix__81;
    gvar_8072D6C = &camlUnix__80;
    gvar_8072D68 = &camlUnix__79;
    gvar_8072D58 = &camlUnix__78;
    gvar_8072D54 = &camlUnix__77;
    gvar_8072D50 = &camlUnix__76;
    gvar_8072D48 = &camlUnix__75;
    gvar_8072D44 = &camlUnix__74;
    gvar_8072D40 = &camlUnix__73;
    gvar_8072D3C = &camlUnix__72;
    gvar_8072D38 = &camlUnix__71;
    gvar_8072D34 = &camlUnix__70;
    gvar_8072D30 = &camlUnix__69;
    gvar_8072D2C = &camlUnix__68;
    gvar_8072D28 = &camlUnix__67;
    gvar_8072D24 = &camlUnix__66;
    gvar_8072D1C = &camlUnix__65;
    int v1 = caml_allocN(param0, param1);
    *(int*)v1 = 0x400;
    *(int*)(v1 + 4) = "Unix.Unix_error";
    camlUnix = (int*)(v1 + 4);
    *(int*)(v1 + 8) = 0x1000;
    *(unsigned int*)(v1 + 12) = camlUnix;
    *(int*)(v1 + 16) = 1;
    *(int*)(v1 + 20) = &camlUnix__62;
    *(int*)(v1 + 24) = &camlUnix__63;
    camlCallback__register_exception_1034();
    gvar_8072D20 = &camlUnix__60;
    gvar_8072D5C = 1;
    gvar_8072D60 = 3;
    gvar_8072D64 = 5;
    gvar_8072D70 = &camlUnix__59;
    gvar_8072D74 = &camlUnix__58;
    gvar_8072D78 = &camlUnix__57;
    int v2 = caml_allocN(param0, param1);
    *(int*)v2 = 0x1800;
    *(int*)(v2 + 4) = &camlUnix__50;
    *(int*)(v2 + 8) = &camlUnix__51;
    *(int*)(v2 + 12) = &camlUnix__52;
    *(int*)(v2 + 16) = &camlUnix__53;
    *(int*)(v2 + 20) = &camlUnix__54;
    *(int*)(v2 + 24) = &camlUnix__55;
    gvar_8072DA8 = (int*)(v2 + 4);
    gvar_8072F84 = &camlUnix__49;
    gvar_8072E5C = &camlUnix__48;
    gvar_8072F88 = &camlUnix__47;
    unsigned int v3 = (unsigned int)caml_c_call();
    gvar_8072ECC = v3;
    unsigned int v4 = (unsigned int)caml_c_call();
    gvar_8072ED0 = v4;
    int v5 = sub_804E61A(v0);
    int v6 = *(int*)v5 == &caml_exn_Failure ? gvar_8072ECC: /*BAD_CALL!*/ caml_raise_exn();
    gvar_8072ED4 = v6;
    int v7 = sub_804E662(v0);
    int v8 = *(int*)v7 == &caml_exn_Failure ? gvar_8072ED0: /*BAD_CALL!*/ caml_raise_exn();
    gvar_8072ED8 = v8;
    gvar_8072EE0 = &camlUnix__42;
    gvar_8072F04 = &camlUnix__41;
    gvar_8072F08 = &camlUnix__40;
    gvar_8072F0C = &camlUnix__39;
    gvar_8072F10 = &camlUnix__38;
    int v9 = caml_allocN(&caml_exn_Failure, param1);
    *(int*)v9 = 0x1c00;
    *(int*)(v9 + 4) = 1;
    *(int*)(v9 + 8) = 3;
    *(int*)(v9 + 12) = 5;
    *(int*)(v9 + 16) = 7;
    *(int*)(v9 + 20) = 9;
    *(int*)(v9 + 24) = &camlUnix__36;
    *(int*)(v9 + 28) = &camlUnix__37;
    gvar_8072F8C = (int*)(v9 + 4);
    gvar_8072F14 = &camlUnix__35;
    gvar_8072F18 = &camlUnix__34;
    gvar_8072F1C = &camlUnix__33;
    gvar_8072F20 = &camlUnix__32;
    gvar_8072F24 = &camlUnix__31;
    gvar_8072F28 = &camlUnix__30;
    gvar_8072F2C = &camlUnix__29;
    gvar_8072F30 = &camlUnix__28;
    gvar_8072F34 = &camlUnix__27;
    gvar_8072F90 = &camlUnix__26;
    gvar_8072F60 = &camlUnix__25;
    gvar_8072F94 = &camlUnix__24;
    gvar_8072F64 = &camlUnix__23;
    gvar_8072D4C = &camlUnix__22;
    gvar_8072F98 = &camlUnix__21;
    gvar_8072F9C = &camlUnix__20;
    gvar_8072FA0 = &camlUnix__19;
    gvar_8072E14 = &camlUnix__18;
    gvar_8072E18 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_8072FA4 = ptr0;
    gvar_8072FA8 = &camlUnix__16;
    gvar_8072E1C = &camlUnix__15;
    gvar_8072E20 = &camlUnix__14;
    gvar_8072E24 = &camlUnix__13;
    gvar_8072FAC = &camlUnix__12;
    gvar_8072E28 = &camlUnix__11;
    gvar_8072FB0 = &camlUnix__10;
    gvar_8072FB4 = &camlUnix__9;
    gvar_8072E2C = &camlUnix__8;
    gvar_8072E30 = &camlUnix__7;
    gvar_8072E34 = &camlUnix__6;
    gvar_8072E38 = &camlUnix__5;
    gvar_8072F38 = &camlUnix__4;
    gvar_8072F3C = &camlUnix__3;
    gvar_8072FB8 = &camlUnix__2;
    gvar_8072F40 = &camlUnix__1;
    return 1;
}

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
    int* ptr0 = (int*)sub_804DAC0(v0, v3, v4, v1);
    if(*ptr0 == &caml_exn_Not_found) {
    loc_804DA70:
        int* ptr1 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit > (unsigned int)ptr1) {
            caml_call_gc(&caml_exn_Not_found, v5);
            goto loc_804DA70;
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
    goto loc_804DA70;
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

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2828(int param0, int param1) {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    if(!(int*)((int)ptr1 & 0x1)) {
        unsigned int v1 = (unsigned int)*(char*)(ptr1 - 1);
        if(v1 >= 1) {
            if((int)v1 <= 1) {
                int v2 = *ptr1;
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v2, param1);
                    }
                }
                *ptr0 = 0x400;
                *(int*)(unsigned int)(ptr0 + 1) = v2;
                caml_modify(*(unsigned int**)(v0 + 8), (unsigned int)(ptr0 + 1));
            }
            else {
                **(unsigned int*)(v0 + 12) = *ptr1;
            }
            return 1;
        }
    }
    else if((int)(int*)((int)ptr1 >> 1) >= 2) {
        **(unsigned int*)(v0 + 16) = 3;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlUnix__fun_2833(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v0;
    *(ptr0 + 2) = **(unsigned int*)(v1 + 8);
    return ptr0 + 1;
}

int camlUnix__fun_2836(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 28);
        caml_young_ptr -= 28;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            result = caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_tuplify2;
    *(ptr0 + 2) = -3;
    *(ptr0 + 3) = &camlUnix__fun_2842;
    *(ptr0 + 4) = *(int*)(param0 + 12);
    *(ptr0 + 5) = v0;
    *(ptr0 + 6) = v1;
    camlList__map_1062();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlUnix__fun_2842(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 36);
        caml_young_ptr -= 36;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
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
    void* ptr1;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = caml_string_equal(*(int**)(param0 + 12), (int*)&camlUnix__215);
    if(v6 == 1) {
        int v7 = sub_804B880(v4, param0, v3, v0);
        if(*(int*)v7 == &caml_exn_Failure) {
            int v8 = sub_804B7F0(ptr1, v1, v2, v0);
            if(*(int**)v8 == &caml_exn_Not_found) {
                return (unsigned int*)0x1;
            }
            caml_raise_exn();
        }
        caml_raise_exn();
        caml_call_gc(param0, v5);
        goto loc_804B761;
    }
    else {
    loc_804B761:
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
    }
    if(caml_young_limit <= (unsigned int)ptr0) {
        *ptr0 = 0x800;
        *(ptr0 + 1) = v3;
        *(ptr0 + 2) = 1;
        *(ptr0 + 3) = 0x800;
        *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
        *(ptr0 + 5) = 1;
        return (unsigned int*)(ptr0 + 4);
    }
    caml_call_gc(param0, v5);
    goto loc_804B761;
}

int camlUnix__getaddrinfo_1751(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = sub_804CC80(v1, v2, v3, v0);
    if(*(int*)v4 == &caml_exn_Invalid_argument) {
        return camlUnix__getaddrinfo_emulation_1730(param0, param1, param2, param3, param4, param5);
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int camlUnix__getaddrinfo_emulation_1730(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int* ptr0;
    unsigned int* ptr1;
    int* ptr2;
    unsigned int* ptr3;
    int* ptr4;
    int* ptr5;
    void* ptr6;
    void* ptr7;
    int v0;
    int v1;
    int* ptr8;
    int v2;
    int* ptr9 = ptr8;
    int v3 = v1;
    int v4 = v0;
    while(1) {
        ptr5 = (int*)(caml_young_ptr - 48);
        caml_young_ptr -= 48;
        if(caml_young_limit <= (unsigned int)ptr5) {
            break;
        }
        else {
            caml_call_gc(v0, v2);
        }
    }
    int v5 = (int)(ptr5 + 1);
    *ptr5 = 0x400;
    *(int*)(int)(ptr5 + 1) = 1;
    int v6 = (int)(ptr5 + 3);
    *(ptr5 + 2) = 0x400;
    *(int*)(int)(ptr5 + 3) = 1;
    *(ptr5 + 4) = 0x400;
    *(ptr5 + 5) = 1;
    *(ptr5 + 6) = 5367;
    *(ptr5 + 7) = &camlUnix__fun_2828;
    *(ptr5 + 8) = 3;
    *(ptr5 + 9) = (int)(ptr5 + 1);
    *(ptr5 + 10) = (int)(ptr5 + 3);
    *(unsigned int*)(ptr5 + 11) = ptr5 + 5;
    camlList__iter_1074();
    while(1) {
        ptr4 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr4) {
            break;
        }
        else {
            caml_call_gc(v0, v2);
        }
    }
    *ptr4 = 4343;
    *(int*)(int)(ptr4 + 1) = &caml_curry2;
    *(ptr4 + 2) = 5;
    *(ptr4 + 3) = &camlUnix__get_port_1739;
    int* ptr10 = (int*)v3;
    *(int**)(ptr4 + 4) = (int*)v3;
    int* ptr11 = *(int**)v5;
    if(ptr11 != 1) {
        int v7 = *ptr11;
        if(v7 == 3) {
            v3 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        }
        else if(v7 != 1) {
            int v8 = caml_string_equal(ptr10, (int*)&camlUnix__202);
            if(v8 == 1) {
                v3 = 1;
            }
            else {
                while(1) {
                    int* ptr12 = (int*)(caml_young_ptr - 24);
                    caml_young_ptr -= 24;
                    if(caml_young_limit <= (unsigned int)ptr12) {
                    loc_804C8D1:
                        *ptr12 = 0x800;
                        *(ptr12 + 1) = v7;
                        *(ptr12 + 2) = 1;
                        v3 = (int)(ptr12 + 4);
                        *(ptr12 + 3) = 0x800;
                        *(int**)(int)(ptr12 + 4) = ptr12 + 1;
                        *(ptr12 + 5) = 1;
                        goto loc_804C98E;
                    }
                    else {
                        caml_call_gc(v0, v2);
                    }
                }
                goto loc_804C8D1;
            }
        }
        else {
            v3 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        }
    }
    else {
        v5 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        camlUnix__get_port_1739((int)(ptr4 + 1));
        v3 = (int)camlPervasives__$40_1143();
    }
loc_804C98E:
    int v9 = caml_string_equal(ptr9, (int*)&camlUnix__197);
    if(v9 != 1) {
        ptr3 = &ptr6;
        int v10 = camlList__mem_1161();
        if(v10 != 1) {
            while(1) {
                ptr2 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr2) {
                    break;
                }
                else {
                    ptr3 = &ptr6;
                    caml_call_gc(v0, v2);
                }
            }
            *ptr2 = 0x800;
            *(unsigned int*)(ptr2 + 1) = gvar_8072ECC;
            *(ptr2 + 2) = "0.0.0.0";
            ptr1 = (unsigned int*)(ptr2 + 4);
            *(int*)(ptr1 - 1) = 0x800;
            *ptr1 = (unsigned int*)(ptr2 + 1);
        }
        else {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    ptr3 = &ptr6;
                    caml_call_gc(v0, v2);
                }
            }
            *ptr0 = 0x800;
            *(unsigned int*)(ptr0 + 1) = gvar_8072ED0;
            *(ptr0 + 2) = "127.0.0.1";
            ptr1 = (unsigned int*)(ptr0 + 4);
            *(int*)(ptr1 - 1) = 0x800;
            *ptr1 = (unsigned int*)(ptr0 + 1);
        }
        *(int*)(ptr1 + 1) = 1;
    }
    else {
        int v11 = sub_804CB30(v3, v5, v6, (int)ptr9, v4, ptr7);
        if(*(int*)v11 == &caml_exn_Failure) {
            int v12 = sub_804CAA0(param0, param1, param2, param3, param4, param5);
            if(*(int*)v12 == &caml_exn_Not_found) {
                ptr1 = (unsigned int*)0x1;
            }
            else {
                ptr3 = &param5;
                caml_raise_exn();
                goto loc_804CB20;
            }
        }
        else {
        loc_804CB20:
            --ptr3;
            *ptr3 = &loc_804CB25;
            /*BAD_CALL!*/ caml_raise_exn();
        }
    }
    while(1) {
        int* ptr13 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr13) {
            *ptr13 = 5367;
            *(ptr13 + 1) = &caml_tuplify2;
            *(ptr13 + 2) = -3;
            *(ptr13 + 3) = &camlUnix__fun_2836;
            *(ptr13 + 4) = *(int*)(ptr3 + 2);
            *(unsigned int*)(ptr13 + 5) = ptr1;
            --ptr3;
            *ptr3 = &loc_804CBD9;
            /*BAD_CALL!*/ camlList__map_1062();
            ptr3 += 5;
            /*BAD_CALL!*/ camlList__flatten_1058();
        }
        --ptr3;
        *ptr3 = &loc_804CBE6;
        /*BAD_CALL!*/ caml_call_gc((int)ptr1, v2);
    }
}

int* camlUnix__getnameinfo_1781() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = sub_804CF80(v1, v2, v0);
    if(*(int*)v4 == &caml_exn_Invalid_argument) {
        return camlUnix__getnameinfo_emulation_1772(&caml_exn_Invalid_argument, v3);
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int* camlUnix__getnameinfo_emulation_1772(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr3;
    int v7 = (int)*(char*)&ptr3[-1];
    if(v7) {
        int v8 = sub_804CD70(ptr3[0], ptr3[1], v6, v1);
        if(*(int*)v8 == &caml_exn_Not_found) {
            int v9 = camlList__mem_1161();
            if(v9 != 1) {
                while(1) {
                    ptr2 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr2) {
                        break;
                    }
                    else {
                        caml_call_gc(v5, param1);
                    }
                }
                *ptr2 = 0x400;
                *(ptr2 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            v0 = caml_c_call();
        }
        else {
            v0 = caml_raise_exn();
        }
        int v10 = sub_804CE20(v0, v2, v3, v1);
        if(*(int*)v10 == &caml_exn_Not_found) {
            v7 = camlPervasives__string_of_int_1130();
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
                caml_call_gc(v7, param1);
            }
        }
        *ptr1 = 0x800;
        *(ptr1 + 1) = v4;
        *(ptr1 + 2) = v7;
        return ptr1 + 1;
    }
    int v11 = ptr3[0];
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(0, param1);
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

int camlUnix__handle_unix_error_1171() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = sub_804C280(v0, v1, v2, v3);
    if(camlUnix == *(int*)v4) {
        v2 = *(int*)(v4 + 12);
        v0 = *(int*)(v4 + 8);
        v1 = *(int*)(v4 + 4);
        if((unsigned int)(*(int*)(camlSys - 4) >>> 9) > 1) {
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            int v5 = (*(int*)(v2 - 4) >>> 10) * 4 - 1;
            if((v5 - (unsigned int)*(char*)(v5 + v2)) * 2 + 1 > 1) {
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
    /*BAD_CALL!*/ caml_ml_array_bound_error(v0, v1, v2, v3);
}

int camlUnix__is_inet6_addr_1500() {
    int v0;
    int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    return ((v1 - (unsigned int)*(char*)(v1 + v0)) * 2 + 1 == 33 ? 1: 0) * 2 + 1;
}

int camlUnix__open_connection_2018() {
    int v0;
    int v1;
    int v2 = camlUnix__domain_of_sockaddr_1529();
    int v3 = caml_c_call();
    sub_804DE20(v1, v3, v0);
    caml_c_call();
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_proc_1949(int param0, int param1) {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = v1;
    int v5 = param0;
    int v6 = param1;
    int v7 = camlList__for_all_1137();
    int v8 = caml_c_call();
    if(v8 != 1) {
        return camlHashtbl__add_1074(v8);
    }
    if(v5 != 1) {
        caml_c_call();
        caml_c_call();
    }
    if(v6 != 3) {
        caml_c_call();
        caml_c_call();
    }
    if(v7 == 1) {
        camlList__iter_1074();
    }
    int result = sub_804D430(v7, v0, v2, param1, param0, v1, (int)ptr0);
    camlPervasives__exit_1326();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_proc_full_1975(int param0, int param1) {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v0;
    int v6 = v1;
    int v7 = param0;
    int v8 = v2;
    int v9 = v3;
    int v10 = caml_extra_params;
    int v11 = camlList__for_all_1137();
    int v12 = caml_c_call();
    if(v12 != 1) {
        return camlHashtbl__add_1074(v12);
    }
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    if(v11 == 1) {
        camlList__iter_1074();
    }
    int result = sub_804D820(v4, v2, v3, v11, v0, v1, v10, param0, (int)ptr0);
    camlPervasives__exit_1326();
    return result;
}

int* camlUnix__open_process_1967() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2 = 1;
    int* ptr2 = (int*)caml_c_call();
    int v3 = *(ptr2 + 1);
    int v4 = *ptr2;
    int* ptr3 = (int*)caml_c_call();
    int* ptr4 = *(unsigned int*)(ptr3 + 1);
    int v5 = *ptr3;
    int v6 = caml_c_call();
    int v7 = caml_c_call();
    int v8 = v7;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 36);
        caml_young_ptr -= 36;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(v7, v1);
        }
    }
    *ptr1 = 0x800;
    *(unsigned int*)(ptr1 + 1) = ptr4;
    *(ptr1 + 2) = 1;
    ptr4 = ptr1 + 4;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v4;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v6;
    *(ptr1 + 8) = v7;
    camlUnix__open_proc_1949(v5, v3);
    caml_c_call();
    caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v6;
    *(ptr0 + 2) = v8;
    return ptr0 + 1;
}

int* camlUnix__open_process_full_1985() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2 = 1;
    int* ptr2 = (int*)caml_c_call();
    int v3 = *(ptr2 + 1);
    int v4 = *ptr2;
    int* ptr3 = (int*)caml_c_call();
    int v5 = *(ptr3 + 1);
    int v6 = *ptr3;
    unsigned int* ptr4 = (unsigned int*)caml_c_call();
    int v7 = *(int*)(ptr4 + 1);
    int* ptr5 = *ptr4;
    int v8 = caml_c_call();
    int v9 = caml_c_call();
    int v10 = caml_c_call();
    int v11 = v10;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 52);
        caml_young_ptr -= 52;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(v0, v1);
        }
    }
    *ptr1 = 0x800;
    *(unsigned int*)(ptr1 + 1) = ptr5;
    *(ptr1 + 2) = 1;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v5;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    ptr5 = ptr1 + 7;
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v4;
    *(unsigned int*)(ptr1 + 8) = ptr1 + 4;
    *(ptr1 + 9) = 3075;
    *(int*)(int)(ptr1 + 10) = v8;
    *(ptr1 + 11) = v9;
    *(ptr1 + 12) = v10;
    caml_extra_params = ptr5;
    camlUnix__open_proc_full_1975((int)(ptr1 + 10), v6);
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
            caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 0xc00;
    *(ptr0 + 1) = v8;
    *(ptr0 + 2) = v9;
    *(ptr0 + 3) = v11;
    return ptr0 + 1;
}

int camlUnix__open_process_in_1957() {
    int* ptr0;
    int v0;
    int v1 = 1;
    int* ptr1 = (int*)caml_c_call();
    int v2 = *(ptr1 + 1);
    int v3 = *ptr1;
    int v4 = caml_c_call();
    int result = v4;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v4, v0);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v3;
    *(ptr0 + 2) = 1;
    *(ptr0 + 3) = 1025;
    *(ptr0 + 4) = v4;
    camlUnix__open_proc_1949(1, v2);
    caml_c_call();
    return result;
}

int camlUnix__open_process_out_1962() {
    int* ptr0;
    int v0;
    int v1 = 1;
    int* ptr1 = (int*)caml_c_call();
    int v2 = *(ptr1 + 1);
    int v3 = *ptr1;
    int v4 = caml_c_call();
    int result = v4;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v4, v0);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v2;
    *(ptr0 + 2) = 1;
    *(ptr0 + 3) = 1026;
    *(ptr0 + 4) = v4;
    camlUnix__open_proc_1949(v3, 3);
    caml_c_call();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__pause_1408() {
    caml_c_call();
    return caml_c_call();
}

int camlUnix__perform_redirections_1900(int param0) {
    camlUnix__safe_dup_1894();
    camlUnix__safe_dup_1894();
    int v0 = camlUnix__safe_dup_1894();
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
int camlUnix__read_1237(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlUnix__recv_1558(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlUnix__recvfrom_1564(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlUnix__safe_close_1898() {
    int v0;
    int v1 = sub_804D100(v0);
    if(camlUnix == *(int*)v1) {
        return 1;
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int camlUnix__safe_dup_1894() {
    int result = caml_c_call();
    if(result >= 7) {
        return result;
    }
    camlUnix__safe_dup_1894();
    return caml_c_call();
}

int camlUnix__send_1570(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int camlUnix__sendto_1576(int param0, int param1) {
    int v0;
    int v1;
    if(param0 >= 1 && param1 >= 1) {
        int v2 = v0;
        int v3 = (*(int*)(v1 - 4) >>> 10) * 4 - 1;
        if((v3 - (unsigned int)*(char*)(v1 + v3)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
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

int camlUnix__single_write_1247(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__system_1891() {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = caml_c_call();
    if(v3 != 1) {
        int v4 = v3;
        int v5 = caml_c_call();
        return *(int*)(v5 + 4);
    }
    sub_804D010(v1, v0);
    return camlPervasives__exit_1326();
}

int camlUnix__try_set_close_on_exec_1366() {
    int v0;
    int v1 = sub_804C440(v0);
    if(*(int*)v1 == &caml_exn_Invalid_argument) {
        return 1;
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int camlUnix__waitpid_non_intr_2001() {
    int v0;
    int v1;
    int v2;
    while(1) {
        int v3 = sub_804DB50(v2, v0);
        if(camlUnix == *(int*)v3) {
            int v4 = *(int*)(v3 + 4);
            if((v4 & 0x1) && v4 == 23) {
                v2 = v1;
                continue;
            }
        }
        break;
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int camlUnix__write_1242(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012(param0, param1);
}

int caml_MD5Final(int* param0, int* param1) {
    int* ptr0 = param0;
    int* ptr1 = param1;
    int v0 = (*(ptr1 + 4) >>> 3) & 0x3f;
    *(char*)((int*)(v0 + (int)ptr1) + 6) = 128;
    void* __s = (void*)((char*)(v0 + (int)ptr1) + 25);
    if((size_t)(63 - v0) <= 7) {
        →memset(__s, 0, (size_t)(63 - v0));
        char* ptr2 = (char*)(ptr1 + 6);
        caml_MD5Transform((int)ptr1, (int)ptr2);
        int v1 = 56;
        if((int*)((int)ptr2 & 0x1)) {
            *ptr2 = 0;
            ++ptr2;
            v1 = 55;
        }
        if((int*)((int)ptr2 & 0x2)) {
            *(short*)ptr2 = 0;
            ptr2 += 2;
            v1 -= 2;
        }
        for(int i = v1 >>> 2; i != 0; --i) {
            *(int*)ptr2 = 0;
            ptr2 += 4;
        }
        if(((unsigned char)v1 & 0x2)) {
            *(short*)ptr2 = 0;
            ptr2 += 2;
        }
        if(((unsigned char)v1 & 0x1)) {
            *ptr2 = 0;
        }
    }
    else {
        →memset(__s, 0, (size_t)(63 - v0) - 8);
    }
    *(ptr1 + 20) = *(ptr1 + 4);
    *(ptr1 + 21) = *(ptr1 + 5);
    caml_MD5Transform((int)ptr1, (int)(ptr1 + 6));
    *ptr0 = *ptr1;
    *(ptr0 + 1) = *(ptr1 + 1);
    *(ptr0 + 2) = *(ptr1 + 2);
    int result = *(ptr1 + 3);
    *(ptr0 + 3) = *(ptr1 + 3);
    *ptr1 = 0;
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

void* caml_MD5Update(int param0, void* __src, size_t param2) {
    void* result;
    size_t __n = param2;
    unsigned int v0 = *(unsigned int*)(param0 + 16);
    unsigned int v1 = (unsigned int)(__n * 8 + v0);
    int v2 = param0;
    *(unsigned int*)(v2 + 16) = v1;
    if(v1 < v0) {
        *(int*)(v2 + 20) = *(int*)(v2 + 20) + 1;
    }
    *(int*)(param0 + 20) = (__n >>> 29) + *(int*)(param0 + 20);
    if(((v0 >>> 3) & 0x3f)) {
        void* __dest = (void*)(((v0 >>> 3) & 0x3f) + param0 + 24);
        if((size_t)(64 - ((v0 >>> 3) & 0x3f)) > __n) {
            result = →memcpy(__dest, __src, __n);
        }
        else {
            →memcpy(__dest, __src, (size_t)(64 - ((v0 >>> 3) & 0x3f)));
            caml_MD5Transform(param0, param0 + 24);
            __src = (void*)((size_t)(64 - ((v0 >>> 3) & 0x3f)) + (int)__src);
            __n -= (size_t)(64 - ((v0 >>> 3) & 0x3f));
            goto loc_806DA15;
        }
    }
    else {
    loc_806DA15:
        if(__n > 63) {
            int* ptr0 = (int*)(param0 + 24);
            int v3 = param0;
            int v4 = 0;
            do {
                int* ptr1 = (int*)(v4 + (int)__src);
                *(int*)(param0 + 24) = *ptr1;
                *(int*)(param0 + 28) = *(ptr1 + 1);
                *(int*)(param0 + 32) = *(ptr1 + 2);
                *(int*)(param0 + 36) = *(ptr1 + 3);
                *(int*)(param0 + 40) = *(ptr1 + 4);
                *(int*)(param0 + 44) = *(ptr1 + 5);
                *(int*)(param0 + 48) = *(ptr1 + 6);
                *(int*)(param0 + 52) = *(ptr1 + 7);
                *(int*)(param0 + 56) = *(ptr1 + 8);
                *(int*)(param0 + 60) = *(ptr1 + 9);
                *(int*)(param0 + 64) = *(ptr1 + 10);
                *(int*)(param0 + 68) = *(ptr1 + 11);
                *(int*)(param0 + 72) = *(ptr1 + 12);
                *(int*)(param0 + 76) = *(ptr1 + 13);
                *(int*)(param0 + 80) = *(ptr1 + 14);
                *(int*)(param0 + 84) = *(ptr1 + 15);
                caml_MD5Transform(v3, (int)ptr0);
                v4 += 64;
            }
            while((unsigned int)(__n - v4) > 63);
            __src = (void*)((int*)(((__n - 64) & 0xffffffc0) + (int)__src) + 16);
            __n = (size_t)((__n - 64) & 0x3f);
        }
        result = →memcpy((void*)(param0 + 24), __src, __n);
    }
    return result;
}

long long* caml_abs_float(double* param0) {
    int v0;
    fabs();
    return caml_copy_double(*param0, v0);
}

int caml_acos_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →acos(*param0);
}

long long* caml_add_float(double* param0, double* param1) {
    int v0;
    return caml_copy_double(*param0 + *param1, v0);
}

int caml_add_to_heap(int param0) {
    int* ptr0;
    int v0 = param0;
    caml_gc_message(4, "Growing heap to %luk bytes\n", (*(int*)(v0 - 8) + caml_stat_heap_size) >>> 10);
    int v1 = caml_page_table_add(1, v0, *(int*)(v0 - 8) + v0);
    int result = -1;
    if(!v1) {
        unsigned int v2 = caml_heap_start;
        if(!v2 || v2 >= (unsigned int)v0) {
            ptr0 = (int*)&caml_heap_start;
        }
        else {
            do {
                ptr0 = (int*)(v2 - 4);
                v2 = *(unsigned int*)(v2 - 4);
            }
            while(v2 && v2 < (unsigned int)v0);
        }
        *(unsigned int*)(v0 - 4) = v2;
        *ptr0 = v0;
        ++caml_stat_heap_chunks;
        v1 = *(int*)(v0 - 8) + caml_stat_heap_size;
        caml_stat_heap_size += *(int*)(v0 - 8);
        result = 0;
        if(caml_stat_top_heap_size < v1) {
            caml_stat_top_heap_size = v1;
        }
    }
    return result;
}

unsigned int caml_adjust_gc_speed(unsigned int param0, unsigned int param1) {
    __SyntheticTypeUnknown v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    char v3 = (param1 ? param1: 1) == param0;
    char v4 = (param1 ? param1: 1) < param0;
    unsigned int v5 = v4 || v3 ? param1 ? param1: 1: param0;
    int v6 = 0;
    __SyntheticTypeUnknownF v7 = (double)*(long long*)&v5;
    v5 = param1 ? param1: 1;
    __SyntheticTypeUnknownF v8 = v7 / (double)*(long long*)&v5 + caml_extra_heap_resources;
    caml_extra_heap_resources = v8;
    fld1();
    v0[v11] = fucomip(v8, v1);
    char v9 = 0;
    if(!v4 && !v3) {
        fld1();
        caml_extra_heap_resources = v2;
        v9 = 1;
        caml_urge_major_slice();
    }
    v5 = caml_minor_heap_size >>> 2;
    v0[v9 - 1] = (double)*(long long*)&v5;
    v0[v9 - 1] *= 0.5;
    unsigned int v10 = caml_stat_heap_size;
    unsigned int result = v10 >>> 2;
    v5 = v10 >>> 2;
    v0[v9 - 2] = (double)*(long long*)&v5;
    v0[v9 - 1] /= v0[v9 - 2];
    v0[v9 - 2] = caml_extra_heap_resources;
    v0[v11] = fucomip(v0[v9 - 2], v0[v9 - 1]);
    if(!((v10 >>> 1) & 0x1) && !(result ? 0: 1)) {
        result = caml_urge_major_slice();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_aligned_malloc(int param0, int param1, unsigned int* param2) {
    int v0 = param1;
    void* ptr0 = →malloc((size_t)(param0 + 0x1000));
    int* result = NULL;
    if(ptr0) {
        *param2 = ptr0;
        result = (int*)((int)(int*)((int)(void*)((int)(int*)((int)ptr0 + v0) & 0xfffff000) + 0x1000) - v0);
    }
    return result;
}

int* caml_alloc(unsigned int param0, int param1) {
    int* result;
    unsigned int v0 = param0;
    int v1 = param1;
    if(v0) {
        if(v0 <= 0x100) {
            unsigned int v2 = caml_young_ptr - (v0 * 4 + 4);
            caml_young_ptr -= v0 * 4 + 4;
            if(caml_young_limit > v2) {
                caml_young_ptr = (unsigned int)(v0 * 4 + v2 + 4);
                caml_minor_collection();
                caml_young_ptr -= v0 * 4 + 4;
            }
            result = caml_young_ptr;
            *result = v0 * 0x400 + v1 + 0x300;
            unsigned int v3 = caml_young_ptr;
            if((unsigned int)v1 <= 250) {
                int v4 = 0;
                do {
                    *(int*)(v4 * 4 + v3 + 4) = 0;
                    ++v4;
                }
                while(v4 != v0);
            }
        }
        else {
            int* __s = caml_alloc_shr(v0, v1);
            if((unsigned int)v1 <= 250) {
                →memset(__s, 0, (size_t)(v0 * 4));
            }
            caml_check_urgent_gc((int)__s);
        }
    }
    return result;
}

int caml_alloc1(int param0, int param1) {
    int result;
    unsigned int v0;
    char v1;
    while(1) {
        unsigned int v2 = caml_young_ptr - 8;
        caml_young_ptr -= 8;
        if(caml_young_limit <= v2) {
            return result;
        }
        caml_last_return_address = v0;
        caml_bottom_of_stack = &v1;
        result = sub_807004D(param0, param1);
    }
    return result;
}

int caml_alloc2(int param0, int param1) {
    int result;
    unsigned int v0;
    char v1;
    while(1) {
        unsigned int v2 = caml_young_ptr - 12;
        caml_young_ptr -= 12;
        if(caml_young_limit <= v2) {
            return result;
        }
        caml_last_return_address = v0;
        caml_bottom_of_stack = &v1;
        result = sub_807004D(param0, param1);
    }
    return result;
}

int caml_alloc3(int param0, int param1) {
    int result;
    unsigned int v0;
    char v1;
    while(1) {
        unsigned int v2 = caml_young_ptr - 16;
        caml_young_ptr -= 16;
        if(caml_young_limit <= v2) {
            return result;
        }
        caml_last_return_address = v0;
        caml_bottom_of_stack = &v1;
        result = sub_807004D(param0, param1);
    }
    return result;
}

int caml_allocN(int param0, int param1) {
    int result;
    unsigned int v0;
    int v1;
    char v2;
    unsigned int i;
    for(i = (unsigned int)(0 - (v1 - caml_young_ptr)); i < caml_young_limit; i = (unsigned int)(0 - (v1 - caml_young_ptr))) {
        int v3 = 0 - (i - caml_young_ptr);
        caml_young_ptr -= v3;
        caml_last_return_address = v0;
        caml_bottom_of_stack = &v2;
        result = sub_807004D(param0, param1);
        v1 = v3;
    }
    caml_young_ptr = i;
    return result;
}

int* caml_alloc_array(int param0, int* param1) {
    int* result;
    int v0;
    int* ptr0 = param1;
    unsigned int v1 = caml_local_roots;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = 0;
    int* ptr1 = NULL;
    unsigned int v4 = v1;
    caml_local_roots = &v4;
    int v5 = 1;
    int v6 = 2;
    int* ptr2 = &v3;
    int* ptr3 = &ptr1;
    if(*ptr0) {
        unsigned int v7 = 0;
        do {
            ++v7;
        }
        while(*(int*)(v7 * 4 + (int)ptr0));
        if(!v7) {
            result = (int*)&gvar_80821C4;
            caml_local_roots = v2;
            return result;
        }
        ptr1 = caml_alloc(v7, 0);
        unsigned int v8 = 0;
        do {
            unsigned int v9 = (unsigned int)param0(*ptr0, v0);
            v3 = v9;
            caml_modify(&ptr1[v8], v9);
            ++v8;
            ++ptr0;
        }
        while(v7 > v8);
        caml_local_roots = v2;
        result = ptr1;
    }
    else {
        result = (int*)&gvar_80821C4;
        caml_local_roots = v2;
    }
    return result;
}

int caml_alloc_channel(int param0) {
    int v0 = param0;
    *(int*)(v0 + 44) = *(int*)(v0 + 44) + 1;
    int result = caml_alloc_custom(&channel_operations, 4, 1, 1000);
    *(int*)(result + 4) = v0;
    return result;
}

int caml_alloc_custom(int param0, int param1, unsigned int param2, unsigned int param3) {
    int result;
    if(!*(int*)(param0 + 4) && (unsigned int)(((param1 + 3) >>> 2) + 1) <= 0x100) {
        result = caml_alloc_small(((param1 + 3) >>> 2) + 1, 0xFF);
        *(int*)result = param0;
    }
    else {
        int* ptr0 = caml_alloc_shr((unsigned int)(((param1 + 3) >>> 2) + 1), 0xFF);
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

int* caml_alloc_dummy(int param0) {
    int* result = (int*)&gvar_80821C4;
    if((unsigned int)(param0 >> 1)) {
        result = caml_alloc((unsigned int)(param0 >> 1), 0);
    }
    return result;
}

int* caml_alloc_dummy_float(int param0) {
    int* result = (int*)&gvar_80821C4;
    if((unsigned int)(param0 & 0xfffffffe)) {
        result = caml_alloc((unsigned int)(param0 & 0xfffffffe), 0);
    }
    return result;
}

int caml_alloc_final(int param0, int param1, unsigned int param2, unsigned int param3) {
    int v0 = caml_final_custom_operations(param1);
    return caml_alloc_custom(v0, param0 * 4, param2, param3);
}

int* caml_alloc_for_heap(int param0) {
    int v0;
    int* result = caml_aligned_malloc(param0 + 16, 16, &v0);
    if(result) {
        result += 4;
        result[-2] = param0;
        result[-4] = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_alloc_shr(unsigned int param0, int param1) {
    unsigned int v0 = param0;
    if(v0 > 0x3fffff) {
        caml_raise_out_of_memory();
    }
    int* ptr0 = caml_fl_allocate(v0);
    int* ptr1 = ptr0;
    if(!ptr0) {
        int v1 = caml_round_heap_chunk_size((unsigned int)((v0 / 100 * caml_percent_free + v0 + 1) * 4));
        int v2 = v1;
        int* ptr2 = caml_alloc_for_heap(v1);
        int v3 = (int)ptr2;
        if(ptr2) {
            unsigned int v4 = (unsigned int)((v2 >>> 2) - 1);
            int* ptr3 = ptr2;
            if(v4 > 0x3fffff) {
                while(1) {
                    ptr2[0] = 0xfffffe00;
                    ptr2 += 0x400000;
                    v2 -= 0x1000000;
                    ptr3[1] = (int)(ptr2 + 1);
                    *(int*)(v3 + 8) = (int)(ptr2 + 1);
                    v4 = (unsigned int)((v2 >>> 2) - 1);
                    if(v4 <= 0x3fffff) {
                        break;
                    }
                    else {
                        ptr3 = ptr2;
                    }
                }
                ptr3 = ptr2;
            }
            if((unsigned int)v2 > 1) {
                ptr2[0] = v4 * 0x400 + 0x200;
                *(unsigned int*)(v3 + 8) = ptr3 + 1;
                ptr3[1] = 0;
            }
            else {
                ptr3[1] = 0;
                if(v2 == 1) {
                    ptr2[0] = 0;
                }
            }
            int v5 = caml_add_to_heap(v3);
            if(v5) {
                caml_free_for_heap(v3);
                goto loc_8064EA9;
            }
            else {
                v3 += 4;
                if(!v3) {
                    goto loc_8064EA9;
                }
            }
        }
        else {
            caml_gc_message(4, "No room for growing heap\n", 0);
        loc_8064EA9:
            if(caml_in_minor_collection) {
                /*NO_RETURN*/ caml_fatal_error("Fatal error: out of memory.\n");
            }
            caml_raise_out_of_memory();
        }
        caml_fl_add_blocks((unsigned int)v3);
        ptr1 = caml_fl_allocate(v0);
    }
    unsigned int v6 = caml_gc_phase;
    ptr1[0] = !v6 || (v6 == 1 && caml_gc_sweep_hp <= (unsigned int)ptr1) ? v0 * 0x400 + param1 + 0x300: v0 * 0x400 + param1;
    unsigned int v7 = caml_allocated_words + v0 + 1;
    caml_allocated_words = caml_allocated_words + v0 + 1;
    if(caml_minor_heap_size >>> 2 < v7) {
        caml_urge_major_slice();
    }
    return ptr1 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_small(int param0, int param1) {
    unsigned int v0 = caml_young_ptr - (param0 * 4 + 4);
    caml_young_ptr -= param0 * 4 + 4;
    if(caml_young_limit > v0) {
        caml_young_ptr = (unsigned int)(param0 * 4 + v0 + 4);
        caml_minor_collection();
        caml_young_ptr -= param0 * 4 + 4;
    }
    *caml_young_ptr = param0 * 0x400 + param1 + 0x300;
    return caml_young_ptr + 4;
}

int caml_alloc_string(int param0) {
    int result;
    int v0 = param0;
    if((unsigned int)((v0 + 4) >>> 2) <= 0x100) {
        unsigned int v1 = caml_young_ptr - ((unsigned int)((v0 + 4) >>> 2) * 4 + 4);
        caml_young_ptr -= (unsigned int)((v0 + 4) >>> 2) * 4 + 4;
        if(caml_young_limit > v1) {
            caml_young_ptr = (unsigned int)((unsigned int)((v0 + 4) >>> 2) * 4 + v1 + 4);
            caml_minor_collection();
            caml_young_ptr -= (unsigned int)((v0 + 4) >>> 2) * 4 + 4;
        }
        *caml_young_ptr = (unsigned int)((v0 + 4) >>> 2) * 0x400 + 1020;
        result = (int)(caml_young_ptr + 4);
    }
    else {
        int* ptr0 = caml_alloc_shr((unsigned int)((v0 + 4) >>> 2), 252);
        result = caml_check_urgent_gc((int)ptr0);
    }
    *(int*)((unsigned int)((v0 + 4) >>> 2) * 4 + result - 4) = 0;
    *(char*)((unsigned int)((v0 + 4) >>> 2) * 4 - 1 + result) = (unsigned char)(unsigned int)((v0 + 4) >>> 2) * 4 - 1 - (unsigned char)v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_table(int* param0, int param1, int param2) {
    int* ptr0 = param0;
    int v0 = param1;
    int v1 = param2;
    *(ptr0 + 5) = v0;
    *(ptr0 + 6) = v1;
    int v2 = caml_stat_alloc((v0 + v1) * 4);
    int __ptr = *ptr0;
    if(__ptr) {
        caml_stat_free(__ptr);
    }
    *ptr0 = v2;
    *(ptr0 + 3) = v2;
    int v3 = *(ptr0 + 5);
    *(ptr0 + 2) = v3 * 4 + v2;
    *(ptr0 + 4) = v3 * 4 + v2;
    int result = (*(ptr0 + 6) + v3) * 4 + v2;
    *(ptr0 + 1) = (*(ptr0 + 6) + v3) * 4 + v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_tuple(int param0) {
    return caml_alloc(param0, 0);
}

int caml_allocation_color(unsigned int param0) {
    unsigned int v0 = caml_gc_phase;
    return !v0 || (v0 == 1 && caml_gc_sweep_hp <= param0) ? 0x300: 0;
}

void caml_apply3(int param0, int* param1) {
    int v0;
    if(*(param1 + 1) == 7) {
        jump *(param1 + 2);
    }
    int v1 = param0;
    int v2 = v0;
    int* ptr0 = (int*)*param1(v0, param0);
    int* ptr1 = (int*)*ptr0();
    jump *ptr1;
}

void caml_apply4(int param0, int param1) {
    int v0;
    int* ptr0;
    if(*(ptr0 + 1) == 9) {
        jump *(ptr0 + 2);
    }
    int v1 = param1;
    int v2 = param0;
    int v3 = v0;
    int* ptr1 = (int*)*ptr0(v0, param0, param1);
    int* ptr2 = (int*)*ptr1();
    int* ptr3 = (int*)*ptr2();
    jump *ptr3;
}

int caml_apply6(int param0, int param1) {
    unsigned int* ptr0;
    unsigned int* ptr1 = caml_extra_params;
    if(*(int*)(ptr1 + 1) == 13) {
        ptr0 = ptr1;
        int v0 = *(int*)(ptr1 + 2);
        caml_extra_params = ptr1;
        jump v0;
    }
    ptr0 = *ptr1;
    int* ptr2 = (int*)ptr0((int)ptr0);
    int* ptr3 = (int*)*ptr2();
    int* ptr4 = (int*)*ptr3();
    int* ptr5 = (int*)*ptr4();
    int* ptr6 = (int*)*ptr5();
    jump *ptr6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_bound_error() {
    if(!array_bound_error_bucket_inited) {
        *(int*)&array_bound_error_msg = 252;
        gvar_807B6E7 = 0;
        *(int*)&array_bound_error_bucket = 0;
        gvar_807B9AC = &caml_exn_Invalid_argument;
        gvar_807B9B0 = &gvar_807B6D4;
        array_bound_error_bucket_inited = 1;
        caml_page_table_add(4, &array_bound_error_msg, &caml_last_return_address);
        array_bound_error_bucket_inited = 1;
    }
    /*BAD_CALL!*/ caml_raise(&gvar_807B9AC);
}

long long* caml_array_get(int param0, int param1) {
    return *(char*)(param0 - 4) == 254 ? caml_array_get_float(param0, param1): (long long*)caml_array_get_addr(param0, param1);
}

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

long long* caml_array_get_float(int param0, int param1) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3 = param1 >> 1;
    if(v3 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 11) <= (unsigned int)v3) {
            goto loc_8067F80;
        }
    }
    else {
    loc_8067F80:
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

int caml_array_set_addr(int param0, int param1, unsigned int param2) {
    int v0;
    unsigned int v1 = param2;
    int v2 = param1 >> 1;
    if(v2 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v2) {
            goto loc_8067E88;
        }
    }
    else {
    loc_8067E88:
        v2 = caml_array_bound_error();
    }
    unsigned int* ptr0 = (unsigned int*)(v2 * 4 + v0);
    int* ptr1 = *ptr0;
    *ptr0 = v1;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            int v3 = 0;
            caml_darken(ptr1);
        }
        if(!(v1 & 0x1)) {
            unsigned int v4 = caml_young_end;
            if(v4 > v1) {
                int* ptr2 = caml_young_start;
                if((unsigned int)ptr2 < v1 && ((int*)((int)ptr1 & 0x1) || v4 <= (unsigned int)ptr1 || ptr2 >= ptr1)) {
                    if(gvar_807EB48 >= gvar_807EB4C) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr3 = gvar_807EB48;
                    *ptr3 = ptr0;
                    gvar_807EB48 = (int*)(ptr3 + 1);
                }
            }
        }
    }
    return 1;
}

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

int caml_array_unsafe_set_addr(int param0, int param1, unsigned int param2) {
    unsigned int v0 = param2;
    unsigned int* ptr0 = (unsigned int*)((param1 >> 1) * 4 + param0);
    int* ptr1 = *ptr0;
    *ptr0 = v0;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            int v1 = 0;
            caml_darken(ptr1);
        }
        if(!(v0 & 0x1)) {
            unsigned int v2 = caml_young_end;
            if(v2 > v0) {
                int* ptr2 = caml_young_start;
                if((unsigned int)ptr2 < v0 && ((int*)((int)ptr1 & 0x1) || v2 <= (unsigned int)ptr1 || ptr2 >= ptr1)) {
                    if(gvar_807EB48 >= gvar_807EB4C) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr3 = gvar_807EB48;
                    *ptr3 = ptr0;
                    gvar_807EB48 = (int*)(ptr3 + 1);
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

int caml_asin_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →asin(*param0);
}

int caml_atan2_float(double* param0, double* param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →atan2(*param0, *param1);
}

int caml_atan_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →atan(*param0);
}

int caml_backtrace_status() {
    return ((caml_backtrace_active < 1 ? -1: 0) & 0xfffffffe) + 3;
}

int caml_bitvect_test(int param0, int param1) {
    return ((1 << ((param1 >> 1) & 0x7)) & (unsigned int)*(char*)((param1 >> 4) + param0)) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_blit_string(int param0, int param1, int param2, int param3, int param4) {
    →memmove((void*)((param3 >> 1) + param2), (void*)((param1 >> 1) + param0), (size_t)(param4 >> 1));
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback(int* param0, int param1) {
    int v0 = param1;
    int result = caml_callback_exn(param0);
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback2(int param0, int param1, int param2) {
    int result = caml_callback2_exn(param0);
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

int caml_callback2_exn(int param0) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &sub_80701AE;
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
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

int caml_callback3_exn(int param0, int param1, int param2, int param3) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &sub_80701AE;
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
int caml_callbackN(int* param0, int param1, int param2) {
    int result = caml_callbackN_exn(param0, param1, param2);
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callbackN_exn(int* param0, int param1, int param2) {
    int result;
    int v0;
    int* ptr0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &ptr0;
    int* ptr1 = param0;
    if(param1 > 0) {
        unsigned int v2 = v1;
        int v3 = 1;
        int v4 = 1;
        int* ptr2 = &param0;
        int* ptr3 = &v2;
        int v5 = 1;
        ptr0 = &ptr3;
        int v6 = 1;
        int v7 = 1;
        int* ptr4 = &ptr1;
        int v8 = 0;
        do {
            int v9 = param1 - v8;
            if(v9 != 1) {
                if(v9 == 2) {
                    int v10 = *(int*)(v8 * 4 + param2 + 4);
                    v0 = *(int*)(v8 * 4 + param2);
                    result = caml_callback2_exn((int)ptr1);
                    if((unsigned int)(result & 0x3) == 2) {
                        caml_local_roots = v1;
                        return result;
                    }
                    ptr1 = (int*)result;
                    v8 += 2;
                }
                result = caml_callback3_exn((int)ptr1, *(int*)(v8 * 4 + param2), *(int*)(v8 * 4 + param2 + 4), *(int*)(v8 * 4 + param2 + 8));
                if((unsigned int)(result & 0x3) == 2) {
                    caml_local_roots = v1;
                    return result;
                }
                ptr1 = (int*)result;
                v8 += 3;
            }
            v0 = *(int*)(v8 * 4 + param2);
            result = caml_callback_exn(ptr1);
            if((unsigned int)(result & 0x3) == 2) {
                caml_local_roots = v1;
                return result;
            }
            ptr1 = (int*)result;
            ++v8;
        }
        while(v8 < param1);
    }
    else {
        caml_local_roots = v1;
        result = (int)ptr1;
    }
    return result;
}

int caml_ceil_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →ceil(*param0);
}

int caml_channel_binary_mode() {
    return 1;
}

int caml_channel_descriptor(int param0) {
    int* ptr0;
    int v0 = **(unsigned int*)(param0 + 4);
    if(v0 == -1) {
        →__errno_location();
        *ptr0 = 9;
        caml_sys_error(1);
    }
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_channel_size(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result;
    int v4;
    int __fd = *param0;
    int v5 = *(param0 + 1);
    int v6 = *(param0 + 2);
    caml_enter_blocking_section();
    int v7 = 2;
    int v8 = 0;
    int v9 = 0;
    (unsigned long long)v0 | ((unsigned long long)v1 << 32) = →lseek64(__fd, *(__off64_t*)&v8, 2);
    if((result & v4) != -1) {
        v7 = 0;
        v8 = v5;
        v9 = v6;
        (unsigned long long)v0 | ((unsigned long long)v1 << 32) = →lseek64(__fd, *(__off64_t*)&v8, 0);
        if(((v2 ^ v5) | (v3 ^ v6))) {
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

int caml_check_urgent_gc(int param0) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    if(caml_force_major_slice) {
        caml_minor_collection();
    }
    caml_local_roots = v1;
    return param0;
}

int caml_classify_float(double* param0) {
    int v0 = →__fpclassify(*param0);
    return (unsigned int)v0 > 3 ? 1: *(int*)(v0 * 4 + (int)&CSWTCH.118);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_close_channel(void* __ptr) {
    int result = →close(*(int*)__ptr);
    if(((*(int*)((int)__ptr + 44) ? 0: 1) || *(int*)((int)__ptr + 44) < 0)) {
        unsigned int v0 = caml_channel_mutex_free;
        if(v0) {
            v0((int)__ptr);
        }
        unlink_channel();
        result = caml_stat_free(__ptr);
    }
    return result;
}

int caml_code_checksum() {
    char v0;
    if(!checksum_computed.3405) {
        caml_MD5Init(&v0);
        void* __src = caml_code_area_start;
        caml_MD5Update((int)&v0, __src, (size_t)(caml_code_area_end - (int)__src));
        caml_MD5Final((int*)&checksum.3404, &v0);
        checksum_computed.3405 = 1;
    }
    return &checksum.3404;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_compact_heap() {
    int* ptr0;
    int* ptr1;
    unsigned int* ptr2;
    int* ptr3;
    unsigned int* ptr4;
    unsigned int* ptr5;
    unsigned int* ptr6;
    caml_gc_message(16, "Compacting heap...\n", 0);
    int* ptr7 = caml_heap_start;
    if(ptr7) {
        do {
            int* ptr8 = ptr7 - 4;
            int* ptr9 = (int*)(*(ptr8 + 2) + (int)ptr7);
            while(ptr7 < ptr9) {
                int v0 = *ptr7;
                int v1 = v0 >>> 10;
                *ptr7 = (v0 & 0x300) == 0x200 ? (v1 * 0x400) | 0x3f3: ((unsigned int)(v0 & 0xFF) * 4) | (v1 * 0x400) | 0x3;
                ptr7 = (int*)(v1 * 4 + (int)ptr7) + 1;
            }
            ptr7 = *(unsigned int*)(ptr8 + 3);
        }
        while(ptr7);
    }
    caml_do_roots(&invert_root);
    caml_final_do_weak_roots(&invert_root);
    unsigned int* ptr10 = caml_heap_start;
    if(ptr10) {
        do {
            ptr4 = ptr10;
            int* ptr11 = (int*)(ptr10 - 4);
            ptr3 = ptr11;
            unsigned int* ptr12 = (unsigned int*)(*(ptr11 + 2) + (int)ptr4);
            ptr2 = ptr12;
            if(ptr12 > ptr4) {
                do {
                    unsigned int* i;
                    for(i = *ptr4; !((unsigned char)i & 0x3); i = *i) {
                    }
                    int* ptr13 = (int*)((char*)((int)i >>> 10) + 1);
                    unsigned int v2 = (unsigned int)(unsigned char)(int*)((int)i >>> 2);
                    if(v2 == 249) {
                        int j;
                        for(j = *(int*)((int)(int*)((int)ptr13 * 4) + (int)ptr4); (j & 0x3) != 3; j = *(int*)(j & 0xfffffffc)) {
                        }
                        ptr13 = (int*)((j >>> 10) + 1);
                        v2 = (unsigned int)(unsigned char)(j >>> 2);
                    }
                    if(v2 <= 250 && (unsigned int)ptr13 > 1) {
                        int* ptr14 = (int*)(ptr4 + 1);
                        unsigned int v3 = 1;
                        do {
                            invert_pointer_at();
                            ++v3;
                            ++ptr14;
                        }
                        while(v3 < (unsigned int)ptr13);
                    }
                    ptr6 = (unsigned int*)((int)(int*)((int)ptr13 * 4) + (int)ptr4);
                    ptr4 = ptr6;
                }
                while(ptr6 < ptr2);
            }
            ptr10 = *(unsigned int*)(ptr3 + 3);
        }
        while(ptr10);
    }
    unsigned int* ptr15 = caml_weak_list_head;
    ptr4 = ptr15;
    if(ptr15) {
        ptr2 = (unsigned int*)&caml_weak_list_head;
        do {
            unsigned int* ptr16 = ptr4;
            unsigned int* k;
            for(k = *(ptr16 - 1); !(int*)((int)k & 0x3); k = *k) {
            }
            int* ptr17 = (int*)((int)k >>> 10);
            if((unsigned int)ptr17 > 1) {
                int* ptr18 = (int*)(ptr16 + 1);
                unsigned int v4 = 1;
                do {
                    if(caml_weak_none != *ptr18) {
                        invert_pointer_at();
                    }
                    ++v4;
                    ++ptr18;
                }
                while(v4 < (unsigned int)ptr17);
            }
            invert_pointer_at();
            unsigned int* ptr19 = ptr4;
            ptr2 = ptr19;
            ptr5 = *ptr19;
            ptr4 = ptr5;
        }
        while(ptr5);
    }
    init_compact_allocate();
    for(unsigned int* counter = caml_heap_start; counter; counter = *(unsigned int*)(ptr1 + 3)) {
        int* ptr20 = (int*)(counter - 4);
        ptr1 = ptr20;
        int* ptr21 = (int*)(*(ptr20 + 2) + (int)counter);
    loc_806EDA9:
        while((unsigned int)counter < (unsigned int)ptr21) {
            unsigned int* ptr22 = *counter;
            if(!((unsigned char)ptr22 & 0x3)) {
                do {
                    ptr22 = *ptr22;
                }
                while(!((unsigned char)ptr22 & 0x3));
                ptr0 = (int*)((char*)((int)ptr22 >>> 10) + 1);
                int* ptr23 = (int*)(unsigned char)(int*)((int)ptr22 >>> 2);
                ptr3 = ptr23;
                ptr2 = NULL;
                if(ptr23 == 249) {
                loc_806ECC0:
                    unsigned int* ptr24 = (unsigned int*)((int)(int*)((int)ptr0 * 4) + (int)counter);
                    ptr2 = ptr24;
                    int counter1;
                    for(counter1 = *ptr24; (counter1 & 0x3) != 3; counter1 = *(int*)(counter1 & 0xfffffffc)) {
                    }
                    ptr0 = (int*)((counter1 >>> 10) + 1);
                    ptr3 = (int*)(unsigned char)(counter1 >>> 2);
                }
                ptr4 = (unsigned int*)((int)ptr0 * 4);
                int v5 = compact_allocate();
                unsigned int* ptr25 = *counter;
                if(!((unsigned char)ptr25 & 0x3)) {
                    int v6 = v5 + 4;
                    while(1) {
                        unsigned int* ptr26 = *ptr25;
                        *ptr25 = v6;
                        if((unsigned char)ptr26 & 0x3) {
                        loc_806ED29:
                            *counter = (int*)((int)(int*)((int)ptr0 * 0x400) + (int)ptr3) - 0x100;
                            if(ptr2) {
                                unsigned int* ptr27 = ptr2;
                                while((int*)((int)ptr27 & 0x3) != 3) {
                                    unsigned int* ptr28 = (unsigned int*)((int)ptr27 & 0xfffffffc);
                                    ptr27 = *ptr28;
                                    if((int*)((int)ptr27 & 0x3) == 2) {
                                        int* ptr29 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr28 - (int)counter) >> 2) * 4) + v5) + 1;
                                        do {
                                            unsigned int* ptr30 = (unsigned int*)((int)ptr27 & 0xfffffffc);
                                            ptr27 = *ptr30;
                                            *ptr30 = ptr29;
                                        }
                                        while((int*)((int)ptr27 & 0x3) == 2);
                                    }
                                    *ptr28 = (int*)((char*)((int)(int*)((int)(int*)((int)ptr28 - (int)counter) >> 2) * 0x400) + 249);
                                }
                            }
                            counter = (unsigned int*)((int)counter + (int)ptr4);
                            continue loc_806EDA9;
                        }
                        else {
                            ptr25 = ptr26;
                        }
                    }
                }
                goto loc_806ED29;
            }
            else {
                int v7 = (unsigned int)(unsigned char)(int*)((int)ptr22 >>> 2);
                if(v7 == 249) {
                    ptr0 = (int*)((char*)((int)ptr22 >>> 10) + 1);
                    goto loc_806ECC0;
                }
                else {
                    *counter = (int*)((int)(int*)((int)ptr22 & 0xfffffc00) + v7) + 128;
                    counter = (unsigned int*)((int*)((int)(int*)((int)(int*)((int)ptr22 >>> 10) * 4) + (int)counter) + 1);
                }
            }
        }
    }
    init_compact_allocate();
    int* ptr31 = caml_heap_start;
    if(ptr31) {
        do {
            unsigned int* ptr32 = (unsigned int*)(ptr31 - 4);
            ptr4 = ptr32;
            int* ptr33 = (int*)(*(int*)(ptr32 + 2) + (int)ptr31);
            while(ptr31 < ptr33) {
                int v8 = *ptr31;
                if(!((unsigned char)(v8 >>> 8) & 0x3)) {
                    int v9 = compact_allocate();
                    int* ptr34 = ptr31;
                    int v10 = v9;
                    →memmove();
                }
                ptr31 = (int*)((v8 >>> 10) * 4 + (int)ptr31) + 1;
            }
            ptr31 = *(ptr4 + 3);
        }
        while(ptr31);
        int v11 = caml_heap_start;
        if(!v11) {
            caml_fl_reset();
            ++caml_stat_compactions;
            return caml_gc_message(16, "done.\n", 0);
        }
        int v12 = v11;
        unsigned int v13 = 0;
        do {
            int v14 = v12 - 16;
            int v15 = *(int*)(v14 + 4);
            if(v15) {
                v13 = (unsigned int)((v15 >>> 2) + v13);
                ptr31 = (int*)(((*(int*)(v14 + 8) - v15) >>> 2) + (int)ptr31);
            }
            v12 = *(int*)(v14 + 12);
        }
        while(v12);
        unsigned int v16 = (unsigned int)((v13 / 100 + 1) * caml_percent_free);
        while(1) {
            int v17 = v11 - 16;
            int v18 = *(int*)(v17 + 12);
            if(!*(int*)(v17 + 4) && (unsigned int)ptr31 < v16) {
                ptr31 = (int*)((*(int*)(v17 + 8) >>> 2) + (int)ptr31);
            }
            else if(!*(int*)(v17 + 4)) {
                caml_shrink_heap(v11);
            }
            if(!v18) {
                break;
            }
            else {
                v11 = v18;
            }
        }
        unsigned int v19 = caml_heap_start;
        caml_fl_reset();
        if(v19) {
            do {
                int v20 = v19 - 16;
                unsigned int v21 = *(unsigned int*)(v20 + 8);
                unsigned int v22 = *(unsigned int*)(v20 + 4);
                if(v22 < v21) {
                    caml_make_free_blocks((int*)(v22 + v19), (v21 - v22) >>> 2, 1);
                }
                v19 = *(unsigned int*)(v20 + 12);
            }
            while(v19);
        }
    }
    else {
        caml_fl_reset();
    }
    ++caml_stat_compactions;
    return caml_gc_message(16, "done.\n", 0);
}

int caml_compact_heap_maybe() {
    int result;
    float v0;
    __SyntheticTypeUnknownF v1;
    __SyntheticTypeUnknownF v2;
    __int128 v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    short v6;
    __SyntheticTypeUnknownF v7;
    __int128 v8;
    __int128 v9;
    __int128 v10;
    __int128 v11;
    if(caml_percent_max <= 999999 && caml_stat_major_collections > 2) {
        char v12 = caml_stat_heap_chunks == 2;
        char v13 = caml_stat_heap_chunks < 2;
        if(!v12 && caml_stat_heap_chunks >= 2) {
            int v14 = caml_fl_cur_size;
            int v15 = caml_fl_size_at_phase_change;
            int v16 = v14;
            int v17 = 0;
            __SyntheticTypeUnknownF v18 = (double)*(long long*)&v16 * 3.0;
            v16 = v15;
            float v19 = v18 + (double)*(long long*)&v16 * -2.0;
            fldz();
            v22[v24] = fucomip(v19, v9);
            if(!v13 && !v12) {
                v16 = v14;
                v17 = 0;
                v1 = (double)*(long long*)&v16;
            }
            unsigned int v20 = caml_stat_heap_size;
            v16 = (int)(v20 >>> 2);
            v17 = 0;
            v22[v24] = fucomi((double)*(long long*)&v16, v1);
            if(!((v20 >>> 1) & 0x1)) {
                v0 = (float)1000000.0;
            }
            else {
                v22[v24 + 1] = fdivrp(v4 - v5 * 100.0, v5);
                v22[v24] = fucomi(v2, 1000000.0);
                v22[v24] = fcmovnbe(v3, v10);
                v0 = v7;
            }
            caml_gc_message(0x200, "FL size at phase change = %lu\n", v15);
            v6 = fnstcw(v6);
            short v23 = fldcw((unsigned short)(unsigned char)v6 | ((unsigned short)12 << 8));
            fistp();
            v6 = fldcw(v6);
            caml_gc_message(0x200, "Estimated overhead = %lu%%\n", (int)(v20 >>> 2));
            v16 = caml_percent_max;
            v17 = 0;
            v22[v24] = fucomip(v0, (double)*(long long*)&v16);
            if(!((v20 >>> 1) & 0x1)) {
                caml_gc_message(0x200, "Automatic compaction triggered.\n", 0);
                caml_finish_major_cycle();
                v16 = caml_fl_cur_size;
                v17 = 0;
                __SyntheticTypeUnknownF v21 = (double)*(long long*)&v16;
                v16 = (int)(caml_stat_heap_size >>> 2);
                v22[v24 + 2] = fsubrp(v21, (double)*(long long*)&v16);
                v22[v24 + 1] = fdivrp(v8, v11);
                v6 = fnstcw(v6);
                v23 = fldcw((unsigned short)(unsigned char)v6 | ((unsigned short)12 << 8));
                fistp();
                v6 = fldcw(v6);
                caml_gc_message(0x200, "Measured overhead: %lu%%\n", v16);
                result = caml_compact_heap();
            }
        }
    }
    return result;
}

int caml_compare(int param0, int param1) {
    int result;
    int v0 = compare_val(1, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    if(v0 >= 0) {
        result = v0 <= 0 ? 0: 1;
    }
    return result;
}

int caml_convert_flag_list(int* param0, int param1) {
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_copy_string(char* param0) {
    char* ptr0 = param0;
    int v0 = -1;
    while(v0 != 0) {
        char v1 = *ptr0 == 0;
        ++ptr0;
        --v0;
        if(!~v1) {
            break;
        }
    }
    int result = caml_alloc_string(~v0 - 1);
    →memmove();
    return result;
}

int* caml_copy_string_array(int* param0) {
    return caml_alloc_array(&caml_copy_string, param0);
}

int caml_cos_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →cos(*param0);
}

int caml_cosh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →cosh(*param0);
}

int caml_create_string(int param0) {
    int v0 = param0 >> 1;
    if((unsigned int)v0 > 0xfffffb) {
        v0 = caml_invalid_argument("String.create");
    }
    return caml_alloc_string(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry2() {
    int* ptr0;
    int v0;
    int v1;
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
    *(ptr0 + 1) = &caml_curry2_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry2_1() {
    int v0;
    jump *(int*)(*(int*)(v0 + 12) + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry3(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry3_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry3_2() {
    int v0;
    jump *(int*)(*(int*)(*(int*)(v0 + 12) + 12) + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry4(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry4_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry4_2(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry4_3() {
    int v0;
    jump *(int*)(*(int*)(*(int*)(*(int*)(v0 + 12) + 12) + 12) + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry5(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry5_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry5_2(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry5_3(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry5_4() {
    int v0;
    jump *(int*)(*(int*)(*(int*)(*(int*)(*(int*)(v0 + 12) + 12) + 12) + 12) + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry6(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry6_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry6_2(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry6_3(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry6_4(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry6_5() {
    int v0;
    unsigned int v1 = *(unsigned int*)(*(int*)(*(int*)(*(int*)(*(int*)(v0 + 12) + 12) + 12) + 12) + 12);
    unsigned int v2 = *(unsigned int*)(*(int*)(*(int*)(*(int*)(*(int*)(v0 + 12) + 12) + 12) + 12) + 12);
    int v3 = *(int*)(v0 + 8);
    int v4 = *(int*)(v1 + 8);
    caml_extra_params = v2;
    jump v4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7_2(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7_3(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7_4(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry7_5(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_6;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry7_6() {
    unsigned int v0;
    int v1;
    int v2 = *(int*)(v1 + 12);
    unsigned int v3 = *(unsigned int*)(*(int*)(*(int*)(*(int*)(*(int*)(v2 + 12) + 12) + 12) + 12) + 12);
    unsigned int v4 = *(unsigned int*)(*(int*)(*(int*)(*(int*)(*(int*)(v2 + 12) + 12) + 12) + 12) + 12);
    int v5 = *(int*)(v1 + 8);
    int v6 = *(int*)(v2 + 8);
    int v7 = *(int*)(v3 + 8);
    caml_extra_params = v0;
    gvar_807B7E0 = v4;
    jump v7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_1(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_2(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_3(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_4(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_5(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_6;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_6(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_7;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_curry9_7(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_8;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int caml_curry9_8() {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = *(unsigned int*)(v1 + 12);
    unsigned int v4 = *(unsigned int*)(v1 + 12);
    int v5 = *(int*)(v3 + 12);
    int v6 = *(int*)(v3 + 12);
    int v7 = *(int*)(v5 + 12);
    int v8 = *(int*)(v5 + 12);
    int v9 = *(int*)(v7 + 12);
    int v10 = *(int*)(v7 + 12);
    int v11 = *(int*)(v9 + 12);
    int v12 = *(int*)(v9 + 12);
    int v13 = *(int*)(v11 + 12);
    int v14 = *(int*)(v11 + 12);
    int v15 = *(int*)(v13 + 12);
    int v16 = *(int*)(v13 + 12);
    unsigned int v17 = *(unsigned int*)(v15 + 12);
    unsigned int v18 = *(unsigned int*)(v2 + 8);
    v4 = *(unsigned int*)(v4 + 8);
    v2 = *(int*)(v6 + 8);
    v6 = *(int*)(v17 + 8);
    caml_extra_params = v4;
    gvar_807B7E0 = v18;
    gvar_807B7E4 = v0;
    gvar_807B7E8 = v17;
    jump v6;
}

int* caml_darken(int* param0) {
    int* result = param0;
    if(!((unsigned char)result & 0x1)) {
        int* ptr0 = result;
        if((*(char*)((int)(int*)((int)(int*)((int)result >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)result >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
            int v0 = result[-1];
            unsigned int v1 = (unsigned int)(v0 & 0xFF);
            if(v1 == 249) {
                int* ptr1 = (int*)((int)ptr0 - (v0 >>> 10) * 4);
                result = ptr1;
                v0 = ptr1[-1];
                v1 = (unsigned int)(v0 & 0xFF);
            }
            if(!((unsigned char)(v0 >>> 8) & 0x3)) {
                if(v1 <= 250) {
                    result[-1] = (unsigned int)(unsigned char)v0 | ((unsigned int)(((unsigned char)(v0 >>> 8) & 0xfc) | 0x1) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                    v0 = gray_vals_cur;
                    *(int**)v0 = result;
                    result = (int*)(v0 + 4);
                    gray_vals_cur = result;
                    if(gray_vals_end <= (unsigned int)result) {
                        result = realloc_gray_vals();
                    }
                }
                else {
                    result[-1] = (unsigned int)(unsigned char)v0 | ((unsigned int)((unsigned char)(v0 >>> 8) | 0x3) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
                }
            }
        }
    }
    return result;
}

unsigned int caml_darken_all_roots() {
    return caml_do_roots(&caml_darken);
}

void caml_debugger() {
}

void caml_debugger_cleanup_fork() {
}

void caml_debugger_init() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_decompose_path(int* param0, char* __src) {
    int v0;
    char v1;
    int* ptr0 = param0;
    int result = 0;
    if(__src) {
        char* ptr1 = __src;
        int v2 = -1;
        while(v2 != 0) {
            char v3 = ptr1[0] == 0;
            ++ptr1;
            --v2;
            if(!~v3) {
                break;
            }
        }
        int v4 = caml_stat_alloc(~v2);
        result = v4;
        →strcpy((char*)v4, __src);
        int v5 = result;
        while(1) {
            char v6 = *(char*)v5;
            if(!v6 || v6 == 58) {
                v0 = v5;
            }
            else {
                int v7 = v5 + 1;
                do {
                    v0 = v7;
                    v1 = *(char*)v7;
                    ++v7;
                }
                while(v1 && v1 != 58);
            }
            caml_ext_table_add(ptr0, v5);
            if(!*(char*)v0) {
                return result;
            }
            *(char*)v0 = 0;
            v5 = v0 + 1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_deserialize_block_1(void* __dest, size_t __n) {
    void* result = →memmove(__dest, intern_src, __n);
    intern_src += __n;
    return result;
}

int caml_deserialize_block_2(int param0, int param1) {
    int result;
    int v0 = param0;
    unsigned int v1 = intern_src;
    if(param1 > 0) {
        result = 0;
        int counter = param1;
        int v2 = param1;
        do {
            char v3 = *(char*)(result + v1);
            *(char*)(result + v0) = *(char*)(result + v1 + 1);
            *(char*)(result + v0 + 1) = v3;
            result += 2;
            --counter;
        }
        while(counter);
        v1 = (unsigned int)(v2 * 2 + v1);
    }
    intern_src = v1;
    return result;
}

int caml_deserialize_block_4(int param0, int param1) {
    int result;
    int v0 = param0;
    unsigned int v1 = intern_src;
    if(param1 > 0) {
        int v2 = 0;
        int counter = param1;
        do {
            char v3 = *(char*)(v2 + v1);
            char v4 = *(char*)(v2 + v1 + 1);
            *(char*)(v2 + v0) = *(char*)(v2 + v1 + 3);
            *(char*)(v2 + v0 + 1) = *(char*)(v2 + v1 + 2);
            *(char*)(v2 + v0 + 3) = v3;
            *(char*)(v2 + v0 + 2) = v4;
            v2 += 4;
            --counter;
        }
        while(counter);
        result = param1;
        v1 = (unsigned int)(result * 4 + v1);
    }
    intern_src = v1;
    return result;
}

int caml_deserialize_block_8(char* param0, int param1) {
    int result;
    char* ptr0 = intern_src;
    if(param1 > 0) {
        char* ptr1 = param0;
        char* ptr2 = ptr0;
        int counter = param1;
        char* ptr3 = ptr0;
        do {
            char v0 = *ptr2;
            char v1 = *(ptr2 + 1);
            *ptr1 = *(ptr2 + 7);
            *(ptr1 + 1) = *(ptr2 + 6);
            *(ptr1 + 7) = v0;
            *(ptr1 + 6) = v1;
            char v2 = *(ptr2 + 2);
            char v3 = *(ptr2 + 3);
            *(ptr1 + 2) = *(ptr2 + 5);
            *(ptr1 + 3) = *(ptr2 + 4);
            *(ptr1 + 5) = v2;
            *(ptr1 + 4) = v3;
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
void* caml_deserialize_block_float_8(void* __dest, int param1) {
    void* result = →memmove(__dest, intern_src, (size_t)(param1 * 8));
    intern_src = (unsigned int)((size_t)(param1 * 8) + intern_src);
    return result;
}

int caml_deserialize_error(int param0) {
    intern_cleanup();
    /*BAD_CALL!*/ caml_failwith(param0);
}

int caml_deserialize_float_4() {
    float v0;
    return caml_deserialize_block_4(&v0, 1);
}

void* caml_deserialize_float_8() {
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

int caml_dlclose(void* __handle) {
    return →dlclose(__handle);
}

char* caml_dlerror() {
    return →dlerror();
}

void* caml_dlopen(char* __file, int param1, unsigned int param2) {
    return →dlopen(__file, (param2 < 1 ? 0xffffff00: 0) + 0x1102);
}

void* caml_dlsym(void* __handle, char* __name) {
    return →dlsym(__handle, __name);
}

int caml_do_local_roots(int param0, int param1, int param2, int param3, unsigned int* param4) {
    int v0;
    int result = param1;
    if(result) {
        int v1 = param3;
        int v2 = param2;
        v0 = result;
    loc_8061AF7:
        while(1) {
            unsigned int v3 = caml_frame_descriptors_mask;
            int v4 = (v2 >>> 3) & v3;
            unsigned int v5 = caml_frame_descriptors;
            int* i;
            for(i = *(unsigned int*)(v4 * 4 + v5); *i != v2; i = *(unsigned int*)(v4 * 4 + v5)) {
                v4 = (v4 + 1) & v3;
            }
            if(*(short*)(i + 1) == 0xffff) {
                break;
            }
            else {
                int v6 = (unsigned int)*(short*)((char*)i + 6);
                if(v6 > 0) {
                    short* ptr0 = (short*)(i + 2);
                    int* ptr1 = i;
                    while(1) {
                        int v7 = (unsigned int)*ptr0;
                        int* ptr2 = ((unsigned char)v7 & 0x1) != 0 ? (int*)((v7 >> 1) * 4 + v1): (int*)(v7 + v0);
                        param0(*ptr2, (int)ptr2);
                        --v6;
                        if(v6 <= 0) {
                            break;
                        }
                        else {
                            ++ptr0;
                        }
                    }
                    i = ptr1;
                }
                v0 += (unsigned int)*(short*)(i + 1) & 0xfffc;
                v2 = *(int*)(v0 - 4);
            }
        }
        int* ptr3 = (int*)(v0 + 8);
        v0 = *ptr3;
        v2 = *(ptr3 + 1);
        result = *(ptr3 + 2);
        v1 = *(ptr3 + 2);
        if(v0) {
            goto loc_8061AF7;
        }
    }
    if(param4) {
        unsigned int* ptr4 = param4;
        v0 = 0;
        do {
            int v8 = 0;
            if(!(*(int*)(ptr4 + 1) ? 0: 1) && *(int*)(ptr4 + 1) >= 0) {
                do {
                    int v9 = v0;
                    if(!(*(int*)(ptr4 + 2) ? 0: 1) && *(int*)(ptr4 + 2) >= 0) {
                        do {
                            int* ptr5 = (int*)(v9 * 4 + *((int*)(v8 * 4 + (int)ptr4) + 3));
                            result = param0(*ptr5, (int)ptr5);
                            ++v9;
                        }
                        while(*(int*)(ptr4 + 2) > v9);
                    }
                    ++v8;
                }
                while(*(int*)(ptr4 + 1) <= v8);
            }
            ptr4 = *ptr4;
        }
        while(!ptr4);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
ssize_t caml_do_read(int __fd, void* __buf, size_t __nbytes) {
    ssize_t result;
    int* ptr0;
    do {
        caml_enter_blocking_section();
        result = →read(__fd, __buf, __nbytes);
        caml_leave_blocking_section();
        if(result != -1) {
            return result;
        }
        →__errno_location();
    }
    while(*ptr0 == 4);
    caml_sys_io_error(1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_do_roots(int param0) {
    int* ptr0;
    int* ptr1;
    int v0;
    unsigned int v1 = caml_globals;
    if(v1) {
        ptr0 = NULL;
        do {
            int* ptr2 = (int*)(v1 - 4);
            unsigned int v2 = 0;
            unsigned int v3 = 0;
            if((*ptr2 >>> 10)) {
                do {
                    int* ptr3 = (int*)(v2 * 4 + v1);
                    param0(*ptr3, (int)ptr3);
                    ++v3;
                    v2 = v3;
                }
                while((unsigned int)(*ptr2 >>> 10) > v3);
            }
            ptr0 = (int*)((char*)ptr0 + 1);
            v1 = *(unsigned int*)((int)(int*)((int)ptr0 * 4) + (int)&caml_globals);
        }
        while(!v1);
    }
    int* ptr4 = caml_dyn_globals;
    ptr0 = caml_dyn_globals;
    if(ptr4) {
        do {
            int v4 = *ptr0;
            if((*(int*)(v4 - 4) >>> 10)) {
                unsigned int v5 = 0;
                unsigned int v6 = 0;
                do {
                    int* ptr5 = (int*)(v5 * 4 + v4);
                    param0(*ptr5, (int)ptr5);
                    ++v6;
                    v5 = v6;
                }
                while((unsigned int)(*(int*)(v4 - 4) >>> 10) > v6);
            }
            ptr1 = *(unsigned int*)(ptr0 + 1);
            ptr0 = *(unsigned int*)(ptr0 + 1);
        }
        while(ptr1);
    }
    if(!caml_frame_descriptors) {
        caml_init_frame_descriptors(v0);
    }
    caml_do_local_roots(param0, caml_bottom_of_stack, caml_last_return_address, caml_gc_regs, caml_local_roots);
    caml_scan_global_roots(v0);
    caml_final_do_strong_roots(param0);
    unsigned int result = caml_scan_roots_hook;
    if(result) {
        result = (unsigned int)result(param0);
    }
    return result;
}

unsigned int caml_empty_minor_heap() {
    if(caml_young_end != caml_young_ptr) {
        caml_in_minor_collection = 1;
        caml_gc_message(2, (char*)&gvar_807103C, 0);
        caml_oldify_local_roots();
        for(int* i = *(int*)&caml_ref_table; gvar_807EB48 > (unsigned int)i; ++i) {
            int v0 = *i;
            caml_oldify_one(*(int**)v0, v0);
        }
        caml_oldify_mopup();
        for(unsigned int* j = *(int*)&caml_weak_ref_table; gvar_807EB64 > (unsigned int)j; ++j) {
            unsigned int* ptr0 = *j;
            unsigned int* ptr1 = *ptr0;
            if(!((unsigned char)ptr1 & 0x1) && caml_young_end > (unsigned int)ptr1 && caml_young_start < (unsigned int)ptr1) {
                *ptr0 = !*(int*)(ptr1 - 1) ? *ptr1: caml_weak_none;
            }
        }
        unsigned int v1 = caml_young_start;
        unsigned int v2 = caml_young_end;
        int v3 = (v2 - (caml_young_ptr < v1 ? v1: caml_young_ptr)) >>> 2;
        int v4 = 0;
        caml_stat_minor_words += (double)*(long long*)&v3;
        caml_young_ptr = v2;
        caml_young_limit = caml_young_start;
        clear_table();
        clear_table();
        caml_gc_message(2, (char*)0x80716A7, 0);
        caml_in_minor_collection = 0;
    }
    return caml_final_empty_young();
}

unsigned int caml_enter_blocking_section() {
    while(1) {
        caml_process_pending_signals();
        caml_enter_blocking_section_hook{caml_enter_blocking_section_default}();
        if(!caml_signals_are_pending) {
            return 0;
        }
        caml_leave_blocking_section_hook{caml_leave_blocking_section_default}();
    }
    return 0;
}

int caml_eq_float(double* param0, double* param1) {
    char v0;
    char v1;
    int v2;
    v3[v4] = fucomip(*param1, *param0);
    return (unsigned int)(unsigned char)(((unsigned int)(v0 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & ((unsigned int)(v1 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)param1 >>> 8) & 0xffffff) << 8))) * 2 + 1;
}

int caml_equal(int param0, int param1) {
    int v0 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (((unsigned int)v0 < 1 ? -1: 0) & 0x2) + 1;
}

int caml_executable_name(char* param0, size_t __len) {
    int result;
    char v0;
    int v1;
    char* __buf = param0;
    ssize_t v2 = →readlink("/proc/self/exe", __buf, __len);
    if(v2 != -1 && v2 < (int)__len) {
        __buf[v2] = 0;
        result = →__xstat64(3, __buf, &v0);
        if(result || (v1 & 0xf000) != 0x8000) {
            return -1;
        }
    }
    else {
        result = -1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_execute_signal(int param0, int param1) {
    int result;
    char v0;
    →sigemptyset();
    →sigaddset();
    int* ptr0 = &v0;
    int* ptr1 = &v0;
    →sigprocmask();
    int v1 = caml_rev_convert_signal_number(param0);
    ptr1 = (int*)(v1 * 2 + 1);
    int v2 = caml_callback_exn(*(int**)(param0 * 4 + caml_signal_handlers));
    if(!param1) {
        →sigprocmask();
        result = v2 & 0x3;
        if(result == 2) {
            return caml_raise(v2 & 0xfffffffc);
        }
    }
    else {
        result = v2 & 0x3;
        if(result == 2) {
            →sigdelset();
            →sigprocmask();
            result = caml_raise(v2 & 0xfffffffc);
        }
    }
    return result;
}

int caml_exp_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →exp(*param0);
}

int caml_expm1(double __x, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = →expm1(__x);
    return result;
}

long long* caml_expm1_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF __x = *param0;
    caml_expm1(__x, v0);
    return caml_copy_double(__x, v0);
}

int caml_ext_table_add(int* param0, int param1) {
    int* ptr0 = param0;
    int v0 = *(ptr0 + 1);
    if(*ptr0 >= v0) {
        *(ptr0 + 1) = v0 * 2;
        void* ptr1 = caml_stat_resize(*(void**)(ptr0 + 2), (size_t)(v0 * 8));
        *(void**)(ptr0 + 2) = ptr1;
    }
    int result = *ptr0;
    *(int*)(result * 4 + *(ptr0 + 2)) = param1;
    *ptr0 = *ptr0 + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ext_table_free(int* param0, int param1) {
    if(param1 && !(*param0 ? 0: 1) && *param0 >= 0) {
        int v0 = 0;
        do {
            caml_stat_free(*(void**)(v0 * 4 + *(param0 + 2)));
            ++v0;
        }
        while(*param0 > v0);
    }
    return caml_stat_free(*(void**)(param0 + 2));
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ext_table_init(int* param0, int param1) {
    int* ptr0 = param0;
    int v0 = param1;
    *ptr0 = 0;
    *(ptr0 + 1) = v0;
    int result = caml_stat_alloc(v0 * 4);
    *(ptr0 + 2) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_failwith(int param0) {
    /*BAD_CALL!*/ caml_raise_with_string(&caml_exn_Failure, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_fatal_error(char* __s) {
    →fputs(__s, stderr);
    /*NO_RETURN*/ →exit(2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_fatal_error_arg(char* __format, int param1) {
    →fprintf(stderr, __format, param1);
    /*NO_RETURN*/ →exit(2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_fatal_error_arg2(char* __format, int param1, char* __format1, int param3) {
    →fprintf(stderr, __format, param1);
    →fprintf(stderr, __format1, param3);
    /*NO_RETURN*/ →exit(2);
}

int caml_fill_string(int param0, int param1, int param2, int param3) {
    →memset((void*)((param1 >> 1) + param0), param3 >> 1, (size_t)(param2 >> 1));
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_custom_operations(int param0) {
    int result;
    int v0 = param0;
    int* ptr0 = custom_ops_final_table;
    if(ptr0) {
        result = *ptr0;
        if(*(int*)(result + 4) != v0) {
            do {
                ptr0 = *(unsigned int*)(ptr0 + 1);
                if(!ptr0) {
                    goto loc_806F696;
                }
                else {
                    result = *ptr0;
                }
            }
            while(*(int*)(result + 4) == v0);
        }
    }
    else {
    loc_806F696:
        int v1 = caml_stat_alloc(28);
        result = v1;
        *(int*)v1 = "_final";
        *(int*)(v1 + 4) = v0;
        *(int*)(v1 + 8) = 0;
        *(int*)(v1 + 12) = 0;
        *(int*)(v1 + 16) = 0;
        *(int*)(v1 + 20) = 0;
        int v2 = caml_stat_alloc(8);
        *(int*)v2 = result;
        *(unsigned int*)(v2 + 4) = custom_ops_final_table;
        custom_ops_final_table = v2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_do_calls() {
    int result;
    if(!running_finalisation_function && to_do_hd) {
        caml_gc_message(128, "Calling finalisation functions.\n", 0);
    loc_806F3B6:
        unsigned int* ptr0 = to_do_hd;
        while(ptr0) {
            int v0 = *(int*)(ptr0 + 1);
            if(v0) {
                *(int*)(ptr0 + 1) = v0 - 1;
                int* ptr1 = (int*)((v0 - 1) * 12 + (int)ptr0);
                int* ptr2 = *(int**)(ptr1 + 2);
                int v1 = *(ptr1 + 4);
                int v2 = *(ptr1 + 3);
                running_finalisation_function = 1;
                int v3 = v2 + v1;
                int v4 = caml_callback_exn(ptr2);
                running_finalisation_function = 0;
                if((v4 & 0x3) != 2) {
                    goto loc_806F3B6;
                }
                else {
                    caml_raise(v4 & 0xfffffffc);
                    break;
                }
            }
            else {
                unsigned int v5 = *ptr0;
                unsigned int* ptr3 = ptr0;
                →free();
                to_do_hd = v5;
                if(v5) {
                    goto loc_806F3B6;
                }
                else {
                    to_do_tl = 0;
                    ptr0 = to_do_hd;
                }
            }
        }
        result = caml_gc_message(128, "Done calling finalisation functions.\n", 0);
    }
    return result;
}

unsigned int* caml_final_do_strong_roots(int param0) {
    unsigned int* ptr0;
    if(old) {
        int v0 = 0;
        unsigned int v1 = 0;
        do {
            int* ptr1 = (int*)(final_table + v0);
            param0(*ptr1, (int)ptr1);
            ++v1;
            v0 += 12;
        }
        while(old > v1);
    }
    unsigned int* result = to_do_hd;
    unsigned int* ptr2 = to_do_hd;
    if(result) {
        do {
            unsigned int* ptr3 = ptr2;
            unsigned int v2 = 0;
            if(*(int*)(ptr3 + 1)) {
                do {
                    int* ptr4 = (int*)(v2 * 12 + (int)ptr2);
                    param0(*(int*)(ptr3 + 2), (int)(ptr4 + 2));
                    param0(*(int*)(ptr3 + 3), (int)(ptr4 + 3));
                    ++v2;
                    ptr3 += 3;
                    result = ptr2;
                }
                while(*(result + 1) > v2);
            }
            ptr0 = *ptr2;
            ptr2 = *ptr2;
        }
        while(!ptr0);
    }
    return result;
}

int caml_final_do_weak_roots(int param0) {
    int result;
    if(old) {
        int v0 = 0;
        unsigned int v1 = 0;
        do {
            int v2 = final_table + v0;
            result = param0(*(int*)(v2 + 4), v2 + 4);
            ++v1;
            v0 += 12;
        }
        while(old > v1);
    }
    return result;
}

int caml_final_do_young_roots(int param0) {
    int result;
    unsigned int v0 = old;
    if(young > v0) {
        int v1 = v0 * 3 * 4;
        do {
            int* ptr0 = (int*)(final_table + v1);
            param0(*ptr0, (int)ptr0);
            int v2 = final_table + v1;
            result = param0(*(int*)(v2 + 4), v2 + 4);
            ++v0;
            v1 += 12;
        }
        while(young > v0);
    }
    return result;
}

unsigned int caml_final_empty_young() {
    unsigned int result = young;
    old = young;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_register(int param0, int param1) {
    int v0;
    int v1 = param1;
    if(!((unsigned char)v1 & 0x1)) {
        v0 = v1;
        if(!(*(char*)(((v1 >>> 12) & 0x7ff) + *(int*)((v1 >>> 23) * 4 + (int)&caml_page_table)) & 0x3)) {
            goto loc_806F2A4;
        }
    }
    else {
    loc_806F2A4:
        caml_invalid_argument("Gc.finalise");
    }
    unsigned int v2 = size;
    if(young >= v2) {
        void* __ptr = final_table;
        if(!__ptr) {
            int v3 = caml_stat_alloc(360);
            final_table = v3;
            size = 30;
        }
        else {
            void* ptr0 = caml_stat_resize(__ptr, (size_t)(v2 * 6 * 4));
            final_table = ptr0;
            size = v2 * 2;
        }
    }
    unsigned int v4 = young;
    int* ptr1 = (int*)(v4 * 3 * 4 + final_table);
    *ptr1 = param0;
    if(*(char*)(v0 - 4) == 249) {
        *(ptr1 + 2) = (*(int*)(v0 - 4) >>> 10) * 4;
        *(ptr1 + 1) = v0 - (*(int*)(v0 - 4) >>> 10) * 4;
    }
    else {
        *(ptr1 + 2) = 0;
        *(ptr1 + 1) = v1;
    }
    young = v4 + 1;
    return 1;
}

int caml_final_release() {
    running_finalisation_function = 0;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_final_update() {
    int* ptr0;
    int* result;
    int v0;
    int v1;
    unsigned int v2 = old;
    if(v2) {
        unsigned int* ptr1 = final_table;
        int v3 = 0;
        result = NULL;
        do {
            v3 += (unsigned int)((unsigned int)(*(int*)(*(int*)(ptr1 + 1) - 4) & 0x300) < 1);
            result = (int*)((char*)result + 1);
            ptr1 += 3;
        }
        while((unsigned int)result < v2);
        if(v3) {
            void* ptr2 = →malloc((size_t)(v3 * 12 + 20));
            if(!ptr2) {
                ptr2 = (void*)/*NO_RETURN*/ caml_fatal_error("out of memory");
            }
            *(int*)ptr2 = 0;
            *(int*)((int)ptr2 + 4) = v3;
            ptr1 = to_do_tl;
            if(!ptr1) {
                to_do_hd = ptr2;
            }
            else {
                *ptr1 = ptr2;
            }
            to_do_tl = ptr2;
            unsigned int v4 = old;
            unsigned int v5 = old;
            if(v4) {
                int* ptr3 = final_table;
                int* ptr4 = final_table;
                unsigned int v6 = to_do_tl;
                unsigned int v7 = 0;
                int* ptr5 = NULL;
                unsigned int v8 = 0;
                do {
                    int* ptr6 = ptr3;
                    do {
                        int* ptr7 = *(unsigned int*)(ptr3 + 1);
                        if((*(ptr7 - 1) & 0x300)) {
                            *(int*)((int)(int*)((int)(int*)((int)ptr5 * 3) * 4) + (int)ptr4) = *ptr6;
                            *((int*)((int)(int*)((int)(int*)((int)ptr5 * 3) * 4) + (int)ptr4) + 1) = *(ptr6 + 1);
                            *((int*)((int)(int*)((int)(int*)((int)ptr5 * 3) * 4) + (int)ptr4) + 2) = *(ptr6 + 2);
                            ptr5 = (int*)((char*)ptr5 + 1);
                        }
                        else if(*(char*)(ptr7 - 1) != 250) {
                            ptr0 = ptr6;
                        loc_806F586:
                            *(int*)(v7 * 3 * 4 + v6 + 8) = *ptr0;
                            *(int*)(v7 * 3 * 4 + v6 + 12) = *(ptr0 + 1);
                            *(int*)(v7 * 3 * 4 + v6 + 16) = *(ptr0 + 2);
                            ++v7;
                        }
                        else {
                            v1 = *ptr7;
                            if((unsigned char)v1 & 0x1) {
                                ptr0 = ptr6;
                                *(ptr0 + 1) = v1;
                                goto loc_806F586;
                            }
                            else {
                                int v9 = v1;
                                v0 = (v1 >>> 12) & 0x7ff;
                                if(!(*(char*)(((v1 >>> 12) & 0x7ff) + *(int*)((v1 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                                    ptr0 = ptr6;
                                    goto loc_806F586;
                                }
                                else {
                                    char v10 = *(char*)(v1 - 4);
                                    switch(v10) {
                                        case 246: 
                                        case 250: {
                                            ptr0 = ptr6;
                                            goto loc_806F586;
                                        }
                                        case 253: {
                                            ptr0 = ptr6;
                                            goto loc_806F586;
                                        }
                                        default: {
                                            *(ptr3 + 1) = v1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        goto loc_806F5C4;
                    }
                    while(*(char*)(*(int*)((v1 >>> 23) * 4 + (int)&caml_page_table) + v0) & 0x1);
                    ptr0 = ptr6;
                    goto loc_806F586;
                loc_806F5C4:
                    ++v8;
                    ptr3 += 3;
                }
                while(v5 > v8);
                result = ptr5;
                old = ptr5;
                young = result;
                *(unsigned int*)(v6 + 4) = v7;
                if(v7) {
                    unsigned int v11 = 0;
                    do {
                        int v12 = 0;
                        result = caml_darken(*(int**)(v11 * 3 * 4 + to_do_tl + 12));
                        ++v11;
                    }
                    while(v11 < v7);
                }
            }
            else {
                old = 0;
                young = 0;
                result = to_do_tl;
                result[1] = 0;
                return result;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_finalize_channel(int param0) {
    unsigned int result;
    void* __ptr = *(void**)(param0 + 4);
    int v0 = *(int*)((int)__ptr + 44) - 1;
    *(int*)((int)__ptr + 44) = *(int*)((int)__ptr + 44) - 1;
    if(v0 <= 0) {
        unsigned int v1 = caml_channel_mutex_free;
        if(v1) {
            v1((int)__ptr);
        }
        result = unlink_channel();
        caml_stat_free(__ptr);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
char** caml_find_custom_operations(char* __s2) {
    char** result;
    unsigned int* ptr0 = custom_ops_table;
    if(ptr0) {
        do {
            result = *ptr0;
            int v0 = →strcmp(result[0], __s2);
            if(!v0) {
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

unsigned int caml_finish_major_cycle() {
    __SyntheticTypeUnknown v0;
    char v1;
    if(caml_gc_phase == 2) {
        start_cycle();
    }
    while(!caml_gc_phase) {
        mark_slice();
    }
    while(caml_gc_phase == 1) {
        sweep_slice();
    }
    unsigned int result = caml_allocated_words;
    unsigned int v2 = caml_allocated_words;
    int v3 = 0;
    v0[v1 - 1] = (double)*(long long*)&v2;
    v0[v1 - 1] += caml_stat_major_words;
    caml_stat_major_words = v0[v1 - 1];
    caml_allocated_words = 0;
    return result;
}

unsigned int caml_fl_add_blocks(unsigned int param0) {
    unsigned int* ptr0;
    unsigned int result = param0;
    caml_fl_cur_size = (int*)((char*)((*(int*)(result - 4) >>> 10) + (int)caml_fl_cur_size) + 1);
    unsigned int* ptr1 = fl_last;
    if(result > (unsigned int)ptr1) {
        *ptr1 = result;
        if(caml_fl_merge == ptr1 && caml_gc_sweep_hp > result) {
            result = *(unsigned int*)(result + 4);
            caml_fl_merge = result;
        }
        if(caml_allocation_policy == 1) {
            result = flp_size;
            if((int)result <= 999) {
                *(unsigned int*)(result * 4 + (int)&flp) = ptr1;
                ++result;
                flp_size = result;
            }
        }
    }
    else {
        unsigned int* ptr2 = *(int*)((char*)&sentinel + 8);
        if(!ptr2 || result <= (unsigned int)ptr2) {
            ptr0 = (unsigned int*)0x807B708;
        }
        else {
            unsigned int* i;
            for(i = *ptr2; (i && result > (unsigned int)i); i = *ptr2) {
                ptr2 = i;
            }
            ptr0 = ptr2;
            ptr2 = i;
        }
        **(unsigned int*)(result + 4) = ptr2;
        *ptr0 = result;
        if(caml_fl_merge == ptr0 && caml_gc_sweep_hp > result) {
            caml_fl_merge = *(unsigned int*)(result + 4);
        }
        if(caml_allocation_policy == 1) {
            result = truncate_flp();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_fl_allocate(unsigned int param0) {
    int* ptr0;
    unsigned int v0;
    int* ptr1;
    int* result;
    int v1;
    unsigned int v2;
    int v3;
    int* ptr2 = caml_allocation_policy;
    if(!ptr2) {
        int* ptr3 = fl_prev;
        int* ptr4 = ptr3[0];
        if(ptr4) {
            while((unsigned int)(ptr4[-1] >>> 10) < param0) {
                ptr3 = ptr4;
                ptr4 = (int*)ptr4[0];
                if(!ptr4) {
                    goto loc_8063238;
                }
            }
            result = allocate_block(ptr4);
        }
        else {
        loc_8063238:
            fl_last = ptr3;
            ptr2 = *(int*)((char*)&sentinel + 8);
            unsigned int v4 = fl_prev;
            if(v4 != 134723336) {
                while((unsigned int)(ptr2[-1] >>> 10) < param0) {
                    ptr0 = ptr2;
                    ptr2 = (int*)ptr2[0];
                    if(ptr0 == v4) {
                        goto loc_8063606;
                    }
                }
                result = allocate_block(ptr2);
            }
            else {
            loc_8063606:
                result = NULL;
            }
        }
    }
    else if(ptr2 != 1) {
        goto loc_8063606;
    }
    else {
        unsigned int v5 = flp_size;
        unsigned int v6 = flp_size;
        if((int)v5 > 0) {
            int* ptr5 = **(int*)&flp;
            v2 = (unsigned int)(ptr5[-1] >>> 10);
            v1 = 0;
            while(v2 < param0) {
                ++v1;
                if(v1 >= (int)v6) {
                    goto loc_80632C2;
                }
                else {
                    ptr5 = **(int***)(v1 * 4 + (int)&flp);
                    v2 = (unsigned int)(ptr5[-1] >>> 10);
                }
            }
            result = allocate_block(ptr5);
        loc_80633E7:
            int v7 = flp_size;
            if(v7 > v1) {
                ptr0 = v1 <= 0 ? NULL: (int*)(*(int*)(**(unsigned int*)(v1 * 4 + (int)&gvar_807DB5C) - 4) >>> 10);
                if(v7 - 1 == v1) {
                    unsigned int v8 = **(unsigned int**)((v7 - 1) * 4 + (int)&flp);
                    if((unsigned int)(*(int*)(v8 - 4) >>> 10) <= (unsigned int)ptr0) {
                        beyond = v8;
                        --flp_size;
                    }
                    else {
                        beyond = 0;
                    }
                }
                else {
                    unsigned int* ptr6 = *(unsigned int*)(v1 * 4 + (int)&flp);
                    unsigned int v9 = *(unsigned int*)(v1 * 4 + (int)&gvar_807DB64);
                    int v10 = 0;
                    v6 = v2;
                    int* ptr7 = ptr0;
                    int v11 = v1;
                    int v12 = 0;
                    int* ptr8 = result;
                    while(ptr6 != v9) {
                        unsigned int* ptr9 = *ptr6;
                        ptr0 = (int*)(*(int*)(ptr9 - 1) >>> 10);
                        if(ptr0 > ptr7) {
                            *(unsigned int*)(v12 * 4 + (int)&v3) = ptr6;
                            ++v12;
                            if((unsigned int)ptr0 >= v6) {
                                break;
                            }
                            else {
                                ptr7 = ptr0;
                            }
                        }
                        ptr6 = ptr9;
                    }
                    v10 = v12;
                    result = ptr8;
                    int v13 = flp_size - 1;
                    if(v13 + v10 <= 1000) {
                        if(v10 != 1) {
                            →memmove((void*)((v11 + v10) * 4 + &flp), (void*)(v11 * 4 + &gvar_807DB64), (size_t)((v13 - v11) * 4));
                            if(v10 > 0) {
                                goto loc_806352A;
                            }
                        }
                        else {
                        loc_806352A:
                            →memmove((void*)(v11 * 4 + &flp), &v3, (size_t)(v10 * 4));
                        }
                        flp_size = (unsigned int)(flp_size + v10 - 1);
                    }
                    else {
                        int v14 = v11 + v10;
                        if(v14 <= 999) {
                            if(v10 != 1) {
                                →memmove((void*)(v14 * 4 + &flp), (void*)(v11 * 4 + &gvar_807DB64), (size_t)((1000 - v11 - v10) * 4));
                                if(v10 > 0) {
                                    goto loc_80635B8;
                                }
                            }
                            else {
                            loc_80635B8:
                                →memmove((void*)(v11 * 4 + &flp), &v3, (size_t)(v10 * 4));
                            }
                        }
                        else if(v11 != 1000) {
                            →memmove((void*)(v11 * 4 + &flp), &v3, (size_t)((1000 - v11) * 4));
                        }
                        flp_size = 999;
                        beyond = *gvar_807EAFC;
                    }
                }
            }
        }
        else {
        loc_80632C2:
            if(!v6) {
                ptr1 = (int*)0x807B708;
                v0 = 0;
            }
            else {
                int* ptr10 = **(int***)(v6 * 4 + (int)&gvar_807DB5C);
                v0 = (unsigned int)(ptr10[-1] >>> 10);
                int* ptr11 = beyond;
                ptr1 = ptr11 ? ptr11: ptr10;
            }
            ptr2 = NULL;
            int v15 = flp_size;
            while(v15 <= 999) {
                ptr2 = ptr1[0];
                if(!ptr2) {
                    fl_last = ptr1;
                    beyond = ptr1 == 134723336 ? NULL: ptr1;
                    return NULL;
                }
                v2 = (unsigned int)(ptr2[-1] >>> 10);
                if(v2 > v0) {
                    *(int**)(v15 * 4 + (int)&flp) = ptr1;
                    v1 = flp_size;
                    flp_size = (unsigned int)(v1 + 1);
                    if(v2 >= param0) {
                        beyond = ptr2;
                        result = allocate_block(ptr2);
                        goto loc_80633E7;
                    }
                    else {
                        v0 = v2;
                    }
                }
                ptr1 = ptr2;
                v15 = flp_size;
            }
            beyond = ptr2;
            ptr0 = ptr2;
            if(!ptr2) {
                ptr0 = *(int**)(v15 * 4 + (int)&gvar_807DB5C);
            }
            unsigned int v16 = (unsigned int)(*(int*)(*gvar_807EAFC - 4) >>> 10);
            ptr2 = (int*)ptr0[0];
            if(ptr2) {
                while(1) {
                    unsigned int v17 = (unsigned int)(ptr2[-1] >>> 10);
                    if(v17 < v16) {
                        beyond = ptr2;
                    }
                    else if(v17 >= param0) {
                        return allocate_block(ptr2);
                    }
                    int v18 = ptr2[0];
                    if(!v18) {
                        break;
                    }
                    else {
                        ptr2 = (int*)v18;
                    }
                }
                ptr0 = ptr2;
            }
            fl_last = ptr0;
            return NULL;
        }
    }
    return result;
}

void caml_fl_init_merge() {
    last_fragment = 0;
    caml_fl_merge = 134723336;
}

int* caml_fl_merge_block(unsigned int* param0) {
    unsigned int* ptr0 = param0 - 1;
    int v0 = *(param0 - 1);
    caml_fl_cur_size = (unsigned int)((v0 >>> 10) + caml_fl_cur_size + 1);
    unsigned int* ptr1 = caml_fl_merge;
    unsigned int* ptr2 = caml_fl_merge;
    unsigned int* ptr3 = *ptr1;
    if(caml_allocation_policy == 1) {
        truncate_flp();
    }
    unsigned int* ptr4 = param0 - 1;
    if(last_fragment == ptr4) {
        unsigned int v1 = (unsigned int)((*ptr0 >>> 10) + 1);
        if(v1 > 0x3fffff) {
            goto loc_8062F68;
        }
        else {
            v0 = v1 * 0x400;
            *(int*)(ptr4 - 1) = v1 * 0x400;
            ++caml_fl_cur_size;
        }
    }
    else {
    loc_8062F68:
        ptr4 = param0;
    }
    int* ptr5 = (int*)((v0 >>> 10) * 4 + (int)ptr4);
    int* result = (int*)(ptr3 - 1);
    if(result != ptr5) {
        result = ptr5;
    }
    else {
        ptr0 = *ptr3;
        int v2 = *(int*)(ptr3 - 1);
        int v3 = *(int*)(ptr3 - 1);
        unsigned int v4 = (unsigned int)((v2 >>> 10) + (v0 >>> 10) + 1);
        if(v4 <= 0x3fffff) {
            *ptr2 = ptr0;
            if(!caml_allocation_policy) {
                fl_prev = fl_prev == ptr3 ? ptr1: fl_prev;
            }
            v0 = v4 * 0x400 + 0x200;
            *(int*)(ptr4 - 1) = v4 * 0x400 + 0x200;
            result = (int*)((v0 >>> 10) * 4 + (int)ptr4);
            ptr3 = ptr0;
        }
    }
    unsigned int* ptr6 = (unsigned int*)(*(ptr1 - 1) >>> 10);
    if((int*)((int)(int*)((int)ptr6 * 4) + (int)ptr1) == (int*)(ptr4 - 1)) {
        int* ptr7 = (int*)((char*)((v0 >>> 10) + (int)ptr6) + 1);
        if((unsigned int)ptr7 > 0x3ffffe) {
            goto loc_8063021;
        }
        else {
            *(ptr1 - 1) = (int*)((int)ptr7 * 0x400) + 128;
        }
    }
    else {
    loc_8063021:
        if((unsigned int*)(v0 >>> 10)) {
            *(int*)(ptr4 - 1) = (v0 & 0xfffffcff) | 0x200;
            *ptr4 = ptr3;
            *ptr2 = ptr4;
            caml_fl_merge = ptr4;
        }
        else {
            last_fragment = ptr4;
            --caml_fl_cur_size;
        }
    }
    return result;
}

int caml_fl_reset() {
    int result;
    *(int*)((char*)&sentinel + 8) = 0;
    unsigned int v0 = caml_allocation_policy;
    if(!v0) {
        fl_prev = 134723336;
    }
    else if(v0 == 1) {
        truncate_flp();
    }
    caml_fl_cur_size = 0;
    caml_fl_init_merge();
    return result;
}

int caml_float_compare(double* param0, double* param1) {
    int result;
    char v0;
    __int128 v1;
    __int128 v2;
    char v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
    char v8;
    v9[v10] = fucomi(*param1, *param0);
    if(v0 || !v3) {
        v9[v10] = fucomi(v7, v4);
        if((v8 || v3)) {
            v9[v10] = fucomi(v1, v5);
            if((v8 || v3)) {
                v9[v10] = fucomip(v6, v6);
                if(v0 || !v3) {
                    v9[v10] = fucomip(v2, v2);
                    if(!v0 && v3) {
                        goto loc_8066E91;
                    }
                    else {
                        return 1;
                    }
                }
            }
            result = 3;
        }
        else {
        loc_8066E91:
            result = -1;
        }
    }
    else {
        result = 1;
    }
    return result;
}

long long* caml_float_of_int(int param0) {
    int v0;
    return caml_copy_double((double)(param0 >> 1), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_float_of_string(int param0) {
    char v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    int v4;
    __SyntheticTypeUnknownF v5;
    char v6;
    int v7;
    int v8 = v7;
    int v9 = caml_string_length(param0);
    int v10 = v9;
    if((unsigned int)v9 > 63) {
        caml_stat_alloc(v9 + 1);
    }
    int v11 = param0;
    char* ptr0 = &v0;
    while(v10) {
        char v12 = *(char*)v11;
        if(v12 != 95) {
            ptr0[0] = v12;
            ++ptr0;
        }
        ++v11;
        --v10;
    }
    ptr0[0] = 0;
    if(ptr0 != &v0) {
        v2[v6] = →strtod(&v0, &v1);
        double v13 = v5;
        if(ptr0 == v1) {
            *(long long*)&v3 = v13;
            return caml_copy_double(*(double*)&v3, v4);
        }
    }
    /*BAD_CALL!*/ caml_failwith("float_of_string");
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_float_of_substring(int param0, int param1, int param2) {
    int __ptr;
    int v0;
    char v1;
    int v2;
    __SyntheticTypeUnknown v3;
    int v4;
    int v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    char v8;
    int v9 = v6;
    int v10 = caml_string_length(param0);
    if((unsigned int)(param1 >> 1) < 0x80000000 && (unsigned int)(param1 >> 1) < (unsigned int)v10) {
        v0 = param2 >> 1;
        if(v0 <= 0 || (unsigned int)(v10 - (unsigned int)(param1 >> 1)) < (unsigned int)v0) {
            goto loc_8067627;
        }
        else if((unsigned int)v0 <= 63) {
            __ptr = &v1;
        }
        else {
            __ptr = caml_stat_alloc(v0 + 1);
        }
    }
    else {
    loc_8067627:
        v0 = 0;
        __ptr = &v1;
    }
    char* ptr0 = (char*)((unsigned int)(param1 >> 1) + param0);
    int v11 = __ptr;
    while(v0) {
        char v12 = *ptr0;
        if(v12 != 95) {
            *(char*)v11 = v12;
            ++v11;
        }
        ++ptr0;
        --v0;
    }
    *(char*)v11 = 0;
    if(v11 != __ptr) {
        v3[v8] = →strtod((char*)__ptr, &v2);
        double v13 = v7;
        if(v11 == v2) {
            if(__ptr != &v1) {
                caml_stat_free(__ptr);
            }
            *(long long*)&v4 = v13;
            return caml_copy_double(*(double*)&v4, v5);
        }
    }
    if(__ptr != &v1) {
        caml_stat_free(__ptr);
    }
    /*BAD_CALL!*/ caml_failwith("float_of_string");
}

int caml_floor_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →floor(*param0);
}

int caml_flush(int param0) {
    int result;
    do {
        result = caml_flush_partial(param0);
    }
    while(!result);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_flush_partial(int param0) {
    int v0 = param0;
    int v1 = v0 + 52;
    int v2 = *(int*)(v0 + 16) - (v0 + 52);
    if(v2 > 0) {
        int v3 = do_write(v2, v0 + 52);
        int v4 = *(int*)(v0 + 4);
        *(int*)(v0 + 4) = *(int*)(v0 + 4) + v3;
        *(int*)(v0 + 8) = (v3 >> 31) + (unsigned int)__carry__(v3, v4) + *(int*)(v0 + 8);
        if(v3 < v2) {
            int v5 = v2 - v3;
            int v6 = v3 + v1;
            int v7 = v1;
            →memmove();
        }
        *(int*)(v0 + 16) = *(int*)(v0 + 16) - v3;
    }
    return v0 + 52 == *(int*)(v0 + 16) ? 1: 0;
}

long long* caml_fmod_float(double* param0, int param1) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    __SyntheticTypeUnknownF __x;
    __int128 v4 = *param0;
    do {
        fprem();
        (unsigned short)v6 = fnstsw((unsigned short)param1);
    }
    while(((unsigned short)param1 >>> 10) & 0x1);
    char v5 = 5;
    v0[v2] = fucomi(v4, v4);
    if((((unsigned short)param1 >>> 14) & 0x1) == 0) {
        *(long long*)&v1 = v3;
        v5 = 0;
        v0[v2] = /*NO_RETURN*/ →fmod(__x, *(double*)&v1);
    }
    v0[v5 + 1] = v0[v5];
    v0[v5 + 2] = v0[v5 + 1];
    return caml_copy_double(v0[v5 + 2], v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_format_float(char* param0, double* param1) {
    int result;
    int v0;
    int v1;
    __SyntheticTypeUnknown v2;
    char v3;
    char v4;
    char v5;
    char* __nptr = param0;
    int v6 = (unsigned int)param0[0];
    if(param0[0]) {
        if((unsigned char)((unsigned char)v6 - 48) > 9) {
            do {
                ++__nptr;
                v0 = (unsigned int)__nptr[0];
                if(!__nptr[0]) {
                    v2[v5 - 1] = *param1;
                    *(long long*)&v1 = v2[v5 - 1];
                    →sprintf();
                    return caml_copy_string(&v4);
                }
            }
            while((unsigned char)((unsigned char)v0 - 48) > 9);
        }
        long v7 = →strtol(__nptr, NULL, 10);
        int v8 = (int)(v7 + 350) < 350 ? 350: (int)(v7 + 350);
        char v9 = __nptr[0];
        if(v9) {
            if(v9 == 46) {
                goto loc_8066F88;
            }
            else {
                do {
                    ++__nptr;
                    v3 = __nptr[0];
                    if(!v3) {
                        goto loc_8066FA9;
                    }
                }
                while(v3 != 46);
            loc_8066F88:
                long v10 = →strtol(__nptr + 1, NULL, 10);
                v8 = (int)(v10 + 350) > v8 ? (int)(v10 + 350): v8;
            }
        }
    loc_8066FA9:
        if((unsigned int)v8 <= 0x171) {
            v2[v5 - 1] = *param1;
            *(long long*)&v1 = v2[v5 - 1];
            →sprintf();
            return caml_copy_string(&v4);
        }
        int __ptr = caml_stat_alloc(v8);
        *(long long*)&v1 = *param1;
        →sprintf();
        result = caml_copy_string((char*)__ptr);
        if(__ptr != &v4) {
            caml_stat_free(__ptr);
        }
    }
    else {
        v2[v5 - 1] = *param1;
        *(long long*)&v1 = v2[v5 - 1];
        →sprintf();
        result = caml_copy_string(&v4);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_format_int(int param0, int param1) {
    char v0;
    char v1;
    int __ptr = parse_format(&v0, &v1);
    →sprintf();
    int result = caml_copy_string((char*)__ptr);
    if(__ptr != &v0) {
        caml_stat_free(__ptr);
    }
    return result;
}

unsigned int caml_free_dependent_memory(int param0) {
    unsigned int v0 = caml_dependent_size;
    caml_dependent_size = (unsigned int)(param0 >>> 2) > v0 ? 0: v0 - (unsigned int)(param0 >>> 2);
    return (unsigned int)(param0 >>> 2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_free_for_heap(int param0) {
    int result;
    →free(*(void**)(param0 - 16));
    return result;
}

int caml_frexp_float(double* param0) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3;
    __SyntheticTypeUnknownF v4;
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
    int* __exponent = &v0;
    *(long long*)&v3 = *param0;
    v1[v2] = →frexp(*(double*)&v3, __exponent);
    *(long long*)&v3 = v4;
    ptr1 = caml_copy_double(*(double*)&v3, (int)__exponent);
    int v11 = caml_alloc_tuple(2);
    result = v11;
    *(long long**)v11 = ptr1;
    *(int*)(result + 4) = v0 * 2 + 1;
    caml_local_roots = v5;
    return result;
}

int caml_garbage_collection() {
    unsigned int v0 = caml_young_start;
    caml_young_limit = caml_young_start;
    if(caml_young_ptr < v0 || caml_force_major_slice) {
        caml_minor_collection();
    }
    return caml_process_pending_signals();
}

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

unsigned int* caml_gc_counters() {
    int v0;
    int v1;
    unsigned int v2 = caml_local_roots;
    unsigned int* result = NULL;
    unsigned int v3 = v2;
    caml_local_roots = &v3;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &result;
    unsigned int v6 = (caml_young_end - caml_young_ptr) >>> 2;
    int v7 = 0;
    double v8 = (double)*(long long*)&v6 + caml_stat_minor_words;
    double v9 = caml_stat_promoted_words;
    v6 = caml_allocated_words;
    double v10 = (double)*(long long*)&v6 + caml_stat_major_words;
    result = (unsigned int*)caml_alloc_tuple(3);
    *(long long*)&v0 = v8;
    long long* ptr1 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result, (unsigned int)ptr1);
    *(long long*)&v0 = v9;
    long long* ptr2 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result + 1, (unsigned int)ptr2);
    *(long long*)&v0 = v10;
    long long* ptr3 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result + 2, (unsigned int)ptr3);
    caml_local_roots = v2;
    return result;
}

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

int caml_gc_get() {
    int result;
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v1;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &result;
    int v4 = caml_alloc_tuple(7);
    result = v4;
    caml_modify((unsigned int*)v4, (unsigned int)((caml_minor_heap_size >>> 2) * 2 + 1));
    caml_modify((unsigned int*)(result + 4), (unsigned int)((caml_major_heap_increment >>> 2) * 2 + 1));
    caml_modify((unsigned int*)(result + 8), (unsigned int)(caml_percent_free * 2 + 1));
    caml_modify((unsigned int*)(result + 12), (unsigned int)(caml_verb_gc * 2 + 1));
    caml_modify((unsigned int*)(result + 16), (unsigned int)(caml_percent_max * 2 + 1));
    caml_modify((unsigned int*)(result + 20), 1);
    caml_modify((unsigned int*)(result + 24), (unsigned int)(caml_allocation_policy * 2 + 1));
    caml_local_roots = v0;
    return result;
}

int caml_gc_major() {
    caml_gc_message(1, "Major GC cycle requested\n", 0);
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    test_and_compact();
    caml_final_do_calls();
    return 1;
}

int caml_gc_major_slice(int param0) {
    caml_empty_minor_heap();
    int v0 = caml_major_collection_slice(param0 >> 1);
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_message(int param0, char* __format, int param2) {
    int result = param0;
    if(result < 0 || (caml_verb_gc & result)) {
        →fprintf(stderr, __format, param2);
        result = →fflush(stderr);
    }
    return result;
}

int caml_gc_minor() {
    caml_minor_collection();
    return 1;
}

unsigned int* caml_gc_quick_stat() {
    int v0;
    int v1;
    unsigned int v2 = caml_local_roots;
    unsigned int* result = NULL;
    unsigned int v3 = v2;
    caml_local_roots = &v3;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &result;
    unsigned int v6 = (caml_young_end - caml_young_ptr) >>> 2;
    int v7 = 0;
    double v8 = (double)*(long long*)&v6 + caml_stat_minor_words;
    double v9 = caml_stat_promoted_words;
    v6 = caml_allocated_words;
    double v10 = (double)*(long long*)&v6 + caml_stat_major_words;
    unsigned int v11 = caml_stat_minor_collections;
    unsigned int v12 = caml_stat_major_collections;
    int v13 = caml_stat_heap_size >>> 2;
    int v14 = caml_stat_top_heap_size >>> 2;
    unsigned int v15 = caml_stat_compactions;
    unsigned int v16 = caml_stat_heap_chunks;
    result = (unsigned int*)caml_alloc_tuple(16);
    *(long long*)&v0 = v8;
    long long* ptr1 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result, (unsigned int)ptr1);
    *(long long*)&v0 = v9;
    long long* ptr2 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result + 1, (unsigned int)ptr2);
    *(long long*)&v0 = v10;
    long long* ptr3 = caml_copy_double(*(double*)&v0, v1);
    caml_modify(result + 2, (unsigned int)ptr3);
    caml_modify(result + 3, (unsigned int)(v11 * 2 + 1));
    caml_modify(result + 4, (unsigned int)(v12 * 2 + 1));
    caml_modify(result + 5, (unsigned int)(v13 * 2 + 1));
    caml_modify(result + 6, (unsigned int)(v16 * 2 + 1));
    caml_modify(result + 7, 1);
    caml_modify(result + 8, 1);
    caml_modify(result + 9, 1);
    caml_modify(result + 10, 1);
    caml_modify(result + 11, 1);
    caml_modify(result + 12, 1);
    caml_modify(result + 13, (unsigned int)(v15 * 2 + 1));
    caml_modify(result + 14, (unsigned int)(v14 * 2 + 1));
    int v17 = caml_stack_usage();
    caml_modify(result + 15, (unsigned int)(v17 * 2 + 1));
    caml_local_roots = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_set(int param0) {
    int v0;
    caml_verb_gc = (unsigned int)(*(int*)(param0 + 12) >> 1);
    int v1 = norm_pfree();
    if(caml_percent_free != v1) {
        caml_percent_free = v1;
        caml_gc_message(32, (char*)&gvar_807198F, v1);
    }
    norm_pmax();
    if(caml_percent_max != v0) {
        caml_percent_max = v0;
        caml_gc_message(32, "New max overhead: %d%%\n", v0);
    }
    unsigned int v2 = norm_heapincr();
    if(v2 * 4 != caml_major_heap_increment) {
        caml_major_heap_increment = v2 * 4;
        caml_gc_message(32, "New heap increment size: %luk bytes\n", (int)(unsigned int)((v2 >>> 8) & 0x3fffff));
    }
    int v3 = *(int*)(param0 + 24) >> 1;
    if(((unsigned int)v3 < 2 ? v3: 1) != caml_allocation_policy) {
        caml_gc_message(32, "New allocation policy: %d\n", (unsigned int)v3 < 2 ? v3: 1);
        caml_set_allocation_policy((unsigned int)((unsigned int)v3 < 2 ? v3: 1));
    }
    int v4 = norm_minsize();
    if(caml_minor_heap_size != v4) {
        caml_gc_message(32, "New minor heap size: %luk bytes\n", v4 >>> 10);
        caml_set_minor_heap_size(v4);
    }
    return 1;
}

unsigned int* caml_gc_stat() {
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
    int v10;
    int v11;
    unsigned int v12 = caml_local_roots;
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
                    int v13 = *ptr2;
                    if((unsigned int)(v13 & 0x300) == 0x100) {
                    loc_806CE45:
                        ++v5;
                        v4 = (v13 >>> 10) + v4 + 1;
                    }
                    else if((unsigned int)(v13 & 0x300) > 0x100) {
                        if((unsigned int)(v13 & 0x300) == 0x200) {
                            ++v7;
                            v6 = (v13 >>> 10) + v6 + 1;
                            v8 = (unsigned int)((v13 >>> 10) + 1) <= v8 ? v8: (unsigned int)((v13 >>> 10) + 1);
                        }
                        else if((unsigned int)(v13 & 0x300) == 0x300) {
                            goto loc_806CE45;
                        }
                    }
                    else if(!(unsigned int)(v13 & 0x300)) {
                        v0 = (unsigned int)(v13 >>> 10);
                        if(!(unsigned int)(v13 >>> 10)) {
                            ++v9;
                        }
                        else if(v2 == 1 && (unsigned int)ptr2 >= v1) {
                            ++v7;
                            v6 = v0 + v6 + 1;
                            v8 = v0 + 1 <= v8 ? v8: v0 + 1;
                        }
                        else {
                            ++v5;
                            v4 = v4 + v0 + 1;
                        }
                    }
                    ptr2 = (int*)((v13 >>> 10) * 4 + (int)ptr2) + 1;
                }
                while(ptr2 < ptr0);
            }
            ptr2 = *(unsigned int*)(ptr1 + 3);
        }
        while(ptr2);
    }
    unsigned int* result = NULL;
    unsigned int v14 = v12;
    caml_local_roots = &v14;
    int v15 = 1;
    int v16 = 1;
    int* ptr4 = &result;
    unsigned int v17 = (caml_young_end - caml_young_ptr) >>> 2;
    int v18 = 0;
    *(long long*)&ptr1 = (double)*(long long*)&v17 + caml_stat_minor_words;
    *(long long*)&v2 = caml_stat_promoted_words;
    v17 = caml_allocated_words;
    *(long long*)&v1 = (double)*(long long*)&v17 + caml_stat_major_words;
    unsigned int v19 = caml_stat_minor_collections;
    v0 = caml_stat_major_collections;
    ptr0 = (int*)(caml_stat_heap_size >>> 2);
    unsigned int v20 = caml_stat_compactions;
    int v21 = caml_stat_top_heap_size >>> 2;
    result = (unsigned int*)caml_alloc_tuple(16);
    *(long long*)&v10 = *(double*)&ptr1;
    long long* ptr5 = caml_copy_double(*(double*)&v10, v11);
    caml_modify(result, (unsigned int)ptr5);
    *(long long*)&v10 = *(double*)&v2;
    long long* ptr6 = caml_copy_double(*(double*)&v10, v11);
    caml_modify(result + 1, (unsigned int)ptr6);
    *(long long*)&v10 = *(double*)&v1;
    long long* ptr7 = caml_copy_double(*(double*)&v10, v11);
    caml_modify(result + 2, (unsigned int)ptr7);
    caml_modify(result + 3, (unsigned int)(v19 * 2 + 1));
    caml_modify(result + 4, (unsigned int)(v0 * 2 + 1));
    caml_modify(result + 5, (unsigned int)((char*)((int)ptr0 * 2) + 1));
    caml_modify(result + 6, (unsigned int)(v3 * 2 + 1));
    caml_modify(result + 7, (unsigned int)(v4 * 2 + 1));
    caml_modify(result + 8, (unsigned int)(v5 * 2 + 1));
    caml_modify(result + 9, (unsigned int)(v6 * 2 + 1));
    caml_modify(result + 10, (unsigned int)(v7 * 2 + 1));
    caml_modify(result + 11, (unsigned int)(v8 * 2 + 1));
    caml_modify(result + 12, (unsigned int)(v9 * 2 + 1));
    caml_modify(result + 13, (unsigned int)(v20 * 2 + 1));
    caml_modify(result + 14, (unsigned int)(v21 * 2 + 1));
    int v22 = caml_stack_usage();
    caml_modify(result + 15, (unsigned int)(v22 * 2 + 1));
    caml_local_roots = v12;
    return result;
}

int caml_ge_float(double* param0, double* param1) {
    char v0;
    v1[v2] = fucomip(*param1, *param0);
    return ((v0 ? -1: 0) & 0xfffffffe) + 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_get_exception_backtrace() {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    unsigned int v6 = caml_local_roots;
    unsigned int v7 = caml_local_roots;
    int result = 0;
    int* ptr1 = NULL;
    unsigned int v8 = 0;
    int v9 = 0;
    unsigned int v10 = v6;
    caml_local_roots = &v10;
    int v11 = 1;
    int v12 = 4;
    int* ptr2 = &result;
    int* ptr3 = &ptr1;
    int* ptr4 = &v8;
    int* ptr5 = &v9;
    ptr1 = caml_alloc(caml_backtrace_pos, 0);
    if(!(caml_backtrace_pos ? 0: 1) && caml_backtrace_pos < 0x80000000) {
        int v13 = 0;
        do {
            extract_location_info(v5, (int)&v3);
            if(v3) {
                v9 = caml_copy_string(ptr0);
                int v14 = caml_alloc_small(5, 0);
                v8 = (unsigned int)v14;
                *(int*)v14 = ((v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
                *(int*)(v8 + 4) = v9;
                *(int*)(v8 + 8) = v1 * 2 + 1;
                *(int*)(v8 + 12) = v4 * 2 + 1;
                *(int*)(v8 + 16) = v2 * 2 + 1;
            }
            else {
                int v15 = caml_alloc_small(1, 1);
                v8 = (unsigned int)v15;
                *(int*)v15 = ((v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
            }
            caml_modify(&ptr1[v13], v8);
            ++v13;
        }
        while(caml_backtrace_pos > v13);
    }
    int v16 = caml_alloc_small(1, 0);
    result = v16;
    *(int**)v16 = ptr1;
    caml_local_roots = v7;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
ssize_t caml_getblock(int* param0, int param1, ssize_t param2) {
    int v0;
    void* ptr0;
    int* ptr1 = param0;
    ssize_t v1 = param2;
    int v2 = ptr1[4];
    ssize_t result = (ssize_t)(ptr1[5] - v2);
    if(result >= v1) {
        ptr0 = (void*)v2;
        v0 = param1;
        →memmove();
        ptr1[4] += v1;
        result = v1;
    }
    else if(result > 0) {
        ptr0 = (void*)v2;
        v0 = param1;
        →memmove();
        ptr1[4] += result;
    }
    else {
        void* __buf = (void*)(ptr1 + 13);
        ssize_t v3 = caml_do_read(ptr1[0], __buf, (size_t)(ptr1[3] - (int)__buf));
        int v4 = ptr1[1];
        ptr1[1] += v3;
        ptr1[2] += (v3 >> 31) + (unsigned int)__carry__(v3, v4);
        ptr1[5] = (int)((int*)(v3 + (int)ptr1) + 13);
        result = v3 <= v1 ? v3: v1;
        →memmove();
        ptr1[4] = (int)((int*)((int)ptr1 + result) + 13);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_getword(int param0) {
    int v0;
    int v1 = param0;
    int v2 = param0;
    int v3 = caml_channel_binary_mode();
    if(!v3) {
        caml_failwith("input_binary_int: not a binary channel");
    }
    int result = 0;
    int v4 = 0;
    do {
        char* ptr0 = *(unsigned int*)(v1 + 16);
        if(*(unsigned int*)(v1 + 20) <= (unsigned int)ptr0) {
            int v5 = caml_refill(v1);
            v0 = (unsigned int)(unsigned char)v5;
        }
        else {
            v0 = (unsigned int)*ptr0;
            *(unsigned int*)(v1 + 16) = (int*)(ptr0 + 1);
        }
        result = result * 0x100 + v0;
        ++v4;
    }
    while(v4 != 4);
    return result;
}

void* caml_globalsym(char* __name) {
    return caml_dlsym(NULL, __name);
}

int caml_greaterequal(int param0, int param1) {
    int v0 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return ((v0 >> 31) & 0xfffffffe) + 3;
}

int caml_greaterthan(int param0, int param1) {
    int v0 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (v0 <= 0 ? 0: 1) * 2 + 1;
}

int caml_gt_float(double* param0, double* param1) {
    char v0;
    char v1;
    v2[v3] = fucomip(*param1, *param0);
    return (v1 || v0 ? 0: 1) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_hash_univ_param(int param0, int param1) {
    hash_univ_limit = (unsigned int)(param1 >> 1);
    hash_univ_count = (unsigned int)(param0 >> 1);
    hash_accu = 0;
    hash_aux();
    return (hash_accu & 0x3fffffff) * 2 + 1;
}

int caml_hash_variant(char* param0) {
    int result;
    char* ptr0 = param0;
    int v0 = 1;
    if(*ptr0) {
        do {
            result = (v0 >> 1) * 223 + (unsigned int)*ptr0;
            v0 = result * 2 + 1;
            ++ptr0;
        }
        while(*ptr0);
    }
    return result;
}

int caml_init_gc(int param0) {
    unsigned int v0;
    unsigned int v1 = norm_heapincr();
    int v2 = caml_page_table_initialize();
    if(v2) {
        /*NO_RETURN*/ caml_fatal_error("OCaml runtime error: cannot initialize page table\n");
    }
    int v3 = norm_minsize();
    caml_set_minor_heap_size(v3 * 4);
    unsigned int v4 = norm_heapincr();
    caml_major_heap_increment = v4 * 4;
    int v5 = norm_pfree();
    caml_percent_free = v5;
    norm_pmax();
    caml_percent_max = v0;
    caml_init_major_heap();
    caml_gc_message(32, "Initial minor heap size: %luk bytes\n", (int)(caml_minor_heap_size >>> 10));
    caml_gc_message(32, "Initial major heap size: %luk bytes\n", (int)(unsigned int)((v1 >>> 8) & 0x3fffff));
    caml_gc_message(32, "Initial space overhead: %lu%%\n", caml_percent_free);
    caml_gc_message(32, "Initial max overhead: %lu%%\n", caml_percent_max);
    caml_gc_message(32, "Initial heap increment: %luk bytes\n", (int)(caml_major_heap_increment >>> 10));
    return caml_gc_message(32, "Initial allocation policy: %d\n", caml_allocation_policy);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_init_major_heap() {
    __SyntheticTypeUnknownF v0;
    int v1 = clip_heap_chunk_size();
    caml_stat_heap_size = v1;
    caml_stat_top_heap_size = v1;
    int* ptr0 = caml_alloc_for_heap(v1);
    caml_heap_start = ptr0;
    if(!ptr0) {
        ptr0 = (int*)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial heap.\n");
    }
    ptr0[-1] = 0;
    caml_stat_heap_chunks = 1;
    int v2 = caml_heap_start;
    int v3 = caml_page_table_add(1, v2, (int)(caml_stat_heap_size + v2));
    if(v3) {
        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table.\n");
    }
    caml_fl_init_merge();
    caml_make_free_blocks(caml_heap_start, caml_stat_heap_size >>> 2, 1);
    caml_gc_phase = 2;
    gray_vals_size = 0x800;
    void* ptr1 = →malloc(0x2000);
    gray_vals = ptr1;
    if(!ptr1) {
        ptr1 = (void*)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the gray cache.\n");
    }
    gray_vals_cur = ptr1;
    int* result = (int*)(gray_vals_size * 4 + (int)ptr1);
    gray_vals_end = (int*)(gray_vals_size * 4 + (int)ptr1);
    heap_is_pure = 1;
    caml_allocated_words = 0;
    fldz();
    caml_extra_heap_resources = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_init_signals() {
    char v0;
    int v1 = &sig_alt_stack;
    int v2 = 0x2000;
    int v3 = 0;
    int v4 = &segv_handler;
    int v5 = 0x48000000;
    →sigemptyset(&v0);
    system_stack_top = &v4;
    int result = →sigaltstack(&v1, NULL);
    if(!result) {
        result = →sigaction(11, &v4, NULL);
    }
    return result;
}

int* caml_initialize(unsigned int* param0, int* param1) {
    unsigned int* ptr0 = param0;
    int* result = param1;
    *ptr0 = param1;
    if(!((unsigned char)result & 0x1) && caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
        result = (int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff);
        if((*(char*)((int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table) + (int)result) & 0x1)) {
            if(gvar_807EB48 >= gvar_807EB4C) {
                caml_realloc_ref_table((int*)&caml_ref_table);
            }
            result = (int*)&gvar_807EB48;
            unsigned int* ptr1 = gvar_807EB48;
            *ptr1 = ptr0;
            gvar_807EB48 = (int*)(ptr1 + 1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_input_scan_line(int* param0) {
    int* result;
    char v0;
    int* ptr0 = param0;
    int v1 = ptr0[4];
    int v2 = (int)(ptr0 + 13);
    int v3 = (int)(ptr0 + 13);
    do {
        int v4 = ptr0[5];
        if((unsigned int)v4 <= (unsigned int)v1) {
            int v5 = ptr0[4];
            if((unsigned int)(int)(ptr0 + 13) < (unsigned int)v5) {
                unsigned int v6 = (unsigned int)(v4 - v5);
                int v7 = v5;
                int v8 = v2;
                →memmove();
                int* ptr1 = (int*)(v3 - ptr0[4]);
                ptr0[4] = v3;
                ptr0[5] += (int)ptr1;
                v1 += (int)ptr1;
            }
            void* __buf = ptr0[5];
            int v9 = ptr0[3];
            if((unsigned int)v9 <= (unsigned int)__buf) {
                result = (int*)(ptr0[4] - (int)__buf);
            }
            else {
                ssize_t v10 = caml_do_read(ptr0[0], __buf, (size_t)(v9 - (int)__buf));
                if(!v10) {
                    result = (int*)(ptr0[4] - ptr0[5]);
                }
                else {
                    int v11 = ptr0[1];
                    ptr0[1] += v10;
                    ptr0[2] += (v10 >> 31) + (unsigned int)__carry__(v10, v11);
                    ptr0[5] += v10;
                    return result;
                }
            }
        }
        else {
            v0 = *(char*)v1;
            ++v1;
        }
        return result;
    }
    while(v0 != 10);
    return (int*)(v1 - ptr0[4]);
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
    int __ptr = caml_stat_alloc(v3);
    int v6 = caml_really_getblock((int*)param0, __ptr, v3);
    if(!v6) {
        caml_stat_free(__ptr);
        caml_failwith("input_value: truncated object");
    }
    intern_input = __ptr;
    intern_input_malloced = 1;
    intern_src = __ptr;
    intern_alloc(v0, (unsigned int)v4);
    intern_rec();
    intern_add_to_heap();
    caml_stat_free((int)intern_input);
    unsigned int v7 = intern_obj_table;
    if(v7) {
        caml_stat_free((int)v7);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_input_val_from_string(int param0, int param1) {
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int v4 = 0;
    int* ptr1 = &v1;
    caml_local_roots = &ptr1;
    int v5 = 1;
    int v6 = 1;
    int* ptr2 = &v4;
    char* ptr3 = (char*)(param0 + param1 + 8);
    intern_input_malloced = 0;
    unsigned int v7 = (unsigned int)((unsigned int)*(ptr3 + 1) * 0x10000 + (unsigned int)*(ptr3 + 2) * 0x100 + ((unsigned int)*ptr3 * 0x1000000 + (unsigned int)*(ptr3 + 3)));
    int v8 = (unsigned int)*(ptr3 + 4) * 0x1000000 + (unsigned int)*(ptr3 + 7);
    int v9 = (unsigned int)*(ptr3 + 6) * 0x100;
    intern_src = (int*)(ptr3 + 12);
    intern_alloc(v9, v7);
    intern_src = (unsigned int)(param0 + param1 + 20);
    intern_rec();
    intern_add_to_heap();
    unsigned int v10 = intern_obj_table;
    if(v10) {
        caml_stat_free((int)v10);
    }
    caml_local_roots = v0;
    return 0;
}

int caml_input_value(int param0) {
    int* ptr0;
    unsigned int v0 = caml_local_roots;
    int v1 = 1;
    int v2 = 1;
    int* ptr1 = &param0;
    int v3 = *(int*)(param0 + 4);
    caml_local_roots = &ptr0;
    unsigned int v4 = caml_channel_mutex_lock;
    if(v4) {
        v4(v3);
    }
    int result = caml_input_val(v3);
    unsigned int v5 = caml_channel_mutex_unlock;
    if(v5) {
        v5(v3);
    }
    caml_local_roots = v0;
    return result;
}

int caml_input_value_from_block(char* param0, unsigned int param1) {
    intern_input = param0;
    intern_input_malloced = 0;
    int v0 = (int)(param0 + 4);
    intern_src = (int)(param0 + 4);
    if((unsigned int)*(char*)(v0 - 3) * 0x10000 + (unsigned int)*(char*)(v0 - 2) * 0x100 + ((unsigned int)*param0 * 0x1000000 + (unsigned int)*(char*)(v0 - 1)) != -2070567234) {
        v0 = caml_failwith("input_value_from_block: bad object");
    }
    intern_src = (unsigned int)(v0 + 4);
    if((unsigned int)((unsigned int)*(char*)(v0 + 1) * 0x10000 + (unsigned int)*(char*)(v0 + 2) * 0x100 + ((unsigned int)*(char*)v0 * 0x1000000 + (unsigned int)*(char*)(v0 + 3)) + 20) > param1) {
        caml_failwith("input_value_from_block: bad block length");
    }
    return input_val_from_block();
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_input_value_from_malloc(unsigned int param0, int param1) {
    intern_input = param0;
    char* ptr0 = (char*)(param0 + param1);
    intern_input_malloced = 1;
    int v0 = (int)(ptr0 + 4);
    intern_src = (int)(ptr0 + 4);
    if((unsigned int)*(char*)(v0 - 3) * 0x10000 + (unsigned int)*(char*)(v0 - 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(char*)(v0 - 1)) != -2070567234) {
        v0 = caml_failwith("input_value_from_malloc: bad object");
    }
    intern_src = (unsigned int)(v0 + 4);
    int result = input_val_from_block();
    caml_stat_free((int)intern_input);
    return result;
}

int caml_input_value_from_string(int param0, int param1) {
    return caml_input_val_from_string(param0, param1 >> 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_install_signal_handler(int param0, unsigned int* param1) {
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    int* ptr2 = &v1;
    caml_local_roots = &ptr2;
    int v4 = 1;
    int v5 = 1;
    int* ptr3 = &result;
    unsigned int v6 = caml_convert_signal_number((unsigned int)(param0 >> 1));
    unsigned int v7 = v6;
    if(v6 > 64) {
        v6 = (unsigned int)caml_invalid_argument("Sys.signal: unavailable signal");
    }
    int v8 = caml_set_signal_action((int)v6, (unsigned int)(int*)((char*)param1 - 1) > 2 ? 2: *(int*)((int)(int*)((int)param1 * 4) + (int)&gvar_8070E50));
    if(v8 == 1) {
        result = 3;
    }
    else if(v8 == 2) {
        int v9 = caml_alloc_small(1, 0);
        result = v9;
        *(int*)v9 = *(int*)(v7 * 4 + caml_signal_handlers);
    }
    else if(!v8) {
        result = 1;
    }
    else {
        caml_sys_error(1);
    }
    if(!((unsigned char)param1 & 0x1)) {
        if(!caml_signal_handlers) {
            int* ptr4 = caml_alloc(65, 0);
            caml_signal_handlers = ptr4;
            caml_register_global_root(&caml_signal_handlers);
        }
        caml_modify((unsigned int*)(v7 * 4 + caml_signal_handlers), param1[0]);
    }
    caml_process_pending_signals();
    caml_local_roots = v0;
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
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    return ((v1 >= v0 ? 0: 1) - (v1 > v0 ? 1: 0)) * 2 + 1;
}

int caml_int32_div(int param0, int param1) {
    int result = param0;
    int v0 = *(int*)(result + 4);
    int v1 = *(int*)(param1 + 4);
    if(!v1) {
        result = caml_raise_zero_divide();
    }
    if(v0 != 0x80000000 || v1 != -1) {
        result = caml_copy_int32((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) / v1);
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
    char v1;
    int __ptr = parse_format(&v0, &v1);
    →sprintf();
    int result = caml_copy_string((char*)__ptr);
    if(__ptr != &v0) {
        caml_stat_free(__ptr);
    }
    return result;
}

int caml_int32_mod(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    if(!v1) {
        caml_raise_zero_divide();
    }
    return v0 == 0x80000000 && v1 == -1 ? caml_copy_int32(0): caml_copy_int32((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) % v1);
}

int caml_int32_mul(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) * *(int*)(param1 + 4));
}

int caml_int32_neg(int param0) {
    return caml_copy_int32(0 - *(int*)(param0 + 4));
}

int caml_int32_of_float(double* param0) {
    short v0;
    int v1;
    v0 = fnstcw(v0);
    short v2 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    return caml_copy_int32(v1);
}

int caml_int32_of_int(int param0) {
    return caml_copy_int32(param0 >> 1);
}

int caml_int32_of_string(int param0) {
    int v0 = parse_intnat(param0, 32);
    return caml_copy_int32(v0);
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
    return caml_copy_int32(*(int*)(param0 + 4) - *(int*)(param1 + 4));
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
    int v0 = *(int*)(param1 + 4);
    int v1 = *(int*)(param0 + 4);
    return caml_copy_int64(v1 + v0, (unsigned int)__carry__(v1, v0) + *(int*)(param0 + 8) + *(int*)(param1 + 8));
}

int caml_int64_and(int param0, int param1) {
    return caml_copy_int64(*(int*)(param0 + 4) & *(int*)(param1 + 4), *(int*)(param0 + 8) & *(int*)(param1 + 8));
}

int caml_int64_bits_of_float(int* param0) {
    return caml_copy_int64(param0[0], param0[1]);
}

int caml_int64_compare(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    int v1 = *(int*)(param0 + 8);
    unsigned int v2 = *(unsigned int*)(param1 + 4);
    int v3 = *(int*)(param1 + 8);
    int v4 = 1;
    char v5 = v3 > v1;
    char v6 = (((v1 - v3) ^ v1) & (v3 ^ v1)) < 0;
    if((v3 == v1 || v5 != v6) && (v5 != v6 || v0 <= v2)) {
        v4 = 0;
    }
    int v7 = 1;
    char v8 = v3 > v1;
    char v9 = (((v1 - v3) ^ v1) & (v3 ^ v1)) < 0;
    if(v8 == v9 && ((v3 != v1 && v8 == v9) || v0 >= v2)) {
        v7 = 0;
    }
    return (v4 - v7) * 2 + 1;
}

int caml_int64_div(int param0, int param1) {
    int v0;
    int result = param0;
    unsigned int v1 = *(unsigned int*)(result + 4);
    unsigned int v2 = *(unsigned int*)(result + 8);
    unsigned int v3 = *(unsigned int*)(param1 + 4);
    unsigned int v4 = *(unsigned int*)(param1 + 8);
    if(!(v3 | v4)) {
        result = caml_raise_zero_divide();
    }
    if(((v2 + 0x80000000) | v1) || (v3 & v4) != -1) {
        unsigned int v5 = __divdi3(v1, v2, v3, v4);
        result = caml_copy_int64((int)v5, v0);
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
    char v1;
    int __ptr = parse_format(&v0, &v1);
    →sprintf();
    int result = caml_copy_string((char*)__ptr);
    if(__ptr != &v0) {
        caml_stat_free(__ptr);
    }
    return result;
}

int caml_int64_mod(int param0, int param1) {
    int result;
    int v0;
    unsigned int v1 = *(unsigned int*)(param0 + 4);
    unsigned int v2 = *(unsigned int*)(param0 + 8);
    unsigned int v3 = *(unsigned int*)(param1 + 4);
    int v4 = *(int*)(param1 + 8);
    if(!(v4 | v3)) {
        v4 = caml_raise_zero_divide();
    }
    if(!((v2 + 0x80000000) | v1) && (v4 & v3) == -1) {
        result = caml_copy_int64(0, 0);
    }
    else {
        unsigned int v5 = __moddi3(v1, v2, v3, (unsigned int)v4);
        result = caml_copy_int64((int)v5, v0);
    }
    return result;
}

int caml_int64_mul(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    return caml_copy_int64(*(int*)(param1 + 4) * v0, *(int*)(param0 + 4) * *(int*)(param1 + 8) + *(int*)(param0 + 8) * *(int*)(param1 + 4) + (unsigned int)(((unsigned long long)*(int*)(param1 + 4) * (unsigned long long)v0) >>> 32L));
}

int caml_int64_neg(int param0) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    return caml_copy_int64(0 - v0, 0 - ((unsigned int)(v0 > 0) + *(int*)(param0 + 8)));
}

int caml_int64_of_float(double* param0) {
    short v0;
    int v1;
    int v2;
    v0 = fnstcw(v0);
    short v3 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
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

int caml_int64_of_string(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    char* ptr0 = parse_sign_and_base(&v0, &v1);
    unsigned int v3 = v1;
    unsigned int v4 = v1;
    unsigned int v5 = v1 >> 31;
    int v6 = __udivdi3(0xffffffff, 0xffffffff, v1, v1 >> 31);
    unsigned int v7 = v2;
    int v8 = parse_digit();
    int v9 = v8;
    if(v8 < 0 || v8 >= (int)v1) {
        v8 = caml_failwith("int_of_string");
    }
    int v10 = v8 >> 31;
    char* ptr1 = ptr0 + 1;
    while(1) {
        if(*ptr1 != 95) {
            int v11 = parse_digit();
            int v12 = v11;
            if(v11 >= 0 && v11 < (int)v3) {
                if(v2 <= (unsigned int)v10 && (v2 != v10 || (unsigned int)v9 > (unsigned int)v6)) {
                    caml_failwith("int_of_string");
                }
                int v13 = (v1 >> 31) * v9 + v10 * v1;
                int v14 = v9 * v1;
                int v15 = (unsigned int)(((unsigned long long)v9 * (unsigned long long)v1) >>> 32L) + v13;
                int v16 = v12;
                unsigned int v17 = (unsigned int)(v12 >> 31);
                v9 = v14 + v12;
                v10 = (unsigned int)(v12 >> 31) + (unsigned int)__carry__(v14, v12) + v15;
                if((unsigned int)(v12 >> 31) >= (unsigned int)v10 && ((unsigned int)v10 < v17 || (unsigned int)v9 < (unsigned int)v12)) {
                    caml_failwith("int_of_string");
                }
                goto loc_8066736;
            }
            else {
                v4 = (unsigned int)v9;
                v5 = (unsigned int)v10;
                int v18 = caml_string_length(param0);
                if(v18 + param0 != ptr1) {
                    caml_failwith("int_of_string");
                }
                if(v1 == 10) {
                    unsigned int v19 = 0xffffffff;
                    unsigned int v20 = 0x7fffffff;
                    if(v0 < 0) {
                        v19 = 0;
                        v20 = 0x80000000;
                    }
                    char v21 = v20 < v5;
                    if((v21 || v20 == v5) && (v21 || v19 < v4)) {
                        caml_failwith("int_of_string");
                    }
                }
                if(v0 < 0) {
                    v9 = 0 - v4;
                    v10 = 0 - ((unsigned int)(v4 > 0) + v5);
                }
                return caml_copy_int64(v9, v10);
            }
        }
        else {
        loc_8066736:
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
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    return caml_copy_int64((int)(v0 - *(int*)(param1 + 4)), *(int*)(param0 + 8) - ((unsigned int)(*(unsigned int*)(param1 + 4) > v0) + *(int*)(param1 + 8)));
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

int caml_int_compare(int param0, int param1) {
    return ((param0 <= param1 ? 0: 1) - (param0 < param1 ? 1: 0)) * 2 + 1;
}

int caml_int_of_float(double* param0) {
    short v0;
    int v1;
    v0 = fnstcw(v0);
    short v2 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    return v1 * 2 + 1;
}

int caml_int_of_string(int param0) {
    int v0 = parse_intnat(param0, 31);
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_invalid_argument(int param0) {
    /*BAD_CALL!*/ caml_raise_with_string(&caml_exn_Invalid_argument, param0);
}

int caml_is_printable(int param0) {
    if(!locale_is_set.2848) {
        →setlocale(0, (char*)&gvar_80719A8);
        locale_is_set.2848 = 1;
    }
    unsigned short** ptr0 = →__ctype_b_loc();
    return (((unsigned int)((unsigned int)ptr0[0][param0 >> 1] & 0x4000) < 1 ? -1: 0) & 0xfffffffe) + 3;
}

int* caml_iterate_global_roots(int param0, int param1) {
    int* result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = *(unsigned int*)(param1 + 4);
    if(ptr0) {
        do {
            result = *ptr0;
            int* ptr1 = *ptr0;
            v1(*result, (int)result);
            ptr0 = *(ptr0 + 1);
        }
        while(ptr0);
    }
    return result;
}

long long* caml_ldexp_float(double* param0, int param1) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →ldexp(*param0, param1 >> 1);
    return caml_copy_double(v3, v1);
}

int caml_le_float(double* param0, double* param1) {
    char v0;
    v1[v2] = fucomip(*param1, *param0);
    return ((v0 ? -1: 0) & 0xfffffffe) + 3;
}

int caml_leave_blocking_section() {
    caml_leave_blocking_section_hook{caml_leave_blocking_section_default}();
    return caml_process_pending_signals();
}

int caml_lessequal(int param0, int param1) {
    int v0;
    int v1 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return ((v1 == 0x80000000 ? 0: 1) & ((unsigned int)(v1 <= 0 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8))) * 2 + 1;
}

int caml_lessthan(int param0, int param1) {
    int v0 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (((unsigned int)(v0 + 0x7fffffff) < 0x7fffffff ? -1: 0) & 0x2) + 1;
}

int caml_log10_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →log10(*param0);
}

int caml_log1p(double __x, int param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    int result;
    v0[v1] = →log1p(__x);
    return result;
}

long long* caml_log1p_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF __x = *param0;
    caml_log1p(__x, v0);
    return caml_copy_double(__x, v0);
}

int caml_log_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →log(*param0);
}

int caml_lt_float(double* param0, double* param1) {
    char v0;
    char v1;
    v2[v3] = fucomip(*param1, *param0);
    return (v1 || v0 ? 0: 1) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_main(unsigned int param0) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned int v5;
    unsigned int v6;
    int v7;
    int v8;
    int v9;
    char* ptr0;
    int v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int* ptr1;
    int* ptr2;
    int v19;
    int* ptr3 = ptr1;
    int* ptr4 = ptr2;
    int v20 = v19;
    int v21 = v17;
    caml_init_ieee_floats();
    caml_init_custom_operations();
    caml_top_of_stack = (int*)((char*)&v4 + 3);
    void* ptr5 = "OCAMLRUNPARAM";
    →getenv();
    char* ptr6 = ptr0;
    if(!ptr0) {
        ptr5 = (void*)0x8070CDF;
        →getenv();
        ptr6 = ptr0;
        if(ptr0) {
            goto loc_80615A3;
        }
    }
    else {
    loc_80615A3:
        while(1) {
            v19 = &gvar_8070D28;
            ptr2 = &v11;
            do {
                int v22 = (unsigned int)*ptr6;
                if(!(unsigned char)v22) {
                    break loc_80615A3;
                }
                else {
                    ++ptr6;
                    v18 = v22 - 79;
                }
            }
            while((unsigned char)v18 > 39);
            /*BAD_CALL!*/ *(int*)((v18 & 0xFF) * 4 + (int)&gvar_8070D28){sub_8061557}((int)v5, (int)v12, (int)v6, (int)v13, v7, v10, v2, v14, v8, v11, v4, v15, v9, v16, v21, v20, (int)ptr4, (int)ptr3, v3);
        }
    }
    v13 = max_percent_free_init;
    v6 = percent_free_init;
    v12 = heap_chunk_init;
    v5 = heap_size_init;
    caml_init_gc(minor_heap_init);
    int v23 = 0;
    do {
        *(int*)(v23 * 4 + (int)&caml_atom_table) = v23;
        ++v23;
    }
    while(v23 != 0x100);
    int v24 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
    if(!v24) {
        v1 = caml_data_segments;
        ptr6 = NULL;
        v19 = &gvar_80728E4;
        ptr2 = (int*)&caml_data_segments;
        if(v1) {
            goto loc_8061656;
        }
    }
    else {
        v1 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
    loc_8061656:
        do {
            int v25 = caml_page_table_add(4, v1, *(int*)((int)(int*)((int)ptr6 * 8) + v19));
            if(v25) {
                /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            }
            ++ptr6;
            v1 = *(int*)((int)(int*)((int)ptr6 * 8) + (int)ptr2);
        }
        while(v1);
    }
    caml_code_area_start = caml_code_segments;
    unsigned int v26 = gvar_8072960;
    caml_code_area_end = v26;
    unsigned int v27 = gvar_8072964;
    if(v27) {
        unsigned int v28 = caml_code_area_start;
        int v29 = 1;
        do {
            v28 = v27 >= v28 ? v28: v27;
            unsigned int v30 = *(unsigned int*)(v29 * 8 + (int)&gvar_8072960);
            v26 = v30 > v26 ? v30: v26;
            ++v29;
            v27 = *(unsigned int*)(v29 * 8 + (int)&caml_code_segments);
        }
        while(v27);
        caml_code_area_start = v28;
        caml_code_area_end = v26;
    }
    caml_init_signals();
    caml_debugger_init();
    char* ptr7 = *(char**)param0;
    char* __src1 = ptr7 ? ptr7: (char*)&gvar_80719A8;
    int v31 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
    int v32 = &proc_self_exe.2949;
    if(v31) {
        v32 = caml_search_exe_in_path(__src1);
    }
    caml_sys_init((unsigned int)v32, param0);
    int result = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
    if(result) {
        v0 = caml_termination_hook;
        if(v0) {
            v0(0);
        }
    }
    else {
        v0 = (unsigned int)caml_start_program();
        if((v0 & 0x3) == 2) {
            /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
        }
    }
    return result;
}

int caml_major_collection_slice(int param0) {
    int result;
    char v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    __SyntheticTypeUnknownF v4;
    short v5;
    if(caml_gc_phase == 2) {
        start_cycle();
    }
    int v6 = caml_allocated_words;
    int v7 = caml_percent_free;
    int v8 = v7 + 100;
    int v9 = 0;
    v1[v3 - 1] = (double)*(long long*)&v8;
    v8 = v7;
    v1[v3 - 2] = (double)*(long long*)&v8;
    v8 = v6;
    v1[v3 - 3] = (double)*(long long*)&v8;
    v1[v3 - 3] *= 3.0;
    v1[v3 - 3] *= v1[v3 - 1];
    v8 = (int)(caml_stat_heap_size >>> 2);
    v1[v3 - 4] = (double)*(long long*)&v8;
    v1[v3 - 3] /= v1[v3 - 4];
    v1[v3 - 3] /= v1[v3 - 2];
    v1[v3 - 3] *= 0.5;
    double v10 = v1[v3 - 3];
    int v11 = caml_dependent_size;
    if(!v11) {
        v0 = v3;
        fldz();
    }
    else {
        v8 = caml_dependent_allocated;
        v9 = 0;
        v1[v3 - 3] = (double)*(long long*)&v8;
        v1[v3 - 1] *= v1[v3 - 3];
        v8 = v11;
        v1[v3 - 3] = (double)*(long long*)&v8;
        v1[v3 - 1] /= v1[v3 - 3];
        v1[v3 - 1] /= v1[v3 - 2];
        v0 = v3 - 1;
    }
    v1[v0 - 1] = v10;
    v1[v3] = fucomi(v1[v0 - 1], v1[v0]);
    v1[v3] = fcmovbe(v1[v0 - 1], v1[v0]);
    v1[v0] = v1[v0 - 1];
    v1[v0 - 1] = caml_extra_heap_resources;
    v1[v3] = fucomi(v1[v0 - 1], v1[v0]);
    v1[v3] = fcmovbe(v1[v0 - 1], v1[v0]);
    v1[v0] = v1[v0 - 1];
    v10 = v1[v0];
    caml_gc_message(64, "allocated_words = %lu\n", v6);
    v5 = fnstcw(v5);
    short v12 = fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
    fistp();
    v5 = fldcw(v5);
    caml_gc_message(64, "extra_heap_resources = %luu\n", v8);
    v5 = fnstcw(v5);
    v12 = fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
    fistp();
    v5 = fldcw(v5);
    caml_gc_message(64, "amount of work to do = %luu\n", v8);
    if(!caml_gc_phase) {
        v5 = fnstcw(v5);
        v12 = fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
        fistp();
        v5 = fldcw(v5);
        result = v2;
    }
    else {
        v5 = fnstcw(v5);
        v12 = fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
        fistp();
        v5 = fldcw(v5);
        result = v2;
    }
    caml_gc_message(64, "ordered work = %ld words\n", param0);
    caml_gc_message(64, "computed work = %ld words\n", result);
    if(!caml_gc_phase) {
        mark_slice();
        caml_gc_message(2, (char*)&gvar_8071025, 0);
    }
    else {
        sweep_slice();
        caml_gc_message(2, (char*)&gvar_8071027, 0);
    }
    if(caml_gc_phase == 2) {
        caml_compact_heap_maybe();
    }
    v8 = caml_allocated_words;
    v9 = 0;
    caml_stat_major_words += (double)*(long long*)&v8;
    caml_allocated_words = 0;
    caml_dependent_allocated = 0;
    fldz();
    caml_extra_heap_resources = v4;
    return result;
}

int caml_make_array(int param0) {
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int v4 = 0;
    int v5 = 0;
    int* ptr1 = &v1;
    caml_local_roots = &ptr1;
    int v6 = 1;
    int v7 = 2;
    int* ptr2 = &v4;
    int* ptr3 = &v5;
    int result = param0;
    unsigned int v8 = (unsigned int)(*(int*)(result - 4) >>> 10);
    if(!v8) {
        caml_local_roots = v0;
    }
    else {
        int v9 = *(int*)result;
        if(!((unsigned char)v9 & 0x1)) {
            v4 = v9;
            if(!(*(char*)(((v9 >>> 12) & 0x7ff) + *(int*)((v9 >>> 23) * 4 + (int)&caml_page_table)) & 0x7) || *(char*)(v9 - 4) != 253) {
                caml_local_roots = v0;
                return result;
            }
            v5 = caml_alloc_small((int)(v8 * 2), 254);
            unsigned int v10 = 0;
            do {
                *(long long*)(v10 * 8 + v5) = **(unsigned int*)(v10 * 4 + param0);
                ++v10;
            }
            while(v10 < v8);
            caml_local_roots = v0;
            result = v5;
        }
        else {
            caml_local_roots = v0;
        }
    }
    return result;
}

int* caml_make_free_blocks(int* param0, unsigned int param1, int param2) {
    int* result;
    int* ptr0 = param0;
    unsigned int v0 = param1;
    if(v0) {
        while(1) {
            unsigned int v1 = v0 <= 0x400000 ? v0: 0x400000;
            *ptr0 = (v1 - 1) * 0x400;
            if(param2) {
                result = caml_fl_merge_block((unsigned int*)(ptr0 + 1));
            }
            v0 -= v1;
            if(!v0) {
                return result;
            }
            ptr0 = (int*)(v1 * 4 + (int)ptr0);
        }
    }
    return result;
}

int caml_make_vect(int param0, int* param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    int result = 0;
    int* ptr0 = &v0;
    caml_local_roots = &ptr0;
    int v2 = 1;
    int v3 = 1;
    int* ptr1 = &result;
    int v4 = param0 >> 1;
    if(!v4) {
        result = &gvar_80821C4;
    }
    else {
        int v5 = 1;
        int v6 = 2;
        int* ptr2 = &param0;
        int* ptr3 = &param1;
        int v7 = (int)param1;
        int v8 = v7 & 0x1;
        if(!v8) {
            int v9 = v7;
            if(!(*(char*)(((v7 >>> 12) & 0x7ff) + *(int*)((v7 >>> 23) * 4 + (int)&caml_page_table)) & 0x7) || *(char*)(v7 - 4) != 253) {
                goto loc_8067C4F;
            }
            else {
                *(long long*)&v9 = *(double*)v7;
                int v10 = v4 * 2;
                if((unsigned int)v10 > 0x3fffff) {
                    v10 = caml_invalid_argument("Array.make");
                }
                result = (int)caml_alloc((unsigned int)v10, 254);
                unsigned int v11 = 0;
                do {
                    *(long long*)(v11 * 8 + result) = *(double*)&v9;
                    ++v11;
                }
                while(v11 < (unsigned int)v4);
            }
        }
        else {
        loc_8067C4F:
            if((unsigned int)v4 > 0x3fffff) {
                v7 = caml_invalid_argument("Array.make");
            }
            if((unsigned int)v4 <= 0xff) {
                result = caml_alloc_small(v4, 0);
                int v12 = 0;
                do {
                    *(int**)(v12 + result) = param1;
                    v12 += 4;
                }
                while(v4 * 4 != v12);
            }
            else {
                if(!v8 && caml_young_end > (unsigned int)v7 && caml_young_start < (unsigned int)v7) {
                    caml_minor_collection();
                    result = (int)caml_alloc_shr((unsigned int)v4, 0);
                    int v13 = 0;
                    do {
                        *(int**)(v13 + result) = param1;
                        v13 += 4;
                    }
                    while(v4 * 4 != v13);
                }
                else {
                    result = (int)caml_alloc_shr((unsigned int)v4, 0);
                    unsigned int v14 = 0;
                    do {
                        caml_initialize((unsigned int*)(v14 * 4 + result), param1);
                        ++v14;
                    }
                    while(v14 < (unsigned int)v4);
                }
                result = caml_check_urgent_gc(result);
            }
        }
    }
    caml_local_roots = v1;
    return result;
}

int caml_marshal_data_size(int param0, int param1) {
    char* ptr0 = (char*)((param1 >> 1) + param0);
    intern_input_malloced = 0;
    int v0 = (int)(ptr0 + 4);
    intern_src = (int)(ptr0 + 4);
    if((unsigned int)*(char*)(v0 - 3) * 0x10000 + (unsigned int)*(char*)(v0 - 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(char*)(v0 - 1)) != -2070567234) {
        v0 = caml_failwith("Marshal.data_size: bad object");
    }
    intern_src = (unsigned int)(v0 + 4);
    return ((unsigned int)*(char*)(v0 + 1) * 0x10000 + (unsigned int)*(char*)(v0 + 2) * 0x100 + ((unsigned int)*(char*)v0 * 0x1000000 + (unsigned int)*(char*)(v0 + 3))) * 2 + 1;
}

int caml_md5_chan(int param0, int param1) {
    char v0;
    char v1;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    unsigned int v4 = v2;
    caml_local_roots = &v4;
    int v5 = 1;
    int v6 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v7 = caml_channel_mutex_lock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_MD5Init(&v0);
    ssize_t v8 = (ssize_t)(param1 >> 1);
    if(v8 > 0) {
        do {
            ssize_t v9 = caml_getblock(ptr2, &v1, (unsigned int)v8 <= 0x1000 ? v8: 0x1000);
            ssize_t v10 = v9;
            if(!v9) {
                v9 = caml_raise_end_of_file();
            }
            caml_MD5Update((int)&v0, (void*)&v1, (size_t)v9);
            v8 -= v10;
        }
        while(v8 > 0);
    }
    else if(v8 < 0) {
        for(ssize_t i = caml_getblock(ptr2, &v1, 0x1000); i; i = caml_getblock(ptr2, &v1, 0x1000)) {
            caml_MD5Update((int)&v0, (void*)&v1, (size_t)i);
        }
    }
    int result = caml_alloc_string(16);
    caml_MD5Final((int*)result, &v0);
    unsigned int v11 = caml_channel_mutex_unlock;
    if(v11) {
        v11((int)ptr2);
    }
    caml_local_roots = v3;
    return result;
}

int caml_md5_string(int param0, int param1, int param2) {
    char v0;
    caml_MD5Init(&v0);
    caml_MD5Update((int)&v0, (void*)((param1 >> 1) + param0), (size_t)(param2 >> 1));
    int result = caml_alloc_string(16);
    caml_MD5Final((int*)result, &v0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_minor_collection() {
    unsigned int v0 = caml_allocated_words;
    caml_empty_minor_heap();
    unsigned int v1 = caml_allocated_words - v0;
    int v2 = 0;
    caml_stat_promoted_words += (double)*(long long*)&v1;
    ++caml_stat_minor_collections;
    caml_major_collection_slice(0);
    caml_force_major_slice = 0;
    caml_final_do_calls();
    return caml_empty_minor_heap();
}

int caml_ml_channel_size(int param0) {
    int* ptr0;
    int v0;
    int v1 = caml_channel_size(*(int**)(param0 + 4));
    if(v0 >= 0 && (v0 > 0 || (unsigned int)v1 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v1 * 2 + 1;
}

int caml_ml_channel_size_64(int param0) {
    int v0;
    int v1 = caml_channel_size(*(int**)(param0 + 4));
    return caml_copy_int64(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ml_close_channel(int param0) {
    int* ptr0 = *(unsigned int*)(param0 + 4);
    int __fd = *ptr0;
    if(__fd != -1) {
        *ptr0 = -1;
        int v0 = *(ptr0 + 3);
        *(ptr0 + 5) = *(ptr0 + 3);
        *(ptr0 + 4) = v0;
        caml_enter_blocking_section();
        int v1 = →close(__fd);
        caml_leave_blocking_section();
        if(v1 == -1) {
            caml_sys_error(1);
        }
    }
    else {
        int v2 = *(ptr0 + 3);
        *(ptr0 + 5) = *(ptr0 + 3);
        *(ptr0 + 4) = v2;
    }
    return 1;
}

int caml_ml_flush(int param0) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int v4 = *(int*)(param0 + 4);
    if(*(int*)v4 != -1) {
        unsigned int v5 = caml_channel_mutex_lock;
        if(v5) {
            v5(v4);
        }
        caml_flush(v4);
        unsigned int v6 = caml_channel_mutex_unlock;
        if(v6) {
            v6(v4);
        }
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_flush_partial(int param0) {
    int result;
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int v4 = *(int*)(param0 + 4);
    if(*(int*)v4 == -1) {
        caml_local_roots = v1;
        result = 3;
    }
    else {
        unsigned int v5 = caml_channel_mutex_lock;
        if(v5) {
            v5(v4);
        }
        int v6 = caml_flush_partial(v4);
        unsigned int v7 = caml_channel_mutex_unlock;
        if(v7) {
            v7(v4);
        }
        caml_local_roots = v1;
        result = (((unsigned int)v6 < 1 ? -1: 0) & 0xfffffffe) + 3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ml_input(int param0, int param1, int param2, int param3) {
    int v0;
    void* ptr0;
    unsigned int v1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v1;
    int v3 = 1;
    int v4 = 4;
    int* ptr1 = &param0;
    int* ptr2 = &param1;
    int* ptr3 = &param2;
    int* ptr4 = &param3;
    int* ptr5 = *(int**)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5((int)ptr5);
    }
    int v6 = param2 >> 1;
    ssize_t v7 = (ssize_t)(param3 >> 1);
    int v8 = ptr5[4];
    ssize_t v9 = (ssize_t)(ptr5[5] - v8);
    if(v9 >= v7) {
        ssize_t v10 = v7;
        ptr0 = (void*)v8;
        v0 = v6 + param1;
        →memmove();
        ssize_t v11 = v7;
        ptr5[4] += v11;
        v9 = v11;
    }
    else if(v9 > 0) {
        ptr0 = (void*)v8;
        v0 = v6 + param1;
        →memmove();
        ptr5[4] += v9;
    }
    else {
        void* ptr6 = (void*)(ptr5 + 13);
        ssize_t v12 = caml_do_read(ptr5[0], (void*)(ptr5 + 13), (size_t)(ptr5[3] - (int)(void*)(ptr5 + 13)));
        int v13 = ptr5[1];
        ptr5[1] += v12;
        ptr5[2] += (v12 >> 31) + (unsigned int)__carry__(v12, v13);
        ptr5[5] = (int)((int*)(v12 + (int)ptr5) + 13);
        v9 = v12 <= v7 ? v12: v7;
        ptr0 = ptr6;
        →memmove();
        ptr5[4] = (int)((int*)((int)ptr5 + v9) + 13);
    }
    unsigned int v14 = caml_channel_mutex_unlock;
    if(v14) {
        v14((int)ptr5);
    }
    caml_local_roots = v2;
    return v9 * 2 + 1;
}

int caml_ml_input_char(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v1;
    int v3 = 1;
    int v4 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5((int)ptr1);
    }
    int v6 = ptr1[4];
    if((unsigned int)ptr1[5] <= (unsigned int)v6) {
        v0 = caml_refill(ptr1);
    }
    else {
        v0 = (int)*(char*)v6;
        ptr1[4] = v6 + 1;
    }
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr1);
    }
    caml_local_roots = v2;
    return (unsigned int)(unsigned char)v0 * 2 + 1;
}

int caml_ml_input_int(int param0) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    int v6 = caml_getword(v4);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7(v4);
    }
    caml_local_roots = v1;
    return v6 * 2 + 1;
}

int* caml_ml_input_scan_line(int param0) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    unsigned int v4 = caml_channel_mutex_lock;
    if(v4) {
        v4((int)ptr1);
    }
    int* ptr2 = caml_input_scan_line(ptr1);
    unsigned int v5 = caml_channel_mutex_unlock;
    if(v5) {
        v5((int)ptr1);
    }
    caml_local_roots = v1;
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

int caml_ml_out_channels_list() {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int result = 1;
    int v2 = caml_all_opened_channels;
    if(v2) {
        int v3 = 0;
        int v4 = 0;
        int v5 = 1;
        int v6 = 3;
        int* ptr0 = &result;
        int* ptr1 = &v3;
        int* ptr2 = &v4;
        do {
            if(!*(int*)(v2 + 20)) {
                v4 = caml_alloc_channel(v2);
                v3 = result;
                int v7 = caml_alloc_small(2, 0);
                result = v7;
                *(int*)v7 = v4;
                *(int*)(result + 4) = v3;
            }
            v2 = *(int*)(v2 + 28);
        }
        while(v2);
    }
    caml_local_roots = v1;
    return result;
}

int caml_ml_output(int param0, int param1, int param2, int param3) {
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    unsigned int v2 = v0;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 4;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = &param3;
    int v5 = *(int*)(param0 + 4);
    int v6 = param3 >> 1;
    unsigned int v7 = caml_channel_mutex_lock;
    if(v7) {
        v7(v5);
    }
    if(v6 > 0) {
        int v8 = param2 >> 1;
        do {
            int v9 = caml_putblock(v5, v8 + param1, v6);
            v8 += v9;
            v6 -= v9;
        }
        while(v6 > 0);
    }
    unsigned int v10 = caml_channel_mutex_unlock;
    if(v10) {
        v10(v5);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_output_char(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    if(*(unsigned int*)(v4 + 16) >= *(unsigned int*)(v4 + 12)) {
        caml_flush_partial(v4);
    }
    char* ptr2 = *(unsigned int*)(v4 + 16);
    *ptr2 = (unsigned char)(param1 >>> 1);
    *(unsigned int*)(v4 + 16) = (int*)(ptr2 + 1);
    unsigned int v6 = caml_channel_mutex_unlock;
    if(v6) {
        v6(v4);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_output_int(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    caml_putword(v4, param1 >> 1);
    unsigned int v6 = caml_channel_mutex_unlock;
    if(v6) {
        v6(v4);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_output_partial(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 4;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = &param3;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    int v6 = caml_putblock(v4, (param2 >> 1) + param1, param3 >> 1);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7(v4);
    }
    caml_local_roots = v1;
    return v6 * 2 + 1;
}

int caml_ml_pos_in(int param0) {
    int* ptr0;
    int v0;
    unsigned int v1 = caml_pos_in(*(int*)(param0 + 4));
    if(v0 >= 0 && (v0 > 0 || v1 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v1 * 2 + 1;
}

int caml_ml_pos_in_64(int param0) {
    int v0;
    unsigned int v1 = caml_pos_in(*(int*)(param0 + 4));
    return caml_copy_int64((int)v1, v0);
}

int caml_ml_pos_out(int param0) {
    int* ptr0;
    int v0;
    int v1 = caml_pos_out(*(int*)(param0 + 4));
    if(v0 >= 0 && (v0 > 0 || (unsigned int)v1 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v1 * 2 + 1;
}

int caml_ml_pos_out_64(int param0) {
    int v0;
    int v1 = caml_pos_out(*(int*)(param0 + 4));
    return caml_copy_int64(v1, v0);
}

int caml_ml_seek_in(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v4 = caml_channel_mutex_lock;
    if(v4) {
        v4((int)ptr2);
    }
    caml_seek_in(ptr2, param1 >> 1, (param1 >> 1) >> 31);
    unsigned int v5 = caml_channel_mutex_unlock;
    if(v5) {
        v5((int)ptr2);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_seek_in_64(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v4 = caml_channel_mutex_lock;
    if(v4) {
        v4((int)ptr2);
    }
    caml_seek_in(ptr2, *(int*)(param1 + 4), *(int*)(param1 + 8));
    unsigned int v5 = caml_channel_mutex_unlock;
    if(v5) {
        v5((int)ptr2);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_seek_out(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    caml_seek_out(v4, param1 >> 1, (param1 >> 1) >> 31);
    unsigned int v6 = caml_channel_mutex_unlock;
    if(v6) {
        v6(v4);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_seek_out_64(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    caml_seek_out(v4, *(int*)(param1 + 4), *(int*)(param1 + 8));
    unsigned int v6 = caml_channel_mutex_unlock;
    if(v6) {
        v6(v4);
    }
    caml_local_roots = v1;
    return 1;
}

int caml_ml_set_binary_mode() {
    return 1;
}

int caml_ml_string_length(int param0) {
    int v0 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
    return (v0 - (int)*(char*)(v0 + param0)) * 2 + 1;
}

int caml_modf_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    double v2;
    int v3;
    __SyntheticTypeUnknownF v4;
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
    double* __iptr = &v2;
    *(long long*)&v3 = *param0;
    v0[v1] = →modf(*(double*)&v3, __iptr);
    *(long long*)&v3 = v4;
    ptr1 = caml_copy_double(*(double*)&v3, (int)__iptr);
    *(long long*)&v3 = v2;
    ptr2 = caml_copy_double(*(double*)&v3, (int)__iptr);
    int v11 = caml_alloc_tuple(2);
    result = v11;
    *(long long**)v11 = ptr1;
    *(long long**)(result + 4) = ptr2;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_modify(unsigned int* param0, unsigned int param1) {
    unsigned int* ptr0 = param0;
    unsigned int v0 = param1;
    int* ptr1 = *ptr0;
    *ptr0 = v0;
    int* result = (int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff);
    if((*(char*)((int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table) + (int)result) & 0x1)) {
        if(!caml_gc_phase) {
            int v1 = 0;
            result = caml_darken(ptr1);
        }
        if(!(v0 & 0x1)) {
            result = caml_young_end;
            if((unsigned int)result > v0) {
                int* ptr2 = caml_young_start;
                if((unsigned int)ptr2 < v0 && ((int*)((int)ptr1 & 0x1) || result <= ptr1 || ptr2 >= ptr1)) {
                    if(gvar_807EB48 >= gvar_807EB4C) {
                        caml_realloc_ref_table(&caml_ref_table);
                    }
                    result = (int*)&gvar_807EB48;
                    unsigned int* ptr3 = gvar_807EB48;
                    *ptr3 = ptr0;
                    gvar_807EB48 = (int*)(ptr3 + 1);
                }
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_modify_generational_global_root(unsigned int param0, unsigned int param1) {
    int v0;
    int result = *(int*)param0;
    if(((param1 & 0x1) || caml_young_end <= param1 || caml_young_start >= param1)) {
        if(!((unsigned char)result & 0x1)) {
            if((param1 & 0x1)) {
                if(caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
                    result = (int)caml_delete_global_root(v0, param0);
                }
                else {
                    int v1 = result >>> 23;
                    result = (result >>> 12) & 0x7ff;
                    if((*(char*)(*(int*)(v1 * 4 + (int)&caml_page_table) + result) & 0x1)) {
                        result = (int)caml_delete_global_root(v0, param0);
                    }
                }
            }
        }
        else if(!(param1 & 0x1)) {
        loc_80624EB:
            if(caml_young_end > param1 && caml_young_start < param1) {
                result = caml_insert_global_root(v0, param0);
            }
            else {
                result = (param1 >>> 12) & 0x7ff;
                if((*(char*)(*(int*)((param1 >>> 23) * 4 + (int)&caml_page_table) + result) & 0x1)) {
                    result = caml_insert_global_root(v0, param0);
                }
            }
        }
    }
    else if((unsigned char)result & 0x1) {
        goto loc_80624EB;
    }
    else {
        int v2 = result >>> 23;
        result = (result >>> 12) & 0x7ff;
        if((*(char*)(*(int*)(v2 * 4 + (int)&caml_page_table) + result) & 0x1)) {
            caml_delete_global_root(v0, param0);
            result = caml_insert_global_root(v0, param0);
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
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    return ((v1 >= v0 ? 0: 1) - (v1 > v0 ? 1: 0)) * 2 + 1;
}

int caml_nativeint_div(int param0, int param1) {
    int result = param0;
    int v0 = *(int*)(result + 4);
    int v1 = *(int*)(param1 + 4);
    if(!v1) {
        result = caml_raise_zero_divide();
    }
    if(v0 != 0x80000000 || v1 != -1) {
        result = caml_copy_nativeint((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) / v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_nativeint_format(int param0, int param1) {
    char v0;
    char v1;
    int __ptr = parse_format(&v0, &v1);
    →sprintf();
    int result = caml_copy_string((char*)__ptr);
    if(__ptr != &v0) {
        caml_stat_free(__ptr);
    }
    return result;
}

int caml_nativeint_mod(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    if(!v1) {
        caml_raise_zero_divide();
    }
    return v0 == 0x80000000 && v1 == -1 ? caml_copy_nativeint(0): caml_copy_nativeint((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) % v1);
}

int caml_nativeint_mul(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) * *(int*)(param1 + 4));
}

int caml_nativeint_neg(int param0) {
    return caml_copy_nativeint(0 - *(int*)(param0 + 4));
}

int caml_nativeint_of_float(double* param0) {
    short v0;
    int v1;
    v0 = fnstcw(v0);
    short v2 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    return caml_copy_nativeint(v1);
}

int caml_nativeint_of_int(int param0) {
    return caml_copy_nativeint(param0 >> 1);
}

int caml_nativeint_of_int32(int param0) {
    return caml_copy_nativeint(*(int*)(param0 + 4));
}

int caml_nativeint_of_string(int param0) {
    int v0 = parse_intnat(param0, 32);
    return caml_copy_nativeint(v0);
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

int caml_nativeint_shift_right_unsigned(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) >>> ((param1 >> 1) & 0x1f));
}

int caml_nativeint_sub(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) - *(int*)(param1 + 4));
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
    fchs();
    return caml_copy_double(*param0, v0);
}

int caml_neq_float(double* param0, double* param1) {
    char v0;
    char v1;
    int v2;
    v3[v4] = fucomip(*param1, *param0);
    return (unsigned int)(unsigned char)((unsigned int)(v0 ? 1: 0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8) | (unsigned int)(v1 ? 0: 1) | ((unsigned int)(int*)((int)(int*)((int)param1 >>> 8) & 0xffffff) << 8)) * 2 + 1;
}

int caml_notequal(int param0, int param1) {
    int v0 = compare_val(0, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (((unsigned int)v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_oldify_local_roots() {
    int v0;
    int v1 = caml_globals_scanned;
    int v2 = caml_globals_inited;
    if(v2 >= v1) {
        unsigned int v3 = *(unsigned int*)(v1 * 4 + (int)&caml_globals);
        if(v3) {
            do {
                int* ptr0 = (int*)(v3 - 4);
                unsigned int v4 = 0;
                unsigned int v5 = 0;
                if((*ptr0 >>> 10)) {
                    do {
                        int v6 = v4 * 4 + v3;
                        int* ptr1 = *(int**)v6;
                        if(!((unsigned char)ptr1 & 0x1) && caml_young_end > (unsigned int)ptr1 && caml_young_start < (unsigned int)ptr1) {
                            caml_oldify_one(ptr1, v6);
                        }
                        ++v5;
                        v4 = v5;
                    }
                    while((unsigned int)(*ptr0 >>> 10) > v5);
                }
                ++v1;
                v2 = caml_globals_inited;
                if(v2 < v1) {
                    break;
                }
                else {
                    v3 = *(unsigned int*)(v1 * 4 + (int)&caml_globals);
                }
            }
            while(!v3);
        }
    }
    caml_globals_scanned = v2;
    int v7 = caml_dyn_globals;
    v1 = caml_dyn_globals;
    if(v7) {
        do {
            int v8 = *(int*)v1;
            if((*(int*)(v8 - 4) >>> 10)) {
                unsigned int v9 = 0;
                unsigned int v10 = 0;
                do {
                    int v11 = v9 * 4 + v8;
                    int* ptr2 = *(int**)v11;
                    if(!((unsigned char)ptr2 & 0x1) && caml_young_end > (unsigned int)ptr2 && caml_young_start < (unsigned int)ptr2) {
                        caml_oldify_one(ptr2, v11);
                    }
                    ++v10;
                    v9 = v10;
                }
                while((unsigned int)(*(int*)(v8 - 4) >>> 10) > v10);
            }
            v0 = *(int*)(v1 + 4);
            v1 = *(int*)(v1 + 4);
        }
        while(v0);
    }
    if(!caml_frame_descriptors) {
        caml_init_frame_descriptors(v7);
    }
    int v12 = caml_bottom_of_stack;
    v1 = caml_bottom_of_stack;
    unsigned int v13 = caml_last_return_address;
    unsigned int v14 = caml_gc_regs;
    if(v12) {
    loc_8062047:
        while(1) {
            unsigned int v15 = caml_frame_descriptors_mask;
            int v16 = (v13 >>> 3) & v15;
            v12 = caml_frame_descriptors;
            int* i;
            for(i = *(unsigned int*)(v16 * 4 + v12); *i != v13; i = *(unsigned int*)(v16 * 4 + v12)) {
                v16 = (v16 + 1) & v15;
            }
            if(*(short*)(i + 1) == 0xffff) {
                break;
            }
            else {
                int v17 = (unsigned int)*(short*)((char*)i + 6);
                if(v17 > 0) {
                    short* ptr3 = (short*)(i + 2);
                    while(1) {
                        int v18 = (unsigned int)*ptr3;
                        int v19 = ((unsigned char)v18 & 0x1) != 0 ? (v18 >> 1) * 4 + v14: v18 + v1;
                        int* ptr4 = *(int**)v19;
                        if(!((unsigned char)ptr4 & 0x1) && caml_young_end > (unsigned int)ptr4 && caml_young_start < (unsigned int)ptr4) {
                            caml_oldify_one(ptr4, v19);
                        }
                        --v17;
                        if(v17 <= 0) {
                            break;
                        }
                        else {
                            ++ptr3;
                        }
                    }
                }
                v1 += (unsigned int)*(short*)(i + 1) & 0xfffc;
                v13 = *(unsigned int*)(v1 - 4);
            }
        }
        int* ptr5 = (int*)(v1 + 8);
        v1 = *ptr5;
        v13 = *(unsigned int*)(ptr5 + 1);
        v14 = *(unsigned int*)(ptr5 + 2);
        if(v1) {
            goto loc_8062047;
        }
    }
    unsigned int* ptr6 = caml_local_roots;
    v1 = 0;
    if(ptr6) {
        do {
            int v20 = 0;
            if(!(*(int*)(ptr6 + 1) ? 0: 1) && *(int*)(ptr6 + 1) >= 0) {
                do {
                    int v21 = v1;
                    if(!(*(int*)(ptr6 + 2) ? 0: 1) && *(int*)(ptr6 + 2) >= 0) {
                        do {
                            int v22 = v21 * 4 + *((int*)(v20 * 4 + (int)ptr6) + 3);
                            int* ptr7 = *(int**)v22;
                            if(!((unsigned char)ptr7 & 0x1) && caml_young_end > (unsigned int)ptr7 && caml_young_start < (unsigned int)ptr7) {
                                caml_oldify_one(ptr7, v22);
                            }
                            ++v21;
                        }
                        while(*(int*)(ptr6 + 2) > v21);
                    }
                    ++v20;
                }
                while(*(int*)(ptr6 + 1) <= v20);
            }
            ptr6 = *ptr6;
        }
        while(!ptr6);
    }
    caml_scan_global_young_roots(v12);
    caml_final_do_young_roots(&caml_oldify_one);
    unsigned int result = caml_scan_roots_hook;
    if(result) {
        result = (unsigned int)result(&caml_oldify_one);
    }
    return result;
}

unsigned int caml_oldify_mopup() {
    int v0;
    int v1;
    int* ptr0;
    unsigned int result;
    do {
        ptr0 = oldify_todo_list;
        if(!ptr0) {
            return result;
        }
        v1 = *ptr0;
        v0 = v1 + 4;
        oldify_todo_list = *(unsigned int*)v0;
        int* ptr1 = *(int**)v1;
        if(!((unsigned char)ptr1 & 0x1) && caml_young_end > (unsigned int)ptr1 && caml_young_start < (unsigned int)ptr1) {
            caml_oldify_one(ptr1, v1);
        }
        result = (unsigned int)(*(int*)(v1 - 4) >>> 10);
    }
    while(result <= 1);
    unsigned int v2 = 1;
    do {
        int* ptr2 = *(int**)(v2 * 4 + (int)ptr0);
        if(!((unsigned char)ptr2 & 0x1) && caml_young_end > (unsigned int)ptr2 && caml_young_start < (unsigned int)ptr2) {
            caml_oldify_one(ptr2, v0);
        }
        else {
            *(int**)v0 = ptr2;
        }
        ++v2;
        v0 += 4;
        result = (unsigned int)(*(int*)(v1 - 4) >>> 10);
    }
    while(result > v2);
}

int caml_oldify_one(int* param0, int param1) {
    unsigned int v0;
    int result;
    int* ptr0 = param0;
    int v1 = param1;
    while(!((unsigned char)ptr0 & 0x1) && caml_young_end > (unsigned int)ptr0 && caml_young_start < (unsigned int)ptr0) {
        int* ptr1 = ptr0;
        int* ptr2 = ptr0 - 1;
        int* ptr3 = ptr2;
        int* ptr4 = *ptr2;
        if(!ptr4) {
            result = *ptr0;
            *(int*)v1 = result;
            return result;
        }
        result = (int)(int*)(ptr4 & 0xFF);
        if((unsigned int)result <= 248) {
            unsigned int v2 = (unsigned int)((int)ptr4 >>> 10);
            result = (int)caml_alloc_shr(v2, result);
            *(int*)v1 = result;
            ptr4 = *ptr0;
            *ptr3 = 0;
            *ptr0 = result;
            if(v2 > 1) {
                *(int**)result = ptr4;
                *(unsigned int*)(result + 4) = oldify_todo_list;
                oldify_todo_list = ptr0;
                return result;
            }
            v1 = result;
            ptr0 = ptr4;
        }
        else {
            if((unsigned int)result <= 250) {
                goto loc_8064282;
            }
            else {
                unsigned int v3 = (unsigned int)((int)ptr4 >>> 10);
                v0 = v3;
                result = (int)caml_alloc_shr(v3, result);
            }
            if(v0) {
                unsigned int v4 = 0;
                int* ptr5 = ptr0;
                unsigned int v5 = v0;
                do {
                    *(int*)(v4 * 4 + result) = *(int*)(v4 * 4 + (int)ptr1);
                    ++v4;
                }
                while(v4 < v5);
                ptr0 = ptr5;
                *ptr3 = 0;
                *ptr0 = result;
                *(int*)v1 = result;
                return result;
            loc_8064282:
                if(result == 249) {
                    int* ptr6 = (int*)((int)(int*)((int)ptr4 >>> 10) * 4);
                    result = caml_oldify_one((int)(int*)((int)ptr1 - (int)ptr6));
                    *(int**)v1 = (int*)(*(int*)v1 + (int)ptr6);
                    return result;
                }
                int* ptr7 = ptr0;
                ptr0 = *ptr0;
                if(!((unsigned char)ptr0 & 0x1)) {
                    int* ptr8 = ptr0;
                    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x7)) {
                        int* ptr9 = ptr8 - 1;
                        char* ptr10 = (char*)ptr9;
                        if(!*ptr9) {
                            ptr10 = (char*)(*ptr0 - 4);
                        }
                        result = (int)*ptr10;
                        if(result != 250 && result != 246 && result != 253) {
                            continue;
                        }
                    }
                    result = (int)caml_alloc_shr(1, 250);
                    *(int*)v1 = result;
                    *ptr3 = 0;
                    *ptr7 = result;
                    v1 = result;
                }
            }
            else {
                *ptr3 = 0;
                *ptr0 = result;
                *(int*)v1 = result;
                return result;
            }
        }
    }
    *(int**)v1 = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_open_descriptor_in(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __fd = param0;
    int* result = (int*)caml_stat_alloc(4148);
    *result = __fd;
    caml_enter_blocking_section();
    int v4 = 1;
    int v5 = 0;
    int v6 = 0;
    (unsigned long long)v1 | ((unsigned long long)v0 << 32) = →lseek64(__fd, *(__off64_t*)&v5, 1);
    *(result + 1) = v2;
    *(result + 2) = v3;
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
    unsigned int v7 = caml_all_opened_channels;
    if(v7) {
        *(unsigned int*)(v7 + 32) = result;
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
int caml_output_val(int param0, int param1, int* param2) {
    int result;
    int v0;
    int v1 = caml_channel_binary_mode();
    if(!v1) {
        caml_failwith("output_value: not a binary channel");
    }
    init_extern_output();
    extern_value(v0, param2);
    int v2 = extern_output_first;
    if(v2) {
        while(1) {
            caml_really_putblock(param0, v2 + 8, *(int*)(v2 + 4) - (v2 + 8));
            int v3 = *(int*)v2;
            int v4 = v2;
            →free();
            if(!v3) {
                return result;
            }
            v2 = v3;
        }
    }
    return result;
}

int caml_output_value(int param0, int param1, int* param2) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v4 = *(int*)(param0 + 4);
    unsigned int v5 = caml_channel_mutex_lock;
    if(v5) {
        v5(v4);
    }
    caml_output_val(v4, param1, param2);
    unsigned int v6 = caml_channel_mutex_unlock;
    if(v6) {
        v6(v4);
    }
    caml_local_roots = v1;
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
    int* ptr0;
    int v0;
    init_extern_output();
    int* ptr1 = extern_value(v0, param1);
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
            int* ptr5 = (int*)(*(int*)(ptr4 + 1) - (int)(int*)(ptr4 + 2));
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
    init_extern_output();
    int* ptr0 = extern_value(v0, param1);
    unsigned int* ptr1 = extern_output_first;
    int result = caml_alloc_string((int)ptr0);
    if(ptr1) {
        int* ptr2 = NULL;
        while(1) {
            int* ptr3 = (int*)(*(int*)(ptr1 + 1) - (int)(int*)(ptr1 + 2));
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
int caml_page_table_add(int param0, int param1, int param2) {
    int result;
    unsigned int v0 = (unsigned int)(param1 & 0xfffff000);
    if((unsigned int)((param2 - 1) & 0xfffff000) >= v0) {
        do {
            int v1 = caml_page_table_modify(param0, NULL);
            if(v1) {
                return -1;
            }
            v0 += 0x1000;
            if((unsigned int)((param2 - 1) & 0xfffff000) < v0) {
                return 0;
            }
        }
        while(1);
    }
    else {
        result = 0;
    }
    return result;
}

int caml_page_table_initialize() {
    int v0 = 0;
    do {
        *(int*)(v0 * 4 + (int)&caml_page_table) = &caml_page_table_empty;
        ++v0;
    }
    while(v0 != 0x200);
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_page_table_modify(int param0, void* param1) {
    int result;
    int v0;
    void* ptr0 = param1;
    int v1 = param0;
    if(*(int*)((v0 >>> 23) * 4 + (int)&caml_page_table) == &caml_page_table_empty) {
        param1 = →calloc(0x800, 1);
        result = -1;
        if(param1) {
            *(void**)((v0 >>> 23) * 4 + (int)&caml_page_table) = param1;
            char* ptr1 = (char*)(((v0 >>> 12) & 0x7ff) + *(int*)((v0 >>> 23) * 4 + (int)&caml_page_table));
            *ptr1 = ((unsigned char)(void*)~(int)ptr0 & *ptr1) | (unsigned char)param0;
            return 0;
        }
    }
    else {
        char* ptr1 = (char*)(((v0 >>> 12) & 0x7ff) + *(int*)((v0 >>> 23) * 4 + (int)&caml_page_table));
        *ptr1 = ((unsigned char)(void*)~(int)ptr0 & *ptr1) | (unsigned char)param0;
        result = 0;
    }
    return result;
}

int caml_page_table_remove(void* param0, int param1, int param2) {
    int result;
    unsigned int v0 = (unsigned int)(param1 & 0xfffff000);
    if((unsigned int)((param2 - 1) & 0xfffff000) >= v0) {
        do {
            int v1 = caml_page_table_modify(0, param0);
            if(v1) {
                return -1;
            }
            v0 += 0x1000;
            if((unsigned int)((param2 - 1) & 0xfffff000) < v0) {
                return 0;
            }
        }
        while(1);
    }
    else {
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_parse_engine(int param0, int* param1, int param2, int param3) {
    int v0;
    int result;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    int v8;
    int v9;
    int v10 = param0;
    int* ptr0 = param1;
    switch((unsigned int)(param2 >> 1)) {
        case 0: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v6 = 0;
            v5 = 0;
            goto loc_806BE0B;
        }
        case 1: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
            v4 = param3 & 0x1;
            if(!(param3 & 0x1)) {
                int v11 = param3;
                *(ptr0 + 6) = *(int*)((unsigned int)*(char*)(v11 - 4) * 4 + *(int*)(v10 + 8));
                caml_modify((unsigned int*)(ptr0 + 7), *(unsigned int*)v11);
            }
            else {
                *(ptr0 + 6) = *(int*)((param3 >> 1) * 4 + *(int*)(v10 + 4));
                caml_modify((unsigned int*)(ptr0 + 7), 1);
            }
            if(caml_parser_trace) {
                if(v4) {
                    char* ptr1 = token_name(v8, param3 >> 1);
                    →fprintf(stderr, "State %d: read token %s\n", v5, ptr1);
                }
                else {
                    char* ptr2 = token_name(param3, (int)*(char*)(param3 - 4));
                    →fprintf(stderr, "State %d: read token %s(", v5, ptr2);
                    char* __s = *(char**)param3;
                    if(((unsigned char)__s & 0x1)) {
                        →fprintf(stderr, (char*)&gvar_80716DB, (int*)((int)__s >> 1));
                    }
                    else {
                        char v12 = __s[-4];
                        switch(v12) {
                            case 252: {
                                →fputs(__s, stderr);
                                break;
                            }
                            case 253: {
                                *(long long*)&v9 = (double)*(long long*)&__s[0];
                                →fprintf(stderr, (char*)&gvar_80716DF, v9);
                                break;
                            }
                            default: {
                                →fputc(95, stderr);
                                break;
                            }
                        }
                    }
                    →fwrite((void*)&gvar_80716E2, 1, 2, stderr);
                }
            }
            goto loc_806BFC8;
        }
        case 2: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
        loc_806C242:
            v1 = (int)(v7 * 4);
            int v13 = (int)(v7 * 4);
            *(int*)(*ptr0 + (int)(v7 * 4)) = v5 * 2 + 1;
            caml_modify((unsigned int*)(*(ptr0 + 1) + (int)(v7 * 4)), *(unsigned int*)(ptr0 + 7));
            caml_modify((unsigned int*)(*(ptr0 + 2) + v1), *(unsigned int*)(ptr0 + 8));
            caml_modify((unsigned int*)(*(ptr0 + 3) + v1), *(unsigned int*)(ptr0 + 9));
            goto loc_806BE0B;
        }
        case 3: {
            v3 = (unsigned int)(*(ptr0 + 13) >> 1);
            v2 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
            *(ptr0 + 13) = v3 * 2 + 1;
            *(ptr0 + 14) = v2 * 2 + 1;
            *(ptr0 + 15) = v6 * 2 + 1;
            return 9;
        }
        case 4: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
            v4 = v7 * 4;
            int v14 = v7 * 4;
            *(int*)(*ptr0 + v7 * 4) = v5 * 2 + 1;
            caml_modify((unsigned int*)(*(ptr0 + 1) + v7 * 4), (unsigned int)param3);
            int v15 = *(ptr0 + 10) >> 1;
            v1 = *(ptr0 + 10) >> 1;
            int v16 = v15 * 4;
            int v17 = *(ptr0 + 3);
            caml_modify((unsigned int*)(v17 + v4), *(unsigned int*)(v17 + v16));
            if(v7 > (unsigned int)v1) {
                caml_modify((unsigned int*)(*(ptr0 + 2) + v4), *(unsigned int*)(*(ptr0 + 3) + v16));
            }
        loc_806BE0B:
            int v18 = *(int*)(v10 + 20);
            int v19 = v5;
            int v20 = (int)*(short*)(v19 * 2 + v18);
            v1 = (int)*(short*)(v19 * 2 + v18);
            if(v20) {
            loc_806C29E:
                if(caml_parser_trace) {
                    →fprintf(stderr, "State %d: reduce by rule %d\n", v5, v1);
                }
                int v21 = (int)*(short*)(v1 * 2 + *(int*)(v10 + 16));
                *(ptr0 + 10) = v7 * 2 + 1;
                *(ptr0 + 12) = v1 * 2 + 1;
                *(ptr0 + 11) = v21 * 2 + 1;
                v3 = (unsigned int)(v7 + 1 - v21);
                v5 = *(int*)(v3 * 4 + *ptr0 - 4) >> 1;
                int v22 = (int)*(short*)(v1 * 2 + *(int*)(v10 + 12)) * 2;
                int v23 = *(int*)(v10 + 36);
                v0 = (int)*(short*)(v23 + v22) + v5;
                if((int)*(short*)(v23 + v22) && v0 >= 0 && *(int*)(v10 + 40) >> 1 >= v0) {
                    v0 *= 2;
                    if((int)*(short*)(*(int*)(v10 + 48) + v0) != v5) {
                        goto loc_806C333;
                    }
                    else {
                        v2 = (int)*(short*)(*(int*)(v10 + 44) + v0);
                    }
                }
                else {
                loc_806C333:
                    v2 = (int)*(short*)(*(int*)(v10 + 24) + v22);
                }
                if((unsigned int)(*(ptr0 + 4) >> 1) > v3) {
                    *(ptr0 + 13) = v3 * 2 + 1;
                    *(ptr0 + 14) = v2 * 2 + 1;
                    *(ptr0 + 15) = v6 * 2 + 1;
                    result = 9;
                }
                else {
                    *(ptr0 + 13) = v3 * 2 + 1;
                    *(ptr0 + 14) = v2 * 2 + 1;
                    *(ptr0 + 15) = v6 * 2 + 1;
                    result = 7;
                }
                return result;
            }
            else if(*(ptr0 + 6) < 0) {
                *(ptr0 + 13) = v7 * 2 + 1;
                *(ptr0 + 14) = v19 * 2 + 1;
                *(ptr0 + 15) = v6 * 2 + 1;
                return 1;
            }
        loc_806BFC8:
            v4 = v5 * 2;
            int v24 = (int)*(short*)(v5 * 2 + *(int*)(v10 + 28));
            v0 = *(ptr0 + 6) >> 1;
            int v25 = v24 + v0;
            v1 = v24 + v0;
            if(!v24 || v25 < 0 || *(int*)(v10 + 40) >> 1 < v25 || (int)*(short*)(v25 * 2 + *(int*)(v10 + 48)) != v0) {
                int v26 = *(int*)(v10 + 32);
                v19 = (int)*(short*)(v26 + v4) + v0;
                if((int)*(short*)(v26 + v4) && v19 >= 0 && *(int*)(v10 + 40) >> 1 >= v19) {
                    v19 *= 2;
                    if((int)*(short*)(*(int*)(v10 + 48) + v19) == v0) {
                        v1 = (int)*(short*)(*(int*)(v10 + 44) + v19);
                        goto loc_806C29E;
                    }
                }
                if(v6 <= 0) {
                    *(ptr0 + 13) = v7 * 2 + 1;
                    *(ptr0 + 14) = v5 * 2 + 1;
                    *(ptr0 + 15) = v6 * 2 + 1;
                    return 11;
                }
            }
            else {
                *(ptr0 + 6) = -1;
                v6 -= v6 <= 0 ? 0: 1;
            loc_806C1BC:
                if(caml_parser_trace) {
                    →fprintf(stderr, "State %d: shift to state %d\n", v5, (int)*(short*)(v1 * 2 + *(int*)(v10 + 44)));
                }
            loc_806C1F2:
                v5 = (int)*(short*)(v1 * 2 + *(int*)(v10 + 44));
                ++v7;
                if((unsigned int)(*(ptr0 + 4) >> 1) > v7) {
                    goto loc_806C242;
                }
                else {
                    *(ptr0 + 13) = v7 * 2 + 1;
                    *(ptr0 + 14) = v5 * 2 + 1;
                    *(ptr0 + 15) = v6 * 2 + 1;
                    return 5;
                }
            }
        loc_806C07B:
            if(v6 <= 2) {
                while(1) {
                    v19 = *(int*)(v7 * 4 + *ptr0) >> 1;
                    int v27 = *(int*)(v10 + 28);
                    v0 = (int)*(short*)(v19 * 2 + v27) + 0x100;
                    if((int)*(short*)(v19 * 2 + v27) && v0 >= 0 && *(int*)(v10 + 40) >> 1 >= v0 && *(short*)(v0 * 2 + *(int*)(v10 + 48)) == 0x100) {
                    loc_806C0B1:
                        v1 = v0;
                        v6 = 3;
                        if(!caml_parser_trace) {
                            goto loc_806C1F2;
                        }
                        else {
                            →fprintf(stderr, "Recovering in state %d\n", v19);
                            v6 = 3;
                            goto loc_806C1BC;
                        }
                    }
                    else {
                        if(caml_parser_trace) {
                            →fprintf(stderr, "Discarding state %d\n", v19);
                        }
                        if((unsigned int)(*(ptr0 + 5) >> 1) < v7) {
                            --v7;
                        }
                        else if(!caml_parser_trace) {
                            return 3;
                        }
                        else {
                            →fwrite("No more states to discard\n", 1, 26, stderr);
                            return 3;
                        }
                    }
                }
                goto loc_806C0B1;
            }
            else if(!(*(ptr0 + 6) >>> 1)) {
                return 3;
            }
            else {
                if(caml_parser_trace) {
                    →fwrite("Discarding last token read\n", 1, 27, stderr);
                }
                *(ptr0 + 6) = -1;
                goto loc_806BE0B;
            }
        }
        case 5: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
            goto loc_806C07B;
        }
        default: {
            return 3;
        }
    }
}

unsigned int caml_pos_in(int param0) {
    return *(unsigned int*)(param0 + 4) - (unsigned int)(*(int*)(param0 + 20) - *(int*)(param0 + 16));
}

int caml_pos_out(int param0) {
    return *(int*)(param0 + 16) - (param0 + 52) + *(int*)(param0 + 4);
}

int caml_power_float(double* param0, double* param1) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →pow(*param0, *param1);
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

int caml_program(int param0, int param1) {
    camlPervasives__entry(param0, param1);
    ++caml_globals_inited;
    camlArray__entry(param0, param1);
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
    camlPrintf__entry(param0, param1);
    ++caml_globals_inited;
    camlCallback__entry();
    ++caml_globals_inited;
    camlUnix__entry(param0, param1);
    ++caml_globals_inited;
    camlUnixLabels__entry();
    ++caml_globals_inited;
    camlSource__entry(param0, param1);
    ++caml_globals_inited;
    camlStd_exit__entry();
    ++caml_globals_inited;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_putblock(int param0, int param1, int param2) {
    int result;
    int v0;
    int v1;
    int v2 = param0;
    int v3 = param2;
    int v4 = *(int*)(v2 + 16);
    int v5 = *(int*)(v2 + 12) - v4;
    if(v5 > v3) {
        v1 = param1;
        v0 = v4;
        →memmove();
        *(int*)(v2 + 16) = *(int*)(v2 + 16) + v3;
        result = v3;
    }
    else {
        v1 = param1;
        v0 = v4;
        →memmove();
        int v6 = v2 + 52;
        int v7 = *(int*)(v2 + 12) - v6;
        int v8 = *(int*)(v2 + 12) - v6;
        int v9 = do_write(v7, v6);
        if(v9 < v8) {
            int v10 = v8 - v9;
            v1 = v9 + v6;
            v0 = v6;
            →memmove();
        }
        int v11 = *(int*)(v2 + 4);
        *(int*)(v2 + 4) = *(int*)(v2 + 4) + v9;
        *(int*)(v2 + 8) = (v9 >> 31) + (unsigned int)__carry__(v9, v11) + *(int*)(v2 + 8);
        *(int*)(v2 + 16) = *(int*)(v2 + 12) - v9;
        result = v5;
    }
    return result;
}

int* caml_putword(int param0, int param1) {
    int v0 = param0;
    int v1 = param1;
    int v2 = v0;
    int v3 = caml_channel_binary_mode();
    if(!v3) {
        caml_failwith("output_binary_int: not a binary channel");
    }
    if(*(unsigned int*)(v0 + 16) >= *(unsigned int*)(v0 + 12)) {
        caml_flush_partial(v0);
    }
    char* ptr0 = *(unsigned int*)(v0 + 16);
    *ptr0 = (unsigned char)(v1 >>> 24);
    *(unsigned int*)(v0 + 16) = (int*)(ptr0 + 1);
    if((unsigned int)(int*)(ptr0 + 1) >= *(unsigned int*)(v0 + 12)) {
        caml_flush_partial(v0);
    }
    char* ptr1 = *(unsigned int*)(v0 + 16);
    *ptr1 = (unsigned char)(v1 >>> 16);
    *(unsigned int*)(v0 + 16) = (int*)(ptr1 + 1);
    if((unsigned int)(int*)(ptr1 + 1) >= *(unsigned int*)(v0 + 12)) {
        caml_flush_partial(v0);
    }
    char* ptr2 = *(unsigned int*)(v0 + 16);
    *ptr2 = (unsigned char)(v1 >>> 8);
    *(unsigned int*)(v0 + 16) = (int*)(ptr2 + 1);
    if((unsigned int)(int*)(ptr2 + 1) >= *(unsigned int*)(v0 + 12)) {
        caml_flush_partial(v0);
    }
    char* ptr3 = *(unsigned int*)(v0 + 16);
    *ptr3 = (unsigned char)v1;
    *(unsigned int*)(v0 + 16) = (int*)(ptr3 + 1);
    return (int*)(ptr3 + 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_constant(int param0) {
    int* ptr0;
    caml_local_roots = &ptr0;
    int v0 = caml_alloc_small(1, 0);
    int v1 = v0;
    *(int*)v0 = param0;
    /*BAD_CALL!*/ caml_raise(v1);
}

int caml_raise_end_of_file() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_End_of_file);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_exn() {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    if(!(caml_backtrace_active & 0x1)) {
        caml_exception_pointer = v0;
        jump v3;
    }
    unsigned int* ptr0 = caml_exception_pointer;
    caml_stash_backtrace(v2, v1, (int)&v4, (int)ptr0);
    caml_exception_pointer = *ptr0;
    jump v3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_not_found() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Not_found);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_stack_overflow() {
    /*BAD_CALL!*/ caml_raise(&caml_bucket_Stack_overflow);
}

int caml_raise_sys_blocked_io() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Sys_blocked_io);
}

int caml_raise_sys_error(int param0) {
    /*BAD_CALL!*/ caml_raise_with_arg(&caml_exn_Sys_error, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_with_arg(int param0, int param1) {
    int* ptr0;
    caml_local_roots = &ptr0;
    int v0 = caml_alloc_small(2, 0);
    int v1 = v0;
    *(int*)v0 = param0;
    *(int*)(v1 + 4) = param1;
    /*BAD_CALL!*/ caml_raise(v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_with_args(int param0, int param1, int param2) {
    int v0;
    int v1 = v0;
    int v2 = param1;
    int v3 = param2;
    unsigned int v4 = caml_local_roots;
    int v5 = 1;
    int v6 = 1;
    int* ptr0 = &param0;
    int* ptr1 = &v4;
    caml_local_roots = &ptr1;
    int v7 = 1;
    int v8 = v3;
    int v9 = caml_alloc_small(v2 + 1, 0);
    *(int*)v9 = param0;
    if(v2 > 0) {
        int v10 = 0;
        do {
            *(int*)(v10 * 4 + v9 + 4) = *(int*)(v10 * 4 + v3);
            ++v10;
        }
        while(v10 != v2);
    }
    /*BAD_CALL!*/ caml_raise(v9);
}

int caml_raise_with_string(int param0, char* param1) {
    int v0 = caml_copy_string(param1);
    /*BAD_CALL!*/ caml_raise_with_arg(param0, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_zero_divide() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Division_by_zero);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_read_directory(char* __name, int* param1) {
    int result;
    dirent64* ptr0;
    DIR* __dirp = →opendir(__name);
    if(__dirp) {
    loc_806F915:
        do {
            ptr0 = →readdir64(__dirp);
            if(!ptr0) {
                return →closedir(__dirp);
            }
        }
        while(ptr0->d_name[0] == 46 && (ptr0->d_name[1] == 0 || (ptr0->d_name[1] == 46 && ptr0->d_name[2] == 0)));
        char* ptr1 = (char*)((char*)ptr0 + 19);
        int v0 = -1;
        while(v0 != 0) {
            char v1 = *ptr1 == 0;
            ++ptr1;
            --v0;
            if(!~v1) {
                int v2 = caml_stat_alloc(~v0);
                →strcpy((char*)v2, (char*)ptr0 + 19);
                caml_ext_table_add(param1, v2);
                goto loc_806F915;
            }
        }
        int v2 = caml_stat_alloc(~v0);
        →strcpy((char*)v2, (char*)ptr0 + 19);
        caml_ext_table_add(param1, v2);
        goto loc_806F915;
    }
    else {
        return result;
    }
}

int caml_realloc_ref_table(int* param0) {
    int result;
    int* ptr0 = param0;
    int v0 = ptr0[0];
    if(!v0) {
        result = caml_alloc_table(ptr0, (int)(caml_minor_heap_size >>> 5), 0x100);
    }
    else if(ptr0[4] == ptr0[2]) {
        caml_gc_message(8, "ref_table threshold crossed\n", 0);
        ptr0[4] = ptr0[1];
        result = (int)caml_urge_major_slice();
    }
    else {
        int v1 = ptr0[3];
        int v2 = ptr0[5] * 2;
        ptr0[5] *= 2;
        size_t __size = (size_t)((ptr0[6] + v2) * 4);
        caml_gc_message(8, "Growing ref_table to %ldk bytes\n", (int)((int)__size / 0x400));
        void* ptr1 = →realloc(ptr0[0], __size);
        ptr0[0] = (int)ptr1;
        if(!ptr1) {
            ptr1 = (void*)/*NO_RETURN*/ caml_fatal_error("Fatal error: ref_table overflow\n");
        }
        int v3 = ptr0[5];
        int v4 = (ptr0[6] + v3) * 4 + (int)ptr1;
        ptr0[1] = (ptr0[6] + v3) * 4 + (int)ptr1;
        ptr0[2] = v3 * 4 + (int)ptr1;
        result = ((v1 - v0) & 0xfffffffc) + (int)ptr1;
        ptr0[3] = ((v1 - v0) & 0xfffffffc) + (int)ptr1;
        ptr0[4] = v4;
    }
    return result;
}

int caml_really_getblock(int* param0, int param1, ssize_t param2) {
    int v0 = param1;
    ssize_t v1 = param2;
    if(v1 > 0) {
        ssize_t v2 = caml_getblock(param0, v0, v1);
        while(v2) {
            v1 -= v2;
            if(v1 <= 0) {
                break;
            }
            else {
                v0 = (int)(v2 + v0);
                v2 = caml_getblock(param0, v0, v1);
            }
        }
    }
    return v1 ? 0: 1;
}

int caml_really_putblock(int param0, int param1, int param2) {
    int result;
    int v0 = param1;
    for(int i = param2; i > 0; i -= result) {
        result = caml_putblock(param0, v0, i);
        v0 += result;
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
    int* ptr0 = param0;
    ssize_t v0 = caml_do_read(ptr0[0], (void*)(ptr0 + 13), (size_t)(ptr0[3] - (int)(void*)(ptr0 + 13)));
    if(!v0) {
        v0 = caml_raise_end_of_file();
    }
    int v1 = ptr0[1];
    ptr0[1] += v0;
    ptr0[2] += (v0 >> 31) + (unsigned int)__carry__(v0, v1);
    ptr0[5] = (int)((int*)(v0 + (int)ptr0) + 13);
    ptr0[4] = (int)((char*)ptr0 + 53);
    return (unsigned int)*(char*)&ptr0[13];
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_register_dyn_global(int param0) {
    int result = cons(param0, caml_dyn_globals);
    caml_dyn_globals = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_register_generational_global_root(unsigned int param0) {
    int v0;
    int result = *(int*)param0;
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
int caml_register_named_value(char* __src, int param1) {
    int v0;
    int v1 = hash_value_name();
    int v2 = v1;
    int* ptr0 = *(unsigned int*)(v1 * 4 + (int)&named_value_table);
    if(ptr0) {
        do {
            int* ptr1 = ptr0 + 2;
            →strcmp();
            if(!v0) {
                *ptr0 = param1;
                return 1;
            }
            ptr0 = *(unsigned int*)(ptr0 + 1);
            if(!ptr0) {
                goto loc_806E019;
            }
        }
        while(1);
    }
    else {
    loc_806E019:
        char* ptr2 = __src;
        int v3 = -1;
        while(v3 != 0) {
            char v4 = ptr2[0] == 0;
            ++ptr2;
            --v3;
            if(!~v4) {
                break;
            }
        }
        int v5 = caml_stat_alloc(~v3 + 11);
        →strcpy((char*)(v5 + 8), __src);
        *(int*)v5 = param1;
        *(int*)(v5 + 4) = *(int*)(v2 * 4 + (int)&named_value_table);
        *(unsigned int*)(v2 * 4 + (int)&named_value_table) = (unsigned int)v5;
        caml_register_global_root((unsigned int)v5);
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_round_heap_chunk_size(unsigned int param0) {
    int result = clip_heap_chunk_size();
    if((unsigned int)result < param0) {
        result = caml_raise_out_of_memory();
    }
    return result;
}

int* caml_scan_global_roots(int param0) {
    caml_iterate_global_roots(param0, &caml_global_roots);
    caml_iterate_global_roots(param0, &caml_global_roots_young);
    return caml_iterate_global_roots(param0, &caml_global_roots_old);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_scan_global_young_roots(int param0) {
    caml_iterate_global_roots(param0, &caml_global_roots);
    int* result = caml_iterate_global_roots(param0, &caml_global_roots_young);
    unsigned int* ptr0 = gvar_807BA44;
    if(ptr0) {
        do {
            caml_insert_global_root(param0, ptr0[0]);
            ptr0 = (unsigned int*)ptr0[1];
        }
        while(ptr0);
        result = gvar_807BA44;
        if(result) {
            while(1) {
                int v0 = result[1];
                result = (int*)caml_stat_free((int)result);
                if(!v0) {
                    break;
                }
                else {
                    result = (int*)v0;
                }
            }
        }
    }
    int v1 = gvar_807BA88;
    if(v1 >= 0) {
        result = NULL;
        do {
            *(unsigned int*)((int)(int*)((int)result * 4) + (int)&gvar_807BA44) = 0;
            result = (int*)((char*)result + 1);
        }
        while((int)result <= v1);
    }
    gvar_807BA88 = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_search_dll_in_path(int* param0, char* __src) {
    char* ptr0 = __src;
    int v0 = -1;
    while(v0 != 0) {
        char v1 = ptr0[0] == 0;
        ++ptr0;
        --v0;
        if(!~v1) {
            break;
        }
    }
    int __ptr = caml_stat_alloc(~v0 + 3);
    →strcpy((char*)__ptr, __src);
    char* ptr1 = (char*)__ptr;
    int v2 = -1;
    while(v2 != 0) {
        char v3 = ptr1[0] == 0;
        ++ptr1;
        --v2;
        if(!~v3) {
            break;
        }
    }
    *(int*)((char*)(~v2 + __ptr) - 1) = 7303982;
    int result = caml_search_in_path(param0, (char*)__ptr);
    caml_stat_free(__ptr);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_search_exe_in_path(char* __src1) {
    char v0;
    caml_ext_table_init(&v0, 8);
    char* __src = →getenv("PATH");
    int __ptr = caml_decompose_path(&v0, __src);
    int result = caml_search_in_path(&v0, __src1);
    caml_stat_free(__ptr);
    caml_ext_table_free(&v0, 0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_search_in_path(int* param0, char* __src) {
    int __ptr;
    char v0;
    char v1;
    int v2;
    int* ptr0 = param0;
    char* ptr1 = __src;
    char v3 = ptr1[0];
    if(!v3) {
    loc_806FA63:
        if(!(*ptr0 ? 0: 1) && *ptr0 >= 0) {
            int v4 = 0;
            do {
                int v5 = v4 * 4;
                char* ptr2 = *(unsigned int*)(v4 * 4 + *(ptr0 + 2));
                int v6 = -1;
                while(v6 != 0) {
                    char v7 = *ptr2 == 0;
                    ++ptr2;
                    --v6;
                    if(!~v7) {
                        break;
                    }
                }
                char* ptr3 = __src;
                int v8 = -1;
                while(v8 != 0) {
                    char v9 = ptr3[0] == 0;
                    ++ptr3;
                    --v8;
                    if(!~v9) {
                        break;
                    }
                }
                __ptr = caml_stat_alloc(~v6 + ~v8);
                →strcpy((char*)__ptr, *(char**)(*(ptr0 + 2) + v5));
                if(*(char*)__ptr) {
                    int v10 = __ptr;
                    int v11 = -1;
                    while(v11 != 0) {
                        char v12 = *(char*)v10 == 0;
                        ++v10;
                        --v11;
                        if(!~v12) {
                            break;
                        }
                    }
                    *(short*)(~v11 + __ptr - 1) = 47;
                }
                →strcat((char*)__ptr, __src);
                int v13 = →__xstat64(3, (char*)__ptr, &v1);
                if(!v13 && (v2 & 0xf000) == 0x8000) {
                    return __ptr;
                }
                caml_stat_free(__ptr);
                ++v4;
            }
            while(*ptr0 > v4);
        }
    loc_806FB28:
        char* ptr4 = __src;
        int v14 = -1;
        while(v14 != 0) {
            char v15 = ptr4[0] == 0;
            ++ptr4;
            --v14;
            if(!~v15) {
                break;
            }
        }
        int v16 = caml_stat_alloc(~v14);
        __ptr = v16;
        →strcpy((char*)v16, __src);
    }
    else if(v3 == 47) {
        goto loc_806FB28;
    }
    else {
        do {
            ++ptr1;
            v0 = ptr1[0];
            if(!v0) {
                goto loc_806FA63;
            }
        }
        while(v0 == 47);
    }
    return __ptr;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_seek_in(int* param0, int param1, int param2) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0 = param0;
    int v5 = param2;
    int v6 = ptr0[2];
    int v7 = ptr0[1];
    int v8 = v6;
    int v9 = ptr0[5];
    int v10 = ptr0[5];
    int* ptr1 = (int*)(v9 - (int)(ptr0 + 13));
    int* ptr2 = (int*)(v7 - (int)ptr1);
    int* ptr3 = (int*)(v8 - (int)(int*)((int)(int*)((int)ptr1 >> 31) + (unsigned int)((unsigned int)ptr1 > (unsigned int)v7)));
    int* ptr4 = ptr2;
    int* ptr5 = ptr3;
    if((int)ptr3 <= v5 && (v5 > (int)ptr5 || (unsigned int)ptr2 <= (unsigned int)param1)) {
        char v11 = v5 > v8;
        char v12 = (((v8 - v5) ^ v8) & (v5 ^ v8)) < 0;
        if(v11 != v12 || ((v5 == v8 || v11 != v12) && (unsigned int)v7 < (unsigned int)param1)) {
            goto loc_8068418;
        }
        else {
            result = (int)((unsigned int)(param1 - v7) + v10);
            ptr0[4] = (int)((unsigned int)(param1 - v7) + v10);
        }
    }
    else {
    loc_8068418:
        caml_enter_blocking_section();
        int v13 = 0;
        (unsigned long long)v3 | ((unsigned long long)v4 << 32) = →lseek64(ptr0[0], *(__off64_t*)&v0, 0);
        if(((v1 ^ param1) | (v2 ^ v5))) {
            caml_leave_blocking_section();
            caml_sys_error(1);
        }
        caml_leave_blocking_section();
        ptr0[1] = param1;
        ptr0[2] = v5;
        result = (int)(ptr0 + 13);
        ptr0[5] = (int)(ptr0 + 13);
        ptr0[4] = result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_seek_out(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = param0;
    int v6 = param2;
    caml_flush(v5);
    caml_enter_blocking_section();
    int v7 = 0;
    (unsigned long long)v3 | ((unsigned long long)v1 << 32) = →lseek64(*(int*)v5, *(__off64_t*)&v0, 0);
    if(((v2 ^ param1) | (v4 ^ v6))) {
        caml_leave_blocking_section();
        caml_sys_error(1);
    }
    int result = caml_leave_blocking_section();
    *(int*)(v5 + 4) = param1;
    *(int*)(v5 + 8) = v6;
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

int* caml_serialize_block_2(int param0, int param1) {
    int v0 = param0;
    int* result = (int*)(param1 * 2);
    if((unsigned int)(int*)(extern_ptr + (int)result) > extern_limit) {
        result = grow_extern_output();
    }
    unsigned int v1 = extern_ptr;
    if(param1 > 0) {
        result = NULL;
        int counter = param1;
        int v2 = param1;
        do {
            int* ptr0 = (int*)*(char*)((int)result + v0);
            *(char*)((int)result + v1) = *(char*)((char*)((int)result + v0) + 1);
            *(char*)((char*)((int)result + v1) + 1) = (unsigned char)ptr0;
            result = (int*)((char*)result + 2);
            --counter;
        }
        while(counter);
        v1 = (unsigned int)(v2 * 2 + v1);
    }
    extern_ptr = v1;
    return result;
}

int* caml_serialize_block_4(int param0, int* param1) {
    int v0 = param0;
    int* result = (int*)((int)param1 * 4);
    if((unsigned int)(int*)(extern_ptr + (int)result) > extern_limit) {
        result = grow_extern_output();
    }
    int* ptr0 = extern_ptr;
    if((int)param1 > 0) {
        int v1 = 0;
        int* ptr1 = param1;
        do {
            char v2 = *(char*)(v1 + v0);
            char v3 = *(char*)(v1 + v0 + 1);
            *(char*)(v1 + (int)ptr0) = *(char*)(v1 + v0 + 3);
            *(char*)((char*)(v1 + (int)ptr0) + 1) = *(char*)(v1 + v0 + 2);
            *(char*)((char*)(v1 + (int)ptr0) + 3) = v2;
            *(char*)((char*)(v1 + (int)ptr0) + 2) = v3;
            v1 += 4;
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
            char v0 = *ptr1;
            char v1 = *(ptr1 + 1);
            *ptr2 = *(ptr1 + 7);
            *(ptr2 + 1) = *(ptr1 + 6);
            *(ptr2 + 7) = v0;
            *(ptr2 + 6) = v1;
            char v2 = *(ptr1 + 2);
            char v3 = *(ptr1 + 3);
            *(ptr2 + 2) = *(ptr1 + 5);
            *(ptr2 + 3) = *(ptr1 + 4);
            *(ptr2 + 5) = v2;
            *(ptr2 + 4) = v3;
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
    int v0;
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

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_set_minor_heap_size(int param0) {
    unsigned int v0;
    if(caml_young_end != caml_young_ptr) {
        caml_minor_collection();
    }
    int* ptr0 = caml_aligned_malloc(param0, 0, &v0);
    int* ptr1 = ptr0;
    if(!ptr0) {
        ptr0 = (int*)caml_raise_out_of_memory();
    }
    int v1 = (int)ptr0 + param0;
    int v2 = caml_page_table_add(2, (int)ptr0, v1);
    if(v2) {
        caml_raise_out_of_memory();
    }
    int v3 = caml_young_start;
    if(v3) {
        caml_page_table_remove((void*)0x2, v3, caml_young_end);
        →free();
    }
    caml_young_base = v0;
    caml_young_start = ptr1;
    caml_young_end = v1;
    caml_young_limit = ptr1;
    caml_young_ptr = v1;
    caml_minor_heap_size = param0;
    reset_table();
    return reset_table();
}

int caml_set_parser_trace(int param0) {
    int result = ((caml_parser_trace < 1 ? -1: 0) & 0xfffffffe) + 3;
    caml_parser_trace = (unsigned int)(param0 >> 1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_set_signal_action(int __sig, int param1) {
    int v0;
    int v1;
    char v2;
    int v3;
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
    int v4 = →sigaction(__sig, &v1, &v3);
    return v4 == -1 ? -1: v3 == &handle_signal ? 2: v3 == 1 ? 1: 0;
}

int caml_shrink_heap(int param0) {
    int result;
    int v0 = param0;
    if(caml_heap_start != v0) {
        unsigned int v1 = caml_stat_heap_size - *(int*)(v0 - 8);
        caml_stat_heap_size -= *(int*)(v0 - 8);
        caml_gc_message(4, "Shrinking heap to %luk bytes\n", (int)(v1 >>> 10));
        --caml_stat_heap_chunks;
        unsigned int v2 = caml_heap_start;
        int* ptr0 = (int*)&caml_heap_start;
        while(v2 != v0) {
            ptr0 = (int*)(v2 - 4);
            v2 = *(unsigned int*)(v2 - 4);
        }
        *ptr0 = *(int*)(v0 - 4);
        caml_page_table_remove((void*)0x1, v0, *(int*)(v0 - 8) + v0);
        result = caml_free_for_heap(v0);
    }
    return result;
}

int caml_sin_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →sin(*param0);
}

int caml_sinh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →sinh(*param0);
}

long long* caml_sqrt_float(double* param0) {
    __SyntheticTypeUnknown v0;
    long long v1;
    int v2;
    int v3;
    char v4;
    __SyntheticTypeUnknownF __x;
    char v5 = 6;
    __int128 v6 = *param0;
    fsqrt();
    v0[v4] = fucomi(v6, v6);
    if((__parity__((unsigned char)&v1)) || &v2 != 28) {
        v5 = 0;
        v0[v4] = /*NO_RETURN*/ →sqrt(__x);
    }
    v0[v5 + 1] = v0[v5];
    return caml_copy_double(v0[v5 + 1], v3);
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

int caml_start_program(int param0) {
    int result;
    unsigned int v0 = caml_gc_regs;
    unsigned int v1 = caml_last_return_address;
    unsigned int v2 = caml_bottom_of_stack;
    int v3 = &sub_80701AE;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    caml_apply2(param0);
    caml_exception_pointer = v4;
    caml_bottom_of_stack = v2;
    caml_last_return_address = v1;
    caml_gc_regs = v0;
    return result;
}

int caml_startup(unsigned int param0) {
    return caml_main(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_stat_resize(void* __ptr, size_t __size) {
    void* result = →realloc(__ptr, __size);
    if(!result) {
        result = (void*)caml_raise_out_of_memory();
    }
    return result;
}

int caml_string_compare(int param0, int param1) {
    int result;
    int v0 = param1;
    if(v0 != param0) {
        int v1 = caml_string_length(param0);
        int v2 = caml_string_length(v0);
        int v3 = (unsigned int)v2 <= (unsigned int)v1 ? v2: v1;
        int v4 = param0;
        int v5 = v3;
        char v6 = 1;
        char v7 = (unsigned int)v3 < (unsigned int)v3;
        while(v5 != 0) {
            v6 = *(char*)v4 == *(char*)v0;
            v7 = *(unsigned char*)v4 < *(unsigned char*)v0;
            ++v4;
            ++v0;
            --v5;
            if(!v6) {
                break;
            }
        }
        int v8 = (int)((v7 || v6 ? 0: 1) - (unsigned char)((unsigned int)(v7 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8)));
        if(v8 >= 0) {
            if(v8 <= 0) {
                char v9 = v2 == v1;
                if((unsigned int)v2 > (unsigned int)v1) {
                    goto loc_806788D;
                }
                else if(v9 != 0) {
                    return 1;
                }
            }
            result = 3;
        }
        else {
        loc_806788D:
            result = -1;
        }
    }
    else {
        result = 1;
    }
    return result;
}

int caml_string_equal(int* param0, int* param1) {
    int result;
    int* ptr0 = param0;
    int* ptr1 = param1;
    if(ptr0 != ptr1) {
        int v0 = *(ptr0 - 1) >>> 10;
        if(*(ptr1 - 1) >>> 10 == v0) {
            if(!v0) {
                return 3;
            }
            else if(*ptr0 == *ptr1) {
                do {
                    --v0;
                    if(!v0) {
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

int caml_string_get(int param0, int param1) {
    if((unsigned int)(param1 >> 1) < 0x80000000) {
        int v0 = caml_string_length(param0);
        if((unsigned int)(param1 >> 1) >= (unsigned int)v0) {
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
    return (v0 <= 0 ? 0: 1) * 2 + 1;
}

int caml_string_greaterthan(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return (v0 <= 1 ? 0: 1) * 2 + 1;
}

int caml_string_length(int param0) {
    int v0 = (*(int*)(param0 - 4) >>> 10) * 4 - 1;
    return v0 - (int)*(char*)(v0 + param0);
}

int caml_string_lessequal(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return (v0 < 2 ? 1: 0) * 2 + 1;
}

int caml_string_lessthan(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return (v0 <= 0 ? 1: 0) * 2 + 1;
}

int caml_string_notequal(int* param0, int* param1) {
    int v0 = caml_string_equal(param0, param1);
    return 4 - v0;
}

int caml_string_set(int param0, int param1, int param2) {
    if((unsigned int)(param1 >> 1) < 0x80000000) {
        int v0 = caml_string_length(param0);
        if((unsigned int)(param1 >> 1) >= (unsigned int)v0) {
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

int caml_sys_chdir(char* __path) {
    int v0 = →chdir(__path);
    if(v0) {
        caml_sys_error((int)__path);
    }
    return 1;
}

int caml_sys_close(int param0) {
    →close(param0 >> 1);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_error(int param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    int v3 = 1;
    int v4 = 1;
    int* ptr1 = &param0;
    int v5 = 0;
    int* ptr2 = &v2;
    caml_local_roots = &ptr2;
    int v6 = 1;
    int v7 = 1;
    int* ptr3 = &v5;
    →__errno_location();
    char* ptr4 = →strerror(ptr0[0]);
    if(param0 == 1) {
        v5 = caml_copy_string(ptr4);
    }
    else {
        char* ptr5 = ptr4;
        int v8 = -1;
        while(v8 != 0) {
            char v9 = ptr5[0] == 0;
            ++ptr5;
            --v8;
            if(!~v9) {
                break;
            }
        }
        int v10 = caml_string_length(param0);
        v5 = caml_alloc_string(v10 - v8);
        →memmove();
        *(short*)(v10 + v5) = 8250;
        →memmove();
    }
    /*BAD_CALL!*/ caml_raise_sys_error(v5);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_exit(int param0) {
    /*NO_RETURN*/ →exit(param0 >> 1);
}

int caml_sys_file_exists(char* __filename) {
    char v0;
    int v1 = →__xstat64(3, __filename, &v0);
    return (((unsigned int)v1 < 1 ? -1: 0) & 0x2) + 1;
}

int caml_sys_get_argv() {
    unsigned int v0 = caml_local_roots;
    int v1 = 0;
    int* ptr0 = NULL;
    int result = 0;
    unsigned int v2 = v0;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 3;
    int* ptr1 = &v1;
    int* ptr2 = &ptr0;
    int* ptr3 = &result;
    v1 = caml_copy_string(caml_exe_name);
    ptr0 = caml_copy_string_array(caml_main_argv);
    int v5 = caml_alloc_small(2, 0);
    result = v5;
    *(int*)v5 = v1;
    *(int**)(result + 4) = ptr0;
    caml_local_roots = v0;
    return result;
}

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

int caml_sys_getcwd() {
    char v0;
    char* ptr0 = →getcwd(&v0, 0x1000);
    if(!ptr0) {
        caml_sys_error(1);
    }
    return caml_copy_string(&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_getenv(char* __name) {
    char* ptr0 = →getenv(__name);
    if(!ptr0) {
        ptr0 = (char*)caml_raise_not_found();
    }
    return caml_copy_string(ptr0);
}

unsigned int caml_sys_init(unsigned int param0, unsigned int param1) {
    caml_exe_name = param0;
    caml_main_argv = param1;
    return param1;
}

int caml_sys_io_error(int param0) {
    int* ptr0;
    →__errno_location();
    if(*ptr0 == 11) {
        caml_raise_sys_blocked_io();
    }
    return caml_sys_error(param0);
}

int caml_sys_is_directory(char* __filename) {
    char v0;
    int v1;
    int v2 = →__xstat64(3, __filename, &v0);
    if(v2 == -1) {
        caml_sys_error((int)__filename);
    }
    return ((v1 & 0xf000) == 0x4000 ? 1: 0) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_open(int param0, int* param1, int param2) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v4 = caml_string_length(param0);
    char* __dest = (char*)caml_stat_alloc(v4 + 1);
    →strcpy(__dest, (char*)param0);
    int __oflag = caml_convert_flag_list(param1, &sys_open_flags);
    int v5 = param2 >> 1;
    caml_enter_blocking_section();
    int v6 = →open64(__dest, __oflag, v5);
    if(v6 != -1) {
        int v7 = 1;
        int v8 = 2;
        →fcntl();
        caml_leave_blocking_section();
        caml_stat_free((int)__dest);
    }
    else {
        caml_leave_blocking_section();
        caml_stat_free((int)__dest);
        caml_sys_error(param0);
    }
    caml_local_roots = v1;
    return v6 * 2 + 1;
}

int caml_sys_random_seed() {
    int v0;
    int v1;
    →gettimeofday(&v0, NULL);
    __pid_t v2 = →getppid();
    __pid_t v3 = →getpid();
    return ((v2 * 0x10000) ^ ((v0 ^ v1) ^ v3)) * 2 + 1;
}

int* caml_sys_read_directory(char* __name) {
    unsigned int v0;
    char v1;
    int* ptr0;
    unsigned int v2 = caml_local_roots;
    int v3 = 1;
    int v4 = 1;
    int* ptr1 = &__name;
    int* result = NULL;
    int* ptr2 = &v0;
    caml_local_roots = &ptr2;
    int v5 = 1;
    int v6 = 1;
    int* ptr3 = &result;
    caml_ext_table_init(&v1, 50);
    int v7 = caml_read_directory(__name, &v1);
    if(v7 == -1) {
        caml_ext_table_free(&v1, 1);
        caml_sys_error((int)__name);
    }
    caml_ext_table_add(&v1, 0);
    result = caml_copy_string_array(ptr0);
    caml_ext_table_free(&v1, 1);
    caml_local_roots = v2;
    return result;
}

int caml_sys_remove(char* __name) {
    int v0 = →unlink(__name);
    if(v0) {
        caml_sys_error((int)__name);
    }
    return 1;
}

int caml_sys_rename(char* __old, char* __new) {
    int v0 = →rename(__old, __new);
    if(v0) {
        caml_sys_error(1);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_system_command(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v1;
    int v3 = 1;
    int v4 = 1;
    int* ptr0 = &param0;
    int v5 = caml_string_length(param0);
    char* __command = (char*)caml_stat_alloc(v5 + 1);
    int v6 = param0;
    →memmove();
    caml_enter_blocking_section();
    int v7 = →system(__command);
    caml_leave_blocking_section();
    caml_stat_free((int)__command);
    if(v7 == -1) {
        caml_sys_error(param0);
        v0 = 0xFF;
    }
    else {
        v0 = v7 & 0x7f ? 0xFF: (unsigned int)(unsigned char)(v7 >>> 8);
    }
    caml_local_roots = v2;
    return v0 * 2 + 1;
}

long long* caml_sys_time() {
    char v0;
    int v1;
    int v2;
    int v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    int* ptr0 = &v0;
    int v6 = 0;
    →getrusage();
    v7[v8 + 1] = fdivrp((double)v1 / 1000000.0, (double)v2);
    *(long long*)&v6 = v4 + v5;
    return caml_copy_double(*(double*)&v6, v3);
}

int caml_tan_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →tan(*param0);
}

int caml_tanh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    char v1;
    v0[v1] = /*NO_RETURN*/ →tanh(*param0);
}

unsigned int caml_try_leave_blocking_section_default() {
    unsigned int result = caml_async_signal_mode;
    caml_async_signal_mode = 0;
    return result;
}

int caml_tuplify2() {
    int v0;
    jump *(int*)(v0 + 8);
}

int caml_tuplify3() {
    int v0;
    jump *(int*)(v0 + 8);
}

int caml_update_dummy(unsigned int* param0, int param1) {
    int v0 = param1;
    unsigned int v1 = *(unsigned int*)(v0 - 4);
    unsigned int v2 = (unsigned int)*(char*)(v0 - 4);
    unsigned int* ptr0 = param0;
    *(char*)&ptr0[-1] = (unsigned char)v2;
    if((unsigned char)v2 != 254) {
        v1 >>>= 10;
        unsigned int v3 = v1;
        unsigned int v4 = 0;
        if(v1) {
            do {
                caml_modify(ptr0, *(unsigned int*)(v4 * 4 + v0));
                ++v4;
                ++ptr0;
            }
            while(v4 < v3);
        }
    }
    else {
        v2 = (unsigned int)(*(unsigned int*)(v0 - 4) >>> 11);
        if(v2) {
            unsigned int v5 = 0;
            do {
                *(long long*)&ptr0[v5 * 2] = *(double*)(v5 * 8 + v0);
                ++v5;
            }
            while(v5 < v2);
        }
    }
    return 1;
}

unsigned int caml_urge_major_slice() {
    caml_force_major_slice = 1;
    unsigned int result = caml_young_end;
    caml_young_limit = caml_young_end;
    return result;
}

int caml_weak_blit(int param0, int param1, int param2, int param3, int param4) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    int v3 = param1 >> 1;
    unsigned int v4 = (unsigned int)((param1 >> 1) + 1);
    if(v4) {
        v2 = (unsigned int)(param4 >> 1);
        v1 = param0;
        if((unsigned int)(param4 >> 1) + v4 > (unsigned int)(*(int*)(v1 - 4) >>> 10)) {
            goto loc_806E38F;
        }
    }
    else {
    loc_806E38F:
        caml_invalid_argument("Weak.blit");
    }
    int v5 = param3 >> 1;
    unsigned int v6 = (unsigned int)((param3 >> 1) + 1);
    if(!(unsigned int)((param3 >> 1) + 1) || v6 + v2 > (unsigned int)(*(int*)(param2 - 4) >>> 10)) {
        caml_invalid_argument("Weak.blit");
    }
    if(!caml_gc_phase && caml_gc_subphase == 11 && v2) {
        v0 = 0;
        unsigned int v7 = 0;
        unsigned int v8 = v4;
        do {
            unsigned int* ptr0 = (unsigned int*)((v0 + v8) * 4 + v1);
            int v9 = *ptr0;
            unsigned int v10 = caml_weak_none;
            if(v10 != v9 && !((unsigned char)v9 & 0x1)) {
                int v11 = v9;
                if((*(char*)(((v9 >>> 12) & 0x7ff) + *(int*)((v9 >>> 23) * 4 + (int)&caml_page_table)) & 0x1) && !(*(int*)(v11 - 4) & 0x300)) {
                    *ptr0 = v10;
                }
            }
            ++v7;
            v0 = v7;
        }
        while(v7 < v2);
        v4 = v8;
    }
    if(v4 <= v6) {
        v6 = v2 - 1;
        if(v6 < 0x80000000) {
            unsigned int* ptr1 = (unsigned int*)((v3 + v2) * 4 + v1);
            int* ptr2 = (int*)(v5 + v2);
            unsigned int v12 = v6;
            do {
                do_set(ptr1[0], ptr2);
                --ptr1;
                ptr2 = (int*)((char*)ptr2 - 1);
                --v12;
            }
            while(v12 < 0x80000000);
        }
    }
    else if(v2) {
        v0 = 0;
        unsigned int v13 = 0;
        do {
            do_set(*(unsigned int*)((v0 + v4) * 4 + v1), (int*)(v0 + v6));
            ++v13;
            v0 = v13;
        }
        while(v13 < v2);
    }
    return 1;
}

int caml_weak_check(int param0, int param1) {
    int v0;
    int v1 = (param1 >> 1) + 1;
    if(v1) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v1) {
            v1 = caml_invalid_argument("Weak.get");
            return (*(int*)(v1 * 4 + v0) == caml_weak_none ? 0: 1) * 2 + 1;
        }
    }
    else {
        v1 = caml_invalid_argument("Weak.get");
    }
    return (*(int*)(v1 * 4 + v0) == caml_weak_none ? 0: 1) * 2 + 1;
}

int* caml_weak_create(int param0) {
    unsigned int v0 = (unsigned int)((param0 >> 1) + 1);
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

int caml_weak_get(int param0, int param1) {
    int v0;
    unsigned int v1 = caml_local_roots;
    unsigned int v2 = caml_local_roots;
    int v3 = 1;
    int v4 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    int* ptr2 = NULL;
    int* ptr3 = &v2;
    caml_local_roots = &ptr3;
    int v5 = 1;
    int v6 = 2;
    int* ptr4 = &result;
    int* ptr5 = &ptr2;
    int v7 = (param1 >> 1) + 1;
    if(v7) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v7) {
            goto loc_806E7FA;
        }
    }
    else {
    loc_806E7FA:
        v7 = caml_invalid_argument("Weak.get");
    }
    int* ptr6 = *(int**)(v7 * 4 + v0);
    if(caml_weak_none == ptr6) {
        result = 1;
    }
    else {
        ptr2 = ptr6;
        if(!caml_gc_phase && !((unsigned char)ptr6 & 0x1) && (*(char*)((int)(int*)((int)(int*)((int)ptr6 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr6 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
            int v8 = 0;
            caml_darken(ptr6);
        }
        int v9 = caml_alloc_small(1, 0);
        result = v9;
        *(int**)v9 = ptr2;
    }
    caml_local_roots = v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_get_copy(int param0, int param1) {
    int v0;
    int result1;
    int v1;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    int* ptr2 = NULL;
    int* ptr3 = &v3;
    caml_local_roots = &ptr3;
    int v6 = 1;
    int v7 = 2;
    int* ptr4 = &result;
    int* ptr5 = &ptr2;
    if((unsigned int)((param1 >> 1) + 1)) {
        v1 = param0;
        if((unsigned int)((param1 >> 1) + 1) >= (unsigned int)(int*)(*(int*)(v1 - 4) >>> 10)) {
            goto loc_806E589;
        }
    }
    else {
    loc_806E589:
        v1 = caml_invalid_argument("Weak.get");
    }
    int* ptr6 = *(int**)((unsigned int)((param1 >> 1) + 1) * 4 + v1);
    if(caml_weak_none == ptr6) {
        caml_local_roots = v2;
        result1 = 1;
    }
    else if(!((unsigned char)ptr6 & 0x1) && (*(char*)((int)(int*)((int)(int*)((int)ptr6 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr6 >>> 23) * 4) + (int)&caml_page_table)) & 0x3)) {
        ptr2 = caml_alloc((unsigned int)(ptr6[-1] >>> 10), (int)*(char*)&ptr6[-1]);
        int* ptr7 = *(int**)((unsigned int)((param1 >> 1) + 1) * 4 + param0);
        if(caml_weak_none == ptr7) {
            caml_local_roots = v2;
            result1 = 1;
        }
        else {
            int* ptr8 = ptr7;
            if(*(char*)&ptr7[-1] <= 250) {
                unsigned char* ptr9 = (unsigned char*)(ptr7 - 1);
                if((ptr7[-1] >>> 10)) {
                    unsigned int v8 = 0;
                    unsigned int v9 = v2;
                    do {
                        int v10 = v8 * 4;
                        int* ptr10 = ptr8[v8];
                        if(!caml_gc_phase && !((unsigned char)ptr10 & 0x1) && (*(char*)((int)(int*)((int)(int*)((int)ptr10 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr10 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
                            v0 = 0;
                            caml_darken(ptr10);
                        }
                        unsigned int* ptr11 = (unsigned int*)(v10 + (int)ptr2);
                        int* ptr12 = *ptr11;
                        *ptr11 = ptr10;
                        int* ptr13 = (int*)(v10 + (int)ptr2);
                        if((*(char*)((int)(int*)((int)(int*)((int)ptr13 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr13 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
                            if(!caml_gc_phase) {
                                v0 = 0;
                                caml_darken(ptr12);
                            }
                            if(!((unsigned char)ptr10 & 0x1)) {
                                unsigned int v11 = caml_young_end;
                                if(v11 > (unsigned int)ptr10) {
                                    unsigned int v12 = caml_young_start;
                                    if(v12 < (unsigned int)ptr10 && (((unsigned char)ptr12 & 0x1) || v11 <= (unsigned int)ptr12 || v12 >= (unsigned int)ptr12)) {
                                        if(gvar_807EB48 >= gvar_807EB4C) {
                                            caml_realloc_ref_table((int*)&caml_ref_table);
                                        }
                                        unsigned int* ptr14 = gvar_807EB48;
                                        *ptr14 = (int*)(v10 + (int)ptr2);
                                        gvar_807EB48 = (int*)(ptr14 + 1);
                                    }
                                }
                            }
                        }
                        ++v8;
                    }
                    while((unsigned int)(*(int*)ptr9 >>> 10) > v8);
                    v2 = v9;
                }
            }
            else {
                →memmove();
            }
            int v13 = caml_alloc_small(1, 0);
            result = v13;
            *(int**)v13 = ptr2;
            caml_local_roots = v2;
            return result;
        }
    }
    else {
        ptr2 = ptr6;
        int v13 = caml_alloc_small(1, 0);
        result = v13;
        *(int**)v13 = ptr2;
        caml_local_roots = v2;
        result1 = result;
    }
    return result1;
}

int caml_weak_set(int param0, int param1, unsigned int* param2) {
    int v0;
    if((int*)((param1 >> 1) + 1)) {
        v0 = param0;
        if((unsigned int)(int*)((param1 >> 1) + 1) >= (unsigned int)(*(int*)(param0 - 4) >>> 10)) {
            goto loc_806E4DA;
        }
    }
    else {
    loc_806E4DA:
        caml_invalid_argument("Weak.set");
    }
    if(param2 != 1 && !((unsigned char)param2 & 0x1)) {
        do_set(param2[0], (int*)((param1 >> 1) + 1));
    }
    else {
        *(unsigned int*)((int)(int*)((int)(int*)((param1 >> 1) + 1) * 4) + v0) = caml_weak_none;
    }
    return 1;
}

int* clear_table() {
    int* result;
    *(result + 3) = *result;
    *(result + 4) = *(result + 2);
    return result;
}

int clip_heap_chunk_size() {
    unsigned int v0;
    return ((v0 <= 0x1fff ? 0x2000: v0) + 0xfff) & 0xfffff000;
}

int compact_allocate() {
    unsigned int v0;
    unsigned int v1 = compact_fl;
    if((unsigned int)(*(int*)(v1 - 8) - *(int*)(v1 - 12)) <= 16) {
        unsigned int v2 = *(unsigned int*)(v1 - 4);
        int v3 = v2 - 16;
        if((unsigned int)(*(int*)(v3 + 8) - *(int*)(v3 + 4)) <= 16) {
            v1 = v2;
            while(1) {
                unsigned int v4 = *(unsigned int*)(v3 + 12);
                v3 = v4 - 16;
                if((unsigned int)(*(int*)(v3 + 8) - *(int*)(v3 + 4)) > 16) {
                    break;
                }
                else {
                    v2 = v4;
                    v1 = v4;
                }
            }
            compact_fl = v2;
        }
    }
    int v5 = v1 - 16;
    int i;
    for(i = *(int*)(v5 + 4); (unsigned int)(*(int*)(v5 + 8) - i) < v0; i = *(int*)(v5 + 4)) {
        v1 = *(unsigned int*)(v5 + 12);
        v5 = v1 - 16;
    }
    *(int*)(v5 + 4) = v0 + i;
    return v1 + i;
}

int compare_channel(int param0, int param1) {
    int result;
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    if(v0 != v1) {
        result = v0 < v1 ? -1: 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int compare_free_stack() {
    int result;
    void* __ptr = compare_stack;
    if(__ptr != &compare_stack_init) {
        →free(__ptr);
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
int compare_val(int param0, int param1) {
    int result;
    char v0;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    int v5 = param1;
    int v6 = param0;
    unsigned int* ptr0 = compare_stack;
loc_80653F7:
    while(1) {
        char v7 = v5 == v4;
        int v8 = (unsigned int)(v7 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        if(!v7 || !v6) {
            if(!((unsigned char)v4 & 0x1)) {
                if(((unsigned char)v5 & 0x1)) {
                    param0 = v4;
                    if(!(*(char*)(((param0 >>> 12) & 0x7ff) + *(int*)((param0 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                        return result;
                    }
                    char v9 = *(char*)(param0 - 4);
                    if(v9 != 250) {
                        if(v9 == 0xFF) {
                            param1 = v4;
                            int v10 = *(int*)(*(int*)param1 + 24);
                            if(v10) {
                                caml_compare_unordered = 0;
                                result = v10(param1, v5);
                                if((!caml_compare_unordered || v6) && !result) {
                                    goto loc_806594C;
                                }
                            }
                        }
                        return result;
                    }
                    v4 = *(int*)v4;
                    goto loc_80653F7;
                }
                else {
                    int v11 = v4;
                    int v12 = v11;
                    if((*(char*)(((v11 >>> 12) & 0x7ff) + *(int*)((v11 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                        int v13 = v5;
                        int v14 = v13;
                        if((*(char*)(((v5 >>> 12) & 0x7ff) + *(int*)((v13 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                            char* ptr1 = (char*)(v12 - 4);
                            int v15 = (int)*ptr1;
                            param1 = (int)(v15 & 0xFF);
                            int v16 = v14 - 4;
                            int v17 = v16;
                            (unsigned int)(v2 & 0xFF) = *(char*)v16;
                            if(param1 == 250) {
                                v4 = *(int*)v4;
                                goto loc_80653F7;
                            }
                            else {
                                param0 = (int)(unsigned int)(v2 & 0xFF);
                                if(param0 == 250) {
                                    v5 = *(int*)v5;
                                    goto loc_80653F7;
                                }
                                else if(param0 != param1) {
                                    return result;
                                }
                                else {
                                    int v18 = v15 + 9;
                                    char v19 = (unsigned char)v18 == 8;
                                    char v20 = __parity__((unsigned char)v18 - 8);
                                    char v21 = (unsigned char)v18 < 8;
                                    if((v21 || v19)) {
                                        switch(v18) {
                                            case 1: {
                                                goto loc_80657A6;
                                            }
                                            case 0: 
                                            case 2: {
                                            loc_8065783:
                                                compare_free_stack();
                                                caml_invalid_argument("equal: functional value");
                                            loc_80657A6:
                                                if(*(int*)(v14 + 4) >> 1 != *(int*)(v12 + 4) >> 1) {
                                                    return result;
                                                }
                                                goto loc_806594C;
                                            }
                                            case 3: {
                                                goto loc_806583F;
                                            }
                                            case 4: {
                                                compare_free_stack();
                                                caml_invalid_argument("equal: abstract value");
                                                goto loc_8065783;
                                            }
                                            case 5: {
                                                goto loc_806561C;
                                            }
                                            case 6: {
                                                char v22 = v0 - 1;
                                                v1[v22] = *(double*)v4;
                                                v0 = v22 - 1;
                                                v1[v0] = *(double*)v5;
                                                v1[v40] = fucomi(v1[v0], v1[v0 + 1]);
                                                if(!v21 && !v19) {
                                                    return result;
                                                }
                                                v1[v40] = fucomi(v1[v0], v1[v0 + 1]);
                                                if(!v21 && !v19) {
                                                    return result;
                                                }
                                                v1[v40] = fucomi(v1[v0], v1[v0 + 1]);
                                                if((!v20 && v19)) {
                                                    v0 += 2;
                                                }
                                                else if(!v6) {
                                                    return result;
                                                }
                                                else {
                                                    v1[v40] = fucomip(v1[v0], v1[v0]);
                                                    v1[v40] = fucomip(v1[v0], v1[v0]);
                                                }
                                                goto loc_806594C;
                                            }
                                            case 7: {
                                                param1 = *(int*)ptr1 >>> 11;
                                                if(*(int*)v17 >>> 11 != param1) {
                                                    return result;
                                                }
                                                else if(param1) {
                                                    char v23 = v0 - 1;
                                                    v1[v23] = *(double*)v12;
                                                    v0 = v23 - 1;
                                                    v1[v0] = *(double*)v14;
                                                    v1[v40] = fucomi(v1[v0], v1[v0 + 1]);
                                                    return result;
                                                }
                                                goto loc_806594C;
                                            }
                                            case 8: {
                                                int v24 = *(*(int**)v5 + 2);
                                                if(*(*(int**)v4 + 2) != v24) {
                                                    →strcmp();
                                                    return result;
                                                }
                                                if(!v24) {
                                                    compare_free_stack();
                                                    caml_invalid_argument("equal: abstract value");
                                                }
                                                caml_compare_unordered = 0;
                                                result = v24(v4, v5);
                                                if((caml_compare_unordered && !v6) || result) {
                                                    return result;
                                                }
                                                goto loc_806594C;
                                            }
                                            default: {
                                                throw 0;
                                            }
                                        }
                                    loc_806561C:
                                        if(!(unsigned char)v8) {
                                            int v25 = caml_string_length(v4);
                                            int v26 = /*BAD_CALL!*/ caml_string_length(v5);
                                            int v27 = →memcmp((void*)v4, (void*)v5, (unsigned int)v26 <= (unsigned int)v25 ? v26: v25);
                                            if(v27 < 0 || v27 > 0 || v26 != v25) {
                                                return result;
                                            }
                                        }
                                        goto loc_806594C;
                                    }
                                    else {
                                    loc_806583F:
                                        v2 = (unsigned int)(*(int*)ptr1 >>> 10);
                                        if(*(int*)v17 >>> 10 != v2) {
                                            return result;
                                        }
                                        else if(!v2) {
                                            goto loc_806594C;
                                        }
                                        else if(v2 <= 1) {
                                        loc_8065932:
                                            v4 = *(int*)v4;
                                            v5 = *(int*)v5;
                                            goto loc_80653F7;
                                        }
                                        else {
                                            ptr0 += 3;
                                            unsigned int v28 = compare_stack_limit;
                                            if(v28 > (unsigned int)ptr0) {
                                            loc_8065919:
                                                *ptr0 = v12 + 4;
                                                *(int*)(ptr0 + 1) = v14 + 4;
                                                *(int*)(ptr0 + 2) = v2 - 1;
                                                goto loc_8065932;
                                            }
                                            else {
                                                unsigned int v29 = compare_stack;
                                                unsigned int v30 = v29;
                                                int v31 = ((v28 - v29) >> 2) * 0x55555556;
                                                int v32 = v31;
                                                if((unsigned int)v31 > 0xfffff) {
                                                    compare_stack_overflow();
                                                }
                                                void* __ptr = compare_stack;
                                                if(__ptr == &compare_stack_init) {
                                                    int v33 = v32 * 12;
                                                    →malloc();
                                                    v17 = v3;
                                                    if(!v3) {
                                                        compare_stack_overflow();
                                                    }
                                                    int v34 = 0x300;
                                                    int v35 = v17;
                                                    v15 = &compare_stack_init;
                                                    while(v34 != 0) {
                                                        *(int*)v35 = *(int*)v15;
                                                        v15 += 4;
                                                        v35 += 4;
                                                        --v34;
                                                    }
                                                loc_80658F7:
                                                    param0 = v17;
                                                    compare_stack = param0;
                                                    compare_stack_limit = (unsigned int)(v32 * 12 + param0);
                                                    ptr0 = (unsigned int*)((int)(int*)((int)(int*)((int)ptr0 - v30) & 0xfffffffc) + param0);
                                                    goto loc_8065919;
                                                }
                                                else {
                                                    int v36 = (int)→realloc(__ptr, (size_t)(v32 * 12));
                                                    v17 = v36;
                                                    if(!v36) {
                                                        compare_stack_overflow();
                                                    }
                                                    goto loc_80658F7;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if(!(unsigned char)v8) {
                        return result;
                    }
                }
            }
            else if(!(unsigned char)v8 && ((unsigned char)v5 & 0x1)) {
                return result;
            }
            else if(!(unsigned char)v8) {
                param0 = v5;
                if(!(*(char*)(((param0 >>> 12) & 0x7ff) + *(int*)((param0 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                    return result;
                }
                char v37 = *(char*)(param0 - 4);
                if(v37 != 250) {
                    if(v37 == 0xFF) {
                        param0 = v5;
                        int v38 = *(int*)(*(int*)param0 + 24);
                        if(v38) {
                            caml_compare_unordered = 0;
                            result = v38(v4, param0);
                            if((!caml_compare_unordered || v6) && !result) {
                                goto loc_806594C;
                            }
                        }
                    }
                    return result;
                }
                v5 = *(int*)v5;
                goto loc_80653F7;
            }
        }
    loc_806594C:
        if(compare_stack == ptr0) {
            return result;
        }
        int* ptr2 = *ptr0;
        v4 = *ptr2;
        *ptr0 = ptr2 + 1;
        int* ptr3 = *(ptr0 + 1);
        v5 = *ptr3;
        *(ptr0 + 1) = ptr3 + 1;
        int v39 = *(int*)(ptr0 + 2) - 1;
        *(int*)(ptr0 + 2) = v39;
        ptr0 = v39 ? ptr0: ptr0 - 3;
    }
    return result;
}

int cst_to_constr(int param0, int* param1, int param2, int param3) {
    int result;
    if(param2 > 0) {
        int v0 = 0;
        if(*param1 != param0) {
            do {
                ++v0;
                if(v0 >= param2) {
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
    int v0 = param0;
    unsigned int v1 = (unsigned int)(*(int*)(v0 - 4) >>> 10);
    int v2 = caml_stat_alloc(v1 * 4 + 4);
    int result = v2;
    if(v1) {
        unsigned int v3 = 0;
        do {
            *(int*)(v3 * 4 + v2) = *(int*)(v3 * 4 + v0);
            ++v3;
        }
        while(v3 < v1);
    }
    *(int*)(v1 * 4 + result) = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int decode_sigset(int param0, sigset_t* __set) {
    int* ptr0;
    int* ptr1 = ptr0;
    int result = →sigemptyset(__set);
    while(ptr1 != 1) {
        unsigned int v0 = caml_convert_signal_number((unsigned int)(*ptr1 >> 1));
        result = →sigaddset(__set, (int)v0);
        ptr1 = *(unsigned int*)(ptr1 + 1);
    }
    return result;
}

unsigned int do_set(unsigned int param0, int* param1) {
    unsigned int result;
    if(!((unsigned char)param0 & 0x1) && caml_young_end > param0 && caml_young_start < param0) {
        unsigned int* ptr0 = (unsigned int*)((int)(int*)((int)param1 * 4) + result);
        result = *ptr0;
        *ptr0 = param0;
        if(((unsigned char)result & 0x1) || caml_young_end <= result || caml_young_start >= result) {
            if(gvar_807EB64 >= gvar_807EB68) {
                caml_realloc_ref_table((int*)&caml_weak_ref_table);
            }
            result = &gvar_807EB64;
            unsigned int* ptr1 = gvar_807EB64;
            *ptr1 = ptr0;
            gvar_807EB64 = (int*)(ptr1 + 1);
        }
    }
    else {
        *(unsigned int*)((int)(int*)((int)param1 * 4) + result) = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
ssize_t do_write(size_t param0, void* param1) {
    ssize_t result;
    int __fd;
    void* __buf = param1;
    size_t __n = param0;
    while(1) {
        caml_enter_blocking_section();
        result = →write(__fd, __buf, __n);
        caml_leave_blocking_section();
        if(result == -1) {
            →__errno_location();
            int v0 = *(int*)__fd;
            if(v0 == 4) {
                continue;
            }
            else if(v0 == 11 && (int)__n > 1) {
                __n = 1;
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

int encode_sigset() {
    sigset_t* ptr0;
    sigset_t* __set = ptr0;
    int result = 1;
    unsigned int v0 = caml_local_roots;
    caml_local_roots = &v0;
    int v1 = 1;
    int v2 = 1;
    int* ptr1 = &result;
    int __signo = 1;
    do {
        int v3 = →sigismember(__set, __signo);
        if(v3 > 0) {
            int v4 = caml_alloc_small(2, 0);
            int v5 = caml_rev_convert_signal_number(__signo);
            *(int*)v4 = v5 * 2 + 1;
            *(int*)(v4 + 4) = result;
            result = v4;
        }
        ++__signo;
    }
    while(__signo != 65);
    caml_local_roots = v0;
    return result;
}

int extern_invalid_argument() {
    int v0;
    extern_replay_trail();
    free_extern_output();
    /*BAD_CALL!*/ caml_invalid_argument(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int extern_out_of_memory() {
    extern_replay_trail();
    free_extern_output();
    /*BAD_CALL!*/ caml_raise_out_of_memory();
}

int* extern_rec(int param0) {
    int v0;
    int* result;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v4;
    while(!((unsigned char)v7 & 0x1)) {
        int v8 = v7;
        if(!(*(char*)(((v7 >>> 12) & 0x7ff) + *(int*)((v7 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
            if(caml_code_area_start <= (unsigned int)v7 && caml_code_area_end > (unsigned int)v7) {
                if(!extern_closures) {
                    extern_invalid_argument();
                }
                writecode32(param0, v7 - caml_code_area_start);
                caml_code_checksum();
                result = (int*)writeblock(v6, 16);
            }
            else {
                result = (int*)extern_invalid_argument();
            }
            return result;
        }
        v1 = *(int*)(v7 - 4);
        unsigned int v9 = (unsigned int)(unsigned char)v1;
        if((unsigned int)(unsigned char)v1 == 250) {
            int v10 = *(int*)v7;
            int v11 = *(int*)v7;
            if(!((unsigned char)v10 & 0x1)) {
                int v12 = v10;
                param0 = (v11 >>> 12) & 0x7ff;
                if((*(char*)(*(int*)((v10 >>> 23) * 4 + (int)&caml_page_table) + param0) & 0x7)) {
                    char v13 = *(char*)(v12 - 4);
                    v2 & 0xFF = *(char*)(v12 - 4);
                    if(v13 != 250 && v13 != 246 && v13 != 253) {
                        goto loc_8069B54;
                    }
                }
                goto loc_8069C5C;
            }
            else {
            loc_8069B54:
                v7 = v11;
                continue;
            }
        }
        else {
        loc_8069C5C:
            param0 = v1 >>> 10;
            v2 = v1 >>> 10;
            if(param0) {
                goto loc_8069CB4;
            }
        }
        if((unsigned int)(unsigned char)v1 <= 15) {
            if(extern_ptr >= extern_limit) {
                grow_extern_output();
            }
            char* ptr0 = extern_ptr;
            *ptr0 = (unsigned char)(unsigned int)(unsigned char)v1 + 128;
            result = (int*)(ptr0 + 1);
            extern_ptr = (int*)(ptr0 + 1);
            return result;
        }
        return writecode32(0, v1);
    loc_8069CB4:
        if((v1 & 0x300) != 0x200) {
            switch((unsigned int)(unsigned char)v1 - 249) {
                case 0: {
                    writecode32(param0, v2 * 4);
                    return (int*)extern_rec();
                }
                case 2: {
                    return (int*)extern_invalid_argument();
                }
                case 3: {
                    int v14 = caml_string_length(v7);
                    int v15 = v14;
                    if((unsigned int)v14 <= 31) {
                        if(extern_ptr >= extern_limit) {
                            grow_extern_output();
                        }
                        char* ptr1 = extern_ptr;
                        *ptr1 = (unsigned char)v14 + 32;
                        extern_ptr = (int*)(ptr1 + 1);
                    }
                    else if((unsigned int)v14 <= 0xff) {
                        writecode8(v6, v14);
                    }
                    else {
                        writecode32(v6, v14);
                    }
                    writeblock(v6, v14);
                    size_32 = (unsigned int)(((v14 + 4) >>> 2) + size_32 + 1);
                    size_64 = (unsigned int)(((v14 + 8) >>> 3) + size_64 + 1);
                    return (int*)extern_record_location();
                }
                case 4: {
                    if(extern_ptr >= extern_limit) {
                        grow_extern_output();
                    }
                    char* ptr2 = extern_ptr;
                    *ptr2 = 12;
                    extern_ptr = (int*)(ptr2 + 1);
                    writeblock(param0, 8);
                    size_32 += 3;
                    size_64 += 2;
                    return (int*)extern_record_location();
                }
                case 5: {
                    int v16 = v2 >>> 1;
                    if((unsigned int)(v2 >>> 1) <= 0xff) {
                        writecode8(param0, v2 >>> 1);
                    }
                    else {
                        writecode32(param0, v2 >>> 1);
                    }
                    writeblock(v6, (v2 >>> 1) * 8);
                    size_32 = (unsigned int)((v2 >>> 1) * 2 + size_32 + 1);
                    size_64 = (unsigned int)(size_64 + (v2 >>> 1) + 1);
                    return (int*)extern_record_location();
                }
                case 6: {
                    v2 = v7;
                    unsigned int* ptr3 = *(unsigned int**)v7;
                    char* ptr4 = *ptr3;
                    if(!*(int*)(ptr3 + 4)) {
                        extern_invalid_argument();
                    }
                    if(extern_ptr >= extern_limit) {
                        grow_extern_output();
                    }
                    char* ptr5 = extern_ptr;
                    *ptr5 = 18;
                    extern_ptr = (int*)(ptr5 + 1);
                    char* ptr6 = ptr4;
                    int v17 = -1;
                    while(v17 != 0) {
                        char v18 = *ptr6 == 0;
                        ++ptr6;
                        --v17;
                        if(!~v18) {
                            writeblock(v17, ~v17);
                            *(int*)(*(int*)v2 + 16)(v7, (int)&v3, (int)&v5);
                            size_32 = (unsigned int)(((v3 + 3) >>> 2) + size_32 + 2);
                            size_64 = (unsigned int)(((v5 + 7) >>> 3) + size_64 + 2);
                            return (int*)extern_record_location();
                        }
                    }
                    writeblock(v17, ~v17);
                    *(int*)(*(int*)v2 + 16)(v7, (int)&v3, (int)&v5);
                    size_32 = (unsigned int)(((v3 + 3) >>> 2) + size_32 + 2);
                    size_64 = (unsigned int)(((v5 + 7) >>> 3) + size_64 + 2);
                    return (int*)extern_record_location();
                }
                default: {
                    goto loc_8069F34;
                }
            }
        }
        else {
            v0 = (int)(obj_counter - *(int*)v7);
        }
        if((unsigned int)v0 <= 0xff) {
            return writecode8(param0, v0);
        }
        else if((unsigned int)v0 <= 0xffff) {
            return writecode16(param0, v0);
        }
        return writecode32(param0, v0);
    loc_8069F34:
        if((unsigned int)(unsigned char)v1 <= 15 && (unsigned int)v2 <= 7) {
            if(extern_ptr >= extern_limit) {
                grow_extern_output();
            }
            char* ptr7 = extern_ptr;
            *ptr7 = (unsigned char)v2 * 16 + (unsigned char)(unsigned int)(unsigned char)v1 + 128;
            extern_ptr = (int*)(ptr7 + 1);
        }
        else {
            writecode32(param0, (unsigned int)(unsigned char)v1 | ((unsigned int)((unsigned char)(v1 >>> 8) & 0xfc) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16));
        }
        int v19 = v2;
        size_32 = (unsigned int)(size_32 + v2 + 1);
        size_64 = (unsigned int)(size_64 + v2 + 1);
        int v20 = *(int*)v7;
        extern_record_location();
        v7 = v20;
        if(v2 != 1) {
            extern_rec();
            int v21 = v2 - 1;
            unsigned int v22 = 1;
            if((unsigned int)v21 <= 1) {
                v21 = 1;
            loc_8069FDD:
                v7 = *(int*)(v21 * 4 + v8);
            }
            else {
                do {
                    extern_rec();
                    ++v22;
                }
                while(v22 < (unsigned int)v21);
                goto loc_8069FDD;
            }
        }
    }
    int v23 = v7 >> 1;
    int v24 = v7 >> 1;
    if((unsigned int)(v7 >> 1) <= 63) {
        if(extern_ptr >= extern_limit) {
            grow_extern_output();
        }
        char* ptr8 = extern_ptr;
        *ptr8 = (unsigned char)(v7 >> 1) + 64;
        result = (int*)(ptr8 + 1);
        extern_ptr = (int*)(ptr8 + 1);
    }
    else if((unsigned int)((v7 >> 1) + 128) <= 0xff) {
        result = writecode8(param0, v7 >> 1);
    }
    else if((unsigned int)((v7 >> 1) + 0x8000) <= 0xffff) {
        result = writecode16(param0, v7 >> 1);
    }
    else {
        result = writecode32(param0, v7 >> 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int extern_record_location() {
    unsigned int result;
    unsigned int* ptr0;
    unsigned int* ptr1;
    if(!extern_ignore_sharing) {
        if(extern_trail_cur == extern_trail_limit) {
            int v0 = 0x200c;
            →malloc();
            if(!ptr0) {
                extern_out_of_memory();
            }
            *ptr0 = extern_trail_block;
            extern_trail_block = ptr0;
            extern_trail_cur = (int*)(ptr0 + 1);
            extern_trail_limit = (int*)(ptr0 + 2051);
        }
        int v1 = *(int*)(ptr1 - 1);
        unsigned int* ptr2 = extern_trail_cur;
        *ptr2 = (int*)(((v1 >>> 8) & 0x3) | (int)ptr1);
        *(int*)(ptr2 + 1) = *ptr1;
        extern_trail_cur = (int*)(ptr2 + 2);
        *(int*)(ptr1 - 1) = (unsigned int)(unsigned char)v1 | ((unsigned int)(((unsigned char)(v1 >>> 8) & 0xfc) | 0x2) << 8) | ((unsigned int)(unsigned short)(v1 >>> 16) << 16);
        result = obj_counter;
        *ptr1 = obj_counter;
        obj_counter = result + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* extern_replay_trail() {
    int* i;
    void* __ptr = extern_trail_block;
    int* max = extern_trail_cur;
    while(1) {
        for(i = (int*)((int)__ptr + 4); i < max; i += 2) {
            int v0 = *i;
            *((int*)(v0 & 0xfffffffc) - 1) = ((v0 & 0x3) * 0x100) | (*((int*)(v0 & 0xfffffffc) - 1) & 0xfffffcff);
            *(int*)(v0 & 0xfffffffc) = *(i + 1);
        }
        if(__ptr == &extern_trail_first) {
            break;
        }
        else {
            void* ptr0 = *(void**)__ptr;
            →free(__ptr);
            max = (int*)((int)ptr0 + 0x200c);
            __ptr = ptr0;
        }
    }
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 134741956;
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* extern_value(int param0, int* param1) {
    int* result;
    int v0 = caml_convert_flag_list(param1, &extern_flags);
    extern_ignore_sharing = (unsigned int)(v0 & 0x1);
    extern_closures = (unsigned int)(v0 & 0x2);
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 134741956;
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
    unsigned int v1 = extern_userprovided_output;
    if(v1) {
        result = (int*)(extern_ptr - v1);
        extern_ptr = v1 + 4;
    }
    else {
        unsigned int* ptr0 = extern_output_first;
        result = NULL;
        if(ptr0) {
            unsigned int* ptr1 = ptr0;
            do {
                result = (int*)((int)(int*)(*(int*)(ptr1 + 1) - (int)ptr1) + (int)result) - 2;
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

int fdlist_to_fdset(int* param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = ptr1;
    int* ptr3 = (int*)0x20;
    int* ptr4 = ptr1;
    int result = 0;
    while(ptr3 != 0) {
        *ptr4 = 0;
        ++ptr4;
        ptr3 = (int*)((char*)ptr3 - 1);
    }
    if(ptr0 != 1) {
        ptr1 = ptr0;
        do {
            int v0 = *ptr1;
            result = v0 >> 1;
            *(int*)(result / 32 * 4 + (int)ptr2) = (1 << ((((((v0 >> 31) >>> 27) + result) & 0x1f) - ((v0 >> 31) >>> 27)) & 0x1f)) | *(int*)(result / 32 * 4 + (int)ptr2);
            if(*param0 < result) {
                *param0 = result;
            }
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
        while(ptr1 != 1);
    }
    return result;
}

int fdset_to_fdlist(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int result = 1;
    unsigned int v0 = caml_local_roots;
    caml_local_roots = &v0;
    int v1 = 1;
    int v2 = 2;
    int* ptr2 = &ptr0;
    int* ptr3 = &result;
    if(ptr1 != 1) {
        ptr0 = ptr1;
        while(1) {
            int v3 = *ptr1;
            if(((*(int*)(((v3 >> 1 < 0 ? (v3 >> 1) + 31: v3 >> 1) >> 5) * 4 + param1) >>> ((unsigned int)(((((v3 >> 31) >>> 27) + (v3 >> 1)) & 0x1f) - ((v3 >> 31) >>> 27)) % 32)) & 0x1)) {
                int v4 = caml_alloc_small(2, 0);
                *(int*)v4 = (v3 >> 1) * 2 + 1;
                *(int*)(v4 + 4) = result;
                result = v4;
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
    caml_local_roots = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int free_extern_output() {
    int result;
    if(!extern_userprovided_output) {
        void* __ptr = extern_output_first;
        if(__ptr) {
            while(1) {
                void* ptr0 = *(void**)__ptr;
                →free(__ptr);
                if(!ptr0) {
                    break;
                }
                else {
                    __ptr = ptr0;
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
    int result = param0;
    short* ptr0 = param1;
    int v1 = (int)*(char*)(result - 4);
    if(!*(char*)(result - 4)) {
        int v2 = *(int*)result;
        v0 = *(int*)result;
        int v3 = caml_string_length(v2);
        int v4 = v3;
        *ptr0 = 1;
        if((unsigned int)v3 > 107) {
            v3 = unix_error(36, (char*)&gvar_80719A8, v0);
        }
        →memmove();
        result = param2;
        *(int*)result = v4 + 2;
    }
    else if((unsigned char)v1 == 1) {
        v0 = result;
        int v5 = caml_string_length(*(int*)result);
        if(v5 == 16) {
            v5 = 0;
            do {
                *(int*)(v5 + (int)ptr0) = 0;
                v5 += 4;
            }
            while((unsigned int)v5 < 28);
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
    extern_limit = (int*)((v0 < 4051 ? 0: v0) + (int)ptr0) + 2027;
    return (int*)((v0 < 4051 ? 0: v0) + (int)ptr0) + 2027;
}

int handle_signal(int param0) {
    int result;
    if((unsigned int)param0 <= 64) {
        unsigned int v0 = caml_try_leave_blocking_section_hook{caml_try_leave_blocking_section_default}();
        if(v0) {
            caml_execute_signal(param0, 1);
            caml_enter_blocking_section_hook{caml_enter_blocking_section_default}();
        }
        else {
            caml_record_signal(param0);
        }
    }
    return result;
}

int hash_aux() {
    int v0;
    int v1 = v0;
    unsigned int v2 = hash_univ_limit - 1;
    hash_univ_limit = v2;
    int result = hash_univ_count;
    if(result >= 0 && v2 < 0x80000000) {
        if(!(v1 & 0x1)) {
            int v3 = v1;
            if((*(char*)((unsigned int)((v1 >>> 12) & 0x7ff) + *(int*)((v1 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
            loc_806B4BA:
                do {
                    int v4 = v3 - 4;
                    int v5 = (unsigned int)*(char*)v4;
                    int v6 = (int)(v5 & 0xFF);
                    int v7 = v5 + 8;
                    if((unsigned char)v7 > 7) {
                        hash_univ_count = result - 1;
                        result = hash_accu * 19 + v6;
                        hash_accu = result;
                        int v8 = *(int*)v4 >>> 10;
                        if(v8) {
                            do {
                                --v8;
                                result = hash_aux();
                            }
                            while(v8);
                        }
                        return result;
                    }
                    else if(v7 == 0) {
                        hash_univ_count = result - 1;
                        result = (int)(hash_accu * 0x1003f + (*(int*)(v3 + 4) >> 1));
                        hash_accu = result;
                        return result;
                    }
                    else if(v7 == 1) {
                        return hash_aux();
                    }
                    else if(v7 == 2) {
                        v1 = *(int*)v1;
                        if((v1 & 0x1)) {
                            hash_univ_count = result - 1;
                            result = hash_accu * 0x1003f + (v1 >> 1);
                            hash_accu = result;
                            return result;
                        }
                        v3 = v1;
                        if(!(*(char*)((unsigned int)((v1 >>> 12) & 0x7ff) + *(int*)((v1 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                            break;
                        }
                        else {
                            goto loc_806B4BA;
                        }
                    }
                    else if(v7 == 3) {
                        return result;
                    }
                    else if(v7 == 4) {
                        goto loc_806B4DF;
                    }
                    else if(v7 == 5) {
                        hash_univ_count = result - 1;
                        result = hash_accu;
                        v4 = v1 + 8;
                        do {
                            result = (int)((unsigned int)(result * 19) + (unsigned int)*(char*)v1);
                            ++v1;
                        }
                        while(v4 != v1);
                        hash_accu = result;
                        return result;
                    }
                    else if(v7 == 6) {
                        hash_univ_count = result - 1;
                        result = (*(int*)v4 >>> 10) * 4;
                        v6 = result;
                        if(result) {
                            v2 = hash_accu;
                            unsigned int v9 = 0;
                            do {
                                result = v3;
                                v3 += 8;
                                v4 = v3;
                                do {
                                    v2 = (unsigned int)(v2 * 18 + (unsigned int)*(char*)result + v2);
                                    ++result;
                                }
                                while(result != v4);
                                v9 += 8;
                            }
                            while(v9 < (unsigned int)v6);
                            hash_accu = v2;
                        }
                        return result;
                    }
                    else if(v7 == 7) {
                        v2 = *(unsigned int*)(*(int*)v1 + 12);
                        if(v2) {
                            hash_univ_count = result - 1;
                            int v10 = hash_accu * 0x1003f;
                            result = v2(v1);
                            hash_accu = (unsigned int)(result + v10);
                        }
                        return result;
                    }
                    else {
                        throw 0;
                    loc_806B4DF:
                        hash_univ_count = result - 1;
                        result = caml_string_length(v1);
                    }
                    if(result) {
                        v2 = hash_accu;
                        do {
                            v2 = (unsigned int)(v2 * 18 + (unsigned int)*(char*)v1 + v2);
                            ++v1;
                            --result;
                        }
                        while(result);
                        hash_accu = v2;
                    }
                    return result;
                }
                while(1);
            }
            result = (int)(hash_accu * 0x1003f);
            hash_accu = result + v3;
            return result;
        }
        hash_univ_count = result - 1;
        result = hash_accu * 0x1003f + (v1 >> 1);
        hash_accu = result;
    }
    return result;
}

unsigned int init_compact_allocate() {
    unsigned int v0 = caml_heap_start;
    if(v0) {
        do {
            *(int*)(v0 - 12) = 0;
            v0 = *(unsigned int*)(v0 - 4);
        }
        while(v0);
    }
    unsigned int result = caml_heap_start;
    compact_fl = caml_heap_start;
    return result;
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
    char* ptr0 = intern_src;
    unsigned int v0 = (unsigned int)((unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3)));
    int v1 = (unsigned int)*(ptr0 + 6) * 0x100;
    intern_src = (int*)(ptr0 + 12);
    intern_alloc(v1, v0);
    intern_rec();
    intern_add_to_heap();
    unsigned int v2 = intern_obj_table;
    if(v2) {
        caml_stat_free((int)v2);
    }
    return result;
}

int int32_cmp(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    return (v0 <= v1 ? 0: 1) - (v0 < v1 ? 1: 0);
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
    *param1 = 4;
    return param1;
}

int int64_cmp(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    int v1 = *(int*)(param0 + 8);
    unsigned int v2 = *(unsigned int*)(param1 + 4);
    int v3 = *(int*)(param1 + 8);
    int v4 = 1;
    char v5 = v1 < v3;
    char v6 = (((v1 - v3) ^ v1) & (v1 ^ v3)) < 0;
    if((v1 == v3 || v5 != v6) && (v5 != v6 || v0 <= v2)) {
        v4 = 0;
    }
    int v7 = 1;
    char v8 = v1 < v3;
    char v9 = (((v1 - v3) ^ v1) & (v1 ^ v3)) < 0;
    if(v8 == v9 && ((v1 != v3 && v8 == v9) || v0 >= v2)) {
        v7 = 0;
    }
    return v4 - v7;
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
    *param1 = 8;
    return param1;
}

int intern_add_to_heap() {
    int result;
    int v0;
    unsigned int v1 = intern_extra_block;
    if(v1) {
        unsigned int v2 = (unsigned int)(((v0 * 4 + 0xfff) & 0xfffff000) + v1);
        int* ptr0 = intern_dest;
        if((unsigned int)ptr0 < v2) {
            caml_make_free_blocks(ptr0, (unsigned int)((int)(int*)(v2 - (int)ptr0) >> 2), 0);
        }
        result = intern_extra_block;
        caml_allocated_words = (unsigned int)(((intern_dest - result) >>> 2) + caml_allocated_words);
        caml_add_to_heap(result);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int intern_alloc(int param0, unsigned int param1) {
    int result;
    if(!result) {
        intern_obj_table = 0;
        intern_extra_block = 0;
        intern_block = 0;
    }
    else {
        if((unsigned int)(result - 1) > 0x3fffff) {
            int* ptr0 = caml_alloc_for_heap((result * 4 + 0xfff) & 0xfffff000);
            intern_extra_block = ptr0;
            if(!ptr0) {
                ptr0 = (int*)caml_raise_out_of_memory();
            }
            int v0 = caml_allocation_color((unsigned int)ptr0);
            intern_color = v0;
            result = intern_extra_block;
            intern_dest = intern_extra_block;
        }
        else {
            if(!(result - 1)) {
                intern_block = 134751668;
            }
            else if((unsigned int)(result - 1) <= 0x100) {
                int v1 = caml_alloc_small(result - 1, 252);
                intern_block = v1;
            }
            else {
                int* ptr1 = caml_alloc_shr((unsigned int)(result - 1), 252);
                intern_block = ptr1;
            }
            result = (int)(intern_block - 4);
            unsigned int v2 = *(unsigned int*)result;
            intern_header = *(unsigned int*)result;
            intern_color = v2 & 0x300;
            intern_dest = result;
            intern_extra_block = 0;
        }
        obj_counter2 = 0;
        if(param1) {
            result = caml_stat_alloc((int)(param1 * 4));
            intern_obj_table = result;
        }
        else {
            intern_obj_table = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int intern_cleanup() {
    int result;
    if(intern_input_malloced) {
        caml_stat_free(intern_input);
    }
    void* __ptr = intern_obj_table;
    if(__ptr) {
        caml_stat_free(__ptr);
    }
    int v0 = intern_extra_block;
    if(v0) {
        result = caml_free_for_heap(v0);
    }
    else {
        result = intern_block;
        if(result) {
            *(unsigned int*)(result - 4) = intern_header;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int intern_rec() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24 = v23;
    int v25 = v12;
    int v26 = v11;
    int v27 = v10;
    int v28 = v14;
    int v29 = &gvar_8071624;
loc_806A8F1:
    do {
        char* ptr0 = intern_src;
        int v30 = (unsigned int)*ptr0;
        unsigned int v31 = (unsigned int)(v30 & 0xFF);
        int result = (int)(ptr0 + 1);
        intern_src = result;
        if(v31 <= 63) {
            if(v31 > 31) {
                int v32 = (int)(v31 & 0x1f);
                int v33 = (v32 + 4) >>> 2;
                void* ptr1 = (void*)(intern_dest + 4);
                v29 = (int)ptr1;
                unsigned int v34 = intern_obj_table;
                if(v34) {
                    unsigned int v35 = obj_counter2;
                    *(void**)(v35 * 4 + v34) = ptr1;
                    obj_counter2 = v35 + 1;
                }
                *intern_dest = v33 * 0x400 + intern_color + 252;
                intern_dest = (unsigned int)(v33 * 4 + intern_dest + 4);
                int v36 = v33 * 4;
                *(int*)(v36 + v29 - 4) = 0;
                int v37 = v36 - 1;
                *(char*)(v37 + v29) = (unsigned char)v37 - (unsigned char)v32;
                →memmove();
                intern_src += v32;
            }
            else {
                if((unsigned char)v30 <= 19) {
                    /*BAD_CALL!*/ *(int*)((unsigned int)(v30 & 0xFF) * 4 + (int)&gvar_8071624){sub_806AA65|sub_806AA79|sub_806AA98|sub_806AACA|sub_806AAFC|sub_806AB13|sub_806AB3D|sub_806AB90|sub_806ABBC|sub_806AC7B|sub_806AD90}(v2, v16, v3, v17, v4, v0, v28, v15, v5, v18, v6, v19, v7, v20, v8, v21, v9, v22, v27, v26, v25, v24, v1);
                }
                intern_cleanup();
                result = caml_failwith("input_value: ill-formed message");
            }
            *(int*)v28 = v29;
            return result;
        }
        else if(v31 <= 127) {
            v29 = (v31 & 0x3f) * 2 + 1;
        }
        else {
            v30 = v31 & 0xf;
            v13 = (v31 >>> 4) & 0x7;
            if(!v13) {
                v29 = v30 * 4 + &gvar_80821C4;
            }
            else {
                int v38 = intern_dest + 4;
                *(int*)v28 = v38;
                unsigned int v39 = intern_obj_table;
                if(v39) {
                    unsigned int v40 = obj_counter2;
                    *(int*)(v40 * 4 + v39) = v38;
                    obj_counter2 = (int)(v40 + 1);
                }
                int* ptr2 = intern_dest;
                v28 = (int)(ptr2 + 1);
                *ptr2 = v13 * 0x400 + intern_color + v30;
                intern_dest = (unsigned int)(v13 * 4 + intern_dest + 4);
            }
        }
        *(int*)v28 = v29;
        return result;
    }
    while((unsigned int)v13 <= 1);
    v12 = v13;
    v0 = v28;
    do {
        intern_rec();
        --v12;
        v0 += 4;
    }
    while((unsigned int)v12 > 1);
    v28 = v13 * 4 + v28 - 4;
    goto loc_806A8F1;
}

unsigned int* invert_pointer_at() {
    unsigned int* ptr0;
    unsigned int* result;
    int v0 = *result;
    if(!((unsigned char)v0 & 0x3) && (*(char*)((int)(unsigned int*)((v0 >>> 12) & 0x7ff) + *(int*)((v0 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
        int v1 = *(unsigned int*)(v0 - 4);
        if((unsigned int*)(v1 & 0x3) != 1) {
            if((unsigned int)(unsigned int*)(v1 & 0x3) < 1) {
            loc_806E941:
                *result = v1;
            }
            else if((unsigned int*)(v1 & 0x3) == 2) {
                *result = v1;
                result = (unsigned int*)((int)result | 0x2);
            }
            else if((unsigned int*)(v1 & 0x3) != 3) {
                return result;
            }
            else {
                goto loc_806E941;
            }
            *(unsigned int*)(v0 - 4) = result;
        }
        else {
            int v2 = v0 - (v1 >>> 10) * 4;
            unsigned int* ptr1 = (unsigned int*)(v2 - 4);
            unsigned int* ptr2 = *(unsigned int*)(v2 - 4);
            if(!((unsigned char)ptr2 & 0x3)) {
                do {
                    ptr0 = ptr2;
                    ptr2 = *ptr2;
                }
                while(!((unsigned char)ptr2 & 0x3));
                ptr1 = ptr0;
            }
            *result = (unsigned char)(int*)((int)ptr2 >>> 2) == 247 ? ptr2: (unsigned int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 >>> 10) * 4) + v2) | 0x1);
            *(unsigned int*)(v0 - 4) = (int*)((int)result | 0x2);
            result = (unsigned int*)(((((v0 - v2) >>> 2) - 1) * 0x400) | 0x3e7);
            *ptr1 = (unsigned int*)(((((v0 - v2) >>> 2) - 1) * 0x400) | 0x3e7);
        }
    }
    return result;
}

unsigned int* invert_root() {
    return invert_pointer_at();
}

int main(int param0, unsigned int param1) {
    caml_main(param1);
    /*NO_RETURN*/ caml_sys_exit(1);
}

unsigned int mark_slice() {
    unsigned int result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = v6;
    caml_gc_message(64, "Marking %ld words\n", v6);
    caml_gc_message(64, "Subphase = %ld\n", caml_gc_subphase);
    int v8 = gray_vals_cur;
    while(v7 > 0) {
        if(gray_vals < (unsigned int)v8) {
            v8 -= 4;
            int v9 = *(int*)v8;
            int* ptr0 = (int*)(v9 - 4);
            int v10 = *ptr0;
            *ptr0 = (unsigned int)(unsigned char)v10 | ((unsigned int)((unsigned char)(v10 >>> 8) | 0x3) << 8) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
            v5 = v10 >>> 10;
            v4 = v5;
            if((unsigned char)v10 <= 250 && v5) {
                unsigned int v11 = 0;
                v3 = v8;
                do {
                    unsigned int* ptr1 = *(unsigned int*)(v11 * 4 + v9);
                    if(!((unsigned char)ptr1 & 0x1)) {
                        unsigned int* ptr2 = ptr1;
                        if((*(char*)((int)(int*)((int)(int*)((int)ptr1 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr1 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
                            v5 = *(int*)(ptr1 - 1);
                            int v12 = (int)(v5 & 0xFF);
                            if(v12 == 249) {
                                unsigned int* ptr3 = (unsigned int*)((int)ptr2 - (int)(int*)((int)(int*)(v5 >>> 10) * 4));
                                ptr1 = ptr3;
                                v5 = *(int*)(ptr3 - 1);
                            }
                            else if(v12 == 250) {
                                v12 = *ptr1;
                                v2 = v12;
                                if(!((unsigned char)v12 & 0x1)) {
                                    v1 = v12;
                                    if((*(char*)((int)(int*)((int)(int*)(v12 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)(v12 >>> 23) * 4) + (int)&caml_page_table)) & 0x7)) {
                                        v12 = (int)*(char*)(v1 - 4);
                                        if((unsigned char)v12 != 250 && (unsigned char)v12 != 246 && (unsigned char)v12 != 253) {
                                            goto loc_8063990;
                                        }
                                    }
                                }
                                else {
                                loc_8063990:
                                    *(int*)(v11 * 4 + v9) = v2;
                                }
                            }
                            if(!((unsigned char)(v5 >>> 8) & 0x3)) {
                                *(int*)(ptr1 - 1) = (unsigned int)(unsigned char)v5 | ((unsigned int)(((unsigned char)(v5 >>> 8) & 0xfc) | 0x1) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
                                int v13 = v3;
                                *(unsigned int**)v13 = ptr1;
                                v5 = v13 + 4;
                                v3 = v5;
                                if(gray_vals_end <= (unsigned int)v5) {
                                    gray_vals_cur = v5;
                                    realloc_gray_vals();
                                    v3 = gray_vals_cur;
                                }
                            }
                        }
                    }
                    ++v11;
                }
                while(v11 < (unsigned int)v4);
                v8 = v3;
            }
            v7 = (int)((unsigned int)~v4 + v7);
        }
        else {
            int* ptr4 = markhp;
            if(!ptr4) {
                goto loc_8063A79;
            }
            if(limit == ptr4) {
                v0 = *(int*)(chunk - 4);
                chunk = v0;
                if(!v0) {
                    markhp = 0;
                }
                else {
                    markhp = v0;
                    limit = (unsigned int)(*(int*)(v0 - 8) + v0);
                }
            }
            else {
                if((*ptr4 & 0x300) == 0x100) {
                    *(int**)v8 = ptr4 + 1;
                    v8 += 4;
                }
                int* ptr5 = markhp;
                markhp = (int*)((*ptr5 >>> 10) * 4 + (int)ptr5) + 1;
            loc_8063A79:
                if(!heap_is_pure) {
                    heap_is_pure = 1;
                    unsigned int v14 = caml_heap_start;
                    chunk = v14;
                    markhp = v14;
                    limit = (unsigned int)(*(int*)(v14 - 8) + v14);
                }
                switch(caml_gc_subphase) {
                    case 11: {
                        goto loc_8063AF3;
                    }
                    case 12: {
                        goto loc_8063C33;
                    }
                    case 13: {
                        goto loc_8063C76;
                    }
                }
                caml_gc_subphase = 11;
                weak_prev = &caml_weak_list_head;
            loc_8063C76:
                gray_vals_cur = v8;
                caml_gc_sweep_hp = caml_heap_start;
                caml_fl_init_merge();
                caml_gc_phase = 1;
                unsigned int v15 = caml_heap_start;
                chunk = v15;
                caml_gc_sweep_hp = v15;
                result = (unsigned int)(*(int*)(v15 - 8) + v15);
                limit = result;
                caml_fl_size_at_phase_change = caml_fl_cur_size;
                break;
            loc_8063C33:
                v5 = weak_prev;
                v0 = *(int*)v5;
                if(v0) {
                    if(!(*(int*)(v0 - 4) & 0x300)) {
                        *(int*)v5 = *(int*)v0;
                    }
                    else {
                        weak_prev = v0;
                    }
                    --v7;
                }
                else {
                    gray_vals_cur = v8;
                    caml_final_update();
                    v8 = gray_vals_cur;
                    caml_gc_subphase = 13;
                loc_8063AF3:
                    v0 = *weak_prev;
                    v3 = v0;
                    if(v0) {
                        int v16 = v0;
                        unsigned int v17 = (unsigned int)(*(int*)(v0 - 4) >>> 10);
                        unsigned int v18 = v17;
                        if(v17 > 1) {
                            v2 = 1;
                            int v19 = v8;
                            do {
                                unsigned int* ptr6 = *(unsigned int*)((int)(int*)(v2 * 4) + v16);
                                unsigned int v20 = caml_weak_none;
                                if(ptr6 != v20 && !((unsigned char)ptr6 & 0x1) && (*(char*)((int)(int*)((int)(int*)((int)ptr6 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr6 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
                                    int v21 = (int)(ptr6 - 1);
                                    if(*(char*)v21 == 250) {
                                        unsigned int* ptr7 = *ptr6;
                                        if(((unsigned char)ptr7 & 0x1)) {
                                            goto loc_8063BE6;
                                        }
                                        else {
                                        loc_8063B8E:
                                            do {
                                                v1 = v21;
                                                unsigned int* ptr8 = ptr7;
                                                int* ptr9 = (int*)((int)ptr7 >>> 23);
                                                int* ptr10 = (int*)((int)(int*)((int)ptr7 >>> 12) & 0x7ff);
                                                if((*(char*)(*(int*)((int)(int*)((int)ptr9 * 4) + (int)&caml_page_table) + (int)ptr10) & 0x7)) {
                                                    v21 = (int)(ptr8 - 1);
                                                    v4 = v21;
                                                    char v22 = *(char*)v21;
                                                    if(v22 != 250 && v22 != 246 && v22 != 253) {
                                                        *(unsigned int*)((int)(int*)(v2 * 4) + v16) = ptr7;
                                                        v20 = caml_weak_none;
                                                        if(ptr7 == v20) {
                                                            break;
                                                        }
                                                        else if(((unsigned char)ptr7 & 0x1) || !(*(char*)(*(int*)((int)(int*)((int)ptr9 * 4) + (int)&caml_page_table) + (int)ptr10) & 0x1)) {
                                                            break;
                                                        }
                                                        else if(*(char*)v4 != 250) {
                                                            goto loc_8063BE6;
                                                        }
                                                        else {
                                                            ptr7 = *ptr7;
                                                            if((unsigned char)ptr7 & 0x1) {
                                                                goto loc_8063BE6;
                                                            }
                                                            else {
                                                                goto loc_8063B8E;
                                                            }
                                                        }
                                                    }
                                                }
                                                v21 = v1;
                                                goto loc_8063BE6;
                                            }
                                            while(1);
                                        }
                                    }
                                    else {
                                    loc_8063BE6:
                                        if(!(*(int*)v21 & 0x300)) {
                                            *(unsigned int*)((int)(int*)(v2 * 4) + v16) = v20;
                                        }
                                    }
                                }
                                ++v2;
                            }
                            while(v18 != v2);
                            v8 = v19;
                        }
                        weak_prev = v3;
                        v7 = (int)(~v18 + v7);
                    }
                    else {
                        caml_gc_subphase = 12;
                        weak_prev = &caml_weak_list_head;
                    }
                }
            }
        }
    }
    gray_vals_cur = v8;
    return result;
}

int nativeint_cmp(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    int v1 = *(int*)(param1 + 4);
    return (v0 <= v1 ? 0: 1) - (v0 < v1 ? 1: 0);
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
    int v0 = *(int*)(param0 + 4);
    caml_serialize_int_1(1);
    caml_serialize_int_4(v0);
    *param1 = 4;
    *param2 = 8;
    return param2;
}

unsigned int norm_heapincr() {
    int v0;
    return (unsigned int)((v0 + 0x3ff) & 0xfffffc00) <= 0x7ff ? 0x800: (unsigned int)((v0 + 0x3ff) & 0xfffffc00);
}

int norm_minsize() {
    int v0;
    return (v0 <= 0xfff ? 0x1000: v0) <= 0x10000000 ? v0 <= 0xfff ? 0x1000: v0: 0x10000000;
}

int norm_pfree() {
    int v0;
    return v0 ? v0: 1;
}

void norm_pmax() {
}

int parse_digit() {
    int v0;
    return (unsigned char)((unsigned char)v0 + 208) <= 9 ? (int)(unsigned char)v0 - 48: (unsigned char)((unsigned char)v0 + 191) <= 5 ? (int)(unsigned char)v0 - 55: (unsigned char)((unsigned char)v0 + 159) > 5 ? -1: (int)(unsigned char)v0 - 87;
}

// Stale decompilation - Refresh this view to re-decompile this code
int parse_format(int param0, char* param1) {
    char* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    char* ptr1 = ptr0;
    int v4 = caml_string_length(v0);
    int v5 = v3;
    int v6 = -1;
    while(v6 != 0) {
        char v7 = *(char*)v5 == 0;
        ++v5;
        --v6;
        if(!~v7) {
            break;
        }
    }
    if((unsigned int)(~v6 + v4) > 31) {
        caml_invalid_argument("format_int: format too long");
    }
    int v8 = v4;
    int v9 = v2;
    char* ptr2 = ptr1;
    →memmove();
    char* ptr3 = (char*)((char*)(v4 + (int)ptr1) - 1);
    char v10 = *ptr3;
    char v11 = *(ptr3 - 1);
    if(v11 == 108 || v11 == 110 || v11 == 76) {
        --ptr3;
    }
    v9 = v3;
    ptr2 = ptr3;
    →memmove();
    char* ptr4 = (char*)((char*)(~v6 + (int)ptr3) - 1);
    *ptr4 = v10;
    *(ptr4 + 1) = 0;
    char* __nptr = (char*)v2;
    int v12 = (unsigned int)__nptr[0];
    if(__nptr[0]) {
        while((unsigned char)((unsigned char)v12 - 48) > 9) {
            ++__nptr;
            v12 = (unsigned int)__nptr[0];
            if(!__nptr[0]) {
                *param1 = v10;
                return param0;
            }
        }
        long v13 = →strtol(__nptr, NULL, 10);
        *param1 = v10;
        if((int)(v13 + 5) > 31) {
            param0 = caml_stat_alloc((int)(v13 + 6));
        }
    }
    else {
        *param1 = v10;
    }
    return param0;
}

int parse_intnat(int param0, unsigned int param1) {
    int result1;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = param1;
    char* ptr0 = parse_sign_and_base(&v0, &v1);
    int v5 = v1;
    unsigned int v6 = 0xffffffff / (unsigned int)v1;
    int v7 = parse_digit();
    if(v7 < 0 || v7 >= v1) {
        v7 = caml_failwith("int_of_string");
    }
    char* ptr1 = ptr0 + 1;
    int result = v7;
    while(1) {
        if(*ptr1 != 95) {
            int v8 = parse_digit();
            if(v8 >= 0 && v8 < v1) {
                if((unsigned int)result > v6) {
                    v8 = caml_failwith("int_of_string");
                }
                int v9 = result * v5;
                result = v8 + v9;
                if(__carry__(v8, v9)) {
                    caml_failwith("int_of_string");
                }
                goto loc_8065F84;
            }
            else {
                int v10 = caml_string_length(v3);
                if(v10 + v3 != ptr1) {
                    caml_failwith("int_of_string");
                }
                if(v1 == 10) {
                    if(v0 >= 0) {
                        if((unsigned int)(1 << ((v4 - 1) & 0x1f)) > (unsigned int)result) {
                            return result;
                        }
                        caml_failwith("int_of_string");
                    }
                    if((unsigned int)(1 << ((v4 - 1) & 0x1f)) >= (unsigned int)result) {
                        goto loc_8066016;
                    }
                    else {
                        caml_failwith("int_of_string");
                        goto loc_8065FF1;
                    }
                }
                else {
                loc_8065FF1:
                    if(v4 <= 31 && (unsigned int)(1 << (v4 & 0x1f)) <= (unsigned int)result) {
                        caml_failwith("int_of_string");
                    }
                    if(v0 < 0) {
                    loc_8066016:
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
        loc_8065F84:
            ++ptr1;
        }
    }
}

char* parse_sign_and_base(int* param0, int* param1) {
    char* result;
    *param0 = 1;
    if(*result == 45) {
        *param0 = -1;
        ++result;
    }
    *param1 = 10;
    if(*result == 48) {
        param0 = (int*)((unsigned int)*(result + 1) - 66);
        if((unsigned char)param0 <= 54) {
            switch(param0) {
                case 0: {
                    *param1 = 2;
                    result += 2;
                }
                case 1: 
                case 2: 
                case 3: 
                case 4: 
                case 5: 
                case 6: 
                case 7: 
                case 8: 
                case 9: 
                case 10: 
                case 11: 
                case 12: 
                case 14: 
                case 15: {
                    return result;
                }
                case 13: {
                    *param1 = 8;
                    return result + 2;
                }
                default: {
                    throw 0;
                }
            }
        }
    }
    return result;
}

int* realloc_gray_vals() {
    unsigned int v0 = gray_vals_size;
    int* result = (int*)((int)caml_stat_heap_size / 128);
    if((unsigned int)result > v0) {
        caml_gc_message(8, "Growing gray_vals to %luk bytes\n", (int)(unsigned int)((v0 >>> 7) & 0x7fffff));
        void* ptr0 = →realloc(gray_vals, (size_t)(gray_vals_size * 8));
        if(!ptr0) {
            caml_gc_message(8, "No room for growing gray_vals\n", 0);
            result = gray_vals;
            gray_vals_cur = gray_vals;
            heap_is_pure = 0;
        }
        else {
            gray_vals = ptr0;
            unsigned int v1 = gray_vals_size;
            gray_vals_cur = (int*)(v1 * 4 + (int)ptr0);
            gray_vals_size = v1 * 2;
            result = (int*)(v1 * 8 + (int)ptr0);
            gray_vals_end = (int*)(v1 * 8 + (int)ptr0);
        }
    }
    else {
        gray_vals_cur = (unsigned int)((v0 >>> 1) * 4 + gray_vals);
        heap_is_pure = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* reset_table() {
    unsigned int* ptr0;
    *(int*)(ptr0 + 5) = 0;
    *(int*)(ptr0 + 6) = 0;
    void* __ptr = *ptr0;
    if(__ptr) {
        __ptr = (void*)caml_stat_free(__ptr);
    }
    *(int*)(ptr0 + 1) = 0;
    *(int*)(ptr0 + 4) = 0;
    *(int*)(ptr0 + 2) = 0;
    *(int*)(ptr0 + 3) = 0;
    *ptr0 = 0;
    return __ptr;
}

int segv_handler(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, unsigned int param22) {
    int v0;
    if(!((unsigned char)param22 & 0x3)) {
        int v1 = →getrlimit64();
        if(!v1) {
            unsigned int v2 = system_stack_top;
            if(v2 > param22 && (unsigned int)(v2 - v0 - 0x2000) <= param22) {
                caml_raise_stack_overflow();
            }
        }
    }
    int v3 = 0;
    int v4 = 0;
    →sigemptyset();
    return →sigaction(11, &v3, NULL);
}

unsigned int start_cycle() {
    caml_gc_message(1, "Starting new major GC cycle\n", 0);
    unsigned int result = caml_darken_all_roots();
    caml_gc_phase = 0;
    caml_gc_subphase = 10;
    markhp = 0;
    return result;
}

int stat_aux(int param0, int* param1) {
    unsigned int v0;
    int* ptr0;
    int v1;
    int v2;
    int* ptr1 = ptr0;
    unsigned int v3 = caml_local_roots;
    long long* ptr2 = NULL;
    long long* ptr3 = NULL;
    long long* ptr4 = NULL;
    int v4 = 0;
    int result = 0;
    caml_local_roots = &v0;
    int v5 = 1;
    int v6 = 5;
    int* ptr5 = &ptr2;
    int* ptr6 = &ptr3;
    int* ptr7 = &ptr4;
    int* ptr8 = &v4;
    int* ptr9 = &result;
    *(double*)&v1 = (double)*(param1 + 16);
    ptr2 = caml_copy_double(*(double*)&v1, v2);
    *(double*)&v1 = (double)*(param1 + 18);
    ptr3 = caml_copy_double(*(double*)&v1, v2);
    *(double*)&v1 = (double)*(param1 + 20);
    ptr4 = caml_copy_double(*(double*)&v1, v2);
    int v7 = ptr1 ? caml_copy_int64(*(param1 + 11), *(param1 + 12)): *(param1 + 11) * 2 + 1;
    v4 = v7;
    int v8 = caml_alloc_small(12, 0);
    result = v8;
    *(int*)v8 = *param1 * 2 + 1;
    *(int*)(result + 4) = *(param1 + 22) * 2 + 1;
    ptr1 = (int*)(result + 8);
    int v9 = cst_to_constr(*(param1 + 4) & 0xf000, (int*)&file_kind_table, 7, 0);
    *ptr1 = v9;
    *(int*)(result + 12) = (*(param1 + 4) & 0xfff) * 2 + 1;
    *(int*)(result + 16) = *(param1 + 5) * 2 + 1;
    *(int*)(result + 20) = *(param1 + 6) * 2 + 1;
    *(int*)(result + 24) = *(param1 + 7) * 2 + 1;
    *(int*)(result + 28) = *(param1 + 8) * 2 + 1;
    *(int*)(result + 32) = v4;
    *(long long**)(result + 36) = ptr2;
    *(long long**)(result + 40) = ptr3;
    *(long long**)(result + 44) = ptr4;
    caml_local_roots = v3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049DEA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049EDA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049F3A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A02A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A0DA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A14A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A1DA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A25A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A31A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A36A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A3CA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A59A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A60A() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A6EA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A7AA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A7DA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A7FA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A8EA() {
    /*BAD_CALL!*/ sub_8049DB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B7F0(void* param0, int param1, int param2, int param3) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    void* ptr1 = param0;
    int v1 = *(int*)(param1 + 12);
    int v2 = caml_c_call();
    int v3 = *(int*)(v2 + 8);
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
    *ptr0 = 0x800;
    *(ptr0 + 1) = param2;
    *(ptr0 + 2) = v3;
    *(ptr0 + 3) = 0x800;
    *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
    *(ptr0 + 5) = 1;
    caml_exception_pointer = v0;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B880(int param0, int param1, int param2, int param3) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    int v1 = caml_c_call();
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
    *ptr0 = 0x800;
    *(ptr0 + 1) = param2;
    *(ptr0 + 2) = v1;
    *(ptr0 + 3) = 0x800;
    *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
    *(ptr0 + 5) = 1;
    caml_exception_pointer = v0;
    jump param3;
}

int sub_804C280(int param0, int param1, int param2, int param3) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    *ptr0((int)v0);
    caml_exception_pointer = v0;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C440(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_804CAA0(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int* ptr0;
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    param1 = caml_c_call();
    camlArray__to_list_1121(v0, v1);
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlUnix__fun_2833;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param1;
    int* ptr1 = camlList__map_1062();
    caml_exception_pointer = v2;
    while(1) {
        int* ptr2 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr2) {
            *ptr2 = 5367;
            *(ptr2 + 1) = &caml_tuplify2;
            *(ptr2 + 2) = -3;
            *(ptr2 + 3) = &camlUnix__fun_2836;
            *(ptr2 + 4) = param2;
            *(int**)(ptr2 + 5) = ptr1;
            camlList__map_1062();
            /*BAD_CALL!*/ camlList__flatten_1058();
        }
        caml_call_gc((int)ptr1, v1);
    }
}

int sub_804CB30(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int* ptr0;
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v2, v0);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v2;
    *(ptr0 + 2) = param3;
    *(ptr0 + 3) = 0x800;
    *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
    *(ptr0 + 5) = 1;
    caml_exception_pointer = v1;
    while(1) {
        int* ptr1 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr1) {
            *ptr1 = 5367;
            *(ptr1 + 1) = &caml_tuplify2;
            *(ptr1 + 2) = -3;
            *(ptr1 + 3) = &camlUnix__fun_2836;
            *(ptr1 + 4) = param2;
            *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr0 + 4);
            camlList__map_1062();
            /*BAD_CALL!*/ camlList__flatten_1058();
        }
        caml_call_gc((int)(unsigned int*)(ptr0 + 4), v0);
    }
}

int sub_804CC80(int param0, int param1, int param2, int param3) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    camlList__rev_append_1051(ptr0);
    caml_exception_pointer = v0;
    jump param3;
}

int sub_804CD70(int param0, int param1, int param2, int param3) {
    int* ptr0;
    int v0;
    int* ptr1;
    int v1;
    int v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = camlList__mem_1161();
    if(v4 != 1) {
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc(v1, v2);
            }
        }
        *ptr1 = 0x400;
        *(ptr1 + 1) = &caml_exn_Not_found;
        caml_raise_exn();
    }
    int v5 = param0;
    int* ptr2 = (int*)caml_c_call();
    param0 = *ptr2;
    caml_exception_pointer = v3;
    int v6 = sub_804CE20(param0, param1, param2, param3);
    if(*(int*)v6 == &caml_exn_Not_found) {
        v0 = camlPervasives__string_of_int_1130();
    }
    else {
        caml_raise_exn();
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, v2);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = v0;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CE20(int param0, int param1, int param2, int param3) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = camlList__mem_1161();
    if(v3 != 1) {
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc(v0, v1);
            }
        }
        *ptr1 = 0x400;
        *(ptr1 + 1) = &caml_exn_Not_found;
        caml_raise_exn();
    }
    int v4 = camlList__mem_1161();
    int v5 = v4 != 1 ? &camlUnix__194: &camlUnix__193;
    int v6 = param1;
    int* ptr2 = (int*)caml_c_call();
    int v7 = *ptr2;
    caml_exception_pointer = v2;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v7, v1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = v7;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CF80(int param0, int param1, int param2) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D010(int param0, int param1) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
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
    *(ptr0 + 1) = "/bin/sh";
    *(ptr0 + 2) = &camlUnix__191;
    *(ptr0 + 3) = param0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D100(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_804D250(int param0, int param1, int param2, int param3, int param4, int param5) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlUnix__perform_redirections_1900(param2);
    caml_c_call();
    caml_exception_pointer = v0;
    jump param5;
}

int sub_804D300(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlUnix__perform_redirections_1900(param2);
    caml_c_call();
    caml_exception_pointer = v0;
    jump param6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D430(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
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
    *(ptr0 + 1) = "/bin/sh";
    *(ptr0 + 2) = &camlUnix__187;
    *(ptr0 + 3) = param1;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D820(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
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
    *(ptr0 + 1) = "/bin/sh";
    *(ptr0 + 2) = &camlUnix__183;
    *(ptr0 + 3) = param4;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param8;
}

int sub_804DAC0(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    param0 = camlHashtbl__find_1093(v0, v1);
    camlHashtbl__remove_1080(v2);
    caml_exception_pointer = v2;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DB50(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

int sub_804DCC0(int param0, int param1, int param2, int param3) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlPervasives__close_out_1209();
    caml_exception_pointer = v0;
    int v1 = camlUnix__waitpid_non_intr_2001();
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DD80(int param0, int param1, int param2, int param3, int param4) {
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    camlPervasives__close_out_1209();
    caml_exception_pointer = ptr0;
    caml_c_call();
    int v0 = camlUnix__waitpid_non_intr_2001();
    jump param4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DE20(int param0, int param1, int param2) {
    int* ptr0;
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    caml_c_call();
    camlUnix__try_set_close_on_exec_1366();
    param0 = caml_c_call();
    int v3 = caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, v1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v3;
    *(ptr0 + 2) = param0;
    caml_exception_pointer = v2;
    jump param2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DF10(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

int sub_804E070(int param0, int param1, int param2, int param3) {
    jump param3;
}

int sub_804E61A(int param0) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = &camlUnix__44;
    unsigned int v3 = (unsigned int)caml_c_call();
    caml_exception_pointer = v1;
    gvar_8072ED4 = v3;
    int v4 = sub_804E662(param0);
    int v5 = *(int*)v4 == &caml_exn_Failure ? gvar_8072ED0: /*BAD_CALL!*/ caml_raise_exn();
    gvar_8072ED8 = v5;
    gvar_8072EE0 = &camlUnix__42;
    gvar_8072F04 = &camlUnix__41;
    gvar_8072F08 = &camlUnix__40;
    gvar_8072F0C = &camlUnix__39;
    gvar_8072F10 = &camlUnix__38;
    int v6 = caml_allocN(&caml_exn_Failure, v0);
    *(int*)v6 = 0x1c00;
    *(int*)(v6 + 4) = 1;
    *(int*)(v6 + 8) = 3;
    *(int*)(v6 + 12) = 5;
    *(int*)(v6 + 16) = 7;
    *(int*)(v6 + 20) = 9;
    *(int*)(v6 + 24) = &camlUnix__36;
    *(int*)(v6 + 28) = &camlUnix__37;
    gvar_8072F8C = (int*)(v6 + 4);
    gvar_8072F14 = &camlUnix__35;
    gvar_8072F18 = &camlUnix__34;
    gvar_8072F1C = &camlUnix__33;
    gvar_8072F20 = &camlUnix__32;
    gvar_8072F24 = &camlUnix__31;
    gvar_8072F28 = &camlUnix__30;
    gvar_8072F2C = &camlUnix__29;
    gvar_8072F30 = &camlUnix__28;
    gvar_8072F34 = &camlUnix__27;
    gvar_8072F90 = &camlUnix__26;
    gvar_8072F60 = &camlUnix__25;
    gvar_8072F94 = &camlUnix__24;
    gvar_8072F64 = &camlUnix__23;
    gvar_8072D4C = &camlUnix__22;
    gvar_8072F98 = &camlUnix__21;
    gvar_8072F9C = &camlUnix__20;
    gvar_8072FA0 = &camlUnix__19;
    gvar_8072E14 = &camlUnix__18;
    gvar_8072E18 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_8072FA4 = ptr0;
    gvar_8072FA8 = &camlUnix__16;
    gvar_8072E1C = &camlUnix__15;
    gvar_8072E20 = &camlUnix__14;
    gvar_8072E24 = &camlUnix__13;
    gvar_8072FAC = &camlUnix__12;
    gvar_8072E28 = &camlUnix__11;
    gvar_8072FB0 = &camlUnix__10;
    gvar_8072FB4 = &camlUnix__9;
    gvar_8072E2C = &camlUnix__8;
    gvar_8072E30 = &camlUnix__7;
    gvar_8072E34 = &camlUnix__6;
    gvar_8072E38 = &camlUnix__5;
    gvar_8072F38 = &camlUnix__4;
    gvar_8072F3C = &camlUnix__3;
    gvar_8072FB8 = &camlUnix__2;
    gvar_8072F40 = &camlUnix__1;
    jump param0;
}

int sub_804E662(int param0) {
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    unsigned int v3 = (unsigned int)caml_c_call();
    caml_exception_pointer = v2;
    gvar_8072ED8 = v3;
    gvar_8072EE0 = &camlUnix__42;
    gvar_8072F04 = &camlUnix__41;
    gvar_8072F08 = &camlUnix__40;
    gvar_8072F0C = &camlUnix__39;
    gvar_8072F10 = &camlUnix__38;
    int v4 = caml_allocN(v0, v1);
    *(int*)v4 = 0x1c00;
    *(int*)(v4 + 4) = 1;
    *(int*)(v4 + 8) = 3;
    *(int*)(v4 + 12) = 5;
    *(int*)(v4 + 16) = 7;
    *(int*)(v4 + 20) = 9;
    *(int*)(v4 + 24) = &camlUnix__36;
    *(int*)(v4 + 28) = &camlUnix__37;
    gvar_8072F8C = (int*)(v4 + 4);
    gvar_8072F14 = &camlUnix__35;
    gvar_8072F18 = &camlUnix__34;
    gvar_8072F1C = &camlUnix__33;
    gvar_8072F20 = &camlUnix__32;
    gvar_8072F24 = &camlUnix__31;
    gvar_8072F28 = &camlUnix__30;
    gvar_8072F2C = &camlUnix__29;
    gvar_8072F30 = &camlUnix__28;
    gvar_8072F34 = &camlUnix__27;
    gvar_8072F90 = &camlUnix__26;
    gvar_8072F60 = &camlUnix__25;
    gvar_8072F94 = &camlUnix__24;
    gvar_8072F64 = &camlUnix__23;
    gvar_8072D4C = &camlUnix__22;
    gvar_8072F98 = &camlUnix__21;
    gvar_8072F9C = &camlUnix__20;
    gvar_8072FA0 = &camlUnix__19;
    gvar_8072E14 = &camlUnix__18;
    gvar_8072E18 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_8072FA4 = ptr0;
    gvar_8072FA8 = &camlUnix__16;
    gvar_8072E1C = &camlUnix__15;
    gvar_8072E20 = &camlUnix__14;
    gvar_8072E24 = &camlUnix__13;
    gvar_8072FAC = &camlUnix__12;
    gvar_8072E28 = &camlUnix__11;
    gvar_8072FB0 = &camlUnix__10;
    gvar_8072FB4 = &camlUnix__9;
    gvar_8072E2C = &camlUnix__8;
    gvar_8072E30 = &camlUnix__7;
    gvar_8072E34 = &camlUnix__6;
    gvar_8072E38 = &camlUnix__5;
    gvar_8072F38 = &camlUnix__4;
    gvar_8072F3C = &camlUnix__3;
    gvar_8072FB8 = &camlUnix__2;
    gvar_8072F40 = &camlUnix__1;
    jump param0;
}

int sub_804F010(int param0, int param1) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = v0;
    caml_c_call();
    caml_exception_pointer = v1;
    while(param0 != 1) {
        sub_804F010(*(int*)(param0 + 4), param1);
    }
    jump param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F8A0(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    sub_804F8E0(param0, param1);
    jump param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F8E0(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FB10(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_8050F00(int param0, int param1, int param2, int param3, int param4) {
    unsigned int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    camlArray__trickledown_1160(v0, *(int*)(v1 + 16));
    caml_exception_pointer = v2;
    jump param4;
}

int sub_8051060(int param0) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    camlArray__bubbledown_1170(*(int*)(v0 + 12));
    caml_exception_pointer = v1;
    jump param0;
}

int sub_80550D0(int param0) {
    jump param0;
}

int sub_80550E0(int param0) {
    jump param0;
}

int sub_80550F0(int param0) {
    jump param0;
}

int sub_8055100(int param0) {
    jump param0;
}

int sub_8055DF0(int param0) {
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    camlString__index_rec_1108(v0, v1);
    caml_exception_pointer = v2;
    jump param0;
}

int sub_8055E90(int param0) {
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    camlString__rindex_rec_1121(v0, v1);
    caml_exception_pointer = v2;
    jump param0;
}

int sub_8057040(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7, int param8) {
    int v0;
    int v1;
    int v2;
    int v3;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v4 = *(unsigned int*)(v1 + 4);
    param5 = *(unsigned int*)(v1 + 4);
    if((unsigned int)(*(int*)(v4 - 4) >>> 9) > (unsigned int)v2) {
        int* ptr1 = camlHashtbl__replace_bucket_1221(v3, v2);
        caml_modify((unsigned int*)(param6 * 2 + param5 - 2), (unsigned int)ptr1);
        caml_exception_pointer = ptr0;
        jump param8;
    }
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    /*BAD_CALL!*/ camlHashtbl__mem_1227(v3, v2);
}

int sub_8057A20(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7) {
    int v0;
    int v1;
    int v2;
    int v3;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v4 = *(unsigned int*)(v1 + 4);
    param5 = *(unsigned int*)(v1 + 4);
    if((unsigned int)(*(int*)(v4 - 4) >>> 9) > (unsigned int)v2) {
        int* ptr1 = camlHashtbl__replace_bucket_1116(v3, v2);
        caml_modify((unsigned int*)(param6 * 2 + param5 - 2), (unsigned int)ptr1);
        caml_exception_pointer = ptr0;
        jump param7;
    }
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    /*BAD_CALL!*/ camlHashtbl__mem_1122(v0, param0, param1);
}

int sub_8059520(int param0, int param1, int param2, int param3, int param4, void* param5) {
    caml_apply3(param0, *(int**)(param1 + 28));
    /*BAD_CALL!*/ camlPrintf__scan_fmt_1144();
}

int sub_8059540(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int v0;
sub_8059540:
    int v1 = param0;
    caml_apply3(param0, *(int**)(param1 + 28));
    param2 = v0;
    int v2 = camlPrintf__sub_format_for_printf_1135();
    /*BAD_CALL!*/ caml_apply2(v2);
    v1 = v0;
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 5367;
            *(ptr0 + 1) = &camlPrintf__loop_1159;
            *(ptr0 + 2) = 3;
            *(ptr0 + 3) = *(int*)(param4 + 24);
            *(ptr0 + 4) = *(int*)(param4 + 32);
            *(ptr0 + 5) = v0;
            /*BAD_CALL!*/ camlPrintf__loop_1159();
            int v3 = *(int*)(param4 + 36);
            if(v1 - 2 > v3) {
                int v4 = /*NO_RETURN*/ camlPrintf__incomplete_format_1065(v3, param4);
            }
            int v5 = (unsigned int)*(char*)(((v1 - 2) >> 1) + *(int*)(param4 + 24)) * 2 + 1;
            if(v5 >= 253) {
            loc_80595D6:
                /*NO_RETURN*/ camlPrintf__bad_conversion_format_1061(v5, param4);
            }
            switch(v5) {
                case 0: 
                case 1: 
                case 2: 
                case 3: 
                case 4: 
                case 5: 
                case 6: 
                case 7: 
                case 8: 
                case 9: 
                case 10: 
                case 11: 
                case 12: 
                case 13: 
                case 14: 
                case 15: {
                    goto loc_80595D6;
                }
                default: {
                    throw 0;
                }
            }
            goto sub_8059540;
        }
        else {
            caml_call_gc(param0, v0);
        }
    }
}

int sub_80595E0(int param0, int param1, int param2, int param3) {
    jump param3;
}

int sub_80595F0(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(231, *(int**)(param1 + 28));
}

int sub_8059600(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(199, *(int**)(param1 + 28));
}

int sub_8059610(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(211, *(int**)(param1 + 28));
}

int sub_8059620(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(205, *(int**)(param1 + 28));
}

int sub_8059630(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(133, *(int**)(param1 + 28));
}

int sub_8059640(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(param0, *(int**)(param1 + 28));
}

int sub_8059650(int param0, int param1, int param2, void* param3, int param4, void* param5, int param6, int param7, void* param8) {
    int v0;
    int v1;
    if(v1 + 2 > *(int*)(param1 + 36)) {
        /*BAD_CALL!*/ caml_apply3(211, *(int**)(param1 + 28));
    }
    int v2 = param0;
    int v3 = *(int*)(param1 + 24);
    int v4 = (*(int*)(v3 - 4) >>> 10) * 4 - 1;
    if((unsigned int)(v4 - (unsigned int)*(char*)(v4 + v3)) > (unsigned int)((v1 + 2) >> 1)) {
        unsigned int v5 = (unsigned int)((unsigned int)*(char*)((unsigned int)((v1 + 2) >> 1) + v3) * 2 - 175);
        if(v5 <= 65) {
            param4 = param1;
            v0 = (int)(v5 >> 1);
            switch(v0) {
                case 0: 
                case 12: {
                    goto loc_80596D6;
                }
                case 1: 
                case 2: 
                case 3: 
                case 4: 
                case 5: 
                case 6: 
                case 7: 
                case 8: 
                case 9: 
                case 10: 
                case 11: 
                case 13: 
                case 14: 
                case 15: {
                    break;
                }
                default: {
                    throw 0;
                }
            }
        }
    loc_80596CB:
        /*BAD_CALL!*/ caml_apply3(211, *(int**)(param1 + 28));
    loc_80596D6:
        caml_apply3(v2, *(int**)(param1 + 28));
        /*BAD_CALL!*/ caml_apply2(*(int*)(param4 + 32));
    }
    int v6 = caml_ml_array_bound_error(v2, param2, (int)param3, param4);
    while(1) {
        int v7 = *(int*)(v0 + 52);
        if(v7 < v1) {
            v6 = /*NO_RETURN*/ camlPrintf__incomplete_format_1065(v0, v7);
        }
        int v8 = (unsigned int)*(char*)((v1 >> 1) + *(int*)(v0 + 40)) * 2 + 1;
        if(v8 == 191) {
            v1 += 2;
            continue;
        }
        else if(v8 < 117 && 0) {
            goto loc_80596CB;
        }
        else if(v8 < 117 && v8 >= 65) {
            throw 0;
        }
        v6 = /*BAD_CALL!*/ camlPrintf__scan_conv_1143(v0 + 16);
        v1 += 2;
    }
}

int sub_80596F0(int param0, int param1, int param2, int param3, int param4, void* param5) {
    /*BAD_CALL!*/ caml_apply3(param0, *(int**)(param1 + 28));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805A4E0(int param0, int param1, int param2, int param3, int param4, int param5, void* param6) {
    int v0;
    /*BAD_CALL!*/ caml_apply2(*(int**)(v0 + 32));
}

int sub_805A500(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, void* param8) {
    int v0;
    /*BAD_CALL!*/ caml_apply3(param1 + 2, *(int**)(v0 + 20));
}

int sub_805A520(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, void* param8) {
    int v0;
    /*BAD_CALL!*/ caml_apply3(param1 + 2, *(int**)(v0 + 20));
}

int sub_805A540(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, void* param8) {
    int v0;
    /*BAD_CALL!*/ caml_apply3(param1 + 2, *(int**)(v0 + 20));
}

int sub_805A560(int param0, int param1, int param2, int param3, int param4, int param5, int param6, void* param7) {
    int v0;
    int v1 = param0;
    param1 = camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    if(param2 == 1) {
        v1 = camlPervasives__string_of_float_1140();
    }
    else {
        camlPrintf__extract_format_float_1110(v1, param1);
        v1 = camlPrintf__fun_1600(v1, param1, param2);
    }
    if(param4 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(param3 + 2, *(int**)(param6 + 20));
}

int sub_805A600(int param0, int param1, int param2, int param3, int param4, int param5, void* param6) {
    int v0;
    int v1 = camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    param1 = **(unsigned int*)(gvar_807951C + 8)();
    param0 = camlPrintf__get_arg_1288(*(int*)(param5 + 40));
    if(param3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply4(param0, param2 + 2);
}

int sub_805A690(int param0, int param1, int param2, int param3, int param4, int param5, void* param6) {
    int v0;
    int v1 = camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    if(param3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(param2 + 2, *(int**)(param5 + 28));
}

int sub_805A6F0(int param0, int param1, int* param2, int param3, int param4, int param5, void* param6) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = camlPrintf__get_arg_1288(*(int*)(v1 + 40));
    if(v0 != 231) {
        camlString__escaped_1080();
        camlPervasives__$5e_1112();
        v4 = camlPervasives__$5e_1112();
    }
    if(*(int*)(param5 + 16) + 2 == param2) {
        v0 = v4;
    }
    else {
        camlPrintf__extract_format_1085(param2, param1);
        v0 = camlPrintf__format_string_1080(v2, v3);
    }
    if(param3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3((int)((char*)param2 + 2), *(int**)(param5 + 20));
}

int sub_805A7B0(int param0, int param1, int param2, int param3, int param4, int param5, int param6, void* param7) {
    int v0;
    int v1 = param0;
    camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    if(v1 == 199) {
        v1 = camlString__make_1038();
    }
    else {
        camlChar__escaped_1038();
        camlPervasives__$5e_1112();
        v1 = camlPervasives__$5e_1112();
    }
    if(param4 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(param3 + 2, *(int**)(param6 + 20));
}

int sub_805A840(int param0, void* param1, int param2, int param3, int param4, int param5, int param6, void* param7) {
    int v0;
    int v1 = param0;
    int v2 = camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    int v3 = camlPrintf__extract_format_int_1103(v1, v2);
    void* ptr0 = param1;
    int v4 = v3;
    v1 = caml_c_call();
    if(param4 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(param3 + 2, *(int**)(param6 + 20));
}

int sub_805A8C0(int param0, int param1, int* param2, int param3, int param4, int param5, void* param6) {
    int v0;
    int v1 = camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    int v2 = camlPrintf__extract_format_1085(param2, param1);
    void* ptr0 = (void*)v1;
    int v3 = v2;
    v1 = caml_c_call();
    if(param3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3((int)((char*)param2 + 2), *(int**)(param5 + 20));
}

int sub_805A940(int param0, int param1, int param2, int param3, int param4, int param5, void* param6) {
    int v0;
    camlPrintf__get_arg_1288(*(int*)(v0 + 40));
    int v1 = camlPervasives__string_of_bool_1127();
    if(param3 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(param2 + 2, *(int**)(param5 + 20));
}

unsigned int sub_805A990(int param0, int param1, int param2, int param3, int param4, int param5, void* param6) {
    int* ptr0;
    int v0;
    void* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    int* ptr6;
    int* ptr7;
    void* ptr8;
    int v1;
    int v2;
    int v3;
    unsigned int v4 = (unsigned int)((unsigned int)*(char*)(((v1 + 2) >> 1) + *(int*)(v2 + 12)) * 2 - 175) >> 1;
    switch(v4) {
        case 0: 
        case 12: 
        case 17: 
        case 23: 
        case 29: 
        case 32: {
        loc_805AA43:
            param0 = v1 + 2;
            if(((unsigned int)(v3 - 216) > 5 || (unsigned int)(v3 - 216) >> 1 == 1)) {
                ptr8 = (void*)camlPrintf__get_arg_1288(*(int*)(v2 + 40));
                int v5 = camlPrintf__extract_format_1085((int*)param0, param1);
                ptr1 = ptr8;
                v0 = v5;
            }
            else if((((((unsigned int)(v3 - 216) >> 1) - 1) ^ ((unsigned int)(v3 - 216) >> 1)) & (((unsigned int)(v3 - 216) >> 1) ^ 0x1)) < 0 != (int)((unsigned int)(v3 - 216) >> 1) < 1) {
                ptr8 = (void*)camlPrintf__get_arg_1288(*(int*)(v2 + 40));
                int v6 = camlPrintf__extract_format_1085((int*)param0, param1);
                ptr1 = ptr8;
                v0 = v6;
            }
            else {
                ptr8 = (void*)camlPrintf__get_arg_1288(*(int*)(v2 + 40));
                int v7 = camlPrintf__extract_format_1085((int*)param0, param1);
                ptr1 = ptr8;
                v0 = v7;
            }
            ptr8 = (void*)caml_c_call();
            if(param3 == 1) {
                **(unsigned int*)(gvar_807951C + 8)();
            }
            /*BAD_CALL!*/ caml_apply3(param0 + 2, *(int**)(param5 + 20));
            goto loc_805AC65;
        }
        case 33: 
        case 36: 
        case 44: 
        case 46: 
        case 47: 
        case 49: 
        case 50: 
        case 51: 
        case 52: 
        case 53: 
        case 54: 
        case 55: 
        case 56: 
        case 57: 
        case 58: {
            return (unsigned int)camlPrintf__scan_flags_1292(v3, v1 + 2);
        }
        case 34: 
        case 35: 
        case 37: 
        case 38: 
        case 39: 
        case 40: 
        case 41: 
        case 42: 
        case 45: 
        case 48: {
            return (unsigned int)camlPrintf__scan_conv_1293(v3, v1);
        }
        case 43: {
        loc_805AC65:
            while(1) {
                ptr7 = (int*)(caml_young_ptr - 36);
                caml_young_ptr -= 36;
                if(caml_young_limit <= (unsigned int)ptr7) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr7 = 8439;
            *(int*)(ptr7 + 1) = &caml_curry2;
            *(ptr7 + 2) = 5;
            *(ptr7 + 3) = &camlPrintf__got_spec_1304;
            *(ptr7 + 4) = *(int*)(v2 + 56);
            *(ptr7 + 5) = v2;
            *(unsigned int*)(ptr7 + 6) = v4;
            *(ptr7 + 7) = (v1 + 2) >> 1;
            *(ptr7 + 8) = v3;
            return camlPrintf__scan_positional_spec_1252((v1 + 2) >> 1, v1 + 2);
        }
        case 59: {
            /*BAD_CALL!*/ caml_apply2((int)ptr8);
        }
        case 60: {
            while(1) {
                ptr6 = (int*)(caml_young_ptr - 20);
                caml_young_ptr -= 20;
                if(caml_young_limit <= (unsigned int)ptr6) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr6 = 4343;
            *(int*)(unsigned int)(ptr6 + 1) = &camlPrintf__fun_1572;
            *(ptr6 + 2) = 3;
            *(void**)(ptr6 + 3) = ptr8;
            *(void**)(ptr6 + 4) = (void*)param0;
            jump param1;
        }
        case 61: {
            while(1) {
                ptr5 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr5) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr5 = 5367;
            *(int*)(unsigned int)(ptr5 + 1) = &caml_curry2;
            *(ptr5 + 2) = 5;
            *(ptr5 + 3) = &camlPrintf__fun_1575;
            *(void**)(ptr5 + 4) = ptr8;
            *(void**)(ptr5 + 5) = (void*)param0;
            jump param1;
        }
        case 62: {
            while(1) {
                ptr4 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr4) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr4 = 5367;
            *(int*)(unsigned int)(ptr4 + 1) = &caml_curry3;
            *(ptr4 + 2) = 7;
            *(ptr4 + 3) = &camlPrintf__fun_1578;
            *(void**)(ptr4 + 4) = ptr8;
            *(void**)(ptr4 + 5) = (void*)param0;
            jump param1;
        }
        case 63: {
            break;
        }
        case 64: {
            while(1) {
                ptr3 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr3) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr3 = 5367;
            *(int*)(unsigned int)(ptr3 + 1) = &caml_curry5;
            *(ptr3 + 2) = 11;
            *(ptr3 + 3) = &camlPrintf__fun_1584;
            *(void**)(ptr3 + 4) = ptr8;
            *(void**)(ptr3 + 5) = (void*)param0;
            jump param1;
        }
        case 65: {
            while(1) {
                ptr2 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr2) {
                    break;
                }
                else {
                    caml_call_gc(v3, v1);
                }
            }
            *ptr2 = 5367;
            *(int*)(unsigned int)(ptr2 + 1) = &caml_curry6;
            *(ptr2 + 2) = 13;
            *(ptr2 + 3) = &camlPrintf__fun_1587;
            *(void**)(ptr2 + 4) = ptr8;
            *(void**)(ptr2 + 5) = (void*)param0;
            jump param1;
        }
        default: {
            int v8 = camlPrintf__get_arg_1288(*(int*)(v2 + 40));
            v2 = param1;
            int v9 = camlPrintf__extract_format_int_1103(v8, param0);
            ptr1 = ptr8;
            v0 = v9;
            ptr8 = (void*)caml_c_call();
            if(param3 == 1) {
                **(unsigned int*)(gvar_807951C + 8)();
            }
            /*BAD_CALL!*/ caml_apply3(param2 + 2, *(int**)(param5 + 20));
            goto loc_805AA43;
        }
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v3, v1);
        }
    }
    *ptr0 = 5367;
    *(int*)(unsigned int)(ptr0 + 1) = &caml_curry4;
    *(ptr0 + 2) = 9;
    *(ptr0 + 3) = &camlPrintf__fun_1581;
    *(void**)(ptr0 + 4) = ptr8;
    *(void**)(ptr0 + 5) = (void*)param0;
    jump param1;
}

int sub_805AB60(int param0, int param1, int param2, int param3, int param4, int param5, int param6, void* param7) {
    int v0;
    int v1;
    param1 = param0;
    param2 = camlPrintf__get_arg_1288(*(int*)(v1 + 40));
    int v2 = param3 + 2;
    int v3 = camlPrintf__sub_format_for_printf_1135();
    caml_apply2(v3);
    param3 = v0;
    if(param1 == 247) {
        v2 = camlPrintf__summarize_format_type_1162();
        if(param4 == 1) {
            **(unsigned int*)(gvar_807951C + 8)();
        }
        /*BAD_CALL!*/ caml_apply3(v0, *(int**)(param6 + 20));
    }
    if(param4 == 1) {
        **(unsigned int*)(gvar_807951C + 8)();
    }
    /*BAD_CALL!*/ caml_apply3(v0, *(int**)(param6 + 36));
}

int sub_805B110(int param0, int param1) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    camlPrintf__parse_1069(v0);
    caml_exception_pointer = v1;
    jump param1;
}

int sub_805E500(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14) {
    int v0;
    int v1;
    int v2;
    unsigned int* ptr0 = (unsigned int)((unsigned char)ptr0 ^ 0x3c) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
    int v3 = *ptr0;
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    *(char*)((int)ptr0 + v0) = (unsigned char)(v1 >>> 8) + (unsigned char)(unsigned int*)__carry__((int)ptr0, v3) + *(char*)((int)ptr0 + v0);
    *(char*)(v2 - 0x7bfffec5) = (unsigned char)(v1 >>> 8) + *(char*)(v2 - 0x7bfffec5);
    *(char*)(v0 + 59) = (unsigned char)v1 + *(char*)(v0 + 59);
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    if(ptr0 == -1) {
        uerror(v1 - 6116, 0);
    }
    jump param14;
}

int sub_805FEE5(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    *(int*)(v0 - 36) = 8;
    int v4 = →getsockopt(*(int*)(v0 + 24) >> 1, *(int*)(v0 + 16), *(int*)(v0 + 20), (void*)(v0 - 32), (socklen_t*)(v0 - 36));
    if(v4 == -1) {
        uerror(v1, 0);
    }
    if(v2 <= 4) {
        jump v3 - *(int*)(v2 * 4 + v3 - 0x121e8);
    }
    unix_error(22, (char*)v1, 0);
    jump param0;
}

int sub_805FEEE(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    *(int*)(v0 - 36) = 8;
    int v4 = →getsockopt(*(int*)(v0 + 24) >> 1, *(int*)(v0 + 16), *(int*)(v0 + 20), (void*)(v0 - 32), (socklen_t*)(v0 - 36));
    if(v4 == -1) {
        uerror(v1, 0);
    }
    if(v2 <= 4) {
        jump v3 - *(int*)(v2 * 4 + v3 - 0x121e8);
    }
    unix_error(22, (char*)v1, 0);
    jump param0;
}

int sub_805FEF7(int param0, int param1, int param2, int param3) {
    char* ptr0;
    int v0;
    unsigned int v1;
    int v2;
    unix_error(22, ptr0, 0);
    int v3 = →getsockopt(*(int*)(v0 + 24) >> 1, *(int*)(v0 + 16), *(int*)(v0 + 20), (void*)(v0 - 32), (socklen_t*)(v0 - 36));
    if(v3 == -1) {
        uerror((int)ptr0, 0);
    }
    if(v1 <= 4) {
        jump v2 - *(int*)(v1 * 4 + v2 - 0x121e8);
    }
    unix_error(22, ptr0, 0);
    jump param0;
}

int sub_805FF84(int param0) {
    int result;
    int* ptr0;
    if(*(ptr0 - 8)) {
        result = caml_alloc_small(1, 0);
        *(int*)result = *(ptr0 - 7) * 2 + 1;
    }
    else {
        result = 1;
    }
    return result;
}

long long* sub_805FFB0(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1;
    *(long long*)&v0 = (double)*(ptr0 - 8) + (double)*(ptr0 - 7) / *(float*)(v1 - 6212);
    return caml_copy_double(*(double*)&v0, param1);
}

int sub_805FFC8(int param0) {
    int result;
    int* ptr0;
    int v0;
    int v1 = *(ptr0 - 8);
    if(v1) {
        int v2 = unix_error_of_code(v1);
        *(ptr0 - 10) = v2;
        unsigned int* ptr1 = *(unsigned int*)(v0 - 24);
        *(ptr0 - 18) = *ptr1;
        *ptr1 = ptr0 - 18;
        *(ptr0 - 16) = 1;
        *(ptr0 - 17) = 1;
        *(unsigned int*)(ptr0 - 15) = ptr0 - 10;
        result = caml_alloc_small(1, 0);
        *(int*)result = *(ptr0 - 10);
        *ptr1 = *(ptr0 - 18);
    }
    else {
        result = 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806150E(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &minor_heap_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806151F(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &heap_chunk_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806152D(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &heap_size_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806153B(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &max_stack_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8061549(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &percent_free_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_8061557(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &max_percent_free_init);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}();
    return result;
}

int sub_8061565(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    scanmult(v3, &caml_verb_gc);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_8061573(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    caml_record_backtrace(3);
    do {
        result = (unsigned int)*ptr0;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            v6 = result - 79;
        }
    }
    while((unsigned char)v6 > 39);
    *(int*)((unsigned int)(v6 & 0xFF) * 4 + v4){sub_8061557}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8061581(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int v3;
    char* ptr0;
    int v4;
    int v5;
    int result;
    caml_parser_trace = 1;
    do {
        int v6 = (unsigned int)*ptr0;
        if(!(unsigned char)v6) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v2 = caml_data_segments;
                ptr0 = NULL;
                v4 = &gvar_80728E4;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_8061656;
                }
            }
            else {
                v2 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v2, *(int*)((int)(int*)((int)ptr0 * 8) + v4));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v2 = *(int*)((int)(int*)((int)ptr0 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v5 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v5 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v3);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            result = v6 - 79;
        }
    }
    while((unsigned char)result > 39);
    *(int*)((unsigned int)(result & 0xFF) * 4 + v4){sub_8061557}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_806158D(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char* ptr0;
    int v5;
    int result;
    scanmult(v2, v3);
    caml_set_allocation_policy(*(int*)(v4 - 32));
    do {
        int v6 = (unsigned int)*ptr0;
        if(!(unsigned char)v6) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v7 = 0;
            do {
                *(int*)(v7 * 4 + (int)&caml_atom_table) = v7;
                ++v7;
            }
            while(v7 != 0x100);
            int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v8) {
                v1 = caml_data_segments;
                ptr0 = NULL;
                v5 = &gvar_80728E4;
                v3 = &caml_data_segments;
                if(v1) {
                    goto loc_8061656;
                }
            }
            else {
                v1 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_8061656:
                do {
                    int v9 = caml_page_table_add(4, v1, *(int*)((int)(int*)((int)ptr0 * 8) + v5));
                    if(v9) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr0;
                    v1 = *(int*)((int)(int*)((int)ptr0 * 8) + v3);
                }
                while(v1);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v10 = gvar_8072960;
            caml_code_area_end = v10;
            unsigned int v11 = gvar_8072964;
            if(v11) {
                unsigned int v12 = caml_code_area_start;
                int v13 = 1;
                do {
                    v12 = v11 >= v12 ? v12: v11;
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
            char* ptr1 = **(char***)(v4 + 8);
            char* __src1 = ptr1 ? ptr1: (char*)&gvar_80719A8;
            int v15 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v16 = &proc_self_exe.2949;
            if(v15) {
                v16 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v16, *(unsigned int*)(v4 + 8));
            int v17 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v17) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(v2);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr0;
            result = v6 - 79;
        }
    }
    while((unsigned char)result > 39);
    *(int*)((unsigned int)(result & 0xFF) * 4 + v5){sub_8061557}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_806179C() {
    return 0;
}

int sub_806AA65(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    int v1 = (int)*ptr0;
    intern_src = (int*)(ptr0 + 1);
    **(unsigned int*)(v0 - 60) = v1 * 2 + 1;
    jump param22;
}

int sub_806AA79(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 2);
    **(unsigned int*)(v0 - 60) = ((int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1)) * 2 + 1;
    jump param22;
}

int sub_806AA98(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 4);
    **(unsigned int*)(v0 - 60) = ((unsigned int)*(ptr0 + 2) * 0x100 + (unsigned int)*(ptr0 + 1) * 0x10000 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3))) * 2 + 1;
    jump param22;
}

int sub_806AACA(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    intern_cleanup();
    int v1 = caml_failwith("input_value: integer too large");
    int v2 = (unsigned int)*(char*)v1;
    intern_src = (unsigned int)(v1 + 1);
    **(unsigned int*)(v0 - 60) = *(int*)((obj_counter2 - v2) * 4 + intern_obj_table);
    jump param22;
}

int sub_806AAFC(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 2);
    int v1 = (unsigned int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1);
    int v2 = *(int*)((obj_counter2 - v1) * 4 + intern_obj_table);
    **(unsigned int*)(v0 - 60) = v2;
    jump param22;
}

int sub_806AB13(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 4);
    int v1 = (unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3));
    int v2 = *(int*)((obj_counter2 - v1) * 4 + intern_obj_table);
    **(unsigned int*)(v0 - 60) = v2;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_806AB3D(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    int v1;
    int v2;
    unsigned int v3 = (unsigned int)(v1 + 4);
    intern_src = v3;
    int v4 = (unsigned int)*(char*)(v3 - 4) * 0x1000000 + (unsigned int)*(char*)(v3 - 3) * 0x10000 + ((unsigned int)*(char*)(v3 - 2) * 0x100 + (unsigned int)*(char*)(v3 - 1));
    int v5 = (unsigned int)(v4 & 0xFF);
    int v6 = v4 >>> 10;
    while(v6) {
        int v7 = intern_dest + 4;
        **(unsigned int*)(v2 - 60) = v7;
        unsigned int v8 = intern_obj_table;
        if(v8) {
            unsigned int v9 = obj_counter2;
            *(int*)(v9 * 4 + v8) = v7;
            obj_counter2 = (int)(v9 + 1);
        }
        int* ptr0 = intern_dest;
        *(unsigned int*)(v2 - 60) = ptr0 + 1;
        *ptr0 = v6 * 0x400 + intern_color + v5;
        intern_dest = (unsigned int)(v6 * 4 + intern_dest + 4);
        if((unsigned int)v6 > 1) {
            int v10 = v6;
            *(int*)(v2 - 64) = *(int*)(v2 - 60);
            do {
                intern_rec();
                --v10;
                *(int*)(v2 - 64) = *(int*)(v2 - 64) + 4;
            }
            while((unsigned int)v10 > 1);
            *(int*)(v2 - 60) = v6 * 4 + *(int*)(v2 - 60) - 4;
        }
        char* result = intern_src;
        v5 = (unsigned int)*result;
        unsigned int v11 = (unsigned int)(v5 & 0xFF);
        intern_src = (int*)(result + 1);
        if(v11 > 127) {
            v5 = v11 & 0xf;
            v6 = (v11 >>> 4) & 0x7;
            continue;
        }
        else if(v11 > 63) {
            v0 = (v11 & 0x3f) * 2 + 1;
        }
        else if(v11 > 31) {
            int v12 = (int)(v11 & 0x1f);
            int v13 = (v12 + 4) >>> 2;
            void* ptr1 = (void*)(intern_dest + 4);
            v0 = (int)ptr1;
            unsigned int v14 = intern_obj_table;
            if(v14) {
                unsigned int v15 = obj_counter2;
                *(void**)(v15 * 4 + v14) = ptr1;
                obj_counter2 = v15 + 1;
            }
            *intern_dest = v13 * 0x400 + intern_color + 252;
            intern_dest = (unsigned int)(v13 * 4 + intern_dest + 4);
            int v16 = v13 * 4;
            *(int*)(v16 + v0 - 4) = 0;
            int v17 = v16 - 1;
            *(char*)(v17 + v0) = (unsigned char)v17 - (unsigned char)v12;
            param1 = v12;
            param0 = intern_src;
            →memmove();
            intern_src += v12;
        }
        else if((unsigned char)v5 <= 19) {
            *(int*)((unsigned int)(v5 & 0xFF) * 4 + v0){sub_806AA65|sub_806AA79|sub_806AA98|sub_806AACA|sub_806AAFC|sub_806AB13|sub_806AB3D|sub_806AB90|sub_806ABBC|sub_806AC7B|sub_806AD90}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22);
            return result;
        }
        else {
            intern_cleanup();
            caml_failwith("input_value: ill-formed message");
        }
        **(int**)(v2 - 60) = v0;
        jump param22;
    }
    v0 = v5 * 4 + &gvar_80821C4;
    **(int**)(v2 - 60) = v0;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806AB6F(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    intern_cleanup();
    int v1 = caml_failwith("input_value: data block too large");
    int v2 = (unsigned int)*(char*)v1;
    intern_src = (unsigned int)(v1 + 1);
    int v3 = intern_dest + 4;
    unsigned int v4 = intern_obj_table;
    if(v4) {
        unsigned int v5 = obj_counter2;
        *(int*)(v5 * 4 + v4) = v3;
        obj_counter2 = v5 + 1;
    }
    *intern_dest = ((v2 + 4) >>> 2) * 0x400 + intern_color + 252;
    intern_dest = (unsigned int)(((v2 + 4) >>> 2) * 4 + intern_dest + 4);
    *(int*)(((v2 + 4) >>> 2) * 4 + v3 - 4) = 0;
    *(char*)(((v2 + 4) >>> 2) * 4 - 1 + v3) = (unsigned char)((v2 + 4) >>> 2) * 4 - 1 - (unsigned char)v2;
    param1 = v2;
    param0 = intern_src;
    →memmove();
    intern_src += v2;
    **(unsigned int*)(v0 - 60) = v3;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806AB90(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* ptr0;
    int v0;
    intern_src = (unsigned int)(ptr0 + 4);
    size_t __n = (size_t)((unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3)));
    void* __dest = (void*)(intern_dest + 4);
    unsigned int v1 = intern_obj_table;
    if(v1) {
        unsigned int v2 = obj_counter2;
        *(void**)(v2 * 4 + v1) = __dest;
        obj_counter2 = v2 + 1;
    }
    *intern_dest = ((__n + 4) >>> 2) * 0x400 + intern_color + 252;
    intern_dest = (unsigned int)(((__n + 4) >>> 2) * 4 + intern_dest + 4);
    *((int*)(((__n + 4) >>> 2) * 4 + (int)__dest) - 1) = 0;
    *(char*)(((__n + 4) >>> 2) * 4 - 1 + (int)__dest) = (unsigned char)((__n + 4) >>> 2) * 4 - 1 - (unsigned char)__n;
    →memmove(__dest, intern_src, __n);
    intern_src += __n;
    **(void***)(v0 - 60) = __dest;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806ABBC(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    int v1;
    void* __dest = (void*)(intern_dest + 4);
    unsigned int v2 = intern_obj_table;
    if(v2) {
        unsigned int v3 = obj_counter2;
        *(void**)(v3 * 4 + v2) = __dest;
        obj_counter2 = v3 + 1;
    }
    *intern_dest = intern_color + 2301;
    intern_dest += 12;
    →memmove(__dest, intern_src, 8);
    intern_src += 8;
    if(v0 != 12) {
        *(char*)(v1 - 64) = *(char*)__dest;
        char v4 = *(char*)((int)__dest + 1);
        *(char*)__dest = *(char*)((int)__dest + 7);
        *(char*)((int)__dest + 1) = *(char*)((int)__dest + 6);
        *(char*)((int)__dest + 7) = *(char*)(v1 - 64);
        *(char*)((int)__dest + 6) = v4;
        *(char*)(v1 - 64) = *(char*)((int)__dest + 2);
        char v5 = *(char*)((int)__dest + 3);
        *(char*)((int)__dest + 2) = *(char*)((int)__dest + 5);
        *(char*)((int)__dest + 3) = *(char*)((int)__dest + 4);
        *(char*)((int)__dest + 5) = *(char*)(v1 - 64);
        *(char*)((int)__dest + 4) = v5;
    }
    **(void***)(v1 - 60) = __dest;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806AC7B(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* ptr0;
    int v0;
    int v1;
    *(int*)(v0 - 64) = (unsigned int)*ptr0;
    intern_src = (int*)(ptr0 + 1);
    int v2 = *(int*)(v0 - 64) * 2;
    unsigned int v3 = intern_dest;
    *(unsigned int*)(v0 - 72) = intern_dest;
    *(int*)(v0 - 68) = v3 + 4;
    int v4 = v3 + 4;
    unsigned int v5 = intern_obj_table;
    if(v5) {
        unsigned int v6 = obj_counter2;
        *(int*)(v6 * 4 + v5) = v4;
        obj_counter2 = v6 + 1;
    }
    *intern_dest = v2 * 0x400 + intern_color + 254;
    intern_dest = (unsigned int)(v2 * 4 + intern_dest + 4);
    size_t __n = (size_t)(*(int*)(v0 - 64) * 8);
    →memmove(*(void**)(v0 - 68), intern_src, __n);
    intern_src += __n;
    if(v1 != 14 && v1 != 7 && *(int*)(v0 - 64)) {
        void* ptr1 = *(void**)(v0 - 72);
        unsigned int v7 = 0;
        unsigned int v8 = *(unsigned int*)(v0 - 64);
        *(int*)(v0 - 64) = v4;
        do {
            char v9 = *(char*)((int)ptr1 + 4);
            *(char*)(v0 - 68) = *(char*)((int)ptr1 + 5);
            *(char*)((int)ptr1 + 4) = *(char*)((int)ptr1 + 11);
            *(char*)((int)ptr1 + 5) = *(char*)((int)ptr1 + 10);
            *(char*)((int)ptr1 + 11) = v9;
            *(char*)((int)ptr1 + 10) = *(char*)(v0 - 68);
            char v10 = *(char*)((int)ptr1 + 6);
            *(char*)(v0 - 68) = *(char*)((int)ptr1 + 7);
            *(char*)((int)ptr1 + 6) = *(char*)((int)ptr1 + 9);
            *(char*)((int)ptr1 + 7) = *(char*)((int)ptr1 + 8);
            *(char*)((int)ptr1 + 9) = v10;
            *(char*)((int)ptr1 + 8) = *(char*)(v0 - 68);
            ++v7;
            ptr1 = (void*)((int)ptr1 + 8);
        }
        while(v7 < v8);
        v4 = *(int*)(v0 - 64);
    }
    **(unsigned int*)(v0 - 60) = v4;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806AD90(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* ptr0;
    int v0;
    int v1;
    intern_src = (unsigned int)(ptr0 + 4);
    *(int*)(v0 - 64) = (unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3));
    int v2 = *(int*)(v0 - 64) * 2;
    unsigned int v3 = intern_dest;
    *(unsigned int*)(v0 - 72) = intern_dest;
    *(int*)(v0 - 68) = v3 + 4;
    int v4 = v3 + 4;
    unsigned int v5 = intern_obj_table;
    if(v5) {
        unsigned int v6 = obj_counter2;
        *(int*)(v6 * 4 + v5) = v4;
        obj_counter2 = v6 + 1;
    }
    *intern_dest = v2 * 0x400 + intern_color + 254;
    intern_dest = (unsigned int)(v2 * 4 + intern_dest + 4);
    size_t __n = (size_t)(*(int*)(v0 - 64) * 8);
    →memmove(*(void**)(v0 - 68), intern_src, __n);
    intern_src += __n;
    if(v1 != 14 && v1 != 7 && *(int*)(v0 - 64)) {
        void* ptr1 = *(void**)(v0 - 72);
        unsigned int v7 = 0;
        unsigned int v8 = *(unsigned int*)(v0 - 64);
        *(int*)(v0 - 64) = v4;
        do {
            char v9 = *(char*)((int)ptr1 + 4);
            *(char*)(v0 - 68) = *(char*)((int)ptr1 + 5);
            *(char*)((int)ptr1 + 4) = *(char*)((int)ptr1 + 11);
            *(char*)((int)ptr1 + 5) = *(char*)((int)ptr1 + 10);
            *(char*)((int)ptr1 + 11) = v9;
            *(char*)((int)ptr1 + 10) = *(char*)(v0 - 68);
            char v10 = *(char*)((int)ptr1 + 6);
            *(char*)(v0 - 68) = *(char*)((int)ptr1 + 7);
            *(char*)((int)ptr1 + 6) = *(char*)((int)ptr1 + 9);
            *(char*)((int)ptr1 + 7) = *(char*)((int)ptr1 + 8);
            *(char*)((int)ptr1 + 9) = v10;
            *(char*)((int)ptr1 + 8) = *(char*)(v0 - 68);
            ++v7;
            ptr1 = (void*)((int)ptr1 + 8);
        }
        while(v7 < v8);
        v4 = *(int*)(v0 - 64);
    }
    **(unsigned int*)(v0 - 60) = v4;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806ADC1(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* ptr0;
    int v0;
    intern_src = (unsigned int)(ptr0 + 4);
    int v1 = (unsigned int)*ptr0;
    *(char*)(v0 - 72) = *(ptr0 + 1);
    *(char*)(v0 - 68) = *(ptr0 + 2);
    *(char*)(v0 - 64) = *(ptr0 + 3);
    param1 = 16;
    param0 = (unsigned int)(ptr0 + 4);
    unsigned char* ptr1 = (unsigned char*)(v0 - 44);
    →memmove();
    unsigned int v2 = intern_src;
    intern_src += 16;
    char v3 = intern_src ? 0: 1;
    char v4 = v2 >= 0xfffffff0;
    int v5 = caml_code_checksum();
    int v6 = 16;
    while(v6 != 0) {
        v3 = *ptr1 == *(char*)v5;
        v4 = *ptr1 < *(unsigned char*)v5;
        ++ptr1;
        ++v5;
        --v6;
        if(!v3) {
            break;
        }
    }
    if((v4 || v3 ? 0: 1) != (v4 ? 1: 0)) {
        intern_cleanup();
        caml_failwith("input_value: code mismatch");
    }
    **(unsigned int*)(v0 - 60) = (unsigned int)*(char*)(v0 - 72) * 0x10000 + (unsigned int)*(char*)(v0 - 68) * 0x100 + (v1 * 0x1000000 + (unsigned int)*(char*)(v0 - 64)) + caml_code_area_start;
    jump param22;
}

int sub_806AE51(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* ptr0;
    int v0;
    intern_src = (unsigned int)(ptr0 + 4);
    int v1 = (unsigned int)*ptr0 * 0x1000000;
    int v2 = (unsigned int)*(ptr0 + 1) * 0x10000;
    *(int*)(v0 - 64) = (unsigned int)*(ptr0 + 2) * 0x100;
    int v3 = (unsigned int)*(ptr0 + 3);
    intern_rec();
    **(unsigned int*)(v0 - 60) = *(int*)(v0 - 28) + *(int*)(v0 - 64) + (v3 + v2) + v1;
    jump param22;
}

int sub_806AE8E(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    char* __s2;
    char v0;
    int v1;
    char** ptr0 = caml_find_custom_operations(__s2);
    if(!ptr0) {
        intern_cleanup();
        caml_failwith("input_value: unknown custom block identifier");
    }
    do {
        char* ptr1 = intern_src;
        v0 = *ptr1;
        intern_src = (int*)(ptr1 + 1);
    }
    while(v0);
    int v2 = ptr0[5](intern_dest + 8);
    unsigned int* ptr2 = (unsigned int*)(intern_dest + 4);
    unsigned int v3 = intern_obj_table;
    if(v3) {
        unsigned int v4 = obj_counter2;
        *(unsigned int*)(v4 * 4 + v3) = ptr2;
        obj_counter2 = v4 + 1;
    }
    *intern_dest = (((v2 + 3) >>> 2) + 1) * 0x400 + intern_color + 0xFF;
    *ptr2 = ptr0;
    intern_dest = (unsigned int)((((v2 + 3) >>> 2) + 1) * 4 + intern_dest + 4);
    **(unsigned int*)(v1 - 60) = ptr2;
    jump param22;
}

int sub_807004D(int param0, int param1) {
    int v0;
    int result;
    caml_gc_regs = &v0;
    caml_garbage_collection();
    return result;
}

int sub_80701AE(unsigned int param0, unsigned int param1, int param2, int param3, int param4, int param5, int param6) {
    unsigned int v0;
    caml_bottom_of_stack = v0;
    caml_last_return_address = param0;
    caml_gc_regs = param1;
    jump param6;
}

int sweep_slice() {
    int v0;
    int v1 = v0;
    int result = caml_gc_message(64, "Sweeping %ld words\n", v0);
    while(v1 > 0) {
        int* ptr0 = caml_gc_sweep_hp;
        if(limit > (unsigned int)ptr0) {
            result = *ptr0;
            v1 += ~(result >>> 10);
            caml_gc_sweep_hp = (int*)((result >>> 10) * 4 + (int)ptr0) + 1;
            if(!(result & 0x300)) {
                if((unsigned char)result == 0xFF) {
                    int v2 = *(int*)(*(ptr0 + 1) + 4);
                    if(v2) {
                        v2((int)(ptr0 + 1));
                    }
                }
                result = (int)caml_fl_merge_block((unsigned int*)(ptr0 + 1));
                caml_gc_sweep_hp = result;
            }
            else if((result & 0x300) == 0x200) {
                caml_fl_merge = ptr0 + 1;
            }
            else {
                result = (unsigned int)(unsigned char)result | ((unsigned int)((unsigned char)(result >>> 8) & 0xfc) << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16);
                *ptr0 = result;
            }
        }
        else {
            result = *(int*)(chunk - 4);
            chunk = *(int*)(chunk - 4);
            if(!result) {
                ++caml_stat_major_collections;
                caml_gc_phase = 2;
                return result;
            }
            caml_gc_sweep_hp = result;
            result += *(int*)(result - 8);
            limit = result;
        }
    }
    return result;
}

int test_and_compact() {
    __SyntheticTypeUnknownF v0;
    short v1;
    __int128 v2;
    __int128 v3;
    int v4 = caml_fl_cur_size;
    int v5 = caml_fl_cur_size;
    int v6 = 0;
    __SyntheticTypeUnknownF v7 = (double)*(long long*)&v5 * 100.0;
    unsigned int v8 = caml_stat_heap_size >>> 2;
    v5 = (int)(v8 - v4);
    v10[v12] = fucomi(v7 / (double)*(long long*)&v5, 999999.0);
    v10[v12] = fcmovnbe(v3, v2);
    float v9 = v0;
    v1 = fnstcw(v1);
    short v11 = fldcw((unsigned short)(unsigned char)v1 | ((unsigned short)12 << 8));
    fistp();
    v1 = fldcw(v1);
    caml_gc_message(0x200, "Estimated overhead (lower bound) = %lu%%\n", v5);
    int result = caml_percent_max;
    v5 = caml_percent_max;
    v10[v12] = fucomip(v0, (double)*(long long*)&v5);
    if((unsigned int)v4 <= v8 && caml_stat_heap_chunks > 1) {
        caml_gc_message(0x200, "Automatic compaction triggered.\n", 0);
        result = caml_compact_heap();
    }
    return result;
}

char* token_name(int param0, int param1) {
    char* ptr0;
    char* result = ptr0;
    if(param1 > 0) {
        if(!*result) {
            return "<unknown token>";
        }
        do {
            char* ptr1 = result;
            int v0 = -1;
            while(v0 != 0) {
                char v1 = *ptr1 == 0;
                ++ptr1;
                --v0;
                if(!~v1) {
                    break;
                }
            }
            result = (char*)(~v0 + (int)result);
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

unsigned int truncate_flp() {
    unsigned int result;
    if(result != 134723336) {
        unsigned int* ptr0 = flp_size;
        if((int)ptr0 > 0) {
            ptr0 = (unsigned int*)((char*)ptr0 - 1);
            if(**(unsigned int*)((int)(int*)((int)ptr0 * 4) + (int)&flp) >= result) {
                while((int)ptr0 > 0) {
                    if(**(unsigned int*)((int)(int*)((int)(unsigned int*)((char*)ptr0 - 1) * 4) + (int)&flp) < result) {
                        flp_size = ptr0;
                        goto loc_8062EA0;
                    }
                    else {
                        ptr0 = (unsigned int*)((char*)ptr0 - 1);
                    }
                }
                flp_size = ptr0;
            }
        }
    loc_8062EA0:
        if(beyond >= result) {
            beyond = 0;
        }
    }
    else {
        flp_size = 0;
        beyond = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int uerror(int param0, int param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = →__errno_location();
    /*BAD_CALL!*/ unix_error(ptr0[0], param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_accept(int param0) {
    char v0;
    int v1 = 112;
    caml_enter_blocking_section();
    int __fd = →accept(param0 >> 1, &v0, &v1);
    caml_leave_blocking_section();
    if(__fd == -1) {
        uerror("accept", 0);
    }
    int v2 = alloc_sockaddr((short*)&v0, v1, __fd);
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v3;
    int result = caml_alloc_small(2, 0);
    *(int*)result = __fd * 2 + 1;
    *(int*)(result + 4) = v2;
    caml_local_roots = v3;
    return result;
}

int unix_access(char* __name, int* param1) {
    int __type = caml_convert_flag_list(param1, &access_permission_table);
    int v0 = →access(__name, __type);
    if(v0 == -1) {
        uerror("access", (int)__name);
    }
    return 1;
}

int unix_alarm(int param0) {
    unsigned int v0 = →alarm((unsigned int)(param0 >> 1));
    return v0 * 2 + 1;
}

int unix_bind(int param0, int param1) {
    char v0;
    socklen_t __len;
    get_sockaddr(param1, &v0, &__len);
    int v1 = →bind(param0 >> 1, (__CONST_SOCKADDR_ARG)&v0, __len);
    if(v1 == -1) {
        uerror("bind", 0);
    }
    return 1;
}

int unix_chdir(char* __path) {
    int v0 = →chdir(__path);
    if(v0 == -1) {
        uerror("chdir", (int)__path);
    }
    return 1;
}

int unix_chmod(char* __file, int param1) {
    int v0 = →chmod(__file, (__mode_t)(param1 >> 1));
    if(v0 == -1) {
        uerror("chmod", (int)__file);
    }
    return 1;
}

int unix_chown(char* __file, int param1, int param2) {
    int v0 = →chown(__file, (__uid_t)(param1 >> 1), (__gid_t)(param2 >> 1));
    if(v0 == -1) {
        uerror("chown", (int)__file);
    }
    return 1;
}

int unix_chroot(char* __path) {
    int v0 = →chroot(__path);
    if(v0 == -1) {
        uerror("chroot", (int)__path);
    }
    return 1;
}

int unix_clear_close_on_exec(int param0) {
    int v0;
    →fcntl();
    if(v0 != -1) {
        →fcntl();
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
    int v0;
    →fcntl();
    if(v0 != -1) {
        →fcntl();
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
    int v0 = →close(param0 >> 1);
    if(v0 == -1) {
        uerror("close", 0);
    }
    return 1;
}

int unix_closedir(int* param0) {
    int v0 = *param0;
    if(!v0) {
        v0 = unix_error(9, "closedir", 0);
    }
    →closedir((DIR*)v0);
    *param0 = 0;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_connect(int param0, int param1) {
    char v0;
    socklen_t __len;
    get_sockaddr(param1, &v0, &__len);
    caml_enter_blocking_section();
    int v1 = →connect(param0 >> 1, (__CONST_SOCKADDR_ARG)&v0, __len);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("connect", 0);
    }
    return 1;
}

int unix_convert_itimer() {
    int* ptr0;
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknownF v1;
    int result = caml_alloc_small(4, 254);
    __SyntheticTypeUnknownF v2 = (double)*ptr0 + 1000000.0;
    *(long long*)result = (double)*(ptr0 + 1) / 1000000.0;
    v3[v4 + 2] = fdivrp(v2, (double)*(ptr0 + 3));
    *(long long*)(result + 8) = v0 + v1;
    return result;
}

int unix_dup(int param0) {
    int v0 = →dup(param0 >> 1);
    if(v0 == -1) {
        v0 = uerror(134678615, 0);
    }
    return v0 * 2 + 1;
}

int unix_dup2(int param0, int param1) {
    int v0 = →dup2(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("dup2", 0);
    }
    return 1;
}

int* unix_environment() {
    return caml_copy_string_array(*environ);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_error(int param0, char* param1, int param2) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = param2;
    int v4 = 1;
    int v5 = 1;
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v6;
    int v7 = 1;
    int v8 = 3;
    int* ptr0 = &v4;
    int* ptr1 = &v5;
    int* ptr2 = &v0;
    if(!v3) {
        v3 = caml_copy_string((char*)&gvar_80719A8);
    }
    v0 = v3;
    v4 = caml_copy_string(param1);
    v5 = unix_error_of_code(param0);
    if(!unix_error_exn) {
        unsigned int v9 = (unsigned int)caml_named_value("Unix.Unix_error");
        unix_error_exn = v9;
        if(!v9) {
            caml_invalid_argument("Exception Unix.Unix_error not initialized, please link unix.cma");
        }
    }
    int v10 = caml_alloc_small(4, 0);
    *(int*)v10 = *unix_error_exn;
    *(int*)(v10 + 4) = v5;
    *(int*)(v10 + 8) = v4;
    *(int*)(v10 + 12) = v0;
    caml_local_roots = v6;
    /*BAD_CALL!*/ caml_raise(v10);
}

int unix_error_message(int* param0) {
    char* ptr0 = →strerror(!((unsigned char)param0 & 0x1) ? *param0 >> 1: *(int*)((int)(int*)((int)(int*)((int)param0 >> 1) * 4) + (int)&error_table));
    return caml_copy_string(ptr0);
}

int unix_error_of_code(int param0) {
    int v0 = cst_to_constr(param0, (int*)&error_table, 68, -1);
    int result = v0;
    if(v0 == -1) {
        result = caml_alloc_small(1, 0);
        *(int*)result = param0 * 2 + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execv(char* __path, int param1) {
    int v0;
    int v1 = v0;
    int __ptr = cstringvect(param1);
    →execv(__path, (char**)__ptr);
    caml_stat_free(__ptr);
    /*BAD_CALL!*/ uerror("execv", (int)__path);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execve(char* __path, int param1, int param2) {
    int v0;
    int v1 = v0;
    int __ptr = cstringvect(param1);
    int __ptr1 = cstringvect(param2);
    →execve(__path, (char**)__ptr, (char**)__ptr1);
    caml_stat_free(__ptr);
    caml_stat_free(__ptr1);
    /*BAD_CALL!*/ uerror("execve", (int)__path);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execvp(char* __file, int param1) {
    int v0;
    int v1 = v0;
    int __ptr = cstringvect(param1);
    →execvp(__file, (char**)__ptr);
    caml_stat_free(__ptr);
    /*BAD_CALL!*/ uerror("execvp", (int)__file);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execvpe(char* __file, int param1, int param2) {
    int v0;
    int v1 = v0;
    int __ptr = cstringvect(param1);
    void* ptr0 = environ;
    int v2 = *(int*)ptr0;
    int v3 = cstringvect(param2);
    *(int*)ptr0 = v3;
    →execvp(__file, (char**)__ptr);
    caml_stat_free(__ptr);
    caml_stat_free(*(int*)ptr0);
    *(int*)ptr0 = v2;
    /*BAD_CALL!*/ uerror("execvp", (int)__file);
}

int unix_fchmod(int param0, int param1) {
    int v0 = →fchmod(param0 >> 1, (__mode_t)(param1 >> 1));
    if(v0 == -1) {
        uerror("fchmod", 0);
    }
    return 1;
}

int unix_fchown(int param0, int param1, int param2) {
    int v0 = →fchown(param0 >> 1, (__uid_t)(param1 >> 1), (__gid_t)(param2 >> 1));
    if(v0 == -1) {
        uerror("fchown", 0);
    }
    return 1;
}

int unix_fork() {
    __pid_t v0 = →fork();
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
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = →__fxstat64(3, param0 >> 1, &v0);
    if(v5 == -1) {
        uerror("fstat", 0);
    }
    if(v1 >= 0 && (v1 > 0 || v2 > 0x3fffffff) && (v3 & 0xf000) == 0x8000) {
        unix_error(75, "fstat", 0);
    }
    return stat_aux(v4, (int*)&v0);
}

int unix_fstat_64(int param0) {
    char v0;
    int v1;
    int v2 = →__fxstat64(3, param0 >> 1, &v0);
    if(v2 == -1) {
        uerror("fstat", 0);
    }
    return stat_aux(v1, (int*)&v0);
}

int unix_ftruncate(int param0, int param1) {
    int v0 = param1 >> 1;
    int v1 = (param1 >> 1) >> 31;
    int v2 = →ftruncate64(param0 >> 1, *(__off64_t*)&v0);
    if(v2 == -1) {
        uerror("ftruncate", 0);
    }
    return 1;
}

int unix_ftruncate_64(int param0, int param1) {
    int v0 = *(int*)(param1 + 8);
    int v1 = *(int*)(param1 + 4);
    int v2 = v0;
    int v3 = →ftruncate64(param0 >> 1, *(__off64_t*)&v1);
    if(v3 == -1) {
        uerror("ftruncate", 0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_getaddrinfo(int param0, int param1, unsigned int* param2) {
    int v0;
    int v1;
    char v2;
    addrinfo* __ai;
    unsigned int v3 = caml_local_roots;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = v3;
    int v6 = 1;
    int v7 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int result = 0;
    int v8 = 0;
    int v9 = 0;
    int* ptr3 = &v5;
    caml_local_roots = &ptr3;
    int v10 = 1;
    int v11 = 3;
    int* ptr4 = &result;
    int* ptr5 = &v8;
    int* ptr6 = &v9;
    int v12 = caml_string_length(param0);
    char* __dest = NULL;
    if(v12) {
        __dest = (char*)caml_stat_alloc(v12 + 1);
        →strcpy(__dest, (char*)param0);
    }
    int v13 = caml_string_length(param1);
    char* __dest1 = NULL;
    if(v13) {
        __dest1 = (char*)caml_stat_alloc(v13 + 1);
        →strcpy(__dest1, (char*)param1);
    }
    unsigned int v14 = 0;
    do {
        *(int*)(v14 + (int)&v0) = 0;
        v14 += 4;
    }
    while(v14 < 32);
    int v15 = 0;
    unsigned int* ptr7 = param2;
    while(!((unsigned char)ptr7 & 0x1)) {
        int v16 = *ptr7;
        v8 = *ptr7;
        if(!((unsigned char)v16 & 0x1)) {
            unsigned char v17 = *(unsigned char*)(v16 - 4);
            if(v17 == 1) {
                int v18 = *(int*)((*(int*)v16 >> 1) * 4 + (int)&socket_type_table);
            }
            else if(v17 == 2) {
                int v19 = *(int*)v16 >> 1;
            }
            else if(v17 < 1) {
                v15 = *(int*)((*(int*)v16 >> 1) * 4 + (int)&socket_domain_table);
            }
        }
        else if((int*)(v16 >> 1) == 1) {
            v0 |= 2;
        }
        else if((int*)(v16 >> 1) == 2) {
            v0 |= 1;
        }
        else if(!(int*)(v16 >> 1)) {
            v0 |= 4;
        }
        ptr7 = *(param2 + 1);
        param2 = *(param2 + 1);
    }
    caml_enter_blocking_section();
    int v20 = →getaddrinfo(__dest, __dest1, &v0, &__ai);
    caml_leave_blocking_section();
    if(__dest) {
        caml_stat_free((int)__dest);
    }
    if(__dest1) {
        caml_stat_free((int)__dest1);
    }
    result = 1;
    if(!v20) {
        addrinfo* ptr8 = __ai;
        if(ptr8) {
            int* ptr9 = &v1;
            do {
                int v21 = caml_local_roots;
                v20 = caml_local_roots;
                int v22 = 0;
                int v23 = 0;
                int v24 = 0;
                v1 = v21;
                caml_local_roots = ptr9;
                int v25 = 1;
                int v26 = 3;
                int* ptr10 = &v22;
                int* ptr11 = &v23;
                int* ptr12 = &v24;
                unsigned int v27 = ptr8->ai_addrlen;
                void* __dest2 = &v2;
                →memcpy(__dest2, ptr8->ai_addr, v27 <= 112 ? v27: 112);
                v23 = alloc_sockaddr((short*)__dest2, (int)(v27 <= 112 ? v27: 112), -1);
                char* ptr13 = ptr8->ai_canonname;
                v24 = caml_copy_string(ptr13 ? ptr13: (char*)&gvar_80719A8);
                int v28 = caml_alloc_small(5, 0);
                v22 = v28;
                int v29 = cst_to_constr(ptr8->ai_family, (int*)&socket_domain_table, 3, 0);
                *(int*)v28 = v29;
                int v30 = cst_to_constr(ptr8->ai_socktype, (int*)&socket_type_table, 4, 0);
                *(int*)(v22 + 4) = v30;
                *(int*)(v22 + 8) = ptr8->ai_protocol * 2 + 1;
                *(int*)(v22 + 12) = v23;
                *(int*)(v22 + 16) = v24;
                caml_local_roots = v20;
                v9 = v22;
                int v31 = caml_alloc_small(2, 0);
                v8 = v31;
                *(int*)v31 = v9;
                *(int*)(v8 + 4) = result;
                result = v8;
                ptr8 = ptr8->ai_next;
            }
            while(ptr8);
        }
        →freeaddrinfo(__ai);
    }
    caml_local_roots = v4;
    return result;
}

int unix_getcwd() {
    char v0;
    char* ptr0 = →getcwd(&v0, 0x1000);
    if(!ptr0) {
        uerror("getcwd", 0);
    }
    return caml_copy_string(&v0);
}

int unix_getegid() {
    __gid_t v0 = →getegid();
    return v0 * 2 + 1;
}

int unix_geteuid() {
    __uid_t v0 = →geteuid();
    return v0 * 2 + 1;
}

int unix_getgid() {
    __gid_t v0 = →getgid();
    return v0 * 2 + 1;
}

int unix_getgrgid(int param0) {
    group* ptr0 = →getgrgid((__gid_t)(param0 >> 1));
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_group_entry();
}

int unix_getgrnam(char* __name) {
    group* ptr0 = →getgrnam(__name);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_group_entry();
}

int unix_getgroups() {
    int v0;
    int v1 = →getgroups(0x10000, &v0);
    int v2 = v1;
    if(v1 == -1) {
        v1 = uerror("getgroups", 0);
    }
    int result = caml_alloc_tuple(v1);
    if(v2 > 0) {
        int v3 = 0;
        do {
            *(int*)(v3 * 4 + result) = *(unsigned int*)(v3 * 4 + (int)&v0) * 2 + 1;
            ++v3;
        }
        while(v3 != v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_gethostbyaddr(int* param0) {
    char v0;
    int v1;
    char v2;
    char v3;
    int v4 = *param0;
    caml_enter_blocking_section();
    int v5 = →gethostbyaddr_r(&v4, 4, 2, &v0, &v2, 10000, &v1, &v3);
    caml_leave_blocking_section();
    if(v5 || !v1) {
        caml_raise_not_found();
    }
    return alloc_host_entry();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_gethostbyname(int param0) {
    char v0;
    int v1;
    char v2;
    int v3 = caml_string_length(param0);
    char* __dest = (char*)caml_stat_alloc(v3 + 1);
    →strcpy(__dest, (char*)param0);
    caml_enter_blocking_section();
    int* __h_errnop = →__h_errno_location();
    int v4 = →gethostbyname_r(__dest, &v0, &v2, 10000, &v1, __h_errnop);
    caml_leave_blocking_section();
    if(v4) {
        v1 = 0;
    }
    caml_stat_free((int)__dest);
    if(!v1) {
        caml_raise_not_found();
    }
    return alloc_host_entry();
}

int unix_gethostname() {
    char v0;
    →gethostname(&v0, 64);
    char v1 = 0;
    return caml_copy_string(&v0);
}

int unix_getitimer(int param0) {
    char v0;
    int v1 = →getitimer(*(__itimer_which_t*)((param0 >> 1) * 4 + (int)&itimers), &v0);
    if(v1 == -1) {
        uerror("getitimer", 0);
    }
    return unix_convert_itimer();
}

int unix_getlogin() {
    char* ptr0 = →getlogin();
    if(!ptr0) {
        ptr0 = (char*)unix_error(2, "getlogin", 0);
    }
    return caml_copy_string(ptr0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_getnameinfo(int param0, int* param1) {
    unsigned int v0;
    char v1;
    socklen_t __salen;
    char v2;
    char v3;
    unsigned int v4 = caml_local_roots;
    int v5 = 0;
    int v6 = 0;
    int result = 0;
    caml_local_roots = &v0;
    int v7 = 1;
    int v8 = 3;
    int* ptr0 = &v5;
    int* ptr1 = &v6;
    int* ptr2 = &result;
    get_sockaddr(param0, &v1, &__salen);
    int __flags = caml_convert_flag_list(param1, &getnameinfo_flag_table);
    caml_enter_blocking_section();
    int v9 = →getnameinfo((sockaddr*)&v1, __salen, &v2, 0x1000, &v3, 0x400, __flags);
    caml_leave_blocking_section();
    if(v9) {
        caml_raise_not_found();
    }
    v5 = caml_copy_string(&v2);
    v6 = caml_copy_string(&v3);
    int v10 = caml_alloc_small(2, 0);
    result = v10;
    *(int*)v10 = v5;
    *(int*)(result + 4) = v6;
    caml_local_roots = v4;
    return result;
}

int unix_getpeername(int param0) {
    char v0;
    int v1 = 112;
    int v2 = →getpeername(param0 >> 1, &v0, &v1);
    if(v2 == -1) {
        uerror("getpeername", 0);
    }
    return alloc_sockaddr((short*)&v0, v1, -1);
}

int unix_getpid() {
    __pid_t v0 = →getpid();
    return v0 * 2 + 1;
}

int unix_getppid() {
    __pid_t v0 = →getppid();
    return v0 * 2 + 1;
}

int unix_getprotobyname(char* __name) {
    protoent* ptr0 = →getprotobyname(__name);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_proto_entry();
}

int unix_getprotobynumber(int param0) {
    protoent* ptr0 = →getprotobynumber(param0 >> 1);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_proto_entry();
}

int unix_getpwnam(char* __name) {
    passwd* ptr0 = →getpwnam(__name);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_passwd_entry();
}

int unix_getpwuid(int param0) {
    passwd* ptr0 = →getpwuid((__uid_t)(param0 >> 1));
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_passwd_entry();
}

int unix_getservbyname(char* __name, char* __proto) {
    servent* ptr0 = →getservbyname(__name, __proto);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int unix_getservbyport(int param0, char* __proto) {
    servent* ptr0 = →getservbyport((int)__ror__((unsigned short)(param0 >>> 1), 8), __proto);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int unix_getsockname(int param0) {
    char v0;
    int v1 = 112;
    int v2 = →getsockname(param0 >> 1, &v0, &v1);
    if(v2 == -1) {
        uerror("getsockname", 0);
    }
    return alloc_sockaddr((short*)&v0, v1, -1);
}

int unix_getsockopt(int param0, int param1, int param2) {
    int* ptr0 = (int*)((param2 >> 1) * 8 + *(int*)((param0 >> 1) * 4 + (int)&sockopt_table));
    return &unix_getsockopt_aux(*(int*)((param0 >> 1) * 4 + (int)&getsockopt_fun_name), param0 >> 1, *ptr0, *(ptr0 + 1), param1);
}

long long* unix_gettimeofday() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = →gettimeofday(&v0, NULL);
    if(v4 == -1) {
        uerror("gettimeofday", 0);
    }
    *(long long*)&v1 = (double)v0 + (double)v2 / 1000000.0;
    return caml_copy_double(*(double*)&v1, v3);
}

int unix_getuid() {
    __uid_t v0 = →getuid();
    return v0 * 2 + 1;
}

int unix_gmtime(double* param0) {
    short v0;
    char v1;
    v0 = fnstcw(v0);
    short v2 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    tm* ptr0 = →gmtime(&v1);
    if(!ptr0) {
        unix_error(22, "gmtime", 0);
    }
    return alloc_tm();
}

int unix_inet_addr_of_string(char* __cp) {
    int result;
    char v0;
    char v1;
    int v2 = →inet_pton(2, __cp, &v0);
    if(v2 > 0) {
        result = alloc_inet_addr((int*)&v0);
    }
    else {
        int v3 = →inet_pton(10, __cp, &v1);
        result = v3 > 0 ? alloc_inet6_addr((int*)&v1): caml_failwith("inet_addr_of_string");
    }
    return result;
}

int unix_initgroups(char* __user, int param1) {
    int v0 = →initgroups(__user, (__gid_t)(param1 >> 1));
    if(v0 == -1) {
        uerror("initgroups", 0);
    }
    return 1;
}

int unix_isatty(int param0) {
    int v0 = →isatty(param0 >> 1);
    return (((unsigned int)v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
}

int unix_kill(int param0, int param1) {
    unsigned int v0 = caml_convert_signal_number((unsigned int)(param1 >> 1));
    int v1 = →kill((__pid_t)(param0 >> 1), (int)v0);
    if(v1 == -1) {
        uerror("kill", 0);
    }
    return 1;
}

int unix_link(char* __from, char* __to) {
    int v0 = →link(__from, __to);
    if(v0 == -1) {
        uerror("link", (int)__to);
    }
    return 1;
}

int unix_listen(int param0, int param1) {
    int v0 = →listen(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("listen", 0);
    }
    return 1;
}

int unix_localtime(double* param0) {
    short v0;
    char v1;
    v0 = fnstcw(v0);
    short v2 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    tm* ptr0 = →localtime(&v1);
    if(!ptr0) {
        unix_error(22, "localtime", 0);
    }
    return alloc_tm();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_805E624;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_805E624;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_805E624:
            if(ptr0 == -1) {
                uerror("lockf", 0);
            }
            return 1;
        }
        case 3: {
            →fcntl();
            if(ptr1 != -1) {
                →__errno_location();
                *ptr1 = 13;
            }
            uerror("lockf", 0);
            return 1;
        }
        case 4: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_805E624;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_805E624;
        }
        default: {
            →__errno_location();
            *ptr1 = 22;
            uerror("lockf", 0);
            return 1;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_lseek(int param0, int param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    caml_enter_blocking_section();
    int __whence = *(int*)((param2 >> 1) * 4 + (int)&seek_command_table);
    int v4 = param1 >> 1;
    int v5 = (param1 >> 1) >> 31;
    (unsigned long long)v1 | ((unsigned long long)v2 << 32) = →lseek64(param0 >> 1, *(__off64_t*)&v4, __whence);
    caml_leave_blocking_section();
    if((v0 & v3) == -1) {
        uerror("lseek", 0);
    }
    if(v3 >= 0 && (v3 > 0 || v0 > 0x3fffffff)) {
        unix_error(75, "lseek", 0);
    }
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_lseek_64(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    caml_enter_blocking_section();
    (unsigned long long)v2 | ((unsigned long long)v3 << 32) = →lseek64(param0 >> 1, *(__off64_t*)&v0, *(int*)((param2 >> 1) * 4 + (int)&seek_command_table));
    caml_leave_blocking_section();
    if((v1 & v4) == -1) {
        uerror("lseek", 0);
    }
    return caml_copy_int64(v1, v4);
}

int unix_lstat(char* __filename) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = →__lxstat64(3, __filename, &v0);
    if(v5 == -1) {
        uerror("lstat", (int)__filename);
    }
    if(v1 >= 0 && (v1 > 0 || v2 > 0x3fffffff) && (v3 & 0xf000) == 0x8000) {
        unix_error(75, "lstat", (int)__filename);
    }
    return stat_aux(v4, (int*)&v0);
}

int unix_lstat_64(char* __filename) {
    char v0;
    int v1;
    int v2 = →__lxstat64(3, __filename, &v0);
    if(v2 == -1) {
        uerror("lstat", (int)__filename);
    }
    return stat_aux(v1, (int*)&v0);
}

int unix_mkdir(char* __path, int param1) {
    int v0 = →mkdir(__path, (__mode_t)(param1 >> 1));
    if(v0 == -1) {
        uerror("mkdir", (int)__path);
    }
    return 1;
}

int unix_mkfifo(char* __path, int param1) {
    int v0 = →mkfifo(__path, (__mode_t)(param1 >> 1));
    if(v0 == -1) {
        uerror("mkfifo", (int)__path);
    }
    return 1;
}

int unix_mktime(int* param0) {
    int v0;
    int v1;
    int v2 = 1;
    long long* ptr0 = (long long*)0x1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v3;
    int v4 = 1;
    int v5 = 2;
    int* ptr1 = &v2;
    int* ptr2 = &ptr0;
    int v6 = *param0 >> 1;
    int v7 = *(param0 + 1) >> 1;
    int v8 = *(param0 + 2) >> 1;
    int v9 = *(param0 + 3) >> 1;
    int v10 = *(param0 + 4) >> 1;
    int v11 = *(param0 + 5) >> 1;
    int v12 = *(param0 + 6) >> 1;
    int v13 = *(param0 + 7) >> 1;
    int v14 = -1;
    time_t v15 = →mktime(&v6);
    if(v15 == -1) {
        unix_error(34, "mktime", 0);
    }
    v2 = alloc_tm();
    time_t v16 = v15;
    *(double*)&v0 = (double)v16;
    ptr0 = caml_copy_double(*(double*)&v0, v1);
    int result = caml_alloc_small(2, 0);
    *(long long**)result = ptr0;
    *(int*)(result + 4) = v2;
    caml_local_roots = v3;
    return result;
}

int unix_nice(int param0) {
    int* ptr0;
    →__errno_location();
    *ptr0 = 0;
    int v0 = →nice(param0 >> 1);
    if(v0 == -1 && *ptr0) {
        v0 = uerror("nice", 0);
    }
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_open(int param0, int* param1, int param2) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = 1;
    int v3 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int __oflag = caml_convert_flag_list(param1, &open_flag_table);
    int v4 = caml_string_length(param0);
    char* __dest = (char*)caml_stat_alloc(v4 + 1);
    →strcpy(__dest, (char*)param0);
    caml_enter_blocking_section();
    __oflag = →open64(__dest, __oflag, param2 >> 1);
    caml_leave_blocking_section();
    caml_stat_free((int)__dest);
    if(__oflag == -1) {
        uerror("open", param0);
    }
    caml_local_roots = v1;
    return __oflag * 2 + 1;
}

int unix_opendir(char* __name) {
    DIR* ptr0 = →opendir(__name);
    if(!ptr0) {
        uerror("opendir", (int)__name);
    }
    int result = caml_alloc_small(1, 251);
    *(DIR**)result = ptr0;
    return result;
}

int unix_pipe() {
    int v0;
    int v1;
    int v2 = →pipe(&v0);
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
    int v0 = caml_string_length(param0);
    int v1 = caml_string_length(param1);
    int v2 = v1 + v0;
    int v3 = caml_stat_alloc(v1 + v0 + 2);
    →memmove();
    *(char*)(v3 + v0) = 61;
    →memmove();
    *(char*)(v3 + v2 + 1) = 0;
    int v4 = →putenv((char*)v3);
    if(v4 == -1) {
        uerror("putenv", param0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_read(int param0, int param1, int param2, int param3) {
    char v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v1;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param1;
    caml_enter_blocking_section();
    ssize_t v4 = →read(param0 >> 1, &v0, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000);
    caml_leave_blocking_section();
    if(v4 == -1) {
        uerror("read", 0);
    }
    →memmove();
    caml_local_roots = v1;
    return v4 * 2 + 1;
}

int unix_readdir(int* param0) {
    int v0 = *param0;
    if(!v0) {
        v0 = unix_error(9, "readdir", 0);
    }
    dirent64* ptr0 = →readdir64((DIR*)v0);
    if(!ptr0) {
        ptr0 = (dirent64*)caml_raise_end_of_file();
    }
    return caml_copy_string((char*)ptr0 + 19);
}

int unix_readlink(char* __path) {
    char v0;
    ssize_t v1 = →readlink(__path, &v0, 0xfff);
    if(v1 == -1) {
        v1 = uerror("readlink", (int)__path);
    }
    *(char*)(v1 + (int)&v0) = 0;
    return caml_copy_string(&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_recv(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    int __flags = caml_convert_flag_list(param4, &msg_flag_table);
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v1;
    int v2 = 1;
    int v3 = 1;
    int* ptr0 = &param1;
    caml_enter_blocking_section();
    ssize_t v4 = →recv(param0 >> 1, &v0, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000, __flags);
    caml_leave_blocking_section();
    if(v4 == -1) {
        uerror("recv", 0);
    }
    →memmove();
    caml_local_roots = v1;
    return v4 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_recvfrom(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    char v1;
    int v2 = 1;
    int __flags = caml_convert_flag_list(param4, &msg_flag_table);
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v3;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param1;
    int* ptr1 = &v2;
    int v6 = 112;
    caml_enter_blocking_section();
    ssize_t v7 = →recvfrom(param0 >> 1, &v1, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000, __flags, &v0, &v6);
    caml_leave_blocking_section();
    if(v7 == -1) {
        uerror("recvfrom", 0);
    }
    →memmove();
    v2 = alloc_sockaddr((short*)&v0, v6, -1);
    int result = caml_alloc_small(2, 0);
    *(int*)result = v7 * 2 + 1;
    *(int*)(result + 4) = v2;
    caml_local_roots = v3;
    return result;
}

int unix_rename(char* __old, char* __new) {
    int v0 = →rename(__old, __new);
    if(v0 == -1) {
        uerror("rename", (int)__old);
    }
    return 1;
}

int unix_rewinddir(int* param0) {
    int v0 = *param0;
    if(!v0) {
        v0 = unix_error(9, "rewinddir", 0);
    }
    →rewinddir((DIR*)v0);
    return 1;
}

int unix_rmdir(char* __path) {
    int v0 = →rmdir(__path);
    if(v0 == -1) {
        uerror("rmdir", (int)__path);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_select(int param0, int param1, int param2, double* param3) {
    char v0;
    char v1;
    char v2;
    __int128 v3;
    int v4;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v8 = -1;
    fdlist_to_fdset(&v8);
    fdlist_to_fdset(&v8);
    fdlist_to_fdset(&v8);
    fldz();
    v10[v11] = fucomip(*param3, v3);
    caml_enter_blocking_section();
    int v9 = →select(v8 + 1, &v0, &v1, &v2, NULL);
    caml_leave_blocking_section();
    if(v9 == -1) {
        uerror("select", 0);
    }
    param0 = fdset_to_fdlist(v4, (int)&v0);
    param1 = fdset_to_fdlist(v4, (int)&v1);
    param2 = fdset_to_fdlist(v4, (int)&v2);
    int result = caml_alloc_small(3, 0);
    *(int*)result = param0;
    *(int*)(result + 4) = param1;
    *(int*)(result + 8) = param2;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_send(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    int __flags = caml_convert_flag_list(param4, &msg_flag_table);
    →memmove();
    caml_enter_blocking_section();
    ssize_t v1 = →send(param0 >> 1, &v0, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000, __flags);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("send", 0);
    }
    return v1 * 2 + 1;
}

int unix_sendto(int* param0) {
    return unix_sendto_native(param0[0], param0[1], param0[2], param0[3], param0[4], param0[5]);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_sendto_native(int param0, int param1, int param2, int param3, int* param4, int param5) {
    char v0;
    socklen_t __addr_len;
    char v1;
    int __flags = caml_convert_flag_list(param4, &msg_flag_table);
    get_sockaddr(param5, &v0, &__addr_len);
    void* ptr0 = &v1;
    →memmove();
    caml_enter_blocking_section();
    ssize_t v2 = →sendto(param0 >> 1, &v1, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000, __flags, (__CONST_SOCKADDR_ARG)&v0, __addr_len);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("sendto", 0);
    }
    return v2 * 2 + 1;
}

int unix_set_close_on_exec(int param0) {
    int v0;
    →fcntl();
    if(v0 != -1) {
        →fcntl();
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
    int v0;
    →fcntl();
    if(v0 != -1) {
        →fcntl();
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

int unix_set_timeval(double __x, int param1) {
    double v0;
    __SyntheticTypeUnknown v1;
    short v2;
    int v3;
    char v4;
    int v5;
    int* ptr0;
    int v6 = v5;
    v1[v4] = →modf(__x, &v0);
    v2 = fnstcw(v2);
    short v7 = fldcw((unsigned short)((unsigned int)(unsigned char)v2 | ((unsigned int)12 << 8)));
    fistp();
    v2 = fldcw(v2);
    *ptr0 = v3;
    v1[v4] = /*NO_RETURN*/ →ceil(v0 * 1000000.0);
}

int unix_setgid(int param0) {
    int v0 = →setgid((__gid_t)(param0 >> 1));
    if(v0 == -1) {
        uerror("setgid", 0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_setgroups(int param0) {
    int v0 = param0;
    size_t __n = (size_t)(*(int*)(v0 - 4) >>> 10);
    int v1 = caml_stat_alloc((int)(__n * 4));
    __gid_t* __groups = (__gid_t*)v1;
    if(__n) {
        unsigned int v2 = 0;
        do {
            *(int*)(v2 * 4 + v1) = *(int*)(v2 * 4 + v0) >> 1;
            ++v2;
        }
        while(v2 < __n);
    }
    int v3 = →setgroups(__n, __groups);
    caml_stat_free((int)__groups);
    if(v3 == -1) {
        uerror("setgroups", 0);
    }
    return 1;
}

int unix_setitimer(int param0, double* param1) {
    int v0;
    int v1;
    int v2 = v1;
    /*NO_RETURN*/ unix_set_timeval(*param1, v0);
}

int unix_setsid() {
    __pid_t v0 = →setsid();
    return v0 * 2 + 1;
}

int unix_setsockopt(int param0, int param1, int param2, float* param3) {
    int* ptr0 = (int*)((param2 >> 1) * 8 + *(int*)((unsigned int)(param0 >> 1) * 4 + (int)&sockopt_table));
    return unix_setsockopt_aux(*(char**)((unsigned int)(param0 >> 1) * 4 + (int)&setsockopt_fun_name), (unsigned int)(param0 >> 1), ptr0[0], ptr0[1], param1, param3);
}

int unix_setsockopt_aux(char* param0, unsigned int param1, int __level, int __optname, int param4, float* param5) {
    int v0;
    int* ptr0;
    short v1;
    int* ptr1;
    short v2;
    if(param1 == 2) {
        ptr0 = (int*)((int)(int*)((int)param5 ^ 0x1) & 0x1);
        v0 = 8;
        if((int*)((int)(int*)((int)param5 ^ 0x1) & 0x1)) {
            int v3 = *param5 >> 1;
            v0 = 8;
        }
    }
    else if(param1 == 3) {
        v2 = fnstcw(v2);
        short v1 = fldcw((unsigned short)(unsigned char)v2 | ((unsigned short)12 << 8));
        fist();
        v2 = fldcw(v2);
        ptr0 = ptr1;
        v1 = fldcw(v1);
        fistp();
        v2 = fldcw(v2);
        v0 = 8;
    }
    else if(param1 < 2) {
        ptr0 = (int*)((int)param5 >> 1);
        v0 = 4;
    }
    else {
        v0 = unix_error(22, param0, 0);
    }
    int v4 = →setsockopt(param4 >> 1, __level, __optname, &ptr0, (socklen_t)v0);
    if(v4 == -1) {
        uerror((int)param0, 0);
    }
    return 1;
}

int unix_setuid(int param0) {
    int v0 = →setuid((__uid_t)(param0 >> 1));
    if(v0 == -1) {
        uerror("setuid", 0);
    }
    return 1;
}

int unix_shutdown(int param0, int param1) {
    int v0 = →shutdown(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&shutdown_command_table));
    if(v0 == -1) {
        uerror("shutdown", 0);
    }
    return 1;
}

int unix_sigpending() {
    char v0;
    int v1 = →sigpending(&v0);
    if(v1 == -1) {
        uerror("sigpending", 0);
    }
    return encode_sigset();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_sigprocmask(int param0) {
    char v0;
    int v1;
    int v2;
    decode_sigset(v2, &v0);
    caml_enter_blocking_section();
    →sigprocmask();
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("sigprocmask", 0);
    }
    return encode_sigset();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_sigsuspend(int param0) {
    char v0;
    int* ptr0;
    decode_sigset(param0, &v0);
    caml_enter_blocking_section();
    int v1 = →sigsuspend(&v0);
    caml_leave_blocking_section();
    if(v1 == -1) {
        →__errno_location();
        if(*ptr0 != 4) {
            uerror("sigsuspend", 0);
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_single_write(int param0, int param1, int param2, int param3) {
    ssize_t v0;
    char v1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 1;
    int* ptr0 = &param1;
    if((int)(size_t)(param3 >> 1) > 0) {
        →memmove();
        caml_enter_blocking_section();
        v0 = →write(param0 >> 1, &v1, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000);
        caml_leave_blocking_section();
        if(v0 == -1) {
            uerror("single_write", 0);
            v0 = 0;
            caml_local_roots = v2;
            return v0 * 2 + 1;
        }
    }
    else {
        v0 = 0;
    }
    caml_local_roots = v2;
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_sleep(int param0) {
    caml_enter_blocking_section();
    →sleep((unsigned int)(param0 >> 1));
    caml_leave_blocking_section();
    return 1;
}

int unix_socket(int param0, int param1, int param2) {
    int v0 = →socket(*(int*)((param0 >> 1) * 4 + (int)&socket_domain_table), *(int*)((param1 >> 1) * 4 + (int)&socket_type_table), param2 >> 1);
    if(v0 == -1) {
        v0 = uerror("socket", 0);
    }
    return v0 * 2 + 1;
}

int unix_socketpair(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2 = →socketpair(*(int*)((param0 >> 1) * 4 + (int)&socket_domain_table), *(int*)((param1 >> 1) * 4 + (int)&socket_type_table), param2 >> 1, &v0);
    if(v2 == -1) {
        uerror("socketpair", 0);
    }
    int result = caml_alloc_small(2, 0);
    *(int*)result = v0 * 2 + 1;
    *(int*)(result + 4) = v1 * 2 + 1;
    return result;
}

int unix_stat(char* __filename) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = →__xstat64(3, __filename, &v0);
    if(v5 == -1) {
        uerror("stat", (int)__filename);
    }
    if(v1 >= 0 && (v1 > 0 || v2 > 0x3fffffff) && (v3 & 0xf000) == 0x8000) {
        unix_error(75, (char*)0x8070B07, (int)__filename);
    }
    return stat_aux(v4, (int*)&v0);
}

int unix_stat_64(char* __filename) {
    char v0;
    int v1;
    int v2 = →__xstat64(3, __filename, &v0);
    if(v2 == -1) {
        uerror("stat", (int)__filename);
    }
    return stat_aux(v1, (int*)&v0);
}

int unix_string_of_inet_addr(int param0) {
    char v0;
    int v1 = caml_string_length(param0);
    char* ptr0 = v1 == 16 ? →inet_ntop(10, (void*)param0, &v0, 64): →inet_ntop(2, (void*)param0, &v0, 64);
    if(!ptr0) {
        ptr0 = (char*)uerror("string_of_inet_addr", 0);
    }
    return caml_copy_string(ptr0);
}

int unix_symlink(char* __from, char* __to) {
    int v0 = →symlink(__from, __to);
    if(v0 == -1) {
        uerror("symlink", (int)__to);
    }
    return 1;
}

int unix_tcdrain(int param0) {
    int v0 = →tcdrain(param0 >> 1);
    if(v0 == -1) {
        uerror("tcdrain", 0);
    }
    return 1;
}

int unix_tcflow(int param0, int param1) {
    int v0 = →tcflow(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&action_flag_table));
    if(v0 == -1) {
        uerror("tcflow", 0);
    }
    return 1;
}

int unix_tcflush(int param0, int param1) {
    int v0 = →tcflush(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&queue_flag_table));
    if(v0 == -1) {
        uerror("tcflush", 0);
    }
    return 1;
}

int unix_tcgetattr(int param0) {
    speed_t v0;
    int v1 = →tcgetattr(param0 >> 1, (termios*)&terminal_status);
    if(v1 == -1) {
        uerror("tcgetattr", 0);
    }
    int result = caml_alloc_tuple(38);
    int v2 = *(int*)&terminal_io_descr;
    if(v2 != 4) {
        int v3 = result;
        unsigned int* ptr0 = (unsigned int*)&terminal_io_descr;
        int v4 = -5516;
        termios* __termios_p = (termios*)&terminal_status;
        while(1) {
            unsigned int* ptr1 = ptr0 + 1;
            if(v2 == 1) {
                int* ptr2 = *ptr1;
                int v5 = *(int*)(ptr1 + 1);
                int v6 = *(int*)(ptr1 + 2);
                int v7 = *(int*)(ptr1 + 3);
                int v8 = *(int*)(ptr1 + 3);
                int* ptr3 = (int*)(ptr1 + 4);
                if(v6 > 0) {
                    int v9 = *ptr2 & v7;
                    ptr2 = NULL;
                    if(*ptr3 == v9) {
                        *(int**)v3 = (int*)((char*)((int)(int*)(v5 + (int)ptr2) * 2) + 1);
                        ptr1 = (unsigned int*)(v6 * 4 + (int)ptr3);
                        goto loc_8060B20;
                    }
                    else {
                        int* ptr4 = NULL;
                        do {
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((int)ptr4 >= v6) {
                                ptr1 = (unsigned int*)(v6 * 4 + (int)ptr3);
                                goto loc_8060B20;
                            }
                        }
                        while(*((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr0) + 5) != v9);
                        ptr2 = ptr4;
                        *(int**)v3 = (int*)((char*)((int)(int*)(v5 + (int)ptr2) * 2) + 1);
                    }
                }
                ptr1 = (unsigned int*)(v6 * 4 + (int)ptr3);
                goto loc_8060B20;
            }
            else {
                if(v2 == 2) {
                    int v10 = *ptr1;
                    ++ptr1;
                    *(int*)v3 = 19201;
                    if(v10) {
                        v0 = 0;
                        if(v10 == 1) {
                            v0 = →cfgetospeed(__termios_p);
                        }
                    }
                    else {
                        v0 = →cfgetispeed(__termios_p);
                    }
                    ptr0 = (unsigned int*)0x1;
                    if(*(int*)((int)&_GLOBAL_OFFSET_TABLE_ + v4) == v0) {
                        ptr0 = NULL;
                        goto loc_8060AFF;
                    }
                    else {
                        while(*(int*)((int)(int*)((int)ptr0 * 8) + (int)&speedtable) != v0) {
                            ptr0 = (unsigned int*)((char*)ptr0 + 1);
                            if(ptr0 == 18) {
                                goto loc_8060B20;
                            }
                        }
                    loc_8060AFF:
                        *(int*)v3 = *(unsigned int*)((int)(int*)((int)ptr0 * 8) + (int)&gvar_8070BC4) * 2 + 1;
                    }
                }
                else if(v2 == 3) {
                    int v11 = *ptr1;
                    ++ptr1;
                    *(int*)v3 = (unsigned int)*(char*)(v11 + 134723665) * 2 + 1;
                }
                else if(v2 <= 1 && !v2) {
                    unsigned int v12 = (unsigned int)(*(ptr1 + 1) & **ptr1);
                    ptr1 += 2;
                    *(int*)v3 = ((v12 < 1 ? -1: 0) & 0xfffffffe) + 3;
                }
            loc_8060B20:
                v2 = *ptr1;
                if(v2 == 4) {
                    return result;
                }
                v3 += 4;
                ptr0 = ptr1;
            }
        }
    }
    return result;
}

int unix_tcsendbreak(int param0, int param1) {
    int v0 = →tcsendbreak(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("tcsendbreak", 0);
    }
    return 1;
}

int unix_tcsetattr(int param0, int param1, int* param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0;
    termios* __termios_p;
    int* ptr1;
    int* ptr2;
    int __fd = param0 >> 1;
    int v4 = →tcgetattr(__fd, (termios*)&terminal_status);
    if(v4 == -1) {
        uerror("tcsetattr", 0);
    }
    int v5 = *(int*)&terminal_io_descr;
    if(v5 != 4) {
        ptr2 = param2;
        ptr1 = (int*)&terminal_io_descr;
        int* ptr3 = (int*)&speedtable;
        __termios_p = (termios*)&terminal_status;
    loc_80607C3:
        ++ptr1;
        if(v5 == 2) {
            goto loc_8060869;
        }
        else if(v5 < 1) {
            if(!v5) {
                int* ptr4 = *ptr1;
                int v6 = *(ptr1 + 1);
                ptr1 += 2;
                *ptr4 = *ptr2 >>> 1 != 0 ? *ptr4 | v6: ~v6 & *ptr4;
            }
            goto loc_8060925;
        }
        else if(v5 != 1) {
            if(v5 == 3) {
                int v7 = *ptr1;
                ++ptr1;
                *(char*)(v7 + 134723665) = (unsigned char)(*ptr2 >>> 1);
            }
            goto loc_8060925;
        }
        else {
            int* ptr5 = *ptr1;
            ptr0 = *(unsigned int*)(ptr1 + 2);
            int v8 = *(ptr1 + 3);
            int v9 = (*ptr2 >> 1) - *(ptr1 + 1);
            if(v9 >= 0 && v9 < (int)ptr0) {
                *ptr5 = (~v8 & *ptr5) | *((int*)(v9 * 4 + (int)ptr1) + 4);
                ptr1 = (int*)((int)(int*)((int)ptr0 * 4) + (int)ptr1) + 4;
                goto loc_8060925;
            }
            else {
                unix_error(22, "tcsetattr", 0);
            loc_8060869:
                v3 = *ptr1;
                v2 = *ptr2 >> 1;
                v1 = 1;
                if(v2 == 50) {
                    v1 = 0;
                    goto loc_8060891;
                }
                else {
                    ptr0 = ptr1;
                    ptr1 = ptr3;
                }
            }
        }
    }
    else {
    loc_8060954:
        int v10 = →tcsetattr(__fd, *(int*)((param1 >> 1) * 4 + (int)&when_flag_table), (termios*)&terminal_status);
        if(v10 == -1) {
            uerror("tcsetattr", 0);
        }
        return 1;
    }
loc_806088A:
    if(*((int*)(v1 * 8 + (int)ptr1) + 1) == v2) {
        ptr1 = ptr0;
    loc_8060891:
        if(v3) {
            v0 = 0;
            if(v3 == 1) {
                v0 = →cfsetospeed(__termios_p, *(speed_t*)(v1 * 8 + (int)&speedtable));
            }
        }
        else {
            v0 = →cfsetispeed(__termios_p, *(speed_t*)(v1 * 8 + (int)&speedtable));
        }
        if(v0 != -1) {
            ++ptr1;
        }
        else {
            v1 = uerror("tcsetattr", 0);
            goto loc_80608EF;
        }
    loc_8060925:
        v5 = *ptr1;
        if(v5 == 4) {
            goto loc_8060954;
        }
        else {
            ++ptr2;
            goto loc_80607C3;
        }
    }
    else {
    loc_80608EF:
        ++v1;
        if(v1 != 18) {
            goto loc_806088A;
        }
        else {
            unix_error(22, "tcsetattr", 0);
            int v7 = *ptr1;
            ++ptr1;
            *(char*)(v7 + 134723665) = (unsigned char)(*ptr2 >>> 1);
            goto loc_8060925;
        }
    }
}

long long* unix_time() {
    int v0;
    int v1;
    time_t v2 = →time(NULL);
    *(double*)&v0 = (double)v2;
    return caml_copy_double(*(double*)&v0, v1);
}

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

int unix_truncate(char* __file, int param1) {
    int v0 = param1 >> 1;
    int v1 = (param1 >> 1) >> 31;
    int v2 = →truncate64(__file, *(__off64_t*)&v0);
    if(v2 == -1) {
        uerror("truncate", (int)__file);
    }
    return 1;
}

int unix_truncate_64(char* __file, int param1) {
    int v0 = *(int*)(param1 + 8);
    int v1 = *(int*)(param1 + 4);
    int v2 = v0;
    int v3 = →truncate64(__file, *(__off64_t*)&v1);
    if(v3 == -1) {
        uerror("truncate", (int)__file);
    }
    return 1;
}

int unix_umask(int param0) {
    __mode_t v0 = →umask((__mode_t)(param0 >> 1));
    return v0 * 2 + 1;
}

int unix_unlink(char* __name) {
    int v0 = →unlink(__name);
    if(v0 == -1) {
        uerror("unlink", (int)__name);
    }
    return 1;
}

int unix_utimes(char* __file, double* param1, double* param2) {
    short v0;
    short v1;
    utimbuf* ptr0;
    v0 = fnstcw(v0);
    short v1 = fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fistp();
    v0 = fldcw(v0);
    utimbuf* __file_times = ptr0;
    utimbuf* ptr1 = ptr0;
    v1 = fldcw(v1);
    fistp();
    v0 = fldcw(v0);
    if(__file_times || ptr0) {
        __file_times = &ptr1;
    }
    utimbuf* ptr2 = ptr0;
    int v2 = →utime(__file, __file_times);
    if(v2 == -1) {
        uerror("utimes", (int)__file);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_wait() {
    int v0;
    int v1;
    caml_enter_blocking_section();
    __pid_t v2 = →wait(&v0);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("wait", 0);
    }
    return alloc_process_status(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_waitpid(int* param0, int param1) {
    int v0;
    int v1;
    int __options = caml_convert_flag_list(param0, &wait_flag_table);
    caml_enter_blocking_section();
    __pid_t v2 = →waitpid((__pid_t)(param1 >> 1), &v0, __options);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("waitpid", 0);
    }
    return alloc_process_status(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_write(int param0, int param1, int param2, int param3) {
    size_t v0;
    int* ptr0;
    char v1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 1;
    int* ptr1 = &param1;
    size_t v5 = (size_t)(param3 >> 1);
    if((int)v5 > 0) {
        int v6 = param2 >> 1;
        int __fd = param0 >> 1;
        v0 = 0;
        void* __buf = &v1;
        while(1) {
            →memmove();
            caml_enter_blocking_section();
            ssize_t v7 = →write(__fd, __buf, (int)v5 <= 0x4000 ? v5: 0x4000);
            caml_leave_blocking_section();
            if(v7 == -1) {
                v5 = v0;
                →__errno_location();
                if(*ptr0 == 11 && (int)v5 > 0) {
                    break;
                }
                else {
                    uerror("write", 0);
                }
            }
            v0 = (size_t)(v7 + v0);
            v5 -= v7;
            if((int)v5 <= 0) {
                break;
            }
            else {
                v6 += v7;
            }
        }
    }
    else {
        v0 = 0;
    }
    caml_local_roots = v2;
    return v0 * 2 + 1;
}

unsigned int unlink_channel() {
    unsigned int result;
    unsigned int v0;
    int v1 = *(int*)(v0 + 32);
    if(!v1) {
        result = caml_all_opened_channels;
        v0 = *(unsigned int*)(result + 28);
        caml_all_opened_channels = *(unsigned int*)(result + 28);
        if(v0) {
            *(int*)(v0 + 32) = 0;
        }
    }
    else {
        *(int*)(v1 + 28) = *(int*)(v0 + 28);
        v1 = *(int*)(v0 + 28);
        if(v1) {
            *(int*)(v1 + 32) = *(int*)(v0 + 32);
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
unsigned int writeblock(int param0, int param1) {
    if(extern_ptr + param1 > extern_limit) {
        grow_extern_output();
    }
    unsigned int result = extern_ptr;
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
