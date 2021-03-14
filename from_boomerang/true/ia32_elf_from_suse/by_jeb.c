
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

void* clone_quoting_options(int* param0) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    void* result = xmalloc(36);
    int* ptr1 = param0;
    if(!ptr1) {
        ptr1 = (int*)&default_quoting_options;
    }
    *(int*)result = *ptr1;
    *(int*)((int)result + 4) = *(ptr1 + 1);
    *(int*)((int)result + 8) = *(ptr1 + 2);
    *(int*)((int)result + 12) = *(ptr1 + 3);
    *(int*)((int)result + 16) = *(ptr1 + 4);
    *(int*)((int)result + 20) = *(ptr1 + 5);
    *(int*)((int)result + 24) = *(ptr1 + 6);
    *(int*)((int)result + 28) = *(ptr1 + 7);
    *(int*)((int)result + 32) = *(ptr1 + 8);
    ptr0[0] = v0;
    return result;
}

size_t close_stdout() {
    size_t result1;
    int v0;
    int v1;
    int v2;
    int v3;
    int result;
    FILE* __fp = stdout;
    int __errnum = (unsigned int)((__fp->_flags >>> 5) & 0x1) < 1 ? -1: 0;
    if(__errnum) {
        result1 = →__fpending(__fp);
        if(result1) {
            __fp = stdout;
            goto loc_8048CB4;
        }
    }
    else {
    loc_8048CB4:
        result1 = (size_t)→fclose(__fp);
        if(result1) {
            result1 = (size_t)→__errno_location();
            __errnum = *(int*)result1;
        }
        if(__errnum >= 0) {
            char* ptr0 = →dcgettext(NULL, "write error", 5);
            int v4 = file_name;
            if(v4) {
                int v5 = quotearg_colon(v4);
                →error(exit_failure, __errnum, (char*)&gvar_804A0B8, v5, ptr0);
            }
            else {
                →error(exit_failure, __errnum, (char*)&gvar_804A0BC, ptr0, v0, v1, v2, v3);
                return result;
            }
        }
    }
    return result1;
}

unsigned int close_stdout_set_file_name(unsigned int param0) {
    file_name = param0;
    return param0;
}

unsigned char get_quoting_style(unsigned int* param0) {
    if(param0) {
        return *param0;
    }
    return *(int*)&default_quoting_options;
}

char* gettext_quote(int param0, int param1) {
    int v0;
    char* __msgid;
    char* ptr0 = →dcgettext(NULL, __msgid, 5);
    char* result = ptr0;
    if(((unsigned char)(((unsigned int)(ptr0 == __msgid ? 1: 0) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8)) & ((unsigned int)(v0 == 6 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8))) & 0x1)) {
        result = (char*)&gvar_804A3BC;
    }
    return result;
}

int main(int param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = param1;
    unsigned int v2 = *ptr0;
    int v3 = 6;
    program_name = v2;
    →setlocale(6, (char*)0x804A03C);
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    atexit((void __cdecl (*_)())&close_stdout);
    if(param0 != 2) {
    loc_8048BCE:
        /*NO_RETURN*/ →exit(0);
    }
    char* ptr1 = →getenv("POSIXLY_CORRECT");
    char v4 = ptr1 ? 0: 1;
    if(v4) {
        char* ptr2 = "--help";
        char* ptr3 = *(ptr0 + 1);
        char* ptr4 = *(ptr0 + 1);
        int v5 = 7;
        while(v5 != 0) {
            v4 = *ptr4 == *ptr2;
            ++ptr4;
            ++ptr2;
            --v5;
            if(!v4) {
                break;
            }
        }
        if(v4) {
            /*NO_RETURN*/ usage(0);
        }
        char* ptr5 = ptr3;
        char* ptr6 = "--version";
        int v6 = 10;
        while(v6 != 0) {
            v4 = *ptr5 == *ptr6;
            ++ptr5;
            ++ptr6;
            --v6;
            if(!v4) {
                break;
            }
        }
        if(v4) {
            int v7 = 0;
            FILE* ptr7 = stdout;
            ptr0 = (unsigned int*)&gvar_804A099;
            int v8 = "Jim Meyering";
            version_etc(ptr7, "true", &gvar_804A099, "5.2.1");
        }
    }
    goto loc_8048BCE;
}

int quotearg(int param0) {
    return quotearg_n(0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int quotearg_buffer(int param0, int param1, int param2, int param3, int* param4) {
    int v0;
    int* ptr0 = param4;
    int v1 = v0;
    if(!ptr0) {
        ptr0 = (int*)&default_quoting_options;
    }
    int* ptr1 = →__errno_location();
    int v2 = ptr1[0];
    int result = quotearg_buffer_restyled(param3, *ptr0, (int)ptr0);
    ptr1[0] = v2;
    return result;
}

size_t quotearg_buffer_restyled(size_t param0, int param1, int param2) {
    unsigned int v0;
    char v1;
    size_t v2;
    size_t v3;
    size_t v4;
    unsigned int v5;
    size_t v6;
    size_t v7;
    wint_t __wc;
    size_t v8;
    size_t v9;
    int v10;
    char v11;
    size_t v12 = v8;
    size_t v13 = v9;
    char* __s1 = (char*)v10;
    size_t result = 0;
    size_t v14 = 0;
    size_t v15 = 0;
    int v16 = 0;
    size_t v17 = /*BAD_CALL!*/ →__ctype_get_mb_cur_max();
    int v18 = v17 - 1 ? 0: 1;
    if((unsigned int)param1 <= 6) {
        switch(param1) {
            case 0: 
            case 1: {
                size_t v19 = 0;
                goto loc_8048FA4;
            }
            case 2: {
                if(v13 > 0) {
                    v6 = v12;
                    *(char*)v6 = 39;
                }
                result = 1;
                v14 = &gvar_804A3C0;
                v15 = 1;
                size_t v19 = 0;
                goto loc_8048FA4;
            }
            case 3: {
                break;
            }
            case 4: {
                v16 = 1;
                size_t v19 = 0;
                goto loc_8048FA4;
            }
            case 5: 
            case 6: {
                v7 = (size_t)gettext_quote(v10, param1);
                char* __s = gettext_quote(v10, param1);
                v14 = v7;
                if(*(char*)v7) {
                    do {
                        if(result < v13) {
                            *(char*)(result + v12) = *(char*)v14;
                        }
                        ++v14;
                        ++result;
                    }
                    while(*(char*)v14);
                }
                v16 = 1;
                v14 = (size_t)__s;
                v15 = →strlen(__s);
                size_t v19 = 0;
                goto loc_8048FA4;
            }
            case 8: 
            case 9: 
            case 10: 
            case 11: 
            case 12: 
            case 13: {
                goto loc_8049025;
            }
            default: {
                throw 0;
            }
        }
        v6 = v13;
        if(v6 > 0) {
            *(char*)v12 = 34;
        }
        result = 1;
        v16 = 1;
        v14 = &gvar_804A3BC;
        v15 = 1;
        size_t v19 = 0;
        goto loc_8048FA4;
    }
    else {
        size_t v19 = 0;
        goto loc_8048FA4;
    loc_8049025:
        if(v18) {
            v5 = 1;
            unsigned short** ptr0 = →__ctype_b_loc();
            v4 = (size_t)((unsigned int)ptr0[0][(unsigned int)v11] & 0x4000);
            v3 = (size_t)((unsigned int)ptr0[0][(unsigned int)v11] & 0x4000);
        }
        else {
            int v20 = 0;
            int v21 = 0;
            v5 = 0;
            v3 = 1;
            if(param0 == -1) {
                param0 = →strlen(__s1);
            }
            do {
                mbstate_t* __p = &v20;
                unsigned int v22 = v5 + v19;
                size_t __n = param0 - v22;
                char* __s2 = &__s1[v22];
                char* ptr1 = &__s1[v22];
                v4 = /*BAD_CALL!*/ →mbrtowc(&__wc, __s2, __n, __p);
                if(!v4) {
                    break;
                }
                else if(v4 == -2) {
                    char v23 = v22 < param0;
                    v3 = 0;
                    if(v23 && ptr1[0]) {
                        do {
                            ++v5;
                            v4 = (size_t)(v5 + v19);
                        }
                        while(v4 < param0 && __s1[v4]);
                    }
                    break;
                }
                else if(v4 == -1) {
                    v3 = 0;
                    break;
                }
                else {
                    int v24 = →iswprint(__wc);
                    v5 = (unsigned int)(v4 + v5);
                    v3 = (size_t)((0 - (v24 ? 1: 0)) & v3);
                    v4 = (size_t)→mbsinit(&v20);
                }
            }
            while(!v4);
            if(v5 > 1) {
                goto loc_8049066;
            }
        }
        v6 = (unsigned int)(v3 ? 0: 1) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        if(((unsigned char)(((unsigned int)(v16 ? 1: 0) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8)) & v6) & 0x1)) {
        loc_8049066:
            unsigned int v25 = v5;
            unsigned int v26 = v25 + v19;
            while(1) {
                if(((unsigned char)(((unsigned int)(v3 ? 0: 1) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8)) & ((unsigned int)(v16 ? 1: 0) | ((unsigned int)((v25 >>> 8) & 0xffffff) << 8))) & 0x1)) {
                    if(result < v13) {
                        *(char*)(result + v12) = 92;
                    }
                    ++result;
                    if(result < v13) {
                        *(char*)(result + v12) = (v11 >>> 6) + 48;
                    }
                    ++result;
                    if(result < v13) {
                        *(char*)(result + v12) = ((v11 >>> 3) & 0x7) + 48;
                    }
                    v11 &= 7;
                    ++result;
                    v11 += 48;
                }
                v6 = v19 + 1;
                if(v26 <= v6) {
                    goto loc_8049296;
                }
                else {
                    if(result < v13) {
                        *(char*)(result + v12) = v11;
                    }
                    ++result;
                    v19 = v6;
                    v25 = (unsigned int)__s1[v6];
                    v11 = __s1[v6];
                }
            }
        loc_8048FA4:
            if(param0 != -1) {
                v6 = param0;
                if(v6 != v19) {
                loc_8048FBB:
                    if(v16 && v15 && (unsigned int)(v15 + v19) <= param0) {
                        size_t v27 = v15;
                        v7 = v14;
                        char* ptr2 = &__s1[v19];
                        char v28 = 1;
                        while(v27 != 0) {
                            v28 = *ptr2 == *(char*)v7;
                            ++ptr2;
                            ++v7;
                            --v27;
                            if(!v28) {
                                break;
                            }
                        }
                        if(v28) {
                            if(result < v13) {
                                *(char*)(result + v12) = 92;
                            }
                            ++result;
                        }
                    }
                    char v29 = __s1[v19];
                    v11 = __s1[v19];
                    switch((unsigned int)v29) {
                        case 0: {
                            goto loc_80493E4;
                        }
                        case 7: {
                            v0 = (unsigned int)97 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            goto loc_80492C6;
                        }
                        case 8: {
                            v0 = (unsigned int)98 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            goto loc_80492C6;
                        }
                        case 9: {
                            v0 = (unsigned int)116 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                        loc_80492B8:
                            if(param1 == 1) {
                                return (size_t)quotearg_buffer_restyled((int)param0, 2, param2);
                            }
                        loc_80492C6:
                            v6 = v19 + 1;
                            if(!v16) {
                                goto loc_8049296;
                            }
                            else {
                                v11 = (char)v0;
                                goto loc_8049271;
                            }
                        }
                        case 10: {
                            v0 = (unsigned int)110 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            goto loc_80492B8;
                        }
                        case 11: {
                            v0 = (unsigned int)118 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            goto loc_80492C6;
                        }
                        case 12: {
                            v0 = (unsigned int)102 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            goto loc_80492C6;
                        }
                        case 13: {
                            v0 = (unsigned int)114 | ((unsigned int)(((unsigned int)v29 >>> 8) & 0xffffff) << 8);
                            if(param1 != 1) {
                                goto loc_80492C6;
                            }
                            else {
                                return (size_t)quotearg_buffer_restyled((int)param0, 2, param2);
                            loc_80493E4:
                                v6 = v19 + 1;
                                if(!v16) {
                                    goto loc_8049296;
                                }
                                else {
                                    if(result < v13) {
                                        *(char*)(result + v12) = 92;
                                    }
                                    ++result;
                                    if(result < v13) {
                                        *(char*)(result + v12) = 48;
                                    }
                                    ++result;
                                    if(result < v13) {
                                        *(char*)(result + v12) = 48;
                                    }
                                    ++result;
                                    v11 = '0';
                                    goto loc_8049248;
                                loc_804950D:
                                    v11 = v1;
                                    char v30 = result < v13;
                                    v19 = v2;
                                    if(v30) {
                                        *(char*)(result + v12) = 63;
                                    }
                                    ++result;
                                    if(result < v13) {
                                        *(char*)(result + v12) = 92;
                                    }
                                    ++result;
                                }
                            }
                            if(result < v13) {
                                *(char*)(result + v12) = 63;
                            }
                            ++result;
                            goto loc_8049248;
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
                        case 62: 
                        case 91: 
                        case 94: 
                        case 96: 
                        case 124: {
                            goto loc_8049238;
                        }
                        case 35: 
                        case 126: {
                            goto loc_8049232;
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
                        case 61: 
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
                        case 122: 
                        case 123: 
                        case 125: {
                            goto loc_8049248;
                        }
                        case 39: {
                            goto loc_8049325;
                        }
                        case 63: {
                            if(param1 != 1) {
                                if(param1 == 3) {
                                    v2 = v19 + 2;
                                    if(v2 < param0) {
                                        size_t v31 = v19;
                                        if(__s1[v31 + 1] == 63) {
                                            v1 = __s1[v31 + 2];
                                            switch((unsigned int)((int)v1 - 33)) {
                                                case 0: 
                                                case 6: 
                                                case 7: 
                                                case 8: 
                                                case 12: 
                                                case 14: 
                                                case 27: 
                                                case 28: 
                                                case 29: {
                                                    goto loc_804950D;
                                                }
                                                default: {
                                                    goto loc_8049248;
                                                }
                                            }
                                        loc_8049325:
                                            if(param1 == 1) {
                                                return (size_t)quotearg_buffer_restyled((int)param0, 2, param2);
                                            }
                                            else if(param1 == 2) {
                                                if(result < v13) {
                                                    *(char*)(result + v12) = 39;
                                                }
                                                ++result;
                                                if(result < v13) {
                                                    *(char*)(result + v12) = 92;
                                                }
                                                ++result;
                                                if(result < v13) {
                                                    *(char*)(result + v12) = 39;
                                                }
                                                ++result;
                                            }
                                        }
                                    }
                                }
                                goto loc_8049248;
                            }
                            else {
                                return (size_t)quotearg_buffer_restyled((int)param0, 2, param2);
                            }
                        }
                        case 92: {
                            v0 = (unsigned int)v11;
                            goto loc_80492B8;
                        }
                        default: {
                            goto loc_8049025;
                        }
                    }
                }
            }
            else if(__s1[v19]) {
                goto loc_8048FBB;
            }
            if(v14) {
                char v32 = *(char*)v14;
                if(v32) {
                    goto loc_804913C;
                loc_8049232:
                    if(v19) {
                        goto loc_8049248;
                    }
                    else {
                    loc_8049238:
                        if(param1 != 1) {
                            goto loc_8049248;
                        }
                        else {
                            return (size_t)quotearg_buffer_restyled((int)param0, 2, param2);
                        loc_804913C:
                            do {
                                if(result < v13) {
                                    *(char*)(result + v12) = v32;
                                }
                                ++v14;
                                ++result;
                                v32 = *(char*)v14;
                            }
                            while(v32);
                        }
                    }
                }
            }
            if(result < v13) {
                *(char*)(result + v12) = 0;
            }
            return result;
        }
    loc_8049248:
        v6 = v19 + 1;
        if((!v16 || !((unsigned char)(*(int*)((unsigned int)(v11 >>> 5) * 4 + param2 + 4) >> ((unsigned int)v11 & 0x1f)) & 0x1))) {
        loc_8049296:
            if(result < v13) {
                *(char*)(result + v12) = v11;
            }
            ++result;
            v19 = v6;
            goto loc_8048FA4;
        }
        else {
        loc_8049271:
            if(result < v13) {
                *(char*)(result + v12) = 92;
            }
            ++result;
            v6 = v19 + 1;
            goto loc_8049296;
        }
    }
}

int quotearg_char(int param0, char param1) {
    unsigned char v0;
    set_char_quoting(&v0, param1, 1);
    return quotearg_n_options((int*)&v0);
}

int quotearg_colon(int param0) {
    return quotearg_char(param0, ':');
}

int quotearg_n(int param0) {
    return quotearg_n_options((int*)&default_quoting_options);
}

int quotearg_n_options(int* param0) {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    unsigned int v5 = v1;
    int v6 = v3;
    int v7 = v0;
    int* ptr0 = →__errno_location();
    int v8 = ptr0[0];
    if(v5 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(nslots.1 <= v5) {
        unsigned int v9 = v5 + 1;
        if(v9 > 0x1fffffff) {
            /*NO_RETURN*/ xalloc_die();
        }
        void* __ptr = slotvec.3;
        if(__ptr == &slotvec0.2) {
            void* ptr1 = xmalloc(8);
            slotvec.3 = ptr1;
            __ptr = ptr1;
            int v10 = *(int*)&slotvec0.2;
            *(int*)((int)__ptr + 4) = *(int*)((char*)&slotvec0.2 + 4);
            *(int*)__ptr = v10;
        }
        void* ptr2 = xrealloc(__ptr, (size_t)(v9 * 8));
        slotvec.3 = ptr2;
        unsigned int v11 = nslots.1;
        int* ptr3 = (int*)(v11 * 8 + (int)ptr2);
        unsigned int v12 = (v9 - v11) * 8;
        if(v12 > 7 && (int*)((int)ptr3 & 0x4)) {
            *ptr3 = 0;
            v12 -= 4;
            ++ptr3;
        }
        for(int i = v12 >>> 2; i != 0; --i) {
            *ptr3 = 0;
            ++ptr3;
        }
        nslots.1 = v9;
    }
    unsigned int v13 = slotvec.3;
    int v14 = *(int*)(v5 * 8 + v13);
    int result = *(int*)(v5 * 8 + v13 + 4);
    int v15 = quotearg_buffer(result, v14, v6, v7, param0);
    if((unsigned int)v15 >= (unsigned int)v14) {
        unsigned int v16 = slotvec.3;
        *(size_t*)(v5 * 8 + v16) = (size_t)(v15 + 1);
        if(result != &slot0.0) {
            →free((void*)result);
            v16 = slotvec.3;
        }
        result = (int)xmalloc((size_t)(v15 + 1));
        *(int*)(v5 * 8 + v16 + 4) = result;
        quotearg_buffer(result, (int)(size_t)(v15 + 1), v6, v7, param0);
    }
    int* ptr4 = →__errno_location();
    ptr4[0] = v8;
    return result;
}

int quotearg_n_style(int param0, int param1) {
    char v0;
    int v1;
    quoting_options_from_style(v1, param1);
    return quotearg_n_options(&v0);
}

int quotearg_n_style_mem(int param0, int param1) {
    char v0;
    int v1;
    quoting_options_from_style(v1, param1);
    return quotearg_n_options(&v0);
}

int quotearg_style(int param0, int param1) {
    return quotearg_n_style(0, param0);
}

int* quoting_options_from_style(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int* result;
    int v8 = 8;
    int v9 = param1;
    int* ptr0 = &v0;
    while(v8 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v8;
    }
    *result = v9;
    *(result + 1) = v0;
    *(result + 2) = v4;
    *(result + 3) = v1;
    *(result + 4) = v5;
    *(result + 5) = v2;
    *(result + 6) = v6;
    *(result + 7) = v3;
    *(result + 8) = v7;
    return result;
}

int set_char_quoting(int param0, char param1, int param2) {
    int result;
    int* ptr0 = (int*)((unsigned int)(param1 >>> 5) * 4 + param0 + 4);
    if(param0) {
        int v0 = *ptr0;
        result = (v0 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *ptr0 = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v0;
    }
    else {
        int v1 = *(int*)((unsigned int)(param1 >>> 5) * 4 + &gvar_804B924);
        result = (v1 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *(int*)((unsigned int)(param1 >>> 5) * 4 + &gvar_804B924) = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v1;
    }
    return result;
}

unsigned char set_quoting_style(unsigned int* param0, unsigned char param1) {
    if(param0) {
        unsigned char result = param1;
        *param0 = param1;
        return result;
    }
    *(int*)&default_quoting_options = param1;
    return param1;
}

void sub_80487C8() {
    jump gvar_804B74C;
}

void sub_8048A4E() {
}

void sub_8048C59(int param0, int param1, int param2, int param3, int param4) {
    char v0;
    int v1;
    int v2;
    *(int*)(v1 - 16) = *(int*)(v2 + 4);
    while(1) {
        char* ptr0 = *(unsigned int*)(v1 - 16);
        char* ptr1 = "--version";
        int v3 = 10;
        while(v3 != 0) {
            v0 = *ptr0 == *ptr1;
            ++ptr0;
            ++ptr1;
            --v3;
            if(!v0) {
                break;
            }
        }
        if(v0) {
            v0 = 1;
            param4 = 0;
            FILE* ptr2 = stdout;
            param3 = "Jim Meyering";
            version_etc(ptr2, "true", &gvar_804A099, "5.2.1");
        }
        /*NO_RETURN*/ →exit(0);
    }
}

int sub_8048D5E(int param0) {
    jump param0;
}

int sub_8049BDE() {
    /*NO_RETURN*/ xalloc_die();
}

int usage(int __status) {
    char* __format = →dcgettext(NULL, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    unsigned int v0 = program_name;
    →printf(__format, v0, v0);
    char* __s = →dcgettext(NULL, "      --help     display this help and exit\n", 5);
    →fputs_unlocked(__s, stdout);
    char* __s1 = →dcgettext(NULL, "      --version  output version information and exit\n", 5);
    →fputs_unlocked(__s1, stdout);
    char* __format1 = →dcgettext(NULL, "\nReport bugs to <%s>.\n", 5);
    →printf(__format1, "bug-coreutils@gnu.org");
    /*NO_RETURN*/ →exit(__status);
}

int version_etc(FILE* param0, FILE* param1, int param2, int param3) {
    char v0;
    return version_etc_va(param0, param1, param2, param3, &v0);
}

int version_etc_va(FILE* param0, FILE* param1, int param2, int param3, __gnuc_va_list __arg) {
    char* ptr0;
    char* __msgid;
    int v0;
    unsigned int v1 = 0;
    FILE* __stream = param0;
    int v2 = param2;
    int* ptr1 = (int*)(__arg + 4);
    int v3 = param3;
    if(*(int*)__arg) {
        do {
            ++v1;
            v0 = *ptr1;
            ++ptr1;
        }
        while(v0);
    }
    if(param1) {
        →fprintf(__stream, "%s (%s) %s\n", param1, v2, v3);
    loc_804993C:
        switch(v1) {
            case 0: {
                /*NO_RETURN*/ →abort();
                →fprintf(__stream, "%s %s\n", v2, v3);
                goto loc_804993C;
            }
            case 1: {
                ptr0 = "Written by %s.\n";
            loc_8049951:
                __msgid = ptr0;
            loc_804995C:
                char* __format = →dcgettext(NULL, __msgid, 5);
                →vfprintf(__stream, __format, __arg);
                char* ptr2 = __stream->_IO_write_ptr;
                if(__stream->_IO_write_end > ptr2) {
                    ptr2[0] = 10;
                    ++__stream->_IO_write_ptr;
                }
                else {
                    →__overflow((_IO_FILE*)__stream, 10);
                }
                int result = →fputs_unlocked(version_etc_copyright, __stream);
                char* ptr3 = __stream->_IO_write_ptr;
                if(__stream->_IO_write_end > ptr3) {
                    ptr3[0] = 10;
                    ++__stream->_IO_write_ptr;
                }
                else {
                    →__overflow((_IO_FILE*)__stream, 10);
                }
                char* __s = →dcgettext(NULL, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
                →fputs_unlocked(__s, __stream);
                return result;
            }
            case 2: {
                __msgid = "Written by %s and %s.\n";
                goto loc_804995C;
            }
            case 3: {
                ptr0 = "Written by %s, %s, and %s.\n";
                goto loc_8049951;
            }
            case 4: {
                ptr0 = "Written by %s, %s, %s,\nand %s.\n";
                goto loc_8049951;
            }
            case 5: {
                ptr0 = "Written by %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049951;
            }
            case 6: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                goto loc_804995C;
            }
            case 7: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                goto loc_804995C;
            }
            case 8: {
                ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
                goto loc_8049951;
            }
            case 9: {
                ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049951;
            }
        }
        ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        goto loc_8049951;
    }
    else {
        →fprintf(__stream, "%s %s\n", v2, v3);
        goto loc_804993C;
    }
}

unsigned int x2nrealloc(void* param0, unsigned int* param1, unsigned int param2) {
    unsigned int result;
    unsigned int v0;
    void* __ptr = param0;
    unsigned int v1 = v0;
    unsigned int v2 = *param1;
    unsigned int v3 = param2;
    if(__ptr) {
        if(0x7fffffff / v3 < v2) {
            /*NO_RETURN*/ xalloc_die();
        }
        v2 *= 2;
    }
    else if(!v2) {
        result = 64 / v3;
        v2 = (unsigned int)((result ? 0: 1) + result);
    }
    *param1 = v2;
    xrealloc(__ptr, (size_t)(v2 * v3));
    return result;
}

size_t x2realloc(void* param0, unsigned int* param1) {
    void* __ptr = param0;
    size_t __size = *param1;
    if(__ptr) {
        if(__size >= 0x80000000) {
            /*NO_RETURN*/ xalloc_die();
        }
        __size *= 2;
    }
    else if(!__size) {
        __size = 64;
    }
    *param1 = __size;
    xrealloc(__ptr, __size);
    return __size;
}

void xalloc_die() {
    unsigned int v0 = xalloc_fail_func;
    if(!v0) {
    loc_8049B48:
        char* ptr0 = →dcgettext(NULL, (char*)&xalloc_msg_memory_exhausted, 5);
        →error(exit_failure, 0, (char*)&gvar_804A0BC, ptr0);
        /*NO_RETURN*/ →abort();
    }
    v0();
    goto loc_8049B48;
}

void* xcalloc(size_t __nmemb, size_t __size) {
    if(0xffffffff / __size >= __nmemb) {
        void* result = →calloc(__nmemb, __size);
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ xalloc_die();
}

int xclone(FUNCPTR __fn, void* __child_stack, int __flags, void* __arg, ...) {
    void* __dest = xmalloc((size_t)__child_stack);
    return (int)→memcpy(__dest, __fn, (size_t)__child_stack);
}

void* xmalloc(size_t __size) {
    void* result = →malloc(__size);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

void* xnmalloc(unsigned int param0, unsigned int param1) {
    if(0xffffffff / param1 >= param0) {
        void* result = →malloc((size_t)(param0 * param1));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ xalloc_die();
}

void* xnrealloc(void* __ptr, unsigned int param1, unsigned int param2) {
    void* ptr0;
    void* ptr1 = ptr0;
    if(0xffffffff / param2 >= param1) {
        void* result = →realloc(__ptr, (size_t)(param1 * param2));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ xalloc_die();
}

void* xrealloc(void* __ptr, size_t __size) {
    void* result = →realloc(__ptr, __size);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

void* xzalloc(size_t __size) {
    void* __s = xmalloc(__size);
    return →memset(__s, 0, __size);
}
