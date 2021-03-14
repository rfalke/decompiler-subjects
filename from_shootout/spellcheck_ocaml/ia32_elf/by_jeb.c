
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
        loc_806AD61:
            unsigned int v9 = v4;
            v4 = (unsigned int)(0 - v4);
            v5 = (unsigned int)((unsigned int)(v9 > 0) + v5);
            v6 = ~v6;
            v5 = (unsigned int)(0 - v5);
        }
    }
    else if(v5 >= 0x80000000) {
        goto loc_806AD61;
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
            goto loc_806ACDE;
        }
        else {
            v0 = 1;
        }
    }
    else {
    loc_806ACDE:
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

int* alloc_group_entry() {
    int* ptr0;
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
    v0 = caml_copy_string(*ptr0);
    v1 = caml_copy_string(*(ptr0 + 1));
    ptr1 = caml_copy_string_array(*(int**)(ptr0 + 3));
    int* result = (int*)caml_alloc_small(4, 0);
    *result = v0;
    *(result + 1) = v1;
    *(result + 2) = *(ptr0 + 2) * 2 + 1;
    *(int**)(result + 3) = ptr1;
    caml_local_roots = v2;
    return result;
}

int* alloc_host_entry() {
    int* ptr0;
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
    v0 = caml_copy_string(*ptr0);
    int* ptr7 = *(int**)(ptr0 + 1);
    ptr1 = ptr7 ? caml_copy_string_array(ptr7): (int*)&gvar_807AD44;
    entry_h_length = *(unsigned int*)(ptr0 + 3);
    ptr2 = caml_alloc_array(&alloc_one_addr, *(int**)(ptr0 + 4));
    int* result = (int*)caml_alloc_small(4, 0);
    *result = v0;
    *(int**)(result + 1) = ptr1;
    int v5 = *(ptr0 + 2);
    *(result + 2) = v5 != 1 ? (v5 == 2 ? 0: 1) * 2 + 3: 1;
    *(int**)(result + 3) = ptr2;
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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

int* alloc_proto_entry() {
    int* ptr0;
    int v0 = 1;
    int* ptr1 = (int*)0x1;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v1;
    int v2 = 1;
    int v3 = 2;
    int* ptr2 = &v0;
    int* ptr3 = &ptr1;
    v0 = caml_copy_string(*ptr0);
    ptr1 = caml_copy_string_array(*(int**)(ptr0 + 1));
    int* result = (int*)caml_alloc_small(3, 0);
    *result = v0;
    *(int**)(result + 1) = ptr1;
    *(result + 2) = *(ptr0 + 2) * 2 + 1;
    caml_local_roots = v1;
    return result;
}

int* alloc_service_entry() {
    int* ptr0;
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
    v0 = caml_copy_string(*ptr0);
    ptr1 = caml_copy_string_array(*(int**)(ptr0 + 1));
    v1 = caml_copy_string(*(ptr0 + 3));
    int* result = (int*)caml_alloc_small(4, 0);
    *result = v0;
    *(int**)(result + 1) = ptr1;
    *(result + 2) = (unsigned int)__ror__((unsigned short)*(ptr0 + 2), 8) * 2 + 1;
    *(result + 3) = v1;
    caml_local_roots = v2;
    return result;
}

int* alloc_sockaddr(short* param0, int param1, int __fd) {
    int* ptr0;
    int v0;
    int v1;
    int* result;
    unsigned int v2;
    int v3;
    short* ptr1 = param0;
    short v4 = *ptr1;
    switch(v4) {
        case 1: {
            v3 = caml_copy_string((int)(int*)(ptr1 + 1));
            v2 = caml_local_roots;
            caml_local_roots = &v2;
            result = (int*)caml_alloc_small(1, 0);
            *result = v3;
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
            result = (int*)caml_alloc_small(2, 1);
            *result = v3;
            *(result + 1) = (unsigned int)__ror__(*(ptr1 + 1), 8) * 2 + 1;
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
            result = (int*)caml_alloc_small(2, 1);
            *result = v3;
            *(result + 1) = (unsigned int)__ror__(*(ptr1 + 1), 8) * 2 + 1;
            caml_local_roots = v2;
            return result;
        }
        default: {
            if(__fd != -1) {
                →close(__fd);
            }
            return (int*)unix_error(97, &gvar_806C368, 0);
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
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
                caml_call_gc();
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
                        caml_call_gc();
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
                        caml_call_gc();
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

int camlArray__blit_1093(int param0, int param1) {
    unsigned int v0;
    int* ptr0;
    unsigned int v1;
    int v2;
    __SyntheticTypeUnknown v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8 = param0;
    if(v6 >= 1 && v4 >= 1) {
        int v9 = *(int*)(v7 - 4);
        if((((unsigned char)v9 != 254 ? v9 >>> 9: v9 >>> 10) | 0x1) - v6 + 1 < v4 || param1 < 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
            caml_call_gc();
            goto loc_8051E45;
        }
        else {
            int v10 = *(int*)(v8 - 4);
            if((((unsigned char)v10 != 254 ? v10 >>> 9: v10 >>> 10) | 0x1) - v6 + 1 < param1) {
                /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
                caml_call_gc();
                goto loc_8051E45;
            }
            else if(param1 > v4) {
                v6 -= 2;
                if(v6 >= 1) {
                    v2 = v4;
                    do {
                        int v11 = v6 + v2 - 1;
                        if(*(char*)(v7 - 4) != 254) {
                            v1 = *(unsigned int*)(v11 * 2 + v7 - 2);
                        }
                        else {
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
                            v3[v5 - 1] = *(double*)(v11 * 4 + v7 - 4);
                            *(long long*)(unsigned int)(ptr0 + 1) = v3[v5 - 1];
                            v1 = (unsigned int)(ptr0 + 1);
                        }
                        int v12 = param1 + v6 - 1;
                        if(*(char*)(v8 - 4) != 254) {
                            caml_modify((unsigned int*)(v12 * 2 + v8 - 2), v1);
                        }
                        else {
                            v3[v5 - 1] = *(double*)v1;
                            *(long long*)(v12 * 4 + v8 - 4) = v3[v5 - 1];
                        }
                        v4 = v6;
                        v6 -= 2;
                    }
                    while(v4 != 1);
                }
                return 1;
            }
            else {
                int v13 = 1;
                v6 -= 2;
                if(v6 >= 1) {
                    v2 = v4;
                    int v14 = v7;
                loc_8051E25:
                    int v15 = v2 + v13 - 1;
                    if(*(char*)(v14 - 4) == 254) {
                    loc_8051E45:
                        int* ptr1 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit > (unsigned int)ptr1) {
                            caml_call_gc();
                            goto loc_8051E45;
                        }
                        else {
                            *ptr1 = 2301;
                            v3[v5 - 1] = *(double*)(v15 * 4 + v14 - 4);
                            *(long long*)(unsigned int)(ptr1 + 1) = v3[v5 - 1];
                            v0 = (unsigned int)(ptr1 + 1);
                        loc_8051E74:
                            int v16 = param1 + v13 - 1;
                            if(*(char*)(v8 - 4) != 254) {
                                caml_modify((unsigned int*)(v16 * 2 + v8 - 2), v0);
                            }
                            else {
                                v3[v5 - 1] = *(double*)v0;
                                *(long long*)(v16 * 4 + v8 - 4) = v3[v5 - 1];
                            }
                            v4 = v13;
                            v13 += 2;
                            if(v4 != v6) {
                                goto loc_8051E25;
                            }
                            else {
                                return 1;
                            }
                        }
                    }
                    else {
                        v0 = *(unsigned int*)(v15 * 2 + v14 - 2);
                        goto loc_8051E74;
                    }
                }
            }
        }
    }
    else {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        caml_call_gc();
        goto loc_8051E45;
    }
    return 1;
}

int camlArray__bubble_1174() {
    int v0;
    int v1 = sub_8050CC0(v0);
    if(gvar_8071850 == *(int*)v1) {
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
    while(1) {
        int v4 = v2;
        unsigned int v5 = v3;
        int v6 = param0;
        v3 = (unsigned int)camlArray__maxson_1155(*(int*)(param0 + 16));
        int v7 = *(int*)(v6 + 12);
        int v8 = *(int*)(v7 - 4);
        if((unsigned char)v8 != 254) {
            if((unsigned int)(v8 >>> 9) <= v3) {
                goto loc_8050C85;
            }
            else {
                v1 = *(unsigned int*)(v3 * 2 + v7 - 2);
                goto loc_8050C10;
            }
        }
        if((unsigned int)(v8 >>> 10) <= v3) {
            goto loc_8050C80;
        }
        else {
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
            v1 = v0 + 4;
            *(int*)(v1 - 4) = 2301;
            *(long long*)v1 = *(double*)(v3 * 4 + v7 - 4);
        loc_8050C10:
            int v9 = *(int*)(v6 + 12);
            int v10 = *(int*)(v9 - 4);
            if((unsigned char)v10 != 254) {
                if((unsigned int)(v10 >>> 9) <= v5) {
                    goto loc_8050C7B;
                }
                else {
                    caml_modify((unsigned int*)(v5 * 2 + v9 - 2), v1);
                    goto loc_8050C61;
                }
            }
            if((unsigned int)(v10 >>> 10) <= v5) {
                break;
            }
            else {
                *(long long*)(v5 * 4 + v9 - 4) = *(double*)v1;
            loc_8050C61:
                v2 = v4;
                param0 = v6;
            }
        }
    }
    caml_ml_array_bound_error();
loc_8050C7B:
    caml_ml_array_bound_error();
loc_8050C80:
    caml_ml_array_bound_error();
loc_8050C85:
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlArray__concat_1075() {
    return camlArray__find_init_1077();
}

int camlArray__concat_aux_1062() {
    int* ptr0;
    int v0 = camlArray__size_1065();
    int v1 = caml_c_call();
    int result = v1;
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
    *(ptr0 + 3) = &camlArray__fill_1070;
    *(ptr0 + 4) = v1;
    camlArray__fill_1070((int)(ptr0 + 1));
    return result;
}

int camlArray__copy_1049() {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    void* ptr0;
    __SyntheticTypeUnknown v3;
    float* ptr1;
    float* ptr2;
    char v4;
    int v5 = *(int*)(ptr2 - 1);
    float* ptr3 = (float*)(((unsigned char)v5 != 254 ? v5 >>> 9: v5 >>> 10) | 0x1);
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
            v2 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v2) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        ptr0 = (void*)(v2 + 4);
        *(int*)((int)ptr0 - 4) = 2301;
        v3[v4 - 1] = *(double*)ptr2;
        *(long long*)ptr0 = v3[v4 - 1];
    }
    void* ptr6 = ptr0;
    float* ptr7 = ptr3;
    int result = caml_c_call();
    float* ptr8 = (float*)0x3;
    if((int)(int*)((char*)ptr4 - 2) >= 3) {
        do {
            if(*(char*)(ptr5 - 1) != 254) {
                v1 = *(unsigned int*)((char*)((int)(int*)((int)ptr8 * 2) + (int)ptr5) - 2);
            }
            else {
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
                v1 = v0 + 4;
                *(int*)(v1 - 4) = 2301;
                *(long long*)v1 = *(double*)((int*)((int)(int*)((int)ptr8 * 4) + (int)ptr5) - 1);
            }
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr8 * 2) + result) - 2), v1);
            }
            else {
                *(long long*)((int*)((int)(int*)((int)ptr8 * 4) + result) - 1) = *(double*)v1;
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
    gvar_80717FC = &camlArray__20;
    gvar_8071800 = gvar_80717FC;
    gvar_8071810 = &camlArray__19;
    gvar_8071804 = &camlArray__18;
    gvar_8071848 = &camlArray__17;
    gvar_8071808 = &camlArray__16;
    gvar_807180C = &camlArray__15;
    gvar_8071814 = &camlArray__14;
    gvar_8071818 = &camlArray__13;
    gvar_8071824 = &camlArray__12;
    gvar_8071828 = &camlArray__11;
    gvar_807182C = &camlArray__10;
    gvar_8071830 = &camlArray__9;
    gvar_807181C = &camlArray__8;
    gvar_807184C = &camlArray__7;
    gvar_8071820 = &camlArray__6;
    gvar_8071834 = &camlArray__5;
    gvar_8071838 = &camlArray__4;
    int v0 = caml_alloc1(param0, param1);
    *(int*)v0 = 0x400;
    *(int*)(v0 + 4) = "Array.Bottom";
    gvar_8071850 = (int*)(v0 + 4);
    gvar_807183C = &camlArray__2;
    gvar_8071854 = 11;
    gvar_8071840 = &camlArray__1;
    gvar_8071844 = gvar_8071840;
    return 1;
}

int camlArray__fill_1070(int param0) {
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
                            caml_call_gc();
                        }
                    }
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    v2[v5 - 1] = *(double*)(v10 * 4 + v13 - 4);
                    *(long long*)v1 = v2[v5 - 1];
                }
                int v14 = v10 + v7 - 1;
                int v15 = *(int*)(v6 + 12);
                if(*(char*)(v15 - 4) != 254) {
                    caml_modify((unsigned int*)(v14 * 2 + v15 - 2), v1);
                }
                else {
                    v2[v5 - 1] = *(double*)v1;
                    *(long long*)(v14 * 4 + v15 - 4) = v2[v5 - 1];
                }
                v3 = v10;
                v10 += 2;
            }
            while(v3 != v12);
        }
        int v16 = *(int*)(v9 - 4);
        v4 = (((unsigned char)v16 != 254 ? v16 >>> 9: v16 >>> 10) | 0x1) + v7 - 1;
        ptr0 = ptr1;
        param0 = v6;
    }
    return 1;
}

int camlArray__fill_1087(int param0, unsigned int param1) {
    int v0;
    int v1;
    if(v1 >= 1 && param0 >= 1) {
        int v2 = *(int*)(v0 - 4);
        if((((unsigned char)v2 != 254 ? v2 >>> 9: v2 >>> 10) | 0x1) - param0 + 1 >= v1) {
            int v3 = v1;
            v1 = param0 + v1 - 3;
            if(v1 >= v3) {
                do {
                    if(*(char*)(v0 - 4) != 254) {
                        caml_modify((unsigned int*)(v3 * 2 + v0 - 2), param1);
                    }
                    else {
                        *(long long*)(v3 * 4 + v0 - 4) = *(double*)param1;
                    }
                    param0 = v3;
                    v3 += 2;
                }
                while(param0 != v1);
            }
            return 1;
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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
    char v1;
    int v2;
    unsigned int* ptr2;
    do {
        unsigned int* ptr3 = ptr2;
        if(ptr3 == 1) {
            return &camlArray__36;
        }
        ptr2 = *(ptr3 + 1);
        ptr1 = *ptr3;
        v2 = *(int*)((char*)ptr1 - 4);
    }
    while((((unsigned char)v2 != 254 ? v2 >>> 9: v2 >>> 10) | 0x1) <= 1);
    if(*(char*)((char*)ptr1 - 4) == 254) {
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
        v0[v1 - 1] = *ptr1;
        *(long long*)(ptr0 + 1) = v0[v1 - 1];
    }
    return camlArray__concat_aux_1062();
}

unsigned int camlArray__fold_left_1139(int param0) {
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
            caml_call_gc();
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
                        caml_call_gc();
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
            caml_call_gc();
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
                        caml_call_gc();
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

int camlArray__init_1037() {
    int v0;
    int v1;
    int result;
    if(v1 == 1) {
        return &camlArray__34;
    }
    int v2 = result;
    int v3 = v1;
    int v4 = *(int*)result(v1, v2);
    int v5 = v3;
    result = caml_c_call();
    if(v3 - 2 >= 3) {
        int v6 = v3 - 2;
        int v7 = 3;
        v3 = result;
        do {
            unsigned int v8 = (unsigned int)*(int*)v2(v3);
            result = v3;
            if(*(char*)(result - 4) != 254) {
                v0 = v7;
                caml_modify((unsigned int*)(v0 * 2 + result - 2), v8);
            }
            else {
                v0 = v7;
                *(long long*)(v0 * 4 + result - 4) = *(double*)v8;
            }
            v7 = v0 + 2;
        }
        while(v6 + 2 != v7);
    }
    return result;
}

int camlArray__isortto_1209(int param0, int param1) {
    unsigned int v0;
    double* ptr0;
    int* ptr1;
    unsigned int v1;
    int* ptr2;
    int* ptr3;
    __SyntheticTypeUnknown v2;
    int v3;
    char v4;
    int v5;
    unsigned int* ptr4;
    long long* ptr5;
    int v6;
camlArray__isortto_1209:
    while(1) {
        ptr3 = ptr3 - 10;
        int* ptr6 = (int*)0x1;
        if(param1 - 2 < 1) {
            break;
        }
        else {
            *(ptr3 + 4) = param1 - 2;
            *(ptr3 + 3) = 1;
            *(unsigned int*)(ptr3 + 6) = ptr4;
            *(ptr3 + 5) = param0;
            *(unsigned int*)(ptr3 + 7) = ptr5;
            *ptr3 = v6;
        loc_805116D:
            do {
                int* ptr7 = (int*)((char*)(*ptr3 + (int)ptr6) - 1);
                *(unsigned int*)(ptr3 + 1) = (int*)((char*)(*ptr3 + (int)ptr6) - 1);
                int v7 = *(int*)(*(ptr3 + 6) + 16);
                *(ptr3 + 2) = *(int*)(v7 - 4);
                if((unsigned char)*(ptr3 + 2) != 254) {
                    if((unsigned int)(*(ptr3 + 2) >>> 9) <= (unsigned int)ptr7) {
                        goto loc_8051438;
                    }
                    else {
                        *(ptr3 + 1) = *(int*)((char*)((int)(int*)((int)ptr7 * 2) + v7) - 2);
                        goto loc_80511F5;
                    }
                }
                if((unsigned int)(*(ptr3 + 2) >>> 10) > (unsigned int)ptr7) {
                    while(1) {
                        ptr2 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= (unsigned int)ptr2) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_8051406;
                            /*BAD_CALL!*/ caml_call_gc();
                        }
                    }
                    *ptr2 = 2301;
                    v2[v4 - 1] = *(double*)(*(ptr3 + 1) * 4 + v7 - 4);
                    *(long long*)(ptr2 + 1) = v2[v4 - 1];
                    *(unsigned int*)(ptr3 + 1) = (long long*)(ptr2 + 1);
                loc_80511F5:
                    while(1) {
                        v1 = caml_young_ptr - 8;
                        caml_young_ptr -= 8;
                        if(caml_young_limit <= v1) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_80513FC;
                            /*BAD_CALL!*/ caml_call_gc();
                        }
                    }
                    ptr4 = (unsigned int*)(v1 + 4);
                    *(unsigned int*)(ptr3 + 2) = (unsigned int*)(v1 + 4);
                    *(int*)(ptr4 - 1) = 0x400;
                    *ptr4 = (int*)((char*)(*(ptr3 + 5) + (int)ptr6) - 3);
                    while(*(ptr3 + 5) <= *ptr4) {
                        unsigned int v8 = *ptr4;
                        int v9 = *(int*)((char*)ptr5 - 4);
                        if((unsigned char)v9 != 254) {
                            if((unsigned int)(v9 >>> 9) <= v8) {
                                goto loc_805142E;
                            }
                            else {
                                goto loc_8051298;
                            }
                        }
                        if((unsigned int)(v9 >>> 10) <= v8) {
                            goto loc_8051429;
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
                                    *ptr3 = &loc_80513F2;
                                    /*BAD_CALL!*/ caml_call_gc();
                                }
                            }
                            *ptr1 = 2301;
                            v2[v4 - 1] = *(double*)((int*)(v8 * 4 + (int)ptr5) - 1);
                            *(long long*)(ptr1 + 1) = v2[v4 - 1];
                        loc_8051298:
                            int* ptr8 = *(int**)(*(ptr3 + 6) + 12);
                            --ptr3;
                            *ptr3 = &loc_80512A4;
                            /*BAD_CALL!*/ caml_apply2(ptr8);
                            if(v3 <= 1) {
                                break;
                            }
                            else {
                                ptr4 = *(unsigned int*)(ptr3 + 2);
                                unsigned int v10 = *ptr4;
                                ptr5 = *(unsigned int*)(ptr3 + 7);
                                int v11 = *(int*)((char*)ptr5 - 4);
                                if((unsigned char)v11 != 254) {
                                    if((unsigned int)(v11 >>> 9) <= v10) {
                                        goto loc_8051424;
                                    }
                                    else {
                                        ptr0 = *(unsigned int*)((char*)(v10 * 2 + (int)ptr5) - 2);
                                        goto loc_8051316;
                                    }
                                }
                                if((unsigned int)(v11 >>> 10) <= v10) {
                                    goto loc_805141F;
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
                                            *ptr3 = &loc_80513E8;
                                            /*BAD_CALL!*/ caml_call_gc();
                                        }
                                    }
                                    ptr0 = (double*)(v0 + 4);
                                    *(int*)((char*)ptr0 - 4) = 2301;
                                    *ptr0 = *(double*)((int*)(v10 * 4 + (int)ptr5) - 1);
                                    v4 = 7;
                                loc_8051316:
                                    unsigned int v12 = (unsigned int)(*ptr4 + 2);
                                    int v13 = *(int*)((char*)ptr5 - 4);
                                    if((unsigned char)v13 != 254) {
                                        if((unsigned int)(v13 >>> 9) <= v12) {
                                            goto loc_805141A;
                                        }
                                        else {
                                            --ptr3;
                                            *ptr3 = ptr0;
                                            --ptr3;
                                            *ptr3 = (int*)((char*)(v12 * 2 + (int)ptr5) - 2);
                                            --ptr3;
                                            *ptr3 = &loc_8051342;
                                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(unsigned int*)(ptr3 + 2));
                                            ptr3 += 2;
                                            goto loc_8051361;
                                        }
                                    }
                                    if((unsigned int)(v13 >>> 10) <= v12) {
                                        goto loc_8051415;
                                    }
                                    else {
                                        *(long long*)((int*)(v12 * 4 + (int)ptr5) - 1) = *ptr0;
                                        v4 = 7;
                                    loc_8051361:
                                        *ptr4 = *ptr4 - 2;
                                    }
                                }
                            }
                        }
                    }
                    unsigned int v14 = (unsigned int)(**(unsigned int*)(ptr3 + 2) + 2);
                    ptr5 = *(unsigned int*)(ptr3 + 7);
                    int v15 = *(int*)((char*)ptr5 - 4);
                    if((unsigned char)v15 != 254) {
                        if((unsigned int)(v15 >>> 9) <= v14) {
                            goto loc_8051410;
                        }
                        else {
                            int v16 = *(ptr3 + 1);
                            --ptr3;
                            *ptr3 = v16;
                            --ptr3;
                            *ptr3 = (int*)((char*)(v14 * 2 + (int)ptr5) - 2);
                            --ptr3;
                            *ptr3 = &loc_80513A6;
                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(unsigned int*)(ptr3 + 2));
                            ptr3 += 2;
                            goto loc_80513C1;
                        }
                    }
                    if((unsigned int)(v15 >>> 10) > v14) {
                        v2[v4 - 1] = **(unsigned int*)(ptr3 + 1);
                        *(long long*)((int*)(v14 * 4 + (int)ptr5) - 1) = v2[v4 - 1];
                    loc_80513C1:
                        int v17 = *(ptr3 + 3);
                        param0 = *(ptr3 + 3);
                        ptr6 = (int*)(v17 + 2);
                        *(unsigned int*)(ptr3 + 3) = (int*)(v17 + 2);
                        if(*(ptr3 + 4) != param0) {
                            goto loc_805116D;
                        }
                        else {
                            break camlArray__isortto_1209;
                        }
                    }
                    else {
                        --ptr3;
                        *ptr3 = &loc_8051410;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051410:
                        --ptr3;
                        *ptr3 = &loc_8051415;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051415:
                        --ptr3;
                        *ptr3 = &loc_805141A;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805141A:
                        --ptr3;
                        *ptr3 = &loc_805141F;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805141F:
                        --ptr3;
                        *ptr3 = &loc_8051424;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051424:
                        --ptr3;
                        *ptr3 = &loc_8051429;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051429:
                        --ptr3;
                        *ptr3 = &loc_805142E;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805142E:
                        --ptr3;
                        *ptr3 = &loc_8051433;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    }
                }
                --ptr3;
                *ptr3 = &loc_8051438;
                /*BAD_CALL!*/ caml_ml_array_bound_error();
            loc_8051438:
                --ptr3;
                *ptr3 = &loc_805143D;
                v6 = /*BAD_CALL!*/ caml_ml_array_bound_error();
                unsigned int* ptr9 = ptr4;
                ptr3 -= 6;
                if(param1 <= 11) {
                    ptr4 = *(ptr9 + 5);
                    ptr3 += 6;
                    continue camlArray__isortto_1209;
                }
                else {
                    *ptr3 = ptr9;
                    *(ptr3 + 2) = v5;
                    *(unsigned int*)(ptr3 + 5) = ptr5;
                    *(ptr3 + 4) = v6;
                    int v18 = param1 >> 1;
                    if(v18 < 0) {
                        ++v18;
                    }
                    *(ptr3 + 1) = (v18 >> 1) * 2 + 1;
                    *(ptr3 + 3) = param1 - ((v18 >> 1) * 2 + 1) + 1;
                    --ptr3;
                    *ptr3 = &loc_805149F;
                    /*BAD_CALL!*/ camlArray__sortto_1217(*(ptr3 + 1));
                    --ptr3;
                    *ptr3 = &loc_80514BA;
                    /*BAD_CALL!*/ camlArray__sortto_1217(*(ptr3 + 1));
                    *ptr3 = *(int*)(*ptr3 + 16);
                    int v19 = *(ptr3 + 1);
                    unsigned int v20 = *(unsigned int*)(ptr3 + 2);
                    int v21 = *(ptr3 + 5);
                    caml_extra_params = v20;
                    gvar_8074360 = *ptr3;
                    /*BAD_CALL!*/ camlArray__merge_1191(v21, v19 + v20 - 1);
                }
            }
            while(1);
        }
    }
    jump *(ptr3 + 10);
}

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
                        caml_call_gc();
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
                        caml_call_gc();
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
                goto loc_804FFED;
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
        loc_804FFED:
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
                goto loc_8050058;
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
                    caml_call_gc();
                }
            }
            *ptr1 = 2301;
            *(long long*)(unsigned int)(ptr1 + 1) = *(double*)(v16 * 4 + v2 - 4);
            v5 = (unsigned int)(ptr1 + 1);
        loc_8050058:
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
                goto loc_80500ED;
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
        loc_80500ED:
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
                goto loc_805014E;
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
                        caml_call_gc();
                    }
                }
                param1 = v0 + 4;
                *(int*)(param1 - 4) = 2301;
                *(long long*)param1 = *(double*)(param0 * 4 + v2 - 4);
            loc_805014E:
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

int camlArray__make_matrix_1042(int param0) {
    int v0;
    int result = caml_c_call();
    if(v0 - 2 >= 1) {
        int v1 = v0 - 2;
        int v2 = 1;
        int v3 = result;
        do {
            int v4 = caml_c_call();
            result = v3;
            caml_modify((unsigned int*)(v2 * 2 + result - 2), (unsigned int)v4);
            v2 += 2;
        }
        while(v1 + 2 != v2);
    }
    return result;
}

int camlArray__map_1105() {
    double* ptr0;
    int* ptr1;
    int* ptr2;
    __SyntheticTypeUnknown v0;
    int* ptr3;
    char v1;
    double* ptr4;
    int v2 = *(int*)((char*)ptr4 - 4);
    int v3 = ((unsigned char)v2 != 254 ? v2 >>> 9: v2 >>> 10) | 0x1;
    if(v3 == 1) {
        return &camlArray__24;
    }
    int v4 = v3;
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
                caml_call_gc();
            }
        }
        *ptr2 = 2301;
        v0[v1 - 1] = *ptr4;
        *(long long*)(ptr2 + 1) = v0[v1 - 1];
    }
    void* ptr7 = (void*)*ptr3();
    int v5 = v4;
    int result = caml_c_call();
    ptr4 = (double*)0x3;
    if(v4 - 2 >= 3) {
        int v6 = v4 - 2;
        double* ptr8 = (double*)0x3;
        v4 = result;
        do {
            if(*(char*)((char*)ptr5 - 4) == 254) {
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                *ptr1 = 2301;
                *(long long*)(ptr1 + 1) = *(double*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr5) - 1);
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
            ptr4 = (double*)((char*)ptr0 + 2);
            ptr8 = (double*)((char*)ptr0 + 2);
        }
        while(v6 + 2 != ptr8);
    }
    return result;
}

int camlArray__mapi_1115() {
    int v0;
    int* ptr0;
    int* ptr1;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    char v3;
    int result;
    int v4 = *(int*)(result - 4);
    int v5 = ((unsigned char)v4 != 254 ? v4 >>> 9: v4 >>> 10) | 0x1;
    if(v5 == 1) {
        return &camlArray__23;
    }
    int v6 = v5;
    int v7 = result;
    int* ptr2 = (int*)v2;
    if(*(char*)(result - 4) == 254) {
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr1 = 2301;
        v1[v3 - 1] = *(double*)result;
        *(long long*)(ptr1 + 1) = v1[v3 - 1];
    }
    caml_apply2((int*)v2);
    void* ptr3 = (void*)v2;
    int v8 = v6;
    result = caml_c_call();
    int v9 = 3;
    if(v6 - 2 >= 3) {
        int v10 = v6 - 2;
        int v11 = 3;
        v6 = result;
        do {
            if(*(char*)(v7 - 4) == 254) {
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
                *(long long*)(ptr0 + 1) = *(double*)(v9 * 4 + v7 - 4);
            }
            caml_apply2(ptr2);
            result = v6;
            if(*(char*)(result - 4) != 254) {
                v0 = v11;
                caml_modify((unsigned int*)(v0 * 2 + result - 2), v2);
            }
            else {
                v0 = v11;
                *(long long*)(v0 * 4 + result - 4) = *(double*)v2;
            }
            v9 = v0 + 2;
            v11 = v0 + 2;
        }
        while(v10 + 2 != v11);
    }
    return result;
}

int camlArray__maxson_1155(int param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5;
    int* ptr6;
    int v0;
    int* ptr7;
    int* ptr8;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3;
    int* ptr9;
    int result = (int)ptr9 * 3;
    while(1) {
        ptr8 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr8) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr8 = 0x400;
    *(ptr8 + 1) = (int)ptr9 * 3;
    if((int)ptr9 * 3 + 4 < v3) {
        ptr7 = ptr8 + 1;
        v0 = param0;
        ptr6 = *(unsigned int*)(param0 + 16);
        int v4 = *(ptr6 - 1);
        if((unsigned char)v4 != 254) {
            if((unsigned int)((int)ptr9 * 3 + 2) >= (unsigned int)(v4 >>> 9)) {
                goto loc_80508B7;
            }
            else {
                goto loc_8050584;
            }
        }
        else if((unsigned int)((int)ptr9 * 3 + 2) >= (unsigned int)(v4 >>> 10)) {
            goto loc_80508B2;
        }
        else {
            goto loc_8050560;
        }
    }
    else {
        ptr7 = ptr9;
        v0 = v3;
        if((int)ptr9 * 3 + 2 < v3) {
            int v5 = *(int*)(param0 + 16);
            ptr6 = *(unsigned int*)(v5 - 4);
            if((unsigned char)ptr6 != 254) {
                if((unsigned int)((int)ptr9 * 3 + 2) >= (unsigned int)(int*)((int)ptr6 >>> 9)) {
                    caml_ml_array_bound_error();
                    goto loc_8050894;
                }
                else {
                    goto loc_8050778;
                }
            }
            if((unsigned int)((int)ptr9 * 3 + 2) >= (unsigned int)(int*)((int)ptr6 >>> 10)) {
                caml_ml_array_bound_error();
                caml_ml_array_bound_error();
                goto loc_8050894;
            }
            else {
                while(1) {
                    ptr5 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr5) {
                        break;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                *ptr5 = 2301;
                v1[v2 - 1] = *(double*)((int*)((int)(int*)(((int)ptr9 * 3 + 2) * 4) + v5) - 1);
                *(long long*)(int)(ptr5 + 1) = v1[v2 - 1];
            loc_8050778:
                int v6 = *(int*)(param0 + 16);
                ptr6 = *(unsigned int*)(v6 - 4);
                if((unsigned char)ptr6 != 254) {
                    if((unsigned int)((int)ptr9 * 3) >= (unsigned int)(int*)((int)ptr6 >>> 9)) {
                        caml_ml_array_bound_error();
                        caml_ml_array_bound_error();
                        caml_ml_array_bound_error();
                        goto loc_8050894;
                    }
                    else {
                        goto loc_80507D5;
                    }
                }
                if((unsigned int)((int)ptr9 * 3) >= (unsigned int)(int*)((int)ptr6 >>> 10)) {
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    goto loc_8050894;
                }
                else {
                    while(1) {
                        ptr4 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= (unsigned int)ptr4) {
                            break;
                        }
                        else {
                            caml_call_gc();
                        }
                    }
                    *ptr4 = 2301;
                    v1[v2 - 1] = *(double*)((int*)((int)(int*)((int)ptr9 * 12) + v6) - 1);
                    *(long long*)(ptr4 + 1) = v1[v2 - 1];
                loc_80507D5:
                    caml_apply2(*(int**)(param0 + 12));
                }
            }
            if(v3 < 1) {
                return result + 2;
            }
        }
    }
    if(v0 > result) {
        return result;
    }
    while(1) {
        int* ptr10 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr10) {
            *ptr10 = 0x800;
            *(unsigned int*)(ptr10 + 1) = gvar_8071850;
            *(unsigned int*)(ptr10 + 2) = ptr7;
            caml_raise_exn();
        }
        caml_call_gc();
    }
loc_8050560:
    while(1) {
        ptr3 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr3) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr3 = 2301;
    v1[v2 - 1] = *(double*)((int*)((unsigned int)((int)ptr9 * 3 + 2) * 4 + (int)ptr6) - 1);
    *(long long*)(int)(ptr3 + 1) = v1[v2 - 1];
loc_8050584:
    int v7 = *(int*)(param0 + 16);
    int v8 = *(int*)(v7 - 4);
    if((unsigned char)v8 != 254) {
        if((unsigned int)((int)ptr9 * 3) >= (unsigned int)(v8 >>> 9)) {
            goto loc_80508AD;
        }
        else {
            goto loc_80505E7;
        }
    }
    if((unsigned int)((int)ptr9 * 3) < (unsigned int)(v8 >>> 10)) {
        while(1) {
            ptr2 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr2) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr2 = 2301;
        v1[v2 - 1] = *(double*)((int*)((int)(int*)((int)ptr9 * 12) + v7) - 1);
        *(long long*)(ptr2 + 1) = v1[v2 - 1];
    loc_80505E7:
        caml_apply2(*(int**)(param0 + 12));
        if(v3 < 1) {
            *ptr7 = result + 2;
        }
        int v9 = *(int*)(v0 + 16);
        int v10 = *(int*)(v9 - 4);
        if((unsigned char)v10 != 254) {
            if((unsigned int)(result + 4) >= (unsigned int)(v10 >>> 9)) {
                goto loc_80508A3;
            }
            else {
                goto loc_8050668;
            }
        }
        if((unsigned int)(result + 4) < (unsigned int)(v10 >>> 10)) {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            *ptr1 = 2301;
            *(long long*)(int)(ptr1 + 1) = *(double*)((unsigned int)(result + 4) * 4 + v9 - 4);
        loc_8050668:
            unsigned int v11 = *ptr7;
            int v12 = *(int*)(v0 + 16);
            int v13 = *(int*)(v12 - 4);
            if((unsigned char)v13 != 254) {
                if((unsigned int)(v13 >>> 9) <= v11) {
                    goto loc_8050899;
                }
                else {
                    goto loc_80506D7;
                }
            }
            if((unsigned int)(v13 >>> 10) > v11) {
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
                *(long long*)(ptr0 + 1) = *(double*)(v11 * 4 + v12 - 4);
            loc_80506D7:
                caml_apply2(*(int**)(v0 + 12));
                if(v3 < 1) {
                    *ptr7 = result + 4;
                }
                return *ptr7;
            }
        loc_8050894:
            caml_ml_array_bound_error();
        loc_8050899:
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    loc_80508A3:
        caml_ml_array_bound_error();
    }
    caml_ml_array_bound_error();
loc_80508AD:
    caml_ml_array_bound_error();
loc_80508B2:
    caml_ml_array_bound_error();
loc_80508B7:
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__merge_1191(int param0, int param1) {
    unsigned int v0;
    double* ptr0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    unsigned int v5;
    long long* ptr1;
    unsigned int v6;
    unsigned int* ptr2;
    unsigned int v7;
    unsigned int* ptr3;
    __SyntheticTypeUnknown v8;
    int v9;
    int v10;
    int v11;
    int v12;
    char v13;
    int v14;
    int v15;
    int v16;
camlArray__merge_1191:
    while(1) {
        ptr3 = ptr3 - 7;
        *ptr3 = v11;
        *(int*)(ptr3 + 1) = param0;
        *(int*)(ptr3 + 4) = param1;
        *(int*)(ptr3 + 2) = v10;
        *(ptr3 + 3) = caml_extra_params;
        unsigned int v17 = gvar_8074360;
        v7 = *ptr3;
        int v18 = v7 + v15 - 1;
        ptr2 = (unsigned int*)(*(int*)(ptr3 + 4) + v16 - 1);
        while(1) {
            v6 = caml_young_ptr - 40;
            caml_young_ptr = v6;
            if(caml_young_limit <= v6) {
                break;
            }
            else {
                --ptr3;
                *ptr3 = &loc_8051124;
                /*BAD_CALL!*/ caml_call_gc();
            }
        }
        int* ptr4 = (int*)(v6 + 4);
        *(ptr4 - 1) = 9463;
        *ptr4 = &caml_curry5;
        *(ptr4 + 1) = 11;
        *(ptr4 + 2) = &camlArray__loop_1201;
        *(ptr4 + 3) = *(int*)(v17 + 12);
        *(ptr4 + 4) = *(int*)(v17 + 16);
        ptr1 = *(ptr3 + 1);
        *(unsigned int*)(ptr4 + 5) = ptr1;
        *(ptr4 + 6) = *(int*)(ptr3 + 2);
        *(ptr4 + 7) = v18;
        *(unsigned int*)(ptr4 + 8) = ptr2;
        int v19 = *(int*)((char*)ptr1 - 4);
        if((unsigned char)v19 != 254) {
            if((unsigned int)(v19 >>> 9) <= *(ptr3 + 4)) {
                goto loc_8051138;
            }
            else {
                v5 = *(unsigned int*)((char*)(*(int*)(ptr3 + 4) * 2 + (int)ptr1) - 2);
                goto loc_80510AA;
            }
        }
        if((unsigned int)(v19 >>> 10) > *(ptr3 + 4)) {
            while(1) {
                v4 = caml_young_ptr - 12;
                caml_young_ptr = v4;
                if(caml_young_limit <= v4) {
                    break;
                }
                else {
                    --ptr3;
                    *ptr3 = &loc_805111A;
                    /*BAD_CALL!*/ caml_call_gc();
                }
            }
            v5 = v4 + 4;
            *(int*)(v5 - 4) = 2301;
            char v20 = v13 - 1;
            v8[v20] = *(double*)((int*)(*(int*)(ptr3 + 4) * 4 + (int)ptr1) - 1);
            *(long long*)v5 = v8[v20];
            v13 = v20 + 1;
        loc_80510AA:
            ptr2 = *(unsigned int*)(v17 + 16);
            int v21 = *(int*)(ptr2 - 1);
            ptr1 = (unsigned int)(v21 & 0xFF);
            if(ptr1 == 254) {
                if((unsigned int)(v21 >>> 10) > v7) {
                    goto loc_80510DC;
                }
                else {
                    --ptr3;
                    *ptr3 = &loc_805112E;
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                }
            }
            else if((unsigned int)(v21 >>> 9) > v7) {
                goto loc_80510FE;
            }
            --ptr3;
            *ptr3 = &loc_8051133;
            /*BAD_CALL!*/ caml_ml_array_bound_error();
        }
        --ptr3;
        *ptr3 = &loc_8051138;
        /*BAD_CALL!*/ caml_ml_array_bound_error();
    loc_8051138:
        --ptr3;
        *ptr3 = &loc_805113D;
        int v22 = /*BAD_CALL!*/ caml_ml_array_bound_error();
        unsigned int* ptr5 = ptr2;
        ptr3 -= 10;
        ptr4 = (int*)0x1;
        int v23 = v12 - 2;
        if(v23 < 1) {
            break;
        }
        else {
            *(int*)(ptr3 + 4) = v23;
            *(int*)(ptr3 + 3) = 1;
            *(ptr3 + 6) = ptr5;
            *(int*)(ptr3 + 5) = v9;
            *(ptr3 + 7) = ptr1;
            *ptr3 = v22;
        loc_805116D:
            do {
                int* ptr6 = (int*)((char*)(*ptr3 + (int)ptr4) - 1);
                *(ptr3 + 1) = ptr6;
                int v24 = *(int*)(*(int*)(ptr3 + 6) + 16);
                *(int*)(ptr3 + 2) = *(int*)(v24 - 4);
                if((unsigned char)*(int*)(ptr3 + 2) != 254) {
                    if((unsigned int)(*(int*)(ptr3 + 2) >>> 9) <= (unsigned int)ptr6) {
                        goto loc_8051438;
                    }
                    else {
                        *(int*)(ptr3 + 1) = *(int*)((char*)((int)(int*)((int)ptr6 * 2) + v24) - 2);
                        goto loc_80511F5;
                    }
                }
                if((unsigned int)(*(int*)(ptr3 + 2) >>> 10) > (unsigned int)ptr6) {
                    while(1) {
                        v3 = caml_young_ptr - 12;
                        caml_young_ptr = v3;
                        if(caml_young_limit <= v3) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_8051406;
                            /*BAD_CALL!*/ caml_call_gc();
                        }
                    }
                    long long* ptr7 = (long long*)(v3 + 4);
                    *(int*)((char*)ptr7 - 4) = 2301;
                    *ptr7 = *(double*)(*(int*)(ptr3 + 1) * 4 + v24 - 4);
                    v13 = 7;
                    *(ptr3 + 1) = ptr7;
                loc_80511F5:
                    while(1) {
                        v2 = caml_young_ptr - 8;
                        caml_young_ptr = v2;
                        if(caml_young_limit <= v2) {
                            break;
                        }
                        else {
                            --ptr3;
                            *ptr3 = &loc_80513FC;
                            /*BAD_CALL!*/ caml_call_gc();
                        }
                    }
                    ptr5 = (unsigned int*)(v2 + 4);
                    *(ptr3 + 2) = ptr5;
                    *(int*)(ptr5 - 1) = 0x400;
                    *ptr5 = (int*)((char*)(*(int*)(ptr3 + 5) + (int)ptr4) - 3);
                    while(*(int*)(ptr3 + 5) <= *ptr5) {
                        unsigned int v25 = *ptr5;
                        int v26 = *(int*)((char*)ptr1 - 4);
                        if((unsigned char)v26 != 254) {
                            if((unsigned int)(v26 >>> 9) <= v25) {
                                goto loc_805142E;
                            }
                            else {
                                goto loc_8051298;
                            }
                        }
                        if((unsigned int)(v26 >>> 10) <= v25) {
                            goto loc_8051429;
                        }
                        else {
                            while(1) {
                                v1 = caml_young_ptr - 12;
                                caml_young_ptr = v1;
                                if(caml_young_limit <= v1) {
                                    break;
                                }
                                else {
                                    --ptr3;
                                    *ptr3 = &loc_80513F2;
                                    /*BAD_CALL!*/ caml_call_gc();
                                }
                            }
                            long long* ptr8 = (long long*)(v1 + 4);
                            *(int*)((char*)ptr8 - 4) = 2301;
                            *ptr8 = *(double*)((int*)(v25 * 4 + (int)ptr1) - 1);
                            v13 = 7;
                        loc_8051298:
                            int* ptr9 = *(int**)(*(int*)(ptr3 + 6) + 12);
                            --ptr3;
                            *ptr3 = &loc_80512A4;
                            /*BAD_CALL!*/ caml_apply2(ptr9);
                            if(v14 <= 1) {
                                break;
                            }
                            else {
                                ptr5 = *(ptr3 + 2);
                                unsigned int v27 = *ptr5;
                                ptr1 = *(ptr3 + 7);
                                int v28 = *(int*)((char*)ptr1 - 4);
                                if((unsigned char)v28 != 254) {
                                    if((unsigned int)(v28 >>> 9) <= v27) {
                                        goto loc_8051424;
                                    }
                                    else {
                                        ptr0 = *(unsigned int*)((char*)(v27 * 2 + (int)ptr1) - 2);
                                        goto loc_8051316;
                                    }
                                }
                                if((unsigned int)(v28 >>> 10) <= v27) {
                                    goto loc_805141F;
                                }
                                else {
                                    while(1) {
                                        v0 = caml_young_ptr - 12;
                                        caml_young_ptr = v0;
                                        if(caml_young_limit <= v0) {
                                            break;
                                        }
                                        else {
                                            --ptr3;
                                            *ptr3 = &loc_80513E8;
                                            /*BAD_CALL!*/ caml_call_gc();
                                        }
                                    }
                                    ptr0 = (double*)(v0 + 4);
                                    *(int*)((char*)ptr0 - 4) = 2301;
                                    *ptr0 = *(double*)((int*)(v27 * 4 + (int)ptr1) - 1);
                                    v13 = 7;
                                loc_8051316:
                                    unsigned int v29 = (unsigned int)(*ptr5 + 2);
                                    int v30 = *(int*)((char*)ptr1 - 4);
                                    if((unsigned char)v30 != 254) {
                                        if((unsigned int)(v30 >>> 9) <= v29) {
                                            goto loc_805141A;
                                        }
                                        else {
                                            --ptr3;
                                            *ptr3 = ptr0;
                                            --ptr3;
                                            *ptr3 = (int*)((char*)(v29 * 2 + (int)ptr1) - 2);
                                            --ptr3;
                                            *ptr3 = &loc_8051342;
                                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(ptr3 + 2));
                                            ptr3 += 2;
                                            goto loc_8051361;
                                        }
                                    }
                                    if((unsigned int)(v30 >>> 10) <= v29) {
                                        goto loc_8051415;
                                    }
                                    else {
                                        *(long long*)((int*)(v29 * 4 + (int)ptr1) - 1) = *ptr0;
                                        v13 = 7;
                                    loc_8051361:
                                        *ptr5 = *ptr5 - 2;
                                    }
                                }
                            }
                        }
                    }
                    unsigned int v31 = (unsigned int)(**(ptr3 + 2) + 2);
                    ptr1 = *(ptr3 + 7);
                    int v32 = *(int*)((char*)ptr1 - 4);
                    if((unsigned char)v32 != 254) {
                        if((unsigned int)(v32 >>> 9) <= v31) {
                            goto loc_8051410;
                        }
                        else {
                            int v33 = *(int*)(ptr3 + 1);
                            --ptr3;
                            *ptr3 = v33;
                            --ptr3;
                            *ptr3 = (int*)((char*)(v31 * 2 + (int)ptr1) - 2);
                            --ptr3;
                            *ptr3 = &loc_80513A6;
                            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr3 + 1), *(ptr3 + 2));
                            ptr3 += 2;
                            goto loc_80513C1;
                        }
                    }
                    if((unsigned int)(v32 >>> 10) > v31) {
                        *(long long*)((int*)(v31 * 4 + (int)ptr1) - 1) = **(ptr3 + 1);
                        v13 = 7;
                    loc_80513C1:
                        int v34 = *(int*)(ptr3 + 3);
                        ptr4 = (int*)(v34 + 2);
                        *(ptr3 + 3) = ptr4;
                        if(*(int*)(ptr3 + 4) != v34) {
                            goto loc_805116D;
                        }
                        else {
                            break camlArray__merge_1191;
                        }
                    }
                    else {
                        --ptr3;
                        *ptr3 = &loc_8051410;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051410:
                        --ptr3;
                        *ptr3 = &loc_8051415;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051415:
                        --ptr3;
                        *ptr3 = &loc_805141A;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805141A:
                        --ptr3;
                        *ptr3 = &loc_805141F;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805141F:
                        --ptr3;
                        *ptr3 = &loc_8051424;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051424:
                        --ptr3;
                        *ptr3 = &loc_8051429;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_8051429:
                        --ptr3;
                        *ptr3 = &loc_805142E;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    loc_805142E:
                        --ptr3;
                        *ptr3 = &loc_8051433;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    }
                }
                --ptr3;
                *ptr3 = &loc_8051438;
                /*BAD_CALL!*/ caml_ml_array_bound_error();
            loc_8051438:
                --ptr3;
                *ptr3 = &loc_805143D;
                int v35 = /*BAD_CALL!*/ caml_ml_array_bound_error();
                unsigned int* ptr10 = ptr5;
                ptr3 -= 6;
                if(v12 <= 11) {
                    ptr3 += 6;
                    /*BAD_CALL!*/ camlArray__isortto_1209(v9, v12);
                }
                *ptr3 = ptr10;
                *(int*)(ptr3 + 2) = v9;
                *(ptr3 + 5) = ptr1;
                *(int*)(ptr3 + 4) = v35;
                int v36 = v12 >> 1;
                if(v36 < 0) {
                    ++v36;
                }
                int v37 = (v36 >> 1) * 2 + 1;
                *(int*)(ptr3 + 1) = v37;
                *(int*)(ptr3 + 3) = v12 - v37 + 1;
                --ptr3;
                *ptr3 = &loc_805149F;
                /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr3 + 1));
                --ptr3;
                *ptr3 = &loc_80514BA;
                /*BAD_CALL!*/ camlArray__sortto_1217(*(int*)(ptr3 + 1));
                *ptr3 = *(int*)(*ptr3 + 16);
                v15 = *(int*)(ptr3 + 1);
                unsigned int v38 = *(ptr3 + 2);
                param1 = v15 + v38 - 1;
                v16 = *(int*)(ptr3 + 3);
                v11 = *(int*)(ptr3 + 4) + v16 - 1;
                param0 = *(int*)(ptr3 + 5);
                v10 = param0;
                caml_extra_params = v38;
                gvar_8074360 = *ptr3;
                ptr3 += 6;
                continue camlArray__merge_1191;
            }
            while(1);
        }
    }
    jump *(int*)(ptr3 + 10);
loc_80510DC:
    unsigned int v39 = caml_young_ptr - 12;
    caml_young_ptr = v39;
    if(caml_young_limit <= v39) {
        ptr1 = (long long*)(v39 + 4);
        *(int*)((char*)ptr1 - 4) = 2301;
        char v40 = v13 - 1;
        v8[v40] = *(double*)((int*)(v7 * 4 + (int)ptr2) - 1);
        *ptr1 = v8[v40];
        v13 = v40 + 1;
    loc_80510FE:
        int v41 = *(int*)(ptr3 + 4);
        ptr3 += 7;
        /*BAD_CALL!*/ camlArray__loop_1201(v41, v5);
    }
    --ptr3;
    *ptr3 = &loc_8051113;
    /*BAD_CALL!*/ caml_call_gc();
    goto loc_80510DC;
}

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

int camlArray__sort_1152() {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    int* ptr0;
    unsigned int v5;
    int v6;
    unsigned int* ptr1;
    int* ptr2;
    __SyntheticTypeUnknown v7;
    int v8;
    char v9;
    unsigned int* ptr3;
    unsigned int* ptr4 = ptr3;
    while(1) {
        ptr2 = (int*)(caml_young_ptr - 144);
        caml_young_ptr -= 144;
        if(caml_young_limit <= (unsigned int)ptr2) {
            break;
        }
        else {
            caml_call_gc();
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
    int v10 = (int)(ptr2 + 14);
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
    int v11 = (int)(ptr2 + 31);
    *(ptr2 + 30) = 5367;
    *(int*)(int)(ptr2 + 31) = &caml_curry2;
    *(ptr2 + 32) = 5;
    *(ptr2 + 33) = &camlArray__trickleup_1178;
    *(ptr2 + 34) = v8;
    *(unsigned int**)(ptr2 + 35) = ptr3;
    unsigned int v12 = ptr3[-1];
    int v13 = ((unsigned char)v12 != 254 ? v12 >>> 9: v12 >>> 10) | 0x1;
    unsigned int* ptr6 = (unsigned int*)((((((unsigned char)v12 != 254 ? v12 >>> 9: v12 >>> 10) | 0x1) + 2) >> 1) / 3 * 2 - 1);
    if((int)ptr6 >= 1) {
        ptr1 = ptr6;
        do {
            unsigned int v14 = ptr4[-1];
            if((unsigned char)v14 != 254) {
                if(v14 >>> 9 <= (unsigned int)ptr6) {
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return 1;
                }
                v6 = *(int*)((char*)((int)(int*)((int)ptr6 * 2) + (int)ptr4) - 2);
                goto loc_805280C;
            }
            if(v14 >>> 10 <= (unsigned int)ptr6) {
                caml_ml_array_bound_error();
                /*BAD_CALL!*/ caml_ml_array_bound_error();
                return 1;
            }
            while(1) {
                v5 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v5) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            v6 = (int)(v5 + 4);
            *(int*)(v6 - 4) = 2301;
            v7[v9 - 1] = *(long long*)&ptr4[(unsigned int*)((char*)ptr6 - 1)];
            *(long long*)v6 = v7[v9 - 1];
        loc_805280C:
            camlArray__trickle_1165(v6, v10);
            ptr6 = (unsigned int*)((char*)ptr1 - 2);
            ptr1 = (unsigned int*)((char*)ptr1 - 2);
        }
        while(ptr1 != -1);
    }
    unsigned int v15 = (unsigned int)(v13 - 2);
    if((int)v15 >= 5) {
        ptr1 = (unsigned int*)v15;
        do {
            unsigned int v16 = ptr4[-1];
            if((unsigned char)v16 != 254) {
                if(v16 >>> 9 <= v15) {
                    caml_ml_array_bound_error();
                    caml_ml_array_bound_error();
                    /*BAD_CALL!*/ caml_ml_array_bound_error();
                    return 1;
                }
                v10 = *(int*)((char*)(v15 * 2 + (int)ptr4) - 2);
                goto loc_80528A8;
            }
            if(v16 >>> 10 <= v15) {
                goto loc_8052B71;
            }
            else {
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
                v7[v9 - 1] = *(long long*)&ptr4[v15 - 1];
                *(long long*)(int)(ptr0 + 1) = v7[v9 - 1];
                v10 = (int)(ptr0 + 1);
            loc_80528A8:
                unsigned int v17 = ptr4[-1];
                if((unsigned char)v17 != 254) {
                    if(v17 >>> 9 <= 1) {
                        goto loc_8052B6C;
                    }
                    else {
                        v4 = ptr4[0];
                        goto loc_8052903;
                    }
                }
                if(v17 >>> 10 <= 1) {
                    goto loc_8052B67;
                }
                else {
                    while(1) {
                        v3 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v3) {
                            break;
                        }
                        else {
                            caml_call_gc();
                        }
                    }
                    v4 = v3 + 4;
                    *(int*)(v4 - 4) = 2301;
                    v7[v9 - 1] = (double)*(long long*)&ptr4[0];
                    *(long long*)v4 = v7[v9 - 1];
                loc_8052903:
                    unsigned int v18 = ptr4[-1];
                    if((unsigned char)v18 != 254) {
                        if(v18 >>> 9 <= v15) {
                            goto loc_8052B62;
                        }
                        else {
                            caml_modify((unsigned int*)((char*)(v15 * 2 + (int)ptr4) - 2), v4);
                            goto loc_805295B;
                        }
                    }
                    if(v18 >>> 10 <= v15) {
                        goto loc_8052B5D;
                    }
                    else {
                        v7[v9 - 1] = *(double*)v4;
                        *(long long*)&ptr4[v15 - 1] = v7[v9 - 1];
                    loc_805295B:
                        camlArray__bubble_1174();
                        camlArray__trickleup_1178(v11);
                        v15 = (unsigned int)((char*)ptr1 - 2);
                        ptr1 = (unsigned int*)(unsigned int)((char*)ptr1 - 2);
                    }
                }
            }
        }
        while(ptr1 != 3);
    }
    if(v13 > 3) {
        unsigned int v19 = ptr4[-1];
        if((unsigned char)v19 != 254) {
            if(v19 >>> 9 <= 3) {
                goto loc_8052B58;
            }
            else {
                v15 = ptr4[1];
                goto loc_80529F4;
            }
        }
        if(v19 >>> 10 > 3) {
            while(1) {
                v2 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v2) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            v15 = v2 + 4;
            *(int*)(v15 - 4) = 2301;
            v7[v9 - 1] = *(long long*)&ptr4[2];
            *(long long*)v15 = v7[v9 - 1];
        loc_80529F4:
            unsigned int v20 = ptr4[-1];
            if((unsigned char)v20 != 254) {
                if(v20 >>> 9 <= 1) {
                    goto loc_8052B4E;
                }
                else {
                    v1 = ptr4[0];
                    goto loc_8052A53;
                }
            }
            if(v20 >>> 10 > 1) {
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
                v1 = v0 + 4;
                *(int*)(v1 - 4) = 2301;
                v7[v9 - 1] = (double)*(long long*)&ptr4[0];
                *(long long*)v1 = v7[v9 - 1];
            loc_8052A53:
                unsigned int v21 = ptr4[-1];
                if((unsigned char)v21 != 254) {
                    if(v21 >>> 9 <= 3) {
                        goto loc_8052B44;
                    }
                    else {
                        caml_modify(ptr4 + 1, v1);
                        goto loc_8052AA1;
                    }
                }
                if(v21 >>> 10 > 3) {
                    v7[v9 - 1] = *(double*)v1;
                    *(long long*)&ptr4[2] = v7[v9 - 1];
                loc_8052AA1:
                    unsigned int v22 = ptr4[-1];
                    if((unsigned char)v22 != 254) {
                        if(v22 >>> 9 <= 1) {
                            goto loc_8052B3A;
                        }
                        else {
                            caml_modify(ptr4, v15);
                            return 1;
                        }
                    }
                    if(v22 >>> 10 > 1) {
                        v7[v9 - 1] = *(double*)v15;
                        *(long long*)&ptr4[0] = v7[v9 - 1];
                        return 1;
                    }
                    caml_ml_array_bound_error();
                loc_8052B3A:
                    caml_ml_array_bound_error();
                }
                caml_ml_array_bound_error();
            loc_8052B44:
                caml_ml_array_bound_error();
            }
            caml_ml_array_bound_error();
        loc_8052B4E:
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    loc_8052B58:
        caml_ml_array_bound_error();
    loc_8052B5D:
        caml_ml_array_bound_error();
    loc_8052B62:
        caml_ml_array_bound_error();
    loc_8052B67:
        caml_ml_array_bound_error();
    loc_8052B6C:
        caml_ml_array_bound_error();
    loc_8052B71:
        caml_ml_array_bound_error();
        caml_ml_array_bound_error();
        caml_ml_array_bound_error();
        /*BAD_CALL!*/ caml_ml_array_bound_error();
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
    *ptr2 = &loc_805149F;
    /*BAD_CALL!*/ camlArray__sortto_1217((v3 >> 1) * 2 + v0, v4);
    int v5 = *(int*)(ptr2 + 4) + *(int*)(ptr2 + 3) - 1;
    int v6 = *(int*)(ptr2 + 1);
    --ptr2;
    *ptr2 = &loc_80514BA;
    /*BAD_CALL!*/ camlArray__sortto_1217(v5, v6);
    *ptr2 = *(int*)(*ptr2 + 16);
    int v7 = *(int*)(ptr2 + 1);
    unsigned int v8 = *(ptr2 + 2);
    int v9 = *(int*)(ptr2 + 5);
    caml_extra_params = v8;
    gvar_8074360 = *ptr2;
    /*BAD_CALL!*/ camlArray__merge_1191(v9, v7 + v8 - 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__stable_sort_1188() {
    int* ptr0;
    int* ptr1;
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    float* ptr2;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 76);
        caml_young_ptr -= 76;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr1 = 5367;
    *(ptr1 + 1) = &caml_curry7;
    *(ptr1 + 2) = 15;
    *(ptr1 + 3) = &camlArray__merge_1191;
    *(ptr1 + 4) = v1;
    *(unsigned int*)(ptr1 + 5) = ptr2;
    *(ptr1 + 6) = 5367;
    *(ptr1 + 7) = &caml_curry4;
    *(ptr1 + 8) = 9;
    *(ptr1 + 9) = &camlArray__isortto_1209;
    *(ptr1 + 10) = v1;
    *(unsigned int*)(ptr1 + 11) = ptr2;
    *(ptr1 + 12) = 6391;
    *(ptr1 + 13) = &caml_curry4;
    *(ptr1 + 14) = 9;
    *(ptr1 + 15) = &camlArray__sortto_1217;
    *(unsigned int*)(ptr1 + 16) = ptr2;
    *(unsigned int*)(ptr1 + 17) = ptr1 + 1;
    *(unsigned int*)(ptr1 + 18) = ptr1 + 7;
    int v3 = *(int*)(ptr2 - 1);
    int v4 = ((unsigned char)v3 != 254 ? v3 >>> 9: v3 >>> 10) | 0x1;
    if(v4 <= 11) {
        return camlArray__isortto_1209(1, v4);
    }
    int* ptr3 = ptr1 + 13;
    int* ptr4 = ptr1 + 1;
    float* ptr5 = ptr2;
    int v5 = v4 >> 1;
    if(v5 < 0) {
        ++v5;
    }
    int v6 = (v5 >> 1) * 2 + 1;
    int* ptr6 = (int*)(v4 - ((v5 >> 1) * 2 + 1) + 1);
    int result = *(int*)(ptr2 - 1);
    if((unsigned char)result == 254) {
        if((unsigned int)(result >>> 10) <= 1) {
            caml_ml_array_bound_error();
        loc_8052D73:
            /*BAD_CALL!*/ caml_ml_array_bound_error();
        }
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
        v0[v2 - 1] = *(double*)ptr2;
        *(long long*)(ptr0 + 1) = v0[v2 - 1];
    }
    else if((unsigned int)(result >>> 9) <= 1) {
        goto loc_8052D73;
    }
    int v7 = caml_c_call();
    camlArray__sortto_1217(1, (int)ptr6);
    camlArray__sortto_1217((int)ptr6, v6);
    caml_extra_params = 1;
    gvar_8074360 = ptr4;
    camlArray__merge_1191(v7, 1);
    return result;
}

int camlArray__sub_1081(int param0) {
    unsigned int v0;
    unsigned int v1;
    void* ptr0;
    int result;
    __SyntheticTypeUnknown v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7 = v3;
    if(v6 >= 1 && v4 >= 1) {
        result = *(int*)(v7 - 4);
        if((((unsigned char)result != 254 ? result >>> 9: result >>> 10) | 0x1) - v4 + 1 < v6) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
            caml_call_gc();
            goto loc_8051B55;
        }
        else if(v4 == 1) {
            return &camlArray__28;
        }
        else {
            int v8 = v4;
            int v9 = v6;
            int v10 = v7;
            if(*(char*)(v7 - 4) != 254) {
                ptr0 = *(void**)(v6 * 2 + v7 - 2);
            loc_8051AF9:
                void* ptr1 = ptr0;
                int v11 = v4;
                result = caml_c_call();
                v6 = 3;
                if(v8 - 2 >= 3) {
                    int v12 = v8 - 2;
                    v8 = result;
                loc_8051B28:
                    v7 = v6 + v9 - 1;
                    param0 = v10;
                    if(*(char*)(param0 - 4) == 254) {
                    loc_8051B55:
                        int* ptr2 = (int*)(caml_young_ptr - 12);
                        caml_young_ptr -= 12;
                        if(caml_young_limit > (unsigned int)ptr2) {
                            caml_call_gc();
                            goto loc_8051B55;
                        }
                        else {
                            *ptr2 = 2301;
                            *(long long*)(unsigned int)(ptr2 + 1) = *(double*)(v7 * 4 + param0 - 4);
                            v1 = (unsigned int)(ptr2 + 1);
                        loc_8051B77:
                            result = v8;
                            if(*(char*)(result - 4) != 254) {
                                caml_modify((unsigned int*)(v6 * 2 + result - 2), v1);
                            }
                            else {
                                *(long long*)(v6 * 4 + result - 4) = *(double*)v1;
                            }
                            v4 = v6;
                            v6 += 2;
                            if(v4 != v12) {
                                goto loc_8051B28;
                            }
                            else {
                                return result;
                            }
                        }
                    }
                    else {
                        v1 = *(unsigned int*)(v7 * 2 + param0 - 2);
                        goto loc_8051B77;
                    }
                }
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        ptr0 = (void*)(v0 + 4);
                        *(int*)((int)ptr0 - 4) = 2301;
                        v2[v5 - 1] = *(double*)(v6 * 4 + v7 - 4);
                        *(long long*)ptr0 = v2[v5 - 1];
                        goto loc_8051AF9;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                ptr0 = (void*)(v0 + 4);
                *(int*)((int)ptr0 - 4) = 2301;
                v2[v5 - 1] = *(double*)(v6 * 4 + v7 - 4);
                *(long long*)ptr0 = v2[v5 - 1];
                goto loc_8051AF9;
            }
        }
    }
    else {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        caml_call_gc();
        goto loc_8051B55;
    }
    return result;
}

int camlArray__to_list_1121() {
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
            result = caml_call_gc();
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
                    caml_call_gc();
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
                caml_call_gc();
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
    int v5 = sub_8050B60(param1, param0, v0, v1, v2);
    if(gvar_8071850 == *(unsigned int*)v5) {
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
            goto loc_8050B81;
        }
        else {
            *(long long*)(v6 * 4 + v7 - 4) = *(double*)v4;
            return 1;
        }
    }
    else {
        caml_raise_exn();
    loc_8050B81:
        caml_ml_array_bound_error();
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
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
    unsigned int v7;
    while(1) {
        int v8 = v6;
        v4 = v7;
        v3 = param0;
        v2 = param1;
        v7 = (unsigned int)camlArray__maxson_1155(*(int*)(param1 + 20));
        unsigned int v9 = v7;
        int v10 = *(int*)(v2 + 16);
        int v11 = *(int*)(v10 - 4);
        if((unsigned char)v11 != 254) {
            if((unsigned int)(v11 >>> 9) <= v7) {
                goto loc_8050AC5;
            }
            else {
                goto loc_805094B;
            }
        }
        if((unsigned int)(v11 >>> 10) <= v7) {
            goto loc_8050AC0;
        }
        else {
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
            *(long long*)(ptr0 + 1) = *(double*)(v7 * 4 + v10 - 4);
        loc_805094B:
            caml_apply2(*(int**)(v2 + 12));
            if(v5 <= 1) {
                break;
            }
            else {
                int v12 = *(int*)(v2 + 16);
                int v13 = *(int*)(v12 - 4);
                v7 = v9;
                if((unsigned char)v13 != 254) {
                    if((unsigned int)(v13 >>> 9) <= v7) {
                        goto loc_8050ABB;
                    }
                    else {
                        v1 = *(unsigned int*)(v7 * 2 + v12 - 2);
                        goto loc_80509C8;
                    }
                }
                if((unsigned int)(v13 >>> 10) <= v7) {
                    goto loc_8050AB6;
                }
                else {
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
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    *(long long*)v1 = *(double*)(v7 * 4 + v12 - 4);
                loc_80509C8:
                    int v14 = *(int*)(v2 + 16);
                    int v15 = *(int*)(v14 - 4);
                    if((unsigned char)v15 != 254) {
                        if((unsigned int)(v15 >>> 9) <= v4) {
                            goto loc_8050AB1;
                        }
                        else {
                            caml_modify((unsigned int*)(v4 * 2 + v14 - 2), v1);
                            goto loc_8050A15;
                        }
                    }
                    if((unsigned int)(v15 >>> 10) <= v4) {
                        goto loc_8050AAC;
                    }
                    else {
                        *(long long*)(v4 * 4 + v14 - 4) = *(double*)v1;
                    loc_8050A15:
                        v6 = v8;
                        param0 = v3;
                        param1 = v2;
                    }
                }
            }
        }
    }
    int v16 = *(int*)(v2 + 16);
    int v17 = *(int*)(v16 - 4);
    if((unsigned char)v17 == 254) {
        if((unsigned int)(v17 >>> 10) > v4) {
            *(long long*)(v4 * 4 + v16 - 4) = *(double*)v3;
            return 1;
        }
        caml_ml_array_bound_error();
    }
    else if((unsigned int)(v17 >>> 9) > v4) {
        caml_modify((unsigned int*)(v4 * 2 + v16 - 2), v3);
        return 1;
    }
    caml_ml_array_bound_error();
loc_8050AAC:
    caml_ml_array_bound_error();
loc_8050AB1:
    caml_ml_array_bound_error();
loc_8050AB6:
    caml_ml_array_bound_error();
loc_8050ABB:
    caml_ml_array_bound_error();
loc_8050AC0:
    caml_ml_array_bound_error();
loc_8050AC5:
    /*BAD_CALL!*/ caml_ml_array_bound_error();
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
    unsigned int v11;
    unsigned int v12;
    while(1) {
        unsigned int v13 = v12;
        v7 = param0;
        unsigned int v14 = (unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1);
        if((unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1) != v13) {
            v6 = (unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1);
            v5 = v7;
            v4 = v11;
            v3 = v13;
        }
        else {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            *ptr1 = 0x800;
            *(ptr1 + 1) = &caml_exn_Assert_failure;
            *(ptr1 + 2) = &camlArray__35;
            caml_raise_exn();
        }
        int v15 = *(int*)(v7 + 16);
        int v16 = *(int*)(v15 - 4);
        if((unsigned char)v16 != 254) {
            if((unsigned int)(v16 >>> 9) <= (unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1)) {
                goto loc_8050FA9;
            }
            else {
                goto loc_8050DB7;
            }
        }
        if((unsigned int)(v16 >>> 10) <= (unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1)) {
            goto loc_8050FA4;
        }
        else {
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
            v8[v9 - 1] = *(double*)((unsigned int)(((v13 - 2) >> 1) / 3 * 2 + 1) * 4 + v15 - 4);
            *(long long*)(ptr0 + 1) = v8[v9 - 1];
        loc_8050DB7:
            caml_apply2(*(int**)(v7 + 12));
            if(v10 >= 1) {
                goto loc_8050F03;
            }
            else {
                v7 = v5;
                v11 = *(unsigned int*)(v7 + 16);
                int v17 = *(int*)(v11 - 4);
                if((unsigned char)v17 != 254) {
                    v2 = v6;
                    if((unsigned int)(v17 >>> 9) <= v2) {
                        goto loc_8050F9F;
                    }
                    else {
                        v1 = *(unsigned int*)(v2 * 2 + v11 - 2);
                        goto loc_8050E38;
                    }
                }
                else {
                    v2 = v6;
                }
                if((unsigned int)(v17 >>> 10) <= v2) {
                    goto loc_8050F9A;
                }
                else {
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
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    *(long long*)v1 = *(double*)(v2 * 4 + v11 - 4);
                    v9 = 7;
                loc_8050E38:
                    int v18 = *(int*)(v7 + 16);
                    int v19 = *(int*)(v18 - 4);
                    if((unsigned char)v19 != 254) {
                        if((unsigned int)(v19 >>> 9) <= v3) {
                            goto loc_8050F95;
                        }
                        else {
                            caml_modify((unsigned int*)(v3 * 2 + v18 - 2), v1);
                            goto loc_8050E88;
                        }
                    }
                    if((unsigned int)(v19 >>> 10) <= v3) {
                        goto loc_8050F90;
                    }
                    else {
                        *(long long*)(v3 * 4 + v18 - 4) = *(double*)v1;
                        v9 = 7;
                    loc_8050E88:
                        if((int)v2 <= 1) {
                            break;
                        }
                        else {
                            v12 = v2;
                            v11 = v4;
                            param0 = v7;
                        }
                    }
                }
            }
        }
    }
    unsigned int* ptr2 = *(unsigned int**)(v7 + 16);
    v11 = ptr2[-1];
    if((unsigned char)v11 == 254) {
        if(v11 >>> 10 > 1) {
            *(long long*)&ptr2[0] = *(double*)v4;
            return 1;
        loc_8050F03:
            int v20 = *(int*)(v5 + 16);
            int v21 = *(int*)(v20 - 4);
            if((unsigned char)v21 == 254) {
                if((unsigned int)(v21 >>> 10) > v3) {
                    *(long long*)((int*)((int)(int*)(v3 * 4) + v20) - 1) = *(double*)v4;
                    return 1;
                }
                caml_ml_array_bound_error();
            }
            else if((unsigned int)(v21 >>> 9) > v3) {
                caml_modify((unsigned int*)(v3 * 2 + v20 - 2), v4);
                return 1;
            }
            caml_ml_array_bound_error();
        }
        caml_ml_array_bound_error();
    }
    else if(v11 >>> 9 > 1) {
        caml_modify(ptr2, v4);
        return 1;
    }
    caml_ml_array_bound_error();
loc_8050F90:
    caml_ml_array_bound_error();
loc_8050F95:
    caml_ml_array_bound_error();
loc_8050F9A:
    caml_ml_array_bound_error();
loc_8050F9F:
    caml_ml_array_bound_error();
loc_8050FA4:
    caml_ml_array_bound_error();
loc_8050FA9:
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlCallback__entry() {
    camlCallback = &camlCallback__2;
    gvar_8073D70 = &camlCallback__1;
    return 1;
}

int camlCallback__register_1031() {
    return caml_c_call();
}

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

unsigned int* camlHashtbl__Make_1251() {
    int* ptr0;
    int v0;
    unsigned int v1 = camlHashtbl;
    unsigned int v2 = gvar_8073390;
    unsigned int v3 = gvar_8073398;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 232);
        caml_young_ptr -= 232;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc();
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
    unsigned int v4 = gvar_80733B0;
    unsigned int v5 = gvar_80733B4;
    unsigned int v6 = gvar_80733B8;
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

int camlHashtbl__add_1074(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr1 = ptr1 - 1;
    int v5 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v5) {
        *ptr1 = v1;
        --ptr1;
        *ptr1 = v3;
        --ptr1;
        *ptr1 = 201;
        --ptr1;
        *ptr1 = 21;
        --ptr1;
        *ptr1 = &loc_8056122;
        int v6 = /*BAD_CALL!*/ caml_hash_univ_param(*(ptr1 + 1), *(ptr1 + 2));
        ptr1 += 3;
        v0 = (v6 >> 1) % v5;
    }
    else {
        --ptr1;
        *ptr1 = &loc_805613A;
        /*BAD_CALL!*/ caml_raise_exn();
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            --ptr1;
            *ptr1 = &loc_80561DE;
            /*BAD_CALL!*/ caml_call_gc();
        }
    }
    *ptr0 = 0xc00;
    *(ptr0 + 1) = v3;
    *(ptr0 + 2) = *ptr1;
    int v7 = *(int*)(v2 + 4);
    if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(v7 - 4) >>> 9)) {
        *(ptr0 + 3) = *(int*)((unsigned int)(v0 * 2 + 1) * 2 + v7 - 2);
        int v8 = *(int*)(v2 + 4);
        if((unsigned int)(v0 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
            --ptr1;
            *ptr1 = ptr0 + 1;
            --ptr1;
            *ptr1 = (unsigned int)(v0 * 2 + 1) * 2 + v8 - 2;
            --ptr1;
            *ptr1 = &loc_805619A;
            /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr1 + 1), *(unsigned int*)(ptr1 + 2));
            ptr1 += 2;
            *(int*)v2 = *(int*)v2 + 2;
            if(((*(int*)(*(int*)(v2 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v2) {
                ++ptr1;
                /*BAD_CALL!*/ camlHashtbl__resize_1061(v1, v4);
            }
            jump *(ptr1 + 1);
        }
        --ptr1;
        *ptr1 = &loc_80561E8;
        /*BAD_CALL!*/ caml_ml_array_bound_error();
    }
    --ptr1;
    *ptr1 = &loc_80561ED;
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__add_1179(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int* ptr2;
    int v2;
    int v3;
    int v4 = *(int*)(*(ptr2 + 1) - 4) >>> 10;
    if(v4) {
        int v5 = v4;
        int v6 = v2;
        v1 = param0;
        v0 = v3;
        ptr1 = ptr2;
        int v7 = **(unsigned int*)(*(int*)(*(int*)(v2 + 12) + 8) + 4)();
        param1 = ((v7 & 0x7fffffff) >> 1) % v5;
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
            caml_call_gc();
        }
    }
    *ptr0 = 0xc00;
    *(int*)(unsigned int)(ptr0 + 1) = v0;
    *(ptr0 + 2) = v1;
    int v8 = *(ptr1 + 1);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
        *(ptr0 + 3) = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v8 - 2);
        v8 = *(ptr1 + 1);
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
            caml_modify((unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v8 - 2), (unsigned int)(ptr0 + 1));
            *ptr1 = *ptr1 + 2;
            if(((*(int*)(*(ptr1 + 1) - 4) >>> 9) | 0x1) * 2 - 1 < *ptr1) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
        caml_ml_array_bound_error();
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__clear_1054() {
    unsigned int v0;
    int* ptr0;
    unsigned int v1 = 1;
    int v2 = ((*(int*)(*(ptr0 + 1) - 4) >>> 9) | 0x1) - 2;
    if(v2 >= 1) {
        do {
            int v3 = *(ptr0 + 1);
            if((unsigned int)(*(int*)(v3 - 4) >>> 9) <= v1) {
                goto loc_8055F6B;
            }
            else {
                caml_modify((unsigned int*)(v1 * 2 + v3 - 2), 1);
                v0 = v1;
                v1 += 2;
            }
            if(v0 == v2) {
                break;
            loc_8055F6B:
                /*BAD_CALL!*/ caml_ml_array_bound_error();
            }
        }
        while(1);
    }
    *ptr0 = 1;
    return 1;
}

int* camlHashtbl__copy_1057() {
    int* ptr0;
    int* ptr1;
    int v0 = camlArray__copy_1049();
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
    *(ptr0 + 1) = *ptr1;
    *(ptr0 + 2) = v0;
    return ptr0 + 1;
}

int* camlHashtbl__create_1051() {
    int* ptr0;
    camlPervasives__max_1025();
    int v0 = camlPervasives__min_1022();
    int v1 = caml_c_call();
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
    *(ptr0 + 1) = 1;
    *(ptr0 + 2) = v1;
    return ptr0 + 1;
}

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
    gvar_80733C0 = &camlHashtbl__16;
    camlHashtbl = &camlHashtbl__15;
    gvar_8073390 = &camlHashtbl__14;
    gvar_8073398 = &camlHashtbl__13;
    gvar_80733B8 = &camlHashtbl__12;
    gvar_80733C4 = &camlHashtbl__11;
    gvar_8073394 = &camlHashtbl__10;
    gvar_80733A8 = &camlHashtbl__9;
    gvar_80733C8 = &camlHashtbl__8;
    gvar_807339C = &camlHashtbl__7;
    gvar_80733A0 = &camlHashtbl__6;
    gvar_80733AC = &camlHashtbl__5;
    gvar_80733A4 = &camlHashtbl__4;
    gvar_80733B0 = &camlHashtbl__3;
    gvar_80733B4 = &camlHashtbl__2;
    gvar_80733BC = &camlHashtbl__1;
    return 1;
}

int camlHashtbl__find_1093(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    void* ptr2;
    void* ptr3;
    int v0;
    int v1 = *(int*)(*(int*)(v0 + 4) - 4) >>> 10;
    if(v1) {
        ptr2 = ptr3;
        int v2 = caml_hash_univ_param(21, 201);
        param1 = (v2 >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    int v3 = *(int*)(v0 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v3 - 4) >>> 9)) {
        unsigned int* ptr4 = *(unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v3 - 2);
        if(ptr4 != 1) {
            void* ptr5 = ptr3;
            unsigned int* ptr6 = *(ptr4 + 2);
            int result = *(int*)(ptr4 + 1);
            ptr2 = *ptr4;
            void* ptr7 = ptr3;
            int v4 = caml_c_call();
            if(v4 == 1) {
                return result;
            }
            unsigned int* ptr8 = ptr6;
            if(ptr8 != 1) {
                ptr6 = *(ptr8 + 2);
                result = *(int*)(ptr8 + 1);
                ptr2 = *ptr8;
                ptr7 = ptr5;
                int v5 = caml_c_call();
                if(v5 == 1) {
                    return result;
                }
                unsigned int* ptr9 = ptr6;
                if(ptr9 != 1) {
                    ptr6 = *(ptr9 + 2);
                    result = *(int*)(ptr9 + 1);
                    int v6 = caml_c_call();
                    if(v6 == 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1088();
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
            int* ptr10 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr10) {
                *ptr10 = 0x400;
                *(ptr10 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            caml_call_gc();
        }
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__find_1198(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int result;
    int v2;
    int v3;
    int v4 = *(int*)(*(int*)(v2 + 4) - 4) >>> 10;
    if(v4) {
        result = v4;
        v1 = param0;
        int v5 = v3;
        v0 = v2;
        int v6 = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((v6 & 0x7fffffff) >> 1) % result;
    }
    else {
        caml_raise_exn();
    }
    int v7 = *(int*)(v0 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v7 - 4) >>> 9)) {
        int v8 = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v7 - 2);
        if(v8 != 1) {
            v0 = *(int*)(v8 + 8);
            result = *(int*)(v8 + 4);
            caml_apply2(**(int***)(v1 + 12));
            if(v2 != 1) {
                return result;
            }
            int v9 = v0;
            if(v9 != 1) {
                v0 = *(int*)(v9 + 8);
                result = *(int*)(v9 + 4);
                caml_apply2(**(int***)(v1 + 12));
                if(v2 != 1) {
                    return result;
                }
                int v10 = v0;
                if(v10 != 1) {
                    v0 = *(int*)(v10 + 8);
                    result = *(int*)(v10 + 4);
                    caml_apply2(**(int***)(v1 + 12));
                    if(v2 != 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1193(*(int*)(v1 + 20));
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
            int* ptr2 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr2) {
                *ptr2 = 0x400;
                *(ptr2 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            caml_call_gc();
        }
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__find_all_1105(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    void* ptr1;
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
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__find_in_bucket_1108;
    *(ptr0 + 2) = 3;
    *(void**)(ptr0 + 3) = ptr1;
    int v1 = *(int*)(*(int*)(v0 + 4) - 4) >>> 10;
    if(v1) {
        void* ptr2 = ptr1;
        result = caml_hash_univ_param(21, 201);
        param1 = (result >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v0 + 4) - 4) >>> 9)) {
        camlHashtbl__find_in_bucket_1108();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__find_all_1210(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int v2;
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
    *(ptr0 + 1) = &camlHashtbl__find_in_bucket_1213;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(param0 + 12);
    *(ptr0 + 4) = v2;
    int v3 = *(int*)(*(int*)(v1 + 4) - 4) >>> 10;
    if(v3) {
        int v4 = v3;
        int* ptr1 = ptr0 + 1;
        v0 = v1;
        result = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((result & 0x7fffffff) >> 1) % v4;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(*(unsigned int*)(v0 + 4) - 1) >>> 9)) {
        camlHashtbl__find_in_bucket_1213();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int* camlHashtbl__find_in_bucket_1108() {
    int* ptr0;
    int* ptr1;
    int v0;
    while(ptr1 != 1) {
        int v1 = v0;
        int* ptr2 = *(unsigned int*)(ptr1 + 2);
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        void* ptr3 = *(void**)(v0 + 8);
        int v4 = v3;
        int v5 = caml_c_call();
        if(v5 == 1) {
            int v6 = camlHashtbl__find_in_bucket_1108();
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = v2;
                    *(ptr0 + 2) = v6;
                    return ptr0 + 1;
                }
                caml_call_gc();
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = v2;
            *(ptr0 + 2) = v6;
            return ptr0 + 1;
        }
        ptr1 = ptr2;
        v0 = v1;
    }
    return (int*)0x1;
}

int* camlHashtbl__find_in_bucket_1213() {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    while(v0 != 1) {
        int v3 = v2;
        int v4 = *(int*)(v0 + 8);
        int v5 = *(int*)(v0 + 4);
        caml_apply2(**(int***)(v2 + 8));
        if(v1 != 1) {
            int v6 = camlHashtbl__find_in_bucket_1213();
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = v5;
                    *(ptr0 + 2) = v6;
                    return ptr0 + 1;
                }
                caml_call_gc();
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = v5;
            *(ptr0 + 2) = v6;
            return ptr0 + 1;
        }
        v0 = v4;
        v2 = v3;
    }
    return (int*)0x1;
}

int camlHashtbl__find_rec_1088() {
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
        caml_call_gc();
    }
}

int camlHashtbl__find_rec_1193(int param0) {
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
        caml_call_gc();
    }
}

int camlHashtbl__fold_1138(unsigned int param0) {
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
            caml_call_gc();
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
    int* ptr1;
    if(ptr1 != 1) {
        int v1 = v0;
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        camlHashtbl__insert_bucket_1068();
        int v4 = v1;
        int v5 = *(int*)(v4 + 12) >> 1;
        if(v5) {
            int v6 = v5;
            v1 = v4;
            int v7 = **(unsigned int*)(v4 + 8)(v4);
            param1 = (v7 >> 1) % v6;
        }
        else {
            caml_raise_exn();
        }
        int v8 = *(int*)(v1 + 16);
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v8 - 4) >>> 9)) {
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
            *(int*)(unsigned int)(ptr0 + 1) = v3;
            *(ptr0 + 2) = v2;
            int v9 = *(int*)(v1 + 16);
            if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v9 - 4) >>> 9)) {
                *(ptr0 + 3) = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v9 - 2);
                caml_modify((unsigned int*)((unsigned int)(param1 * 2 + 1) * 2 + v8 - 2), (unsigned int)(ptr0 + 1));
                return 1;
            }
            caml_ml_array_bound_error();
        }
        /*BAD_CALL!*/ caml_ml_array_bound_error();
    }
    return 1;
}

int camlHashtbl__iter_1129() {
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
            caml_call_gc();
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

int camlHashtbl__mem_1122(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    void* ptr1;
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
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__mem_in_bucket_1125;
    *(ptr0 + 2) = 3;
    *(void**)(ptr0 + 3) = ptr1;
    int v1 = *(int*)(*(int*)(v0 + 4) - 4) >>> 10;
    if(v1) {
        void* ptr2 = ptr1;
        result = caml_hash_univ_param(21, 201);
        param1 = (result >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v0 + 4) - 4) >>> 9)) {
        camlHashtbl__mem_in_bucket_1125();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__mem_1227(int param0, int param1) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int v2;
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
    *(ptr0 + 1) = &camlHashtbl__mem_in_bucket_1230;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(param0 + 12);
    *(ptr0 + 4) = v2;
    int v3 = *(int*)(*(int*)(v1 + 4) - 4) >>> 10;
    if(v3) {
        int v4 = v3;
        int* ptr1 = ptr0 + 1;
        v0 = v1;
        result = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((result & 0x7fffffff) >> 1) % v4;
    }
    else {
        caml_raise_exn();
    }
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(*(unsigned int*)(v0 + 4) - 1) >>> 9)) {
        camlHashtbl__mem_in_bucket_1230();
        return result;
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

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

int camlHashtbl__remove_1080(int param0, int param1) {
    int* ptr0;
    int v0;
    void* ptr1;
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
    *(ptr0 + 1) = &camlHashtbl__remove_bucket_1083;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(void**)(ptr0 + 4) = ptr1;
    int v1 = *(int*)(*(int*)(v0 + 4) - 4) >>> 10;
    if(v1) {
        void* ptr2 = ptr1;
        int v2 = caml_hash_univ_param(21, 201);
        param1 = (v2 >> 1) % v1;
    }
    else {
        caml_raise_exn();
    }
    unsigned int v3 = (unsigned int)(param1 * 2 + 1);
    int* ptr3 = *(unsigned int*)(v0 + 4);
    int* ptr4 = *(unsigned int*)(v0 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(ptr3 - 1) >>> 9)) {
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(*(int*)(v0 + 4) - 4) >>> 9)) {
            int* ptr5 = camlHashtbl__remove_bucket_1083();
            caml_modify((unsigned int*)((char*)(v3 * 2 + (int)ptr4) - 2), (unsigned int)ptr5);
            return 1;
        }
        caml_ml_array_bound_error();
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

int camlHashtbl__remove_1185(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    int v2;
    unsigned int v3;
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
    *(ptr0 + 1) = &camlHashtbl__remove_bucket_1188;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(param0 + 12);
    *(unsigned int*)(ptr0 + 4) = v3;
    *(ptr0 + 5) = v2;
    unsigned int v4 = (unsigned int)(*(int*)(*(int*)(v3 + 4) - 4) >>> 10);
    if(v4) {
        v1 = v4;
        int* ptr1 = ptr0 + 1;
        v0 = v3;
        int v5 = **(unsigned int*)(*(int*)(*(int*)(param0 + 16) + 8) + 4)();
        param1 = ((v5 & 0x7fffffff) >> 1) % (int)v1;
    }
    else {
        caml_raise_exn();
    }
    v1 = (unsigned int)(param1 * 2 + 1);
    unsigned int v6 = v0;
    unsigned int v7 = *(unsigned int*)(v6 + 4);
    v0 = *(unsigned int*)(v6 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v7 - 4) >>> 9)) {
        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(*(unsigned int*)(v6 + 4) - 4) >>> 9)) {
            int* ptr2 = camlHashtbl__remove_bucket_1188();
            caml_modify((unsigned int*)(v1 * 2 + v0 - 2), (unsigned int)ptr2);
            return 1;
        }
        caml_ml_array_bound_error();
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

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
        int v6 = caml_c_call();
        if(v6 == 1) {
            int* ptr3 = *(unsigned int*)(v1 + 8);
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

int* camlHashtbl__remove_bucket_1188() {
    int* ptr0;
    int* ptr1;
    int v0;
    if(ptr1 != 1) {
        int v1 = v0;
        int* result = *(unsigned int*)(ptr1 + 2);
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        caml_apply2(**(int***)(v0 + 8));
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
    int v2;
    int v3;
    int v4;
    int* ptr0;
    unsigned int v5;
    int v6;
    int v7;
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
            caml_call_gc();
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &camlHashtbl__replace_bucket_1116;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v9;
    *(ptr0 + 4) = v10;
    unsigned int v12 = (unsigned int)(*(int*)(*(int*)(v11 + 4) - 4) >>> 10);
    if(v12) {
        v4 = (int)(ptr0 + 1);
        v3 = v10;
        v2 = v9;
        v1 = v11;
        void* ptr1 = (void*)v9;
        int v13 = caml_hash_univ_param(21, 201);
        param1 = (v13 >> 1) % (int)v12;
    }
    else {
        caml_raise_exn();
    }
    int v14 = param1 * 2 + 1;
    int v15 = *(int*)(v11 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v15 - 4) >>> 9)) {
        int v16 = sub_8056730(v1, v2, v3, *(int*)((param1 * 2 + 1) * 2 + v15 - 2), v4, v5, v14, v6);
        v15 = *(int*)v16;
        if(v15 == &caml_exn_Not_found) {
            v15 = v1;
            v0 = *(int*)(v15 + 4);
            param0 = v14;
            if((unsigned int)(*(int*)(v0 - 4) >>> 9) > (unsigned int)param0) {
                goto loc_80566A1;
            }
            else {
                caml_ml_array_bound_error();
                goto loc_805679C;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_805679C:
        caml_ml_array_bound_error();
        /*BAD_CALL!*/ camlHashtbl__mem_1122(v10, v8);
    loc_80566A1:
        int* ptr2 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr2) {
            *ptr2 = 0xc00;
            *(int*)(unsigned int)(ptr2 + 1) = v2;
            *(ptr2 + 2) = v3;
            *(ptr2 + 3) = v7;
            caml_modify((unsigned int*)(param0 * 2 + v0 - 2), (unsigned int)(ptr2 + 1));
            *(int*)v15 = *(int*)v15 + 2;
            if(((*(int*)(*(int*)(v15 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v15) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc();
    goto loc_80566A1;
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
    int* ptr0;
    int v8;
    unsigned int v9;
    int v10;
    unsigned int v11;
    int v12;
    int v13;
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
    *(int*)(int)(ptr0 + 1) = &camlHashtbl__replace_bucket_1221;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(v10 + 12);
    *(ptr0 + 4) = v13;
    *(ptr0 + 5) = v12;
    int v14 = *(int*)(*(int*)(v9 + 4) - 4) >>> 10;
    if(v14) {
        v7 = v14;
        v6 = (int)(ptr0 + 1);
        v5 = v10;
        v4 = v12;
        v3 = v13;
        v2 = (int)v9;
        int v15 = **(unsigned int*)(*(int*)(*(int*)(v10 + 16) + 8) + 4)((int)v9, v4, v7, v5, v6);
        param1 = ((v15 & 0x7fffffff) >> 1) % v7;
    }
    else {
        caml_raise_exn();
    }
    int v16 = param1 * 2 + 1;
    int v17 = *(int*)(v2 + 4);
    if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v17 - 4) >>> 9)) {
        int v18 = sub_8055D50(v2, v4, *(int*)((param1 * 2 + 1) * 2 + v17 - 2), v5, v6, v11, v16, v3, v8);
        v1 = *(int*)v18;
        if(v1 == &caml_exn_Not_found) {
            v1 = v2;
            v0 = *(int*)(v1 + 4);
            param0 = v16;
            if((unsigned int)(*(int*)(v0 - 4) >>> 9) > (unsigned int)param0) {
                goto loc_8055CC4;
            }
            else {
                caml_ml_array_bound_error();
                goto loc_8055DBC;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_8055DBC:
        caml_ml_array_bound_error();
        /*BAD_CALL!*/ camlHashtbl__mem_1227(v12, v10);
    loc_8055CC4:
        int* ptr1 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr1) {
            *ptr1 = 0xc00;
            *(int*)(unsigned int)(ptr1 + 1) = v3;
            *(ptr1 + 2) = v4;
            *(ptr1 + 3) = v7;
            caml_modify((unsigned int*)(param0 * 2 + v0 - 2), (unsigned int)(ptr1 + 1));
            *(int*)v1 = *(int*)v1 + 2;
            if(((*(int*)(*(int*)(v1 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v1) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc();
    goto loc_8055CC4;
}

int* camlHashtbl__replace_bucket_1116() {
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
                    caml_call_gc();
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
                caml_call_gc();
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
        caml_call_gc();
    }
}

int* camlHashtbl__replace_bucket_1221() {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int v0;
    if(ptr2 != 1) {
        int v1 = v0;
        int v2 = *(ptr2 + 2);
        int v3 = *(ptr2 + 1);
        int v4 = *ptr2;
        caml_apply2(**(int***)(v0 + 8));
        if(ptr2 != 1) {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 16);
                caml_young_ptr -= 16;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc();
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
                caml_call_gc();
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
        caml_call_gc();
    }
}

int camlHashtbl__resize_1061(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    unsigned int* ptr2;
    unsigned int v0;
    int v1;
    int v2;
    int v3;
camlHashtbl__resize_1061:
    while(1) {
        ptr2 = ptr2 - 6;
        *ptr2 = v0;
        *(int*)(ptr2 + 4) = v2;
        int v4 = *(int*)(v2 + 4);
        *(int*)(ptr2 + 5) = *(int*)(v2 + 4);
        *(int*)(ptr2 + 2) = (*(int*)(v4 - 4) >>> 9) | 0x1;
        --ptr2;
        *ptr2 = &loc_8056002;
        int v5 = /*BAD_CALL!*/ camlPervasives__min_1022();
        int v6 = *(int*)(ptr2 + 2);
        if(v5 == v6) {
            break;
        }
        else {
            *(int*)(ptr2 + 1) = v5;
            *(int*)(ptr2 + 2) = v6;
            --ptr2;
            *ptr2 = 1;
            --ptr2;
            *ptr2 = v5;
            --ptr2;
            *ptr2 = &loc_8056023;
            int v7 = /*BAD_CALL!*/ caml_c_call();
            ptr2 += 2;
            *(int*)(ptr2 + 3) = v7;
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    --ptr2;
                    *ptr2 = &loc_80560EE;
                    /*BAD_CALL!*/ caml_call_gc();
                }
            }
            *ptr1 = 5367;
            *(ptr1 + 1) = &camlHashtbl__insert_bucket_1068;
            *(ptr1 + 2) = 3;
            *(ptr1 + 3) = *ptr2;
            *(ptr1 + 4) = *(int*)(ptr2 + 1);
            *(ptr1 + 5) = v7;
            unsigned int v8 = 1;
            v6 = *(int*)(ptr2 + 2) - 2;
            if(v6 >= 1) {
                *(int*)(ptr2 + 2) = v6;
                *(int*)(ptr2 + 1) = 1;
                *ptr2 = ptr1 + 1;
                do {
                    int v9 = *(int*)(ptr2 + 5);
                    int v10 = *(int*)(v9 - 4) >>> 9;
                    --ptr2;
                    if(v8 < (unsigned int)v10) {
                        *ptr2 = &loc_80560A1;
                        /*BAD_CALL!*/ camlHashtbl__insert_bucket_1068(v10, v1);
                        int v11 = *(int*)(ptr2 + 1);
                        v8 = (unsigned int)(v11 + 2);
                        *(ptr2 + 1) = (unsigned int)(v11 + 2);
                        if(*(int*)(ptr2 + 2) == v11) {
                            break;
                        }
                    }
                    else {
                        *ptr2 = &loc_80560F8;
                        int v12 = /*BAD_CALL!*/ caml_ml_array_bound_error();
                        --ptr2;
                        int v13 = *(int*)(*(int*)(v12 + 4) - 4) >>> 10;
                        if(v13) {
                            *ptr2 = v3;
                            --ptr2;
                            *ptr2 = v9;
                            --ptr2;
                            *ptr2 = 201;
                            --ptr2;
                            *ptr2 = 21;
                            --ptr2;
                            *ptr2 = &loc_8056122;
                            int v14 = /*BAD_CALL!*/ caml_hash_univ_param(*(int*)(ptr2 + 1), *(int*)(ptr2 + 2));
                            ptr2 += 3;
                            param1 = (v14 >> 1) % v13;
                        }
                        else {
                            --ptr2;
                            *ptr2 = &loc_805613A;
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
                                *ptr2 = &loc_80561DE;
                                /*BAD_CALL!*/ caml_call_gc();
                            }
                        }
                        *ptr0 = 0xc00;
                        *(ptr0 + 1) = v9;
                        *(ptr0 + 2) = *ptr2;
                        int v15 = *(int*)(v12 + 4);
                        if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v15 - 4) >>> 9)) {
                            *(ptr0 + 3) = *(int*)((unsigned int)(param1 * 2 + 1) * 2 + v15 - 2);
                            int v16 = *(int*)(v12 + 4);
                            if((unsigned int)(param1 * 2 + 1) < (unsigned int)(*(int*)(v16 - 4) >>> 9)) {
                                --ptr2;
                                *ptr2 = ptr0 + 1;
                                --ptr2;
                                *ptr2 = (unsigned int)(param1 * 2 + 1) * 2 + v16 - 2;
                                --ptr2;
                                *ptr2 = &loc_805619A;
                                /*BAD_CALL!*/ caml_modify(*(unsigned int**)(ptr2 + 1), *(ptr2 + 2));
                                ptr2 += 2;
                                *(int*)v12 = *(int*)v12 + 2;
                                if(((*(int*)(*(int*)(v12 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < *(int*)v12) {
                                    v0 = gvar_80733C0;
                                    v2 = v12;
                                    ++ptr2;
                                    continue camlHashtbl__resize_1061;
                                }
                                else {
                                    jump *(int*)(ptr2 + 1);
                                }
                            }
                            --ptr2;
                            *ptr2 = &loc_80561E8;
                            /*BAD_CALL!*/ caml_ml_array_bound_error();
                        }
                        --ptr2;
                        *ptr2 = &loc_80561ED;
                        /*BAD_CALL!*/ caml_ml_array_bound_error();
                    }
                }
                while(1);
            }
            int v17 = *(int*)(ptr2 + 3);
            --ptr2;
            *ptr2 = v17;
            int v18 = *(int*)(ptr2 + 5) + 4;
            --ptr2;
            *ptr2 = v18;
            --ptr2;
            *ptr2 = &loc_80560C8;
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

int camlList__assoc_1169() {
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
        caml_call_gc();
    }
}

int camlList__assq_1174() {
    int v0;
    unsigned int* ptr0;
    while(ptr0 != 1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        int* ptr2 = *ptr0;
        int result = *(ptr2 + 1);
        if(*ptr2 == v0) {
            return result;
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
        caml_call_gc();
    }
}

int camlList__chop_1243() {
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
                caml_call_gc();
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
    if(ptr0 != 1) {
        if(ptr1 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
            caml_call_gc();
        }
        else {
            v0 = camlList__combine_1226(*ptr0, *ptr1);
        }
        goto loc_805485E;
    }
    if(ptr1 == 1) {
        return (unsigned int*)0x1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    caml_call_gc();
loc_805485E:
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
    caml_call_gc();
    goto loc_805485E;
}

int camlList__entry() {
    gvar_8072754 = &camlList__38;
    camlList = &camlList__37;
    gvar_80726B4 = &camlList__36;
    gvar_80726B8 = &camlList__35;
    gvar_80726BC = &camlList__34;
    gvar_80726C4 = gvar_8070A04;
    gvar_80726C8 = &camlList__33;
    gvar_80726C0 = &camlList__32;
    gvar_80726D0 = &camlList__31;
    gvar_80726CC = gvar_80726D0;
    gvar_80726D8 = &camlList__30;
    gvar_80726DC = &camlList__29;
    gvar_80726D4 = &camlList__28;
    gvar_80726E0 = &camlList__27;
    gvar_80726E4 = &camlList__26;
    gvar_80726EC = &camlList__25;
    gvar_80726F0 = &camlList__24;
    gvar_80726E8 = &camlList__23;
    gvar_80726F4 = &camlList__22;
    gvar_80726F8 = &camlList__21;
    gvar_80726FC = &camlList__20;
    gvar_8072700 = &camlList__19;
    gvar_8072704 = &camlList__18;
    gvar_8072708 = &camlList__17;
    gvar_807270C = &camlList__16;
    gvar_8072710 = &camlList__15;
    gvar_8072724 = &camlList__14;
    gvar_8072728 = &camlList__13;
    gvar_807272C = &camlList__12;
    gvar_8072730 = &camlList__11;
    gvar_8072734 = &camlList__10;
    gvar_8072738 = &camlList__9;
    gvar_8072714 = &camlList__8;
    gvar_807271C = &camlList__7;
    gvar_8072718 = gvar_807271C;
    gvar_8072720 = &camlList__6;
    gvar_807273C = &camlList__5;
    gvar_8072740 = &camlList__4;
    gvar_8072750 = &camlList__3;
    gvar_8072758 = &camlList__2;
    gvar_8072748 = &camlList__1;
    gvar_8072744 = gvar_8072748;
    gvar_807274C = gvar_8072748;
    return 1;
}

int camlList__exists2_1153(int* param0) {
    int v0;
    int v1;
    int* ptr0;
    while(v1 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        }
        int* ptr1 = ptr0;
        int* ptr2 = *(unsigned int*)(param0 + 1);
        int v2 = *(int*)(v1 + 4);
        caml_apply2(ptr0);
        if(v0 != 1) {
            return 3;
        }
        ptr0 = ptr1;
        v1 = v2;
        param0 = ptr2;
    }
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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

int camlList__find_1201() {
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int result = *ptr1;
        int v0 = *ptr0();
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
        caml_call_gc();
    }
}

int camlList__find_1207(int param0) {
    int result;
    int* ptr0;
    int* ptr1;
loc_8052FD6:
    while(ptr1 != 1) {
        int v0 = param0;
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int v1 = *ptr1;
        result = **(unsigned int*)(param0 + 12)(*ptr1, (int)ptr2, (int)ptr3, v0);
        if(result == 1) {
            ptr0 = ptr2;
            ptr1 = ptr3;
            param0 = v0;
        }
        else {
            while(1) {
                unsigned int v2 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v2) {
                loc_805300D:
                    ptr0 = (int*)(v2 + 4);
                    *(ptr0 - 1) = 0x800;
                    *ptr0 = v1;
                    *(unsigned int*)(ptr0 + 1) = ptr2;
                    ptr1 = ptr3;
                    param0 = v0;
                    continue loc_8052FD6;
                }
                else {
                    caml_call_gc();
                }
            }
            goto loc_805300D;
        }
    }
    camlList__rev_append_1051();
    return result;
}

int camlList__find_all_1205() {
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
            result = caml_call_gc();
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

int camlList__fold_left2_1119(int param0, int* param1) {
    int result;
    int v0;
    int* ptr0;
    while(param0 != 1) {
        if(param1 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        }
        int* ptr1 = ptr0;
        int* ptr2 = *(unsigned int*)(param1 + 1);
        int v1 = *param1;
        int v2 = *(int*)(param0 + 4);
        caml_apply3(v1, ptr0);
        result = v0;
        ptr0 = ptr1;
        param0 = v2;
        param1 = ptr2;
    }
    if(param1 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    }
    return result;
}

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
    unsigned int* ptr2;
    int result1;
    if(ptr1 != 1) {
        if(ptr2 != 1) {
            int* ptr3 = ptr0;
            int* ptr4 = *ptr2;
            int result = camlList__fold_right2_1128(*ptr1, *ptr2, (int)ptr0);
            caml_apply3(result, ptr0);
            return result;
        }
    }
    else if(ptr2 == 1) {
        return result1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int* camlList__fold_right_1084(int param0) {
    int* ptr0;
    int* ptr1;
    int result1;
    if(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* result = (int*)camlList__fold_right_1084(*ptr1, (int)ptr0);
        caml_apply2(ptr2);
        return result;
    }
    return result1;
}

int camlList__for_all2_1145(int* param0) {
    int v0;
    int v1;
    int* ptr0;
    while(v1 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        }
        int* ptr1 = ptr0;
        int* ptr2 = *(unsigned int*)(param0 + 1);
        int v2 = *(int*)(v1 + 4);
        caml_apply2(ptr0);
        if(v0 != 1) {
            ptr0 = ptr1;
            v1 = v2;
            param0 = ptr2;
        }
        else {
            return 1;
        }
    }
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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

int camlList__hd_1036() {
    int* ptr0;
    if(ptr0 == 1) {
        /*NO_RETURN*/ camlPervasives__failwith_1010();
    }
    return *ptr0;
}

int camlList__iter2_1111(int param0) {
    int v0;
    int* ptr0;
    while(v0 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        }
        int* ptr1 = ptr0;
        int v1 = *(int*)(param0 + 4);
        int v2 = *(int*)(v0 + 4);
        caml_apply2(ptr0);
        ptr0 = ptr1;
        v0 = v2;
        param0 = v1;
    }
    if(param0 != 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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

unsigned int* camlList__map2_1090(int param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    if(ptr2 != 1) {
        if(param0 == 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
            caml_call_gc();
        }
        else {
            int* ptr3 = ptr1;
            int v0 = *(int*)(param0 + 4);
            int v1 = ptr2[1];
            caml_apply2(ptr1);
            ptr0 = ptr1;
            param0 = camlList__map2_1090();
        }
        goto loc_8053FF8;
    }
    if(param0 == 1) {
        return (unsigned int*)0x1;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    caml_call_gc();
loc_8053FF8:
    int* ptr4 = (int*)(caml_young_ptr - 12);
    caml_young_ptr -= 12;
    if(caml_young_limit <= (unsigned int)ptr4) {
        *ptr4 = 0x800;
        *(int**)(ptr4 + 1) = ptr0;
        *(ptr4 + 2) = param0;
        return (unsigned int*)(ptr4 + 1);
    }
    caml_call_gc();
    goto loc_8053FF8;
}

int* camlList__map_1062() {
    int* ptr0;
    int* ptr1;
    int v0;
    if(v0 != 1) {
        int* ptr2 = ptr1;
        int v1 = *(int*)(v0 + 4);
        int v2 = *ptr1((int)ptr2, *(int*)(v0 + 4));
        int v3 = camlList__map_1062();
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
        *(ptr0 + 1) = v2;
        *(ptr0 + 2) = v3;
        return ptr0 + 1;
    }
    return (int*)0x1;
}

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
    int* ptr2;
    int* result;
    if(result == 1) {
        return param0;
    }
    else if(param0 != 1) {
        int* ptr3 = param0;
        int* ptr4 = result;
        int* ptr5 = ptr2;
        int v0 = *(param0 + 1);
        int v1 = *param0;
        int v2 = *(result + 1);
        int v3 = *result;
        caml_apply2(ptr5);
        if((int)ptr2 <= 1) {
            param0 = (int*)camlList__merge_1233();
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            *ptr1 = 0x800;
            *(ptr1 + 1) = v3;
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
                caml_call_gc();
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v1;
        *(unsigned int*)(ptr0 + 2) = param0;
        return ptr0 + 1;
    }
    return result;
}

int camlList__nth_1042() {
    int v0;
    if(v0 < 1) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    }
    return camlList__nth_aux_1045();
}

int camlList__nth_aux_1045() {
    int* ptr0;
    int v0;
    while(ptr0 != 1) {
        int* ptr1 = *(unsigned int*)(ptr0 + 1);
        int result = *ptr0;
        if(v0 == 1) {
            return result;
        }
        v0 -= 2;
        ptr0 = ptr1;
    }
    /*NO_RETURN*/ camlPervasives__failwith_1010();
}

unsigned int* camlList__part_1215(unsigned int* param0, int param1) {
    int* ptr0;
    unsigned int v0;
    unsigned int v1;
    int* ptr1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    for(unsigned int* i = ptr2; param0 != 1; i = ptr2) {
        int v2 = param1;
        unsigned int* ptr4 = ptr3;
        unsigned int* ptr5 = *(param0 + 1);
        ptr1 = *param0;
        int v3 = **(unsigned int*)(param1 + 12)(*param0);
        if(v3 != 1) {
            while(1) {
                v1 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v1) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            ptr2 = (unsigned int*)(v1 + 4);
            *(int*)(ptr2 - 1) = 0x800;
            *ptr2 = ptr1;
            *(ptr2 + 1) = i;
            ptr3 = ptr4;
        }
        else {
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
            ptr3 = (unsigned int*)(v0 + 4);
            *(int*)(ptr3 - 1) = 0x800;
            *ptr3 = ptr1;
            *(ptr3 + 1) = ptr4;
            ptr2 = i;
        }
        param0 = ptr5;
        param1 = v2;
    }
    ptr1 = camlList__rev_append_1051();
    int* ptr6 = camlList__rev_append_1051();
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
    *(int**)(ptr0 + 1) = ptr6;
    *(int**)(ptr0 + 2) = ptr1;
    return (unsigned int*)(ptr0 + 1);
}

int camlList__partition_1212() {
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
            result = caml_call_gc();
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
    if(ptr2 != 1) {
        void* ptr3 = ptr1;
        unsigned int* result = *(ptr2 + 1);
        unsigned int* ptr4 = *ptr2;
        int v0 = caml_c_call();
        if(v0 == 1) {
            return result;
        }
        int v1 = camlList__remove_assoc_1189();
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
        *(unsigned int*)(ptr0 + 1) = ptr4;
        *(ptr0 + 2) = v1;
        return (unsigned int*)(ptr0 + 1);
    }
    return (unsigned int*)0x1;
}

unsigned int* camlList__remove_assq_1195() {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    unsigned int* ptr2;
    if(ptr2 != 1) {
        unsigned int* result = *(ptr2 + 1);
        int* ptr3 = *ptr2;
        if(*ptr3 == v0) {
            return result;
        }
        int v1 = camlList__remove_assq_1195((int)ptr3);
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
        *(ptr0 + 2) = v1;
        return (unsigned int*)(ptr0 + 1);
    }
    return (unsigned int*)0x1;
}

int* camlList__rev_1056() {
    return camlList__rev_append_1051();
}

int* camlList__rev_append_1051() {
    int* ptr0;
    int* ptr1;
    int* result;
    while(ptr1 != 1) {
        int* ptr2 = *(unsigned int*)(ptr1 + 1);
        int v0 = *ptr1;
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
        *(ptr0 + 1) = v0;
        *(unsigned int*)(ptr0 + 2) = result;
        ptr1 = ptr2;
        result = ptr0 + 1;
    }
    return result;
}

int camlList__rev_map2_1099(int* param0) {
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
            result = caml_call_gc();
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

int camlList__rev_map_1067() {
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
            result = caml_call_gc();
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
    unsigned int v1;
    int* ptr0;
    int* ptr1;
    int v2;
    while(ptr0 != 1) {
        if(ptr1 != 1) {
            int v3 = param1;
            int* ptr2 = param0;
            int* ptr3 = ptr1;
            int* ptr4 = ptr0;
            int* ptr5 = *(unsigned int*)(ptr1 + 1);
            int v4 = *ptr1;
            int* ptr6 = *(unsigned int*)(ptr0 + 1);
            int v5 = *ptr0;
            caml_apply2(*(int**)(param1 + 12));
            if(v2 <= 1) {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                param0 = (int*)(v1 + 4);
                *(param0 - 1) = 0x800;
                *param0 = v5;
                *(unsigned int*)(param0 + 1) = ptr2;
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
                        caml_call_gc();
                    }
                }
                param0 = (int*)(v0 + 4);
                *(param0 - 1) = 0x800;
                *param0 = v4;
                *(unsigned int*)(param0 + 1) = ptr2;
                ptr0 = ptr4;
                ptr1 = ptr5;
            }
            param1 = v3;
        }
        else {
            camlList__rev_append_1051();
            return (int)ptr0;
        }
    }
    int* ptr7 = camlList__rev_append_1051();
    return (int)ptr7;
}

int camlList__rev_merge_rev_1261(int* param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    int* ptr1;
    int v2;
    while(ptr0 != 1) {
        if(ptr1 != 1) {
            int v3 = param1;
            int* ptr2 = param0;
            int* ptr3 = ptr1;
            int* ptr4 = ptr0;
            int* ptr5 = *(unsigned int*)(ptr1 + 1);
            int v4 = *ptr1;
            int* ptr6 = *(unsigned int*)(ptr0 + 1);
            int v5 = *ptr0;
            caml_apply2(*(int**)(param1 + 12));
            if(v2 > 1) {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                param0 = (int*)(v1 + 4);
                *(param0 - 1) = 0x800;
                *param0 = v5;
                *(unsigned int*)(param0 + 1) = ptr2;
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
                        caml_call_gc();
                    }
                }
                param0 = (int*)(v0 + 4);
                *(param0 - 1) = 0x800;
                *param0 = v4;
                *(unsigned int*)(param0 + 1) = ptr2;
                ptr0 = ptr4;
                ptr1 = ptr5;
            }
            param1 = v3;
        }
        else {
            camlList__rev_append_1051();
            return (int)ptr0;
        }
    }
    int* ptr7 = camlList__rev_append_1051();
    return (int)ptr7;
}

int camlList__rev_sort_1272(int param0) {
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
    unsigned int* ptr9;
    if(result != 5) {
        v2 = param0;
        if(result == 7 && ptr9 != 1) {
            unsigned int* ptr10 = *(ptr9 + 1);
            if(ptr10 != 1) {
                int* ptr11 = *(ptr10 + 1);
                if(ptr11 != 1) {
                    v1 = *ptr11;
                    ptr8 = *ptr10;
                    v0 = *ptr9;
                    caml_apply2(*(int**)(param0 + 12));
                    if(result > 1) {
                        caml_apply2(*(int**)(v2 + 12));
                        if(result > 1) {
                            while(1) {
                                ptr7 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr7) {
                                    break;
                                }
                                else {
                                    caml_call_gc();
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
                        caml_apply2(*(int**)(v2 + 12));
                        if(result > 1) {
                            while(1) {
                                ptr6 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr6) {
                                    break;
                                }
                                else {
                                    caml_call_gc();
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
                                caml_call_gc();
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
                    caml_apply2(*(int**)(v2 + 12));
                    if(result > 1) {
                        while(1) {
                            ptr4 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr4) {
                                break;
                            }
                            else {
                                caml_call_gc();
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
                    caml_apply2(*(int**)(v2 + 12));
                    if(result > 1) {
                        while(1) {
                            ptr3 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr3) {
                                break;
                            }
                            else {
                                caml_call_gc();
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
                            caml_call_gc();
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
            int* ptr12 = *(ptr9 + 1);
            if(ptr12 != 1) {
                v1 = *ptr12;
                ptr8 = *ptr9;
                caml_apply2(*(int**)(param0 + 12));
                if(result > 1) {
                    while(1) {
                        ptr1 = (int*)(caml_young_ptr - 24);
                        caml_young_ptr -= 24;
                        if(caml_young_limit <= (unsigned int)ptr1) {
                            break;
                        }
                        else {
                            caml_call_gc();
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
                        caml_call_gc();
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
    int v3 = camlList__chop_1243();
    v1 = camlList__sort_1271(v2 - 16);
    camlList__sort_1271(v2 - 16);
    return camlList__rev_merge_1251((int*)0x1, *(int*)(v2 + 16));
}

int* camlList__rmap2_f_1103(int* param0, int param1) {
    int v0;
    int v1;
    int* ptr0;
    int* ptr1;
    int v2;
    int v3;
    int* result;
    int v4;
loc_8052F36:
    if(v3 != 1) {
        if(param0 != 1) {
            v2 = param1;
            ptr1 = result;
            ptr0 = *(unsigned int*)(param0 + 1);
            v1 = *(int*)(v3 + 4);
            caml_apply2(*(int**)(param1 + 12));
            v0 = v4;
            goto loc_8052F67;
        }
    }
    else if(param0 == 1) {
        return result;
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    caml_call_gc();
loc_8052F67:
    unsigned int v5 = caml_young_ptr - 12;
    caml_young_ptr -= 12;
    if(caml_young_limit <= v5) {
        result = (int*)(v5 + 4);
        *(result - 1) = 0x800;
        *result = v0;
        *(unsigned int*)(result + 1) = ptr1;
        v3 = v1;
        param0 = ptr0;
        param1 = v2;
        goto loc_8052F36;
    }
    else {
        caml_call_gc();
        goto loc_8052F67;
    }
}

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
int camlList__sort_1271(int param0) {
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
    unsigned int* ptr9;
    if(result != 5) {
        v2 = param0;
        if(result == 7 && ptr9 != 1) {
            unsigned int* ptr10 = *(ptr9 + 1);
            if(ptr10 != 1) {
                int* ptr11 = *(ptr10 + 1);
                if(ptr11 != 1) {
                    v1 = *ptr11;
                    ptr8 = *ptr10;
                    v0 = *ptr9;
                    caml_apply2(*(int**)(param0 + 28));
                    if(result <= 1) {
                        caml_apply2(*(int**)(v2 + 28));
                        if(result <= 1) {
                            while(1) {
                                ptr7 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr7) {
                                    break;
                                }
                                else {
                                    caml_call_gc();
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
                        caml_apply2(*(int**)(v2 + 28));
                        if(result <= 1) {
                            while(1) {
                                ptr6 = (int*)(caml_young_ptr - 36);
                                caml_young_ptr -= 36;
                                if(caml_young_limit <= (unsigned int)ptr6) {
                                    break;
                                }
                                else {
                                    caml_call_gc();
                                }
                            }
                            *ptr6 = 0x800;
                            *(unsigned int*)(ptr6 + 1) = ptr8;
                            *(ptr6 + 2) = 1;
                            *(ptr6 + 3) = 0x800;
                            *(unsigned int*)(ptr6 + 4) = v1;
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
                                caml_call_gc();
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
                    caml_apply2(*(int**)(v2 + 28));
                    if(result <= 1) {
                        while(1) {
                            ptr4 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr4) {
                                break;
                            }
                            else {
                                caml_call_gc();
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
                    caml_apply2(*(int**)(v2 + 28));
                    if(result <= 1) {
                        while(1) {
                            ptr3 = (int*)(caml_young_ptr - 36);
                            caml_young_ptr -= 36;
                            if(caml_young_limit <= (unsigned int)ptr3) {
                                break;
                            }
                            else {
                                caml_call_gc();
                            }
                        }
                        *ptr3 = 0x800;
                        *(ptr3 + 1) = v0;
                        *(ptr3 + 2) = 1;
                        *(ptr3 + 3) = 0x800;
                        *(unsigned int*)(ptr3 + 4) = v1;
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
                            caml_call_gc();
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
            int* ptr12 = *(ptr9 + 1);
            if(ptr12 != 1) {
                v1 = *ptr12;
                ptr8 = *ptr9;
                caml_apply2(*(int**)(param0 + 28));
                if(result <= 1) {
                    while(1) {
                        ptr1 = (int*)(caml_young_ptr - 24);
                        caml_young_ptr -= 24;
                        if(caml_young_limit <= (unsigned int)ptr1) {
                            break;
                        }
                        else {
                            caml_call_gc();
                        }
                    }
                    *ptr1 = 0x800;
                    *(unsigned int*)(ptr1 + 1) = v1;
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
                        caml_call_gc();
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
    int v3 = camlList__chop_1243();
    v1 = camlList__rev_sort_1272(v2 + 16);
    camlList__rev_sort_1272(v2 + 16);
    return camlList__rev_merge_rev_1261((int*)0x1, *(int*)(v2 + 36));
}

unsigned int* camlList__split_1220(int param0) {
    int* ptr0;
    int v0;
    int v1;
    unsigned int* ptr1;
    if(ptr1 != 1) {
        int* ptr2 = *ptr1;
        int* ptr3 = (int*)camlList__split_1220(*(ptr2 + 1), *ptr2);
        int v2 = *(ptr3 + 1);
        int v3 = *ptr3;
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 36);
            caml_young_ptr -= 36;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v0;
        *(ptr0 + 2) = v2;
        *(ptr0 + 3) = 0x800;
        *(ptr0 + 4) = v1;
        *(ptr0 + 5) = v3;
        *(ptr0 + 6) = 0x800;
        *(unsigned int*)(ptr0 + 7) = ptr0 + 4;
        *(unsigned int*)(ptr0 + 8) = ptr0 + 1;
        return (unsigned int*)(ptr0 + 7);
    }
    return (unsigned int*)&camlList__41;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__stable_sort_1248() {
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
            caml_call_gc();
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

int camlList__tl_1039() {
    int v0;
    if(v0 == 1) {
        /*NO_RETURN*/ camlPervasives__failwith_1010();
    }
    return *(int*)(v0 + 4);
}

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

int camlPervasives__$5e$5e_1312() {
    camlPervasives__$5e_1112();
    return camlPervasives__$5e_1112();
}

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

int camlPervasives__at_exit_1322() {
    int* ptr0;
    int v0;
    int v1 = *gvar_8070AF8;
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
    *(int*)(unsigned int)(ptr0 + 1) = &camlPervasives__fun_1500;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    caml_modify(gvar_8070AF8, (unsigned int)(ptr0 + 1));
    return 1;
}

int camlPervasives__bool_of_string_1129() {
    int* ptr0;
    int v0 = caml_string_notequal(ptr0, "false");
    if(v0 != 1) {
        int v1 = caml_string_notequal(ptr0, "true");
        if(v1 != 1) {
            /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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

int camlPervasives__char_of_int_1120() {
    int result;
    if((result < 1 || result > 0x1ff)) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    }
    return result;
}

int camlPervasives__close_in_noerr_1263() {
    int v0;
    sub_804F770(v0);
    return 1;
}

int camlPervasives__close_out_1209() {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__close_out_noerr_1211() {
    int v0;
    int v1;
    int v2;
    sub_804F500(v2, v0);
    sub_804F540(v1, v0);
    return 1;
}

int camlPervasives__do_at_exit_1325() {
    jump **gvar_8070AF8;
}

int camlPervasives__entry(int param0, int param1) {
    gvar_8070AD0 = &camlPervasives__84;
    gvar_8070AC8 = &camlPervasives__83;
    gvar_8070AC4 = &camlPervasives__82;
    gvar_8070AC0 = &camlPervasives__81;
    gvar_8070ABC = &camlPervasives__80;
    gvar_8070AB8 = &camlPervasives__79;
    gvar_8070AB4 = &camlPervasives__78;
    gvar_8070AB0 = &camlPervasives__77;
    gvar_8070AA0 = &camlPervasives__76;
    gvar_8070A90 = &camlPervasives__75;
    gvar_8070A84 = &camlPervasives__74;
    gvar_8070A80 = &camlPervasives__73;
    gvar_8070A7C = &camlPervasives__72;
    gvar_8070A74 = &camlPervasives__71;
    gvar_8070A70 = &camlPervasives__70;
    gvar_8070A64 = &camlPervasives__69;
    gvar_8070A5C = &camlPervasives__68;
    gvar_80709B4 = &camlPervasives__67;
    camlPervasives = &camlPervasives__66;
    int v0 = caml_alloc1(param0, param1);
    *(int*)v0 = 0x400;
    *(int*)(v0 + 4) = "Pervasives.Exit";
    gvar_80709B8 = (int*)(v0 + 4);
    gvar_80709BC = &camlPervasives__64;
    gvar_80709C0 = &camlPervasives__63;
    gvar_80709C4 = &camlPervasives__62;
    gvar_80709D0 = &camlPervasives__61;
    gvar_80709CC = 0x80000001;
    gvar_80709C8 = 0x7fffffff;
    int v1 = caml_c_call();
    gvar_80709D4 = v1;
    int v2 = caml_c_call();
    gvar_80709D8 = v2;
    int v3 = caml_c_call();
    gvar_80709DC = v3;
    int v4 = caml_c_call();
    gvar_80709E0 = v4;
    int v5 = caml_c_call();
    gvar_80709E4 = v5;
    int v6 = caml_c_call();
    gvar_80709E8 = v6;
    gvar_80709EC = &camlPervasives__54;
    gvar_80709F0 = &camlPervasives__53;
    gvar_80709F4 = &camlPervasives__52;
    gvar_80709F8 = &camlPervasives__51;
    gvar_80709FC = &camlPervasives__50;
    gvar_8070AF4 = &camlPervasives__49;
    gvar_8070AE8 = &camlPervasives__48;
    gvar_8070A00 = &camlPervasives__47;
    gvar_8070A04 = &camlPervasives__46;
    int v7 = caml_c_call();
    gvar_8070A08 = v7;
    int v8 = caml_c_call();
    gvar_8070A0C = v8;
    int v9 = caml_c_call();
    gvar_8070A10 = v9;
    gvar_8070A58 = &camlPervasives__45;
    gvar_8070A50 = &camlPervasives__44;
    gvar_8070A54 = &camlPervasives__43;
    gvar_8070A60 = &camlPervasives__42;
    gvar_8070A68 = &camlPervasives__41;
    gvar_8070A6C = &camlPervasives__40;
    gvar_8070A78 = &camlPervasives__39;
    gvar_8070A88 = &camlPervasives__38;
    gvar_8070A8C = &camlPervasives__37;
    gvar_8070A9C = &camlPervasives__36;
    gvar_8070A94 = &camlPervasives__35;
    gvar_8070A98 = &camlPervasives__34;
    gvar_8070AA8 = &camlPervasives__33;
    gvar_8070AEC = &camlPervasives__32;
    gvar_8070AAC = &camlPervasives__31;
    gvar_8070AA4 = &camlPervasives__30;
    gvar_8070ACC = &camlPervasives__29;
    gvar_8070A14 = &camlPervasives__28;
    gvar_8070A18 = &camlPervasives__27;
    gvar_8070A1C = &camlPervasives__26;
    gvar_8070A20 = &camlPervasives__25;
    gvar_8070A24 = &camlPervasives__24;
    gvar_8070A28 = &camlPervasives__23;
    gvar_8070A2C = &camlPervasives__22;
    gvar_8070A30 = &camlPervasives__21;
    gvar_8070A34 = &camlPervasives__20;
    gvar_8070A38 = &camlPervasives__19;
    gvar_8070A3C = &camlPervasives__18;
    gvar_8070A40 = &camlPervasives__17;
    gvar_8070A44 = &camlPervasives__16;
    gvar_8070A48 = &camlPervasives__15;
    gvar_8070A4C = &camlPervasives__14;
    int v10 = caml_allocN(param0, param1);
    *(int*)v10 = 0x1800;
    *(int*)(v10 + 4) = &camlPervasives__7;
    *(int*)(v10 + 8) = &camlPervasives__8;
    *(int*)(v10 + 12) = &camlPervasives__9;
    *(int*)(v10 + 16) = &camlPervasives__10;
    *(int*)(v10 + 20) = &camlPervasives__11;
    *(int*)(v10 + 24) = &camlPervasives__12;
    gvar_8070AD4 = (int*)(v10 + 4);
    gvar_8070ADC = &camlPervasives__6;
    gvar_8070AD8 = &camlPervasives__5;
    *(int*)(v10 + 28) = 0x400;
    *(unsigned int*)(v10 + 32) = gvar_8070A60;
    gvar_8070AF8 = (unsigned int*)(v10 + 32);
    gvar_8070AE4 = &camlPervasives__4;
    gvar_8070AF0 = &camlPervasives__3;
    gvar_8070AE0 = &camlPervasives__2;
    caml_c_call();
    return 1;
}

int camlPervasives__exit_1326() {
    int v0;
    **gvar_8070AF8(v0);
    return caml_c_call();
}

void camlPervasives__failwith_1010() {
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
        caml_call_gc();
    }
}

int camlPervasives__flush_all_1185() {
    caml_c_call();
    return camlPervasives__iter_1186();
}

int camlPervasives__fun_1392() {
    return caml_c_call();
}

int camlPervasives__fun_1394() {
    return caml_c_call();
}

int camlPervasives__fun_1396() {
    return caml_c_call();
}

int camlPervasives__fun_1398() {
    return caml_c_call();
}

int camlPervasives__fun_1400() {
    return caml_c_call();
}

int camlPervasives__fun_1402() {
    return caml_c_call();
}

int camlPervasives__fun_1404() {
    return caml_c_call();
}

int camlPervasives__fun_1406() {
    return caml_c_call();
}

int camlPervasives__fun_1408() {
    return caml_c_call();
}

int camlPervasives__fun_1410() {
    return caml_c_call();
}

int camlPervasives__fun_1412() {
    return caml_c_call();
}

int camlPervasives__fun_1414() {
    return caml_c_call();
}

int camlPervasives__fun_1416() {
    return caml_c_call();
}

int camlPervasives__fun_1418() {
    return caml_c_call();
}

int camlPervasives__fun_1420() {
    return caml_c_call();
}

int camlPervasives__fun_1422() {
    return caml_c_call();
}

int camlPervasives__fun_1424() {
    return caml_c_call();
}

int camlPervasives__fun_1485() {
    return caml_c_call();
}

int camlPervasives__fun_1487() {
    return caml_c_call();
}

int camlPervasives__fun_1489() {
    return caml_c_call();
}

int camlPervasives__fun_1491() {
    return caml_c_call();
}

int camlPervasives__fun_1493() {
    return caml_c_call();
}

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
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__input_line_1241() {
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
            result = caml_call_gc();
        }
    }
    *ptr0 = 5367;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPervasives__scan_1249;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = &camlPervasives__86;
    camlPervasives__scan_1249((int)(ptr0 + 1));
    return result;
}

void camlPervasives__invalid_arg_1012() {
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
        caml_call_gc();
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__iter_1186() {
    int v0;
    int v1;
    int v2;
    while(v2 != 1) {
        sub_804EC70(*(int*)(v2 + 4), v0);
        v2 = v1;
    }
    return 1;
}

int camlPervasives__lnot_1049() {
    int v0;
    return ~v0 | 0x1;
}

int camlPervasives__loop_1138() {
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
            /*BAD_CALL!*/ caml_ml_array_bound_error();
        }
    }
    return camlPervasives__$5e_1112();
}

int camlPervasives__max_1025() {
    int result;
    int result1;
    int v0 = caml_c_call();
    if(v0 != 1) {
        return result;
    }
    return result1;
}

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

int camlPervasives__open_out_gen_1175(int param0) {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__output_1194(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlPervasives__output_string_1191() {
    return caml_c_call();
}

int camlPervasives__output_value_1202() {
    return caml_c_call();
}

int camlPervasives__prerr_char_1277() {
    return caml_c_call();
}

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

int camlPervasives__prerr_newline_1287() {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__prerr_string_1279() {
    return camlPervasives__output_string_1191();
}

int camlPervasives__print_char_1266() {
    return caml_c_call();
}

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
    caml_c_call();
    return camlPervasives__input_line_1241();
}

int camlPervasives__really_input_1235(int param0, void* param1) {
    int v0;
    if(param0 >= 1 && (int)param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((int)(int*)((char*)((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - (int)param1) + 2) >= param0) {
            return camlPervasives__unsafe_really_input_1229(param0, param1);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlPervasives__scan_1249(int* param0) {
    unsigned int v0;
    int* ptr0;
    int result2;
    int* ptr1;
    int* ptr2;
    int result;
    int* ptr3;
    while(1) {
        int* ptr4 = ptr2;
        int* ptr5 = ptr3;
        int* ptr6 = param0;
        int v1 = caml_c_call();
        if(v1 == 1) {
            if(ptr4 != 1) {
                caml_c_call();
                camlPervasives__build_result_1243(ptr4);
                return result;
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
            *(ptr1 + 1) = &caml_exn_End_of_file;
            v1 = caml_raise_exn();
        }
        int* ptr7 = (int*)v1;
        if(v1 > 1) {
            result2 = caml_c_call();
            caml_c_call();
            caml_c_call();
            if(ptr4 != 1) {
                ptr6 = (int*)((char*)((int)ptr7 + (int)ptr5) - 3);
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
                ptr7 = ptr0 + 1;
                *ptr0 = 0x800;
                *(ptr0 + 1) = result2;
                *(ptr0 + 2) = (int)ptr4;
                int result1 = caml_c_call();
                camlPervasives__build_result_1243(ptr7);
                return result1;
            }
            return result2;
        }
        int v2 = caml_c_call();
        result2 = v2;
        int* ptr8 = (int*)(2 - (int)ptr7);
        int v3 = v2;
        int v4 = *(ptr6 + 3);
        caml_c_call();
        while(1) {
            v0 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v0) {
                break;
            }
            else {
                result = caml_call_gc();
            }
        }
        ptr2 = (int*)(v0 + 4);
        ptr2[-1] = 0x800;
        ptr2[0] = result2;
        ptr2[1] = (int)ptr4;
        ptr3 = (int*)((char*)((int)ptr5 - (int)ptr7) + 1);
        param0 = ptr6;
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

int camlPervasives__string_of_format_1315() {
    int v0;
    int v1 = v0;
    int v2 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v1, 1, result, 1, v3);
    return result;
}

int camlPervasives__string_of_int_1130() {
    return caml_c_call();
}

int camlPervasives__unsafe_really_input_1229(int param0, void* param1) {
    int* ptr0;
    int v0;
    int v1;
    while((int)param1 > 1) {
        void* ptr1 = param1;
        int v2 = param0;
        int v3 = v1;
        int v4 = v0;
        int v5 = caml_c_call();
        if(v5 == 1) {
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
            *(ptr0 + 1) = &caml_exn_End_of_file;
            v5 = caml_raise_exn();
        }
        param1 = (void*)((char*)((int)ptr1 - v5) + 1);
        param0 = v5 + v2 - 1;
        v0 = v4;
        v1 = v3;
    }
    return 1;
}

int camlPervasives__valid_float_lexem_1135() {
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
            result = caml_call_gc();
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPervasives__loop_1138;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v2;
    camlPervasives__loop_1138();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSource__entry() {
    int* ptr0 = camlHashtbl__create_1051();
    int v0 = camlPervasives__open_in_1218();
    /*NO_RETURN*/ sub_804B27D(v0, (int)ptr0);
}

void camlSource__loop_1049() {
    int v0;
    int v1;
    while(1) {
        int v2 = camlPervasives__input_line_1241();
        int v3 = camlHashtbl__mem_1122(v0, v1);
        if(v3 == 1) {
            camlPervasives__print_endline_1274();
        }
    }
}

int camlStd_exit__entry() {
    **gvar_8070AF8();
    return 1;
}

int camlSys__catch_break_1082() {
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
                result = caml_call_gc();
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
    int v2 = caml_c_call();
    unsigned int v3 = *(unsigned int*)(v2 + 4);
    gvar_807322C = *(unsigned int*)v2;
    camlSys = v3;
    int v4 = caml_c_call();
    unsigned int v5 = *(unsigned int*)(v4 + 4);
    gvar_8073234 = *(unsigned int*)v4;
    gvar_8073238 = v5;
    int v6 = (gvar_8073238 - 20) >> 1;
    gvar_8073240 = (unsigned int)((2 << (v6 & 0x1f)) - 1);
    int v7 = gvar_8073240 >> 1;
    int v8 = (int)(gvar_8073238 >> 1);
    if(v8 < 0) {
        v8 += 7;
    }
    gvar_807323C = (unsigned int)((v8 >> 3) * 2 * v7 - 1);
    int v9 = caml_alloc3(v6, v0);
    *(int*)v9 = 0x400;
    *(int*)(v9 + 4) = 1;
    gvar_8073230 = (int*)(v9 + 4);
    gvar_8073244 = &camlSys__4;
    gvar_8073248 = 0xffffffff;
    gvar_807324C = 0xfffffffd;
    gvar_8073250 = 0xfffffffb;
    gvar_8073254 = 0xfffffff9;
    gvar_8073258 = 0xfffffff7;
    gvar_807325C = 0xfffffff5;
    gvar_8073260 = 0xfffffff3;
    gvar_8073264 = 0xfffffff1;
    gvar_8073268 = 0xffffffef;
    gvar_807326C = 0xffffffed;
    gvar_8073270 = 0xffffffeb;
    gvar_8073274 = 0xffffffe9;
    gvar_8073278 = 0xffffffe7;
    gvar_807327C = 0xffffffe5;
    gvar_8073280 = 0xffffffe3;
    gvar_8073284 = 0xffffffe1;
    gvar_8073288 = 0xffffffdf;
    gvar_807328C = 0xffffffdd;
    gvar_8073290 = 0xffffffdb;
    gvar_8073294 = 0xffffffd9;
    gvar_8073298 = 0xffffffd7;
    *(int*)(v9 + 8) = 0x400;
    *(int*)(v9 + 12) = "Sys.Break";
    gvar_807329C = (int*)(v9 + 12);
    gvar_80732A0 = &camlSys__2;
    gvar_80732A4 = "3.12.1";
    return 1;
}

void camlSys__fun_1093() {
    while(1) {
        int* ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            *ptr0 = 0x400;
            *(unsigned int*)(ptr0 + 1) = gvar_807329C;
            caml_raise_exn();
        }
        caml_call_gc();
    }
}

int camlSys__set_signal_1057() {
    caml_c_call();
    return 1;
}

int camlUnixLabels__entry() {
    camlUnixLabels = camlUnix;
    gvar_807073C = gvar_806E1C8;
    gvar_8070740 = gvar_806E1CC;
    gvar_8070744 = gvar_806E1D0;
    gvar_8070748 = gvar_806E1D4;
    gvar_807074C = gvar_806E1D8;
    gvar_8070750 = gvar_806E1DC;
    gvar_8070754 = gvar_806E1E0;
    gvar_8070758 = gvar_806E1E4;
    gvar_807075C = gvar_806E1E8;
    gvar_8070760 = gvar_806E1EC;
    gvar_8070764 = gvar_806E1F0;
    gvar_8070768 = gvar_806E1F4;
    gvar_807076C = gvar_806E1F8;
    gvar_8070770 = gvar_806E1FC;
    gvar_8070774 = gvar_806E200;
    gvar_8070778 = gvar_806E204;
    gvar_807077C = 1;
    gvar_8070780 = 3;
    gvar_8070784 = 5;
    gvar_8070788 = gvar_806E214;
    gvar_807078C = gvar_806E218;
    gvar_8070790 = gvar_806E21C;
    gvar_8070794 = gvar_806E220;
    gvar_8070798 = gvar_806E224;
    gvar_807079C = gvar_806E228;
    gvar_80707A0 = gvar_806E22C;
    gvar_80707A4 = gvar_806E230;
    gvar_80707A8 = gvar_806E234;
    gvar_80707AC = gvar_806E238;
    gvar_80707B0 = gvar_806E23C;
    gvar_80707B4 = gvar_806E240;
    gvar_80707B8 = gvar_806E244;
    gvar_80707BC = gvar_806E248;
    gvar_80707C0 = gvar_806E24C;
    gvar_80707C4 = gvar_806E250;
    gvar_80707C8 = gvar_806E254;
    gvar_80707CC = gvar_806E258;
    gvar_80707D0 = gvar_806E25C;
    gvar_80707D4 = gvar_806E260;
    gvar_80707D8 = gvar_806E264;
    gvar_80707DC = gvar_806E268;
    gvar_80707E0 = gvar_806E26C;
    gvar_80707E4 = gvar_806E270;
    gvar_80707E8 = gvar_806E274;
    gvar_80707EC = gvar_806E278;
    gvar_80707F0 = gvar_806E27C;
    gvar_80707F4 = gvar_806E280;
    gvar_80707F8 = gvar_806E284;
    gvar_80707FC = gvar_806E288;
    gvar_8070800 = gvar_806E28C;
    gvar_8070804 = gvar_806E290;
    gvar_8070808 = gvar_806E294;
    gvar_807080C = gvar_806E298;
    gvar_8070810 = gvar_806E29C;
    gvar_8070814 = gvar_806E2A0;
    gvar_8070818 = gvar_806E2A4;
    gvar_807081C = gvar_806E2A8;
    gvar_8070820 = gvar_806E2AC;
    gvar_8070824 = gvar_806E2B0;
    gvar_8070828 = gvar_806E2B4;
    gvar_807082C = gvar_806E2B8;
    gvar_8070830 = gvar_806E2BC;
    gvar_8070834 = gvar_806E2C0;
    gvar_8070838 = gvar_806E2C4;
    gvar_807083C = gvar_806E2C8;
    gvar_8070840 = gvar_806E2CC;
    gvar_8070844 = gvar_806E2D0;
    gvar_8070848 = gvar_806E2D4;
    gvar_807084C = gvar_806E2D8;
    gvar_8070850 = gvar_806E2DC;
    gvar_8070854 = gvar_806E2E0;
    gvar_8070858 = gvar_806E2E4;
    gvar_807085C = gvar_806E2E8;
    gvar_8070860 = gvar_806E2EC;
    gvar_8070864 = gvar_806E2F0;
    gvar_8070868 = gvar_806E2F4;
    gvar_807086C = gvar_806E2F8;
    gvar_8070870 = gvar_806E2FC;
    gvar_8070874 = gvar_806E300;
    gvar_8070878 = gvar_806E304;
    gvar_807087C = gvar_806E308;
    gvar_8070880 = gvar_806E30C;
    gvar_8070884 = gvar_806E310;
    gvar_8070888 = gvar_806E314;
    gvar_807088C = gvar_806E318;
    gvar_8070890 = gvar_806E31C;
    gvar_8070894 = gvar_806E320;
    gvar_8070898 = gvar_806E324;
    gvar_807089C = gvar_806E328;
    gvar_80708A0 = gvar_806E32C;
    gvar_80708A4 = gvar_806E330;
    gvar_80708A8 = gvar_806E334;
    gvar_80708AC = gvar_806E338;
    gvar_80708B0 = gvar_806E33C;
    gvar_80708B4 = gvar_806E340;
    gvar_80708B8 = gvar_806E344;
    gvar_80708BC = gvar_806E348;
    gvar_80708C0 = gvar_806E34C;
    gvar_80708C4 = gvar_806E350;
    gvar_80708C8 = gvar_806E354;
    gvar_80708CC = gvar_806E358;
    gvar_80708D0 = gvar_806E35C;
    gvar_80708D4 = gvar_806E360;
    gvar_80708D8 = gvar_806E364;
    gvar_80708DC = gvar_806E368;
    gvar_80708E0 = gvar_806E36C;
    gvar_80708E4 = gvar_806E370;
    gvar_80708E8 = gvar_806E374;
    gvar_80708EC = gvar_806E378;
    gvar_80708F0 = gvar_806E37C;
    gvar_80708F4 = gvar_806E380;
    gvar_80708F8 = gvar_806E384;
    gvar_80708FC = gvar_806E388;
    gvar_8070900 = gvar_806E38C;
    gvar_8070904 = gvar_806E390;
    gvar_8070908 = gvar_806E394;
    gvar_807090C = gvar_806E398;
    gvar_8070910 = gvar_806E39C;
    gvar_8070914 = gvar_806E3A0;
    gvar_8070918 = gvar_806E3A4;
    gvar_807091C = gvar_806E3A8;
    gvar_8070920 = gvar_806E3AC;
    gvar_8070924 = gvar_806E3B0;
    gvar_8070928 = gvar_806E3B4;
    gvar_807092C = gvar_806E3B8;
    gvar_8070930 = gvar_806E3BC;
    gvar_8070934 = gvar_806E3C0;
    gvar_8070938 = gvar_806E3C4;
    gvar_807093C = gvar_806E3C8;
    gvar_8070940 = gvar_806E3CC;
    gvar_8070944 = gvar_806E3D0;
    gvar_8070948 = gvar_806E3D4;
    gvar_807094C = gvar_806E3D8;
    gvar_8070950 = gvar_806E3DC;
    gvar_8070954 = gvar_806E3E0;
    gvar_8070958 = gvar_806E3E4;
    gvar_807095C = gvar_806E3E8;
    gvar_8070960 = gvar_806E3EC;
    gvar_8070964 = gvar_806E3F0;
    gvar_8070968 = gvar_806E3F4;
    gvar_807096C = gvar_806E3F8;
    gvar_8070970 = gvar_806E3FC;
    gvar_8070974 = gvar_806E400;
    gvar_8070978 = gvar_806E404;
    gvar_807097C = gvar_806E408;
    gvar_8070980 = gvar_806E40C;
    gvar_8070984 = gvar_806E410;
    gvar_8070988 = gvar_806E414;
    gvar_807098C = gvar_806E418;
    gvar_8070990 = gvar_806E41C;
    gvar_8070994 = gvar_806E420;
    gvar_8070998 = gvar_806E424;
    gvar_807099C = gvar_806E428;
    gvar_80709A0 = gvar_806E42C;
    return 1;
}

int camlUnix__accept_non_intr_2024() {
    int v0;
    int v1;
    int v2;
    while(1) {
        int v3 = sub_804DB70(v2, v0);
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
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = v2;
    camlUnix__find_proc_id_1997();
    int v5 = v1;
    caml_c_call();
    int v6 = sub_804D920(v4, v1, v3, v0);
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
            caml_call_gc();
        }
    }
    *ptr0 = 3075;
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = v3;
    *(ptr0 + 3) = v2;
    camlUnix__find_proc_id_1997();
    int v7 = v1;
    caml_c_call();
    int v8 = sub_804D9E0(v6, v4, v1, v5, v0);
    if(*(int*)v8 != &caml_exn_Sys_error) {
        caml_raise_exn();
        /*BAD_CALL!*/ sub_804D9E0(v4, v1, v5, v0, param0);
    }
    caml_c_call();
    return camlUnix__waitpid_non_intr_2001();
}

int camlUnix__close_process_in_2003() {
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
            caml_call_gc();
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

int camlUnix__close_process_out_2006() {
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
            caml_call_gc();
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
    int result1 = sub_804CEB0(v2, v3, v4, v5, v1, v0);
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
    int result1 = sub_804CF60(v2, v3, v4, v5, v6, v1, v0);
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
    gvar_806E42C = &camlUnix__175;
    gvar_806E428 = &camlUnix__174;
    gvar_806E424 = &camlUnix__173;
    gvar_806E420 = &camlUnix__172;
    gvar_806E41C = &camlUnix__171;
    gvar_806E418 = &camlUnix__170;
    gvar_806E414 = &camlUnix__169;
    gvar_806E408 = &camlUnix__168;
    gvar_806E404 = &camlUnix__167;
    gvar_806E400 = &camlUnix__166;
    gvar_806E3FC = &camlUnix__165;
    gvar_806E3F8 = &camlUnix__164;
    gvar_806E3F4 = &camlUnix__163;
    gvar_806E3F0 = &camlUnix__162;
    gvar_806E3AC = &camlUnix__161;
    gvar_806E3A8 = &camlUnix__160;
    gvar_806E3A4 = &camlUnix__159;
    gvar_806E3A0 = &camlUnix__158;
    gvar_806E39C = &camlUnix__157;
    gvar_806E398 = &camlUnix__156;
    gvar_806E394 = &camlUnix__155;
    gvar_806E390 = &camlUnix__154;
    gvar_806E388 = &camlUnix__153;
    gvar_806E374 = &camlUnix__152;
    gvar_806E370 = &camlUnix__151;
    gvar_806E36C = &camlUnix__150;
    gvar_806E368 = &camlUnix__149;
    gvar_806E364 = &camlUnix__148;
    gvar_806E360 = &camlUnix__147;
    gvar_806E35C = &camlUnix__146;
    gvar_806E358 = &camlUnix__145;
    gvar_806E354 = &camlUnix__144;
    gvar_806E350 = &camlUnix__143;
    gvar_806E34C = &camlUnix__142;
    gvar_806E348 = &camlUnix__141;
    gvar_806E344 = &camlUnix__140;
    gvar_806E340 = &camlUnix__139;
    gvar_806E33C = &camlUnix__138;
    gvar_806E338 = &camlUnix__137;
    gvar_806E334 = &camlUnix__136;
    gvar_806E330 = &camlUnix__135;
    gvar_806E32C = &camlUnix__134;
    gvar_806E328 = &camlUnix__133;
    gvar_806E324 = &camlUnix__132;
    gvar_806E320 = &camlUnix__131;
    gvar_806E31C = &camlUnix__130;
    gvar_806E318 = &camlUnix__129;
    gvar_806E314 = &camlUnix__128;
    gvar_806E310 = &camlUnix__127;
    gvar_806E30C = &camlUnix__126;
    gvar_806E304 = &camlUnix__125;
    gvar_806E300 = &camlUnix__124;
    gvar_806E2FC = &camlUnix__123;
    gvar_806E2F8 = &camlUnix__122;
    gvar_806E2F4 = &camlUnix__121;
    gvar_806E2F0 = &camlUnix__120;
    gvar_806E2EC = &camlUnix__119;
    gvar_806E2E8 = &camlUnix__118;
    gvar_806E2BC = &camlUnix__117;
    gvar_806E2B8 = &camlUnix__116;
    gvar_806E2B4 = &camlUnix__115;
    gvar_806E2B0 = &camlUnix__114;
    gvar_806E2AC = &camlUnix__113;
    gvar_806E2A8 = &camlUnix__112;
    gvar_806E2A4 = &camlUnix__111;
    gvar_806E2A0 = &camlUnix__110;
    gvar_806E29C = &camlUnix__109;
    gvar_806E298 = &camlUnix__108;
    gvar_806E294 = &camlUnix__107;
    gvar_806E290 = &camlUnix__106;
    gvar_806E28C = &camlUnix__105;
    gvar_806E288 = &camlUnix__104;
    gvar_806E284 = &camlUnix__103;
    gvar_806E280 = &camlUnix__102;
    gvar_806E27C = &camlUnix__101;
    gvar_806E278 = &camlUnix__100;
    gvar_806E274 = &camlUnix__99;
    gvar_806E270 = &camlUnix__98;
    gvar_806E26C = &camlUnix__97;
    gvar_806E268 = &camlUnix__96;
    gvar_806E264 = &camlUnix__95;
    gvar_806E260 = &camlUnix__94;
    gvar_806E25C = &camlUnix__93;
    gvar_806E258 = &camlUnix__92;
    gvar_806E250 = &camlUnix__91;
    gvar_806E24C = &camlUnix__90;
    gvar_806E248 = &camlUnix__89;
    gvar_806E244 = &camlUnix__88;
    gvar_806E240 = &camlUnix__87;
    gvar_806E23C = &camlUnix__86;
    gvar_806E238 = &camlUnix__85;
    gvar_806E234 = &camlUnix__84;
    gvar_806E230 = &camlUnix__83;
    gvar_806E22C = &camlUnix__82;
    gvar_806E228 = &camlUnix__81;
    gvar_806E218 = &camlUnix__80;
    gvar_806E214 = &camlUnix__79;
    gvar_806E204 = &camlUnix__78;
    gvar_806E200 = &camlUnix__77;
    gvar_806E1FC = &camlUnix__76;
    gvar_806E1F4 = &camlUnix__75;
    gvar_806E1F0 = &camlUnix__74;
    gvar_806E1EC = &camlUnix__73;
    gvar_806E1E8 = &camlUnix__72;
    gvar_806E1E4 = &camlUnix__71;
    gvar_806E1E0 = &camlUnix__70;
    gvar_806E1DC = &camlUnix__69;
    gvar_806E1D8 = &camlUnix__68;
    gvar_806E1D4 = &camlUnix__67;
    gvar_806E1D0 = &camlUnix__66;
    gvar_806E1C8 = &camlUnix__65;
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
    gvar_806E1CC = &camlUnix__60;
    gvar_806E208 = 1;
    gvar_806E20C = 3;
    gvar_806E210 = 5;
    gvar_806E21C = &camlUnix__59;
    gvar_806E220 = &camlUnix__58;
    gvar_806E224 = &camlUnix__57;
    int v2 = caml_allocN(param0, param1);
    *(int*)v2 = 0x1800;
    *(int*)(v2 + 4) = &camlUnix__50;
    *(int*)(v2 + 8) = &camlUnix__51;
    *(int*)(v2 + 12) = &camlUnix__52;
    *(int*)(v2 + 16) = &camlUnix__53;
    *(int*)(v2 + 20) = &camlUnix__54;
    *(int*)(v2 + 24) = &camlUnix__55;
    gvar_806E254 = (int*)(v2 + 4);
    gvar_806E430 = &camlUnix__49;
    gvar_806E308 = &camlUnix__48;
    gvar_806E434 = &camlUnix__47;
    int v3 = caml_c_call();
    gvar_806E378 = v3;
    int v4 = caml_c_call();
    gvar_806E37C = v4;
    int v5 = sub_804E27A(v0);
    int v6 = *(int*)v5 == &caml_exn_Failure ? gvar_806E378: /*BAD_CALL!*/ caml_raise_exn();
    gvar_806E380 = v6;
    int v7 = sub_804E2C2(v0);
    int v8 = *(int*)v7 == &caml_exn_Failure ? gvar_806E37C: /*BAD_CALL!*/ caml_raise_exn();
    gvar_806E384 = v8;
    gvar_806E38C = &camlUnix__42;
    gvar_806E3B0 = &camlUnix__41;
    gvar_806E3B4 = &camlUnix__40;
    gvar_806E3B8 = &camlUnix__39;
    gvar_806E3BC = &camlUnix__38;
    int v9 = caml_allocN(&caml_exn_Failure, param1);
    *(int*)v9 = 0x1c00;
    *(int*)(v9 + 4) = 1;
    *(int*)(v9 + 8) = 3;
    *(int*)(v9 + 12) = 5;
    *(int*)(v9 + 16) = 7;
    *(int*)(v9 + 20) = 9;
    *(int*)(v9 + 24) = &camlUnix__36;
    *(int*)(v9 + 28) = &camlUnix__37;
    gvar_806E438 = (int*)(v9 + 4);
    gvar_806E3C0 = &camlUnix__35;
    gvar_806E3C4 = &camlUnix__34;
    gvar_806E3C8 = &camlUnix__33;
    gvar_806E3CC = &camlUnix__32;
    gvar_806E3D0 = &camlUnix__31;
    gvar_806E3D4 = &camlUnix__30;
    gvar_806E3D8 = &camlUnix__29;
    gvar_806E3DC = &camlUnix__28;
    gvar_806E3E0 = &camlUnix__27;
    gvar_806E43C = &camlUnix__26;
    gvar_806E40C = &camlUnix__25;
    gvar_806E440 = &camlUnix__24;
    gvar_806E410 = &camlUnix__23;
    gvar_806E1F8 = &camlUnix__22;
    gvar_806E444 = &camlUnix__21;
    gvar_806E448 = &camlUnix__20;
    gvar_806E44C = &camlUnix__19;
    gvar_806E2C0 = &camlUnix__18;
    gvar_806E2C4 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_806E450 = ptr0;
    gvar_806E454 = &camlUnix__16;
    gvar_806E2C8 = &camlUnix__15;
    gvar_806E2CC = &camlUnix__14;
    gvar_806E2D0 = &camlUnix__13;
    gvar_806E458 = &camlUnix__12;
    gvar_806E2D4 = &camlUnix__11;
    gvar_806E45C = &camlUnix__10;
    gvar_806E460 = &camlUnix__9;
    gvar_806E2D8 = &camlUnix__8;
    gvar_806E2DC = &camlUnix__7;
    gvar_806E2E0 = &camlUnix__6;
    gvar_806E2E4 = &camlUnix__5;
    gvar_806E3E4 = &camlUnix__4;
    gvar_806E3E8 = &camlUnix__3;
    gvar_806E464 = &camlUnix__2;
    gvar_806E3EC = &camlUnix__1;
    return 1;
}

void camlUnix__establish_server_2026() {
    int* ptr0;
    int* ptr1 = ptr0;
    camlUnix__domain_of_sockaddr_1529();
    int v0 = caml_c_call();
    camlUnix__setsockopt_1646(3);
    caml_c_call();
    void* ptr2 = (void*)v0;
    caml_c_call();
    while(1) {
        int v1 = camlUnix__accept_non_intr_2024();
        int v2 = *(int*)v1;
        int v3 = caml_c_call();
        if(v3 != 1) {
            caml_c_call();
            camlUnix__waitpid_non_intr_2001();
        }
        else {
            int v4 = caml_c_call();
            if(v4 != 1) {
                camlPervasives__exit_1326();
            }
            caml_c_call();
            camlUnix__try_set_close_on_exec_1366();
            caml_c_call();
            caml_c_call();
            caml_apply2(ptr1);
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
    int* ptr0 = (int*)sub_804D720(v0, v3, v4, v1);
    if(*ptr0 == &caml_exn_Not_found) {
    loc_804D6D0:
        int* ptr1 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit > (unsigned int)ptr1) {
            caml_call_gc();
            goto loc_804D6D0;
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
    caml_call_gc();
    goto loc_804D6D0;
}

int camlUnix__fun_2562() {
    return caml_c_call();
}

int camlUnix__fun_2564() {
    return caml_c_call();
}

int camlUnix__fun_2566() {
    return caml_c_call();
}

int camlUnix__fun_2568() {
    return caml_c_call();
}

int camlUnix__fun_2570() {
    return caml_c_call();
}

int camlUnix__fun_2572(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2574() {
    return caml_c_call();
}

int camlUnix__fun_2576() {
    return caml_c_call();
}

int camlUnix__fun_2578() {
    return caml_c_call();
}

int camlUnix__fun_2580() {
    return caml_c_call();
}

int camlUnix__fun_2582() {
    return caml_c_call();
}

int camlUnix__fun_2584() {
    return caml_c_call();
}

int camlUnix__fun_2586() {
    return caml_c_call();
}

int camlUnix__fun_2588() {
    return caml_c_call();
}

int camlUnix__fun_2590() {
    return caml_c_call();
}

int camlUnix__fun_2592() {
    return caml_c_call();
}

int camlUnix__fun_2594() {
    return caml_c_call();
}

int camlUnix__fun_2596() {
    return caml_c_call();
}

int camlUnix__fun_2598() {
    return caml_c_call();
}

int camlUnix__fun_2600() {
    return caml_c_call();
}

int camlUnix__fun_2602() {
    return caml_c_call();
}

int camlUnix__fun_2604(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2606(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2608() {
    return caml_c_call();
}

int camlUnix__fun_2610() {
    return caml_c_call();
}

int camlUnix__fun_2612() {
    return caml_c_call();
}

int camlUnix__fun_2614() {
    return caml_c_call();
}

int camlUnix__fun_2616() {
    return caml_c_call();
}

int camlUnix__fun_2618() {
    return caml_c_call();
}

int camlUnix__fun_2620() {
    return caml_c_call();
}

int camlUnix__fun_2622() {
    return caml_c_call();
}

int camlUnix__fun_2624() {
    return caml_c_call();
}

int camlUnix__fun_2626() {
    return caml_c_call();
}

int camlUnix__fun_2628() {
    return caml_c_call();
}

int camlUnix__fun_2630() {
    return caml_c_call();
}

int camlUnix__fun_2632() {
    return caml_c_call();
}

int camlUnix__fun_2634() {
    return caml_c_call();
}

int camlUnix__fun_2636() {
    return caml_c_call();
}

int camlUnix__fun_2638() {
    return caml_c_call();
}

int camlUnix__fun_2640() {
    return caml_c_call();
}

int camlUnix__fun_2642() {
    return caml_c_call();
}

int camlUnix__fun_2644(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2646() {
    return caml_c_call();
}

int camlUnix__fun_2648() {
    return caml_c_call();
}

int camlUnix__fun_2650() {
    return caml_c_call();
}

int camlUnix__fun_2652() {
    return caml_c_call();
}

int camlUnix__fun_2654() {
    return caml_c_call();
}

int camlUnix__fun_2656() {
    return caml_c_call();
}

int camlUnix__fun_2658() {
    return caml_c_call();
}

int camlUnix__fun_2660() {
    return caml_c_call();
}

int camlUnix__fun_2662() {
    return caml_c_call();
}

int camlUnix__fun_2664() {
    return caml_c_call();
}

int camlUnix__fun_2666() {
    return caml_c_call();
}

int camlUnix__fun_2668() {
    return caml_c_call();
}

int camlUnix__fun_2670(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2672(int param0, int param1) {
    return caml_c_call();
}

int camlUnix__fun_2674() {
    return caml_c_call();
}

int camlUnix__fun_2676() {
    return caml_c_call();
}

int camlUnix__fun_2678() {
    return caml_c_call();
}

int camlUnix__fun_2680() {
    return caml_c_call();
}

int camlUnix__fun_2682() {
    return caml_c_call();
}

int camlUnix__fun_2684() {
    return caml_c_call();
}

int camlUnix__fun_2686() {
    return caml_c_call();
}

int camlUnix__fun_2688() {
    return caml_c_call();
}

int camlUnix__fun_2690() {
    return caml_c_call();
}

int camlUnix__fun_2692() {
    return caml_c_call();
}

int camlUnix__fun_2694() {
    return caml_c_call();
}

int camlUnix__fun_2696() {
    return caml_c_call();
}

int camlUnix__fun_2698() {
    return caml_c_call();
}

int camlUnix__fun_2700() {
    return caml_c_call();
}

int camlUnix__fun_2702() {
    return caml_c_call();
}

int camlUnix__fun_2704() {
    return caml_c_call();
}

int camlUnix__fun_2706() {
    return caml_c_call();
}

int camlUnix__fun_2708() {
    return caml_c_call();
}

int camlUnix__fun_2710() {
    return caml_c_call();
}

int camlUnix__fun_2712() {
    return caml_c_call();
}

int camlUnix__fun_2714() {
    return caml_c_call();
}

int camlUnix__fun_2716(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2718(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2720() {
    return caml_c_call();
}

int camlUnix__fun_2722() {
    return caml_c_call();
}

int camlUnix__fun_2724() {
    return caml_c_call();
}

int camlUnix__fun_2726() {
    return caml_c_call();
}

int camlUnix__fun_2728() {
    return caml_c_call();
}

int camlUnix__fun_2730() {
    return caml_c_call();
}

int camlUnix__fun_2732() {
    return caml_c_call();
}

int camlUnix__fun_2734() {
    return caml_c_call();
}

int camlUnix__fun_2736() {
    return caml_c_call();
}

int camlUnix__fun_2738() {
    return caml_c_call();
}

int camlUnix__fun_2740() {
    return caml_c_call();
}

int camlUnix__fun_2742(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2744() {
    return caml_c_call();
}

int camlUnix__fun_2746() {
    return caml_c_call();
}

int camlUnix__fun_2748() {
    return caml_c_call();
}

int camlUnix__fun_2750() {
    return caml_c_call();
}

int camlUnix__fun_2752() {
    return caml_c_call();
}

int camlUnix__fun_2754(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2756() {
    return caml_c_call();
}

int camlUnix__fun_2758() {
    return caml_c_call();
}

int camlUnix__fun_2760() {
    return caml_c_call();
}

int camlUnix__fun_2762() {
    return caml_c_call();
}

int camlUnix__fun_2764() {
    return caml_c_call();
}

int camlUnix__fun_2766() {
    return caml_c_call();
}

int camlUnix__fun_2768(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2770() {
    return caml_c_call();
}

int camlUnix__fun_2772(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2774() {
    return caml_c_call();
}

int camlUnix__fun_2776() {
    return caml_c_call();
}

int camlUnix__fun_2778() {
    return caml_c_call();
}

int camlUnix__fun_2780() {
    return caml_c_call();
}

int camlUnix__fun_2782() {
    return caml_c_call();
}

int camlUnix__fun_2794(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2796() {
    return caml_c_call();
}

int camlUnix__fun_2798() {
    return caml_c_call();
}

int camlUnix__fun_2800() {
    return caml_c_call();
}

int camlUnix__fun_2802() {
    return caml_c_call();
}

int camlUnix__fun_2804() {
    return caml_c_call();
}

int camlUnix__fun_2814(int param0) {
    return caml_c_call();
}

int camlUnix__fun_2816(int param0, int param1) {
    return caml_c_call();
}

int camlUnix__fun_2828() {
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
                        caml_call_gc();
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

int* camlUnix__fun_2833() {
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
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v0;
    *(ptr0 + 2) = **(unsigned int*)(v1 + 8);
    return ptr0 + 1;
}

int camlUnix__fun_2836(int param0) {
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
            result = caml_call_gc();
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

int* camlUnix__fun_2842(int param0) {
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
            caml_call_gc();
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

int camlUnix__fun_2857() {
    return caml_c_call();
}

int camlUnix__fun_2863() {
    return caml_c_call();
}

unsigned int* camlUnix__get_port_1739(int param0) {
    int* ptr0;
    int v0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = caml_string_equal(*(int**)(param0 + 12), (int*)&camlUnix__215);
    if(v5 == 1) {
        int v6 = sub_804B4E0(v4, param0, v3, v0);
        if(*(int*)v6 == &caml_exn_Failure) {
            int v7 = sub_804B450(ptr1, v1, v2, v0);
            if(*(int**)v7 == &caml_exn_Not_found) {
                return (unsigned int*)0x1;
            }
            caml_raise_exn();
        }
        caml_raise_exn();
        caml_call_gc();
        goto loc_804B3C1;
    }
    else {
    loc_804B3C1:
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
    caml_call_gc();
    goto loc_804B3C1;
}

int camlUnix__getaddrinfo_1751(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = sub_804C8E0(v1, v2, v3, v0);
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
    int* ptr9 = ptr8;
    int v2 = v1;
    int v3 = v0;
    while(1) {
        ptr5 = (int*)(caml_young_ptr - 48);
        caml_young_ptr -= 48;
        if(caml_young_limit <= (unsigned int)ptr5) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    int v4 = (int)(ptr5 + 1);
    *ptr5 = 0x400;
    *(int*)(int)(ptr5 + 1) = 1;
    int v5 = (int)(ptr5 + 3);
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
            caml_call_gc();
        }
    }
    *ptr4 = 4343;
    *(int*)(int)(ptr4 + 1) = &caml_curry2;
    *(ptr4 + 2) = 5;
    *(ptr4 + 3) = &camlUnix__get_port_1739;
    int* ptr10 = (int*)v2;
    *(int**)(ptr4 + 4) = (int*)v2;
    int* ptr11 = *(int**)v4;
    if(ptr11 != 1) {
        int v6 = *ptr11;
        if(v6 == 3) {
            v2 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        }
        else if(v6 != 1) {
            int v7 = caml_string_equal(ptr10, (int*)&camlUnix__202);
            if(v7 == 1) {
                v2 = 1;
            }
            else {
                while(1) {
                    int* ptr12 = (int*)(caml_young_ptr - 24);
                    caml_young_ptr -= 24;
                    if(caml_young_limit <= (unsigned int)ptr12) {
                    loc_804C531:
                        *ptr12 = 0x800;
                        *(ptr12 + 1) = v6;
                        *(ptr12 + 2) = 1;
                        v2 = (int)(ptr12 + 4);
                        *(ptr12 + 3) = 0x800;
                        *(int**)(int)(ptr12 + 4) = ptr12 + 1;
                        *(ptr12 + 5) = 1;
                        goto loc_804C5EE;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                goto loc_804C531;
            }
        }
        else {
            v2 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        }
    }
    else {
        v4 = (int)camlUnix__get_port_1739((int)(ptr4 + 1));
        camlUnix__get_port_1739((int)(ptr4 + 1));
        v2 = (int)camlPervasives__$40_1143();
    }
loc_804C5EE:
    int v8 = caml_string_equal(ptr9, (int*)&camlUnix__197);
    if(v8 != 1) {
        ptr3 = &ptr6;
        int v9 = camlList__mem_1161();
        if(v9 != 1) {
            while(1) {
                ptr2 = (int*)(caml_young_ptr - 24);
                caml_young_ptr -= 24;
                if(caml_young_limit <= (unsigned int)ptr2) {
                    break;
                }
                else {
                    ptr3 = &ptr6;
                    caml_call_gc();
                }
            }
            *ptr2 = 0x800;
            *(unsigned int*)(ptr2 + 1) = gvar_806E378;
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
                    caml_call_gc();
                }
            }
            *ptr0 = 0x800;
            *(unsigned int*)(ptr0 + 1) = gvar_806E37C;
            *(ptr0 + 2) = "127.0.0.1";
            ptr1 = (unsigned int*)(ptr0 + 4);
            *(int*)(ptr1 - 1) = 0x800;
            *ptr1 = (unsigned int*)(ptr0 + 1);
        }
        *(int*)(ptr1 + 1) = 1;
    }
    else {
        int v10 = sub_804C790(v2, v4, v5, (int)ptr9, v3, ptr7);
        if(*(int*)v10 == &caml_exn_Failure) {
            int v11 = sub_804C700(param0, param1, param2, param3, param4, param5);
            if(*(int*)v11 == &caml_exn_Not_found) {
                ptr1 = (unsigned int*)0x1;
            }
            else {
                ptr3 = &param5;
                caml_raise_exn();
                goto loc_804C780;
            }
        }
        else {
        loc_804C780:
            --ptr3;
            *ptr3 = &loc_804C785;
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
            *ptr3 = &loc_804C839;
            /*BAD_CALL!*/ camlList__map_1062();
            ptr3 += 5;
            /*BAD_CALL!*/ camlList__flatten_1058();
        }
        --ptr3;
        *ptr3 = &loc_804C846;
        /*BAD_CALL!*/ caml_call_gc();
    }
}

int* camlUnix__getnameinfo_1781() {
    int v0;
    int v1;
    int v2;
    int v3 = sub_804CBE0(v1, v2, v0);
    if(*(int*)v3 == &caml_exn_Invalid_argument) {
        return camlUnix__getnameinfo_emulation_1772();
    }
    /*BAD_CALL!*/ caml_raise_exn();
}

int* camlUnix__getnameinfo_emulation_1772() {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int* ptr3;
    int v6 = (int)*(char*)&ptr3[-1];
    if(v6) {
        int v7 = sub_804C9D0(ptr3[0], ptr3[1], v5, v1);
        if(*(int*)v7 == &caml_exn_Not_found) {
            int v8 = camlList__mem_1161();
            if(v8 != 1) {
                while(1) {
                    ptr2 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr2) {
                        break;
                    }
                    else {
                        caml_call_gc();
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
        int v9 = sub_804CA80(v0, v2, v3, v1);
        if(*(int*)v9 == &caml_exn_Not_found) {
            v6 = camlPervasives__string_of_int_1130();
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
                caml_call_gc();
            }
        }
        *ptr1 = 0x800;
        *(ptr1 + 1) = v4;
        *(ptr1 + 2) = v6;
        return ptr1 + 1;
    }
    int v10 = ptr3[0];
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
    *(ptr0 + 1) = &camlUnix__192;
    *(ptr0 + 2) = v10;
    return ptr0 + 1;
}

int camlUnix__getsockopt_1643() {
    return caml_c_call();
}

int camlUnix__getsockopt_error_1671() {
    return caml_c_call();
}

int camlUnix__getsockopt_float_1664() {
    return caml_c_call();
}

int camlUnix__getsockopt_int_1650() {
    return caml_c_call();
}

int camlUnix__getsockopt_optint_1657() {
    return caml_c_call();
}

int camlUnix__handle_unix_error_1171() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = sub_804BEE0(v0, v1, v2, v3);
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
    /*BAD_CALL!*/ caml_ml_array_bound_error();
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
    sub_804DA80(v1, (void*)v3, v0);
    caml_c_call();
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_proc_1949(int param0, int param1) {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = camlList__for_all_1137();
    int v6 = caml_c_call();
    if(v6 != 1) {
        return camlHashtbl__add_1074(v6);
    }
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
    int result = sub_804D090(v5, v0, v3, v2, v1, v4, (int)ptr0);
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
    int v5;
    int v6 = caml_extra_params;
    int v7 = camlList__for_all_1137();
    int v8 = caml_c_call();
    if(v8 != 1) {
        return camlHashtbl__add_1074(v8);
    }
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    if(v7 == 1) {
        camlList__iter_1074();
    }
    int result = sub_804D480(v2, v3, v4, v7, v0, v5, v6, v1, (int)ptr0);
    camlPervasives__exit_1326();
    return result;
}

int* camlUnix__open_process_1967() {
    int* ptr0;
    int* ptr1;
    int v0 = caml_c_call();
    int v1 = *(int*)(v0 + 4);
    int v2 = *(int*)v0;
    int v3 = caml_c_call();
    int* ptr2 = *(unsigned int*)(v3 + 4);
    int v4 = *(int*)v3;
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
    *(unsigned int*)(ptr1 + 1) = ptr2;
    *(ptr1 + 2) = 1;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v2;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v5;
    *(ptr1 + 8) = v6;
    camlUnix__open_proc_1949(v4, v1);
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

int* camlUnix__open_process_full_1985() {
    int* ptr0;
    int* ptr1;
    int v0 = caml_c_call();
    int v1 = *(int*)(v0 + 4);
    int v2 = *(int*)v0;
    int v3 = caml_c_call();
    int v4 = *(int*)(v3 + 4);
    int v5 = *(int*)v3;
    int v6 = caml_c_call();
    void* ptr2 = *(void**)(v6 + 4);
    int* ptr3 = *(int**)v6;
    int v7 = caml_c_call();
    int v8 = caml_c_call();
    int v9 = caml_c_call();
    int v10 = v9;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 52);
        caml_young_ptr -= 52;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr1 = 0x800;
    *(unsigned int*)(ptr1 + 1) = ptr3;
    *(ptr1 + 2) = 1;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v4;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    ptr3 = ptr1 + 7;
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v2;
    *(unsigned int*)(ptr1 + 8) = ptr1 + 4;
    *(ptr1 + 9) = 3075;
    *(int*)(int)(ptr1 + 10) = v7;
    *(ptr1 + 11) = v8;
    *(ptr1 + 12) = v9;
    caml_extra_params = ptr3;
    camlUnix__open_proc_full_1975((int)(ptr1 + 10), v5);
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
            caml_call_gc();
        }
    }
    *ptr0 = 0xc00;
    *(ptr0 + 1) = v7;
    *(ptr0 + 2) = v8;
    *(ptr0 + 3) = v10;
    return ptr0 + 1;
}

int camlUnix__open_process_in_1957() {
    int* ptr0;
    int v0 = 1;
    int v1 = caml_c_call();
    int v2 = *(int*)(v1 + 4);
    int v3 = *(int*)v1;
    int v4 = caml_c_call();
    int result = v4;
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
    *(ptr0 + 3) = 1025;
    *(ptr0 + 4) = v4;
    camlUnix__open_proc_1949(1, v2);
    caml_c_call();
    return result;
}

int camlUnix__open_process_out_1962() {
    int* ptr0;
    int v0 = 1;
    int v1 = caml_c_call();
    int v2 = *(int*)(v1 + 4);
    int v3 = *(int*)v1;
    int v4 = caml_c_call();
    int result = v4;
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
    *(ptr0 + 1) = v2;
    *(ptr0 + 2) = 1;
    *(ptr0 + 3) = 1026;
    *(ptr0 + 4) = v4;
    camlUnix__open_proc_1949(v3, 3);
    caml_c_call();
    return result;
}

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

int camlUnix__read_1237(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlUnix__recv_1558(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlUnix__recvfrom_1564(int param0, int param1) {
    int v0;
    if(param0 >= 1 && param1 >= 1) {
        int v1 = (*(int*)(v0 - 4) >>> 10) * 4 - 1;
        if((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 - param1 + 2 >= param0) {
            return caml_c_call();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlUnix__safe_close_1898() {
    int v0;
    int v1 = sub_804CD60(v0);
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
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlUnix__setsockopt_1646(int param0) {
    return caml_c_call();
}

int camlUnix__setsockopt_float_1667(int param0) {
    return caml_c_call();
}

int camlUnix__setsockopt_int_1653(int param0) {
    return caml_c_call();
}

int camlUnix__setsockopt_optint_1660(int param0) {
    return caml_c_call();
}

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
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

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
    sub_804CC70(v1, v0);
    return camlPervasives__exit_1326();
}

int camlUnix__try_set_close_on_exec_1366() {
    int v0;
    int v1 = sub_804C0A0(v0);
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
        int v3 = sub_804D7B0(v2, v0);
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
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
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
            goto loc_80683E5;
        }
    }
    else {
    loc_80683E5:
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

// Stale decompilation - Refresh this view to re-decompile this code
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
        result = sub_806AA1D(param0, param1);
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
        result = sub_806AA1D(param0, param1);
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
        result = sub_806AA1D(param0, param1);
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
        result = sub_806AA1D(param0, param1);
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
            result = (int*)&gvar_807AD44;
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
        result = (int*)&gvar_807AD44;
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
        result = caml_alloc_small((int)(unsigned int)(((param1 + 3) >>> 2) + 1), 0xFF);
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
    int* result = (int*)&gvar_807AD44;
    if((unsigned int)(param0 >> 1)) {
        result = caml_alloc((unsigned int)(param0 >> 1), 0);
    }
    return result;
}

int* caml_alloc_dummy_float(int param0) {
    int* result = (int*)&gvar_807AD44;
    if((unsigned int)(param0 & 0xfffffffe)) {
        result = caml_alloc((unsigned int)(param0 & 0xfffffffe), 0);
    }
    return result;
}

int caml_alloc_final(int param0, int param1, unsigned int param2, unsigned int param3) {
    int v0 = caml_final_custom_operations(param1);
    return caml_alloc_custom(v0, param0 * 4, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_alloc_shr(unsigned int param0, int param1) {
    unsigned int v0 = param0;
    if(v0 > 0x3fffff) {
        caml_raise_out_of_memory();
    }
    int* ptr0 = (int*)caml_fl_allocate((int)v0);
    int* ptr1 = ptr0;
    if(!ptr0) {
        int v1 = caml_round_heap_chunk_size((unsigned int)((v0 / 100 * caml_percent_free + v0 + 1) * 4));
        int v2 = v1;
        int* ptr2 = (int*)caml_alloc_for_heap(v1);
        int* ptr3 = ptr2;
        if(ptr2) {
            unsigned int v3 = (unsigned int)((v2 >>> 2) - 1);
            int* ptr4 = ptr2;
            if(v3 > 0x3fffff) {
                while(1) {
                    *ptr2 = 0xfffffe00;
                    ptr2 += 0x400000;
                    v2 -= 0x1000000;
                    *(unsigned int*)(ptr4 + 1) = ptr2 + 1;
                    *(unsigned int*)(ptr3 + 2) = ptr2 + 1;
                    v3 = (unsigned int)((v2 >>> 2) - 1);
                    if(v3 <= 0x3fffff) {
                        break;
                    }
                    else {
                        ptr4 = ptr2;
                    }
                }
                ptr4 = ptr2;
            }
            if((unsigned int)v2 > 1) {
                *ptr2 = v3 * 0x400 + 0x200;
                *(unsigned int*)(ptr3 + 2) = ptr4 + 1;
                *(ptr4 + 1) = 0;
            }
            else {
                *(ptr4 + 1) = 0;
                if(v2 == 1) {
                    *ptr2 = 0;
                }
            }
            int v4 = caml_add_to_heap((int)ptr3);
            if(v4) {
                caml_free_for_heap((int)ptr3);
                goto loc_805F879;
            }
            else {
                ++ptr3;
                if(!ptr3) {
                    goto loc_805F879;
                }
            }
        }
        else {
            caml_gc_message(4, "No room for growing heap\n", 0);
        loc_805F879:
            if(caml_in_minor_collection) {
                /*NO_RETURN*/ caml_fatal_error("Fatal error: out of memory.\n");
            }
            caml_raise_out_of_memory();
        }
        caml_fl_add_blocks((int)ptr3);
        ptr1 = (int*)caml_fl_allocate((int)v0);
    }
    unsigned int v5 = caml_gc_phase;
    *ptr1 = !v5 || (v5 == 1 && caml_gc_sweep_hp <= (unsigned int)ptr1) ? v0 * 0x400 + param1 + 0x300: v0 * 0x400 + param1;
    unsigned int v6 = caml_allocated_words + v0 + 1;
    caml_allocated_words = caml_allocated_words + v0 + 1;
    if(caml_minor_heap_size >>> 2 < v6) {
        caml_urge_major_slice();
    }
    return ptr1 + 1;
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

void caml_apply2(int* param0) {
    int* ptr0;
    if(*(param0 + 1) == 5) {
        jump *(param0 + 2);
    }
    int* ptr1 = ptr0;
    ptr0 = (int*)*param0((int)ptr0);
    jump *ptr0;
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_bound_error() {
    if(!array_bound_error_bucket_inited) {
        *(int*)&array_bound_error_msg = 252;
        gvar_8074267 = 0;
        *(int*)&array_bound_error_bucket = 0;
        gvar_807452C = &caml_exn_Invalid_argument;
        gvar_8074530 = &gvar_8074254;
        array_bound_error_bucket_inited = 1;
        caml_page_table_add(4, &array_bound_error_msg, &caml_last_return_address);
        array_bound_error_bucket_inited = 1;
    }
    /*BAD_CALL!*/ caml_raise(&gvar_807452C);
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
            goto loc_8062950;
        }
    }
    else {
    loc_8062950:
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
            goto loc_8062858;
        }
    }
    else {
    loc_8062858:
        v2 = caml_array_bound_error();
    }
    unsigned int* ptr0 = (unsigned int*)(v2 * 4 + v0);
    unsigned int v3 = *ptr0;
    *ptr0 = v1;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            caml_darken((int)v3);
        }
        if(!(v1 & 0x1)) {
            unsigned int v4 = caml_young_end;
            if(v4 > v1) {
                int* ptr1 = caml_young_start;
                if((unsigned int)ptr1 < v1 && ((v3 & 0x1) || v4 <= v3 || (unsigned int)ptr1 >= v3)) {
                    if(gvar_80776C8 >= gvar_80776CC) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr2 = gvar_80776C8;
                    *ptr2 = ptr0;
                    gvar_80776C8 = (int*)(ptr2 + 1);
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_unsafe_set_addr(int param0, int param1, unsigned int param2) {
    unsigned int v0 = param2;
    unsigned int* ptr0 = (unsigned int*)((param1 >> 1) * 4 + param0);
    unsigned int v1 = *ptr0;
    *ptr0 = v0;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            caml_darken((int)v1);
        }
        if(!(v0 & 0x1)) {
            unsigned int v2 = caml_young_end;
            if(v2 > v0) {
                int* ptr1 = caml_young_start;
                if((unsigned int)ptr1 < v0 && ((v1 & 0x1) || v2 <= v1 || (unsigned int)ptr1 >= v1)) {
                    if(gvar_80776C8 >= gvar_80776CC) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr2 = gvar_80776C8;
                    *ptr2 = ptr0;
                    gvar_80776C8 = (int*)(ptr2 + 1);
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

int caml_c_call() {
    unsigned int v0;
    char v1;
    int v2;
    caml_last_return_address = v0;
    caml_bottom_of_stack = &v1;
    jump v2;
}

int caml_call_gc() {
    unsigned int v0;
    char v1;
    caml_last_return_address = v0;
    caml_bottom_of_stack = &v1;
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
int caml_callback2(int* param0, int param1, int param2) {
    int v0 = param2;
    int v1 = param1;
    int result = caml_callback2_exn(param0);
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

int caml_callback2_exn(int* param0) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &sub_806AB7E;
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
int caml_callback3(int param0, int param1, int param2, int* param3) {
    int result = caml_callback3_exn(param0, param1, param2, param3);
    if((result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

int caml_callback3_exn(int param0, int param1, int param2, int* param3) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &sub_806AB7E;
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
                    result = caml_callback2_exn(ptr1);
                    if((unsigned int)(result & 0x3) == 2) {
                        caml_local_roots = v1;
                        return result;
                    }
                    ptr1 = (int*)result;
                    v8 += 2;
                }
                result = caml_callback3_exn((int)ptr1, *(int*)(v8 * 4 + param2), *(int*)(v8 * 4 + param2 + 4), *(int**)(v8 * 4 + param2 + 8));
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

int* caml_curry3() {
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
    *(ptr0 + 1) = &caml_curry3_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry3_1() {
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

int* caml_curry4() {
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
    *(ptr0 + 1) = &caml_curry4_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry4_1() {
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
    *(ptr0 + 1) = &caml_curry4_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry4_2() {
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

int* caml_curry5() {
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
    *(ptr0 + 1) = &caml_curry5_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry5_1() {
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
    *(ptr0 + 1) = &caml_curry5_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry5_2() {
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
    *(ptr0 + 1) = &caml_curry5_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry5_3() {
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

int* caml_curry6() {
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
    *(ptr0 + 1) = &caml_curry6_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry6_1() {
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
    *(ptr0 + 1) = &caml_curry6_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry6_2() {
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
    *(ptr0 + 1) = &caml_curry6_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry6_3() {
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
    *(ptr0 + 1) = &caml_curry6_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry6_4() {
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

int* caml_curry7() {
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
    *(ptr0 + 1) = &caml_curry7_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry7_1() {
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
    *(ptr0 + 1) = &caml_curry7_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry7_2() {
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
    *(ptr0 + 1) = &caml_curry7_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry7_3() {
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
    *(ptr0 + 1) = &caml_curry7_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry7_4() {
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
    *(ptr0 + 1) = &caml_curry7_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    *(ptr0 + 4) = v1;
    return ptr0 + 1;
}

int* caml_curry7_5() {
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
    gvar_8074360 = v4;
    jump v7;
}

void caml_debugger() {
}

void caml_debugger_cleanup_fork() {
}

void caml_debugger_init() {
}

// Stale decompilation - Refresh this view to re-decompile this code
char* caml_decompose_path(int* param0, char* __src) {
    int v0;
    char v1;
    int* ptr0 = param0;
    char* result = NULL;
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
        char* __dest = (char*)caml_stat_alloc(~v2);
        result = __dest;
        →strcpy(__dest, __src);
        int v4 = (int)result;
        while(1) {
            char v5 = *(char*)v4;
            if(!v5 || v5 == 58) {
                v0 = v4;
            }
            else {
                int v6 = v4 + 1;
                do {
                    v0 = v6;
                    v1 = *(char*)v6;
                    ++v6;
                }
                while(v1 && v1 != 58);
            }
            caml_ext_table_add(ptr0, v4);
            if(!*(char*)v0) {
                return result;
            }
            *(char*)v0 = 0;
            v4 = v0 + 1;
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

int caml_empty_minor_heap() {
    if(caml_young_end != caml_young_ptr) {
        caml_in_minor_collection = 1;
        caml_gc_message(2, &gvar_806B9FC, 0);
        caml_oldify_local_roots();
        for(int* i = *(int*)&caml_ref_table; gvar_80776C8 > (unsigned int)i; ++i) {
            int v0 = *i;
            caml_oldify_one(*(int**)v0, v0);
        }
        caml_oldify_mopup();
        for(unsigned int* j = *(int*)&caml_weak_ref_table; gvar_80776E4 > (unsigned int)j; ++j) {
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
        caml_gc_message(2, 134660199, 0);
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
        int v1 = caml_stat_resize(*(ptr0 + 2), v0 * 8);
        *(ptr0 + 2) = v1;
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
                    goto loc_806A066;
                }
                else {
                    result = *ptr0;
                }
            }
            while(*(int*)(result + 4) == v0);
        }
    }
    else {
    loc_806A066:
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
    loc_8069D86:
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
                    goto loc_8069D86;
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
                    goto loc_8069D86;
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_register(int param0, int param1) {
    int v0;
    int v1 = param1;
    if(!((unsigned char)v1 & 0x1)) {
        v0 = v1;
        if(!(*(char*)(((v1 >>> 12) & 0x7ff) + *(int*)((v1 >>> 23) * 4 + (int)&caml_page_table)) & 0x3)) {
            goto loc_8069C74;
        }
    }
    else {
    loc_8069C74:
        caml_invalid_argument("Gc.finalise");
    }
    unsigned int v2 = size;
    if(young >= v2) {
        int v3 = final_table;
        if(!v3) {
            unsigned int v4 = (unsigned int)caml_stat_alloc(360);
            final_table = v4;
            size = 30;
        }
        else {
            int v5 = caml_stat_resize(v3, v2 * 6 * 4);
            final_table = v5;
            size = v2 * 2;
        }
    }
    unsigned int v6 = young;
    int* ptr0 = (int*)(v6 * 3 * 4 + final_table);
    *ptr0 = param0;
    if(*(char*)(v0 - 4) == 249) {
        *(ptr0 + 2) = (*(int*)(v0 - 4) >>> 10) * 4;
        *(ptr0 + 1) = v0 - (*(int*)(v0 - 4) >>> 10) * 4;
    }
    else {
        *(ptr0 + 2) = 0;
        *(ptr0 + 1) = v1;
    }
    young = v6 + 1;
    return 1;
}

int caml_final_release() {
    running_finalisation_function = 0;
    return 1;
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
                        goto loc_8061861;
                    }
                    else {
                        return 1;
                    }
                }
            }
            result = 3;
        }
        else {
        loc_8061861:
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
            goto loc_8061FF7;
        }
        else if((unsigned int)v0 <= 63) {
            __ptr = &v1;
        }
        else {
            __ptr = caml_stat_alloc(v0 + 1);
        }
    }
    else {
    loc_8061FF7:
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
                goto loc_8061958;
            }
            else {
                do {
                    ++__nptr;
                    v3 = __nptr[0];
                    if(!v3) {
                        goto loc_8061979;
                    }
                }
                while(v3 != 46);
            loc_8061958:
                long v10 = →strtol(__nptr + 1, NULL, 10);
                v8 = (int)(v10 + 350) > v8 ? (int)(v10 + 350): v8;
            }
        }
    loc_8061979:
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
    unsigned int v0;
    caml_verb_gc = (unsigned int)(*(int*)(param0 + 12) >> 1);
    int v1 = norm_pfree();
    if(caml_percent_free != v1) {
        caml_percent_free = v1;
        caml_gc_message(32, &gvar_806C34F, v1);
    }
    norm_pmax();
    if(caml_percent_max != v0) {
        caml_percent_max = v0;
        caml_gc_message(32, "New max overhead: %d%%\n", (int)v0);
    }
    unsigned int v2 = norm_heapincr();
    if(v2 * 4 != caml_major_heap_increment) {
        caml_major_heap_increment = v2 * 4;
        caml_gc_message(32, "New heap increment size: %luk bytes\n", (unsigned int)((v2 >>> 8) & 0x3fffff));
    }
    unsigned int v3 = (unsigned int)(*(int*)(param0 + 24) >> 1);
    if((v3 < 2 ? v3: 1) != caml_allocation_policy) {
        caml_gc_message(32, "New allocation policy: %d\n", (int)(v3 < 2 ? v3: 1));
        caml_set_allocation_policy(v3 < 2 ? v3: 1);
    }
    int v4 = norm_minsize();
    if(caml_minor_heap_size != v4) {
        caml_gc_message(32, "New minor heap size: %luk bytes\n", v4 >>> 10);
        caml_set_minor_heap_size((unsigned int)v4);
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
                    loc_8067815:
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
                            goto loc_8067815;
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
unsigned int* caml_get_exception_backtrace() {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7 = caml_local_roots;
    unsigned int v8 = caml_local_roots;
    unsigned int* result = NULL;
    int* ptr0 = NULL;
    unsigned int v9 = 0;
    int v10 = 0;
    unsigned int v11 = v7;
    caml_local_roots = &v11;
    int v12 = 1;
    int v13 = 4;
    int* ptr1 = &result;
    int* ptr2 = &ptr0;
    int* ptr3 = &v9;
    int* ptr4 = &v10;
    ptr0 = caml_alloc(caml_backtrace_pos, 0);
    if(!(caml_backtrace_pos ? 0: 1) && caml_backtrace_pos < 0x80000000) {
        int v14 = 0;
        do {
            extract_location_info(v6, (int)&v3);
            if(v3) {
                v10 = caml_copy_string(v4);
                unsigned int v15 = (unsigned int)caml_alloc_small(5, 0);
                v9 = v15;
                *(int*)v15 = ((v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
                *(int*)(v9 + 4) = v10;
                *(int*)(v9 + 8) = v1 * 2 + 1;
                *(int*)(v9 + 12) = v5 * 2 + 1;
                *(int*)(v9 + 16) = v2 * 2 + 1;
            }
            else {
                unsigned int v16 = (unsigned int)caml_alloc_small(1, 1);
                v9 = v16;
                *(int*)v16 = ((v0 < 1 ? -1: 0) & 0xfffffffe) + 3;
            }
            caml_modify(&ptr0[v14], v9);
            ++v14;
        }
        while(caml_backtrace_pos > v14);
    }
    unsigned int* ptr5 = (unsigned int*)caml_alloc_small(1, 0);
    result = ptr5;
    *ptr5 = ptr0;
    caml_local_roots = v8;
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
    caml_set_minor_heap_size((unsigned int)(v3 * 4));
    unsigned int v4 = norm_heapincr();
    caml_major_heap_increment = v4 * 4;
    int v5 = norm_pfree();
    caml_percent_free = v5;
    norm_pmax();
    caml_percent_max = v0;
    caml_init_major_heap();
    caml_gc_message(32, "Initial minor heap size: %luk bytes\n", caml_minor_heap_size >>> 10);
    caml_gc_message(32, "Initial major heap size: %luk bytes\n", (unsigned int)((v1 >>> 8) & 0x3fffff));
    caml_gc_message(32, "Initial space overhead: %lu%%\n", (int)caml_percent_free);
    caml_gc_message(32, "Initial max overhead: %lu%%\n", (int)caml_percent_max);
    caml_gc_message(32, "Initial heap increment: %luk bytes\n", caml_major_heap_increment >>> 10);
    return caml_gc_message(32, "Initial allocation policy: %d\n", (int)caml_allocation_policy);
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
            if(gvar_80776C8 >= gvar_80776CC) {
                caml_realloc_ref_table((int*)&caml_ref_table);
            }
            result = (int*)&gvar_80776C8;
            unsigned int* ptr1 = gvar_80776C8;
            *ptr1 = ptr0;
            gvar_80776C8 = (int*)(ptr1 + 1);
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
int* caml_install_signal_handler(int param0, unsigned int* param1) {
    unsigned int v0 = caml_local_roots;
    unsigned int v1 = caml_local_roots;
    int v2 = 1;
    int v3 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* result = NULL;
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
    int v8 = caml_set_signal_action((int)v6, (unsigned int)(int*)((char*)param1 - 1) > 2 ? 2: *(int*)((int)(int*)((int)param1 * 4) + (int)&gvar_806B810));
    if(v8 == 1) {
        result = (int*)0x3;
    }
    else if(v8 == 2) {
        int* ptr4 = (int*)caml_alloc_small(1, 0);
        result = ptr4;
        *ptr4 = *(int*)(v7 * 4 + caml_signal_handlers);
    }
    else if(!v8) {
        result = (int*)0x1;
    }
    else {
        caml_sys_error(1);
    }
    if(!((unsigned char)param1 & 0x1)) {
        if(!caml_signal_handlers) {
            int* ptr5 = caml_alloc(65, 0);
            caml_signal_handlers = ptr5;
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
                goto loc_8061106;
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
        loc_8061106:
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

int caml_is_printable(int param0) {
    if(!locale_is_set.2848) {
        →setlocale(0, (char*)&gvar_806C368);
        locale_is_set.2848 = 1;
    }
    unsigned short** ptr0 = →__ctype_b_loc();
    return (((unsigned int)((unsigned int)ptr0[0][param0 >> 1] & 0x4000) < 1 ? -1: 0) & 0xfffffffe) + 3;
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
    unsigned int v1;
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
        ptr5 = (void*)0x806B69F;
        →getenv();
        ptr6 = ptr0;
        if(ptr0) {
            goto loc_805BF73;
        }
    }
    else {
    loc_805BF73:
        while(1) {
            v19 = &gvar_806B6E8;
            ptr2 = &v11;
            do {
                int v22 = (unsigned int)*ptr6;
                if(!(unsigned char)v22) {
                    break loc_805BF73;
                }
                else {
                    ++ptr6;
                    v18 = v22 - 79;
                }
            }
            while((unsigned char)v18 > 39);
            /*BAD_CALL!*/ *(int*)((v18 & 0xFF) * 4 + (int)&gvar_806B6E8){sub_805BF27}((int)v5, (int)v12, (int)v6, (int)v13, v7, v10, v2, v14, v8, v11, v4, v15, v9, v16, v21, v20, (int)ptr4, (int)ptr3, v3);
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
        v19 = &gvar_806DE9C;
        ptr2 = (int*)&caml_data_segments;
        if(v1) {
            goto loc_805C026;
        }
    }
    else {
        v1 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
    loc_805C026:
        do {
            int v25 = caml_page_table_add(4, (int)v1, *(int*)((int)(int*)((int)ptr6 * 8) + v19));
            if(v25) {
                /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            }
            ++ptr6;
            v1 = *(unsigned int*)((int)(int*)((int)ptr6 * 8) + (int)ptr2);
        }
        while(v1);
    }
    caml_code_area_start = caml_code_segments;
    unsigned int v26 = gvar_806DEF8;
    caml_code_area_end = v26;
    unsigned int v27 = gvar_806DEFC;
    if(v27) {
        unsigned int v28 = caml_code_area_start;
        int v29 = 1;
        do {
            v28 = v27 >= v28 ? v28: v27;
            unsigned int v30 = *(unsigned int*)(v29 * 8 + (int)&gvar_806DEF8);
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
    char* __src1 = ptr7 ? ptr7: (char*)&gvar_806C368;
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

// Stale decompilation - Refresh this view to re-decompile this code
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

int caml_make_vect(int param0, int* param1) {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    int result = 0;
    int* ptr0 = &v0;
    caml_local_roots = &ptr0;
    int v2 = 1;
    int v3 = 1;
    int* ptr1 = &result;
    unsigned int v4 = (unsigned int)(param0 >> 1);
    if(!v4) {
        result = &gvar_807AD44;
    }
    else {
        int v5 = 1;
        int v6 = 2;
        int* ptr2 = &param0;
        int* ptr3 = &param1;
        int* ptr4 = param1;
        int* ptr5 = (int*)((int)ptr4 & 0x1);
        if(!ptr5) {
            int* ptr6 = ptr4;
            if(!(*(char*)((int)(int*)((int)(int*)((int)ptr4 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr4 >>> 23) * 4) + (int)&caml_page_table)) & 0x7) || *(char*)&ptr4[-1] != 253) {
                goto loc_806261F;
            }
            else {
                *(long long*)&ptr6 = (double)*(long long*)&ptr4[0];
                unsigned int v7 = v4 * 2;
                if(v7 > 0x3fffff) {
                    v7 = (unsigned int)caml_invalid_argument("Array.make");
                }
                result = (int)caml_alloc(v7, 254);
                unsigned int v8 = 0;
                do {
                    *(long long*)(v8 * 8 + result) = *(double*)&ptr6;
                    ++v8;
                }
                while(v8 < v4);
            }
        }
        else {
        loc_806261F:
            if(v4 > 0x3fffff) {
                ptr4 = (int*)caml_invalid_argument("Array.make");
            }
            if(v4 <= 0xff) {
                result = caml_alloc_small((int)v4, 0);
                int v9 = 0;
                do {
                    *(int**)(v9 + result) = param1;
                    v9 += 4;
                }
                while(v4 * 4 != v9);
            }
            else {
                if(!ptr5 && caml_young_end > (unsigned int)ptr4 && caml_young_start < (unsigned int)ptr4) {
                    caml_minor_collection();
                    result = (int)caml_alloc_shr(v4, 0);
                    int v10 = 0;
                    do {
                        *(int**)(v10 + result) = param1;
                        v10 += 4;
                    }
                    while(v4 * 4 != v10);
                }
                else {
                    result = (int)caml_alloc_shr(v4, 0);
                    unsigned int v11 = 0;
                    do {
                        caml_initialize((unsigned int*)(v11 * 4 + result), param1);
                        ++v11;
                    }
                    while(v11 < v4);
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
int caml_minor_collection() {
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ml_array_bound_error() {
    unsigned int v0;
    __int128 v1;
    __int128 v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
    __int128 v8;
    char v9;
    v10[v11] = ffree(v1);
    v10[v11 + 1] = ffree(v2);
    v10[v11 + 2] = ffree(v3);
    v10[v11 + 3] = ffree(v4);
    v10[v11 + 4] = ffree(v5);
    v10[v11 + 5] = ffree(v6);
    v10[v11 + 6] = ffree(v7);
    v10[v11 + 7] = ffree(v8);
    caml_last_return_address = v0;
    caml_bottom_of_stack = &v9;
    /*BAD_CALL!*/ caml_array_bound_error();
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

int* caml_ml_out_channels_list() {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int* result = (int*)0x1;
    int v2 = caml_all_opened_channels;
    if(v2) {
        int* ptr0 = NULL;
        int v3 = 0;
        int v4 = 1;
        int v5 = 3;
        int* ptr1 = &result;
        int* ptr2 = &ptr0;
        int* ptr3 = &v3;
        do {
            if(!*(int*)(v2 + 20)) {
                v3 = caml_alloc_channel(v2);
                ptr0 = result;
                int* ptr4 = (int*)caml_alloc_small(2, 0);
                result = ptr4;
                *ptr4 = v3;
                *(unsigned int*)(result + 1) = ptr0;
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
                    if(gvar_80776C8 >= gvar_80776CC) {
                        caml_realloc_ref_table(&caml_ref_table);
                    }
                    result = (int*)&gvar_80776C8;
                    unsigned int* ptr3 = gvar_80776C8;
                    *ptr3 = ptr0;
                    gvar_80776C8 = (int*)(ptr3 + 1);
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
        loc_805CEBB:
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
        goto loc_805CEBB;
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
    int* ptr0;
    int* ptr1 = caml_globals_scanned;
    int v0 = caml_globals_inited;
    if(v0 >= (int)ptr1) {
        unsigned int v1 = *(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&caml_globals);
        if(v1) {
            do {
                int* ptr2 = (int*)(v1 - 4);
                unsigned int v2 = 0;
                unsigned int v3 = 0;
                if((*ptr2 >>> 10)) {
                    do {
                        int v4 = v2 * 4 + v1;
                        int* ptr3 = *(int**)v4;
                        if(!((unsigned char)ptr3 & 0x1) && caml_young_end > (unsigned int)ptr3 && caml_young_start < (unsigned int)ptr3) {
                            caml_oldify_one(ptr3, v4);
                        }
                        ++v3;
                        v2 = v3;
                    }
                    while((unsigned int)(*ptr2 >>> 10) > v3);
                }
                ptr1 = (int*)((char*)ptr1 + 1);
                v0 = caml_globals_inited;
                if(v0 < (int)ptr1) {
                    break;
                }
                else {
                    v1 = *(unsigned int*)((int)(int*)((int)ptr1 * 4) + (int)&caml_globals);
                }
            }
            while(!v1);
        }
    }
    caml_globals_scanned = v0;
    int* ptr4 = caml_dyn_globals;
    ptr1 = caml_dyn_globals;
    if(ptr4) {
        do {
            int v5 = *ptr1;
            if((*(int*)(v5 - 4) >>> 10)) {
                unsigned int v6 = 0;
                unsigned int v7 = 0;
                do {
                    int v8 = v6 * 4 + v5;
                    int* ptr5 = *(int**)v8;
                    if(!((unsigned char)ptr5 & 0x1) && caml_young_end > (unsigned int)ptr5 && caml_young_start < (unsigned int)ptr5) {
                        caml_oldify_one(ptr5, v8);
                    }
                    ++v7;
                    v6 = v7;
                }
                while((unsigned int)(*(int*)(v5 - 4) >>> 10) > v7);
            }
            ptr0 = *(unsigned int*)(ptr1 + 1);
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
        while(ptr0);
    }
    if(!caml_frame_descriptors) {
        caml_init_frame_descriptors();
    }
    int* ptr6 = caml_bottom_of_stack;
    ptr1 = caml_bottom_of_stack;
    unsigned int v9 = caml_last_return_address;
    unsigned int v10 = caml_gc_regs;
    if(ptr6) {
    loc_805CA17:
        while(1) {
            unsigned int v11 = caml_frame_descriptors_mask;
            int v12 = (v9 >>> 3) & v11;
            unsigned int v13 = caml_frame_descriptors;
            int* i;
            for(i = *(unsigned int*)(v12 * 4 + v13); *i != v9; i = *(unsigned int*)(v12 * 4 + v13)) {
                v12 = (v12 + 1) & v11;
            }
            if(*(short*)(i + 1) == 0xffff) {
                break;
            }
            else {
                int v14 = (unsigned int)*(short*)((char*)i + 6);
                if(v14 > 0) {
                    short* ptr7 = (short*)(i + 2);
                    while(1) {
                        int v15 = (unsigned int)*ptr7;
                        int v16 = ((unsigned char)v15 & 0x1) != 0 ? (v15 >> 1) * 4 + v10: v15 + (int)ptr1;
                        int* ptr8 = *(int**)v16;
                        if(!((unsigned char)ptr8 & 0x1) && caml_young_end > (unsigned int)ptr8 && caml_young_start < (unsigned int)ptr8) {
                            caml_oldify_one(ptr8, v16);
                        }
                        --v14;
                        if(v14 <= 0) {
                            break;
                        }
                        else {
                            ++ptr7;
                        }
                    }
                }
                ptr1 = (int*)(((unsigned int)*(short*)(i + 1) & 0xfffc) + (int)ptr1);
                v9 = *(unsigned int*)(ptr1 - 1);
            }
        }
        unsigned int* ptr9 = (unsigned int*)(ptr1 + 2);
        ptr1 = *ptr9;
        v9 = *(ptr9 + 1);
        v10 = *(ptr9 + 2);
        if(ptr1) {
            goto loc_805CA17;
        }
    }
    unsigned int* ptr10 = caml_local_roots;
    ptr1 = NULL;
    if(ptr10) {
        do {
            int v17 = 0;
            if(!(*(int*)(ptr10 + 1) ? 0: 1) && *(int*)(ptr10 + 1) >= 0) {
                do {
                    int* ptr11 = ptr1;
                    if(!(*(int*)(ptr10 + 2) ? 0: 1) && *(int*)(ptr10 + 2) >= 0) {
                        do {
                            int v18 = (int)(int*)((int)ptr11 * 4) + *((int*)(v17 * 4 + (int)ptr10) + 3);
                            int* ptr12 = *(int**)v18;
                            if(!((unsigned char)ptr12 & 0x1) && caml_young_end > (unsigned int)ptr12 && caml_young_start < (unsigned int)ptr12) {
                                caml_oldify_one(ptr12, v18);
                            }
                            ptr11 = (int*)((char*)ptr11 + 1);
                        }
                        while(*(int*)(ptr10 + 2) > (int)ptr11);
                    }
                    ++v17;
                }
                while(*(int*)(ptr10 + 1) <= v17);
            }
            ptr10 = *ptr10;
        }
        while(!ptr10);
    }
    caml_scan_global_young_roots(&caml_oldify_one);
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
                goto loc_805EC52;
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
            loc_805EC52:
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
            goto loc_80667DB;
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
                        →fprintf(stderr, (char*)&gvar_806C09B, (int*)((int)__s >> 1));
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
                                →fprintf(stderr, (char*)&gvar_806C09F, v9);
                                break;
                            }
                            default: {
                                →fputc(95, stderr);
                                break;
                            }
                        }
                    }
                    →fwrite((void*)&gvar_806C0A2, 1, 2, stderr);
                }
            }
            goto loc_8066998;
        }
        case 2: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
        loc_8066C12:
            v1 = (int)(v7 * 4);
            int v13 = (int)(v7 * 4);
            *(int*)(*ptr0 + (int)(v7 * 4)) = v5 * 2 + 1;
            caml_modify((unsigned int*)(*(ptr0 + 1) + (int)(v7 * 4)), *(unsigned int*)(ptr0 + 7));
            caml_modify((unsigned int*)(*(ptr0 + 2) + v1), *(unsigned int*)(ptr0 + 8));
            caml_modify((unsigned int*)(*(ptr0 + 3) + v1), *(unsigned int*)(ptr0 + 9));
            goto loc_80667DB;
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
        loc_80667DB:
            int v18 = *(int*)(v10 + 20);
            int v19 = v5;
            int v20 = (int)*(short*)(v19 * 2 + v18);
            v1 = (int)*(short*)(v19 * 2 + v18);
            if(v20) {
            loc_8066C6E:
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
                        goto loc_8066D03;
                    }
                    else {
                        v2 = (int)*(short*)(*(int*)(v10 + 44) + v0);
                    }
                }
                else {
                loc_8066D03:
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
        loc_8066998:
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
                        goto loc_8066C6E;
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
            loc_8066B8C:
                if(caml_parser_trace) {
                    →fprintf(stderr, "State %d: shift to state %d\n", v5, (int)*(short*)(v1 * 2 + *(int*)(v10 + 44)));
                }
            loc_8066BC2:
                v5 = (int)*(short*)(v1 * 2 + *(int*)(v10 + 44));
                ++v7;
                if((unsigned int)(*(ptr0 + 4) >> 1) > v7) {
                    goto loc_8066C12;
                }
                else {
                    *(ptr0 + 13) = v7 * 2 + 1;
                    *(ptr0 + 14) = v5 * 2 + 1;
                    *(ptr0 + 15) = v6 * 2 + 1;
                    return 5;
                }
            }
        loc_8066A4B:
            if(v6 <= 2) {
                while(1) {
                    v19 = *(int*)(v7 * 4 + *ptr0) >> 1;
                    int v27 = *(int*)(v10 + 28);
                    v0 = (int)*(short*)(v19 * 2 + v27) + 0x100;
                    if((int)*(short*)(v19 * 2 + v27) && v0 >= 0 && *(int*)(v10 + 40) >> 1 >= v0 && *(short*)(v0 * 2 + *(int*)(v10 + 48)) == 0x100) {
                    loc_8066A81:
                        v1 = v0;
                        v6 = 3;
                        if(!caml_parser_trace) {
                            goto loc_8066BC2;
                        }
                        else {
                            →fprintf(stderr, "Recovering in state %d\n", v19);
                            v6 = 3;
                            goto loc_8066B8C;
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
                goto loc_8066A81;
            }
            else if(!(*(ptr0 + 6) >>> 1)) {
                return 3;
            }
            else {
                if(caml_parser_trace) {
                    →fwrite("Discarding last token read\n", 1, 27, stderr);
                }
                *(ptr0 + 6) = -1;
                goto loc_80667DB;
            }
        }
        case 5: {
            v7 = (unsigned int)(*(ptr0 + 13) >> 1);
            v5 = *(ptr0 + 14) >> 1;
            v6 = *(ptr0 + 15) >> 1;
            goto loc_8066A4B;
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
    camlSys__entry();
    ++caml_globals_inited;
    camlHashtbl__entry();
    ++caml_globals_inited;
    camlCallback__entry();
    ++caml_globals_inited;
    camlUnix__entry(param0, param1);
    ++caml_globals_inited;
    camlUnixLabels__entry();
    ++caml_globals_inited;
    /*NO_RETURN*/ camlSource__entry();
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
    int v0;
    int v1;
    int v2;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &v3;
    caml_local_roots = &ptr2;
    int v6 = 1;
    int v7 = 1;
    int* ptr3 = &v0;
    int v8 = caml_alloc_small(2, 0);
    v0 = v8;
    *(int*)v8 = param0;
    *(int*)(v0 + 4) = param1;
    caml_raise(v0);
    int* ptr4 = &v2;
    /*BAD_CALL!*/ caml_raise_with_arg(&caml_exn_Sys_error, v1);
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

int caml_raise_with_string(int param0, int param1) {
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
    loc_806A2E5:
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
                char* __dest = (char*)caml_stat_alloc(~v0);
                →strcpy(__dest, (char*)ptr0 + 19);
                caml_ext_table_add(param1, (int)__dest);
                goto loc_806A2E5;
            }
        }
        char* __dest = (char*)caml_stat_alloc(~v0);
        →strcpy(__dest, (char*)ptr0 + 19);
        caml_ext_table_add(param1, (int)__dest);
        goto loc_806A2E5;
    }
    else {
        return result;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_realloc_ref_table(int* param0) {
    int v0;
    int result;
    int v1;
    int* ptr0 = param0;
    int v2 = ptr0[0];
    if(!v2) {
        result = caml_alloc_table(ptr0, (int)(caml_minor_heap_size >>> 5), 0x100);
    }
    else if(ptr0[4] == ptr0[2]) {
        caml_gc_message(8, "ref_table threshold crossed\n", 0);
        ptr0[4] = ptr0[1];
        result = caml_urge_major_slice();
    }
    else {
        int v3 = ptr0[3];
        int v4 = ptr0[5] * 2;
        ptr0[5] *= 2;
        caml_gc_message(8, "Growing ref_table to %ldk bytes\n", (ptr0[6] + v4) * 4 / 0x400);
        int v5 = ptr0[0];
        →realloc();
        ptr0[0] = v1;
        if(!v1) {
            v0 = /*NO_RETURN*/ caml_fatal_error("Fatal error: ref_table overflow\n");
        }
        int v6 = ptr0[5];
        int v7 = (ptr0[6] + v6) * 4 + v0;
        ptr0[1] = (ptr0[6] + v6) * 4 + v0;
        ptr0[2] = v6 * 4 + v0;
        result = ((v3 - v2) & 0xfffffffc) + v0;
        ptr0[3] = ((v3 - v2) & 0xfffffffc) + v0;
        ptr0[4] = v7;
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
                goto loc_80689E9;
            }
        }
        while(1);
    }
    else {
    loc_80689E9:
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
    char* ptr0 = caml_decompose_path(&v0, __src);
    int result = caml_search_in_path(&v0, __src1);
    caml_stat_free((int)ptr0);
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
    loc_806A433:
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
    loc_806A4F8:
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
        goto loc_806A4F8;
    }
    else {
        do {
            ++ptr1;
            v0 = ptr1[0];
            if(!v0) {
                goto loc_806A433;
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
            goto loc_8062DE8;
        }
        else {
            result = (int)((unsigned int)(param1 - v7) + v10);
            ptr0[4] = (int)((unsigned int)(param1 - v7) + v10);
        }
    }
    else {
    loc_8062DE8:
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
void* caml_set_minor_heap_size(unsigned int param0) {
    unsigned int v0;
    if(caml_young_end != caml_young_ptr) {
        caml_minor_collection();
    }
    int v1 = caml_aligned_malloc((int)param0, 0, (int)&v0);
    int v2 = v1;
    if(!v1) {
        v1 = caml_raise_out_of_memory();
    }
    unsigned int v3 = (unsigned int)(v1 + param0);
    int v4 = caml_page_table_add(2, v1, (int)v3);
    if(v4) {
        caml_raise_out_of_memory();
    }
    unsigned int v5 = caml_young_start;
    if(v5) {
        caml_page_table_remove(2, (int)v5, (int)caml_young_end);
        →free();
    }
    caml_young_base = v0;
    caml_young_start = v2;
    caml_young_end = v3;
    caml_young_limit = v2;
    caml_young_ptr = v3;
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

int caml_start_program(int* param0) {
    int result;
    unsigned int v0 = caml_gc_regs;
    unsigned int v1 = caml_last_return_address;
    unsigned int v2 = caml_bottom_of_stack;
    int v3 = &sub_806AB7E;
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
int caml_stat_resize(int param0, int param1) {
    int result;
    int v0;
    →realloc();
    if(!v0) {
        result = caml_raise_out_of_memory();
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
                    goto loc_806225D;
                }
                else if(v9 != 0) {
                    return 1;
                }
            }
            result = 3;
        }
        else {
        loc_806225D:
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
        v5 = caml_copy_string((int)ptr4);
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

int* caml_sys_get_argv() {
    unsigned int v0 = caml_local_roots;
    int v1 = 0;
    int* ptr0 = NULL;
    int* result = NULL;
    unsigned int v2 = v0;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 3;
    int* ptr1 = &v1;
    int* ptr2 = &ptr0;
    int* ptr3 = &result;
    v1 = caml_copy_string((int)caml_exe_name);
    ptr0 = caml_copy_string_array(caml_main_argv);
    int* ptr4 = (int*)caml_alloc_small(2, 0);
    result = ptr4;
    *ptr4 = v1;
    *(int**)(result + 1) = ptr0;
    caml_local_roots = v0;
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

int caml_sys_getcwd() {
    char v0;
    char* ptr0 = →getcwd(&v0, 0x1000);
    if(!ptr0) {
        caml_sys_error(1);
    }
    return caml_copy_string((int)&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_getenv(char* __name) {
    char* ptr0 = →getenv(__name);
    if(!ptr0) {
        ptr0 = (char*)caml_raise_not_found();
    }
    return caml_copy_string((int)ptr0);
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

// Stale decompilation - Refresh this view to re-decompile this code
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
            goto loc_8068D5F;
        }
    }
    else {
    loc_8068D5F:
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_get(int param0, int param1) {
    int v0;
    unsigned int v1 = caml_local_roots;
    unsigned int v2 = caml_local_roots;
    int v3 = 1;
    int v4 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    int v5 = 0;
    int* ptr2 = &v2;
    caml_local_roots = &ptr2;
    int v6 = 1;
    int v7 = 2;
    int* ptr3 = &result;
    int* ptr4 = &v5;
    int v8 = (param1 >> 1) + 1;
    if(v8) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v8) {
            goto loc_80691CA;
        }
    }
    else {
    loc_80691CA:
        v8 = caml_invalid_argument("Weak.get");
    }
    int v9 = *(int*)(v8 * 4 + v0);
    if(caml_weak_none == v9) {
        result = 1;
    }
    else {
        v5 = v9;
        if(!caml_gc_phase && !((unsigned char)v9 & 0x1) && (*(char*)(((v9 >>> 12) & 0x7ff) + *(int*)((v9 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
            int v10 = 0;
            caml_darken(v9);
        }
        int v11 = caml_alloc_small(1, 0);
        result = v11;
        *(int*)v11 = v5;
    }
    caml_local_roots = v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* caml_weak_get_copy(int param0, int param1) {
    int v0;
    unsigned int* result1;
    int v1;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    unsigned int* result = NULL;
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
            goto loc_8068F59;
        }
    }
    else {
    loc_8068F59:
        v1 = caml_invalid_argument("Weak.get");
    }
    int* ptr6 = *(int**)((unsigned int)((param1 >> 1) + 1) * 4 + v1);
    if(caml_weak_none == ptr6) {
        caml_local_roots = v2;
        result1 = (unsigned int*)0x1;
    }
    else if(!((unsigned char)ptr6 & 0x1) && (*(char*)((int)(int*)((int)(int*)((int)ptr6 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr6 >>> 23) * 4) + (int)&caml_page_table)) & 0x3)) {
        ptr2 = caml_alloc((unsigned int)(ptr6[-1] >>> 10), (int)*(char*)&ptr6[-1]);
        int* ptr7 = *(int**)((unsigned int)((param1 >> 1) + 1) * 4 + param0);
        if(caml_weak_none == ptr7) {
            caml_local_roots = v2;
            result1 = (unsigned int*)0x1;
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
                        int v11 = ptr8[v8];
                        if(!caml_gc_phase && !((unsigned char)v11 & 0x1) && (*(char*)(((v11 >>> 12) & 0x7ff) + *(int*)((v11 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
                            v0 = 0;
                            caml_darken(v11);
                        }
                        int* ptr10 = (int*)(v10 + (int)ptr2);
                        unsigned int v12 = *ptr10;
                        *ptr10 = v11;
                        int* ptr11 = (int*)(v10 + (int)ptr2);
                        if((*(char*)((int)(int*)((int)(int*)((int)ptr11 >>> 12) & 0x7ff) + *(int*)((int)(int*)((int)(int*)((int)ptr11 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
                            if(!caml_gc_phase) {
                                v0 = 0;
                                caml_darken((int)v12);
                            }
                            if(!((unsigned char)v11 & 0x1)) {
                                unsigned int v13 = caml_young_end;
                                if(v13 > (unsigned int)v11) {
                                    unsigned int v14 = caml_young_start;
                                    if(v14 < (unsigned int)v11 && (((unsigned char)v12 & 0x1) || v13 <= v12 || v14 >= v12)) {
                                        if(gvar_80776C8 >= gvar_80776CC) {
                                            caml_realloc_ref_table((int*)&caml_ref_table);
                                        }
                                        unsigned int* ptr12 = gvar_80776C8;
                                        *ptr12 = (int*)(v10 + (int)ptr2);
                                        gvar_80776C8 = (int*)(ptr12 + 1);
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
            unsigned int* ptr13 = (unsigned int*)caml_alloc_small(1, 0);
            result = ptr13;
            *ptr13 = ptr2;
            caml_local_roots = v2;
            return result;
        }
    }
    else {
        ptr2 = ptr6;
        unsigned int* ptr13 = (unsigned int*)caml_alloc_small(1, 0);
        result = ptr13;
        *ptr13 = ptr2;
        caml_local_roots = v2;
        result1 = result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_set(int param0, int param1, unsigned int* param2) {
    int v0;
    if((int*)((param1 >> 1) + 1)) {
        v0 = param0;
        if((unsigned int)(int*)((param1 >> 1) + 1) >= (unsigned int)(*(int*)(param0 - 4) >>> 10)) {
            goto loc_8068EAA;
        }
    }
    else {
    loc_8068EAA:
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
    unsigned int v0;
    char v1;
    __SyntheticTypeUnknown v2;
    unsigned int v3;
    int v4;
    int v5 = v4;
    int v6 = param1;
    int v7 = param0;
    unsigned int* ptr0 = compare_stack;
loc_805FDC7:
    while(1) {
        char v8 = v6 == v5;
        int v9 = (unsigned int)(v8 ? 1: 0) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
        if(!v8 || !v7) {
            if(!((unsigned char)v5 & 0x1)) {
                if(((unsigned char)v6 & 0x1)) {
                    param0 = v5;
                    if(!(*(char*)(((param0 >>> 12) & 0x7ff) + *(int*)((param0 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                        return result;
                    }
                    char v10 = *(char*)(param0 - 4);
                    if(v10 != 250) {
                        if(v10 == 0xFF) {
                            param1 = v5;
                            int v11 = *(int*)(*(int*)param1 + 24);
                            if(v11) {
                                caml_compare_unordered = 0;
                                result = v11(param1, v6);
                                if((!caml_compare_unordered || v7) && !result) {
                                    goto loc_806031C;
                                }
                            }
                        }
                        return result;
                    }
                    v5 = *(int*)v5;
                    goto loc_805FDC7;
                }
                else {
                    int v12 = v5;
                    int v13 = v12;
                    if((*(char*)(((v12 >>> 12) & 0x7ff) + *(int*)((v12 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                        int v14 = v6;
                        int v15 = v14;
                        if((*(char*)(((v6 >>> 12) & 0x7ff) + *(int*)((v14 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                            char* ptr1 = (char*)(v13 - 4);
                            int v16 = (int)*ptr1;
                            param1 = (int)(v16 & 0xFF);
                            int v17 = v15 - 4;
                            int v18 = v17;
                            (unsigned int)(v3 & 0xFF) = *(char*)v17;
                            if(param1 == 250) {
                                v5 = *(int*)v5;
                                goto loc_805FDC7;
                            }
                            else {
                                param0 = (int)(unsigned int)(v3 & 0xFF);
                                if(param0 == 250) {
                                    v6 = *(int*)v6;
                                    goto loc_805FDC7;
                                }
                                else if(param0 != param1) {
                                    return result;
                                }
                                else {
                                    int v19 = v16 + 9;
                                    char v20 = (unsigned char)v19 == 8;
                                    char v21 = __parity__((unsigned char)v19 - 8);
                                    char v22 = (unsigned char)v19 < 8;
                                    if((v22 || v20)) {
                                        switch(v19) {
                                            case 1: {
                                                goto loc_8060176;
                                            }
                                            case 0: 
                                            case 2: {
                                            loc_8060153:
                                                compare_free_stack();
                                                caml_invalid_argument("equal: functional value");
                                            loc_8060176:
                                                if(*(int*)(v15 + 4) >> 1 != *(int*)(v13 + 4) >> 1) {
                                                    return result;
                                                }
                                                goto loc_806031C;
                                            }
                                            case 3: {
                                                goto loc_806020F;
                                            }
                                            case 4: {
                                                compare_free_stack();
                                                caml_invalid_argument("equal: abstract value");
                                                goto loc_8060153;
                                            }
                                            case 5: {
                                                goto loc_805FFEC;
                                            }
                                            case 6: {
                                                char v23 = v1 - 1;
                                                v2[v23] = *(double*)v5;
                                                v1 = v23 - 1;
                                                v2[v1] = *(double*)v6;
                                                v2[v41] = fucomi(v2[v1], v2[v1 + 1]);
                                                if(!v22 && !v20) {
                                                    return result;
                                                }
                                                v2[v41] = fucomi(v2[v1], v2[v1 + 1]);
                                                if(!v22 && !v20) {
                                                    return result;
                                                }
                                                v2[v41] = fucomi(v2[v1], v2[v1 + 1]);
                                                if((!v21 && v20)) {
                                                    v1 += 2;
                                                }
                                                else if(!v7) {
                                                    return result;
                                                }
                                                else {
                                                    v2[v41] = fucomip(v2[v1], v2[v1]);
                                                    v2[v41] = fucomip(v2[v1], v2[v1]);
                                                }
                                                goto loc_806031C;
                                            }
                                            case 7: {
                                                param1 = *(int*)ptr1 >>> 11;
                                                if(*(int*)v18 >>> 11 != param1) {
                                                    return result;
                                                }
                                                else if(param1) {
                                                    char v24 = v1 - 1;
                                                    v2[v24] = *(double*)v13;
                                                    v1 = v24 - 1;
                                                    v2[v1] = *(double*)v15;
                                                    v2[v41] = fucomi(v2[v1], v2[v1 + 1]);
                                                    return result;
                                                }
                                                goto loc_806031C;
                                            }
                                            case 8: {
                                                int v25 = *(*(int**)v6 + 2);
                                                if(*(int*)(*(unsigned int**)v5 + 2) != v25) {
                                                    →strcmp();
                                                    return result;
                                                }
                                                if(!v25) {
                                                    compare_free_stack();
                                                    caml_invalid_argument("equal: abstract value");
                                                }
                                                caml_compare_unordered = 0;
                                                result = v25(v5, v6);
                                                if((caml_compare_unordered && !v7) || result) {
                                                    return result;
                                                }
                                                goto loc_806031C;
                                            }
                                            default: {
                                                throw 0;
                                            }
                                        }
                                    loc_805FFEC:
                                        if(!(unsigned char)v9) {
                                            int v26 = caml_string_length(v5);
                                            int v27 = /*BAD_CALL!*/ caml_string_length(v6);
                                            int v28 = →memcmp((void*)v5, (void*)v6, (unsigned int)v27 <= (unsigned int)v26 ? v27: v26);
                                            if(v28 < 0 || v28 > 0 || v27 != v26) {
                                                return result;
                                            }
                                        }
                                        goto loc_806031C;
                                    }
                                    else {
                                    loc_806020F:
                                        v3 = (unsigned int)(*(int*)ptr1 >>> 10);
                                        if(*(int*)v18 >>> 10 != v3) {
                                            return result;
                                        }
                                        else if(!v3) {
                                            goto loc_806031C;
                                        }
                                        else if(v3 <= 1) {
                                        loc_8060302:
                                            v5 = *(int*)v5;
                                            v6 = *(int*)v6;
                                            goto loc_805FDC7;
                                        }
                                        else {
                                            ptr0 += 3;
                                            unsigned int v29 = compare_stack_limit;
                                            if(v29 > (unsigned int)ptr0) {
                                            loc_80602E9:
                                                *ptr0 = v13 + 4;
                                                *(int*)(ptr0 + 1) = v15 + 4;
                                                *(int*)(ptr0 + 2) = v3 - 1;
                                                goto loc_8060302;
                                            }
                                            else {
                                                unsigned int v30 = compare_stack;
                                                unsigned int v31 = v30;
                                                int v32 = ((v29 - v30) >> 2) * 0x55555556;
                                                int v33 = v32;
                                                if((unsigned int)v32 > 0xfffff) {
                                                    compare_stack_overflow();
                                                }
                                                unsigned int v34 = compare_stack;
                                                if(v34 == &compare_stack_init) {
                                                    v0 = (unsigned int)(v33 * 12);
                                                    →malloc();
                                                    v18 = v4;
                                                    if(!v4) {
                                                        compare_stack_overflow();
                                                    }
                                                    int v35 = 0x300;
                                                    int v36 = v18;
                                                    v16 = &compare_stack_init;
                                                    while(v35 != 0) {
                                                        *(int*)v36 = *(int*)v16;
                                                        v16 += 4;
                                                        v36 += 4;
                                                        --v35;
                                                    }
                                                loc_80602C7:
                                                    param0 = v18;
                                                    compare_stack = param0;
                                                    compare_stack_limit = (unsigned int)(v33 * 12 + param0);
                                                    ptr0 = (unsigned int*)((int)(int*)((int)(int*)((int)ptr0 - v31) & 0xfffffffc) + param0);
                                                    goto loc_80602E9;
                                                }
                                                else {
                                                    int v37 = v33 * 12;
                                                    v0 = v34;
                                                    →realloc();
                                                    v18 = v4;
                                                    if(!v4) {
                                                        compare_stack_overflow();
                                                    }
                                                    goto loc_80602C7;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if(!(unsigned char)v9) {
                        return result;
                    }
                }
            }
            else if(!(unsigned char)v9 && ((unsigned char)v6 & 0x1)) {
                return result;
            }
            else if(!(unsigned char)v9) {
                param0 = v6;
                if(!(*(char*)(((param0 >>> 12) & 0x7ff) + *(int*)((param0 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                    return result;
                }
                char v38 = *(char*)(param0 - 4);
                if(v38 != 250) {
                    if(v38 == 0xFF) {
                        param0 = v6;
                        int v39 = *(int*)(*(int*)param0 + 24);
                        if(v39) {
                            caml_compare_unordered = 0;
                            result = v39(v5, param0);
                            if((!caml_compare_unordered || v7) && !result) {
                                goto loc_806031C;
                            }
                        }
                    }
                    return result;
                }
                v6 = *(int*)v6;
                goto loc_805FDC7;
            }
        }
    loc_806031C:
        if(compare_stack == ptr0) {
            return result;
        }
        int* ptr2 = *ptr0;
        v5 = *ptr2;
        *ptr0 = ptr2 + 1;
        int* ptr3 = *(ptr0 + 1);
        v6 = *ptr3;
        *(ptr0 + 1) = ptr3 + 1;
        int v40 = *(int*)(ptr0 + 2) - 1;
        *(int*)(ptr0 + 2) = v40;
        ptr0 = v40 ? ptr0: ptr0 - 3;
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
            if(gvar_80776E4 >= gvar_80776E8) {
                caml_realloc_ref_table((int*)&caml_weak_ref_table);
            }
            result = &gvar_80776E4;
            unsigned int* ptr1 = gvar_80776E4;
            *ptr1 = ptr0;
            gvar_80776E4 = (int*)(ptr1 + 1);
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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
                        goto loc_8064524;
                    }
                }
                goto loc_806462C;
            }
            else {
            loc_8064524:
                v7 = v11;
                continue;
            }
        }
        else {
        loc_806462C:
            param0 = v1 >>> 10;
            v2 = v1 >>> 10;
            if(param0) {
                goto loc_8064684;
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
    loc_8064684:
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
                    goto loc_8064904;
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
    loc_8064904:
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
            loc_80649AD:
                v7 = *(int*)(v21 * 4 + v8);
            }
            else {
                do {
                    extern_rec();
                    ++v22;
                }
                while(v22 < (unsigned int)v21);
                goto loc_80649AD;
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
    extern_trail_cur = 134712132;
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* extern_value(int param0, int* param1) {
    int* result;
    int v0 = caml_convert_flag_list(param1, &extern_flags);
    extern_ignore_sharing = (unsigned int)(v0 & 0x1);
    extern_closures = (unsigned int)(v0 & 0x2);
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 134712132;
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

// Stale decompilation - Refresh this view to re-decompile this code
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
            v3 = unix_error(36, (char*)&gvar_806C368, v0);
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
            loc_8065E8A:
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
                            goto loc_8065E8A;
                        }
                    }
                    else if(v7 == 3) {
                        return result;
                    }
                    else if(v7 == 4) {
                        goto loc_8065EAF;
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
                    loc_8065EAF:
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

// Stale decompilation - Refresh this view to re-decompile this code
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
unsigned int* intern_alloc(int param0, unsigned int param1) {
    unsigned int* result;
    if(!result) {
        intern_obj_table = 0;
        intern_extra_block = 0;
        intern_block = 0;
    }
    else {
        if((unsigned int)((char*)result - 1) > 0x3fffff) {
            int v0 = caml_alloc_for_heap((int)(int*)((int)(int*)((char*)((int)result * 4) + 0xfff) & 0xfffff000));
            intern_extra_block = v0;
            if(!v0) {
                v0 = caml_raise_out_of_memory();
            }
            int v1 = caml_allocation_color((unsigned int)v0);
            intern_color = v1;
            result = intern_extra_block;
            intern_dest = intern_extra_block;
        }
        else {
            if(!(unsigned int)((char*)result - 1)) {
                intern_block = 134721844;
            }
            else if((unsigned int)((char*)result - 1) <= 0x100) {
                unsigned int v2 = (unsigned int)caml_alloc_small((int)(unsigned int)((char*)result - 1), 252);
                intern_block = v2;
            }
            else {
                int* ptr0 = caml_alloc_shr((unsigned int)((char*)result - 1), 252);
                intern_block = ptr0;
            }
            result = (unsigned int*)(intern_block - 4);
            unsigned int v3 = *result;
            intern_header = *result;
            intern_color = v3 & 0x300;
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
    int v29 = &gvar_806BFE4;
loc_80652C1:
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
                    /*BAD_CALL!*/ *(int*)((unsigned int)(v30 & 0xFF) * 4 + (int)&gvar_806BFE4){sub_8065435|sub_8065449|sub_8065468|sub_806549A|sub_80654CC|sub_80654E3|sub_806550D|sub_8065560|sub_806558C|sub_806564B|sub_8065760}(v2, v16, v3, v17, v4, v0, v28, v15, v5, v18, v6, v19, v7, v20, v8, v21, v9, v22, v27, v26, v25, v24, v1);
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
                v29 = v30 * 4 + &gvar_807AD44;
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
    goto loc_80652C1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* invert_root() {
    return invert_pointer_at();
}

int main(int param0, unsigned int param1) {
    caml_main(param1);
    /*NO_RETURN*/ caml_sys_exit(1);
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
                goto loc_8060954;
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
                        goto loc_80609E6;
                    }
                    else {
                        caml_failwith("int_of_string");
                        goto loc_80609C1;
                    }
                }
                else {
                loc_80609C1:
                    if(v4 <= 31 && (unsigned int)(1 << (v4 & 0x1f)) <= (unsigned int)result) {
                        caml_failwith("int_of_string");
                    }
                    if(v0 < 0) {
                    loc_80609E6:
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
        loc_8060954:
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

// Stale decompilation - Refresh this view to re-decompile this code
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
    int v9 = cst_to_constr(*(param1 + 4) & 0xf000, &file_kind_table, 7, 0);
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

int sub_804AA35() {
    ++caml_globals_inited;
    camlStd_exit__entry();
    ++caml_globals_inited;
    return 1;
}

int sub_804B1F3(int param0) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    if(*(int**)v1 == &caml_exn_End_of_file) {
        caml_c_call();
        int v4 = caml_alloc3(v2, v3);
        *(int*)v4 = 3319;
        *(int*)(v4 + 4) = &camlSource__loop_1049;
        *(int*)(v4 + 8) = 3;
        *(int*)(v4 + 12) = param0;
        /*NO_RETURN*/ sub_804B24F();
    }
    caml_exception_pointer = v0;
    jump param0;
}

int sub_804B237(int param0, int param1) {
    unsigned int v0;
    int* ptr0;
    int v1;
    if(*ptr0 != &caml_exn_End_of_file) {
        caml_exception_pointer = v0;
        jump v1;
    }
    jump param1;
}

int sub_804B24F() {
    unsigned int v0;
    caml_exception_pointer = &v0;
    /*NO_RETURN*/ camlSource__loop_1049();
}

int sub_804B265(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    caml_exception_pointer = v0;
    jump param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_804B27D(int param0) {
    int v0;
    caml_exception_pointer = &v0;
    while(1) {
        camlPervasives__input_line_1241();
        camlHashtbl__add_1074(3);
    }
}

int sub_804B2A4(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    caml_exception_pointer = v0;
    jump param3;
}

int sub_804B450(void* param0, int param1, int param2, int param3) {
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

int sub_804B4E0(int param0, int param1, int param2, int param3) {
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

int sub_804BEE0(int param0, int param1, int param2, int param3) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    *ptr0((int)v0);
    caml_exception_pointer = v0;
    jump param3;
}

int sub_804C0A0(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_804C700(int param0, int param1, int param2, int param3, int param4, void* param5) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    param1 = caml_c_call();
    camlArray__to_list_1121();
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
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlUnix__fun_2833;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param1;
    int* ptr1 = camlList__map_1062();
    caml_exception_pointer = v0;
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
        caml_call_gc();
    }
}

int sub_804C790(int param0, int param1, int param2, int param3, int param4, void* param5) {
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
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = param3;
    *(ptr0 + 3) = 0x800;
    *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
    *(ptr0 + 5) = 1;
    caml_exception_pointer = v0;
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
        caml_call_gc();
    }
}

int sub_804C8E0(int param0, int param1, int param2, int param3) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    camlList__rev_append_1051();
    caml_exception_pointer = v0;
    jump param3;
}

int sub_804C9D0(int param0, int param1, int param2, int param3) {
    int* ptr0;
    int v0;
    int* ptr1;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = camlList__mem_1161();
    if(v2 != 1) {
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
    int v3 = param0;
    int v4 = caml_c_call();
    param0 = *(int*)v4;
    caml_exception_pointer = v1;
    int v5 = sub_804CA80(param0, param1, param2, param3);
    if(*(int*)v5 == &caml_exn_Not_found) {
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
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = v0;
    jump param3;
}

int sub_804CA80(int param0, int param1, int param2, int param3) {
    int* ptr0;
    int* ptr1;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    int v1 = camlList__mem_1161();
    if(v1 != 1) {
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
    int v2 = camlList__mem_1161();
    int v3 = v2 != 1 ? &camlUnix__194: &camlUnix__193;
    int v4 = param1;
    int v5 = caml_c_call();
    int v6 = *(int*)v5;
    caml_exception_pointer = v0;
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
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = v6;
    jump param3;
}

int sub_804CBE0(int param0, int param1, int param2) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param2;
}

int sub_804CC70(int param0, int param1) {
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

int sub_804CD60(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_804CEB0(int param0, int param1, int param2, int param3, int param4, int param5) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlUnix__perform_redirections_1900(param2);
    caml_c_call();
    caml_exception_pointer = v0;
    jump param5;
}

int sub_804CF60(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlUnix__perform_redirections_1900(param2);
    caml_c_call();
    caml_exception_pointer = v0;
    jump param6;
}

int sub_804D090(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
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

int sub_804D480(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
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

int sub_804D720(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    param0 = camlHashtbl__find_1093(v0, v1);
    camlHashtbl__remove_1080(v0, v1);
    caml_exception_pointer = v2;
    jump param3;
}

int sub_804D7B0(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

int sub_804D920(int param0, int param1, int param2, int param3) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    camlPervasives__close_out_1209();
    caml_exception_pointer = v0;
    int v1 = camlUnix__waitpid_non_intr_2001();
    jump param3;
}

int sub_804D9E0(int param0, int param1, int param2, int param3, int param4) {
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    camlPervasives__close_out_1209();
    caml_exception_pointer = ptr0;
    caml_c_call();
    int v0 = camlUnix__waitpid_non_intr_2001();
    jump param4;
}

int sub_804DA80(int param0, void* param1, int param2) {
    int* ptr0;
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    camlUnix__try_set_close_on_exec_1366();
    param0 = caml_c_call();
    int v1 = caml_c_call();
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
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = param0;
    caml_exception_pointer = v0;
    jump param2;
}

int sub_804DB70(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

int sub_804DCD0(int param0, int param1, int param2, int param3) {
    jump param3;
}

int sub_804E27A(int param0) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = &camlUnix__44;
    int v3 = caml_c_call();
    caml_exception_pointer = v1;
    gvar_806E380 = v3;
    int v4 = sub_804E2C2(param0);
    int v5 = *(int*)v4 == &caml_exn_Failure ? gvar_806E37C: /*BAD_CALL!*/ caml_raise_exn();
    gvar_806E384 = v5;
    gvar_806E38C = &camlUnix__42;
    gvar_806E3B0 = &camlUnix__41;
    gvar_806E3B4 = &camlUnix__40;
    gvar_806E3B8 = &camlUnix__39;
    gvar_806E3BC = &camlUnix__38;
    int v6 = caml_allocN(&caml_exn_Failure, v0);
    *(int*)v6 = 0x1c00;
    *(int*)(v6 + 4) = 1;
    *(int*)(v6 + 8) = 3;
    *(int*)(v6 + 12) = 5;
    *(int*)(v6 + 16) = 7;
    *(int*)(v6 + 20) = 9;
    *(int*)(v6 + 24) = &camlUnix__36;
    *(int*)(v6 + 28) = &camlUnix__37;
    gvar_806E438 = (int*)(v6 + 4);
    gvar_806E3C0 = &camlUnix__35;
    gvar_806E3C4 = &camlUnix__34;
    gvar_806E3C8 = &camlUnix__33;
    gvar_806E3CC = &camlUnix__32;
    gvar_806E3D0 = &camlUnix__31;
    gvar_806E3D4 = &camlUnix__30;
    gvar_806E3D8 = &camlUnix__29;
    gvar_806E3DC = &camlUnix__28;
    gvar_806E3E0 = &camlUnix__27;
    gvar_806E43C = &camlUnix__26;
    gvar_806E40C = &camlUnix__25;
    gvar_806E440 = &camlUnix__24;
    gvar_806E410 = &camlUnix__23;
    gvar_806E1F8 = &camlUnix__22;
    gvar_806E444 = &camlUnix__21;
    gvar_806E448 = &camlUnix__20;
    gvar_806E44C = &camlUnix__19;
    gvar_806E2C0 = &camlUnix__18;
    gvar_806E2C4 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_806E450 = ptr0;
    gvar_806E454 = &camlUnix__16;
    gvar_806E2C8 = &camlUnix__15;
    gvar_806E2CC = &camlUnix__14;
    gvar_806E2D0 = &camlUnix__13;
    gvar_806E458 = &camlUnix__12;
    gvar_806E2D4 = &camlUnix__11;
    gvar_806E45C = &camlUnix__10;
    gvar_806E460 = &camlUnix__9;
    gvar_806E2D8 = &camlUnix__8;
    gvar_806E2DC = &camlUnix__7;
    gvar_806E2E0 = &camlUnix__6;
    gvar_806E2E4 = &camlUnix__5;
    gvar_806E3E4 = &camlUnix__4;
    gvar_806E3E8 = &camlUnix__3;
    gvar_806E464 = &camlUnix__2;
    gvar_806E3EC = &camlUnix__1;
    jump param0;
}

int sub_804E2C2(int param0) {
    int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = caml_c_call();
    caml_exception_pointer = v2;
    gvar_806E384 = v3;
    gvar_806E38C = &camlUnix__42;
    gvar_806E3B0 = &camlUnix__41;
    gvar_806E3B4 = &camlUnix__40;
    gvar_806E3B8 = &camlUnix__39;
    gvar_806E3BC = &camlUnix__38;
    int v4 = caml_allocN(v0, v1);
    *(int*)v4 = 0x1c00;
    *(int*)(v4 + 4) = 1;
    *(int*)(v4 + 8) = 3;
    *(int*)(v4 + 12) = 5;
    *(int*)(v4 + 16) = 7;
    *(int*)(v4 + 20) = 9;
    *(int*)(v4 + 24) = &camlUnix__36;
    *(int*)(v4 + 28) = &camlUnix__37;
    gvar_806E438 = (int*)(v4 + 4);
    gvar_806E3C0 = &camlUnix__35;
    gvar_806E3C4 = &camlUnix__34;
    gvar_806E3C8 = &camlUnix__33;
    gvar_806E3CC = &camlUnix__32;
    gvar_806E3D0 = &camlUnix__31;
    gvar_806E3D4 = &camlUnix__30;
    gvar_806E3D8 = &camlUnix__29;
    gvar_806E3DC = &camlUnix__28;
    gvar_806E3E0 = &camlUnix__27;
    gvar_806E43C = &camlUnix__26;
    gvar_806E40C = &camlUnix__25;
    gvar_806E440 = &camlUnix__24;
    gvar_806E410 = &camlUnix__23;
    gvar_806E1F8 = &camlUnix__22;
    gvar_806E444 = &camlUnix__21;
    gvar_806E448 = &camlUnix__20;
    gvar_806E44C = &camlUnix__19;
    gvar_806E2C0 = &camlUnix__18;
    gvar_806E2C4 = &camlUnix__17;
    int* ptr0 = camlHashtbl__create_1051();
    gvar_806E450 = ptr0;
    gvar_806E454 = &camlUnix__16;
    gvar_806E2C8 = &camlUnix__15;
    gvar_806E2CC = &camlUnix__14;
    gvar_806E2D0 = &camlUnix__13;
    gvar_806E458 = &camlUnix__12;
    gvar_806E2D4 = &camlUnix__11;
    gvar_806E45C = &camlUnix__10;
    gvar_806E460 = &camlUnix__9;
    gvar_806E2D8 = &camlUnix__8;
    gvar_806E2DC = &camlUnix__7;
    gvar_806E2E0 = &camlUnix__6;
    gvar_806E2E4 = &camlUnix__5;
    gvar_806E3E4 = &camlUnix__4;
    gvar_806E3E8 = &camlUnix__3;
    gvar_806E464 = &camlUnix__2;
    gvar_806E3EC = &camlUnix__1;
    jump param0;
}

int sub_804EC70(int param0, int param1) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = v0;
    caml_c_call();
    caml_exception_pointer = v1;
    while(param0 != 1) {
        sub_804EC70(*(int*)(param0 + 4), param1);
    }
    jump param1;
}

int sub_804F500(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    sub_804F540(param0, param1);
    jump param1;
}

int sub_804F540(int param0, int param1) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param1;
}

int sub_804F770(int param0) {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    caml_c_call();
    caml_exception_pointer = v0;
    jump param0;
}

int sub_8050B60(int param0, int param1, int param2, int param3, int param4) {
    unsigned int v0;
    int v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    camlArray__trickledown_1160(v0, *(int*)(v1 + 16));
    caml_exception_pointer = v2;
    jump param4;
}

int sub_8050CC0(int param0) {
    int v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    camlArray__bubbledown_1170(*(int*)(v0 + 12));
    caml_exception_pointer = v1;
    jump param0;
}

int sub_8055D50(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7, int param8) {
    int v0;
    int v1;
    int v2;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v3 = *(unsigned int*)(v0 + 4);
    param5 = *(unsigned int*)(v0 + 4);
    if((unsigned int)(*(int*)(v3 - 4) >>> 9) > (unsigned int)v1) {
        int* ptr1 = camlHashtbl__replace_bucket_1221();
        caml_modify((unsigned int*)(param6 * 2 + param5 - 2), (unsigned int)ptr1);
        caml_exception_pointer = ptr0;
        jump param8;
    }
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    /*BAD_CALL!*/ camlHashtbl__mem_1227(v2, v1);
}

int sub_8056730(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7) {
    int v0;
    int v1;
    int v2;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v3 = *(unsigned int*)(v0 + 4);
    param5 = *(unsigned int*)(v0 + 4);
    if((unsigned int)(*(int*)(v3 - 4) >>> 9) > (unsigned int)v1) {
        int* ptr1 = camlHashtbl__replace_bucket_1116();
        caml_modify((unsigned int*)(param6 * 2 + param5 - 2), (unsigned int)ptr1);
        caml_exception_pointer = ptr0;
        jump param7;
    }
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    caml_ml_array_bound_error();
    /*BAD_CALL!*/ camlHashtbl__mem_1122(v2, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
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
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
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
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
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
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
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
int unix_lockf(int param0, int param1, int param2) {
    int* ptr0;
    int* ptr1;
    switch((unsigned int)(param1 >> 1)) {
        case 0: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
        }
        default: {
            →__errno_location();
            *ptr1 = 22;
            uerror("lockf", 0);
            return 1;
        }
    }
}

int sub_805A898(int param0, int param1, int param2, int param3) {
    void* ptr0;
    int v0;
    unsigned int v1;
    int v2;
    unsigned int* ptr1;
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    int v3 = *ptr1;
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    if(!~((unsigned char)ptr1 > 0x99 || (unsigned int*)__carry__((int)ptr1, v3))) {
        ptr1 = (unsigned int)((unsigned char)ptr1 - 96) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
    }
    ptr1 = (unsigned int)((unsigned char)ptr1 - 96) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
    int v4 = *ptr1;
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    if(!~((unsigned char)ptr1 > 0x99 || (unsigned int*)__carry__((int)ptr1, v4))) {
        ptr1 = (unsigned int)((unsigned char)ptr1 - 96) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
    }
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    *ptr1 = (int*)(*ptr1 + (int)ptr1);
    int v5 = →getsockopt(*(int*)((int)ptr0 + 24) >> 1, *(int*)((int)ptr0 + 16), *(int*)((int)ptr0 + 20), (void*)((int)ptr0 - 32), (socklen_t*)((int)ptr0 - 36));
    if(v5 == -1) {
        uerror(v0, 0);
    }
    if(v1 <= 4) {
        return v2 - *(int*)(v1 * 4 + v2 - 77488){sub_805A954|sub_805A980|sub_805A998}(param0);
    }
    unix_error(22, v0, 0);
    jump param0;
}

int sub_805A934() {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    char v12;
    char v13;
    unsigned int* ptr0;
    int v14 = (unsigned int)v13 | ((unsigned int)1 << 1) | ((unsigned int)v0 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v1 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v2 << 6) | ((unsigned int)v4 << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v7 << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v9 << 18) | ((unsigned int)v11 << 19) | ((unsigned int)v10 << 20) | ((unsigned int)v12 << 21) | ((unsigned int)0 << 22);
    int v15 = *ptr0;
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    int v16 = (unsigned int)(unsigned int*)__carry__((int)ptr0, v15) | ((unsigned int)1 << 1) | ((unsigned int)__parity__((unsigned char)*ptr0) << 2) | ((unsigned int)0 << 3) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 ^ v15) ^ *ptr0) >>> 4) & 0x1) << 4) | ((unsigned int)0 << 5) | ((unsigned int)(*ptr0 ? 0: 1) << 6) | ((unsigned int)(*ptr0 < 0) << 7) | ((unsigned int)v3 << 8) | ((unsigned int)v5 << 9) | ((unsigned int)0 << 10) | ((unsigned int)(((*ptr0 ^ v15) & (int*)~(int)(int*)((int)ptr0 ^ v15)) < 0) << 11) | ((unsigned int)v6 << 12) | ((unsigned int)v8 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v9 << 18) | ((unsigned int)v11 << 19) | ((unsigned int)v10 << 20) | ((unsigned int)v12 << 21) | ((unsigned int)0 << 22);
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    *ptr0 = (int*)(*ptr0 + (int)ptr0);
    jump v14;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805A954(int param0) {
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

long long* sub_805A980(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1;
    *(long long*)&v0 = (double)*(ptr0 - 8) + (double)*(ptr0 - 7) / *(float*)(v1 - 9500);
    return caml_copy_double(*(double*)&v0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805A998(int param0) {
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
int sub_805BEDE(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &minor_heap_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BEEF(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &heap_chunk_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BEFD(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &heap_size_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BF0B(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &max_stack_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BF19(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &percent_free_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_805BF27(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &max_percent_free_init);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}();
    return result;
}

int sub_805BF35(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    scanmult((int)ptr0, &caml_verb_gc);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_805BF43(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int result;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int v5;
    caml_record_backtrace(3);
    do {
        result = (unsigned int)*ptr1;
        if(!(unsigned char)result) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            v5 = result - 79;
        }
    }
    while((unsigned char)v5 > 39);
    *(int*)((unsigned int)(v5 & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BF51(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    int v1;
    unsigned int v2;
    int* ptr0;
    char* ptr1;
    int v3;
    int v4;
    int result;
    caml_parser_trace = 1;
    do {
        int v5 = (unsigned int)*ptr1;
        if(!(unsigned char)v5) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v2 = caml_data_segments;
                ptr1 = NULL;
                v3 = &gvar_806DE9C;
                v1 = &caml_data_segments;
                if(v2) {
                    goto loc_805C026;
                }
            }
            else {
                v2 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v2, *(int*)((int)(int*)((int)ptr1 * 8) + v3));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v2 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v1);
                }
                while(v2);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v4 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v4 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            result = v5 - 79;
        }
    }
    while((unsigned char)result > 39);
    *(int*)((unsigned int)(result & 0xFF) * 4 + v3){sub_805BF27}(param0, param1, (int)param2, (int)param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_805BF5D(int param0, int param1, unsigned int param2, unsigned int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18) {
    int v0;
    unsigned int v1;
    int* ptr0;
    int v2;
    int v3;
    char* ptr1;
    int v4;
    int result;
    scanmult((int)ptr0, v2);
    caml_set_allocation_policy(*(int*)(v3 - 32));
    do {
        int v5 = (unsigned int)*ptr1;
        if(!(unsigned char)v5) {
            param3 = max_percent_free_init;
            param2 = percent_free_init;
            caml_init_gc(minor_heap_init);
            int v6 = 0;
            do {
                *(int*)(v6 * 4 + (int)&caml_atom_table) = v6;
                ++v6;
            }
            while(v6 != 0x100);
            int v7 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
            if(!v7) {
                v1 = caml_data_segments;
                ptr1 = NULL;
                v4 = &gvar_806DE9C;
                v2 = &caml_data_segments;
                if(v1) {
                    goto loc_805C026;
                }
            }
            else {
                v1 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            loc_805C026:
                do {
                    int v8 = caml_page_table_add(4, (int)v1, *(int*)((int)(int*)((int)ptr1 * 8) + v4));
                    if(v8) {
                        /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
                    }
                    ++ptr1;
                    v1 = *(unsigned int*)((int)(int*)((int)ptr1 * 8) + v2);
                }
                while(v1);
            }
            caml_code_area_start = caml_code_segments;
            unsigned int v9 = gvar_806DEF8;
            caml_code_area_end = v9;
            unsigned int v10 = gvar_806DEFC;
            if(v10) {
                unsigned int v11 = caml_code_area_start;
                int v12 = 1;
                do {
                    v11 = v10 >= v11 ? v11: v10;
                    unsigned int v13 = *(unsigned int*)(v12 * 8 + (int)&gvar_806DEF8);
                    v9 = v13 > v9 ? v13: v9;
                    ++v12;
                    v10 = *(unsigned int*)(v12 * 8 + (int)&caml_code_segments);
                }
                while(v10);
                caml_code_area_start = v11;
                caml_code_area_end = v9;
            }
            caml_init_signals();
            caml_debugger_init();
            char* ptr2 = **(char***)(v3 + 8);
            char* __src1 = ptr2 ? ptr2: (char*)&gvar_806C368;
            int v14 = caml_executable_name((char*)&proc_self_exe.2949, 0x100);
            int v15 = &proc_self_exe.2949;
            if(v14) {
                v15 = caml_search_exe_in_path(__src1);
            }
            caml_sys_init((unsigned int)v15, *(unsigned int*)(v3 + 8));
            int v16 = →__sigsetjmp((__jmp_buf_tag*)&caml_termination_jmpbuf, 0);
            if(v16) {
                v0 = caml_termination_hook;
                if(v0) {
                    v0(0);
                }
            }
            else {
                v0 = caml_start_program(ptr0);
                if((v0 & 0x3) == 2) {
                    /*NO_RETURN*/ caml_fatal_uncaught_exception(v0 & 0xfffffffc);
                }
            }
            jump param18;
        }
        else {
            ++ptr1;
            result = v5 - 79;
        }
    }
    while((unsigned char)result > 39);
    *(int*)((unsigned int)(result & 0xFF) * 4 + v4){sub_805BF27}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
    return result;
}

int sub_805C16C() {
    return 0;
}

int sub_8065435(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    int v1 = (int)*ptr0;
    intern_src = (int*)(ptr0 + 1);
    **(unsigned int*)(v0 - 60) = v1 * 2 + 1;
    jump param22;
}

int sub_8065449(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 2);
    **(unsigned int*)(v0 - 60) = ((int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1)) * 2 + 1;
    jump param22;
}

int sub_8065468(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 4);
    **(unsigned int*)(v0 - 60) = ((unsigned int)*(ptr0 + 2) * 0x100 + (unsigned int)*(ptr0 + 1) * 0x10000 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3))) * 2 + 1;
    jump param22;
}

int sub_806549A(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    intern_cleanup();
    int v1 = caml_failwith("input_value: integer too large");
    int v2 = (unsigned int)*(char*)v1;
    intern_src = (unsigned int)(v1 + 1);
    **(unsigned int*)(v0 - 60) = *(int*)((obj_counter2 - v2) * 4 + intern_obj_table);
    jump param22;
}

int sub_80654CC(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 2);
    int v1 = (unsigned int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1);
    int v2 = *(int*)((obj_counter2 - v1) * 4 + intern_obj_table);
    **(unsigned int*)(v0 - 60) = v2;
    jump param22;
}

int sub_80654E3(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
    int v0;
    char* ptr0;
    intern_src = (unsigned int)(ptr0 + 4);
    int v1 = (unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3));
    int v2 = *(int*)((obj_counter2 - v1) * 4 + intern_obj_table);
    **(unsigned int*)(v0 - 60) = v2;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_806550D(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
            *(int*)((unsigned int)(v5 & 0xFF) * 4 + v0){sub_8065435|sub_8065449|sub_8065468|sub_806549A|sub_80654CC|sub_80654E3|sub_806550D|sub_8065560|sub_806558C|sub_806564B|sub_8065760}(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22);
            return result;
        }
        else {
            intern_cleanup();
            caml_failwith("input_value: ill-formed message");
        }
        **(int**)(v2 - 60) = v0;
        jump param22;
    }
    v0 = v5 * 4 + &gvar_807AD44;
    **(int**)(v2 - 60) = v0;
    jump param22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_806553F(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
int sub_8065560(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
int sub_806558C(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
int sub_806564B(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
int sub_8065760(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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
int sub_8065791(unsigned int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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

int sub_8065821(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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

int sub_806585E(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, int param22) {
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

int sub_806AA1D(int param0, int param1) {
    int v0;
    int result;
    caml_gc_regs = &v0;
    caml_garbage_collection();
    return result;
}

int sub_806AB7E(unsigned int param0, unsigned int param1, int param2, int param3, int param4, int param5, int param6) {
    unsigned int v0;
    caml_bottom_of_stack = v0;
    caml_last_return_address = param0;
    caml_gc_regs = param1;
    jump param6;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
int* unix_accept(int param0) {
    char v0;
    int v1 = 112;
    caml_enter_blocking_section();
    int __fd = →accept(param0 >> 1, &v0, &v1);
    caml_leave_blocking_section();
    if(__fd == -1) {
        uerror("accept", 0);
    }
    int* ptr0 = alloc_sockaddr((short*)&v0, v1, __fd);
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int* result = (int*)caml_alloc_small(2, 0);
    *result = __fd * 2 + 1;
    *(int**)(result + 1) = ptr0;
    caml_local_roots = v2;
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

int unix_closedir(unsigned int* param0) {
    DIR* __dirp = *param0;
    if(!__dirp) {
        __dirp = (DIR*)unix_error(9, "closedir", 0);
    }
    →closedir(__dirp);
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

// Stale decompilation - Refresh this view to re-decompile this code
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
        v0 = uerror(134656535, 0);
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
int unix_error_message(int* param0) {
    char* ptr0 = →strerror(!((unsigned char)param0 & 0x1) ? *param0 >> 1: *(int*)((int)(int*)((int)(int*)((int)param0 >> 1) * 4) + (int)&error_table));
    return caml_copy_string(ptr0);
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
unsigned int* unix_getaddrinfo(int param0, int param1, unsigned int* param2) {
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
    unsigned int* result = NULL;
    unsigned int* ptr3 = NULL;
    int* ptr4 = NULL;
    int* ptr5 = &v5;
    caml_local_roots = &ptr5;
    int v8 = 1;
    int v9 = 3;
    int* ptr6 = &result;
    int* ptr7 = &ptr3;
    int* ptr8 = &ptr4;
    int v10 = caml_string_length(param0);
    char* __dest = NULL;
    if(v10) {
        __dest = (char*)caml_stat_alloc(v10 + 1);
        →strcpy(__dest, (char*)param0);
    }
    int v11 = caml_string_length(param1);
    char* __dest1 = NULL;
    if(v11) {
        __dest1 = (char*)caml_stat_alloc(v11 + 1);
        →strcpy(__dest1, (char*)param1);
    }
    unsigned int v12 = 0;
    do {
        *(int*)(v12 + (int)&v0) = 0;
        v12 += 4;
    }
    while(v12 < 32);
    int v13 = 0;
    unsigned int* ptr9 = param2;
    while(!((unsigned char)ptr9 & 0x1)) {
        unsigned int* ptr10 = *ptr9;
        ptr3 = *ptr9;
        if(!((unsigned char)ptr10 & 0x1)) {
            unsigned char v14 = *(unsigned char*)(ptr10 - 1);
            if(v14 == 1) {
                int v15 = *(int*)((*ptr10 >> 1) * 4 + (int)&socket_type_table);
            }
            else if(v14 == 2) {
                int v16 = *ptr10 >> 1;
            }
            else if(v14 < 1) {
                v13 = *(int*)((*ptr10 >> 1) * 4 + (int)&socket_domain_table);
            }
        }
        else if((int*)((int)ptr10 >> 1) == 1) {
            v0 |= 2;
        }
        else if((int*)((int)ptr10 >> 1) == 2) {
            v0 |= 1;
        }
        else if(!(int*)((int)ptr10 >> 1)) {
            v0 |= 4;
        }
        ptr9 = *(param2 + 1);
        param2 = *(param2 + 1);
    }
    caml_enter_blocking_section();
    int v17 = →getaddrinfo(__dest, __dest1, &v0, &__ai);
    caml_leave_blocking_section();
    if(__dest) {
        caml_stat_free((int)__dest);
    }
    if(__dest1) {
        caml_stat_free((int)__dest1);
    }
    result = (unsigned int*)0x1;
    if(!v17) {
        addrinfo* ptr11 = __ai;
        if(ptr11) {
            int* ptr12 = &v1;
            do {
                int v18 = caml_local_roots;
                v17 = caml_local_roots;
                int* ptr13 = NULL;
                int* ptr14 = NULL;
                int v19 = 0;
                v1 = v18;
                caml_local_roots = ptr12;
                int v20 = 1;
                int v21 = 3;
                int* ptr15 = &ptr13;
                int* ptr16 = &ptr14;
                int* ptr17 = &v19;
                unsigned int v22 = ptr11->ai_addrlen;
                void* __dest2 = &v2;
                →memcpy(__dest2, ptr11->ai_addr, v22 <= 112 ? v22: 112);
                ptr14 = alloc_sockaddr((short*)__dest2, (int)(v22 <= 112 ? v22: 112), -1);
                char* ptr18 = ptr11->ai_canonname;
                v19 = caml_copy_string((int)(ptr18 ? ptr18: (char*)&gvar_806C368));
                int* ptr19 = (int*)caml_alloc_small(5, 0);
                ptr13 = ptr19;
                int v23 = cst_to_constr(ptr11->ai_family, &socket_domain_table, 3, 0);
                *ptr19 = v23;
                int v24 = cst_to_constr(ptr11->ai_socktype, &socket_type_table, 4, 0);
                *(ptr13 + 1) = v24;
                *(ptr13 + 2) = ptr11->ai_protocol * 2 + 1;
                *(int**)(ptr13 + 3) = ptr14;
                *(ptr13 + 4) = v19;
                caml_local_roots = v17;
                ptr4 = ptr13;
                unsigned int* ptr20 = (unsigned int*)caml_alloc_small(2, 0);
                ptr3 = ptr20;
                *ptr20 = ptr4;
                *(ptr3 + 1) = result;
                result = ptr3;
                ptr11 = ptr11->ai_next;
            }
            while(ptr11);
        }
        →freeaddrinfo(__ai);
    }
    caml_local_roots = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

int* unix_getgrgid(int param0) {
    group* ptr0 = →getgrgid((__gid_t)(param0 >> 1));
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_group_entry();
}

int* unix_getgrnam(char* __name) {
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
int* unix_gethostbyaddr(int* param0) {
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
int* unix_gethostbyname(int param0) {
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

// Stale decompilation - Refresh this view to re-decompile this code
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
    return caml_copy_string((int)ptr0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* unix_getnameinfo(int param0, int* param1) {
    unsigned int v0;
    char v1;
    socklen_t __salen;
    char v2;
    char v3;
    unsigned int v4 = caml_local_roots;
    int v5 = 0;
    int v6 = 0;
    int* result = NULL;
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
    v5 = caml_copy_string((int)&v2);
    v6 = caml_copy_string((int)&v3);
    int* ptr3 = (int*)caml_alloc_small(2, 0);
    result = ptr3;
    *ptr3 = v5;
    *(result + 1) = v6;
    caml_local_roots = v4;
    return result;
}

int* unix_getpeername(int param0) {
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

int* unix_getprotobyname(char* __name) {
    protoent* ptr0 = →getprotobyname(__name);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_proto_entry();
}

int* unix_getprotobynumber(int param0) {
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

int* unix_getservbyname(char* __name, char* __proto) {
    servent* ptr0 = →getservbyname(__name, __proto);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int* unix_getservbyport(int param0, char* __proto) {
    servent* ptr0 = →getservbyport((int)__ror__((unsigned short)(param0 >>> 1), 8), __proto);
    if(!ptr0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int* unix_getsockname(int param0) {
    char v0;
    int v1 = 112;
    int v2 = →getsockname(param0 >> 1, &v0, &v1);
    if(v2 == -1) {
        uerror("getsockname", 0);
    }
    return alloc_sockaddr((short*)&v0, v1, -1);
}

int unix_getsockopt(int param0, int param1, int param2) {
    int* ptr0 = (int*)((param2 >> 1) * 8 + *(int*)((unsigned int)(param0 >> 1) * 4 + (int)&sockopt_table));
    return unix_getsockopt_aux(*(int*)((unsigned int)(param0 >> 1) * 4 + (int)&getsockopt_fun_name), (unsigned int)(param0 >> 1), ptr0[0], ptr0[1], param1);
}

int unix_getsockopt_aux(int param0, unsigned int param1, int __level, int __optname, int param4) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4 = v3;
    switch(param1) {
        case 2: 
        case 3: {
            v0 = 8;
            break;
        }
        case 0: 
        case 1: 
        case 4: {
            v0 = 4;
            break;
        }
        default: {
            unix_error(22, param0, 0);
        }
    }
    int v5 = →getsockopt(param4 >> 1, __level, __optname, &v1, &v0);
    if(v5 == -1) {
        uerror(param0, 0);
    }
    if(param1 <= 4) {
        /*BAD_CALL!*/ &_GLOBAL_OFFSET_TABLE_ - *(int*)(param1 * 4 + &sub_805A934){sub_805A954|sub_805A980|sub_805A998}(v2);
    }
    return unix_error(22, param0, 0);
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
            goto loc_8058FF4;
        }
        case 1: {
            caml_enter_blocking_section();
            →fcntl();
            ptr0 = ptr1;
            caml_leave_blocking_section();
            goto loc_8058FF4;
        }
        case 2: {
            →fcntl();
            ptr0 = ptr1;
        loc_8058FF4:
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
            goto loc_8058FF4;
        }
        case 5: {
            →fcntl();
            ptr0 = ptr1;
            goto loc_8058FF4;
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

unsigned int* unix_mktime(int* param0) {
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
    unsigned int* result = (unsigned int*)caml_alloc_small(2, 0);
    *result = ptr0;
    *(int*)(result + 1) = v2;
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

// Stale decompilation - Refresh this view to re-decompile this code
int unix_opendir(char* __name) {
    DIR* ptr0 = →opendir(__name);
    if(!ptr0) {
        uerror("opendir", (int)__name);
    }
    int result = caml_alloc_small(1, 251);
    *(DIR**)result = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
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

int unix_readdir(unsigned int* param0) {
    DIR* __dirp = *param0;
    if(!__dirp) {
        __dirp = (DIR*)unix_error(9, "readdir", 0);
    }
    dirent64* ptr0 = →readdir64(__dirp);
    if(!ptr0) {
        ptr0 = (dirent64*)caml_raise_end_of_file();
    }
    return caml_copy_string((int)(int*)((char*)ptr0 + 19));
}

// Stale decompilation - Refresh this view to re-decompile this code
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
int* unix_recvfrom(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    char v1;
    int* ptr0 = (int*)0x1;
    int __flags = caml_convert_flag_list(param4, &msg_flag_table);
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 2;
    int* ptr1 = &param1;
    int* ptr2 = &ptr0;
    int v5 = 112;
    caml_enter_blocking_section();
    ssize_t v6 = →recvfrom(param0 >> 1, &v1, (int)(size_t)(param3 >> 1) <= 0x4000 ? (size_t)(param3 >> 1): 0x4000, __flags, &v0, &v5);
    caml_leave_blocking_section();
    if(v6 == -1) {
        uerror("recvfrom", 0);
    }
    →memmove();
    ptr0 = alloc_sockaddr((short*)&v0, v5, -1);
    int* result = (int*)caml_alloc_small(2, 0);
    *result = v6 * 2 + 1;
    *(int**)(result + 1) = ptr0;
    caml_local_roots = v2;
    return result;
}

int unix_rename(char* __old, char* __new) {
    int v0 = →rename(__old, __new);
    if(v0 == -1) {
        uerror("rename", (int)__old);
    }
    return 1;
}

int unix_rewinddir(unsigned int* param0) {
    DIR* __dirp = *param0;
    if(!__dirp) {
        __dirp = (DIR*)unix_error(9, "rewinddir", 0);
    }
    →rewinddir(__dirp);
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
int* unix_select(int param0, int param1, int param2, double* param3) {
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
    int* result = (int*)caml_alloc_small(3, 0);
    *result = param0;
    *(result + 1) = param1;
    *(result + 2) = param2;
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

// Stale decompilation - Refresh this view to re-decompile this code
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

// Stale decompilation - Refresh this view to re-decompile this code
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
        unix_error(75, "stat", (int)__filename);
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

// Stale decompilation - Refresh this view to re-decompile this code
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
        int v4 = 0xffffdd9c;
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
                        goto loc_805B4F0;
                    }
                    else {
                        int* ptr4 = NULL;
                        do {
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((int)ptr4 >= v6) {
                                ptr1 = (unsigned int*)(v6 * 4 + (int)ptr3);
                                goto loc_805B4F0;
                            }
                        }
                        while(*((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr0) + 5) != v9);
                        ptr2 = ptr4;
                        *(int**)v3 = (int*)((char*)((int)(int*)(v5 + (int)ptr2) * 2) + 1);
                    }
                }
                ptr1 = (unsigned int*)(v6 * 4 + (int)ptr3);
                goto loc_805B4F0;
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
                        goto loc_805B4CF;
                    }
                    else {
                        while(*(int*)((int)(int*)((int)ptr0 * 8) + (int)&speedtable) != v0) {
                            ptr0 = (unsigned int*)((char*)ptr0 + 1);
                            if(ptr0 == 18) {
                                goto loc_805B4F0;
                            }
                        }
                    loc_805B4CF:
                        *(int*)v3 = *(unsigned int*)((int)(int*)((int)ptr0 * 8) + (int)&gvar_806B584) * 2 + 1;
                    }
                }
                else if(v2 == 3) {
                    int v11 = *ptr1;
                    ++ptr1;
                    *(int*)v3 = (unsigned int)*(char*)(v11 + 134693841) * 2 + 1;
                }
                else if(v2 <= 1 && !v2) {
                    unsigned int v12 = (unsigned int)(*(ptr1 + 1) & **ptr1);
                    ptr1 += 2;
                    *(int*)v3 = ((v12 < 1 ? -1: 0) & 0xfffffffe) + 3;
                }
            loc_805B4F0:
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
    loc_805B193:
        ++ptr1;
        if(v5 == 2) {
            goto loc_805B239;
        }
        else if(v5 < 1) {
            if(!v5) {
                int* ptr4 = *ptr1;
                int v6 = *(ptr1 + 1);
                ptr1 += 2;
                *ptr4 = *ptr2 >>> 1 != 0 ? *ptr4 | v6: ~v6 & *ptr4;
            }
            goto loc_805B2F5;
        }
        else if(v5 != 1) {
            if(v5 == 3) {
                int v7 = *ptr1;
                ++ptr1;
                *(char*)(v7 + 134693841) = (unsigned char)(*ptr2 >>> 1);
            }
            goto loc_805B2F5;
        }
        else {
            int* ptr5 = *ptr1;
            ptr0 = *(unsigned int*)(ptr1 + 2);
            int v8 = *(ptr1 + 3);
            int v9 = (*ptr2 >> 1) - *(ptr1 + 1);
            if(v9 >= 0 && v9 < (int)ptr0) {
                *ptr5 = (~v8 & *ptr5) | *((int*)(v9 * 4 + (int)ptr1) + 4);
                ptr1 = (int*)((int)(int*)((int)ptr0 * 4) + (int)ptr1) + 4;
                goto loc_805B2F5;
            }
            else {
                unix_error(22, "tcsetattr", 0);
            loc_805B239:
                v3 = *ptr1;
                v2 = *ptr2 >> 1;
                v1 = 1;
                if(v2 == 50) {
                    v1 = 0;
                    goto loc_805B261;
                }
                else {
                    ptr0 = ptr1;
                    ptr1 = ptr3;
                }
            }
        }
    }
    else {
    loc_805B324:
        int v10 = →tcsetattr(__fd, *(int*)((param1 >> 1) * 4 + (int)&when_flag_table), (termios*)&terminal_status);
        if(v10 == -1) {
            uerror("tcsetattr", 0);
        }
        return 1;
    }
loc_805B25A:
    if(*((int*)(v1 * 8 + (int)ptr1) + 1) == v2) {
        ptr1 = ptr0;
    loc_805B261:
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
            goto loc_805B2BF;
        }
    loc_805B2F5:
        v5 = *ptr1;
        if(v5 == 4) {
            goto loc_805B324;
        }
        else {
            ++ptr2;
            goto loc_805B193;
        }
    }
    else {
    loc_805B2BF:
        ++v1;
        if(v1 != 18) {
            goto loc_805B25A;
        }
        else {
            unix_error(22, "tcsetattr", 0);
            int v7 = *ptr1;
            ++ptr1;
            *(char*)(v7 + 134693841) = (unsigned char)(*ptr2 >>> 1);
            goto loc_805B2F5;
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
