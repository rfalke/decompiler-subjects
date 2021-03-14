
int __argmatch_die() {
    /*NO_RETURN*/ usage(1);
}

unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param2;
    unsigned int v3 = param3;
    unsigned int v4 = param0;
    unsigned int v5 = v2;
    unsigned int v6 = v3;
    int v7 = 0;
    if(v1 >= 0x80000000) {
        unsigned int v8 = v3;
        unsigned int v9 = v4;
        v4 = (unsigned int)(0 - v4);
        v1 = (unsigned int)(0 - ((unsigned int)(v9 > 0) + v1));
        v7 = -1;
        if(v3 >= 0x80000000) {
        loc_805DDE9:
            unsigned int v10 = v2;
            unsigned int v11 = v3;
            v7 = ~v7;
            v2 = (unsigned int)(0 - v10);
            v3 = (unsigned int)(0 - ((unsigned int)(v10 > 0) + v3));
        }
    }
    else if(v3 >= 0x80000000) {
        goto loc_805DDE9;
    }
    unsigned int v12 = v2;
    unsigned int v13 = v3;
    unsigned int v14 = v4;
    unsigned int v15 = v1;
    if(!v3) {
        unsigned int v16 = v1;
        if(v1 < v12) {
            v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v1 << 32)) / v12;
        }
        else {
            if(!v12) {
                v12 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v1 % v12) << 32)) / v12;
        }
    }
    else if(v3 <= v1) {
        if(v3 != 0) {
            unsigned int i;
            for(i = 31; !(v3 >>> i); --i) {
            }
            v3 = i;
        }
        int v17 = v3 ^ 0x1f;
        int v18 = v3 ^ 0x1f;
        if(v3 ^ 0x1f) {
            unsigned int v19 = v1;
            unsigned int v20 = v1;
            int v21 = v13 << ((v3 ^ 0x1f) & 0x1f);
            unsigned int v22 = (unsigned int)(32 - (v3 ^ 0x1f));
            int v23 = v12 >>> ((unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f);
            unsigned int v24 = (unsigned int)(v21 | v23);
            int v25 = (unsigned int)(unsigned char)(unsigned int)(32 - (v3 ^ 0x1f));
            int v26 = v12 << ((v3 ^ 0x1f) & 0x1f);
            int v27 = (v1 << ((v3 ^ 0x1f) & 0x1f)) | (v4 >>> ((unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f));
            int v28 = v1 >>> ((unsigned int)(unsigned char)(unsigned int)(32 - (v3 ^ 0x1f)) & 0x1f);
            unsigned int v29 = (unsigned int)((unsigned long long)v27 | ((unsigned long long)v28 << 32)) % v24;
            v33 = (unsigned int)((unsigned long long)v27 | ((unsigned long long)v28 << 32)) / v24;
            unsigned int v30 = (unsigned int)(((unsigned long long)v33 * (unsigned long long)v26) >>> 32L);
            char v31 = v30 == v29;
            unsigned int v32 = v33 * v26;
            v0 = v30 > v29 || (v31 && v4 << ((v3 ^ 0x1f) & 0x1f) < v32) ? v33 - 1: v33;
        }
        else if(v13 >= v1 && v4 < v12) {
            goto loc_805DD81;
        }
        else {
            v0 = 1;
        }
    }
    else {
    loc_805DD81:
        v0 = 0;
    }
    unsigned int result = v0;
    if(v7) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

void __i686.get_pc_thunk.bx() {
}

unsigned int __moddi3(unsigned int param0, int* param1, unsigned int param2, unsigned int* param3) {
    unsigned int v0;
    unsigned int result;
    unsigned int* ptr0 = param3;
    unsigned int v1 = param2;
    int v2 = 0;
    unsigned int* ptr1 = param3;
    int* ptr2 = param1;
    unsigned int v3 = param2;
    unsigned int v4 = param2;
    unsigned int v5 = param0;
    unsigned int* ptr3 = param3;
    unsigned int v6 = param2;
    if((int)ptr2 < 0) {
        unsigned int* ptr4 = param3;
        unsigned int v7 = v5;
        v5 = (unsigned int)(0 - v5);
        ptr2 = (int*)(0 - (int)(int*)((unsigned int)(v7 > 0) + (int)ptr2));
        v2 = -1;
        if((int)param3 < 0) {
        loc_805DF94:
            unsigned int* ptr5 = (unsigned int*)(0 - (int)(int*)((unsigned int)(param2 > 0) + (int)param3));
            v6 = (unsigned int)(0 - param2);
            ptr3 = ptr5;
        }
    }
    else if((int)param3 < 0) {
        goto loc_805DF94;
    }
    unsigned int* ptr6 = ptr3;
    int* ptr7 = ptr2;
    unsigned int* ptr8 = &result;
    unsigned int v8 = v6;
    unsigned int v9 = v5;
    unsigned int v10 = v5;
    unsigned int* ptr9 = ptr3;
    if(!ptr3) {
        if((unsigned int)ptr2 < v8) {
            v0 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)ptr2 << 32)) % v8;
        }
        else {
            if(!v8) {
                v8 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v10 | ((unsigned long long)(int*)((int)(unsigned int)ptr7 % v8) << 32)) % v8;
        }
        unsigned int* ptr10 = &result;
        *&result = v0;
        *(int*)(&result + 1) = 0;
    }
    else if((unsigned int)ptr2 < (unsigned int)ptr3) {
        unsigned int* ptr11 = &result;
        *&result = v5;
        *(&result + 1) = ptr2;
    }
    else {
        if(ptr3 != 0) {
            unsigned int i;
            for(i = 31; !(int*)((int)ptr3 >>> i); --i) {
            }
            v5 = i;
        }
        int v11 = v5 ^ 0x1f;
        int v12 = v5 ^ 0x1f;
        if(!(v5 ^ 0x1f)) {
            if((unsigned int)ptr2 > (unsigned int)ptr3 || v8 <= v10) {
                ptr7 = (int*)((int)ptr7 - (int)(int*)((unsigned int)(v8 > v10) + (int)ptr3));
                v10 -= v8;
            }
            ptr6 = &result;
            unsigned int v13 = v10;
            *(&result + 1) = ptr7;
            *&result = v10;
        }
        else {
            int* ptr12 = (int*)((int)ptr3 << ((v5 ^ 0x1f) & 0x1f));
            int v14 = 32 - (v5 ^ 0x1f);
            int v15 = (unsigned int)(unsigned char)(v5 ^ 0x1f);
            int* ptr13 = (int*)((v8 >>> ((32 - (v5 ^ 0x1f)) & 0x1f)) | (int)ptr12);
            unsigned int v16 = v9;
            unsigned int v17 = v8 << ((unsigned int)(unsigned char)(v5 ^ 0x1f) & 0x1f);
            int v18 = (unsigned int)(unsigned char)(v5 ^ 0x1f);
            int* ptr14 = (int*)((int)(int*)((int)ptr7 << ((v5 ^ 0x1f) & 0x1f)) | (v9 >>> ((32 - (v5 ^ 0x1f)) & 0x1f)));
            int* ptr15 = (int*)((int)ptr7 >>> ((32 - (v5 ^ 0x1f)) & 0x1f));
            int* ptr16 = (int*)((unsigned int)((unsigned long long)ptr14 | ((unsigned long long)ptr15 << 32)) / (int)(unsigned int)ptr13);
            ptr9 = (unsigned int*)((unsigned int)((unsigned long long)ptr14 | ((unsigned long long)ptr15 << 32)) % (int)(unsigned int)ptr13);
            unsigned int v19 = v9 << ((unsigned int)(unsigned char)(v5 ^ 0x1f) & 0x1f);
            int* ptr17 = (int*)((int)ptr16 * v17);
            int* ptr18 = (int*)(((unsigned long long)ptr16 * (unsigned long long)v17) >>> 32L);
            char v20 = ptr18 == ptr9;
            if((unsigned int)ptr18 > (unsigned int)ptr9 || (v20 && (unsigned int)ptr17 > v19)) {
                int* ptr19 = ptr17;
                ptr17 = (int*)((int)ptr17 - v17);
                ptr18 = (int*)((int)ptr18 - (int)(int*)((unsigned int)(v17 > (unsigned int)ptr19) + (int)ptr13));
            }
            ptr9 = (unsigned int*)((int)ptr9 - (int)(int*)((unsigned int)((unsigned int)ptr17 > v19) + (int)ptr18));
            unsigned int* ptr20 = &result;
            ptr6 = (unsigned int*)(unsigned char)(v5 ^ 0x1f);
            unsigned int* ptr21 = ptr9;
            *&result = (int*)((int)(int*)((int)ptr9 << ((32 - (v5 ^ 0x1f)) & 0x1f)) | (int)(int*)((int)(int*)(v19 - (int)ptr17) >>> ((v5 ^ 0x1f) & 0x1f)));
            *(&result + 1) = (int*)((int)ptr21 >>> (int)(int*)((int)(unsigned int*)(unsigned char)(v5 ^ 0x1f) & 0x1f));
        }
    }
    if(v2) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    int v1;
    unsigned int v2 = param0;
    unsigned int v3 = param1;
    unsigned int v4 = param2;
    unsigned int v5 = param3;
    unsigned int v6 = param0;
    unsigned int v7 = param1;
    if(param3) {
        if(param3 <= param1) {
            if(param3 != 0) {
                int i;
                for(i = 31; !(param3 >>> i); --i) {
                }
                v1 = i;
            }
            if(v1 ^ 0x1f) {
                int v8 = 32 - (v1 ^ 0x1f);
                int v9 = (unsigned int)(unsigned char)(32 - (v1 ^ 0x1f));
                int v10 = v4 << ((v1 ^ 0x1f) & 0x1f);
                unsigned int v11 = param1;
                unsigned int v12 = param1;
                unsigned int v13 = (unsigned int)((param3 << ((v1 ^ 0x1f) & 0x1f)) | (v4 >>> ((32 - (v1 ^ 0x1f)) & 0x1f)));
                int v14 = (param1 << ((v1 ^ 0x1f) & 0x1f)) | (param0 >>> ((32 - (v1 ^ 0x1f)) & 0x1f));
                int v15 = param1 >>> ((unsigned int)(unsigned char)(32 - (v1 ^ 0x1f)) & 0x1f);
                unsigned int v16 = (unsigned int)((unsigned long long)v14 | ((unsigned long long)v15 << 32)) % v13;
                v21 = (unsigned int)((unsigned long long)v14 | ((unsigned long long)v15 << 32)) / v13;
                unsigned int v17 = (unsigned int)(((unsigned long long)v21 * (unsigned long long)v10) >>> 32L);
                char v18 = v17 == v16;
                unsigned int v19 = v21 * v10;
                v0 = v17 > v16 || (v18 && param0 << ((v1 ^ 0x1f) & 0x1f) < v19) ? v21 - 1: v21;
            }
            else if(param3 >= param1 && v4 > param0) {
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
    else if(param1 >= v4) {
        if(!v4) {
            v4 = 1 / 0;
        }
        return (int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % v4) << 32)) / v4);
    }
    return (int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / v4);
}

unsigned int __umoddi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0;
    unsigned int result1;
    unsigned int result;
    unsigned int v1 = param0;
    unsigned int v2 = param1;
    unsigned int v3 = param2;
    unsigned int v4 = param3;
    unsigned int v5 = param0;
    unsigned int v6 = param0;
    if(!param3) {
        if(param1 < v3) {
            result = (unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) % v3;
        }
        else {
            if(!v3) {
                v3 = 1 / 0;
            }
            result = (unsigned int)((unsigned long long)v6 | ((unsigned long long)(param1 % v3) << 32)) % v3;
        }
        return result;
    }
    if(param3 > param1) {
        result1 = param0;
    }
    else {
        if(param3 != 0) {
            int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v0 = i;
        }
        int v7 = v0 ^ 0x1f;
        if(!(v0 ^ 0x1f)) {
            if(param3 < param1 || v3 <= v6) {
                v6 -= v3;
            }
            result1 = v6;
        }
        else {
            int v8 = param3 << ((v0 ^ 0x1f) & 0x1f);
            int v9 = 32 - (v0 ^ 0x1f);
            int v10 = (unsigned int)(unsigned char)(v0 ^ 0x1f);
            unsigned int v11 = (unsigned int)((v3 >>> ((32 - (v0 ^ 0x1f)) & 0x1f)) | v8);
            int v12 = (unsigned int)(unsigned char)(32 - (v0 ^ 0x1f));
            unsigned int v13 = v3 << ((unsigned int)(unsigned char)(v0 ^ 0x1f) & 0x1f);
            unsigned int v14 = param0;
            int v15 = (unsigned int)(unsigned char)(v0 ^ 0x1f);
            int v16 = param1 >>> ((unsigned int)(unsigned char)(32 - (v0 ^ 0x1f)) & 0x1f);
            int v17 = (param1 << ((unsigned int)(unsigned char)(v0 ^ 0x1f) & 0x1f)) | (param0 >>> ((32 - (v0 ^ 0x1f)) & 0x1f));
            unsigned int v18 = (unsigned int)((unsigned long long)v17 | ((unsigned long long)v16 << 32)) / v11;
            unsigned int v19 = (unsigned int)((unsigned long long)v17 | ((unsigned long long)v16 << 32)) % v11;
            unsigned int v20 = param0 << ((v0 ^ 0x1f) & 0x1f);
            unsigned int v21 = v18 * v13;
            unsigned int v22 = (unsigned int)(((unsigned long long)v18 * (unsigned long long)v13) >>> 32L);
            char v23 = v22 == v19;
            if(v22 > v19 || (v23 && v21 > v20)) {
                unsigned int v24 = v21;
                v21 -= v13;
                v22 -= (unsigned int)(v24 < v13) + v11;
            }
            result1 = (unsigned int)(((v19 - ((unsigned int)(v21 > v20) + v22)) << ((32 - (v0 ^ 0x1f)) & 0x1f)) | ((v20 - v21) >>> ((v0 ^ 0x1f) & 0x1f)));
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int __xargmatch_internal(int param0, char* __s, int param2, int param3, size_t __n1, int param5) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = argmatch(__s, param2, param3, __n1);
    if(v3 >= 0) {
        result = v3;
    }
    else {
        argmatch_invalid(param0, (int)__s, v3);
        argmatch_valid(param2, param3, __n1);
        param5(v0, v1, v2);
        result = -1;
    }
    return result;
}

int add_ignore_pattern() {
    /*NO_RETURN*/ xmalloc(8);
}

int adjust_value(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    char v2;
    char v3;
    __SyntheticTypeUnknown v4;
    int v5;
    int v6;
    __SyntheticTypeUnknownF v7;
    int v8;
    short v9;
    int v10;
    if(param0 != 1) {
        v3 = 6;
        fucompp();
        (unsigned short)v5 = fnstsw((unsigned short)v5);
        if(!((v9 >>> 8) & 1) && !((v9 >>> 14) & 1)) {
            fucompp();
            (unsigned short)v5 = fnstsw(v9);
            if(((v10 >>> 8) & 1)) {
                v2 = 3;
                *(short*)((char*)&v7 + 14) = fnstcw(*(short*)((char*)&v7 + 14));
                *(short*)((char*)&v7 + 12) = (unsigned short)(unsigned char)*(short*)((char*)&v7 + 14) | ((unsigned short)12 << 8);
                *(short*)((char*)&v7 + 12) = fldcw(*(short*)((char*)&v7 + 12));
                fistp();
                *(short*)((char*)&v7 + 14) = fldcw(*(short*)((char*)&v7 + 14));
            }
            else {
                v2 = 3;
                *(short*)((char*)&v7 + 14) = fnstcw(*(short*)((char*)&v7 + 14));
                *(short*)((char*)&v7 + 12) = (unsigned short)(unsigned char)*(short*)((char*)&v7 + 14) | ((unsigned short)12 << 8);
                *(short*)((char*)&v7 + 12) = fldcw(*(short*)((char*)&v7 + 12));
                fistp();
                *(short*)((char*)&v7 + 14) = fldcw(*(short*)((char*)&v7 + 14));
                v1 = v1 ^ 0x80000000;
            }
            int v11 = v8;
            int v12 = v1;
            if(!param0) {
                v7 = (double)*(long long*)&v8;
                if(v1 < 0) {
                    v7 += *(__int128*)&gvar_8061990;
                }
                v2 = 1;
                fucompp();
                (unsigned short)v5 = fnstsw((unsigned short)v11);
                if((unsigned char)(((unsigned int)((v6 >>> 14) & 1 ? 0: 1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8) | (unsigned int)((v6 >>> 10) & 1 ? 1: 0) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8)) ^ 1)) {
                    goto loc_80535A3;
                }
                else {
                    v0 = 1;
                }
            }
            else {
            loc_80535A3:
                v0 = 0;
            }
            int v13 = v0;
            int v14 = v0 >> 31;
            int v15 = v13 + v8;
            int v16 = (unsigned int)__carry__(v13, v8) + v14 + v1;
            int v17 = (unsigned int)__carry__(v13, v8) + v14 + v1;
            int v18 = v15;
            v4[v2 - 1] = (double)*(long long*)&v18;
            __int128 v19 = v4[v2 - 1];
            if(v16 < 0) {
                v4[v2 - 1] = *(__int128*)&gvar_8061990;
                v4[v2 - 2] = v19;
                v4[v2 - 1] += v4[v2 - 2];
                v19 = v4[v2 - 1];
            }
            v4[v2 - 1] = v19;
            *(__int128*)&param1 = v4[v2 - 1];
            v3 = v2;
        }
    }
    int v20 = param1;
    int v21 = param2;
    int v22 = param3;
    v4[v3 - 1] = *(__int128*)&v20;
    return param1;
}

int allocate_entry(int param0) {
    if(!*(int*)(param0 + 36)) {
        /*NO_RETURN*/ →malloc(8);
    }
    int result = *(int*)(param0 + 36);
    *(int*)(param0 + 36) = *(int*)(result + 4);
    return result;
}

int areadlink_with_size(int param0, unsigned int param1) {
    /*NO_RETURN*/ →malloc(param1 < 1025 ? (size_t)(param1 + 1): 1025);
}

int argmatch(char* __s, int param1, int param2, size_t __n1) {
    int v0 = -1;
    char v1 = 0;
    size_t __n = →strlen(__s);
    for(int i = 0; *(int*)(i * 4 + param1); ++i) {
        int v2 = →strncmp(*(char**)(i * 4 + param1), __s, __n);
        if(!v2) {
            size_t v3 = →strlen(*(char**)(i * 4 + param1));
            if(v3 == __n) {
                return i;
            }
            else if(v0 == -1) {
                v0 = i;
            }
            else if(param2) {
                int v4 = →memcmp((void*)(v0 * __n1 + param2), (void*)(i * __n1 + param2), __n1);
                if(v4) {
                    goto loc_8051AE7;
                }
            }
            else {
            loc_8051AE7:
                v1 = 1;
            }
        }
    }
    return v1 != 0 ? -2: v0;
}

int argmatch_invalid(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int result;
    char* __format = param2 == -1 ? →gettext("invalid argument %s for %s"): →gettext("ambiguous argument %s for %s");
    int v6 = quote_n(1, param0);
    int v7 = quotearg_n_style(0, 5, param1);
    →error(0, 0, __format, v7, v6, v0, v1, v2, __format, v3, v4, v5, __format);
    return result;
}

int argmatch_to_argument(void* __s1, int param1, int param2, size_t __n) {
    int v0 = 0;
    while(*(int*)(v0 * 4 + param1)) {
        int v1 = →memcmp(__s1, (void*)(v0 * __n + param2), __n);
        if(!v1) {
            return *(int*)(v0 * 4 + param1);
        }
        ++v0;
    }
    return 0;
}

int argmatch_valid(int param0, int param1, size_t __n) {
    void* __s1 = NULL;
    char* __format = →gettext("Valid arguments are:");
    →fprintf(stderr, __format);
    for(int i = 0; *(int*)(i * 4 + param0); ++i) {
        if(i) {
            int v0 = →memcmp(__s1, (void*)(i * __n + param1), __n);
            if(v0) {
                goto loc_8051C2B;
            }
            else {
                →fprintf(stderr, ", `%s\'", *(int*)(i * 4 + param0));
            }
        }
        else {
        loc_8051C2B:
            →fprintf(stderr, "\n  - `%s\'", *(int*)(i * 4 + param0));
            __s1 = (void*)(i * __n + param1);
        }
    }
    return →putc_unlocked(10, stderr);
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

char* attach(char* param0, char* param1, char* param2) {
    char* ptr0 = param1;
    if(*param1 != 46 || *(param1 + 1)) {
        while(*ptr0) {
            *param0 = *ptr0;
            ++param0;
            ++ptr0;
        }
        if(ptr0 > param1 && *(ptr0 - 1) != 47) {
            *param0 = 47;
            ++param0;
        }
    }
    while(*param2) {
        *param0 = *param2;
        ++param0;
        ++param2;
    }
    *param0 = 0;
    return param0;
}

size_t base_len(char* __s) {
    int v0 = 0;
    size_t i;
    for(i = →strlen(__s); (i > 1 && __s[i - 1] == 47); --i) {
    }
    return i;
}

char* base_name(char* __s) {
    char* result;
    char* __s1 = last_component(__s);
    if(!__s1[0]) {
        size_t __n = base_len(__s);
        result = xstrndup(__s, __n);
    }
    else {
        size_t __n1 = base_len(__s1);
        if(__s1[__n1] == 47) {
            ++__n1;
        }
        result = xstrndup(__s1, __n1);
    }
    return result;
}

int basename_is_dot_or_dotdot(char* param0) {
    char* ptr0 = last_component(param0);
    return dot_or_dotdot(ptr0);
}

int bkm_scale(unsigned int* param0, unsigned int param1) {
    int result;
    unsigned int v0 = param1;
    if(0xffffffff / param1 < *param0) {
        *param0 = -1;
        result = 1;
    }
    else {
        *param0 = (unsigned int)(*param0 * param1);
        result = 0;
    }
    return result;
}

int bkm_scale2(unsigned int* param0, unsigned int param1) {
    int result;
    unsigned int v0;
    int v1 = __udivdi3(0xffffffff, 0xffffffff, param1, param1 >> 31);
    unsigned int v2 = v0;
    unsigned int* ptr0 = *(param0 + 1);
    unsigned int v3 = *param0;
    unsigned int* ptr1 = ptr0;
    if((unsigned int)ptr0 >= v0 && ((unsigned int)ptr0 > v0 || (unsigned int)v1 < v3)) {
        unsigned int* ptr2 = param0;
        *ptr2 = -1;
        *(int*)(ptr2 + 1) = -1;
        result = 1;
    }
    else {
        int v4 = *param0;
        unsigned int v5 = (unsigned int)((param1 >> 31) * v4 + *(int*)(param0 + 1) * param1 + (unsigned int)(((unsigned long long)v4 * (unsigned long long)param1) >>> 32L));
        unsigned int* ptr3 = param0;
        *ptr3 = v4 * param1;
        *(ptr3 + 1) = v5;
        result = 0;
    }
    return result;
}

int bkm_scale_by_power(unsigned int* param0, int param1, int param2) {
    int result = 0;
    while(1) {
        int v0 = (unsigned int)(param2 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        --param2;
        if(!(unsigned char)v0) {
            return result;
        }
        v0 = bkm_scale(param0, param1);
        result |= v0;
    }
    return result;
}

int bkm_scale_by_power2(unsigned int* param0, unsigned int param1, int param2) {
    int result = 0;
    while(1) {
        int v0 = (unsigned int)(param2 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        --param2;
        if(!(unsigned char)v0) {
            return result;
        }
        v0 = bkm_scale2(param0, param1);
        result |= v0;
    }
    return result;
}

unsigned int calculate_columns(int param0) {
    unsigned int v0;
    unsigned int v1;
    char v2 = (unsigned char)param0;
    unsigned int v3 = cwd_n_used;
    unsigned int v4 = max_idx;
    unsigned int v5 = v3;
    if(v5 > v4) {
        v5 = v4;
    }
    unsigned int max = v5;
    init_column_info();
    for(unsigned int i = 0; i < cwd_n_used; ++i) {
        int v6 = length_of_file_name_and_frills(*(int**)(i * 4 + sorted_file));
        for(unsigned int j = 0; j < max; ++j) {
            if(*(char*)(j * 3 * 4 + column_info)) {
                if(v2) {
                    v1 = (cwd_n_used + j) / (j + 1);
                    unsigned int v7 = (cwd_n_used + j) / (j + 1);
                    v0 = i / v7;
                }
                else {
                    v1 = i;
                    v0 = v1 % (j + 1);
                }
                unsigned int v8 = v0;
                int v9 = j == v8 ? 0: 2;
                unsigned int v10 = (unsigned int)(v9 + v6);
                if(*(unsigned int*)(v8 * 4 + *(unsigned int*)(j * 3 * 4 + column_info + 8)) < v10) {
                    *(int*)(j * 3 * 4 + column_info + 4) = v10 - *(int*)(v8 * 4 + *(int*)(j * 3 * 4 + column_info + 8)) + *(int*)(j * 3 * 4 + column_info + 4);
                    *(unsigned int*)(v8 * 4 + *(int*)(j * 3 * 4 + column_info + 8)) = v10;
                    *(char*)(j * 3 * 4 + column_info) = *(unsigned int*)(j * 3 * 4 + column_info + 4) < line_length ? 1: 0;
                }
            }
        }
    }
    unsigned int k;
    for(k = max; k > 1 && !*(char*)(k * 3 * 4 - 12 + column_info); --k) {
    }
    return k;
}

int check_tuning(int param0) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    float* ptr0 = *(unsigned int*)(param0 + 20);
    fucompp();
    short v8 = fnstsw((unsigned short)ptr0);
    if(!((v7 >>> 8) & 1) && !((v7 >>> 14) & 1)) {
        fld1();
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if(((v6 >>> 8) & 1) || ((v6 >>> 14) & 1)) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        fld1();
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if(((v4 >>> 8) & 1) || ((v4 >>> 14) & 1)) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        fldz();
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if((v5 >>> 8) & 1) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if(((v1 >>> 8) & 1) || ((v1 >>> 14) & 1)) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        fld1();
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if((v2 >>> 8) & 1) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        fucompp();
        (unsigned short)v9 = fnstsw((unsigned short)ptr0);
        if(((v3 >>> 8) & 1) || ((v3 >>> 14) & 1)) {
            *(int*)(param0 + 20) = &default_tuning;
            v0 = 0;
            return (unsigned int)v0;
        }
        v0 = 1;
    }
    else {
        *(int*)(param0 + 20) = &default_tuning;
        v0 = 0;
    }
    return (unsigned int)v0;
}

unsigned int clear_files() {
    unsigned int result;
    unsigned int v0 = 0;
    while(1) {
        result = cwd_n_used;
        if(result > v0) {
            /*NO_RETURN*/ →free(**(void***)(v0 * 4 + sorted_file));
        }
        break;
    }
    cwd_n_used = 0;
    any_has_acl = 0;
    inode_number_width = 0;
    block_size_width = 0;
    nlink_width = 0;
    owner_width = 0;
    group_width = 0;
    author_width = 0;
    scontext_width = 0;
    major_device_number_width = 0;
    minor_device_number_width = 0;
    file_size_width = 0;
    return result;
}

int clone_quoting_options(int param0) {
    int* ptr0 = →__errno_location();
    /*NO_RETURN*/ xmemdup(param0 != 0 ? param0: &default_quoting_options, 36);
}

int close_stdout() {
    int __status;
    int v0 = close_stream(stdout);
    if(v0) {
        char* ptr0 = →gettext("write error");
        if(file_name) {
            int v1 = quotearg_colon(file_name);
            int* ptr1 = →__errno_location();
            →error(0, ptr1[0], "%s: %s", v1, ptr0);
        }
        else {
            int* ptr2 = →__errno_location();
            →error(0, ptr2[0], (char*)&gvar_8061854, ptr0);
        }
        /*NO_RETURN*/ →_exit(exit_failure);
    }
    int v2 = close_stream(stderr);
    if(v2) {
        __status = exit_failure;
        /*NO_RETURN*/ →_exit(__status);
    }
    return __status;
}

unsigned int close_stdout_set_file_name(unsigned int param0) {
    file_name = param0;
    return param0;
}

int close_stream(FILE* __fp) {
    int result;
    int result;
    size_t v0 = →__fpending(__fp);
    char v1 = v0 ? 1: 0;
    int v2 = →ferror_unlocked(__fp);
    char v3 = v2 ? 1: 0;
    int v4 = →fclose(__fp);
    char v5 = v4 ? 1: 0;
    if(v3) {
    loc_805960F:
        if((unsigned char)((unsigned int)v5 ^ 1)) {
            int* ptr0 = →__errno_location();
            ptr0[0] = 0;
        }
        result = -1;
    }
    else if(!(unsigned char)((unsigned int)(v4 ? 1: 0) ^ 1)) {
        if(!v1) {
            int* ptr1 = →__errno_location();
            if(ptr1[0] == 9) {
                return 0;
            }
        }
        goto loc_805960F;
    }
    else {
        result = 0;
    }
    return result;
}

int cmp_atime(int* param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = param0 + 2;
    get_stat_atime(&v0);
    ptr0 = param1 + 2;
    get_stat_atime(&v1);
    int v4 = timespec_cmp(v1, v2, v0, v3);
    return !v4 ? param2(*param0, *param1): v4;
}

int cmp_ctime(int* param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = param0 + 2;
    get_stat_ctime(&v0);
    ptr0 = param1 + 2;
    get_stat_ctime(&v1);
    int v4 = timespec_cmp(v1, v2, v0, v3);
    return !v4 ? param2(*param0, *param1): v4;
}

int cmp_extension(char** param0, char** param1, int param2) {
    char* ptr0 = →strrchr(param0[0], 46);
    char* ptr1 = →strrchr(param1[0], 46);
    char* ptr2 = ptr1 != 0 ? ptr1: (char*)&gvar_805ED70;
    char* ptr3 = ptr0 != 0 ? ptr0: (char*)&gvar_805ED70;
    int v0 = param2((int)ptr3, (int)ptr2);
    return !v0 ? param2((int)param0[0], (int)param1[0]): v0;
}

int cmp_mtime(int* param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = param0 + 2;
    get_stat_mtime(&v0);
    ptr0 = param1 + 2;
    get_stat_mtime(&v1);
    int v4 = timespec_cmp(v1, v2, v0, v3);
    return !v4 ? param2(*param0, *param1): v4;
}

int cmp_name(int* param0, int* param1, int param2) {
    return param2(*param0, *param1);
}

int cmp_size(int* param0, int* param1, int param2) {
    int v0;
    int v1 = *(param1 + 14);
    unsigned int v2 = *(unsigned int*)(param1 + 13);
    int v3 = v1;
    int v4 = *(param0 + 14);
    unsigned int v5 = *(unsigned int*)(param0 + 13);
    int v6 = v4;
    if(v3 >= v6 && (v3 > v6 || v2 >= v5)) {
        int v7 = *(param1 + 14);
        unsigned int v8 = *(unsigned int*)(param1 + 13);
        int v9 = v7;
        int v10 = *(param0 + 14);
        unsigned int v11 = *(unsigned int*)(param0 + 13);
        int v12 = v10;
        v0 = v9 > v12 || (v9 >= v12 && v8 > v11) ? 1: 0;
    }
    else {
        v0 = -1;
    }
    int v13 = v0;
    return !v0 ? param2(*param0, *param1): v0;
}

int cmp_version(char** param0, char** param1) {
    return →strverscmp(param0[0], param1[0]);
}

int decode_switches(int ___argc, char** ___argv) {
    int v0;
    int* ptr0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    short v4;
    int v5;
    char v6;
    unsigned int v7;
    unsigned int v8;
    int v9 = v5;
    unsigned int v10 = 0;
    char v11 = 0;
    qmark_funny_chars = 0;
    unsigned int v12 = ls_mode;
    if(v12 == 2) {
        format = 2;
        /*BAD_CALL!*/ set_quoting_style(NULL, 4);
    }
    else if(v12 != 3) {
        if(v12 != 1) {
            /*NO_RETURN*/ →abort();
        }
        int v13 = /*BAD_CALL!*/ →isatty(1);
        if(v13) {
            format = 2;
            qmark_funny_chars = 1;
        }
        else {
            format = 1;
            qmark_funny_chars = 0;
        }
    }
    else {
        format = 0;
        /*BAD_CALL!*/ set_quoting_style(NULL, 4);
    }
    time_type = 0;
    sort_type = 0;
    sort_reverse = 0;
    numeric_ids = 0;
    print_block_size = 0;
    indicator_style = 0;
    print_inode = 0;
    dereference = 1;
    recursive = 0;
    immediate_dirs = 0;
    ignore_mode = 0;
    ignore_patterns = 0;
    hide_patterns = 0;
    print_scontext = 0;
    char* __s = /*BAD_CALL!*/ →getenv("QUOTING_STYLE");
    if(!__s) {
        char* ptr1 = /*BAD_CALL!*/ →getenv("LS_BLOCK_SIZE");
        if(!ptr1) {
            char* ptr2 = /*BAD_CALL!*/ →getenv("BLOCK_SIZE");
        }
        else {
            file_output_block_size = output_block_size;
        }
        line_length = 80;
        char* __nptr = /*BAD_CALL!*/ →getenv("COLUMNS");
        if(__nptr && __nptr[0]) {
            v1 = 0;
            ptr0 = &v2;
            unsigned long v14 = /*BAD_CALL!*/ xstrtoul(__nptr, NULL, 0);
            if(!v14 && v2) {
                line_length = v2;
            }
            else {
                v5 = /*BAD_CALL!*/ quotearg((int)__nptr);
            }
        }
        int v15 = /*BAD_CALL!*/ →ioctl(1, 21523, &v6);
        if(v15 != -1 && v4) {
            line_length = (unsigned int)v4;
        }
        char* __nptr1 = /*BAD_CALL!*/ →getenv("TABSIZE");
        if(__nptr1) {
            v1 = 0;
            ptr0 = &v8;
            unsigned long v16 = /*BAD_CALL!*/ xstrtoul(__nptr1, NULL, 0);
            if(!v16) {
                tabsize = v8;
            }
            else {
                v5 = /*BAD_CALL!*/ quotearg((int)__nptr1);
            }
        }
        while(1) {
            int v17 = -1;
            int v18 = /*BAD_CALL!*/ →getopt_long(___argc, ___argv, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", (option*)&long_options, &v17);
            if(v18 == -1) {
                goto loc_804B468;
            }
            else if(v37 == 0) {
                if(ls_mode != 1) {
                    int v19 = ls_mode == 2 ? &gvar_805EFA4: "vdir";
                    v0 = ls_mode == 2 ? &gvar_805EFA4: "vdir";
                }
                else {
                    v0 = &gvar_805EFAD;
                }
                FILE* __stream = stdout;
                int v20 = 0;
                int v21 = "David MacKenzie";
                v1 = "Richard Stallman";
                /*NO_RETURN*/ version_etc(__stream, v0, "GNU coreutils", "6.10");
            }
            else if(v37 == 1) {
                /*NO_RETURN*/ usage(0);
            }
            else if((v37 >= 2 && v37 <= 179) || (v37 >= 181 && v37 <= 195) || v37 == 200 || (v37 >= 205 && v37 <= 206) || v37 == 208 || (v37 >= 210 && v37 <= 211) || (v37 >= 217 && v37 <= 218) || v37 == 220 || (v37 >= 222 && v37 <= 227) || v37 == 232 || v37 == 237 || (v37 >= 252 && v37 <= 258)) {
                break;
            }
            else if(v37 == 180) {
                goto loc_804B059;
            }
            else if(v37 == 196) {
                goto loc_804AEC0;
            }
            else if(v37 == 197) {
                goto loc_804AEDC;
            }
            else if(v37 == 198) {
                goto loc_804AEF2;
            }
            else if(v37 == 199) {
                dired = 1;
            }
            else if(v37 == 201) {
                indicator_style = 3;
            }
            else if(v37 == 202) {
                print_group = 0;
            }
            else if(v37 == 203) {
                dereference = 3;
            }
            else if(v37 == 0xcc) {
                /*NO_RETURN*/ add_ignore_pattern();
            loc_804AF58:
                dereference = 5;
            }
            else if(v37 == 207) {
                goto loc_804AF58;
            }
            else if(v37 == 209) {
                /*BAD_CALL!*/ set_quoting_style(NULL, 0);
            loc_804AF8F:
                /*BAD_CALL!*/ set_quoting_style(NULL, 3);
            loc_804AF99:
                recursive = 1;
            }
            else if(v37 == 212) {
                goto loc_804AF8F;
            }
            else if(v37 == 213) {
                goto loc_804AF99;
            }
            else if(v37 == 214) {
                sort_type = 2;
                v11 = 1;
            }
            else if(v37 == 215) {
                char* __nptr2 = optarg;
                v1 = 0;
                ptr0 = &v7;
                unsigned long v22 = /*BAD_CALL!*/ xstrtoul(__nptr2, NULL, 0);
                if(v22) {
                    v5 = /*BAD_CALL!*/ quotearg(optarg);
                }
                tabsize = v7;
            }
            else if(v37 == 216) {
                sort_type = 0xffffffff;
                v11 = 1;
            }
            else if(v37 == 219) {
                sort_type = 1;
                v11 = 1;
            }
            else if(v37 == 221) {
                print_scontext = 1;
            }
            else if(v37 == 228) {
                ignore_mode = 2;
            }
            else if(v37 == 229) {
                /*BAD_CALL!*/ set_quoting_style(NULL, 4);
            loc_804AC63:
                time_type = 1;
            }
            else if(v37 == 230) {
                goto loc_804AC63;
            }
            else if(v37 == 231) {
                immediate_dirs = 1;
            }
            else if(v37 == 233) {
                ignore_mode = 2;
                sort_type = 0xffffffff;
                v11 = 1;
                if(!format) {
                    int v23 = /*BAD_CALL!*/ →isatty(1);
                }
                print_block_size = 0;
                print_with_color = 0;
            }
            else if(v37 == 234) {
                format = 0;
                print_owner = 0;
            }
            else if(v37 == 235) {
                human_output_opts = 176;
                output_block_size = 1L;
                file_output_block_size = output_block_size;
            }
            else if(v37 == 236) {
                print_inode = 1;
            }
            else if(v37 == 0xee) {
                human_output_opts = 0;
                output_block_size = 0x400L;
                file_output_block_size = output_block_size;
            }
            else if(v37 == 239) {
                format = 0;
            }
            else if(v37 == 240) {
                format = 4;
            }
            else if(v37 == 241) {
                numeric_ids = 1;
                format = 0;
            }
            else if(v37 == 242) {
                format = 0;
                print_group = 0;
            }
            else if(v37 == 243) {
                indicator_style = 1;
            }
            else if(v37 == 244) {
                qmark_funny_chars = 1;
            }
            else if(v37 == 245) {
                sort_reverse = 1;
            }
            else if(v37 == 246) {
                print_block_size = 1;
            }
            else if(v37 == 247) {
                sort_type = 4;
                v11 = 1;
            }
            else if(v37 == 248) {
                time_type = 2;
            }
            else if(v37 == 249) {
                sort_type = 3;
                v11 = 1;
            }
            else if(v37 == 250) {
                char* __nptr3 = optarg;
                v1 = 0;
                ptr0 = &v3;
                unsigned long v24 = /*BAD_CALL!*/ xstrtoul(__nptr3, NULL, 0);
                if(v24 || !v3) {
                    v5 = /*BAD_CALL!*/ quotearg(optarg);
                }
                line_length = v3;
            }
            else if(v37 == 251) {
                format = 3;
            }
            else if(v37 == 259) {
                print_author = 1;
            }
            else if(v37 == 260) {
                unsigned int v25 = (unsigned int)/*BAD_CALL!*/ human_options(optarg, (int*)&human_output_opts, (int*)&output_block_size);
                if(v25) {
                    /*NO_RETURN*/ xstrtol_fatal(v25, v17, 0, &long_options, optarg);
                }
                file_output_block_size = output_block_size;
            }
            else if(v37 == 261) {
                goto loc_804B1B5;
            }
            else if(v37 == 262) {
                goto loc_804AF37;
            }
            else if(v37 == 263) {
                indicator_style = 2;
            }
            else if(v37 == 264) {
                int v26 = /*BAD_CALL!*/ __xargmatch_internal("--format", optarg, &format_args, &format_types, 4, argmatch_die);
            loc_804B198:
                format = 0;
                v10 = "full-iso";
            }
            else if(v37 == 265) {
                goto loc_804B198;
            }
            else if(v37 == 266) {
                directories_first = 1;
            }
            else if(v37 == 267) {
                /*NO_RETURN*/ xmalloc(8);
            loc_804B288:
                int v27 = /*BAD_CALL!*/ __xargmatch_internal("--indicator-style", optarg, &indicator_style_args, &indicator_style_types, 4, argmatch_die);
            loc_804B2D1:
                int v28 = /*BAD_CALL!*/ __xargmatch_internal("--quoting-style", optarg, &quoting_style_args, &quoting_style_vals, 4, argmatch_die);
            loc_804B2FF:
                qmark_funny_chars = 0;
            }
            else if(v37 == 268) {
                goto loc_804B288;
            }
            else if(v37 == 269) {
                goto loc_804B2D1;
            }
            else if(v37 == 270) {
                goto loc_804B2FF;
            }
            else if(v37 == 271) {
                human_output_opts = 144;
                output_block_size = 1L;
                file_output_block_size = output_block_size;
            }
            else if(v37 == 0x110) {
                int v29 = /*BAD_CALL!*/ __xargmatch_internal("--sort", optarg, &sort_args, &sort_types, 4, argmatch_die);
                int v30 = /*BAD_CALL!*/ __xargmatch_internal("--time", optarg, &time_args, &time_types, 4, argmatch_die);
                goto loc_804B2F7;
            }
            else if(v37 == 0x111) {
                int v30 = /*BAD_CALL!*/ __xargmatch_internal("--time", optarg, &time_args, &time_types, 4, argmatch_die);
                goto loc_804B2F7;
            }
            else if(v37 == 0x112) {
                goto loc_804B2F7;
            }
            else {
                break;
            loc_804B059:
                if(format) {
                loc_804AEC0:
                    if(!ignore_mode) {
                    loc_804AEDC:
                        /*NO_RETURN*/ add_ignore_pattern();
                    loc_804AEF2:
                        format = 2;
                        continue;
                    loc_804B1B5:
                        if(optarg) {
                            int v31 = /*BAD_CALL!*/ __xargmatch_internal("--color", optarg, &color_args, &color_types, 4, argmatch_die);
                        }
                        else {
                            v35 = 1;
                        }
                        int v32 = v35 != 1 ? 0: 1;
                        print_with_color = (unsigned char)v32;
                        if(print_with_color) {
                        loc_804AF37:
                            dereference = 4;
                            continue;
                        loc_804B2F7:
                            v10 = optarg;
                        }
                    }
                }
            }
        }
        /*NO_RETURN*/ usage(2);
    loc_804B468:
        max_idx = line_length > 2 ? line_length / 3: 1;
        /*NO_RETURN*/ clone_quoting_options(0);
    }
    int v33 = /*BAD_CALL!*/ argmatch(__s, &quoting_style_args, &quoting_style_vals, 4);
    if(v33 >= 0) {
        /*BAD_CALL!*/ set_quoting_style(NULL, *(int*)(v33 * 4 + (int)&quoting_style_vals));
    }
    else {
        v5 = /*BAD_CALL!*/ quotearg((int)__s);
    }
}

int default_block_size() {
    char* ptr0 = →getenv("POSIXLY_CORRECT");
    return ptr0 != 0 ? 0x200: 0x400;
}

int dev_ino_compare(int* param0, int* param1) {
    return !((*(param0 + 1) ^ *(param1 + 1)) | (*param0 ^ *param1)) && !((*(param0 + 3) ^ *(param1 + 3)) | (*(param0 + 2) ^ *(param1 + 2))) ? 1: 0;
}

int dev_ino_free(void* __ptr) {
    /*NO_RETURN*/ →free(__ptr);
}

unsigned int dev_ino_hash(unsigned int* param0, unsigned int param1) {
    return __umoddi3(param0[0], param0[1], param1, 0);
}

void* dev_ino_pop(void* __dest) {
    int v0 = &dev_ino_obstack;
    if(gvar_806462C - gvar_8064628 <= 15) {
        /*NO_RETURN*/ →__assert_fail("sizeof (struct dev_ino) <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o->next_free - __o->object_base); })", "ls.c", 918, (char*)&__PRETTY_FUNCTION__.6065);
    }
    obstack* ptr0 = (obstack*)&dev_ino_obstack;
    int v1 = -16;
    if((int)(int*)((int)gvar_8064630 - (int)gvar_806462C) < -16) {
        →_obstack_newchunk((obstack*)&dev_ino_obstack, -16);
    }
    gvar_806462C -= 16;
    →memmove(__dest, gvar_806462C, 16);
    return __dest;
}

int dired_dump_obstack(char* __s, int param1) {
    int result;
    int v0 = param1;
    unsigned int max = (unsigned int)((*(int*)(v0 + 12) - *(int*)(v0 + 8)) >>> 2);
    if(max) {
        int v1 = param1;
        int v2 = *(int*)(v1 + 8);
        if(*(int*)(v1 + 12) == v2) {
            *(char*)(v1 + 40) = (unsigned char)((unsigned int)*(char*)(v1 + 40) | 0x2);
        }
        *(int*)(v1 + 12) = (*(int*)(v1 + 12) + *(int*)(v1 + 24)) & ~*(int*)(v1 + 24);
        if(*(int*)(v1 + 16) - *(int*)(v1 + 4) < *(int*)(v1 + 12) - *(int*)(v1 + 4)) {
            *(int*)(v1 + 12) = *(int*)(v1 + 16);
        }
        *(int*)(v1 + 8) = *(int*)(v1 + 12);
        int v3 = v2;
        →fputs_unlocked(__s, stdout);
        for(unsigned int i = 0; i < max; ++i) {
            int v4 = *(int*)(i * 4 + v3);
            →printf(" %lu");
        }
        result = →putchar_unlocked(10);
    }
    return result;
}

int dot_or_dotdot(char* param0) {
    char v0;
    if(*param0 == 46) {
        char v1 = *(char*)((*(param0 + 1) == 46 ? 2: 1) + (int)param0);
        v0 = !v1 || v1 == 47 ? 1: 0;
    }
    else {
        v0 = 0;
    }
    return (unsigned int)v0;
}

int emit_bug_reporting_address() {
    char* __format = →gettext("\nReport bugs to <%s>.\n");
    return →printf(__format, "bug-coreutils@gnu.org");
}

unsigned int extract_dirs_from_files(int param0, int param1) {
    char v0 = (unsigned char)param1;
    char v1 = param0 ? 1: 0;
    if(param0 && active_dir_set) {
        /*NO_RETURN*/ queue_directory(0, param0, 0);
    }
    int v2 = cwd_n_used;
    int v3 = cwd_n_used;
    while(1) {
        v2 = (unsigned int)(v3 ? 1: 0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        --v3;
        if(!(unsigned char)v2) {
            break;
        }
        else {
            int v4 = *(int*)(v3 * 4 + sorted_file);
            v2 = is_directory(v4);
            if((unsigned char)v2) {
                if(!(unsigned char)((unsigned int)v1 ^ 1)) {
                    int v5 = basename_is_dot_or_dotdot(*(char**)v4);
                    v2 = v5 ^ 1;
                    if(!(unsigned char)v2) {
                        continue;
                    }
                }
                if(!param0 || **(char**)v4 == 47) {
                    /*NO_RETURN*/ queue_directory(*(int*)v4, *(int*)(v4 + 4), (int)v0);
                }
                v2 = /*NO_RETURN*/ file_name_concat((char*)param0, *(char**)v4, 0);
            }
        }
    }
    v3 = 0;
    unsigned int result = 0;
    while(cwd_n_used > (unsigned int)v3) {
        int v6 = *(int*)(v3 * 4 + sorted_file);
        *(int*)(result * 4 + sorted_file) = *(int*)(v3 * 4 + sorted_file);
        result = (unsigned int)((*(int*)(v6 + 104) == 9 ? 0: 1) + result);
        ++v3;
    }
    cwd_n_used = result;
    return result;
}

unsigned int file_failure(int param0, char* __format, int param2) {
    char v0 = (unsigned char)param0;
    int v1 = quotearg_colon(param2);
    int* ptr0 = →__errno_location();
    →error(0, ptr0[0], __format, v1);
    return set_exit_status((unsigned int)v0);
}

int file_has_acl() {
    return 0;
}

int file_ignored(char* __name) {
    int v0;
    if((ignore_mode == 2 || __name[0] != 46)) {
    loc_804C743:
        if(!ignore_mode) {
            int v1 = patterns_match(hide_patterns, __name);
            if((unsigned char)v1) {
                goto loc_804C775;
            }
        }
        int v2 = patterns_match(ignore_patterns, __name);
        if((unsigned char)v2) {
        loc_804C775:
            v0 = 1;
        }
        else {
            v0 = 0;
        }
    }
    else if(!ignore_mode) {
        goto loc_804C775;
    }
    else {
        int v3 = __name[1] == 46 ? 2: 1;
        if(!__name[v3]) {
            goto loc_804C775;
        }
        else {
            goto loc_804C743;
        }
    }
    return (unsigned int)(unsigned char)v0;
}

int file_name_concat(char* param0, char* param1, int param2) {
    int v0 = param2;
    /*NO_RETURN*/ mfile_name_concat(param0, param1);
}

char* filemodestring(int param0, char* param1) {
    return strmode(*(int*)(param0 + 16), param1);
}

unsigned int format_group(__gid_t __gid, int param1, int param2) {
    char* __s;
    char v0 = (unsigned char)param2;
    if((unsigned char)param2) {
        int* ptr0 = numeric_ids ? NULL: getgroup(__gid);
        __s = (char*)ptr0;
    }
    else {
        __s = (char*)&gvar_805F99E;
    }
    return format_user_or_group(__s, (int)__gid, param1);
}

size_t format_group_width(__gid_t __gid) {
    char* __s = numeric_ids ? NULL: (char*)getgroup(__gid);
    return format_user_or_group_width(__s, (int)__gid);
}

unsigned int format_user(__uid_t __uid, int param1, int param2) {
    char* __s;
    char v0 = (unsigned char)param2;
    if((unsigned char)param2) {
        int* ptr0 = numeric_ids ? NULL: getuser(__uid);
        __s = (char*)ptr0;
    }
    else {
        __s = (char*)&gvar_805F99E;
    }
    return format_user_or_group(__s, (int)__uid, param1);
}

unsigned int format_user_or_group(char* __s, int param1, int param2) {
    int v0;
    char v1;
    if(__s) {
        int v2 = gnu_mbswidth(__s, 0);
        int v3 = param2 - v2;
        int v4 = ~(v3 >> 31) & v3;
        →fputs_unlocked(__s, stdout);
        size_t v5 = →strlen(__s);
        v0 = v5 + v4;
        do {
            /*BAD_CALL!*/ →putchar_unlocked(32);
            v1 = v4 ? 1: 0;
            --v4;
        }
        while(v1);
    }
    else {
        →printf("%*lu ", param2);
        v0 = param2;
    }
    unsigned int result = (unsigned int)(dired_pos + v0 + 1);
    dired_pos = (unsigned int)(dired_pos + v0 + 1);
    return result;
}

size_t format_user_or_group_width(char* __s, int param1) {
    size_t result;
    char v0;
    if(__s) {
        int v1 = gnu_mbswidth(__s, 0);
        result = (size_t)(~(v1 >> 31) & v1);
    }
    else {
        →sprintf(&v0, (char*)&gvar_805F9A0, param1);
        result = →strlen(&v0);
    }
    return result;
}

size_t format_user_width(__uid_t __uid) {
    char* __s = numeric_ids ? NULL: (char*)getuser(__uid);
    return format_user_or_group_width(__s, (int)__uid);
}

int* free_entry(int param0, int* param1) {
    *param1 = 0;
    *(param1 + 1) = *(int*)(param0 + 36);
    *(unsigned int*)(param0 + 36) = param1;
    return param1;
}

int free_pending_ent(void** param0) {
    /*NO_RETURN*/ →free(param0[0]);
}

void freecon() {
}

int* fseterr(int* param0) {
    int* result = param0;
    *result = *param0 | 0x20;
    return result;
}

int fstat64(int __fd, stat64* __buf) {
    return →__fxstat64(3, __fd, __buf);
}

int ftypelet(int param0) {
    return (param0 & 0xf000) == 0x8000 ? 45: (param0 & 0xf000) == 0x4000 ? 100: (param0 & 0xf000) == 0x6000 ? 98: (param0 & 0xf000) == 0x2000 ? 99: (param0 & 0xf000) == 0xa000 ? 108: (param0 & 0xf000) == 0x1000 ? 112: (param0 & 0xf000) == 0xc000 ? 115: 63;
}

unsigned int get_current_time() {
    unsigned int result;
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4 = →clock_gettime(0, &v0);
    if(!v4) {
        current_time = v0;
        result = v1;
        current_time_ns = v1;
    }
    else {
        →gettimeofday(&v2, NULL);
        current_time = v2;
        result = (unsigned int)(v3 * 1000 + 999);
        current_time_ns = (unsigned int)(v3 * 1000 + 999);
    }
    return result;
}

int get_funky_string(unsigned int* param0, unsigned int* param1, int param2, int* param3) {
    char v0 = (unsigned char)param2;
    char* ptr0 = *param1;
    char* ptr1 = *param0;
    int v1 = 0;
    char v2 = 0;
    unsigned int v3 = 0;
loc_804BABB:
    while(v3 <= 4) {
        switch(v3) {
            case 0: {
                break;
            }
            case 1: {
                unsigned int v4 = (unsigned int)*ptr0;
                switch(v4) {
                    case 0: {
                        v3 = 6;
                    loc_804B944:
                        if(v3 == 1) {
                            *ptr1 = v2;
                            ++ptr1;
                            ++v1;
                            v3 = 0;
                        }
                        ++ptr0;
                        continue loc_804BABB;
                    }
                    case 48: 
                    case 49: 
                    case 50: 
                    case 51: 
                    case 52: 
                    case 53: 
                    case 54: 
                    case 55: {
                        v3 = 2;
                        v2 = *ptr0 - 48;
                        goto loc_804B944;
                    }
                    case 63: {
                        v2 = 127;
                        goto loc_804B944;
                    }
                    case 88: 
                    case 120: {
                        v3 = 3;
                        v2 = 0;
                        goto loc_804B944;
                    }
                    case 95: {
                        v2 = 32;
                        goto loc_804B944;
                    }
                    case 97: {
                        v2 = 7;
                        goto loc_804B944;
                    }
                    case 98: {
                        v2 = 8;
                        goto loc_804B944;
                    }
                    case 101: {
                        v2 = 27;
                        goto loc_804B944;
                    }
                    case 102: {
                        v2 = 12;
                        goto loc_804B944;
                    }
                    case 110: {
                        v2 = 10;
                        goto loc_804B944;
                    }
                    case 114: {
                        v2 = 13;
                        goto loc_804B944;
                    }
                    case 116: {
                        v2 = 9;
                        goto loc_804B944;
                    }
                    case 118: {
                        v2 = 11;
                        goto loc_804B944;
                    }
                    default: {
                        v2 = *ptr0;
                        goto loc_804B944;
                    }
                }
            }
            case 2: {
                goto loc_804B96F;
            }
            case 3: {
                unsigned int v5 = (unsigned int)((int)*ptr0 - 48);
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
                    case 9: {
                        v2 = v2 * 16 + *ptr0 - 48;
                        ++ptr0;
                        continue loc_804BABB;
                    }
                    case 17: 
                    case 18: 
                    case 19: 
                    case 20: 
                    case 21: 
                    case 22: {
                        v2 = v2 * 16 + *ptr0 - 55;
                        ++ptr0;
                        continue loc_804BABB;
                    }
                    case 49: 
                    case 50: 
                    case 51: 
                    case 52: 
                    case 53: 
                    case 54: {
                        v2 = v2 * 16 + *ptr0 - 87;
                        ++ptr0;
                        continue loc_804BABB;
                    }
                    default: {
                        *ptr1 = v2;
                        ++ptr1;
                        ++v1;
                        v3 = 0;
                        continue loc_804BABB;
                    }
                }
            }
            case 4: {
                goto loc_804BA56;
            }
            default: {
                /*NO_RETURN*/ →abort();
                continue loc_804BABB;
            }
        }
        int v6 = (int)*ptr0;
        if(v6 == 92) {
            v3 = 1;
            ++ptr0;
        }
        else if(v6 == 94) {
            v3 = 4;
            ++ptr0;
        }
        else if(v6 < 61) {
            if(v6 && v6 != 58) {
                goto loc_804B89F;
            }
            else {
                v3 = 5;
            }
        }
        else if(v6 != 61) {
            goto loc_804B89F;
        }
        else if(v0) {
            v3 = 5;
        }
        else {
        loc_804B89F:
            *ptr1 = *ptr0;
            ++ptr1;
            ++ptr0;
            ++v1;
            continue;
        loc_804B96F:
            if(*ptr0 <= 47 || *ptr0 > 55) {
                *ptr1 = v2;
                ++ptr1;
                ++v1;
                v3 = 0;
            }
            else {
                v2 = v2 * 8 + *ptr0 - 48;
                ++ptr0;
                continue;
            loc_804BA56:
                v3 = 0;
                if(*ptr0 > 63 && *ptr0 != 127) {
                    *ptr1 = (unsigned char)((unsigned int)*ptr0 & 0x1f);
                    ++ptr1;
                    ++ptr0;
                    ++v1;
                }
                else if(*ptr0 == 63) {
                    *ptr1 = 127;
                    ++ptr1;
                    ++v1;
                }
                else {
                    v3 = 6;
                }
            }
        }
    }
    *param0 = ptr1;
    *param1 = ptr0;
    *param3 = v1;
    return (unsigned int)(v3 == 6 ? 0: 1) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
}

int get_link_name(int param0, int param1, int param2) {
    char v0 = (unsigned char)param2;
    /*NO_RETURN*/ areadlink_with_size(param0, *(unsigned int*)(param1 + 52));
}

int get_quoting_style(unsigned int* param0) {
    int* ptr0 = param0 != 0 ? param0: (int*)&default_quoting_options;
    return (int)(param0 != 0 ? *param0: *(int*)&default_quoting_options);
}

int* get_stat_atime(int* param0) {
    int v0;
    int* result = param0;
    int v1 = *(int*)(v0 + 68);
    *result = *(int*)(v0 + 64);
    *(result + 1) = v1;
    return result;
}

int* get_stat_ctime(int* param0) {
    int v0;
    int* result = param0;
    int v1 = *(int*)(v0 + 84);
    *result = *(int*)(v0 + 80);
    *(result + 1) = v1;
    return result;
}

int* get_stat_mtime(int* param0) {
    int v0;
    int* result = param0;
    int v1 = *(int*)(v0 + 76);
    *result = *(int*)(v0 + 72);
    *(result + 1) = v1;
    return result;
}

int get_type_indicator(int param0, int param1, int param2) {
    char v0 = ((unsigned char)param0 != 0 ? (param1 & 0xf000) == 0x8000 ? 1: 0: param2 == 5 ? 1: 0) ? !(unsigned char)((unsigned int)(unsigned char)param0 ^ 1) && indicator_style == 3 && (param1 & 0x49) ? 42: 0: ((unsigned char)param0 != 0 ? (param1 & 0xf000) == 0x4000 ? 1: 0: param2 == 3 || param2 == 9 ? 1: 0) != 0 ? 47: indicator_style == 1 ? 0: ((unsigned char)param0 != 0 ? (param1 & 0xf000) == 0xa000 ? 1: 0: param2 == 6 ? 1: 0) != 0 ? 64: ((unsigned char)param0 != 0 ? (param1 & 0xf000) == 0x1000 ? 1: 0: param2 == 1 ? 1: 0) != 0 ? 124: ((unsigned char)param0 != 0 ? (param1 & 0xf000) == 0xc000 ? 1: 0: param2 == 7 ? 1: 0) != 0 ? 61: 0;
    return (unsigned int)v0;
}

int getfilecon() {
    int* ptr0 = →__errno_location();
    ptr0[0] = 95;
    return -1;
}

int getgidbyname(char* __s2) {
    unsigned int i;
    for(i = group_alist; i; i = *(unsigned int*)(i + 4)) {
        if(*(char*)(i + 8) == __s2[0]) {
            /*NO_RETURN*/ →strcmp((char*)(i + 8), __s2);
        }
    }
    for(i = nogroup_alist; i; i = *(unsigned int*)(i + 4)) {
        if(*(char*)(i + 8) == __s2[0]) {
            /*NO_RETURN*/ →strcmp((char*)(i + 8), __s2);
        }
    }
    group* ptr0 = →getgrnam(__s2);
    size_t v0 = →strlen(__s2);
    /*NO_RETURN*/ xmalloc(v0 + 9);
}

int* getgroup(__gid_t __gid) {
    int* ptr0 = NULL;
    int* ptr1 = group_alist;
    while(ptr1) {
        if(*ptr1 == __gid) {
            ptr0 = ptr1;
            break;
        }
        else {
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
    }
    if(!ptr0) {
        group* ptr2 = →getgrgid(__gid);
        char* ptr3 = ptr2 != 0 ? ptr2->gr_name: (char*)0x80619AC;
        char* __s = ptr2 != 0 ? ptr2->gr_name: (char*)0x80619AC;
        size_t v0 = →strlen(__s);
        /*NO_RETURN*/ xmalloc(v0 + 9);
    }
    return *(char*)(ptr0 + 2) != 0 ? ptr0 + 2: NULL;
}

char* gettext_quote(char* __msgid, int param1) {
    char* result = →gettext(__msgid);
    if(result == __msgid && param1 == 6) {
        result = (char*)&gvar_8061A3C;
    }
    return result;
}

int getuidbyname(char* __s2) {
    unsigned int i;
    for(i = user_alist; i; i = *(unsigned int*)(i + 4)) {
        if(*(char*)(i + 8) == __s2[0]) {
            /*NO_RETURN*/ →strcmp((char*)(i + 8), __s2);
        }
    }
    for(i = nouser_alist; i; i = *(unsigned int*)(i + 4)) {
        if(*(char*)(i + 8) == __s2[0]) {
            /*NO_RETURN*/ →strcmp((char*)(i + 8), __s2);
        }
    }
    passwd* ptr0 = →getpwnam(__s2);
    size_t v0 = →strlen(__s2);
    /*NO_RETURN*/ xmalloc(v0 + 9);
}

int* getuser(__uid_t __uid) {
    int* ptr0 = NULL;
    int* ptr1 = user_alist;
    while(ptr1) {
        if(*ptr1 == __uid) {
            ptr0 = ptr1;
            break;
        }
        else {
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
    }
    if(!ptr0) {
        passwd* ptr2 = →getpwuid(__uid);
        char* ptr3 = ptr2 != 0 ? ptr2->pw_name: (char*)0x80619AC;
        char* __s = ptr2 != 0 ? ptr2->pw_name: (char*)0x80619AC;
        size_t v0 = →strlen(__s);
        /*NO_RETURN*/ xmalloc(v0 + 9);
    }
    return *(char*)(ptr0 + 2) != 0 ? ptr0 + 2: NULL;
}

int gnu_mbswidth(char* __s, int param1) {
    size_t v0 = →strlen(__s);
    return mbsnwidth(__s, (int)v0, param1);
}

int gobble_file(char* __s1, int param1, int param2, int param3, int param4, char* __s2) {
    int result;
    int v0;
    char* ptr0;
    int* ptr1;
    char v1;
    int v2;
    char v3;
    char* __file;
    char v4;
    unsigned int v5;
    char v6;
    char v7;
    char v8;
    char v9;
    int v10 = param2;
    int v11 = param3;
    char v12 = (unsigned char)param4;
    unsigned int v13 = 0;
    unsigned int v14 = 0;
    if(v12 && (v10 | v11)) {
        /*NO_RETURN*/ →__assert_fail("! command_line_arg || inode == NOT_AN_INODE_NUMBER", "ls.c", 2551, (char*)&__PRETTY_FUNCTION__.7411);
    }
    if(cwd_n_used == cwd_n_alloc) {
        void* ptr2 = xnrealloc(cwd_file, cwd_n_alloc, 240);
        cwd_file = ptr2;
        cwd_n_alloc *= 2;
    }
    void* __s = (void*)(cwd_n_used * 8 * 15 + cwd_file);
    /*BAD_CALL!*/ →memset(__s, 0, 120);
    *(int*)((int)__s + 96) = v10;
    *(int*)((int)__s + 100) = v11;
    *(int*)((int)__s + 104) = param1;
    if((v12 || format_needs_stat || (param1 == 3 && print_with_color) || ((print_inode || format_needs_type) && (param1 == 6 || !param1) && (dereference == 5 || color_symlink_as_referent || check_symlink_color)) || (!(unsigned char)((unsigned int)print_inode ^ 1) && !(v10 | v11)))) {
    loc_804CAAB:
        if(__s1[0] == 47 || !__s2[0]) {
            __file = __s1;
        }
        else {
            →strlen(__s1);
            →strlen(__s2);
            char* ptr3 = (char*)((int)(int*)((int)(int*)((char*)&v8 + 15) >>> 4) * 16);
            __file = (char*)((int)(int*)((int)(int*)((char*)&v8 + 15) >>> 4) * 16);
            attach(__file, __s2, __s1);
        }
        unsigned int v15 = dereference;
        if(v15 < 3) {
        loc_804CBFF:
            v2 = lstat64(__file, (stat64*)((int)__s + 8));
            v1 = 0;
        }
        else if(v15 <= 4) {
            if(v12) {
                v2 = stat64(__file, (stat64*)((int)__s + 8));
                v1 = 1;
                if(dereference == 3) {
                    goto loc_804CC0F;
                }
                else {
                    if(v2 < 0) {
                        int* ptr4 = →__errno_location();
                        v3 = ptr4[0] == 2 ? 1: 0;
                    }
                    else {
                        v3 = (*(int*)((int)__s + 24) & 0xf000) == 0x4000 ? 0: 1;
                    }
                    char v16 = v3;
                    if((unsigned char)((unsigned int)v16 ^ 1)) {
                        goto loc_804CC0F;
                    }
                }
            }
            goto loc_804CBFF;
        }
        else if(v15 != 5) {
            goto loc_804CBFF;
        }
        else {
            v2 = stat64(__file, (stat64*)((int)__s + 8));
            v1 = 1;
        }
    loc_804CC0F:
        if(!v2) {
            *(char*)((int)__s + 116) = 1;
            if(!format || print_scontext) {
                char v17 = 0;
                if(v1) {
                    ptr1 = (int*)((int)__s + 112);
                    ptr0 = __file;
                    v0 = getfilecon();
                }
                else {
                    ptr1 = (int*)((int)__s + 112);
                    ptr0 = __file;
                    v0 = lgetfilecon();
                }
                int v18 = v0;
                v2 = v18 >>> 31;
                if(!v2) {
                    /*NO_RETURN*/ →strcmp("unlabeled", *(char**)((int)__s + 112));
                }
                *(int*)((int)__s + 112) = &UNKNOWN_SECURITY_CONTEXT;
                int* ptr5 = →__errno_location();
                if(ptr5[0] != 95) {
                    int* ptr6 = →__errno_location();
                    if(ptr6[0] == 61) {
                        goto loc_804CD50;
                    }
                }
                else {
                loc_804CD50:
                    v2 = 0;
                }
                if(!v2 && (unsigned char)((unsigned int)v17 ^ 1) && !format) {
                    ptr1 = (int*)((int)__s + 8);
                    ptr0 = __file;
                    int v19 = file_has_acl();
                    v2 = v19 >>> 31;
                    v17 = v19 <= 0 ? 0: 1;
                }
                *(char*)((int)__s + 118) = v17;
                any_has_acl = (unsigned int)any_has_acl | (unsigned int)v17 ? 1: 0;
                if(v2) {
                    int v20 = quotearg_colon((int)__file);
                    int* ptr7 = →__errno_location();
                    →error(0, ptr7[0], (char*)&gvar_805F916, v20);
                }
            }
            if((*(int*)((int)__s + 24) & 0xf000) == 0xa000 && (!format || check_symlink_color)) {
                /*NO_RETURN*/ get_link_name((int)__file, (int)__s, (int)v12);
            }
            if((*(int*)((int)__s + 24) & 0xf000) == 0xa000 && (unsigned char)((unsigned int)check_symlink_color ^ 1)) {
                *(char*)((int)__s + 117) = 1;
            }
            *(int*)((int)__s + 104) = (*(int*)((int)__s + 24) & 0xf000) == 0xa000 ? 6: (*(int*)((int)__s + 24) & 0xf000) == 0x4000 ? (unsigned char)(((unsigned int)immediate_dirs ^ 1) & (unsigned int)v12) != 0 ? 9: 3: 5;
            unsigned int v21 = *(unsigned int*)((int)__s + 68);
            v13 = *(unsigned int*)((int)__s + 64);
            v14 = v21;
            if(!format || print_block_size) {
                void* ptr8 = human_readable(v13, v14, &v4, human_output_opts, 0x200, 0, *(int*)&output_block_size, *(int*)((char*)&output_block_size + 4));
                int v22 = gnu_mbswidth((char*)ptr8, 0);
                if(block_size_width < v22) {
                    block_size_width = v22;
                }
            }
            if(!format) {
                if(print_owner) {
                    size_t v23 = format_user_width(*(__uid_t*)((int)__s + 32));
                    if(owner_width < (int)v23) {
                        owner_width = v23;
                    }
                }
                if(print_group) {
                    size_t v24 = format_group_width(*(__gid_t*)((int)__s + 36));
                    if(group_width < (int)v24) {
                        group_width = v24;
                    }
                }
                if(print_author) {
                    size_t v25 = format_user_width(*(__uid_t*)((int)__s + 32));
                    if(author_width < (int)v25) {
                        author_width = v25;
                    }
                }
            }
            if(print_scontext) {
                size_t v26 = →strlen(*(char**)((int)__s + 112));
                if(scontext_width < (int)v26) {
                    scontext_width = v26;
                }
            }
            if(!format) {
                char* __s3 = umaxtostr(*(unsigned int*)((int)__s + 28), 0, &v7);
                size_t v27 = →strlen(__s3);
                if(nlink_width < (int)v27) {
                    nlink_width = v27;
                }
                if((*(int*)((int)__s + 24) & 0xf000) == 0x2000 || (*(int*)((int)__s + 24) & 0xf000) == 0x6000) {
                    int* ptr9 = *(unsigned int*)((int)__s + 44);
                    ptr0 = *(char**)((int)__s + 40);
                    ptr1 = ptr9;
                    unsigned int v28 = →gnu_dev_major(*(unsigned long long*)&ptr0);
                    char* __s4 = umaxtostr(v28, 0, &v9);
                    size_t v29 = →strlen(__s4);
                    if(major_device_number_width < (int)v29) {
                        major_device_number_width = v29;
                    }
                    int* ptr10 = *(unsigned int*)((int)__s + 44);
                    ptr0 = *(char**)((int)__s + 40);
                    ptr1 = ptr10;
                    unsigned int v30 = →gnu_dev_minor(*(unsigned long long*)&ptr0);
                    char* __s5 = umaxtostr(v30, 0, &v9);
                    v29 = →strlen(__s5);
                    if(minor_device_number_width < (int)v29) {
                        minor_device_number_width = v29;
                    }
                    v29 = (size_t)(major_device_number_width + minor_device_number_width + 2);
                    if(file_size_width < (int)v29) {
                        file_size_width = v29;
                    }
                }
                else {
                    unsigned int v31 = (unsigned int)unsigned_file_size(*(int*)((int)__s + 52), *(int*)((int)__s + 56));
                    unsigned int v32 = v5;
                    void* ptr11 = human_readable(v31, v32, &v4, human_output_opts, 1, 0, *(int*)&file_output_block_size, *(int*)((char*)&file_output_block_size + 4));
                    int v33 = gnu_mbswidth((char*)ptr11, 0);
                    if(file_size_width < v33) {
                        file_size_width = v33;
                    }
                }
            }
        loc_804D28D:
            if(print_inode) {
                char* __s6 = umaxtostr(*(unsigned int*)((int)__s + 96), *(unsigned int*)((int)__s + 100), &v6);
                size_t v34 = →strlen(__s6);
                if(inode_number_width < (int)v34) {
                    inode_number_width = v34;
                }
            }
            /*NO_RETURN*/ xstrdup(__s1);
        }
        char* __format = →gettext("cannot access %s");
        file_failure((int)v12, __format, (int)__file);
        if(!v12) {
            /*NO_RETURN*/ xstrdup(__s1);
        }
        result = 0;
    }
    else if((unsigned char)((unsigned int)format_needs_type ^ 1)) {
        goto loc_804D28D;
    }
    else {
        if(param1) {
            if(param1 != 5) {
                goto loc_804D28D;
            }
            else if(indicator_style != 3) {
                if((unsigned char)((unsigned int)print_with_color ^ 1)) {
                    goto loc_804D28D;
                }
                else {
                    int v35 = is_colored(13);
                    if(!(unsigned char)v35) {
                        goto loc_804D28D;
                    }
                }
            }
        }
        goto loc_804CAAB;
    }
    return result;
}

int group_number(void* param0, size_t __n, unsigned char* param2, char* param3) {
    char v0;
    void* __src = param0;
    unsigned char* ptr0 = param2;
    char* __s = param3;
    int v1 = *(int*)(__GS_BASE + (int)(int*)0x14);
    size_t __n1 = 0xffffffff;
    size_t __n2 = →strlen(__s);
    size_t v2 = __n;
    →memcpy(&v0, __src, __n);
    void* __dest = (void*)((int)__src + __n);
    while(1) {
        unsigned char v3 = *ptr0;
        if(v3) {
            size_t v4 = v3 <= 126 ? (size_t)v3: v2;
            __n1 = v3 <= 126 ? (size_t)v3: v2;
            ++ptr0;
        }
        if(v2 < __n1) {
            __n1 = v2;
        }
        __dest = (void*)((int)__dest - __n1);
        v2 -= __n1;
        →memcpy(__dest, (void*)((int)&v0 + v2), __n1);
        if(!v2) {
            int result = (int)__dest;
            if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v1)) {
                result = /*NO_RETURN*/ →__stack_chk_fail();
            }
            return result;
        }
        __dest = (void*)((int)__dest - __n2);
        →memcpy(__dest, __s, __n2);
    }
}

int hard_locale(int __category) {
    char v0 = 1;
    char* __s1 = →setlocale(__category, NULL);
    if(__s1) {
        /*NO_RETURN*/ →strcmp(__s1, (char*)&gvar_8061857);
    }
    return (unsigned int)v0;
}

unsigned int* hash_clear(unsigned int* param0) {
    int* ptr0;
    for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
        if(*i) {
            for(int* j = *(unsigned int*)(i + 1); j; j = ptr0) {
                if(*(int*)(param0 + 8)) {
                    *(int*)(param0 + 8)(*j);
                }
                *j = 0;
                ptr0 = *(unsigned int*)(j + 1);
                *(j + 1) = *(int*)(param0 + 9);
                *(param0 + 9) = j;
            }
            if(*(int*)(param0 + 8)) {
                *(int*)(param0 + 8)(*i);
            }
            *i = 0;
            *(i + 1) = 0;
        }
    }
    *(int*)(param0 + 3) = 0;
    *(int*)(param0 + 4) = 0;
    return param0;
}

int hash_delete(int param0, int param1) {
    int v0;
    int result;
    int* ptr0;
    int v1;
    int v2;
    short v3;
    int v4;
    int v5 = hash_find_entry(param0, param1, &ptr0, 1);
    if(!v5) {
        result = 0;
    }
    else {
        *(int*)(param0 + 16) = *(int*)(param0 + 16) - 1;
        if(!*ptr0) {
            *(int*)(param0 + 12) = *(int*)(param0 + 12) - 1;
            int v6 = *(int*)(param0 + 12);
            int v7 = 0;
            int v8 = *(int*)(param0 + 8);
            v11 = v8;
            fucompp();
            (unsigned short)v13 = fnstsw((unsigned short)v8);
            if(!((v4 >>> 8) & 1) && !((v4 >>> 14) & 1)) {
                check_tuning(param0);
                int v9 = *(int*)(param0 + 12);
                v7 = 0;
                int v10 = *(int*)(param0 + 8);
                v11 = v10;
                fucompp();
                (unsigned short)v13 = fnstsw((unsigned short)v10);
                if(!((v2 >>> 8) & 1) && !((v2 >>> 14) & 1)) {
                    if(*(char*)(*(int*)(param0 + 20) + 16)) {
                        v3 = fnstcw(v3);
                        short v12 = fldcw((unsigned short)(unsigned char)v3 | ((unsigned short)12 << 8));
                        fistp();
                        v3 = fldcw(v3);
                        v0 = v1;
                    }
                    else {
                        v3 = fnstcw(v3);
                        v12 = fldcw((unsigned short)(unsigned char)v3 | ((unsigned short)12 << 8));
                        fistp();
                        v3 = fldcw(v3);
                        v0 = v1;
                    }
                    hash_rehash((unsigned int*)param0, v0);
                }
            }
        }
        result = v5;
    }
    return result;
}

int hash_do_for_each(unsigned int* param0, int param1, int param2) {
    int result = 0;
    for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
        if(*i) {
            int* ptr0 = i;
            while(ptr0) {
                int v0 = param1(*ptr0, param2);
                if((unsigned char)(v0 ^ 1)) {
                    return result;
                }
                ++result;
                ptr0 = *(unsigned int*)(ptr0 + 1);
            }
        }
    }
    return result;
}

int hash_find_entry(int param0, int param1, unsigned int* param2, int param3) {
    int result1;
    char v0 = (unsigned char)param3;
    int v1 = *(int*)param0;
    int v2 = *(int*)(param0 + 24)(param1, *(int*)(param0 + 8));
    int* ptr0 = (int*)(v2 * 8 + v1);
    if(*(unsigned int*)(param0 + 4) <= (unsigned int)ptr0) {
        /*NO_RETURN*/ →abort();
    }
    *param2 = ptr0;
    if(!*ptr0) {
        result1 = 0;
    }
    else {
        int v3 = *(int*)(param0 + 28)(param1, *ptr0);
        if((unsigned char)v3) {
            int v4 = *ptr0;
            if(v0) {
                if(*(ptr0 + 1)) {
                    int* ptr1 = *(int**)(ptr0 + 1);
                    int v5 = ptr1[1];
                    *ptr0 = ptr1[0];
                    *(ptr0 + 1) = v5;
                    free_entry(param0, ptr1);
                }
                else {
                    *ptr0 = 0;
                }
            }
            result1 = v4;
        }
        else {
            int* ptr2 = ptr0;
            while(*(ptr2 + 1)) {
                int v6 = *(int*)(param0 + 28)(param1, **(unsigned int*)(ptr2 + 1));
                if((unsigned char)v6) {
                    int result = **(unsigned int*)(ptr2 + 1);
                    if(v0) {
                        int* ptr3 = *(int**)(ptr2 + 1);
                        *(ptr2 + 1) = ptr3[1];
                        free_entry(param0, ptr3);
                    }
                    return result;
                }
                ptr2 = *(unsigned int*)(ptr2 + 1);
            }
            result1 = 0;
        }
    }
    return result1;
}

int hash_free(unsigned int* param0) {
    int v0;
    void* j;
    void* i;
    if(*(int*)(param0 + 8) && *(int*)(param0 + 4)) {
        for(i = *param0; *(param0 + 1) > (unsigned int)i; i = (void*)((int)i + 8)) {
            if(*(int*)i) {
                for(j = i; j; j = *(void**)((int)j + 4)) {
                    *(int*)(param0 + 8)(*(int*)j);
                }
            }
        }
    }
    for(i = *param0; *(param0 + 1) > (unsigned int)i; i = (void*)((int)i + 8)) {
        j = *(void**)((int)i + 4);
        while(j) {
            v0 = *(int*)((int)j + 4);
            /*NO_RETURN*/ →free(j);
        }
    }
    j = *(void**)(param0 + 9);
    while(j) {
        v0 = *(int*)((int)j + 4);
        /*NO_RETURN*/ →free(j);
    }
    /*NO_RETURN*/ →free(*param0);
}

unsigned int hash_get_entries(unsigned int* param0, int param1, unsigned int param2) {
    unsigned int result = 0;
    for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
        if(*i) {
            int* ptr0 = i;
            while(ptr0) {
                if(result >= param2) {
                    return result;
                }
                *(int*)(result * 4 + param1) = *ptr0;
                ++result;
                ptr0 = *(unsigned int*)(ptr0 + 1);
            }
        }
    }
    return result;
}

int hash_get_first(unsigned int* param0) {
    int result;
    if(!*(int*)(param0 + 4)) {
        result = 0;
    }
    else {
        int* ptr0 = *param0;
        while(1) {
            if(*(param0 + 1) <= (unsigned int)ptr0) {
                /*NO_RETURN*/ →abort();
            }
            if(*ptr0) {
                return *ptr0;
            }
            ptr0 += 2;
        }
    }
    return result;
}

unsigned int hash_get_max_bucket_length(unsigned int* param0) {
    unsigned int result = 0;
    for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
        if(*i) {
            int* j = i;
            unsigned int v0 = 1;
            for(j = *(unsigned int*)(j + 1); j; j = *(unsigned int*)(j + 1)) {
                ++v0;
            }
            if(v0 > result) {
                result = v0;
            }
        }
    }
    return result;
}

int hash_get_n_buckets(int param0) {
    return *(int*)(param0 + 8);
}

int hash_get_n_buckets_used(int param0) {
    return *(int*)(param0 + 12);
}

int hash_get_n_entries(int param0) {
    return *(int*)(param0 + 16);
}

int hash_get_next(int* param0, int param1) {
    int v0 = *param0;
    int v1 = *(param0 + 6)(param1, *(param0 + 2));
    int* ptr0 = (int*)(v1 * 8 + v0);
    if(*(unsigned int*)(param0 + 1) <= (unsigned int)ptr0) {
        /*NO_RETURN*/ →abort();
    }
    int* ptr1 = ptr0;
    while(ptr1) {
        if(*ptr1 == param1 && *(ptr1 + 1)) {
            return **(unsigned int*)(ptr1 + 1);
        }
        ptr1 = *(unsigned int*)(ptr1 + 1);
    }
    do {
        ptr0 += 2;
        if(*(unsigned int*)(param0 + 1) <= (unsigned int)ptr0) {
            return 0;
        }
    }
    while(!*ptr0);
    return *ptr0;
}

int hash_initialize(int param0, int param1, int param2, int param3) {
    if((param2 && param3)) {
        /*NO_RETURN*/ →malloc(40);
    }
    return 0;
}

int hash_insert(int param0, int param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    short v4;
    if(!param1) {
        /*NO_RETURN*/ →abort();
    }
    int v5 = hash_find_entry(param0, param1, &ptr0, 0);
    if(v5) {
        result = v5;
    }
    else if(*ptr0) {
        int v6 = allocate_entry(param0);
        if(!v6) {
            result = 0;
        }
        else {
            *(int*)v6 = param1;
            *(int*)(v6 + 4) = *(ptr0 + 1);
            *(ptr0 + 1) = v6;
            *(int*)(param0 + 16) = *(int*)(param0 + 16) + 1;
            result = param1;
        }
    }
    else {
        *ptr0 = param1;
        *(int*)(param0 + 16) = *(int*)(param0 + 16) + 1;
        *(int*)(param0 + 12) = *(int*)(param0 + 12) + 1;
        int v7 = *(int*)(param0 + 12);
        int v8 = 0;
        int v9 = *(int*)(param0 + 8);
        v13 = v9;
        fucompp();
        (unsigned short)v15 = fnstsw((unsigned short)v9);
        if(!((v1 >>> 8) & 1) && !((v1 >>> 14) & 1)) {
            check_tuning(param0);
            int v10 = *(int*)(param0 + 12);
            v8 = 0;
            int v11 = *(int*)(param0 + 8);
            v13 = v11;
            fucompp();
            (unsigned short)v15 = fnstsw((unsigned short)v11);
            if(!((v2 >>> 8) & 1) && !((v2 >>> 14) & 1)) {
                fucompp();
                (unsigned short)v15 = fnstsw((unsigned short)*(int*)(param0 + 20));
                if(!((v3 >>> 8) & 1)) {
                    return 0;
                }
                v4 = fnstcw(v4);
                short v14 = fldcw((unsigned short)(unsigned char)v4 | ((unsigned short)12 << 8));
                fistp();
                v4 = fldcw(v4);
                int v12 = hash_rehash((unsigned int*)param0, v0);
                if((unsigned char)(v12 ^ 1)) {
                    param1 = 0;
                }
            }
            return param1;
        }
        result = param1;
    }
    return result;
}

int hash_lookup(int* param0, int param1) {
    int result;
    int v0 = *param0;
    int v1 = *(param0 + 6)(param1, *(param0 + 2));
    int* ptr0 = (int*)(v1 * 8 + v0);
    if(*(unsigned int*)(param0 + 1) <= (unsigned int)ptr0) {
        /*NO_RETURN*/ →abort();
    }
    if(!*ptr0) {
        result = 0;
    }
    else {
        int* ptr1 = ptr0;
        while(ptr1) {
            int v2 = *(param0 + 7)(param1, *ptr1);
            if((unsigned char)v2) {
                return *ptr1;
            }
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
        result = 0;
    }
    return result;
}

int hash_print_statistics(int param0, FILE* __stream) {
    int v0 = hash_get_n_entries(param0);
    int v1 = hash_get_n_buckets(param0);
    int v2 = hash_get_n_buckets_used(param0);
    unsigned int v3 = hash_get_max_bucket_length((unsigned int*)param0);
    →fprintf(__stream, "# entries:         %lu\n", v0);
    →fprintf(__stream, "# buckets:         %lu\n", v1);
    int v4 = 0;
    int v5 = v2;
    __SyntheticTypeUnknownF v6 = (double)*(long long*)&v5 * 100.0;
    v5 = v1;
    →fprintf(__stream, "# buckets used:    %lu (%.2f%%)\n", v2, v6 / (double)*(long long*)&v5);
    return →fprintf(__stream, "max bucket length: %lu\n", v3);
}

int hash_rehash(unsigned int* param0, int param1) {
    char v0;
    int v1;
    int v2 = *(int*)(param0 + 7);
    int v3 = *(int*)(param0 + 6);
    int v4 = *(int*)(param0 + 5);
    int v5 = *(int*)(param0 + 8);
    int v6 = hash_initialize(param1, v4, v3, v2);
    if(v6) {
        *(int*)(v6 + 36) = *(int*)(param0 + 9);
        for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
            if(i[0]) {
                for(int* j = i; j; j = (int*)v1) {
                    int v7 = j[0];
                    int v8 = *(int*)v6;
                    int v9 = *(int*)(v6 + 24)(v7, *(int*)(v6 + 8));
                    int* ptr0 = (int*)(v9 * 8 + v8);
                    if(*(unsigned int*)(v6 + 4) <= (unsigned int)ptr0) {
                        /*NO_RETURN*/ →abort();
                    }
                    v1 = j[1];
                    if(!*ptr0) {
                        *ptr0 = v7;
                        *(int*)(v6 + 12) = *(int*)(v6 + 12) + 1;
                        if(j != i) {
                            free_entry(v6, j);
                        }
                    }
                    else if(j == i) {
                        int v10 = allocate_entry(v6);
                        if(!v10) {
                            v0 = 0;
                            return (unsigned int)v0;
                        }
                        *(int*)v10 = v7;
                        *(int*)(v10 + 4) = *(ptr0 + 1);
                        *(ptr0 + 1) = v10;
                    }
                    else {
                        j[1] = *(ptr0 + 1);
                        *(int**)(ptr0 + 1) = j;
                    }
                }
            }
        }
        /*NO_RETURN*/ →free(*param0);
    }
    v0 = 0;
    return (unsigned int)v0;
}

int* hash_reset_tuning(int* param0) {
    *param0 = 0;
    *(param0 + 1) = 0x3f800000;
    *(param0 + 2) = 0x3f4ccccd;
    *(param0 + 3) = 1068826100;
    *(char*)(param0 + 4) = 0;
    return param0;
}

unsigned int hash_string(char* param0, unsigned int param1) {
    unsigned int result = 0;
    for(char i = *param0; i; i = *param0) {
        unsigned int v0 = (unsigned int)(result * 31 + (unsigned int)i);
        result = v0 % param1;
        ++param0;
    }
    return result;
}

int hash_table_ok(unsigned int* param0) {
    int v0 = 0;
    int v1 = 0;
    for(int* i = *param0; *(param0 + 1) > (unsigned int)i; i += 2) {
        if(*i) {
            int* j = i;
            ++v0;
            ++v1;
            for(j = *(unsigned int*)(j + 1); j; j = *(unsigned int*)(j + 1)) {
                ++v1;
            }
        }
    }
    return *(int*)(param0 + 3) == v0 && *(int*)(param0 + 4) == v1 ? 1: 0;
}

int human_options(char* __s, int* param1, int* param2) {
    int v0;
    int result = humblock(__s, param2, param1);
    if(!(param2[1] | param2[0])) {
        int v1 = default_block_size();
        int* ptr0 = param2;
        ptr0[0] = v1;
        ptr0[1] = v0;
        result = 4;
    }
    return result;
}

void* human_readable(unsigned int param0, unsigned int param1, char* __s, int param3, unsigned int param4, unsigned int param5, unsigned int param6, unsigned int param7) {
    void* ptr0;
    char v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    unsigned int v6;
    unsigned int v7;
    int v8;
    unsigned int v9;
    size_t __n;
    __SyntheticTypeUnknown v10;
    unsigned int v11;
    __SyntheticTypeUnknownF v12;
    int v13;
    __SyntheticTypeUnknownF v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    unsigned int v20;
    unsigned int v21 = param0;
    unsigned int v22 = param1;
    unsigned int v23 = param4;
    unsigned int v24 = param5;
    unsigned int v25 = param6;
    unsigned int v26 = param7;
    int v27 = param3 & 0x3;
    unsigned int v28 = (param3 & 0x20) != 0 ? 0x400: 1000;
    unsigned int v29 = (param3 & 0x20) != 0 ? 0x400: 1000;
    int v30 = -1;
    int v31 = 8;
    void* __src = (void*)&gvar_80618F9;
    size_t __n1 = 1;
    unsigned char* ptr1 = (unsigned char*)&gvar_80618FB;
    char* ptr2 = (char*)&gvar_80618FB;
    lconv* ptr3 = →localeconv();
    size_t v32 = →strlen(ptr3->decimal_point);
    if(v32 && v32 <= 16) {
        __src = ptr3->decimal_point;
        __n1 = v32;
    }
    ptr1 = (unsigned char*)ptr3->grouping;
    size_t v33 = →strlen(ptr3->thousands_sep);
    if(v33 <= 16) {
        ptr2 = ptr3->thousands_sep;
    }
    void* ptr4 = (void*)(__s + 0x288);
    void* __dest = (void*)(__s + 0x288);
    unsigned int v34 = v25;
    unsigned int v35 = v26;
    if(v35 <= v24 && (v35 < v24 || v34 <= v23)) {
        unsigned int v36 = __umoddi3(v23, v24, v25, v26);
        if(v36 | v20) {
        loc_8053B68:
            __SyntheticTypeUnknownF v37 = (double)*(long long*)&v25;
            if(v26 >= 0x80000000) {
                v37 += *(__int128*)&gvar_8061990;
            }
            __SyntheticTypeUnknownF v38 = v37;
            __SyntheticTypeUnknownF v39 = (double)*(long long*)&v21;
            if(v22 >= 0x80000000) {
                v39 += *(__int128*)&gvar_8061990;
            }
            __SyntheticTypeUnknownF v40 = (double)*(long long*)&v23;
            if(v24 >= 0x80000000) {
                v40 += *(__int128*)&gvar_8061990;
            }
            v10[v82 + 1] = fdivrp(v38, v40);
            *(__int128*)&v19 = v14 * v39;
            char v41 = 6;
            if(!(param3 & 0x10)) {
                adjust_value(v27, v19, v17, v15);
                *(__int128*)&v16 = v12;
                →sprintf(__s, "%.0Lf");
                __n = →strlen(__s);
                v9 = 0;
            }
            else {
                int v42 = 0;
                int v43 = 0x80000000;
                int v44 = 0x3fff;
                v30 = 0;
                do {
                    unsigned int v45 = v29;
                    v10[v41 - 1] = (double)*(long long*)&v45;
                    v10[v41 - 2] = *(__int128*)&v42;
                    v10[v41 - 1] *= v10[v41 - 2];
                    *(__int128*)&v42 = v10[v41 - 1];
                    ++v30;
                    v45 = v29;
                    v10[v41 - 1] = (double)*(long long*)&v45;
                    v10[v41 - 2] = *(__int128*)&v42;
                    v10[v41 - 1] *= v10[v41 - 2];
                    v41 -= 2;
                    v10[v41] = *(__int128*)&v19;
                    fucompp();
                    (unsigned short)v81 = fnstsw((unsigned short)v29);
                    v8 = (unsigned int)((unsigned char)(v8 >>> 8) & 0x5 ? 0: 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                }
                while(!(unsigned char)(v8 ^ 1) && v31 > v30);
                v10[v41 - 1] = *(__int128*)&v19;
                v10[v41 - 2] = *(__int128*)&v42;
                v10[v41 - 1] /= v10[v41 - 2];
                *(__int128*)&v19 = v10[v41 - 1];
                adjust_value(v27, v19, v17, v15);
                *(__int128*)&v16 = v12;
                →sprintf(__s, "%.1Lf");
                __n = →strlen(__s);
                v9 = (unsigned int)(__n1 + 1);
                if((unsigned int)((param3 & 0x20 ? 0: 1) + v9 + 1) < __n || ((param3 & 0x8) && __s[__n - 1] == 48)) {
                    *(__int128*)&v18 = *(__int128*)&v19 * *(__int128*)&gvar_80619A0;
                    adjust_value(v27, v18, v16, v13);
                    *(__int128*)&v16 = v12 / *(__int128*)&gvar_80619A0;
                    →sprintf(__s, "%.0Lf");
                    __n = →strlen(__s);
                    v9 = 0;
                }
            }
            __dest = (void*)((int)ptr4 - __n);
            →memmove(__dest, __s, __n);
            ptr0 = (void*)((unsigned int)(__n - v9) + (int)__dest);
        }
        else {
            unsigned int v46 = (unsigned int)__udivdi3(v23, v24, v25, v26);
            unsigned int v47 = v20;
            unsigned int v48 = v21 * v47 + v22 * v46 + (unsigned int)(((unsigned long long)v21 * (unsigned long long)v46) >>> 32L);
            v7 = v21 * v46;
            v6 = v48;
            int v49 = __udivdi3(v7, v6, v46, v47);
            if((v49 ^ v21) | (v20 ^ v22)) {
                goto loc_8053B68;
            }
            else {
                v5 = 0;
                v4 = 0;
                goto loc_8053E1A;
            }
        }
    }
    else {
        if(!(v23 | v24)) {
            goto loc_8053B68;
        }
        else {
            unsigned int v50 = __umoddi3(v25, v26, v23, v24);
            if(v50 | v20) {
                goto loc_8053B68;
            }
            else {
                unsigned int v51 = (unsigned int)__udivdi3(v25, v26, v23, v24);
                unsigned int v52 = v20;
                unsigned int v53 = __umoddi3(v21, v22, v51, v52);
                unsigned int v54 = v53 * 10;
                unsigned int v55 = (unsigned int)(v20 * 10 + (unsigned int)(((unsigned long long)v53 * 10L) >>> 32L));
                unsigned int v56 = __umoddi3(v54, v55, v51, v52);
                unsigned int v57 = v56 * 2;
                unsigned int v58 = (unsigned int)((unsigned long long)(unsigned int)((v56 >>> 31) & 1) | ((unsigned long long)v20 << 1) | ((unsigned long long)0 << 33));
                v7 = (unsigned int)__udivdi3(v21, v22, v51, v52);
                v6 = v20;
                v5 = __udivdi3(v54, v55, v51, v52);
                unsigned int v59 = v57;
                unsigned int v60 = v58;
                if(v60 <= v52 && (v60 < v52 || v59 < v51)) {
                    v3 = v57 | v58 ? 1: 0;
                }
                else {
                    unsigned int v61 = v51;
                    unsigned int v62 = v52;
                    int v63 = v62 <= v58 && (v62 < v58 || v61 < v57) ? 3: 2;
                    v3 = v62 <= v58 && (v62 < v58 || v61 < v57) ? 3: 2;
                }
                v4 = v3;
            loc_8053E1A:
                if((param3 & 0x10)) {
                    v30 = 0;
                    unsigned int v64 = v29;
                    unsigned int v65 = 0;
                    if(v6 >= 0 && (v6 > 0 || v64 <= v7)) {
                        do {
                            unsigned int v66 = __umoddi3(v7, v6, v29, 0);
                            unsigned int v67 = (unsigned int)(v66 * 10 + v5);
                            unsigned int v68 = (unsigned int)(v66 * 10 + v5);
                            unsigned int v69 = v68 % v29;
                            unsigned int v70 = (unsigned int)((v4 >> 1) + v69 + v69);
                            v7 = (unsigned int)__udivdi3(v7, v6, v29, 0);
                            v6 = v20;
                            v5 = (int)(v67 / v29);
                            if(v70 < v29) {
                                v2 = v70 + v4 ? 1: 0;
                            }
                            else {
                                int v71 = v70 + v4 > v29 ? 3: 2;
                                v2 = v70 + v4 > v29 ? 3: 2;
                            }
                            v4 = v2;
                            ++v30;
                            v11 = v29;
                            unsigned int v72 = 0;
                        }
                        while(v6 >= 0 && (v6 > 0 || v11 <= v7) && v31 > v30);
                        if((v6 < 0 || (v6 ? 0: 1)) && (v6 < 0 || v7 <= 9)) {
                            if(v27 == 1) {
                                v1 = (v5 & 1) + v4 <= 2 ? 0: 1;
                            }
                            else {
                                int v73 = !v27 && v4 > 0 ? 1: 0;
                                v1 = (unsigned char)v73;
                            }
                            if(v1) {
                                ++v5;
                                v4 = 0;
                                if(v5 == 10) {
                                    unsigned int v74 = v7;
                                    ++v7;
                                    v6 = (unsigned int)((unsigned int)(v74 >= 0xffffffff) + v6);
                                    v5 = 0;
                                }
                            }
                            if((v6 < 0 || (v6 ? 0: 1)) && (v6 < 0 || v7 <= 9) && (v5 || !(param3 & 0x8))) {
                                __dest = (void*)((int)__dest - 1);
                                *(char*)__dest = (unsigned char)v5 + 48;
                                __dest = (void*)((int)__dest - __n1);
                                →memcpy(__dest, __src, __n1);
                                v4 = 0;
                                v5 = 0;
                            }
                        }
                    }
                }
                if(v27 == 1) {
                    v0 = (((v7 & 1) + v4) | ((v4 >> 31) + (unsigned int)__carry__(v7 & 1, v4)) ? 1: 0) + v5 <= 5 ? 0: 1;
                }
                else {
                    int v75 = !v27 && v4 + v5 > 0 ? 1: 0;
                    v0 = (unsigned char)v75;
                }
                if(v0) {
                    unsigned int v76 = v7;
                    ++v7;
                    v6 = (unsigned int)((unsigned int)(v76 >= 0xffffffff) + v6);
                    if((param3 & 0x10) && !((v7 ^ v29) | v6) && v31 > v30) {
                        ++v30;
                        if(!(param3 & 0x8)) {
                            __dest = (void*)((int)__dest - 1);
                            *(char*)__dest = 48;
                            __dest = (void*)((int)__dest - __n1);
                            →memcpy(__dest, __src, __n1);
                        }
                        v7 = 1;
                        v6 = 0;
                    }
                }
                ptr0 = __dest;
            }
        }
        do {
            unsigned int v77 = __umoddi3(v7, v6, 10, 0);
            __dest = (void*)((int)__dest - 1);
            *(char*)__dest = (unsigned char)v77 + 48;
            v7 = (unsigned int)__udivdi3(v7, v6, 10, 0);
            v6 = v20;
        }
        while((v7 | v6));
    }
    if((param3 & 0x4)) {
        __dest = (void*)group_number(__dest, (size_t)((int)ptr0 - (int)__dest), ptr1, ptr2);
    }
    if((param3 & 0x80)) {
        if(v30 < 0) {
            v30 = 0;
            unsigned int v78 = 1;
            unsigned int v79 = 0;
            while((v26 > v79 || (v26 >= v79 && v25 > v78))) {
                ++v30;
                if(v31 == v30) {
                    break;
                }
                else {
                    unsigned int v80 = v79 * v29 + (unsigned int)(((unsigned long long)v78 * (unsigned long long)v29) >>> 32L);
                    v78 *= v29;
                    v79 = v80;
                }
            }
        }
        if(((param3 & 0x100) | v30) && (param3 & 0x40)) {
            *(char*)ptr4 = 32;
            ptr4 = (void*)((int)ptr4 + 1);
        }
        if(v30) {
            *(unsigned char*)ptr4 = (param3 & 0x20) || v30 != 1 ? *(unsigned char*)((int)&power_letter + v30): 107;
            ptr4 = (void*)((int)ptr4 + 1);
        }
        if((param3 & 0x100)) {
            if((param3 & 0x20) && v30) {
                *(char*)ptr4 = 105;
                ptr4 = (void*)((int)ptr4 + 1);
            }
            *(char*)ptr4 = 66;
            ptr4 = (void*)((int)ptr4 + 1);
        }
    }
    *(char*)ptr4 = 0;
    return __dest;
}

int humblock(char* __s, int* param1, int* param2) {
    int result1;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = 0;
    if(!__s) {
        __s = →getenv("BLOCK_SIZE");
        if(__s) {
            goto loc_8054427;
        }
        else {
            __s = →getenv("BLOCKSIZE");
            if(__s) {
                goto loc_8054427;
            }
            else {
                int v5 = default_block_size();
                int* ptr0 = param1;
                *ptr0 = v5;
                *(ptr0 + 1) = v1;
                *param2 = v4;
                return 0;
            }
        }
    }
    else {
    loc_8054427:
        if(__s[0] == 39) {
            v4 = 4;
            ++__s;
        }
        int v6 = argmatch(__s, &block_size_args, &block_size_opts, 4);
        if(v6 >= 0) {
            v4 |= *(int*)(v6 * 4 + (int)&block_size_opts);
            int* ptr1 = param1;
            *ptr1 = 1;
            *(ptr1 + 1) = 0;
        }
        else {
            int v7 = "eEgGkKmMpPtTyYzZ0";
            int* ptr2 = param1;
            (unsigned long long)v2 | ((unsigned long long)v1 << 32) = xstrtoumax(__s, &v0, 0);
            int result = v3;
            if(result) {
                *param2 = 0;
                return result;
            }
            while((__s[0] <= 47 || __s[0] > 57)) {
                if(v0 != __s) {
                    goto loc_8054506;
                }
                else {
                    v4 |= 128;
                    if(*(char*)(v0 - 1) == 66) {
                        v4 |= 0x100;
                    }
                }
                if(*(char*)(v0 - 1) != 66 || *(char*)(v0 - 2) == 105) {
                    v4 |= 32;
                    break;
                loc_8054506:
                    ++__s;
                }
                else {
                    break;
                }
            }
        }
        *param2 = v4;
        result1 = 0;
    }
    return result1;
}

char* imaxtostr(unsigned int param0, int* param1, int param2) {
    int* ptr0;
    unsigned int v0 = param0;
    int* ptr1 = param1;
    char* result = (char*)(param2 + 20);
    *result = 0;
    if((int)ptr1 < 0) {
        do {
            --result;
            unsigned int v1 = __moddi3(v0, ptr1, 10, NULL);
            *result = 48 - (unsigned char)v1;
            v0 = __divdi3(v0, (unsigned int)ptr1, 10, 0);
            ptr1 = ptr0;
        }
        while((int*)(v0 | (int)ptr1));
        --result;
        *result = 45;
    }
    else {
        do {
            --result;
            unsigned int v2 = __moddi3(v0, ptr1, 10, NULL);
            *result = (unsigned char)v2 + 48;
            v0 = __divdi3(v0, (unsigned int)ptr1, 10, 0);
            ptr1 = ptr0;
        }
        while((int*)(v0 | (int)ptr1));
    }
    return result;
}

unsigned int indent(unsigned int param0, unsigned int param1) {
loc_8050B9D:
    unsigned int result = param0;
    while(result < param1) {
        if(tabsize && (param0 + 1) / tabsize < param1 / tabsize) {
            →putchar_unlocked(9);
            param0 += tabsize - param0 % tabsize;
            goto loc_8050B9D;
        }
        else {
            →putchar_unlocked(32);
            ++param0;
            result = param0;
        }
    }
    return result;
}

unsigned int init_column_info() {
    unsigned int j;
    unsigned int v0;
    unsigned int v1 = cwd_n_used;
    unsigned int v2 = max_idx;
    unsigned int v3 = v1;
    if(v3 > v2) {
        v3 = v2;
    }
    unsigned int max = v3;
    if(column_info_alloc.10187 < max) {
        if(max_idx >>> 1 > max) {
            void* ptr0 = xnrealloc(column_info, max, 24);
            column_info = ptr0;
            v0 = max * 2;
        }
        else {
            void* ptr1 = xnrealloc(column_info, max_idx, 12);
            column_info = ptr1;
            v0 = max_idx;
        }
        unsigned int v4 = v0 - column_info_alloc.10187;
        unsigned int v5 = column_info_alloc.10187 + v0 + 1;
        unsigned int v6 = v4 * v5;
        if(v0 > v5 || v6 / v4 != v5) {
            /*NO_RETURN*/ xalloc_die();
        }
        /*NO_RETURN*/ xnmalloc(v6 >>> 1, 4);
    }
    for(unsigned int i = 0; i < max; ++i) {
        *(char*)(i * 3 * 4 + column_info) = 1;
        *(int*)((unsigned int)(i * 3 * 4 + column_info) + 4) = (i + 1) * 3;
        unsigned int v7 = 0;
        for(j = v7; j <= i; j = v7) {
            *(int*)(v7 * 4 + *(unsigned int*)(i * 3 * 4 + column_info + 8)) = 3;
            ++v7;
        }
    }
    return j;
}

unsigned int initialize_exit_failure(unsigned int param0) {
    unsigned int result;
    if(param0 != 1) {
        result = param0;
        exit_failure = param0;
    }
    return result;
}

unsigned int initialize_ordering_vector() {
    unsigned int min = 0;
    unsigned int i;
    for(i = cwd_n_used; i > min; i = cwd_n_used) {
        *(int*)(min * 4 + sorted_file) = min * 8 * 15 + cwd_file;
        ++min;
    }
    return i;
}

int is_colored(int param0) {
    int v0;
    int v1 = *(int*)(param0 * 8 + (int)&color_indicator);
    char* __s1 = *(char**)(param0 * 8 + (int)&gvar_80641E4);
    if(v1 && (v1 != 1 || __s1[0] != 48)) {
        if(v1 == 2) {
            int v2 = →strncmp(__s1, (char*)&gvar_805ED2C, 2);
            if(!v2) {
                v0 = 0;
                return (unsigned int)(unsigned char)v0;
            }
        }
        v0 = 1;
    }
    else {
        v0 = 0;
    }
    return (unsigned int)(unsigned char)v0;
}

int is_directory(int param0) {
    return *(int*)(param0 + 104) == 3 || *(int*)(param0 + 104) == 9 ? 1: 0;
}

int is_infinitel(int param0, int param1, int param2) {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = rpl_isnanl(param0, param1, param2);
    if(!v3) {
        fucompp();
        (unsigned short)v5 = fnstsw(0);
        int v4 = (((unsigned int)((v1 >>> 10) & 1 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((v1 >>> 14) & 1 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8))) ^ 1;
        if(!(unsigned char)v4) {
            fldz();
            fucompp();
            (unsigned short)v5 = fnstsw((unsigned short)v4);
            if(((v0 >>> 10) & 1) || !((v0 >>> 14) & 1)) {
                return 1;
            }
        }
        result = 0;
    }
    else {
        result = 1;
    }
    return result;
}

int is_prime(unsigned int param0) {
    unsigned int v0 = 3;
    unsigned int v1 = 9;
    while((v1 < param0 && (param0 % v0))) {
        ++v0;
        v1 = (unsigned int)(v0 * 4 + v1);
        ++v0;
    }
    unsigned int v2 = param0 % v0;
    return (unsigned int)(v2 ? 1: 0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
}

int iso_week_days(int param0, int param1) {
    int v0 = param0 - param1 + 382;
    return param0 - (v0 - v0 / 7 * 7) + 3;
}

char* last_component(char* param0) {
    char* result = param0;
    char v0 = 0;
    while(*result == 47) {
        ++result;
    }
    for(char* i = result; *i; ++i) {
        if(*i == 47) {
            v0 = 1;
        }
        else if(v0) {
            result = i;
            v0 = 0;
        }
    }
    return result;
}

int length_of_file_name_and_frills(int* param0) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int result = 0;
    if(print_inode) {
        if(format == 4) {
            char* __s = umaxtostr(param0[24], param0[25], &v3);
            size_t v5 = →strlen(__s);
            v2 = v5 + 1;
        }
        else {
            v2 = inode_number_width + 1;
        }
        result += v2;
    }
    if(print_block_size) {
        if(format == 4) {
            unsigned int v6 = *(int*)&output_block_size;
            unsigned int v7 = *(int*)((char*)&output_block_size + 4);
            int v8 = human_output_opts;
            void* ptr0 = human_readable(param0[16], param0[17], (char*)&v3, v8, 0x200, 0, v6, v7);
            size_t v9 = →strlen((char*)ptr0);
            v1 = v9 + 1;
        }
        else {
            v1 = block_size_width + 1;
        }
        result += v1;
    }
    if(print_scontext) {
        if(format == 4) {
            size_t v10 = →strlen(param0[28]);
            v0 = v10 + 1;
        }
        else {
            v0 = scontext_width + 1;
        }
        result += v0;
    }
    quote_name(0, param0[0], filename_quoting_options, &v4);
    result += v4;
    if(indicator_style) {
        int v11 = get_type_indicator((int)*(char*)&param0[29], param0[6], param0[26]);
        result += (unsigned char)v11 ? 1: 0;
    }
    return result;
}

int lgetfilecon() {
    int* ptr0 = →__errno_location();
    ptr0[0] = 95;
    return -1;
}

unsigned int long_time_expected_width() {
    char v0;
    if(width.9028 >= 0x80000000) {
        int v1 = 0;
        int v2 = (int)→localtime(&v1);
        if(v2) {
            int v3 = nstrftime(&v0, 1001, *(int*)&long_time_format, v2, 0, 0);
            if(v3) {
                int v4 = mbsnwidth((char*)&v0, v3, 0);
                width.9028 = v4;
            }
        }
        if(width.9028 >= 0x80000000) {
            width.9028 = 0;
        }
    }
    return width.9028;
}

char* longest_relative_suffix(char* param0) {
    while(*param0 == 47) {
        ++param0;
    }
    return param0;
}

int lstat64(char* __file, stat64* __buf) {
    return →__lxstat64(3, __file, __buf);
}

int main(int param0, int param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = &param0;
    int* ptr1 = &param0;
    program_name = **(unsigned int**)(&param0 + 1);
    →setlocale(6, (char*)&gvar_805ED70);
    →bindtextdomain("coreutils", "/usr/local/share/locale");
    →textdomain("coreutils");
    initialize_exit_failure(2);
    atexit((void __cdecl (*_)())&close_stdout);
    exit_status = 0;
    print_dir_name = 1;
    pending_dirs = 0;
    /*NO_RETURN*/ decode_switches(*&param0, *(char***)(&param0 + 1));
}

int make_link_name(char* __s1, char* __s) {
    if(__s) {
        if(__s[0] == 47) {
            /*NO_RETURN*/ xstrdup(__s);
        }
        char* ptr0 = →strrchr(__s1, 47);
        if(!ptr0) {
            /*NO_RETURN*/ xstrdup(__s);
        }
        int* ptr1 = (int*)((char*)((int)ptr0 - (int)__s1) + 1);
        size_t v0 = →strlen(__s);
        /*NO_RETURN*/ xmalloc((size_t)((char*)(v0 + (int)ptr1) + 1));
    }
    return 0;
}

int mbsnwidth(char* param0, int param1, int param2) {
    int result;
    char v0;
    wchar_t __c;
    int v1;
    char* __s = param0;
    char* ptr0 = &__s[param1];
    int v2 = 0;
    size_t v3 = →__ctype_get_mb_cur_max();
    if(v3 > 1) {
    loc_80516C1:
        while(ptr0 > __s) {
            int v4 = (int)__s[0];
            if(v4 <= 95) {
                if(v4 < 65 && (v4 < 32 || (v4 > 35 && (unsigned int)(v4 - 37) > 26))) {
                    goto loc_80515C7;
                }
                else {
                    goto loc_80515A4;
                }
            }
            if((unsigned int)(v4 - 97) <= 29) {
            loc_80515A4:
                ++__s;
                ++v2;
            }
            else {
            loc_80515C7:
                →memset(&v0, 0, 8);
                do {
                    size_t v5 = →mbrtowc(&__c, __s, (size_t)((int)ptr0 - (int)__s), (mbstate_t*)&v0);
                    if(v5 == -1) {
                        if(!(param2 & 1)) {
                            ++__s;
                            ++v2;
                            continue loc_80516C1;
                        }
                        else {
                            result = -1;
                        }
                        return result;
                    }
                    else if(v5 != -2) {
                        if(!v5) {
                            v5 = 1;
                        }
                        int v6 = →wcwidth(__c);
                        if(v6 >= 0) {
                            v2 += v6;
                            goto loc_80516A5;
                        }
                        if(param2 & 0x2) {
                            return -1;
                        }
                        int v7 = →iswcntrl((wint_t)__c);
                        v2 += v7 ? 0: 1;
                    loc_80516A5:
                        __s = &__s[v5];
                        v1 = →mbsinit((mbstate_t*)&v0);
                    }
                    else if(!(param2 & 1)) {
                        __s = ptr0;
                        ++v2;
                        continue loc_80516C1;
                    }
                    else {
                        return -1;
                    }
                }
                while(!v1);
                return -1;
            }
        }
        result = v2;
    }
    else {
        while(ptr0 > __s) {
            char v8 = __s[0];
            ++__s;
            unsigned short** ptr1 = →__ctype_b_loc();
            if(((unsigned int)ptr1[0][(unsigned int)v8] & 0x4000)) {
                ++v2;
            }
            else if(!(param2 & 0x2)) {
                unsigned short** ptr2 = →__ctype_b_loc();
                v2 += (unsigned int)ptr2[0][(unsigned int)v8] & 0x2 ? 0: 1;
            }
            else {
                return -1;
            }
        }
        result = v2;
    }
    return result;
}

int memcpy_lowcase(int param0, int param1, int param2) {
    while(1) {
        char v0 = param2 ? 1: 0;
        --param2;
        if(!v0) {
            return param0;
        }
        char* ptr0 = (char*)(param0 + param2);
        int v1 = →tolower((int)*(char*)(param1 + param2));
        *ptr0 = (unsigned char)v1;
    }
    return param0;
}

int memcpy_uppcase(int param0, int param1, int param2) {
    while(1) {
        char v0 = param2 ? 1: 0;
        --param2;
        if(!v0) {
            return param0;
        }
        char* ptr0 = (char*)(param0 + param2);
        int v1 = →toupper((int)*(char*)(param1 + param2));
        *ptr0 = (unsigned char)v1;
    }
    return param0;
}

int mfile_name_concat(char* param0, char* param1) {
    char* __s = last_component(param0);
    size_t v0 = base_len(__s);
    int* ptr0 = (int*)((int)(int*)((int)__s - (int)param0) + v0);
    int v1 = v0 && __s[v0 - 1] != 47 ? 1: 0;
    int v2 = v1;
    char* __s1 = longest_relative_suffix(param1);
    size_t v3 = →strlen(__s1);
    /*NO_RETURN*/ →malloc((size_t)(v3 + v2 + (int)(int*)((char*)ptr0 + 1)));
}

// Stale decompilation - Refresh this view to re-decompile this code
int mpsort(int param0, int param1, int param2) {
    return mpsort_with_tmp(param0, param1, param1 * 4 + param0, param2);
}

void* mpsort_into_tmp(int* param0, unsigned int param1, int* __dest, int param3) {
    unsigned int v0 = param1 >>> 1;
    unsigned int v1 = param1 - v0;
    unsigned int v2 = 0;
    unsigned int v3 = v0;
    unsigned int v4 = v0;
    unsigned int v5 = param1;
    mpsort_with_tmp(&param0[v0], v1, __dest, param3);
    mpsort_with_tmp(param0, v0, __dest, param3);
    int v6 = param0[v2];
    int v7 = param0[v4];
    while(1) {
        int v8 = param3(v6, v7);
        if(v8 <= 0) {
            __dest[0] = v6;
            ++__dest;
            ++v2;
            if(v3 == v2) {
                v2 = v4;
                v3 = v5;
                break;
            }
            else {
                v6 = param0[v2];
            }
        }
        else {
            __dest[0] = v7;
            ++__dest;
            ++v4;
            if(v5 == v4) {
                break;
            }
            else {
                v7 = param0[v4];
            }
        }
    }
    return →memcpy(__dest, (void*)(v2 * 4 + (int)param0), (size_t)((v3 - v2) * 4));
}

// Stale decompilation - Refresh this view to re-decompile this code
int* mpsort_with_tmp(int* param0, unsigned int param1, int* param2, int param3) {
    int* result;
    if(param1 == 2) {
        int v0 = *param0;
        int v1 = *(param0 + 1);
        void* ptr0 = (void*)param3(v0, v1);
        if((int)ptr0 > 0) {
            *param0 = v1;
            result = param0;
            *(result + 1) = v0;
        }
    }
    else if(param1 > 2) {
        unsigned int v2 = param1 >>> 1;
        unsigned int v3 = param1 - v2;
        int v4 = 0;
        unsigned int v5 = v2;
        unsigned int v6 = v2;
        unsigned int v7 = param1;
        mpsort_with_tmp((int)(int*)(v2 * 4 + (int)param0), (int)v3, (int)param2, param3);
        if(v2 <= 1) {
            *param2 = *param0;
        }
        else {
            mpsort_into_tmp((int)param0, (int)v2, (int)param2, param3);
        }
        int v8 = *(int*)(v4 * 4 + (int)param2);
        int v9 = *(int*)(v6 * 4 + (int)param0);
        int v10 = 0;
        while(1) {
            int v11 = param3(v8, v9);
            if(v11 <= 0) {
                *(int*)(v10 * 4 + (int)param0) = v8;
                ++v10;
                ++v4;
                if(v5 == v4) {
                    return result;
                }
                v8 = *(int*)(v4 * 4 + (int)param2);
            }
            else {
                *(int*)(v10 * 4 + (int)param0) = v9;
                ++v10;
                ++v6;
                if(v7 == v6) {
                    →memcpy((void*)(v10 * 4 + (int)param0), (void*)(v4 * 4 + (int)param2), (size_t)((v5 - v4) * 4));
                    return result;
                }
                v9 = *(int*)(v6 * 4 + (int)param0);
            }
        }
    }
    return result;
}

unsigned int next_prime(unsigned int param0) {
    if(param0 <= 9) {
        param0 = 10;
    }
    param0 |= 1;
    for(int i = is_prime(param0); (unsigned char)(i ^ 1); i = is_prime(param0)) {
        param0 += 2;
    }
    return param0;
}

int nstrftime(int param0, int param1, int param2, int param3, int param4, int param5) {
    return strftime_case_(0, param0, param1, param2, param3, param4, param5);
}

char* parse_ls_color() {
    char v0;
    char* __s = →getenv("LS_COLORS");
    char* result = __s;
    if(result) {
        result = (char*)__s[0];
        if(__s[0]) {
            int v1 = 0;
            →memcpy(&v0, (void*)&gvar_805F786, 3);
            result = /*NO_RETURN*/ xstrdup(__s);
        }
    }
    return result;
}

int patterns_match(char** param0, char* __name) {
    char v0;
    char** ptr0 = param0;
    while(ptr0) {
        int v1 = →fnmatch(ptr0[0], __name, 4);
        if(!v1) {
            v0 = 1;
            return (unsigned int)v0;
        }
        ptr0 = (char**)ptr0[1];
    }
    v0 = 0;
    return (unsigned int)v0;
}

int prep_non_filename_text() {
    int result;
    if(gvar_80641F4) {
        result = put_indicator((int*)0x80641F0);
    }
    else {
        put_indicator((int*)&color_indicator);
        put_indicator((int*)&gvar_80641F8);
        result = put_indicator((int*)&gvar_80641E8);
    }
    return result;
}

int print_color_indicator(char* __s, int param1, int param2, int param3, int param4) {
    int v0;
    char v1 = (unsigned char)param3;
    if(param2 == -1 && gvar_806423C) {
        v0 = 11;
    }
    else if((unsigned char)((unsigned int)v1 ^ 1)) {
        v0 = *(int*)(param4 * 4 + (int)&filetype_indicator.9866);
    }
    else if((param1 & 0xf000) == 0x8000) {
        v0 = 4;
        if((param1 & 0x800)) {
            v0 = 15;
        }
        else if((param1 & 0x400)) {
            v0 = 16;
        }
        else if((param1 & 0x49)) {
            v0 = 13;
        }
    }
    else if((param1 & 0xf000) == 0x4000) {
        v0 = (param1 & 0x200) && (param1 & 0x2) ? 19: (param1 & 0x2) != 0 ? 18: (param1 & 0x200) != 0 ? 17: 5;
    }
    else if((param1 & 0xf000) == 0xa000) {
        int v2 = !param2 && gvar_8064244 ? 12: 6;
        v0 = !param2 && gvar_8064244 ? 12: 6;
    }
    else {
        v0 = (param1 & 0xf000) == 0x1000 ? 7: (param1 & 0xf000) == 0xc000 ? 8: (param1 & 0xf000) == 0x6000 ? 9: (param1 & 0xf000) == 0x2000 ? 10: 12;
    }
    unsigned int* i = NULL;
    if(v0 == 4) {
        size_t v3 = →strlen(__s);
        __s = &__s[v3];
        for(i = color_ext_list; i; i = *(i + 4)) {
            if(*i <= v3) {
                int v4 = →strncmp((char*)((int)__s - *i), *(char**)(i + 1), *i);
                if(!v4) {
                    break;
                }
            }
        }
    }
    put_indicator((int*)&color_indicator);
    put_indicator(i != 0 ? (int*)(i + 2): (int*)(v0 * 8 + &color_indicator));
    return put_indicator((int*)&gvar_80641E8);
}

int print_current_files() {
    int result;
    unsigned int i;
    unsigned int v0 = format;
    switch(v0) {
        case 0: {
            for(i = 0; i < cwd_n_used; ++i) {
                print_long_format(*(char***)(i * 4 + sorted_file));
                →putchar_unlocked(10);
                ++dired_pos;
            }
            return result;
        }
        case 1: {
            for(i = 0; i < cwd_n_used; ++i) {
                print_file_name_and_frills(*(char***)(i * 4 + sorted_file));
                result = →putchar_unlocked(10);
            }
            return result;
        }
        case 2: {
            print_many_per_line();
            return result;
        }
        case 3: {
            print_horizontal();
            return result;
        }
        case 4: {
            print_with_commas();
            return result;
        }
        default: {
            return result;
        }
    }
}

unsigned int print_dir(char* __name, char* param1, int param2) {
    char v0;
    unsigned int result;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0;
    int v5;
    char v6 = (unsigned char)param2;
    unsigned int v7 = 0;
    unsigned int v8 = 0;
    int* ptr1 = →__errno_location();
    ptr1[0] = 0;
    DIR* __dirp = →opendir(__name);
    if(!__dirp) {
        char* __format = →gettext("cannot open directory %s");
        result = file_failure((int)v6, __format, (int)__name);
    }
    else if(active_dir_set) {
        int __fd = →dirfd(__dirp);
        if(__fd >= 0) {
            int v9 = fstat64(__fd, &v1);
            v0 = (unsigned char)(v9 >>> 31);
        }
        else {
            int v10 = stat64(__name, &v1);
            v0 = (unsigned char)(v10 >>> 31);
        }
        if(v0) {
            char* __format1 = →gettext("cannot determine device and inode of %s");
            file_failure((int)v6, __format1, (int)__name);
            result = (unsigned int)→closedir(__dirp);
        }
        else {
            /*NO_RETURN*/ visit_dir(v1, v3, v2, v4);
        }
    }
    else {
        clear_files();
    loc_804C19B:
        do {
            int* ptr2 = →__errno_location();
            ptr2[0] = 0;
            dirent64* ptr3 = →readdir64(__dirp);
            if(ptr3) {
                int v11 = file_ignored((char*)ptr3 + 19);
                if((unsigned char)(v11 ^ 1)) {
                    int v12 = 0;
                    unsigned int v13 = (unsigned int)ptr3->d_type;
                    switch(v13) {
                        case 1: {
                            v12 = 1;
                            break;
                        }
                        case 2: {
                            v12 = 2;
                            break;
                        }
                        case 4: {
                            v12 = 3;
                            break;
                        }
                        case 6: {
                            v12 = 4;
                            break;
                        }
                        case 8: {
                            v12 = 5;
                            break;
                        }
                        case 10: {
                            v12 = 6;
                            break;
                        }
                        case 12: {
                            v12 = 7;
                            break;
                        }
                        case 14: {
                            v12 = 8;
                        }
                    }
                    int v14 = gobble_file((char*)ptr3 + 19, v12, *(int*)&ptr3->d_ino, *(int*)((char*)&ptr3->d_ino + 4), 0, __name);
                    unsigned int v15 = v7;
                    v7 = (unsigned int)(v14 + v7);
                    v8 = (unsigned int)((unsigned int)__carry__(v14, v15) + v5 + v8);
                }
                goto loc_804C19B;
            }
            else {
                int* ptr4 = →__errno_location();
                if(!ptr4[0]) {
                    break;
                }
                else {
                    char* __format2 = →gettext("reading directory %s");
                    file_failure((int)v6, __format2, (int)__name);
                    ptr0 = →__errno_location();
                }
            }
        }
        while(ptr0[0] == 75);
        int v16 = →closedir(__dirp);
        if(v16) {
            char* __format3 = →gettext("closing directory %s");
            file_failure((int)v6, __format3, (int)__name);
        }
        sort_files();
        if(recursive) {
            extract_dirs_from_files((int)__name, (int)v6);
        }
        if(((unsigned int)recursive | (unsigned int)print_dir_name)) {
            if((unsigned char)((unsigned int)first.7139 ^ 1)) {
                →putchar_unlocked(10);
                ++dired_pos;
            }
            first.7139 = 0;
            if(dired) {
                →fwrite_unlocked((void*)&gvar_805F873, 1, 2, stdout);
                dired_pos += 2;
            }
            if(dired) {
                obstack* ptr5 = (obstack*)&subdired_obstack;
                int v17 = 4;
                if((unsigned int)(int*)(gvar_80645EC + 4) > (unsigned int)gvar_80645F0) {
                    →_obstack_newchunk((obstack*)&subdired_obstack, 4);
                }
                →memcpy(gvar_80645EC, (void*)&dired_pos, 4);
                ptr5->next_free = &ptr5->next_free[v17];
            }
            int* ptr6 = dirname_quoting_options;
            int v18 = (int)(param1 != 0 ? param1: __name);
            int v19 = quote_name(stdout, v18, ptr6, 0);
            dired_pos += v19;
            if(dired) {
                obstack* ptr7 = (obstack*)&subdired_obstack;
                int v20 = 4;
                if((unsigned int)(int*)(gvar_80645EC + 4) > (unsigned int)gvar_80645F0) {
                    →_obstack_newchunk((obstack*)&subdired_obstack, 4);
                }
                →memcpy(gvar_80645EC, (void*)&dired_pos, 4);
                ptr7->next_free = &ptr7->next_free[v20];
            }
            →fwrite_unlocked((void*)&gvar_805F876, 1, 2, stdout);
            dired_pos += 2;
        }
        if(!format || print_block_size) {
            if(dired) {
                →fwrite_unlocked((void*)&gvar_805F873, 1, 2, stdout);
                dired_pos += 2;
            }
            char* __s = →gettext("total");
            →fputs_unlocked(__s, stdout);
            size_t v21 = →strlen(__s);
            dired_pos += v21;
            →putchar_unlocked(32);
            ++dired_pos;
            __s = (char*)human_readable(v7, v8, (char*)&v1, human_output_opts, 0x200, 0, *(int*)&output_block_size, *(int*)((char*)&output_block_size + 4));
            →fputs_unlocked(__s, stdout);
            size_t v22 = →strlen(__s);
            dired_pos += v22;
            →putchar_unlocked(10);
            ++dired_pos;
        }
        result = cwd_n_used;
        if(result) {
            result = (unsigned int)print_current_files();
        }
    }
    return result;
}

int print_file_name_and_frills(char** param0) {
    int result;
    char* ptr0;
    char v0;
    if(print_inode) {
        char* ptr1 = umaxtostr(param0[24], param0[25], &v0);
        unsigned int v1 = format != 4 ? inode_number_width: 0;
        ptr0 = ptr1;
        →printf("%*s ", v1);
    }
    if(print_block_size) {
        unsigned int v2 = *(int*)&output_block_size;
        unsigned int v3 = *(int*)((char*)&output_block_size + 4);
        int v4 = human_output_opts;
        void* ptr2 = human_readable(param0[16], param0[17], (char*)&v0, v4, 0x200, 0, v2, v3);
        unsigned int v5 = format != 4 ? block_size_width: 0;
        ptr0 = (char*)ptr2;
        →printf("%*s ", v5);
    }
    if(print_scontext) {
        char* ptr3 = param0[28];
        unsigned int v6 = format != 4 ? scontext_width: 0;
        ptr0 = ptr3;
        →printf("%*s ", v6);
    }
    int v7 = param0[26];
    int v8 = (int)*(char*)&param0[29];
    int v9 = (int)*((char*)&param0[29] + 1);
    int v10 = ((unsigned int)*((char*)&param0[29] + 1) & (unsigned int)color_symlink_as_referent) != 0 ? param0[27]: param0[6];
    print_name_with_quoting(param0[0], v10, v9, v8, v7, NULL);
    if(indicator_style) {
        result = print_type_indicator((int)*(char*)&param0[29], (int)param0[6], (int)param0[26]);
    }
    return result;
}

int print_horizontal() {
    int v0 = 0;
    unsigned int v1 = calculate_columns(0);
    int v2 = v1 * 3 * 4 - 12 + column_info;
    int* ptr0 = *sorted_file;
    int v3 = length_of_file_name_and_frills(ptr0);
    int v4 = **(unsigned int*)(v2 + 8);
    print_file_name_and_frills((char**)ptr0);
    for(unsigned int i = 1; i < cwd_n_used; ++i) {
        unsigned int v5 = i;
        unsigned int v6 = v5 % v1;
        if(!v6) {
            →putchar_unlocked(10);
            v0 = 0;
        }
        else {
            indent((unsigned int)(v0 + v3), (unsigned int)(v0 + v4));
            v0 += v4;
        }
        ptr0 = *(int**)(i * 4 + sorted_file);
        print_file_name_and_frills((char**)ptr0);
        v3 = length_of_file_name_and_frills(ptr0);
        v4 = *(int*)(v6 * 4 + *(int*)(v2 + 8));
    }
    return →putchar_unlocked(10);
}

int print_long_format(char** param0) {
    int result;
    void* ptr0;
    void* ptr1;
    char* ptr2;
    int v0;
    unsigned int v1;
    char* ptr3;
    char v2;
    char v3;
    char v4;
    unsigned int v5;
    char v6;
    char v7;
    int v8;
    char v9;
    int v10;
    int v11;
    unsigned int v12;
    char v13;
    char v14;
    char v15;
    char v16;
    if(*(char*)&param0[29]) {
        filemodestring((int)(param0 + 2), &v7);
    }
    else {
        v7 = param0[26][&filetype_letter];
        →memset(&v6, 63, 10);
        char v17 = 0;
    }
    if((unsigned char)((unsigned int)any_has_acl ^ 1)) {
        v2 = 0;
    }
    else if(*((char*)&param0[29] + 2)) {
        v2 = 43;
    }
    unsigned int v18 = time_type;
    if(v18 == 1) {
        ptr3 = (char*)(param0 + 2);
        get_stat_ctime(&v12);
        v1 = v12;
        v0 = v10;
    }
    else if(v18 >= 1) {
        if(v18 != 2) {
            /*NO_RETURN*/ →abort();
        }
        ptr3 = (char*)(param0 + 2);
        get_stat_atime(&v12);
        v1 = v12;
        v0 = v10;
    }
    else {
        ptr3 = (char*)(param0 + 2);
        get_stat_mtime(&v12);
        v1 = v12;
        v0 = v10;
    }
    unsigned int v19 = v1;
    int v20 = v0;
    char* __s = &v16;
    if(print_inode) {
        char* ptr4 = (int*)((int)param0[24] | (int)param0[25]) ? umaxtostr(param0[24], param0[25], &v14): (char*)&gvar_805F99E;
        unsigned int v21 = inode_number_width;
        ptr2 = ptr4;
        →sprintf(__s, "%*s ", v21);
        size_t v22 = →strlen(__s);
        __s = &__s[v22];
    }
    if(print_block_size) {
        if(*(char*)&param0[29]) {
            unsigned int v23 = *(int*)&output_block_size;
            unsigned int v24 = *(int*)((char*)&output_block_size + 4);
            int v25 = human_output_opts;
            ptr1 = human_readable(param0[16], param0[17], &v15, v25, 0x200, 0, v23, v24);
        }
        else {
            ptr1 = (void*)&gvar_805F99E;
        }
        char* __s1 = (char*)ptr1;
        unsigned int v26 = block_size_width;
        int v27 = gnu_mbswidth(__s1, 0);
        for(int i = (int)(v26 - v27); i > 0; --i) {
            __s[0] = ' ';
            ++__s;
        }
        do {
            __s[0] = __s1[0];
            v8 = __s[0] ? 1: 0;
            ++__s;
            ++__s1;
        }
        while((unsigned char)v8);
        __s[-1] = ' ';
    }
    char* ptr5 = *(char*)&param0[29] ? umaxtostr(param0[7], 0, &v4): (char*)&gvar_805F99E;
    unsigned int v28 = nlink_width;
    char* ptr6 = ptr5;
    →sprintf(__s, "%s %*s ", &v7, v28);
    size_t v29 = →strlen(__s);
    __s = &__s[v29];
    if(dired) {
        →fwrite_unlocked((void*)&gvar_805F873, 1, 2, stdout);
        dired_pos += 2;
    }
    if(((unsigned int)print_scontext | (unsigned int)print_owner | (unsigned int)print_group | (unsigned int)print_author)) {
        →fputs_unlocked(&v16, stdout);
        dired_pos = (int*)((int)(int*)((int)__s - (int)&v16) + dired_pos);
        if(print_owner) {
            format_user(param0[8], owner_width, (int)*(char*)&param0[29]);
        }
        if(print_group) {
            format_group(param0[9], group_width, (int)*(char*)&param0[29]);
        }
        if(print_author) {
            format_user(param0[8], author_width, (int)*(char*)&param0[29]);
        }
        if(print_scontext) {
            format_user_or_group(param0[28], 0, scontext_width);
        }
        __s = &v16;
    }
    if(!(unsigned char)((unsigned int)*(char*)&param0[29] ^ 1) && ((int*)((int)param0[6] & 0xf000) == 0x2000 || (int*)((int)param0[6] & 0xf000) == 0x6000)) {
        int v30 = -2 - major_device_number_width - minor_device_number_width + file_size_width;
        char* ptr7 = param0[11];
        char* ptr8 = param0[10];
        ptr3 = ptr7;
        unsigned int v31 = →gnu_dev_minor(*(unsigned long long*)&ptr8);
        char* ptr9 = umaxtostr(v31, 0, &v13);
        char* ptr10 = param0[11];
        ptr8 = param0[10];
        ptr3 = ptr10;
        unsigned int v32 = →gnu_dev_major(*(unsigned long long*)&ptr8);
        char* ptr11 = umaxtostr(v32, 0, &v9);
        int v33 = (~(v30 >> 31) & v30) + major_device_number_width;
        char* ptr12 = ptr9;
        →sprintf(__s, "%*s, %*s ", v33, ptr11);
        __s = (char*)(file_size_width + (int)__s) + 1;
    }
    else {
        if(*(char*)&param0[29]) {
            unsigned int v34 = *(int*)&file_output_block_size;
            unsigned int v35 = *(int*)((char*)&file_output_block_size + 4);
            int v36 = human_output_opts;
            int v37 = unsigned_file_size(param0[13], param0[14]);
            ptr0 = human_readable((unsigned int)v37, v5, &v15, v36, 1, 0, v34, v35);
        }
        else {
            ptr0 = (void*)&gvar_805F99E;
        }
        char* __s2 = (char*)ptr0;
        unsigned int v38 = file_size_width;
        int v39 = gnu_mbswidth(__s2, 0);
        for(int j = (int)(v38 - v39); j > 0; --j) {
            __s[0] = ' ';
            ++__s;
        }
        do {
            __s[0] = __s2[0];
            v11 = __s[0] ? 1: 0;
            ++__s;
            ++__s2;
        }
        while((unsigned char)v11);
        __s[-1] = ' ';
    }
    int v40 = (int)→localtime(&v1);
    int v41 = 0;
    __s[0] = 1;
    if(*(char*)&param0[29] && v40) {
        if(current_time < (int)v19 || (current_time == v19 && current_time_ns < v20)) {
            get_current_time();
        }
        int v42 = (int)(current_time - 15778476);
        int v43 = (int)v19 >= v42 && (current_time > (int)v19 || (current_time == v19 && current_time_ns >= v20)) ? 1: 0;
        char v44 = (unsigned char)v43;
        int v45 = *(int*)((unsigned int)v44 * 4 + (int)&long_time_format);
        v41 = nstrftime((int)__s, 1001, v45, v40, 0, v20);
    }
    if(v41 || !__s[0]) {
        __s = &__s[v41];
        __s[0] = ' ';
        ++__s;
        __s[0] = 0;
    }
    else {
        char* ptr13 = *(char*)&param0[29] ? imaxtostr(v19, (int*)(v19 >> 31), &v3): (char*)&gvar_805F99E;
        unsigned int v46 = long_time_expected_width();
        ptr2 = ptr13;
        →sprintf(__s, "%*s ", v46);
        size_t v47 = →strlen(__s);
        __s = &__s[v47];
    }
    →fputs_unlocked(&v16, stdout);
    dired_pos = (int*)((int)(int*)((int)__s - (int)&v16) + dired_pos);
    int v48 = param0[26];
    int v49 = (int)*(char*)&param0[29];
    int v50 = (int)*((char*)&param0[29] + 1);
    int v51 = ((unsigned int)*((char*)&param0[29] + 1) & (unsigned int)color_symlink_as_referent) != 0 ? param0[27]: param0[6];
    print_name_with_quoting(param0[0], v51, v50, v49, v48, (obstack*)&dired_obstack);
    if(param0[26] == 6) {
        if(param0[1]) {
            →fwrite_unlocked(" -> ", 1, 4, stdout);
            dired_pos += 4;
            print_name_with_quoting(param0[1], (int)param0[27], (unsigned int)*((char*)&param0[29] + 1) - 1, (int)*(char*)&param0[29], param0[26], NULL);
            if(indicator_style) {
                result = print_type_indicator(1, param0[27], 0);
            }
        }
    }
    else if(indicator_style) {
        result = print_type_indicator((int)*(char*)&param0[29], param0[6], param0[26]);
    }
    return result;
}

int print_many_per_line() {
    int result;
    unsigned int v0 = calculate_columns(1);
    int v1 = v0 * 3 * 4 - 12 + column_info;
    unsigned int v2 = cwd_n_used / v0;
    unsigned int v3 = cwd_n_used;
    unsigned int max = (unsigned int)((v3 % v0 ? 1: 0) + v2);
    for(unsigned int i = 0; i < max; ++i) {
        int v4 = 0;
        unsigned int v5 = i;
        int v6 = 0;
        while(1) {
            int* ptr0 = *(int**)(v5 * 4 + sorted_file);
            int v7 = length_of_file_name_and_frills(ptr0);
            int v8 = *(int*)(v4 * 4 + *(int*)(v1 + 8));
            ++v4;
            print_file_name_and_frills((char**)ptr0);
            v5 += max;
            if(cwd_n_used <= v5) {
                break;
            }
            else {
                indent((unsigned int)(v6 + v7), (unsigned int)(v6 + v8));
                v6 += v8;
            }
        }
        result = →putchar_unlocked(10);
    }
    return result;
}

int print_name_with_quoting(char* __s, int param1, int param2, int param3, int param4, obstack* param5) {
    int result;
    char v0 = (unsigned char)param3;
    if(print_with_color) {
        print_color_indicator(__s, param1, param2, (int)v0, param4);
    }
    if(param5 && dired) {
        obstack* ptr0 = param5;
        int v1 = 4;
        if((unsigned int)(int*)(ptr0->next_free + 4) > (unsigned int)ptr0->chunk_limit) {
            →_obstack_newchunk(ptr0, 4);
        }
        →memcpy(ptr0->next_free, (void*)&dired_pos, (size_t)v1);
        ptr0->next_free = &ptr0->next_free[v1];
    }
    int v2 = quote_name(stdout, (int)__s, filename_quoting_options, 0);
    dired_pos += v2;
    if(param5 && dired) {
        obstack* ptr1 = param5;
        int v3 = 4;
        if((unsigned int)(int*)(ptr1->next_free + 4) > (unsigned int)ptr1->chunk_limit) {
            →_obstack_newchunk(ptr1, 4);
        }
        →memcpy(ptr1->next_free, (void*)&dired_pos, (size_t)v3);
        ptr1->next_free = (char*)((int)ptr1->next_free + v3);
    }
    if(print_with_color) {
        process_signals();
        result = prep_non_filename_text();
    }
    return result;
}

int print_type_indicator(int param0, int param1, int param2) {
    int result = get_type_indicator((int)(param0 & 0xFF), param1, param2);
    char v0 = (unsigned char)result;
    if(v0) {
        →putchar_unlocked((int)v0);
        result = (int)(dired_pos + 1);
        dired_pos = result;
    }
    return result;
}

int print_with_commas() {
    char v0;
    int v1 = 0;
    for(unsigned int i = 0; i < cwd_n_used; ++i) {
        int* ptr0 = *(int**)(i * 4 + sorted_file);
        int v2 = length_of_file_name_and_frills(ptr0);
        if(i) {
            if((unsigned int)(v1 + v2 + 2) < line_length) {
                v1 += 2;
                v0 = 32;
            }
            else {
                v1 = 0;
                v0 = 10;
            }
            →putchar_unlocked(44);
            →putchar_unlocked((int)v0);
        }
        print_file_name_and_frills((char**)ptr0);
        v1 += v2;
    }
    return →putchar_unlocked(10);
}

int printf_fetchargs(unsigned int* param0, unsigned int* param1) {
    double* ptr0;
    unsigned int v0 = 0;
    for(unsigned int* i = *(param1 + 1); *param1 > v0; i += 4) {
        double* ptr1 = *i;
        switch(ptr1) {
            case 1: {
                break;
            }
            case 2: {
                unsigned int* ptr2 = param0;
                param0 = ptr2 + 1;
                *(char*)(i + 1) = (unsigned char)*ptr2;
                goto loc_805CE63;
            }
            case 3: {
                unsigned int* ptr3 = param0;
                param0 = ptr3 + 1;
                *(short*)(i + 1) = (unsigned short)*ptr3;
                goto loc_805CE63;
            }
            case 4: {
                unsigned int* ptr4 = param0;
                param0 = ptr4 + 1;
                *(short*)(i + 1) = (unsigned short)*ptr4;
                goto loc_805CE63;
            }
            case 5: {
                unsigned int* ptr5 = param0;
                param0 = ptr5 + 1;
                *(i + 1) = *ptr5;
                goto loc_805CE63;
            }
            case 6: {
                unsigned int* ptr6 = param0;
                param0 = ptr6 + 1;
                *(i + 1) = *ptr6;
                goto loc_805CE63;
            }
            case 7: {
                unsigned int* ptr7 = param0;
                param0 = ptr7 + 1;
                *(i + 1) = *ptr7;
                goto loc_805CE63;
            }
            case 8: {
                unsigned int* ptr8 = param0;
                param0 = ptr8 + 1;
                *(i + 1) = *ptr8;
                goto loc_805CE63;
            }
            case 9: {
                unsigned int* ptr9 = param0;
                param0 = ptr9 + 2;
                ptr0 = *(ptr9 + 1);
                *(int*)(i + 1) = *ptr9;
                *(i + 2) = ptr0;
                goto loc_805CE63;
            }
            case 10: {
                unsigned int* ptr10 = param0;
                param0 = ptr10 + 2;
                ptr0 = *(ptr10 + 1);
                *(int*)(i + 1) = *ptr10;
                *(i + 2) = ptr0;
                goto loc_805CE63;
            }
            case 11: {
                ptr0 = (double*)param0;
                param0 = (unsigned int*)(ptr0 + 1);
                *(long long*)(i + 1) = *ptr0;
                goto loc_805CE63;
            }
            case 12: {
                unsigned int* ptr11 = param0;
                param0 = ptr11 + 3;
                unsigned int* ptr12 = *(ptr11 + 2);
                ptr0 = *(ptr11 + 1);
                *(int*)(i + 1) = *ptr11;
                *(i + 2) = ptr0;
                *(i + 3) = ptr12;
                goto loc_805CE63;
            }
            case 13: {
                unsigned int* ptr13 = param0;
                param0 = ptr13 + 1;
                *(i + 1) = *ptr13;
                goto loc_805CE63;
            }
            case 14: {
                unsigned int* ptr14 = param0;
                param0 = ptr14 + 1;
                *(i + 1) = *ptr14;
                goto loc_805CE63;
            }
            case 15: {
                unsigned int* ptr15 = param0;
                param0 = ptr15 + 1;
                *(i + 1) = *ptr15;
                if(!*(int*)(i + 1)) {
                    *(int*)(i + 1) = "(NULL)";
                }
                goto loc_805CE63;
            }
            case 16: {
                unsigned int* ptr16 = param0;
                param0 = ptr16 + 1;
                *(i + 1) = *ptr16;
                if(!*(int*)(i + 1)) {
                    *(int*)(i + 1) = &wide_null_string.1636;
                }
                goto loc_805CE63;
            }
            case 17: {
                unsigned int* ptr17 = param0;
                param0 = ptr17 + 1;
                *(i + 1) = *ptr17;
                goto loc_805CE63;
            }
            case 18: {
                unsigned int* ptr18 = param0;
                param0 = ptr18 + 1;
                *(i + 1) = *ptr18;
                goto loc_805CE63;
            }
            case 19: {
                unsigned int* ptr19 = param0;
                param0 = ptr19 + 1;
                *(i + 1) = *ptr19;
                goto loc_805CE63;
            }
            case 20: {
                unsigned int* ptr20 = param0;
                param0 = ptr20 + 1;
                *(i + 1) = *ptr20;
                goto loc_805CE63;
            }
            case 21: {
                unsigned int* ptr21 = param0;
                param0 = ptr21 + 1;
                *(i + 1) = *ptr21;
                goto loc_805CE63;
            }
            case 22: {
                unsigned int* ptr22 = param0;
                param0 = ptr22 + 1;
                *(i + 1) = *ptr22;
                goto loc_805CE63;
            }
            default: {
                return -1;
            }
        }
        unsigned int* ptr23 = param0;
        param0 = ptr23 + 1;
        *(char*)(i + 1) = (unsigned char)*ptr23;
    loc_805CE63:
        ++v0;
    }
    return 0;
}

int printf_parse(int param0, int* param1) {
    *param1 = 0;
    /*NO_RETURN*/ →malloc(44);
}

int process_signals() {
    char v0;
    while((interrupt_signal | stop_signal_count)) {
        restore_default_color();
        →fflush_unlocked(stdout);
        →sigprocmask(0, (sigset_t*)&caught_signals, &v0);
        int __sig = interrupt_signal;
        unsigned int v1 = stop_signal_count;
        if(v1) {
            stop_signal_count = v1 - 1;
            __sig = 19;
        }
        else {
            →signal(__sig, NULL);
        }
        →raise(__sig);
        →sigprocmask(2, &v0, NULL);
    }
    return 0;
}

int put_indicator(int* param0) {
    char* ptr0 = *(unsigned int*)(param0 + 1);
    int result = *param0;
    for(int i = *param0; i; --i) {
        int __c = (int)*ptr0;
        ++ptr0;
        result = →putchar_unlocked(__c);
    }
    return result;
}

int queue_directory(int param0, int param1, int param2) {
    /*NO_RETURN*/ xmalloc(16);
}

int quote(int param0) {
    return quote_n(0, param0);
}

int quote_n(unsigned int param0, int param1) {
    return quotearg_n_style(param0, 5, param1);
}

int quote_name(int param0, int param1, int* param2, int param3) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int v5;
    int v6;
    int v7;
    unsigned int* ptr0 = &v2;
    int result = quotearg_buffer(&v3, 0x2000, param1, -1, param2);
    if((unsigned int)result <= 0x1fff) {
        v1 = &v3;
    }
    else {
        int v8 = (int)(int*)((int)(int*)((char*)&v4 + 15) >>> 4) * 16;
        v1 = (int)(int*)((int)(int*)((char*)&v4 + 15) >>> 4) * 16;
        ptr0 = &v5;
        quotearg_buffer(v1, result + 1, param1, -1, param2);
    }
    if(qmark_funny_chars) {
        --ptr0;
        *ptr0 = &loc_804FB1C;
        size_t v9 = /*BAD_CALL!*/ →__ctype_get_mb_cur_max();
        if(v9 > 1) {
            int v10 = v1;
            int v11 = result + v1;
            int v12 = v1;
            v0 = 0;
        loc_804FCB1:
            while((unsigned int)v10 < (unsigned int)v11) {
                int v13 = (int)*(char*)v10;
                if(v13 <= 95) {
                    if(v13 < 65 && (v13 < 32 || (v13 > 35 && (unsigned int)(v13 - 37) > 26))) {
                        goto loc_804FBB5;
                    }
                    else {
                        goto loc_804FBA2;
                    }
                }
                if((unsigned int)(v13 - 97) <= 29) {
                loc_804FBA2:
                    *(char*)v12 = *(char*)v10;
                    ++v12;
                    ++v10;
                    ++v0;
                }
                else {
                loc_804FBB5:
                    int v14 = 0;
                    int v15 = 0;
                    do {
                        int v16 = v11 - v10;
                        *(ptr0 + 3) = &v14;
                        *(int*)(ptr0 + 2) = v16;
                        *(int*)(ptr0 + 1) = v10;
                        *ptr0 = &v7;
                        --ptr0;
                        *ptr0 = &loc_804FBFA;
                        size_t v17 = /*BAD_CALL!*/ →mbrtowc(*(wchar_t**)(ptr0 + 1), *(char**)(ptr0 + 2), *(size_t*)(ptr0 + 3), *(mbstate_t**)(ptr0 + 4));
                        switch(v17) {
                            case -2: {
                                v10 = v11;
                                *(char*)v12 = 63;
                                ++v12;
                                ++v0;
                                continue loc_804FCB1;
                            }
                            case -1: {
                            loc_804FC03:
                                ++v10;
                                *(char*)v12 = 63;
                                ++v12;
                                ++v0;
                                continue loc_804FCB1;
                            }
                            default: {
                                if(!v17) {
                                    v17 = 1;
                                }
                                *ptr0 = v7;
                                --ptr0;
                                *ptr0 = &loc_804FC51;
                                int v18 = /*BAD_CALL!*/ →wcwidth(*(wchar_t*)(ptr0 + 1));
                                if(v18 >= 0) {
                                    while(v17) {
                                        *(char*)v12 = *(char*)v10;
                                        ++v12;
                                        ++v10;
                                        --v17;
                                    }
                                    v0 += v18;
                                }
                                else {
                                    v10 += v17;
                                    *(char*)v12 = 63;
                                    ++v12;
                                    ++v0;
                                }
                                *ptr0 = &v14;
                                --ptr0;
                                *ptr0 = &loc_804FCA3;
                                v6 = /*BAD_CALL!*/ →mbsinit(*(mbstate_t**)(ptr0 + 1));
                                break;
                            }
                        }
                    }
                    while(!v6);
                    goto loc_804FC03;
                }
            }
            result = v12 - v1;
        }
        else {
            int v19 = v1;
            int v20 = result + v1;
            while((unsigned int)v19 < (unsigned int)v20) {
                --ptr0;
                *ptr0 = &loc_804FCDF;
                unsigned short** ptr1 = /*BAD_CALL!*/ →__ctype_b_loc();
                unsigned short* ptr2 = ptr1[0];
                *ptr0 = (int)*(char*)v19;
                --ptr0;
                *ptr0 = &loc_804FCF2;
                int v21 = /*BAD_CALL!*/ to_uchar(*(int*)(ptr0 + 1));
                if(!((unsigned int)ptr2[(unsigned int)(unsigned char)v21] & 0x4000)) {
                    *(char*)v19 = 63;
                }
                ++v19;
            }
            v0 = result;
        }
    }
    else if(param3) {
        --ptr0;
        *ptr0 = &loc_804FD35;
        size_t v22 = /*BAD_CALL!*/ →__ctype_get_mb_cur_max();
        if(v22 > 1) {
            *(int*)(ptr0 + 2) = 0;
            *(int*)(ptr0 + 1) = result;
            *ptr0 = v1;
            --ptr0;
            *ptr0 = &loc_804FD54;
            v0 = /*BAD_CALL!*/ mbsnwidth(*(char**)(ptr0 + 1), *(int*)(ptr0 + 2), *(int*)(ptr0 + 3));
        }
        else {
            int v23 = v1;
            int v24 = result + v1;
            v0 = 0;
            while((unsigned int)v23 < (unsigned int)v24) {
                --ptr0;
                *ptr0 = &loc_804FD78;
                unsigned short** ptr3 = /*BAD_CALL!*/ →__ctype_b_loc();
                unsigned short* ptr4 = ptr3[0];
                *ptr0 = (int)*(char*)v23;
                --ptr0;
                *ptr0 = &loc_804FD8B;
                int v25 = /*BAD_CALL!*/ to_uchar(*(int*)(ptr0 + 1));
                if(((unsigned int)ptr4[(unsigned int)(unsigned char)v25] & 0x4000)) {
                    ++v0;
                }
                ++v23;
            }
        }
    }
    if(param0) {
        *(int*)(ptr0 + 3) = param0;
        *(int*)(ptr0 + 2) = result;
        *(int*)(ptr0 + 1) = 1;
        *ptr0 = v1;
        --ptr0;
        *ptr0 = &loc_804FDD9;
        /*BAD_CALL!*/ →fwrite_unlocked(*(void**)(ptr0 + 1), *(size_t*)(ptr0 + 2), *(size_t*)(ptr0 + 3), *(FILE**)(ptr0 + 4));
    }
    if(param3) {
        *(int*)param3 = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quotearg(int param0) {
    return quotearg_n(0, param0);
}

int quotearg_alloc(int param0, int param1, int* param2) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    int v1 = quotearg_buffer(0, 0, param0, param1, param2);
    /*NO_RETURN*/ xcharalloc((size_t)(v1 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int quotearg_buffer(int param0, int param1, int param2, int param3, int* param4) {
    int* ptr0 = param4 != 0 ? param4: (int*)&default_quoting_options;
    int* ptr1 = param4 != 0 ? param4: (int*)&default_quoting_options;
    int* ptr2 = →__errno_location();
    int v0 = ptr2[0];
    int result = quotearg_buffer_restyled(param0, param1, param2, param3, *ptr1, (int)ptr1);
    int* ptr3 = →__errno_location();
    ptr3[0] = v0;
    return result;
}

unsigned int quotearg_buffer_restyled(unsigned short* param0, unsigned int param1, char* __s, size_t param3, int param4, int param5) {
    unsigned int result;
    char v0;
    unsigned short* ptr0;
    char v1;
    char v2;
    wint_t __wc;
    int v3;
    unsigned int v4 = 0;
    char* i = NULL;
    size_t __n = 0;
    char v5 = 0;
    size_t v6 = →__ctype_get_mb_cur_max();
    char v7 = v6 == 1 ? 1: 0;
    switch(param4) {
        case 2: {
            if(param1 > 0) {
                *(char*)&param0[0] = 39;
            }
            ++v4;
            i = (char*)&gvar_8061A40;
            __n = 1;
            break;
        }
        case 3: {
            if(param1 > 0) {
                *(char*)&param0[0] = 34;
            }
            ++v4;
            v5 = 1;
            i = (char*)&gvar_8061A3C;
            __n = 1;
            break;
        }
        case 4: {
            v5 = 1;
            break;
        }
        case 5: 
        case 6: {
            char* ptr1 = gettext_quote((char*)&gvar_8061A3E, param4);
            char* ptr2 = gettext_quote((char*)&gvar_8061A40, param4);
            for(i = ptr1; i[0]; ++i) {
                if(v4 < param1) {
                    *(char*)(v4 + (int)param0) = i[0];
                }
                ++v4;
            }
            v5 = 1;
            i = ptr2;
            __n = →strlen(i);
        }
    }
    unsigned short* ptr3 = NULL;
    for(char j = param3 == -1 ? *(char*)((int)ptr3 + (int)__s) ? 1: 0: ptr3 == param3 ? 0: 1; j; j = param3 == -1 ? *(char*)((int)ptr3 + (int)__s) ? 1: 0: ptr3 == param3 ? 0: 1) {
        if(v5 && __n && (unsigned int)(int*)(__n + (int)ptr3) <= param3) {
            int v8 = →memcmp((void*)((int)ptr3 + (int)__s), i, __n);
            if(!v8) {
                if(v4 < param1) {
                    *(char*)(v4 + (int)param0) = 92;
                }
                ++v4;
            }
        }
        char v9 = *(char*)((int)ptr3 + (int)__s);
        unsigned short* ptr4 = (unsigned short*)v9;
        switch(ptr4) {
            case 0: {
                break;
            }
            case 7: {
                v1 = 'a';
                goto loc_8055231;
            }
            case 8: {
                v1 = 'b';
                goto loc_8055231;
            }
            case 9: {
                v1 = 't';
            loc_8055227:
                if(param4 == 1) {
                    return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                }
            loc_8055231:
                if(v5) {
                    v9 = v1;
                    goto loc_8055577;
                }
                goto loc_8055548;
            }
            case 10: {
                v1 = 'n';
                goto loc_8055227;
            }
            case 11: {
                v1 = 'v';
                goto loc_8055231;
            }
            case 12: {
                v1 = 'f';
                goto loc_8055231;
            }
            case 13: {
                v1 = 'r';
                goto loc_8055227;
            }
            case 39: {
                int v10 = param4;
                if(v10 == 1) {
                    return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                }
                else if(v10 == 2) {
                    if(v4 < param1) {
                        *(char*)(v4 + (int)param0) = 39;
                    }
                    ++v4;
                    if(v4 < param1) {
                        *(char*)(v4 + (int)param0) = 92;
                    }
                    ++v4;
                    if(v4 < param1) {
                        *(char*)(v4 + (int)param0) = 39;
                    }
                    ++v4;
                }
                goto loc_8055548;
            }
            case 63: {
                int v11 = param4;
                if(v11 == 1) {
                    return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                }
                else if(v11 == 3 && (unsigned int)(int*)(ptr3 + 1) < param3 && *((char*)((int)ptr3 + (int)__s) + 1) == 63) {
                    unsigned int v12 = (unsigned int)((int)*((char*)((int)ptr3 + (int)__s) + 2) - 33);
                    if(v12 <= 29 && ((1 << (v12 & 0x1f)) & 0x380051c1)) {
                        v9 = *((char*)((int)ptr3 + (int)__s) + 2);
                        ++ptr3;
                        if(v4 < param1) {
                            *(char*)(v4 + (int)param0) = 63;
                        }
                        ++v4;
                        if(v4 < param1) {
                            *(char*)(v4 + (int)param0) = 92;
                        }
                        ++v4;
                        if(v4 < param1) {
                            *(char*)(v4 + (int)param0) = 63;
                        }
                        ++v4;
                    }
                }
                goto loc_8055548;
            }
            case 92: {
                v1 = v9;
                goto loc_8055227;
            }
            case 37: 
            case 43: 
            case 44: 
            case 45: 
            case 46: 
            case 47: 
            case 48: 
            case 49: 
            case 50: 
            case 51: 
            case 52: 
            case 53: 
            case 54: 
            case 55: 
            case 56: 
            case 57: 
            case 58: 
            case 65: 
            case 66: 
            case 67: 
            case 68: 
            case 69: 
            case 70: 
            case 71: 
            case 72: 
            case 73: 
            case 74: 
            case 75: 
            case 76: 
            case 77: 
            case 78: 
            case 79: 
            case 80: 
            case 81: 
            case 82: 
            case 83: 
            case 84: 
            case 85: 
            case 86: 
            case 87: 
            case 88: 
            case 89: 
            case 90: 
            case 93: 
            case 95: 
            case 97: 
            case 98: 
            case 99: 
            case 100: 
            case 101: 
            case 102: 
            case 103: 
            case 104: 
            case 105: 
            case 106: 
            case 107: 
            case 108: 
            case 109: 
            case 110: 
            case 111: 
            case 112: 
            case 113: 
            case 114: 
            case 115: 
            case 116: 
            case 117: 
            case 118: 
            case 119: 
            case 120: 
            case 121: 
            case 122: {
                goto loc_8055548;
            }
            case 32: 
            case 33: 
            case 34: 
            case 36: 
            case 38: 
            case 40: 
            case 41: 
            case 42: 
            case 59: 
            case 60: 
            case 61: 
            case 62: 
            case 91: 
            case 94: 
            case 96: 
            case 124: {
                goto loc_805527A;
            }
            case 123: 
            case 125: {
                char v13 = param3 == -1 ? __s[1] ? 1: 0: param3 == 1 ? 0: 1;
                if(!v13) {
                loc_8055270:
                    if(!ptr3) {
                    loc_805527A:
                        if(param4 == 1) {
                            return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                        }
                    }
                }
                goto loc_8055548;
            }
            case 35: 
            case 126: {
                goto loc_8055270;
            }
            default: {
                if(v7) {
                    ptr0 = (unsigned short*)0x1;
                    unsigned short** ptr5 = →__ctype_b_loc();
                    v0 = (unsigned int)ptr5[0][(unsigned int)v9] & 0x4000 ? 1: 0;
                }
                else {
                    →memset(&v2, 0, 8);
                    ptr0 = NULL;
                    v0 = 1;
                    if(param3 == -1) {
                        param3 = →strlen(__s);
                    }
                    do {
                        size_t max = →mbrtowc(&__wc, (char*)((int)(int*)((int)ptr0 + (int)ptr3) + (int)__s), param3 - (int)(int*)((int)ptr0 + (int)ptr3), (mbstate_t*)&v2);
                        if(!max) {
                        loc_805545B:
                            if((unsigned int)ptr0 > 1 || (!(unsigned char)((unsigned int)v5 ^ 1) && (unsigned char)((unsigned int)v0 ^ 1))) {
                                int* ptr6 = (int*)((int)ptr0 + (int)ptr3);
                                while(1) {
                                    if(v5 && (unsigned char)((unsigned int)v0 ^ 1)) {
                                        if(v4 < param1) {
                                            *(char*)(v4 + (int)param0) = 92;
                                        }
                                        ++v4;
                                        if(v4 < param1) {
                                            *(char*)(v4 + (int)param0) = (v9 >>> 6) + 48;
                                        }
                                        ++v4;
                                        if(v4 < param1) {
                                            *(char*)(v4 + (int)param0) = (unsigned char)((unsigned int)(v9 >>> 3) & 0x7) + 48;
                                        }
                                        ++v4;
                                        v9 = (unsigned char)((unsigned int)v9 & 0x7) + 48;
                                    }
                                    if((int*)((char*)ptr3 + 1) >= ptr6) {
                                        goto loc_805558F;
                                    }
                                    else {
                                        if(v4 < param1) {
                                            *(char*)(v4 + (int)param0) = v9;
                                        }
                                        ++v4;
                                        ptr3 = (unsigned short*)((char*)ptr3 + 1);
                                        v9 = *(char*)((int)ptr3 + (int)__s);
                                    }
                                }
                                v1 = 'n';
                                goto loc_8055227;
                            }
                            else {
                                goto loc_8055548;
                            }
                        }
                        else if(max == -2) {
                            v0 = 0;
                            while(((unsigned int)(int*)((int)ptr0 + (int)ptr3) < param3 && *(char*)((int)(int*)((int)ptr0 + (int)ptr3) + (int)__s))) {
                                ptr0 = (unsigned short*)((char*)ptr0 + 1);
                            }
                            break;
                        }
                        else if(max == -1) {
                            v0 = 0;
                            break;
                        }
                        else {
                            if(param4 == 1) {
                                for(unsigned int k = 1; k < max; ++k) {
                                    unsigned int v14 = (unsigned int)((int)*(char*)((int)(int*)(k + (int)ptr0) + (int)(int*)((int)ptr3 + (int)__s)) - 91);
                                    switch(v14) {
                                        case 0: 
                                        case 1: 
                                        case 3: 
                                        case 5: 
                                        case 33: {
                                            return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                                        }
                                    }
                                }
                            }
                            int v15 = →iswprint(__wc);
                            if(!v15) {
                                v0 = 0;
                            }
                            ptr0 = (unsigned short*)(max + (int)ptr0);
                            v3 = →mbsinit((mbstate_t*)&v2);
                        }
                    }
                    while(!v3);
                }
                goto loc_805545B;
            }
        }
        if(v5) {
            if(v4 < param1) {
                *(char*)(v4 + (int)param0) = 92;
            }
            ++v4;
            if(v4 < param1) {
                *(char*)(v4 + (int)param0) = 48;
            }
            ++v4;
            if(v4 < param1) {
                *(char*)(v4 + (int)param0) = 48;
            }
            ++v4;
            v9 = '0';
        }
    loc_8055548:
        if(!(unsigned char)((unsigned int)v5 ^ 1) && (int*)((1 << ((unsigned int)v9 & 0x1f)) & (int)*(unsigned short**)((unsigned int)(v9 >>> 5) * 4 + param5 + 4))) {
        loc_8055577:
            if(v4 < param1) {
                *(char*)(v4 + (int)param0) = 92;
            }
            ++v4;
        }
    loc_805558F:
        if(v4 < param1) {
            *(char*)(v4 + (int)param0) = v9;
        }
        ++v4;
        ptr3 = (unsigned short*)((char*)ptr3 + 1);
    }
    if(ptr3 || param4 != 1) {
        if(i) {
            while(i[0]) {
                if(v4 < param1) {
                    *(char*)(v4 + (int)param0) = i[0];
                }
                ++v4;
                ++i;
            }
        }
        if(v4 < param1) {
            *(char*)(v4 + (int)param0) = 0;
        }
        result = v4;
    }
    else {
        result = (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
    }
    return result;
}

int quotearg_char(int param0, int param1) {
    unsigned char v0;
    set_char_quoting(&v0, (int)(unsigned char)param1, 1);
    return quotearg_n_options(0, param0, -1, (int*)&v0);
}

int quotearg_colon(int param0) {
    return quotearg_char(param0, 58);
}

void* quotearg_free() {
    void* __ptr;
    void* ptr0 = slotvec;
    unsigned int v0 = 1;
    while(nslots > v0) {
        /*NO_RETURN*/ →free(*(void**)((int*)(v0 * 8 + (int)ptr0) + 1));
    }
    if(*(int*)((int)ptr0 + 4) != &slot0) {
        /*NO_RETURN*/ →free(*(void**)((int)ptr0 + 4));
    }
    if(ptr0 != &slotvec0) {
        __ptr = ptr0;
        /*NO_RETURN*/ →free(__ptr);
    }
    nslots = 1;
    return __ptr;
}

int quotearg_n(unsigned int param0, int param1) {
    return quotearg_n_options(param0, param1, -1, (int*)&default_quoting_options);
}

int quotearg_n_options(unsigned int param0, int param1, int param2, int* param3) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    unsigned int v1 = param0;
    void* ptr1 = slotvec;
    if(param0 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(nslots <= v1) {
        unsigned int v2 = v1 + 1;
        char v3 = ptr1 == &slotvec0 ? 1: 0;
        if(v2 > 0x1fffffff) {
            /*NO_RETURN*/ xalloc_die();
        }
        size_t __size = (size_t)(v2 * 8);
        void* __ptr = v3 != 0 ? NULL: ptr1;
        ptr1 = xrealloc(__ptr, __size);
        slotvec = ptr1;
        if(v3) {
            void* ptr2 = ptr1;
            int v4 = *(int*)((char*)&slotvec0 + 4);
            *(int*)ptr2 = *(int*)&slotvec0;
            *(int*)((int)ptr2 + 4) = v4;
        }
        →memset((void*)(nslots * 8 + (int)ptr1), 0, (size_t)((v2 - nslots) * 8));
        nslots = v2;
    }
    int v5 = *(int*)(param0 * 8 + (int)ptr1);
    int result = *((int*)(param0 * 8 + (int)ptr1) + 1);
    int v6 = quotearg_buffer(result, v5, param1, param2, param3);
    if((unsigned int)v6 >= (unsigned int)v5) {
        int* ptr3 = (int*)(param0 * 8 + (int)ptr1);
        v5 = v6 + 1;
        *ptr3 = v6 + 1;
        if(result != &slot0) {
            /*NO_RETURN*/ →free((void*)result);
        }
        /*NO_RETURN*/ xcharalloc((size_t)v5);
    }
    int* ptr4 = →__errno_location();
    ptr4[0] = v0;
    return result;
}

int quotearg_n_style(unsigned int param0, int param1, int param2) {
    char v0;
    int v1 = param1;
    quoting_options_from_style(&v0);
    return quotearg_n_options(param0, param2, -1, &v0);
}

int quotearg_n_style_mem(unsigned int param0, int param1, int param2, int param3) {
    char v0;
    int v1 = param1;
    quoting_options_from_style(&v0);
    return quotearg_n_options(param0, param2, param3, &v0);
}

int quotearg_style(int param0, int param1) {
    return quotearg_n_style(0, param0, param1);
}

int* quoting_options_from_style(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int* result = param0;
    int v9 = v8;
    →memset(&v0, 0, 32);
    *result = v9;
    *(result + 1) = v0;
    *(result + 2) = v1;
    *(result + 3) = v2;
    *(result + 4) = v3;
    *(result + 5) = v4;
    *(result + 6) = v5;
    *(result + 7) = v6;
    *(result + 8) = v7;
    return result;
}

int restore_default_color() {
    put_indicator((int*)&color_indicator);
    return put_indicator((int*)&gvar_80641E8);
}

int rev_strcmp_atime(int* param0, int* param1) {
    return cmp_atime(param1, param0, &→strcmp);
}

int rev_strcmp_ctime(int* param0, int* param1) {
    return cmp_ctime(param1, param0, &→strcmp);
}

int rev_strcmp_df_atime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_atime((int*)param1, (int*)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_df_ctime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_ctime((int*)param1, (int*)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_df_extension(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_extension((char**)param1, (char**)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_df_mtime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_mtime((int*)param1, (int*)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_df_name(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_name((int*)param1, (int*)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_df_size(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_size((int*)param1, (int*)param0, &→strcmp);
    }
    return result;
}

int rev_strcmp_extension(char** param0, char** param1) {
    return cmp_extension(param1, param0, &→strcmp);
}

int rev_strcmp_mtime(int* param0, int* param1) {
    return cmp_mtime(param1, param0, &→strcmp);
}

int rev_strcmp_name(int* param0, int* param1) {
    return cmp_name(param1, param0, &→strcmp);
}

int rev_strcmp_size(int* param0, int* param1) {
    return cmp_size(param1, param0, &→strcmp);
}

int rev_xstrcoll_atime(int* param0, int* param1) {
    return cmp_atime(param1, param0, &xstrcoll);
}

int rev_xstrcoll_ctime(int* param0, int* param1) {
    return cmp_ctime(param1, param0, &xstrcoll);
}

int rev_xstrcoll_df_atime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_atime((int*)param1, (int*)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_ctime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_ctime((int*)param1, (int*)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_extension(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_extension((char**)param1, (char**)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_mtime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_mtime((int*)param1, (int*)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_name(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_name((int*)param1, (int*)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_size(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_size((int*)param1, (int*)param0, &xstrcoll);
    }
    return result;
}

int rev_xstrcoll_df_version(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_version((char**)param1, (char**)param0);
    }
    return result;
}

int rev_xstrcoll_extension(char** param0, char** param1) {
    return cmp_extension(param1, param0, &xstrcoll);
}

int rev_xstrcoll_mtime(int* param0, int* param1) {
    return cmp_mtime(param1, param0, &xstrcoll);
}

int rev_xstrcoll_name(int* param0, int* param1) {
    return cmp_name(param1, param0, &xstrcoll);
}

int rev_xstrcoll_size(int* param0, int* param1) {
    return cmp_size(param1, param0, &xstrcoll);
}

int rev_xstrcoll_version(char** param0, char** param1) {
    return cmp_version(param1, param0);
}

int rpl_isnanl(int param0, int param1, int param2) {
    return !(param2 & 0x7fff) ? param1 >>> 31: (param2 & 0x7fff) == 0x7fff ? (param1 ^ 0x80000000) | param0 ? 1: 0: (param1 >>> 31) ^ 1;
}

int rpl_vfprintf(int param0, int param1, int param2) {
    char v0;
    int v1;
    /*NO_RETURN*/ vasnprintf(&v0, &v1, param1, param2);
}

int set_char_quoting(int param0, int param1, int param2) {
    char v0 = (unsigned char)param1;
    char v1 = (unsigned char)param1;
    int v2 = param0 != 0 ? param0: &default_quoting_options;
    int* ptr0 = (int*)((unsigned int)((unsigned char)param1 >>> 5) * 4 + (param0 != 0 ? param0: &default_quoting_options) + 4);
    int v3 = (unsigned int)(unsigned char)param1 & 0x1f;
    int result = (*ptr0 >>> (v3 & 0x1f)) & 1;
    *ptr0 = (((param2 & 1) ^ result) << (v3 & 0x1f)) ^ *ptr0;
    return result;
}

unsigned int set_exit_status(unsigned int param0) {
    unsigned int result = param0;
    if((unsigned char)result) {
        exit_status = 2;
    }
    else {
        result = exit_status;
        if(!result) {
            exit_status = 1;
        }
    }
    return result;
}

int set_quoting_style(unsigned int* param0, unsigned char param1) {
    unsigned char v0 = param1;
    param0 != 0 ? *param0: *(int*)&default_quoting_options = param1;
    return (int)v0;
}

unsigned int sighandler(unsigned int param0) {
    unsigned int result = interrupt_signal;
    if(!result) {
        result = param0;
        interrupt_signal = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sort_files() {
    char v0;
    if((unsigned int)((cwd_n_used >>> 1) + cwd_n_used) > sorted_file_alloc) {
        /*NO_RETURN*/ →free(sorted_file);
    }
    initialize_ordering_vector();
    unsigned int result = sort_type;
    if(result != -1) {
        int v1 = →_setjmp((__jmp_buf_tag*)&failed_strcoll);
        if(!v1) {
            v0 = 0;
        }
        else {
            v0 = 1;
            if(sort_type == 3) {
                /*NO_RETURN*/ →__assert_fail("sort_type != sort_version", "ls.c", 3212, (char*)&__PRETTY_FUNCTION__.8953);
            }
            initialize_ordering_vector();
        }
        unsigned int v2 = sort_type == 4 ? time_type: 0;
        unsigned int v3 = (sort_type == 4 ? time_type: 0) + sort_type;
        int v4 = (unsigned int)v0 + v3 + v3;
        int v5 = (unsigned int)sort_reverse + v4 + v4;
        result = (unsigned int)mpsort((int)sorted_file, (int)cwd_n_used, *(int*)(((unsigned int)directories_first + v5 + v5) * 4 + (int)&sort_functions));
    }
    return result;
}

int stat64(char* __file, stat64* __buf) {
    return →__xstat64(3, __file, __buf);
}

unsigned int stophandler() {
    unsigned int result;
    if(!interrupt_signal) {
        result = stop_signal_count;
        stop_signal_count = result + 1;
    }
    return result;
}

int strcmp_atime(int* param0, int* param1) {
    return cmp_atime(param0, param1, &→strcmp);
}

int strcmp_ctime(int* param0, int* param1) {
    return cmp_ctime(param0, param1, &→strcmp);
}

int strcmp_df_atime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_atime((int*)param0, (int*)param1, &→strcmp);
    }
    return result;
}

int strcmp_df_ctime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_ctime((int*)param0, (int*)param1, &→strcmp);
    }
    return result;
}

int strcmp_df_extension(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_extension((char**)param0, (char**)param1, &→strcmp);
    }
    return result;
}

int strcmp_df_mtime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_mtime((int*)param0, (int*)param1, &→strcmp);
    }
    return result;
}

int strcmp_df_name(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_name((int*)param0, (int*)param1, &→strcmp);
    }
    return result;
}

int strcmp_df_size(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_size((int*)param0, (int*)param1, &→strcmp);
    }
    return result;
}

int strcmp_extension(char** param0, char** param1) {
    return cmp_extension(param0, param1, &→strcmp);
}

int strcmp_mtime(int* param0, int* param1) {
    return cmp_mtime(param0, param1, &→strcmp);
}

int strcmp_name(int* param0, int* param1) {
    return cmp_name(param0, param1, &→strcmp);
}

int strcmp_size(int* param0, int* param1) {
    return cmp_size(param0, param1, &→strcmp);
}

int strftime_case_(int par0, int par1, int par2, int par3, int par4, int par5, int par6) {
    // Decompilation error
}

char* strmode(int param0, char* param1) {
    /*BAD_CALL!*/ ftypelet(param0);
}

void sub_80494AC() {
    jump gvar_8063FFC;
}

int sub_8049712() {
    /*BAD_CALL!*/ sub_80494AC();
}

int sub_8049942() {
    /*BAD_CALL!*/ sub_80494AC();
}

int sub_8049AA2() {
    /*BAD_CALL!*/ sub_80494AC();
}

int sub_804B3C8(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    int v1;
    while(1) {
        *(int*)(v1 - 92) = -1;
        int v2 = →getopt_long(*(int*)(v1 + 8), *(char***)(v1 + 12), "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", (option*)&long_options, (int*)(v1 - 92));
        *(int*)(v1 - 44) = v2;
        if(*(int*)(v1 - 44) == -1) {
            break;
        }
        else {
            *(int*)(v1 - 0x88) = *(int*)(v1 - 44) + 131;
            if(*(unsigned int*)(v1 - 0x88) <= 0x112) {
                jump *(int*)(*(int*)(v1 - 0x88) * 4 + &gvar_805F05C);
                if(ls_mode != 1) {
                    *(int*)(v1 - 116) = ls_mode == 2 ? &gvar_805EFA4: "vdir";
                    *(int*)(v1 - 120) = *(int*)(v1 - 116);
                }
                else {
                    *(int*)(v1 - 120) = &gvar_805EFAD;
                }
                FILE* __stream = stdout;
                param5 = 0;
                param4 = "David MacKenzie";
                param3 = "Richard Stallman";
                /*NO_RETURN*/ version_etc(__stream, *(int*)(v1 - 120), "GNU coreutils", "6.10");
                goto loc_804B44F;
                if(format) {
                    format = 1;
                    continue;
                    if(!ignore_mode) {
                        ignore_mode = 1;
                        continue;
                        if(v7) {
                            v0 = quotearg(optarg);
                            char* __format = →gettext("invalid tab size: %s");
                            →error(2, 0, __format, v0);
                        }
                        tabsize = *(unsigned int*)(v1 - 100);
                        continue;
                        if(!format) {
                            int v3 = →isatty(1);
                            *(int*)(v1 - 128) = v3 != 0 ? 2: 1;
                            format = *(unsigned int*)(v1 - 128);
                        }
                        print_block_size = 0;
                        print_with_color = 0;
                        continue;
                        if(v9 || !*(int*)(v1 - 96)) {
                            v0 = quotearg(optarg);
                            char* __format1 = →gettext("invalid line width: %s");
                            →error(2, 0, __format1, v0);
                        }
                        line_length = *(unsigned int*)(v1 - 96);
                        continue;
                        if(*(int*)(v1 - 32)) {
                            /*NO_RETURN*/ xstrtol_fatal(*(unsigned int*)(v1 - 32), *(int*)(v1 - 92), 0, &long_options, optarg);
                        }
                        file_output_block_size = output_block_size;
                        continue;
                        if(optarg) {
                            int v4 = __xargmatch_internal("--color", optarg, &color_args, &color_types, 4, argmatch_die);
                            *(int*)(v1 - 36) = *(int*)(v4 * 4 + (int)&color_types);
                        }
                        else {
                            *(int*)(v1 - 36) = 1;
                        }
                        if(*(int*)(v1 - 36) != 1) {
                            if(*(int*)(v1 - 36) == 2) {
                                int v5 = →isatty(1);
                                if(v5) {
                                    goto loc_804B21E;
                                }
                            }
                            *(int*)(v1 - 124) = 0;
                        }
                        else {
                        loc_804B21E:
                            *(int*)(v1 - 124) = 1;
                        }
                        print_with_color = *(unsigned char*)(v1 - 124);
                        if(print_with_color) {
                            tabsize = 0;
                        }
                    }
                }
            }
            else {
            loc_804B44F:
                /*NO_RETURN*/ usage(2);
                break;
            }
        }
    }
    if(line_length > 2) {
        *(unsigned int*)(v1 - 140) = line_length;
        *(int*)(v1 - 112) = (unsigned int)(((unsigned long long)*(int*)(v1 - 140) * 0xaaaaaaabL) >>> 32L) >>> 1;
    }
    else {
        *(int*)(v1 - 112) = 1;
    }
    max_idx = *(unsigned int*)(v1 - 112);
    /*NO_RETURN*/ clone_quoting_options(0);
}

int sub_804B454(int param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    int v1;
    while(1) {
        *(int*)(v1 - 92) = -1;
        int v2 = →getopt_long(*(int*)(v1 + 8), *(char***)(v1 + 12), "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", (option*)&long_options, (int*)(v1 - 92));
        *(int*)(v1 - 44) = v2;
        if(*(int*)(v1 - 44) == -1) {
            break;
        }
        else {
            *(int*)(v1 - 0x88) = *(int*)(v1 - 44) + 131;
            if(*(unsigned int*)(v1 - 0x88) > 0x112) {
                /*NO_RETURN*/ usage(2);
            }
            jump *(int*)(*(int*)(v1 - 0x88) * 4 + &gvar_805F05C);
            if(ls_mode != 1) {
                *(int*)(v1 - 116) = ls_mode == 2 ? &gvar_805EFA4: "vdir";
                *(int*)(v1 - 120) = *(int*)(v1 - 116);
            }
            else {
                *(int*)(v1 - 120) = &gvar_805EFAD;
            }
            FILE* __stream = stdout;
            param5 = 0;
            param4 = "David MacKenzie";
            param3 = "Richard Stallman";
            /*NO_RETURN*/ version_etc(__stream, *(int*)(v1 - 120), "GNU coreutils", "6.10");
            /*NO_RETURN*/ usage(2);
            jump *(int*)(*(int*)(v1 - 0x88) * 4 + &gvar_805F05C);
            if(format) {
                format = 1;
                continue;
                if(!ignore_mode) {
                    ignore_mode = 1;
                    continue;
                    if(v7) {
                        v0 = quotearg(optarg);
                        char* __format = →gettext("invalid tab size: %s");
                        →error(2, 0, __format, v0);
                    }
                    tabsize = *(unsigned int*)(v1 - 100);
                    continue;
                    if(!format) {
                        int v3 = →isatty(1);
                        *(int*)(v1 - 128) = v3 != 0 ? 2: 1;
                        format = *(unsigned int*)(v1 - 128);
                    }
                    print_block_size = 0;
                    print_with_color = 0;
                    continue;
                    if(v9 || !*(int*)(v1 - 96)) {
                        v0 = quotearg(optarg);
                        char* __format1 = →gettext("invalid line width: %s");
                        →error(2, 0, __format1, v0);
                    }
                    line_length = *(unsigned int*)(v1 - 96);
                    continue;
                    if(*(int*)(v1 - 32)) {
                        /*NO_RETURN*/ xstrtol_fatal(*(unsigned int*)(v1 - 32), *(int*)(v1 - 92), 0, &long_options, optarg);
                    }
                    file_output_block_size = output_block_size;
                    continue;
                    if(optarg) {
                        int v4 = __xargmatch_internal("--color", optarg, &color_args, &color_types, 4, argmatch_die);
                        *(int*)(v1 - 36) = *(int*)(v4 * 4 + (int)&color_types);
                    }
                    else {
                        *(int*)(v1 - 36) = 1;
                    }
                    if(*(int*)(v1 - 36) != 1) {
                        if(*(int*)(v1 - 36) == 2) {
                            int v5 = →isatty(1);
                            if(v5) {
                                goto loc_804B21E;
                            }
                        }
                        *(int*)(v1 - 124) = 0;
                    }
                    else {
                    loc_804B21E:
                        *(int*)(v1 - 124) = 1;
                    }
                    print_with_color = *(unsigned char*)(v1 - 124);
                    if(print_with_color) {
                        tabsize = 0;
                    }
                }
            }
        }
    }
    if(line_length > 2) {
        *(unsigned int*)(v1 - 140) = line_length;
        *(int*)(v1 - 112) = (unsigned int)(((unsigned long long)*(int*)(v1 - 140) * 0xaaaaaaabL) >>> 32L) >>> 1;
    }
    else {
        *(int*)(v1 - 112) = 1;
    }
    max_idx = *(unsigned int*)(v1 - 112);
    /*NO_RETURN*/ clone_quoting_options(0);
}

void sub_8051A32() {
}

int timespec_cmp(int param0, int param1, int param2, int param3) {
    return param0 >= param2 ? param0 <= param2 ? param1 - param3: 1: -1;
}

int to_uchar(int param0) {
    return (unsigned int)(unsigned char)param0;
}

char* umaxtostr(unsigned int param0, unsigned int param1, int param2) {
    unsigned int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param1;
    char* result = (char*)(param2 + 20);
    *result = 0;
    do {
        --result;
        unsigned int v3 = __umoddi3(v1, v2, 10, 0);
        *result = (unsigned char)v3 + 48;
        v1 = (unsigned int)__udivdi3(v1, v2, 10, 0);
        v2 = v0;
    }
    while(v1 | v2);
    return result;
}

int unsigned_file_size(int param0, int param1) {
    return param0;
}

int usage(int __status) {
    FILE* __stream24;
    int v0;
    int v1 = v0;
    if(__status) {
        __stream24 = program_name;
        char* __format = →gettext("Try `%s --help\' for more information.\n");
        →fprintf(stderr, __format, __stream24);
    }
    else {
        unsigned int v2 = program_name;
        char* __format1 = →gettext("Usage: %s [OPTION]... [FILE]...\n");
        →printf(__format1, v2);
        FILE* __stream = stdout;
        char* __s = →gettext("List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort.\n\n");
        →fputs_unlocked(__s, __stream);
        FILE* __stream1 = stdout;
        char* __s1 = →gettext("Mandatory arguments to long options are mandatory for short options too.\n");
        →fputs_unlocked(__s1, __stream1);
        FILE* __stream2 = stdout;
        char* __s2 = →gettext("  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print octal escapes for nongraphic characters\n");
        →fputs_unlocked(__s2, __stream2);
        FILE* __stream3 = stdout;
        char* __s3 = →gettext("      --block-size=SIZE      use SIZE-byte blocks\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime\n");
        →fputs_unlocked(__s3, __stream3);
        FILE* __stream4 = stdout;
        char* __s4 = →gettext("  -C                         list entries by columns\n      --color[=WHEN]         control whether color is used to distinguish file\n                               types.  WHEN may be `never\', `always\', or `auto\'\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n");
        →fputs_unlocked(__s4, __stream4);
        FILE* __stream5 = stdout;
        char* __s5 = →gettext("  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n");
        →fputs_unlocked(__s5, __stream5);
        FILE* __stream6 = stdout;
        char* __s6 = →gettext("  -g                         like -l, but do not list owner\n");
        →fputs_unlocked(__s6, __stream6);
        FILE* __stream7 = stdout;
        char* __s7 = →gettext("      --group-directories-first\n                             group directories before files\n");
        →fputs_unlocked(__s7, __stream7);
        FILE* __stream8 = stdout;
        char* __s8 = →gettext("  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n");
        →fputs_unlocked(__s8, __stream8);
        FILE* __stream9 = stdout;
        char* __s9 = →gettext("  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n");
        →fputs_unlocked(__s9, __stream9);
        FILE* __stream10 = stdout;
        char* __s10 = →gettext("      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n");
        →fputs_unlocked(__s10, __stream10);
        FILE* __stream11 = stdout;
        char* __s11 = →gettext("  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n");
        →fputs_unlocked(__s11, __stream11);
        FILE* __stream12 = stdout;
        char* __s12 = →gettext("  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n");
        →fputs_unlocked(__s12, __stream12);
        FILE* __stream13 = stdout;
        char* __s13 = →gettext("  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n");
        →fputs_unlocked(__s13, __stream13);
        FILE* __stream14 = stdout;
        char* __s14 = →gettext("  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the size of each file, in blocks\n");
        →fputs_unlocked(__s14, __stream14);
        FILE* __stream15 = stdout;
        char* __s15 = →gettext("  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n");
        →fputs_unlocked(__s15, __stream15);
        FILE* __stream16 = stdout;
        char* __s16 = →gettext("      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-\', STYLE\n                             takes effect only outside the POSIX locale\n");
        →fputs_unlocked(__s16, __stream16);
        FILE* __stream17 = stdout;
        char* __s17 = →gettext("  -t                         sort by modification time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n");
        →fputs_unlocked(__s17, __stream17);
        FILE* __stream18 = stdout;
        char* __s18 = →gettext("  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         sort by version\n");
        →fputs_unlocked(__s18, __stream18);
        FILE* __stream19 = stdout;
        char* __s19 = →gettext("  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n");
        →fputs_unlocked(__s19, __stream19);
        FILE* __stream20 = stdout;
        char* __s20 = →gettext("      --help     display this help and exit\n");
        →fputs_unlocked(__s20, __stream20);
        FILE* __stream21 = stdout;
        char* __s21 = →gettext("      --version  output version information and exit\n");
        →fputs_unlocked(__s21, __stream21);
        FILE* __stream22 = stdout;
        char* __s22 = →gettext("\nSIZE may be (or may be an integer optionally followed by) one of following:\nkB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n");
        →fputs_unlocked(__s22, __stream22);
        FILE* __stream23 = stdout;
        char* __s23 = →gettext("\nBy default, color is not used to distinguish types of files.  That is\nequivalent to using --color=none.  Using the --color option without the\noptional WHEN argument is equivalent to using --color=always.  With\n--color=auto, color codes are output only if standard output is connected\nto a terminal (tty).  The environment variable LS_COLORS can influence the\ncolors, and can be set easily by the dircolors command.\n");
        →fputs_unlocked(__s23, __stream23);
        __stream24 = stdout;
        char* __s24 = →gettext("\nExit status is 0 if OK, 1 if minor problems, 2 if serious trouble.\n");
        →fputs_unlocked(__s24, __stream24);
        emit_bug_reporting_address();
    }
    /*NO_RETURN*/ →exit(__status);
}

int vasnprintf(int param0, int param1, int param2, int param3) {
    char v0;
    char v1;
    int v2;
    int v3 = v2;
    int v4 = param0;
    int v5 = param1;
    int v6 = param2;
    int v7 = param3;
    int v8 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int* ptr0 = &v0;
    /*NO_RETURN*/ printf_parse(param2, &v1);
}

int version_etc(FILE* __stream, int param1, int param2, int param3) {
    char v0;
    /*NO_RETURN*/ version_etc_va(__stream, param1, param2, param3, &v0);
}

int version_etc_va(FILE* __stream, int param1, int param2, int param3, int param4) {
    int v0;
    int v1 = v0;
    int v2 = param4;
    unsigned int v3 = 0;
    while(1) {
        int v4 = v2;
        v2 = v4 + 4;
        if(!*(int*)v4) {
            break;
        }
        else {
            ++v3;
        }
    }
    if(param1) {
        →fprintf(__stream, "%s (%s) %s\n", param1, param2, param3);
    }
    else {
        →fprintf(__stream, "%s %s\n", param2, param3);
    }
    char* ptr0 = →gettext((char*)&gvar_806151B);
    →fprintf(__stream, (char*)&version_etc_copyright, ptr0, 2008);
    char* __s = →gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    →fputs_unlocked(__s, __stream);
    switch(v3) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            char* ptr1 = →gettext("Written by %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr1, param4);
        }
        case 2: {
            char* ptr2 = →gettext("Written by %s and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr2, param4);
        }
        case 3: {
            char* ptr3 = →gettext("Written by %s, %s, and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr3, param4);
        }
        case 4: {
            char* ptr4 = →gettext("Written by %s, %s, %s,\nand %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr4, param4);
        }
        case 5: {
            char* ptr5 = →gettext("Written by %s, %s, %s,\n%s, and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr5, param4);
        }
        case 6: {
            char* ptr6 = →gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr6, param4);
        }
        case 7: {
            char* ptr7 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr7, param4);
        }
        case 8: {
            char* ptr8 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr8, param4);
        }
        case 9: {
            char* ptr9 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
            /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr9, param4);
        }
    }
    char* ptr10 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    /*NO_RETURN*/ rpl_vfprintf((int)__stream, (int)ptr10, param4);
}

int visit_dir(int param0, int param1, int param2, int param3) {
    /*NO_RETURN*/ xmalloc(16);
}

void* x2nrealloc(void* __ptr, unsigned int* param1, unsigned int param2) {
    unsigned int v0 = *param1;
    if(__ptr) {
        if(0xaaaaaaaa / param2 <= v0) {
            /*NO_RETURN*/ xalloc_die();
        }
        v0 = (unsigned int)(((v0 + 1) >>> 1) + v0);
    }
    else if(!v0) {
        v0 = 64 / param2 + (64 / param2 ? 0: 1);
    }
    *param1 = v0;
    return xrealloc(__ptr, (size_t)(v0 * param2));
}

void* x2realloc(void* __ptr, unsigned int* param1) {
    return x2nrealloc(__ptr, param1, 1);
}

int xalloc_die() {
    char* ptr0 = →gettext("memory exhausted");
    →error(exit_failure, 0, (char*)&gvar_80617E0, ptr0);
    /*NO_RETURN*/ →abort();
}

void* xcalloc(size_t __nmemb, size_t __size) {
    void* result = →calloc(__nmemb, __size);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

int xcharalloc(size_t __size) {
    /*NO_RETURN*/ xmalloc(__size);
}

void* xmalloc(size_t __size) {
    /*NO_RETURN*/ →malloc(__size);
}

unsigned int xmax(unsigned int param0, unsigned int param1) {
    unsigned int result = param0;
    if(result < param1) {
        result = param1;
    }
    return result;
}

int xmemdup(int param0, size_t __size) {
    /*NO_RETURN*/ xmalloc(__size);
}

int xnmalloc(unsigned int param0, unsigned int param1) {
    if(0xffffffff / param1 < param0) {
        /*NO_RETURN*/ xalloc_die();
    }
    /*NO_RETURN*/ xmalloc((size_t)(param0 * param1));
}

void* xnrealloc(void* __ptr, unsigned int param1, unsigned int param2) {
    if(0xffffffff / param2 < param1) {
        /*NO_RETURN*/ xalloc_die();
    }
    return xrealloc(__ptr, (size_t)(param1 * param2));
}

void* xrealloc(void* __ptr, size_t __size) {
    __ptr = →realloc(__ptr, __size);
    if(!__ptr && __size) {
        /*NO_RETURN*/ xalloc_die();
    }
    return __ptr;
}

int xstrcoll(char* __s1, char* __s2) {
    int* ptr0 = →__errno_location();
    ptr0[0] = 0;
    int result = →strcoll(__s1, __s2);
    int* ptr1 = →__errno_location();
    if(ptr1[0]) {
        int v0 = quote_n(1, (int)__s2);
        int v1 = quote_n(0, (int)__s1);
        char* __format = →gettext("cannot compare file names %s and %s");
        int* ptr2 = →__errno_location();
        →error(0, ptr2[0], __format, v1, v0);
        set_exit_status(0);
        /*NO_RETURN*/ →longjmp((__jmp_buf_tag*)&failed_strcoll, 1);
    }
    return result;
}

int xstrcoll_atime(int* param0, int* param1) {
    return cmp_atime(param0, param1, &xstrcoll);
}

int xstrcoll_ctime(int* param0, int* param1) {
    return cmp_ctime(param0, param1, &xstrcoll);
}

int xstrcoll_df_atime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_atime((int*)param0, (int*)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_ctime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_ctime((int*)param0, (int*)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_extension(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_extension((char**)param0, (char**)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_mtime(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_mtime((int*)param0, (int*)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_name(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_name((int*)param0, (int*)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_size(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_size((int*)param0, (int*)param1, &xstrcoll);
    }
    return result;
}

int xstrcoll_df_version(int param0, int param1) {
    int result;
    int v0 = is_directory(param0);
    int v1 = is_directory(param1);
    if((unsigned char)v0 && (unsigned char)((unsigned int)(unsigned char)v1 ^ 1)) {
        result = -1;
    }
    else if((unsigned char)((unsigned int)(unsigned char)v0 ^ 1) && (unsigned char)v1) {
        result = 1;
    }
    else {
        result = cmp_version((char**)param0, (char**)param1);
    }
    return result;
}

int xstrcoll_extension(char** param0, char** param1) {
    return cmp_extension(param0, param1, &xstrcoll);
}

int xstrcoll_mtime(int* param0, int* param1) {
    return cmp_mtime(param0, param1, &xstrcoll);
}

int xstrcoll_name(int* param0, int* param1) {
    return cmp_name(param0, param1, &xstrcoll);
}

int xstrcoll_size(int* param0, int* param1) {
    return cmp_size(param0, param1, &xstrcoll);
}

int xstrcoll_version(char** param0, char** param1) {
    return cmp_version(param0, param1);
}

char* xstrdup(char* __s) {
    size_t v0 = →strlen(__s);
    /*NO_RETURN*/ xmemdup((int)__s, v0 + 1);
}

char* xstrndup(char* __string, size_t __n) {
    char* result = →strndup(__string, __n);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

int xstrtol_error(unsigned int param0, int param1, int param2, int param3, int param4) {
    char* ptr0;
    char* __msgid;
    char v0 = (unsigned char)param2;
    int result = &gvar_8061EF4;
    unsigned int v1 = param0;
    if(v1 > 3) {
        if(v1 != 4) {
        loc_8058B3B:
            /*NO_RETURN*/ →abort();
        }
        __msgid = "invalid %s%s argument `%s\'";
    }
    else if(v1 >= 2) {
        __msgid = "invalid suffix in %s%s argument `%s\'";
    }
    else if(v1 != 1) {
        goto loc_8058B3B;
    }
    else {
        __msgid = "%s%s argument `%s\' too large";
    }
    if(param1 < 0) {
        result = &gvar_8061EF4 - param1;
        char v2 = v0;
        char v3 = 0;
        ptr0 = &v2;
    }
    else {
        ptr0 = *(unsigned int*)(param1 * 16 + param3);
    }
    char* __format = →gettext(__msgid);
    →error(exit_failure, 0, __format, result, ptr0, param4);
    return result;
}

int xstrtol_fatal(unsigned int param0, int param1, int param2, int param3, int param4) {
    xstrtol_error(param0, param1, (int)(unsigned char)param2, param3, param4);
    /*NO_RETURN*/ →abort();
}

unsigned long xstrtoul(char* __nptr, char** __endptr, int __base) {
    int v0;
    unsigned long result1;
    char* __s;
    char v1;
    unsigned int* ptr0;
    unsigned long result = 0;
    if(__base < 0 || __base > 36) {
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, (char*)&__PRETTY_FUNCTION__.3412);
    }
    char** ptr1 = !__endptr ? &v1: __endptr;
    char** __endptr1 = !__endptr ? &v1: __endptr;
    char* ptr2 = __nptr;
    char v2 = ptr2[0];
    for(unsigned short** i = /*BAD_CALL!*/ →__ctype_b_loc(); ((unsigned int)i[0][(unsigned int)v2] & 0x2000); i = /*BAD_CALL!*/ →__ctype_b_loc()) {
        ++ptr2;
        v2 = ptr2[0];
    }
    if(v2 == 45) {
        result1 = 4;
    }
    else {
        int* ptr3 = →__errno_location();
        ptr3[0] = 0;
        unsigned long v3 = →strtoul(__nptr, __endptr1, __base);
        if(__endptr1[0] == __nptr) {
            if(__s && __endptr1[0][0]) {
                char* ptr4 = →strchr(__s, (int)__endptr1[0][0]);
                if(ptr4) {
                    v3 = 1;
                    goto loc_8058DDC;
                }
            }
            result1 = 4;
        }
        else {
            int* ptr5 = →__errno_location();
            if(ptr5[0]) {
                int* ptr6 = →__errno_location();
                if(ptr6[0] != 34) {
                    return 4;
                }
                result = 1;
            }
        loc_8058DDC:
            if(!__s) {
                *ptr0 = v3;
                result1 = result;
            }
            else if(__endptr1[0][0]) {
                int v4 = 0x400;
                int v5 = 1;
                char* ptr7 = →strchr(__s, (int)__endptr1[0][0]);
                if(!ptr7) {
                    *ptr0 = v3;
                    result1 = result | 0x2;
                }
                else {
                    char* ptr8 = →strchr(__s, 48);
                    if(ptr8) {
                        int v6 = (int)__endptr1[0][1];
                        if(v6 == 66 || v6 == 68) {
                            v4 = 1000;
                            ++v5;
                        }
                        else if(v6 == 105 && __endptr1[0][2] == 66) {
                            v5 += 2;
                        }
                    }
                    unsigned int v7 = (unsigned int)((int)__endptr1[0][0] - 66);
                    switch(v7) {
                        case 0: {
                            v0 = bkm_scale(&v3, 0x400);
                        loc_8059041:
                            result = (unsigned long)(v0 | result);
                            __endptr1[0] = &__endptr1[0][v5];
                            if(__endptr1[0][0]) {
                                result |= 2;
                            }
                            *ptr0 = v3;
                            return result;
                        }
                        case 3: {
                            v0 = bkm_scale_by_power(&v3, v4, 6);
                            goto loc_8059041;
                        }
                        case 14: {
                            v0 = bkm_scale_by_power(&v3, v4, 5);
                            goto loc_8059041;
                        }
                        case 23: {
                            v0 = bkm_scale_by_power(&v3, v4, 8);
                            goto loc_8059041;
                        }
                        case 24: {
                            v0 = bkm_scale_by_power(&v3, v4, 7);
                            goto loc_8059041;
                        }
                        case 32: {
                            break;
                        }
                        case 33: {
                            v0 = 0;
                            goto loc_8059041;
                        }
                        case 5: 
                        case 37: {
                            v0 = bkm_scale_by_power(&v3, v4, 3);
                            goto loc_8059041;
                        }
                        case 9: 
                        case 41: {
                            v0 = bkm_scale_by_power(&v3, v4, 1);
                            goto loc_8059041;
                        }
                        case 11: 
                        case 43: {
                            v0 = bkm_scale_by_power(&v3, v4, 2);
                            goto loc_8059041;
                        }
                        case 18: 
                        case 50: {
                            v0 = bkm_scale_by_power(&v3, v4, 4);
                            goto loc_8059041;
                        }
                        case 53: {
                            v0 = bkm_scale(&v3, 2);
                            goto loc_8059041;
                        }
                        default: {
                            *ptr0 = v3;
                            return result | 0x2;
                        }
                    }
                    v0 = bkm_scale(&v3, 0x200);
                    goto loc_8059041;
                }
            }
            else {
                *ptr0 = v3;
                result1 = result;
            }
        }
    }
    return result1;
}

uintmax_t xstrtoumax(char* __nptr, char** __endptr, int __base) {
    int v0;
    int v1;
    int v2;
    char* __s;
    char v3;
    int v4;
    int v5;
    int v6;
    int* ptr0;
    int v7 = 0;
    if(__base < 0 || __base > 36) {
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, (char*)&__PRETTY_FUNCTION__.34122);
    }
    char** ptr1 = !__endptr ? &v3: __endptr;
    char** __endptr1 = !__endptr ? &v3: __endptr;
    char* ptr2 = __nptr;
    char v8 = ptr2[0];
    for(unsigned short** i = /*BAD_CALL!*/ →__ctype_b_loc(); ((unsigned int)i[0][(unsigned int)v8] & 0x2000); i = /*BAD_CALL!*/ →__ctype_b_loc()) {
        ++ptr2;
        v8 = ptr2[0];
    }
    if(v8 == 45) {
        v1 = 4;
    }
    else {
        int* ptr3 = →__errno_location();
        ptr3[0] = 0;
        (unsigned long long)v5 | ((unsigned long long)v2 << 32) = →strtoumax(__nptr, __endptr1, __base);
        int v9 = v4;
        int v10 = v6;
        if(__endptr1[0] == __nptr) {
            if(__s && __endptr1[0][0]) {
                char* ptr4 = →strchr(__s, (int)__endptr1[0][0]);
                if(ptr4) {
                    v9 = 1;
                    v10 = 0;
                    goto loc_80592F2;
                }
            }
            v1 = 4;
        }
        else {
            int* ptr5 = →__errno_location();
            if(ptr5[0]) {
                int* ptr6 = →__errno_location();
                if(ptr6[0] != 34) {
                    v1 = 4;
                    return (unsigned long long)v1 | ((unsigned long long)v2 << 32);
                }
                v7 = 1;
            }
        loc_80592F2:
            if(!__s) {
                *ptr0 = v9;
                *(ptr0 + 1) = v10;
                v1 = v7;
            }
            else if(__endptr1[0][0]) {
                unsigned int v11 = 0x400;
                int v12 = 1;
                char* ptr7 = →strchr(__s, (int)__endptr1[0][0]);
                if(!ptr7) {
                    *ptr0 = v9;
                    *(ptr0 + 1) = v10;
                    v1 = v7 | 0x2;
                }
                else {
                    char* ptr8 = →strchr(__s, 48);
                    if(ptr8) {
                        int v13 = (int)__endptr1[0][1];
                        if(v13 == 66 || v13 == 68) {
                            v11 = 1000;
                            ++v12;
                        }
                        else if(v13 == 105 && __endptr1[0][2] == 66) {
                            v12 += 2;
                        }
                    }
                    unsigned int v14 = (unsigned int)((int)__endptr1[0][0] - 66);
                    switch(v14) {
                        case 0: {
                            v0 = bkm_scale2(&v9, 0x400);
                        loc_8059569:
                            v7 |= v0;
                            __endptr1[0] = &__endptr1[0][v12];
                            if(__endptr1[0][0]) {
                                v7 |= 2;
                            }
                            *ptr0 = v9;
                            *(ptr0 + 1) = v10;
                            v1 = v7;
                            return (unsigned long long)v1 | ((unsigned long long)v2 << 32);
                        }
                        case 3: {
                            v0 = bkm_scale_by_power2(&v9, v11, 6);
                            goto loc_8059569;
                        }
                        case 14: {
                            v0 = bkm_scale_by_power2(&v9, v11, 5);
                            goto loc_8059569;
                        }
                        case 23: {
                            v0 = bkm_scale_by_power2(&v9, v11, 8);
                            goto loc_8059569;
                        }
                        case 24: {
                            v0 = bkm_scale_by_power2(&v9, v11, 7);
                            goto loc_8059569;
                        }
                        case 32: {
                            break;
                        }
                        case 33: {
                            v0 = 0;
                            goto loc_8059569;
                        }
                        case 5: 
                        case 37: {
                            v0 = bkm_scale_by_power2(&v9, v11, 3);
                            goto loc_8059569;
                        }
                        case 9: 
                        case 41: {
                            v0 = bkm_scale_by_power2(&v9, v11, 1);
                            goto loc_8059569;
                        }
                        case 11: 
                        case 43: {
                            v0 = bkm_scale_by_power2(&v9, v11, 2);
                            goto loc_8059569;
                        }
                        case 18: 
                        case 50: {
                            v0 = bkm_scale_by_power2(&v9, v11, 4);
                            goto loc_8059569;
                        }
                        case 53: {
                            v0 = bkm_scale2(&v9, 2);
                            goto loc_8059569;
                        }
                        default: {
                            *ptr0 = v9;
                            *(ptr0 + 1) = v10;
                            v1 = v7 | 0x2;
                            return (unsigned long long)v1 | ((unsigned long long)v2 << 32);
                        }
                    }
                    v0 = bkm_scale2(&v9, 0x200);
                    goto loc_8059569;
                }
            }
            else {
                *ptr0 = v9;
                *(ptr0 + 1) = v10;
                v1 = v7;
            }
        }
    }
    return (unsigned long long)v1 | ((unsigned long long)v2 << 32);
}

unsigned int xsum(unsigned int param0, int param1) {
    unsigned int v0 = param0 + param1;
    return v0 >= param0 ? v0: 0xffffffff;
}

unsigned int xsum2(unsigned int param0, int param1) {
    unsigned int v0 = param0 + param1;
    return v0 >= param0 ? v0: 0xffffffff;
}

unsigned int xsum4(unsigned int param0, int param1, int param2, int param3) {
    unsigned int v0 = xsum(param0, param1);
    unsigned int v1 = xsum(v0, param2);
    return xsum(v1, param3);
}

int xzalloc(size_t __size) {
    /*NO_RETURN*/ xmalloc(__size);
}
