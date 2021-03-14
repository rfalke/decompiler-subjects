
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    return →__cxa_atexit();
}

int cat(void* __buf, size_t __nbytes, void* __dest, size_t __n, int param4, int param5, int param6, int param7, int param8, int param9) {
    char v0;
    char v1;
    size_t __n1;
    char v2 = (unsigned char)param4;
    char v3 = (unsigned char)param5;
    char v4 = (unsigned char)param6;
    char v5 = (unsigned char)param7;
    char v6 = (unsigned char)param8;
    char v7 = (unsigned char)param9;
    int v8 = newlines2;
    char v9 = 1;
    void* ptr0 = __buf;
    void* ptr1 = (void*)((int)ptr0 + 1);
    char* __dest1 = (char*)__dest;
loc_8049168:
    while(1) {
        if((unsigned int)(int*)((int)__dest + __n) <= (unsigned int)__dest1) {
            void* __src = __dest;
            do {
                int v10 = full_write(1, __src, __n);
                if(v10 != __n) {
                    char* __format = →gettext("write error");
                    int* ptr2 = →__errno_location();
                    →error(1, ptr2[0], __format);
                }
                __src = (void*)((int)__src + __n);
                __n1 = (size_t)((int)__dest1 - (int)__src);
            }
            while(__n1 >= __n);
            →memmove(__dest, __src, __n1);
            __dest1 = (char*)(__n1 + (int)__dest);
        }
        if(ptr0 < ptr1) {
            char v11 = 0;
            int v12 = 0;
            if(v9) {
                int v13 = →ioctl(input_desc, 21531, &v12);
                if(v13 < 0) {
                    int* ptr3 = →__errno_location();
                    if(ptr3[0] != 95) {
                        int* ptr4 = →__errno_location();
                        if(ptr4[0] != 25) {
                            int* ptr5 = →__errno_location();
                            if(ptr5[0] != 22) {
                                int* ptr6 = →__errno_location();
                                if(ptr6[0] != 19) {
                                    int* ptr7 = →__errno_location();
                                    if(ptr7[0] != 38) {
                                        int v14 = quote(infile);
                                        char* __format1 = →gettext("cannot do ioctl on %s");
                                        int* ptr8 = →__errno_location();
                                        →error(0, ptr8[0], __format1, v14);
                                        newlines2 = v8;
                                        v1 = 0;
                                        return (unsigned int)v1;
                                    }
                                }
                            }
                        }
                    }
                    v9 = 0;
                }
            }
            if(v12) {
                v11 = 1;
            }
            if(v11) {
                write_pending(__dest, &__dest1);
            }
            ssize_t v15 = safe_read(input_desc, __buf, __nbytes);
            if(v15 == -1) {
                unsigned int v16 = infile;
                int* ptr9 = →__errno_location();
                →error(0, ptr9[0], (char*)&gvar_8050132, v16);
                write_pending(__dest, &__dest1);
                newlines2 = v8;
                v1 = 0;
                return (unsigned int)v1;
            }
            else if(!v15) {
                write_pending(__dest, &__dest1);
                newlines2 = v8;
                v1 = 1;
                return (unsigned int)v1;
            }
            ptr1 = __buf;
            ptr0 = (void*)(v15 + (int)ptr1);
            *(char*)ptr0 = 10;
        }
        else {
            ++v8;
            if(v8 > 0) {
                if(v8 > 1) {
                    v8 = 2;
                    if(v7) {
                        v0 = *(char*)ptr1;
                        ptr1 = (void*)((int)ptr1 + 1);
                        goto loc_8049434;
                    }
                }
                if((unsigned char)(((unsigned int)v5 ^ 0x1) & (unsigned int)v4)) {
                    next_line_num();
                    __dest1 = →stpcpy(__dest1, line_num_print);
                }
            }
            if(v6) {
                __dest1[0] = '$';
                ++__dest1;
            }
            __dest1[0] = 10;
            ++__dest1;
        }
        v0 = *(char*)ptr1;
        ptr1 = (void*)((int)ptr1 + 1);
    loc_8049434:
        if(v0 != 10) {
            if(v8 >= 0 && v4) {
                next_line_num();
                __dest1 = →stpcpy(__dest1, line_num_print);
            }
            if(v2) {
                while(1) {
                    if((unsigned char)v0 > 31) {
                        if((unsigned char)v0 <= 126) {
                            __dest1[0] = v0;
                            ++__dest1;
                        }
                        else if(v0 == 127) {
                            __dest1[0] = '^';
                            __dest1[1] = '?';
                            __dest1 += 2;
                        }
                        else {
                            __dest1[0] = 'M';
                            __dest1[1] = '-';
                            __dest1 += 2;
                            if((unsigned char)v0 <= 159) {
                                char* ptr10 = __dest1;
                                ptr10[0] = '^';
                                ptr10[1] = v0 - 64;
                                __dest1 = ptr10 + 2;
                            }
                            else if(v0 != 0xff) {
                                char* ptr11 = __dest1;
                                ptr11[0] = v0 + 128;
                                __dest1 = ptr11 + 1;
                            }
                            else {
                                char* ptr12 = __dest1;
                                ptr12[0] = '^';
                                ptr12[1] = '?';
                                __dest1 = ptr12 + 2;
                            }
                        }
                    }
                    else if(v0 == 9 && !(unsigned char)(((unsigned int)v3 ^ 0x1) ^ 0x1)) {
                        __dest1[0] = 9;
                        ++__dest1;
                    }
                    else if(v0 == 10) {
                        v8 = -1;
                        continue loc_8049168;
                    }
                    else {
                        __dest1[0] = '^';
                        __dest1[1] = v0 + 64;
                        __dest1 += 2;
                    }
                    v0 = *(char*)ptr1;
                    ptr1 = (void*)((int)ptr1 + 1);
                }
            }
            while(1) {
                if(v0 == 9 && !(unsigned char)((unsigned int)v3 ^ 0x1)) {
                    __dest1[0] = '^';
                    __dest1[1] = v0 + 64;
                    __dest1 += 2;
                    goto loc_80495E6;
                }
                if(v0 == 10) {
                    break;
                }
                else {
                    __dest1[0] = v0;
                    ++__dest1;
                loc_80495E6:
                    v0 = *(char*)ptr1;
                    ptr1 = (void*)((int)ptr1 + 1);
                }
            }
            v8 = -1;
        }
    }
}

void* clone_quoting_options(void* param0) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    void* result = xmemdup(param0 != 0 ? param0: (void*)&default_quoting_options, 36);
    int* ptr1 = →__errno_location();
    ptr1[0] = v0;
    return result;
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
            →error(0, ptr2[0], (char*)&gvar_80505E2, ptr0);
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
    loc_804B4CF:
        if((unsigned char)((unsigned int)v5 ^ 0x1)) {
            int* ptr0 = →__errno_location();
            ptr0[0] = 0;
        }
        result = -1;
    }
    else if(!(unsigned char)((unsigned int)(v4 ? 1: 0) ^ 0x1)) {
        if(!v1) {
            int* ptr1 = →__errno_location();
            if(ptr1[0] == 9) {
                return 0;
            }
        }
        goto loc_804B4CF;
    }
    else {
        result = 0;
    }
    return result;
}

int emit_bug_reporting_address() {
    char* __format = →gettext("\nReport bugs to <%s>.\n");
    return →printf(__format, "bug-coreutils@gnu.org");
}

int* fseterr(int* param0) {
    int* result = param0;
    *result = *param0 | 0x20;
    return result;
}

int fstat64(int __fd, stat64* __buf) {
    return →__fxstat64(3, __fd, __buf);
}

int full_write(int __fd, void* param1, size_t __n) {
    int result = 0;
    void* __buf = param1;
    while(__n) {
        ssize_t v0 = safe_write(__fd, __buf, __n);
        if(v0 == -1) {
            return result;
        }
        else if(!v0) {
            int* ptr0 = →__errno_location();
            ptr0[0] = 28;
            return result;
        }
        result += v0;
        __buf = (void*)(v0 + (int)__buf);
        __n -= v0;
    }
    return result;
}

int get_quoting_style(unsigned int* param0) {
    int* ptr0 = param0 != 0 ? param0: (int*)&default_quoting_options;
    return (int)(param0 != 0 ? *param0: *(int*)&default_quoting_options);
}

char* gettext_quote(char* __msgid, int param1) {
    char* result = →gettext(__msgid);
    if(result == __msgid && param1 == 6) {
        result = (char*)&gvar_805067C;
    }
    return result;
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
        int v4 = (((unsigned int)((v1 >>> 10) & 0x1 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & ((unsigned int)((v1 >>> 14) & 0x1 ? 1: 0) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8))) ^ 0x1;
        if(!(unsigned char)v4) {
            fldz();
            fucompp();
            (unsigned short)v5 = fnstsw((unsigned short)v4);
            if(((v0 >>> 10) & 0x1) || !((v0 >>> 14) & 0x1)) {
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

int main(int param0, int param1) {
    int v0;
    char* __format2;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    size_t v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13 = v5;
    int v14 = v12;
    int* ptr0 = &param0;
    int* ptr1 = &param0;
    unsigned int v15 = (unsigned int)→getpagesize();
    char v16 = 1;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    char v21 = 0;
    char v22 = 0;
    char v23 = 0;
    char v24 = 0;
    int __oflag = 0;
    program_name = **(unsigned int**)(ptr1 + 1);
    →setlocale(6, (char*)&gvar_8050260);
    →bindtextdomain("coreutils", "/usr/local/share/locale");
    →textdomain("coreutils");
    atexit((void __cdecl (*_)())&close_stdout);
loc_80498C8:
    int v25 = →getopt_long(*ptr1, *(char***)(ptr1 + 1), "benstuvAET", (option*)&long_options.4647, NULL);
    while(v25 != -1) {
        int v26 = v25;
        switch(v26) {
            case 65: {
                v23 = 1;
                v22 = 1;
                v24 = 1;
                goto loc_80498C8;
            }
            case 69: {
                v22 = 1;
                goto loc_80498C8;
            }
            case 84: {
                v24 = 1;
                goto loc_80498C8;
            }
        }
    }
    int v27 = fstat64(1, &v9);
    if(v27 < 0) {
        char* __format = →gettext("standard output");
        int* ptr2 = →__errno_location();
        →error(1, ptr2[0], __format);
    }
    size_t v28 = (int)v7 > 0 && v7 <= 0x20000000 ? v7: 0x200;
    size_t __n = (int)v7 > 0 && v7 <= 0x20000000 ? v7: 0x200;
    if((v10 & 0xf000) == 0x8000) {
        v4 = v9;
        v3 = v8;
        v2 = v6;
        v1 = v11;
    }
    else {
        v17 = 0;
    }
    infile = &gvar_80502DB;
    int v29 = optind;
    do {
        if(*ptr1 > v29) {
            infile = *(unsigned int*)(v29 * 4 + *(ptr1 + 1));
        }
        int v30 = →strcmp(infile, (char*)&gvar_80502DB);
        if(!v30) {
            v18 = 1;
            input_desc = 0;
            goto loc_8049A59;
        }
        else {
            int v31 = →open64(infile, __oflag);
            input_desc = v31;
            if(input_desc >= 0x80000000) {
                __format2 = infile;
                int* ptr3 = →__errno_location();
                →error(0, ptr3[0], (char*)&gvar_8050132, __format2);
                v16 = 0;
            }
            else {
            loc_8049A59:
                int v32 = fstat64(input_desc, &v9);
                if(v32 < 0) {
                    __format2 = infile;
                    int* ptr4 = →__errno_location();
                    →error(0, ptr4[0], (char*)&gvar_8050132, __format2);
                    v16 = 0;
                }
                else {
                    size_t v33 = (int)v7 > 0 && v7 <= 0x20000000 ? v7: 0x200;
                    size_t __nbytes = (int)v7 > 0 && v7 <= 0x20000000 ? v7: 0x200;
                    if(v17 && !((v9 ^ v4) | (v8 ^ v3)) && !((v6 ^ v2) | (v11 ^ v1)) && input_desc) {
                        __format2 = infile;
                        char* __format1 = →gettext("%s: input file is output file");
                        →error(0, 0, __format1, __format2);
                        v16 = 0;
                    }
                    else {
                        if(!((unsigned int)v24 | (unsigned int)v23 | (unsigned int)v22 | (unsigned int)v21 | (unsigned int)v19)) {
                            size_t v34 = __nbytes;
                            size_t v35 = __n;
                            if(v34 > v35) {
                                v35 = v34;
                            }
                            __nbytes = v35;
                            v0 = (int)xmalloc((size_t)(v15 + __nbytes - 1));
                            unsigned int v36 = ptr_align(v0, v15);
                            int v37 = simple_cat((void*)v36, __nbytes);
                            v16 = (unsigned char)(int*)((int)(char*)v16 & v37) ? 1: 0;
                        }
                        else {
                            v0 = (int)xmalloc((size_t)(v15 + __nbytes));
                            int v38 = (int)xmalloc((size_t)(__nbytes * 4 + v15 + (__n + 18)));
                            int v39 = (int)v20;
                            int v40 = (int)v19;
                            int v41 = (int)v24;
                            int v42 = (int)v23;
                            void* __dest = (void*)ptr_align(v38, v15);
                            unsigned int v43 = ptr_align(v0, v15);
                            int v44 = cat((void*)v43, __nbytes, __dest, __n, v42, v41, v40, v39, (int)v22, (int)v21);
                            v16 = (unsigned char)(int*)((int)(char*)v16 & v44) ? 1: 0;
                            →free((void*)v38);
                        }
                        →free((void*)v0);
                    }
                }
                int v45 = →strcmp(infile, (char*)&gvar_80502DB);
                if(v45) {
                    int v46 = →close(input_desc);
                    if(v46 < 0) {
                        __format2 = infile;
                        int* ptr5 = →__errno_location();
                        →error(0, ptr5[0], (char*)&gvar_8050132, __format2);
                        v16 = 0;
                    }
                }
            }
        }
        ++v29;
    }
    while(*ptr1 > v29);
    if(v18) {
        int v47 = →close(0);
        if(v47 < 0) {
            __format2 = →gettext("closing standard input");
            int* ptr6 = →__errno_location();
            →error(1, ptr6[0], __format2);
        }
    }
    /*NO_RETURN*/ →exit(v16 != 0 ? 0: 1);
}

char* next_line_num() {
    char* result;
    char* ptr0 = line_num_end;
    do {
        int v0 = (unsigned int)*ptr0;
        result = ptr0;
        *result = (unsigned char)v0 + 1;
        if((unsigned char)v0 <= 56) {
            return result;
        }
        *ptr0 = 48;
        --ptr0;
    }
    while(line_num_start <= (unsigned int)ptr0);
    if(line_num_start > &line_buf) {
        --line_num_start;
        *line_num_start = 49;
    }
    else {
        line_buf = 62;
    }
    result = line_num_print;
    if(line_num_start < (unsigned int)result) {
        result = (char*)(line_num_print - 1);
        line_num_print = (char*)(line_num_print - 1);
    }
    return result;
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
                goto loc_804ED23;
            }
            case 3: {
                unsigned int* ptr3 = param0;
                param0 = ptr3 + 1;
                *(short*)(i + 1) = (unsigned short)*ptr3;
                goto loc_804ED23;
            }
            case 4: {
                unsigned int* ptr4 = param0;
                param0 = ptr4 + 1;
                *(short*)(i + 1) = (unsigned short)*ptr4;
                goto loc_804ED23;
            }
            case 5: {
                unsigned int* ptr5 = param0;
                param0 = ptr5 + 1;
                *(i + 1) = *ptr5;
                goto loc_804ED23;
            }
            case 6: {
                unsigned int* ptr6 = param0;
                param0 = ptr6 + 1;
                *(i + 1) = *ptr6;
                goto loc_804ED23;
            }
            case 7: {
                unsigned int* ptr7 = param0;
                param0 = ptr7 + 1;
                *(i + 1) = *ptr7;
                goto loc_804ED23;
            }
            case 8: {
                unsigned int* ptr8 = param0;
                param0 = ptr8 + 1;
                *(i + 1) = *ptr8;
                goto loc_804ED23;
            }
            case 9: {
                unsigned int* ptr9 = param0;
                param0 = ptr9 + 2;
                ptr0 = *(ptr9 + 1);
                *(int*)(i + 1) = *ptr9;
                *(i + 2) = ptr0;
                goto loc_804ED23;
            }
            case 10: {
                unsigned int* ptr10 = param0;
                param0 = ptr10 + 2;
                ptr0 = *(ptr10 + 1);
                *(int*)(i + 1) = *ptr10;
                *(i + 2) = ptr0;
                goto loc_804ED23;
            }
            case 11: {
                ptr0 = (double*)param0;
                param0 = (unsigned int*)(ptr0 + 1);
                *(long long*)(i + 1) = *ptr0;
                goto loc_804ED23;
            }
            case 12: {
                unsigned int* ptr11 = param0;
                param0 = ptr11 + 3;
                unsigned int* ptr12 = *(ptr11 + 2);
                ptr0 = *(ptr11 + 1);
                *(int*)(i + 1) = *ptr11;
                *(i + 2) = ptr0;
                *(i + 3) = ptr12;
                goto loc_804ED23;
            }
            case 13: {
                unsigned int* ptr13 = param0;
                param0 = ptr13 + 1;
                *(i + 1) = *ptr13;
                goto loc_804ED23;
            }
            case 14: {
                unsigned int* ptr14 = param0;
                param0 = ptr14 + 1;
                *(i + 1) = *ptr14;
                goto loc_804ED23;
            }
            case 15: {
                unsigned int* ptr15 = param0;
                param0 = ptr15 + 1;
                *(i + 1) = *ptr15;
                if(!*(int*)(i + 1)) {
                    *(int*)(i + 1) = "(NULL)";
                }
                goto loc_804ED23;
            }
            case 16: {
                unsigned int* ptr16 = param0;
                param0 = ptr16 + 1;
                *(i + 1) = *ptr16;
                if(!*(int*)(i + 1)) {
                    *(int*)(i + 1) = &wide_null_string.1636;
                }
                goto loc_804ED23;
            }
            case 17: {
                unsigned int* ptr17 = param0;
                param0 = ptr17 + 1;
                *(i + 1) = *ptr17;
                goto loc_804ED23;
            }
            case 18: {
                unsigned int* ptr18 = param0;
                param0 = ptr18 + 1;
                *(i + 1) = *ptr18;
                goto loc_804ED23;
            }
            case 19: {
                unsigned int* ptr19 = param0;
                param0 = ptr19 + 1;
                *(i + 1) = *ptr19;
                goto loc_804ED23;
            }
            case 20: {
                unsigned int* ptr20 = param0;
                param0 = ptr20 + 1;
                *(i + 1) = *ptr20;
                goto loc_804ED23;
            }
            case 21: {
                unsigned int* ptr21 = param0;
                param0 = ptr21 + 1;
                *(i + 1) = *ptr21;
                goto loc_804ED23;
            }
            case 22: {
                unsigned int* ptr22 = param0;
                param0 = ptr22 + 1;
                *(i + 1) = *ptr22;
                goto loc_804ED23;
            }
            default: {
                return -1;
            }
        }
        unsigned int* ptr23 = param0;
        param0 = ptr23 + 1;
        *(char*)(i + 1) = (unsigned char)*ptr23;
    loc_804ED23:
        ++v0;
    }
    return 0;
}

int printf_parse(char* param0, unsigned int* param1, unsigned int* param2) {
    unsigned int v0;
    int v1;
    unsigned int* ptr0;
    int v2;
    char v3;
    char* ptr1 = param0;
    int v4 = 0;
    unsigned int v5 = 0;
    unsigned int v6 = 0;
    *param1 = 0;
    unsigned int v7 = 1;
    void* ptr2 = →malloc(44);
    *(void**)(param1 + 1) = ptr2;
    if(*(int*)(param1 + 1)) {
        *param2 = 0;
        unsigned int v8 = 0;
        *(int*)(param2 + 1) = 0;
    loc_804FADD:
        while(*ptr1) {
            v3 = *ptr1;
            ++ptr1;
            if(v3 == 37) {
                v2 = -1;
                ptr0 = (unsigned int*)(*param1 * 44 + *(int*)(param1 + 1));
                *ptr0 = (int*)(ptr1 - 1);
                *(int*)(ptr0 + 2) = 0;
                *(int*)(ptr0 + 3) = 0;
                *(int*)(ptr0 + 4) = 0;
                *(int*)(ptr0 + 5) = -1;
                *(int*)(ptr0 + 6) = 0;
                *(int*)(ptr0 + 7) = 0;
                *(int*)(ptr0 + 8) = -1;
                *(int*)(ptr0 + 10) = -1;
                if(*ptr1 > 47 && *ptr1 <= 57) {
                    char* i;
                    for(i = ptr1; (*i > 47 && *i <= 57); ++i) {
                    }
                    if(*i == 36) {
                        unsigned int v9 = 0;
                        for(i = ptr1; (*i > 47 && *i <= 57); ++i) {
                            int v10 = (int)*i - 48;
                            unsigned int v11 = v9 <= 0x19999999 ? (unsigned int)(v9 * 5 * 2): 0xffffffff;
                            v9 = xsum2(v11, v10);
                        }
                        if(!v9 || v9 == -1) {
                        loc_804FB21:
                            if(*(int*)(param2 + 1)) {
                                →free(*(void**)(param2 + 1));
                            }
                            if(*(int*)(param1 + 1)) {
                                →free(*(void**)(param1 + 1));
                            }
                            int* ptr3 = →__errno_location();
                            ptr3[0] = 22;
                            return -1;
                        }
                        v2 = v9 - 1;
                        ptr1 = i + 1;
                    }
                }
                goto loc_804EF44;
            }
        }
        *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr1;
        *(param1 + 2) = v5;
        *(param1 + 3) = v6;
        return 0;
    loc_804EF44:
        while(1) {
            switch(*ptr1) {
                case 39: {
                    goto loc_804EF54;
                }
                case 45: {
                    *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x2;
                    ++ptr1;
                    continue loc_804EF44;
                }
                case 43: {
                    *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x4;
                    ++ptr1;
                    continue loc_804EF44;
                }
                case 32: {
                    *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x8;
                    ++ptr1;
                    continue loc_804EF44;
                }
                case 35: {
                    *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x10;
                    ++ptr1;
                    continue loc_804EF44;
                }
                case 48: {
                    *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x20;
                    ++ptr1;
                    continue loc_804EF44;
                }
                case 42: {
                    *(ptr0 + 3) = ptr1;
                    ++ptr1;
                    *(ptr0 + 4) = ptr1;
                    if(!v5) {
                        v5 = 1;
                    }
                    if(*ptr1 <= 47 || *ptr1 > 57) {
                    loc_804F134:
                        if(*(int*)(ptr0 + 5) == -1) {
                            *(int*)(ptr0 + 5) = v4;
                            ++v4;
                            if(*(int*)(ptr0 + 5) == -1) {
                                goto loc_804FB21;
                            }
                        }
                        unsigned int v12 = *(ptr0 + 5);
                        if(v12 >= v8) {
                            unsigned int v13 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                            v8 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                            if(v12 >= v8) {
                                v8 = xsum2(v12, 1);
                            }
                            size_t v14 = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                            size_t __size = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                            if(__size == -1) {
                                goto loc_804FB68;
                            }
                            else {
                                void* ptr4 = *(int*)(param2 + 1) ? →realloc(*(void**)(param2 + 1), __size): →malloc(__size);
                                void* ptr5 = ptr4;
                                if(!ptr5) {
                                    goto loc_804FB68;
                                }
                                else {
                                    *(void**)(param2 + 1) = ptr5;
                                }
                            }
                        }
                        while(*param2 <= v12) {
                            int v15 = *param2;
                            *(int*)(v15 * 16 + *(int*)(param2 + 1)) = 0;
                            *param2 = v15 + 1;
                        }
                        if(!*(int*)(v12 * 16 + *(int*)(param2 + 1))) {
                            *(int*)(v12 * 16 + *(int*)(param2 + 1)) = 5;
                        }
                        else if(*(int*)(v12 * 16 + *(int*)(param2 + 1)) != 5) {
                            goto loc_804FB21;
                        }
                        goto loc_804F31B;
                    }
                    else {
                        char* j;
                        for(j = ptr1; (*j > 47 && *j <= 57); ++j) {
                        }
                        if(*j == 36) {
                            unsigned int v16 = 0;
                            for(j = ptr1; (*j > 47 && *j <= 57); ++j) {
                                int v17 = (int)*j - 48;
                                unsigned int v18 = v16 <= 0x19999999 ? (unsigned int)(v16 * 5 * 2): 0xffffffff;
                                v16 = xsum2(v18, v17);
                            }
                            if(!v16 || v16 == -1) {
                                goto loc_804FB21;
                            }
                            else {
                                *(int*)(ptr0 + 5) = v16 - 1;
                                ptr1 = j + 1;
                            }
                        }
                        goto loc_804F134;
                    }
                }
            }
            if(*ptr1 > 47 && *ptr1 <= 57) {
                *(ptr0 + 3) = ptr1;
                break;
            loc_804EF54:
                *(int*)(ptr0 + 2) = *(int*)(ptr0 + 2) | 0x1;
                ++ptr1;
            }
            else {
                goto loc_804F31B;
            }
        }
        while((*ptr1 > 47 && *ptr1 <= 57)) {
            ++ptr1;
        }
        *(ptr0 + 4) = ptr1;
        unsigned int v19 = (unsigned int)(*(int*)(ptr0 + 4) - *(int*)(ptr0 + 3));
        if(v19 > v5) {
            v5 = v19;
        }
    loc_804F31B:
        if(*ptr1 == 46) {
            ++ptr1;
            if(*ptr1 == 42) {
                *(ptr0 + 6) = (int*)(ptr1 - 1);
                ++ptr1;
                *(ptr0 + 7) = ptr1;
                if(v6 <= 1) {
                    v6 = 2;
                }
                if(*ptr1 > 47 && *ptr1 <= 57) {
                    char* k;
                    for(k = ptr1; (*k > 47 && *k <= 57); ++k) {
                    }
                    if(*k == 36) {
                        unsigned int v20 = 0;
                        for(k = ptr1; (*k > 47 && *k <= 57); ++k) {
                            int v21 = (int)*k - 48;
                            unsigned int v22 = v20 <= 0x19999999 ? (unsigned int)(v20 * 5 * 2): 0xffffffff;
                            v20 = xsum2(v22, v21);
                        }
                        if(!v20 || v20 == -1) {
                            goto loc_804FB21;
                        }
                        else {
                            *(int*)(ptr0 + 8) = v20 - 1;
                            ptr1 = k + 1;
                        }
                    }
                }
                if(*(int*)(ptr0 + 8) == -1) {
                    *(int*)(ptr0 + 8) = v4;
                    ++v4;
                    if(*(int*)(ptr0 + 8) == -1) {
                        goto loc_804FB21;
                    }
                }
                unsigned int v23 = *(ptr0 + 8);
                if(v23 >= v8) {
                    unsigned int v24 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                    v8 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                    if(v23 >= v8) {
                        v8 = xsum2(v23, 1);
                    }
                    size_t v25 = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                    size_t __size1 = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                    if(__size1 == -1) {
                        goto loc_804FB68;
                    }
                    else {
                        void* ptr6 = *(int*)(param2 + 1) ? →realloc(*(void**)(param2 + 1), __size1): →malloc(__size1);
                        void* ptr7 = ptr6;
                        if(!ptr7) {
                            goto loc_804FB68;
                        }
                        else {
                            *(void**)(param2 + 1) = ptr7;
                        }
                    }
                }
                while(*param2 <= v23) {
                    int v26 = *param2;
                    *(int*)(v26 * 16 + *(int*)(param2 + 1)) = 0;
                    *param2 = v26 + 1;
                }
                if(!*(int*)(v23 * 16 + *(int*)(param2 + 1))) {
                    *(int*)(v23 * 16 + *(int*)(param2 + 1)) = 5;
                }
                else if(*(int*)(v23 * 16 + *(int*)(param2 + 1)) != 5) {
                    goto loc_804FB21;
                }
            }
            else {
                *(ptr0 + 6) = (int*)(ptr1 - 1);
                while((*ptr1 > 47 && *ptr1 <= 57)) {
                    ++ptr1;
                }
                *(ptr0 + 7) = ptr1;
                unsigned int v27 = (unsigned int)(*(int*)(ptr0 + 7) - *(int*)(ptr0 + 6));
                if(v27 > v6) {
                    v6 = v27;
                }
            }
        }
        int v28 = 0;
    alab1:
        while(1) {
            switch(*ptr1) {
                case 104: {
                    goto loc_804F63C;
                }
                case 76: {
                    v28 |= 4;
                    ++ptr1;
                }
                case 108: {
                    v28 += 8;
                    ++ptr1;
                    continue loc_804F62B;
                }
                case 106: {
                    v28 += 16;
                    ++ptr1;
                    continue loc_804F62B;
                }
                case 90: 
                case 116: 
                case 122: {
                    ++ptr1;
                    continue loc_804F62B;
                }
                default: {
                    v3 = *ptr1;
                    ++ptr1;
                    unsigned int v29 = (unsigned int)((int)v3 - 37);
                    switch(v29) {
                        case 0: {
                            v1 = 0;
                            break alab1;
                        }
                        case 30: {
                            v1 = 14;
                            v3 = 99;
                            break alab1;
                        }
                        case 46: {
                            v1 = 16;
                            v3 = 115;
                            break alab1;
                        }
                        case 62: {
                            v1 = v28 > 7 ? 14: 13;
                            break alab1;
                        }
                        case 28: 
                        case 32: 
                        case 33: 
                        case 34: 
                        case 60: 
                        case 64: 
                        case 65: 
                        case 66: {
                            v1 = v28 > 15 || (v28 & 0x4) ? 12: 11;
                            break alab1;
                        }
                        case 63: 
                        case 68: {
                            break;
                        }
                        case 73: {
                            v1 = v28 > 15 || (v28 & 0x4) ? 22: v28 > 7 ? 21: (v28 & 0x2) != 0 ? 18: (unsigned char)(v28 & 0x1) != 0 ? 19: 20;
                            break alab1;
                        }
                        case 75: {
                            v1 = 17;
                            break alab1;
                        }
                        case 78: {
                            v1 = v28 > 7 ? 16: 15;
                            break alab1;
                        }
                        case 51: 
                        case 74: 
                        case 80: 
                        case 83: {
                            v1 = v28 > 15 || (v28 & 0x4) ? 10: v28 > 7 ? 8: (v28 & 0x2) != 0 ? 2: (unsigned char)(v28 & 0x1) != 0 ? 4: 6;
                            break alab1;
                        }
                        default: {
                            goto loc_804FB21;
                        }
                    }
                    v1 = v28 > 15 || (v28 & 0x4) ? 9: v28 > 7 ? 7: (v28 & 0x2) != 0 ? 1: (unsigned char)(v28 & 0x1) != 0 ? 3: 5;
                }
            }
            if(!v1) {
                goto loc_804FA28;
            }
            else {
                *(int*)(ptr0 + 10) = v2;
                if(*(int*)(ptr0 + 10) == -1) {
                    *(int*)(ptr0 + 10) = v4;
                    ++v4;
                    if(*(int*)(ptr0 + 10) == -1) {
                        goto loc_804FB21;
                    }
                }
                v0 = *(ptr0 + 10);
                if(v0 < v8) {
                    break;
                }
                else {
                    unsigned int v30 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                    v8 = v8 < 0x80000000 ? v8 * 2: 0xffffffff;
                    if(v0 >= v8) {
                        v8 = xsum2(v0, 1);
                    }
                    size_t v31 = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                    size_t __size2 = v8 <= 0xfffffff ? (size_t)(v8 * 16): 0xffffffff;
                    if(__size2 == -1) {
                        goto loc_804FB68;
                    }
                    else {
                        void* ptr8 = *(int*)(param2 + 1) ? →realloc(*(void**)(param2 + 1), __size2): →malloc(__size2);
                        void* ptr9 = ptr8;
                        if(!ptr9) {
                            goto loc_804FB68;
                        }
                        else {
                            *(void**)(param2 + 1) = ptr9;
                            break;
                        loc_804F63C:
                            v28 |= 1 << (v28 & 0x1);
                            ++ptr1;
                        }
                    }
                }
            }
        }
        while(*param2 <= v0) {
            int v32 = *param2;
            *(int*)(v32 * 16 + *(int*)(param2 + 1)) = 0;
            *param2 = v32 + 1;
        }
        if(!*(int*)(v0 * 16 + *(int*)(param2 + 1))) {
            *(int*)(v0 * 16 + *(int*)(param2 + 1)) = v1;
            goto loc_804FA28;
        }
        if(*(int*)(v0 * 16 + *(int*)(param2 + 1)) != v1) {
            goto loc_804FB21;
        }
        else {
        loc_804FA28:
            *(char*)(ptr0 + 9) = v3;
            *(ptr0 + 1) = ptr1;
            *param1 = *param1 + 1;
            if(*param1 < v7) {
                goto loc_804FADD;
            }
            else {
                unsigned int v33 = v7 < 0x80000000 ? v7 * 2: 0xffffffff;
                v7 = v7 < 0x80000000 ? v7 * 2: 0xffffffff;
                size_t v34 = v7 <= 0x5d1745d ? (size_t)(v7 * 44): 0xffffffff;
                size_t __size3 = v7 <= 0x5d1745d ? (size_t)(v7 * 44): 0xffffffff;
                if(__size3 != -1) {
                    void* ptr10 = →realloc(*(void**)(param1 + 1), __size3);
                    if(ptr10) {
                        *(void**)(param1 + 1) = ptr10;
                        goto loc_804FADD;
                    }
                }
            loc_804FB68:
                if(*(int*)(param2 + 1)) {
                    →free(*(void**)(param2 + 1));
                }
            }
        }
        if(*(int*)(param1 + 1)) {
            →free(*(void**)(param1 + 1));
        }
        int* ptr11 = →__errno_location();
        ptr11[0] = 12;
        return -1;
    }
    int* ptr11 = →__errno_location();
    ptr11[0] = 12;
    return -1;
}

unsigned int ptr_align(int param0, unsigned int param1) {
    unsigned int v0 = (unsigned int)(param1 - 1 + param0);
    return v0 - v0 % param1;
}

int quote(int param0) {
    return quote_n(0, param0);
}

int quote_n(unsigned int param0, int param1) {
    return quotearg_n_style(param0, 5, param1);
}

int quotearg(int param0) {
    return quotearg_n(0, param0);
}

int quotearg_alloc(int param0, int param1, int* param2) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    int v1 = quotearg_buffer(0, 0, param0, param1, param2);
    size_t v2 = (size_t)(v1 + 1);
    int result = (int)xcharalloc((size_t)(v1 + 1));
    quotearg_buffer(result, (int)(size_t)(v1 + 1), param0, param1, param2);
    int* ptr1 = →__errno_location();
    ptr1[0] = v0;
    return result;
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
            i = (char*)&gvar_8050680;
            __n = 1;
            break;
        }
        case 3: {
            if(param1 > 0) {
                *(char*)&param0[0] = 34;
            }
            ++v4;
            v5 = 1;
            i = (char*)&gvar_805067C;
            __n = 1;
            break;
        }
        case 4: {
            v5 = 1;
            break;
        }
        case 5: 
        case 6: {
            char* ptr1 = gettext_quote((char*)&gvar_805067E, param4);
            char* ptr2 = gettext_quote((char*)&gvar_8050680, param4);
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
                goto loc_804A649;
            }
            case 8: {
                v1 = 'b';
                goto loc_804A649;
            }
            case 9: {
                v1 = 't';
            loc_804A63F:
                if(param4 == 1) {
                    return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                }
            loc_804A649:
                if(v5) {
                    v9 = v1;
                    goto loc_804A98F;
                }
                goto loc_804A960;
            }
            case 10: {
                v1 = 'n';
                goto loc_804A63F;
            }
            case 11: {
                v1 = 'v';
                goto loc_804A649;
            }
            case 12: {
                v1 = 'f';
                goto loc_804A649;
            }
            case 13: {
                v1 = 'r';
                goto loc_804A63F;
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
                goto loc_804A960;
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
                goto loc_804A960;
            }
            case 92: {
                v1 = v9;
                goto loc_804A63F;
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
                goto loc_804A960;
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
                goto loc_804A692;
            }
            case 123: 
            case 125: {
                char v13 = param3 == -1 ? __s[1] ? 1: 0: param3 == 1 ? 0: 1;
                if(!v13) {
                loc_804A688:
                    if(!ptr3) {
                    loc_804A692:
                        if(param4 == 1) {
                            return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, (int)__s, (int)param3, 2, param5);
                        }
                    }
                }
                goto loc_804A960;
            }
            case 35: 
            case 126: {
                goto loc_804A688;
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
                        loc_804A873:
                            if((unsigned int)ptr0 > 1 || (!(unsigned char)((unsigned int)v5 ^ 0x1) && (unsigned char)((unsigned int)v0 ^ 0x1))) {
                                int* ptr6 = (int*)((int)ptr0 + (int)ptr3);
                                while(1) {
                                    if(v5 && (unsigned char)((unsigned int)v0 ^ 0x1)) {
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
                                        goto loc_804A9A7;
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
                                goto loc_804A63F;
                            }
                            else {
                                goto loc_804A960;
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
                goto loc_804A873;
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
    loc_804A960:
        if(!(unsigned char)((unsigned int)v5 ^ 0x1) && (int*)((1 << ((unsigned int)v9 & 0x1f)) & (int)*(unsigned short**)((unsigned int)(v9 >>> 5) * 4 + param5 + 4))) {
        loc_804A98F:
            if(v4 < param1) {
                *(char*)(v4 + (int)param0) = 92;
            }
            ++v4;
        }
    loc_804A9A7:
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

int quotearg_free() {
    int result;
    void* __ptr = slotvec;
    for(unsigned int i = 1; i < nslots; ++i) {
        →free(*(void**)((int*)(i * 8 + (int)__ptr) + 1));
    }
    if(*(int*)((int)__ptr + 4) != &slot0) {
        →free(*(void**)((int)__ptr + 4));
        slotvec0 = 0x805218000000100L;
    }
    if(__ptr != &slotvec0) {
        →free(__ptr);
        slotvec = &slotvec0;
    }
    nslots = 1;
    return result;
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
            →free((void*)result);
        }
        int* ptr4 = (int*)(param0 * 8 + (int)ptr1);
        result = (int)xcharalloc((size_t)v5);
        *(ptr4 + 1) = result;
        quotearg_buffer(result, v5, param1, param2, param3);
    }
    int* ptr5 = →__errno_location();
    ptr5[0] = v0;
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

int rpl_isnanl(int param0, int param1, int param2) {
    return !(param2 & 0x7fff) ? param1 >>> 31: (param2 & 0x7fff) == 0x7fff ? (param1 ^ 0x80000000) | param0 ? 1: 0: (param1 >>> 31) ^ 0x1;
}

int rpl_vfprintf(int* param0, int param1, int param2) {
    size_t v0;
    char v1;
    int* ptr0 = param0;
    int v2 = param1;
    int v3 = param2;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    size_t v5 = 2000;
    void* __ptr = (void*)vasnprintf((int)&v1, (int)&v5, v2, v3);
    size_t __n = v5;
    if(!__ptr) {
        fseterr(ptr0);
        v0 = 0xffffffff;
    }
    else {
        size_t v6 = →fwrite(__ptr, 1, __n, (FILE*)ptr0);
        if(v6 < __n) {
            if(&v1 != __ptr) {
                int* ptr1 = →__errno_location();
                int v7 = ptr1[0];
                →free(__ptr);
                int* ptr2 = →__errno_location();
                ptr2[0] = v7;
            }
            v0 = 0xffffffff;
        }
        else if(__n >= 0x80000000) {
            int* ptr3 = →__errno_location();
            ptr3[0] = 75;
            fseterr(ptr0);
            v0 = 0xffffffff;
        }
        else {
            v0 = __n;
        }
    }
    int result = (int)v0;
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        result = /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

ssize_t safe_read(int __fd, void* __buf, size_t __nbytes) {
loc_804AFDE:
    ssize_t result = →read(__fd, __buf, __nbytes);
    while(result < 0) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 4) {
            goto loc_804AFDE;
        }
        else {
            int* ptr1 = →__errno_location();
            if(ptr1[0] != 22 || __nbytes <= 0x7fffe000) {
                return result;
            }
            __nbytes = 0x7fffe000;
            result = →read(__fd, __buf, __nbytes);
        }
    }
    return result;
}

ssize_t safe_write(int __fd, void* __buf, size_t __n) {
loc_804B046:
    ssize_t result = →write(__fd, __buf, __n);
    while(result < 0) {
        int* ptr0 = →__errno_location();
        if(ptr0[0] == 4) {
            goto loc_804B046;
        }
        else {
            int* ptr1 = →__errno_location();
            if(ptr1[0] != 22 || __n <= 0x7fffe000) {
                return result;
            }
            __n = 0x7fffe000;
            result = →write(__fd, __buf, __n);
        }
    }
    return result;
}

int set_char_quoting(int param0, int param1, int param2) {
    char v0 = (unsigned char)param1;
    char v1 = (unsigned char)param1;
    int v2 = param0 != 0 ? param0: &default_quoting_options;
    int* ptr0 = (int*)((unsigned int)((unsigned char)param1 >>> 5) * 4 + (param0 != 0 ? param0: &default_quoting_options) + 4);
    int v3 = (unsigned int)(unsigned char)param1 & 0x1f;
    int result = (*ptr0 >>> (v3 & 0x1f)) & 0x1;
    *ptr0 = (((param2 & 0x1) ^ result) << (v3 & 0x1f)) ^ *ptr0;
    return result;
}

int set_quoting_style(unsigned int* param0, unsigned char param1) {
    unsigned char v0 = param1;
    param0 != 0 ? *param0: *(int*)&default_quoting_options = param1;
    return (int)v0;
}

int simple_cat(void* __buf, size_t __nbytes) {
    char v0;
    ssize_t v1 = safe_read(input_desc, __buf, __nbytes);
    while(v1 != -1) {
        if(!v1) {
            v0 = 1;
            return (unsigned int)v0;
        }
        size_t __n = (size_t)v1;
        int v2 = full_write(1, __buf, __n);
        if(v2 != __n) {
            char* __format = →gettext("write error");
            int* ptr0 = →__errno_location();
            →error(1, ptr0[0], __format);
        }
        v1 = safe_read(input_desc, __buf, __nbytes);
    }
    unsigned int v3 = infile;
    int* ptr1 = →__errno_location();
    →error(0, ptr1[0], (char*)&gvar_8050132, v3);
    v0 = 0;
    return (unsigned int)v0;
}

void sub_8048ACC() {
    jump gvar_8051FFC;
}

int sub_8049841(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
    char* __format2;
    int v0;
    while(1) {
        int v1 = →getopt_long(**(int**)(v0 - 212), *(char***)(*(int*)(v0 - 212) + 4), "benstuvAET", (option*)&long_options.4647, NULL);
        *(int*)(v0 - 52) = v1;
        if(*(int*)(v0 - 52) == -1) {
            break;
        }
        else {
            *(int*)(v0 - 216) = *(int*)(v0 - 52);
            if(*(int*)(v0 - 216) == 98) {
                *(char*)(v0 - 20) = 1;
                *(char*)(v0 - 21) = 1;
            }
            else if(*(int*)(v0 - 216) <= 98) {
                if(*(int*)(v0 - 216) == 65) {
                    *(char*)(v0 - 24) = 1;
                    *(char*)(v0 - 23) = 1;
                    *(char*)(v0 - 25) = 1;
                }
                else if(*(int*)(v0 - 216) <= 65) {
                    if(*(int*)(v0 - 216) == -131) {
                        FILE* __stream = stdout;
                        param5 = 0;
                        param4 = "Richard M. Stallman";
                        version_etc(__stream, &gvar_80502BC, "GNU coreutils", "6.10");
                        /*NO_RETURN*/ →exit(0);
                    }
                    else if(*(int*)(v0 - 216) == -130) {
                        /*NO_RETURN*/ usage(0);
                    }
                    goto loc_8049893;
                }
                else if(*(int*)(v0 - 216) == 69) {
                    *(char*)(v0 - 23) = 1;
                }
                else if(*(int*)(v0 - 216) != 84) {
                    goto loc_8049893;
                }
                else {
                    *(char*)(v0 - 25) = 1;
                }
            }
            else if(*(int*)(v0 - 216) == 115) {
                *(char*)(v0 - 22) = 1;
            }
            else if(*(int*)(v0 - 216) <= 115) {
                if(*(int*)(v0 - 216) == 101) {
                    *(char*)(v0 - 23) = 1;
                    *(char*)(v0 - 24) = 1;
                }
                else if(*(int*)(v0 - 216) != 110) {
                    goto loc_8049893;
                }
                else {
                    *(char*)(v0 - 20) = 1;
                }
            }
            else if(*(int*)(v0 - 216) != 117) {
                if(*(int*)(v0 - 216) < 117) {
                    *(char*)(v0 - 25) = 1;
                }
                else if(*(int*)(v0 - 216) != 118) {
                loc_8049893:
                    /*NO_RETURN*/ usage(1);
                    continue;
                }
                *(char*)(v0 - 24) = 1;
            }
        }
    }
    int v2 = fstat64(1, (stat64*)(v0 - 176));
    if(v2 < 0) {
        char* __format = →gettext("standard output");
        int* ptr0 = →__errno_location();
        →error(1, ptr0[0], __format);
    }
    *(int*)(v0 - 208) = *(int*)(v0 - 124) > 0 && *(unsigned int*)(v0 - 124) <= 0x20000000 ? *(int*)(v0 - 124): 0x200;
    *(int*)(v0 - 32) = *(int*)(v0 - 208);
    if((*(int*)(v0 - 160) & 0xf000) == 0x8000) {
        int v3 = *(int*)(v0 - 172);
        *(int*)(v0 - 72) = *(int*)(v0 - 176);
        *(int*)(v0 - 68) = v3;
        int v4 = *(int*)(v0 - 84);
        *(int*)(v0 - 80) = *(int*)(v0 - 88);
        *(int*)(v0 - 76) = v4;
    }
    else {
        *(char*)(v0 - 18) = 0;
    }
    infile = &gvar_80502DB;
    *(unsigned int*)(v0 - 56) = optind;
    do {
        if(*(int*)(v0 - 56) < **(unsigned int*)(v0 - 212)) {
            infile = *(unsigned int*)(*(int*)(v0 - 56) * 4 + *(int*)(*(int*)(v0 - 212) + 4));
        }
        int v5 = →strcmp(infile, (char*)&gvar_80502DB);
        if(!v5) {
            *(char*)(v0 - 19) = 1;
            input_desc = 0;
            goto loc_8049A59;
        }
        else {
            int v6 = →open64(infile, *(int*)(v0 - 60));
            input_desc = v6;
            if(input_desc >= 0x80000000) {
                __format2 = infile;
                int* ptr1 = →__errno_location();
                →error(0, ptr1[0], (char*)&gvar_8050132, __format2);
                *(char*)(v0 - 17) = 0;
            }
            else {
            loc_8049A59:
                int v7 = fstat64(input_desc, (stat64*)(v0 - 176));
                if(v7 < 0) {
                    __format2 = infile;
                    int* ptr2 = →__errno_location();
                    →error(0, ptr2[0], (char*)&gvar_8050132, __format2);
                    *(char*)(v0 - 17) = 0;
                }
                else {
                    *(int*)(v0 - 0xcc) = *(int*)(v0 - 124) > 0 && *(unsigned int*)(v0 - 124) <= 0x20000000 ? *(int*)(v0 - 124): 0x200;
                    *(int*)(v0 - 36) = *(int*)(v0 - 0xcc);
                    if(*(char*)(v0 - 18) && !((*(int*)(v0 - 176) ^ *(int*)(v0 - 72)) | (*(int*)(v0 - 172) ^ *(int*)(v0 - 68))) && !((*(int*)(v0 - 88) ^ *(int*)(v0 - 80)) | (*(int*)(v0 - 84) ^ *(int*)(v0 - 76))) && input_desc) {
                        __format2 = infile;
                        char* __format1 = →gettext("%s: input file is output file");
                        →error(0, 0, __format1, __format2);
                        *(char*)(v0 - 17) = 0;
                    }
                    else {
                        if(!((unsigned int)*(char*)(v0 - 22) | (unsigned int)*(char*)(v0 - 20) | (unsigned int)*(char*)(v0 - 23) | (unsigned int)*(char*)(v0 - 24) | (unsigned int)*(char*)(v0 - 25))) {
                            *(int*)(v0 - 224) = *(int*)(v0 - 36);
                            *(int*)(v0 - 220) = *(int*)(v0 - 32);
                            if(*(unsigned int*)(v0 - 220) < *(unsigned int*)(v0 - 224)) {
                                *(int*)(v0 - 220) = *(int*)(v0 - 224);
                            }
                            *(int*)(v0 - 36) = *(int*)(v0 - 220);
                            void* ptr3 = xmalloc((size_t)(*(int*)(v0 - 36) + *(int*)(v0 - 40) - 1));
                            *(void**)(v0 - 44) = ptr3;
                            __format2 = (char*)*(char*)(v0 - 17);
                            unsigned int v8 = ptr_align(*(int*)(v0 - 44), *(unsigned int*)(v0 - 40));
                            int v9 = simple_cat((void*)v8, *(size_t*)(v0 - 36));
                            *(char*)(v0 - 17) = (unsigned char)(int*)(v9 & (int)__format2) ? 1: 0;
                        }
                        else {
                            void* ptr4 = xmalloc((size_t)(*(int*)(v0 - 36) + *(int*)(v0 - 40)));
                            *(void**)(v0 - 44) = ptr4;
                            void* ptr5 = xmalloc((size_t)(*(int*)(v0 - 36) * 4 + *(int*)(v0 - 32) + (*(int*)(v0 - 40) + 18)));
                            *(void**)(v0 - 48) = ptr5;
                            __format2 = (char*)*(char*)(v0 - 17);
                            int v10 = (int)*(char*)(v0 - 22);
                            int v11 = (int)*(char*)(v0 - 23);
                            *(int*)(v0 - 200) = (unsigned int)*(char*)(v0 - 21);
                            *(int*)(v0 - 196) = (unsigned int)*(char*)(v0 - 20);
                            *(int*)(v0 - 192) = (unsigned int)*(char*)(v0 - 25);
                            *(int*)(v0 - 188) = (unsigned int)*(char*)(v0 - 24);
                            unsigned int v12 = ptr_align(*(int*)(v0 - 48), *(unsigned int*)(v0 - 40));
                            *(unsigned int*)(v0 - 184) = v12;
                            unsigned int v13 = ptr_align(*(int*)(v0 - 44), *(unsigned int*)(v0 - 40));
                            int v14 = cat((void*)v13, *(size_t*)(v0 - 36), *(void**)(v0 - 184), *(size_t*)(v0 - 32), *(int*)(v0 - 188), *(int*)(v0 - 192), *(int*)(v0 - 196), *(int*)(v0 - 200), v11, v10);
                            *(char*)(v0 - 17) = (unsigned char)(int*)(v14 & (int)__format2) ? 1: 0;
                            →free(*(void**)(v0 - 48));
                        }
                        →free(*(void**)(v0 - 44));
                    }
                }
                int v15 = →strcmp(infile, (char*)&gvar_80502DB);
                if(v15) {
                    int v16 = →close(input_desc);
                    if(v16 < 0) {
                        __format2 = infile;
                        int* ptr6 = →__errno_location();
                        →error(0, ptr6[0], (char*)&gvar_8050132, __format2);
                        *(char*)(v0 - 17) = 0;
                    }
                }
            }
        }
        *(int*)(v0 - 56) = *(int*)(v0 - 56) + 1;
    }
    while(*(int*)(v0 - 56) < **(unsigned int*)(v0 - 212));
    if(*(char*)(v0 - 19)) {
        int v17 = →close(0);
        if(v17 < 0) {
            __format2 = →gettext("closing standard input");
            int* ptr7 = →__errno_location();
            →error(1, ptr7[0], __format2);
        }
    }
    *(int*)(v0 - 180) = *(char*)(v0 - 17) != 0 ? 0: 1;
    /*NO_RETURN*/ →exit(*(int*)(v0 - 180));
}

int usage(int __status) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    if(__status) {
        v0 = program_name;
        char* __format = →gettext("Try `%s --help\' for more information.\n");
        →fprintf(stderr, __format, v0);
    }
    else {
        unsigned int v3 = program_name;
        char* __format1 = →gettext("Usage: %s [OPTION] [FILE]...\n");
        →printf(__format1, v3);
        FILE* __stream = stdout;
        char* __s = →gettext("Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n");
        →fputs_unlocked(__s, __stream);
        FILE* __stream1 = stdout;
        char* __s1 = →gettext("  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n");
        →fputs_unlocked(__s1, __stream1);
        FILE* __stream2 = stdout;
        char* __s2 = →gettext("      --help     display this help and exit\n");
        →fputs_unlocked(__s2, __stream2);
        FILE* __stream3 = stdout;
        char* __s3 = →gettext("      --version  output version information and exit\n");
        →fputs_unlocked(__s3, __stream3);
        FILE* __stream4 = stdout;
        char* __s4 = →gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
        →fputs_unlocked(__s4, __stream4);
        v0 = program_name;
        unsigned int v4 = program_name;
        char* __format2 = →gettext("\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n");
        →printf(__format2, v4, v0);
        emit_bug_reporting_address();
    }
    /*NO_RETURN*/ →exit(__status);
}

void vasnprintf() {
    // Decompilation error
}

int version_etc(FILE* __stream, int param1, int param2, int param3) {
    char v0;
    return version_etc_va(__stream, param1, param2, param3, &v0);
}

int version_etc_va(FILE* __stream, int param1, int param2, int param3, int param4) {
    int v0 = param4;
    unsigned int v1 = 0;
    while(1) {
        int v2 = v0;
        v0 = v2 + 4;
        if(!*(int*)v2) {
            break;
        }
        else {
            ++v1;
        }
    }
    if(param1) {
        →fprintf(__stream, "%s (%s) %s\n", param1, param2, param3);
    }
    else {
        →fprintf(__stream, "%s %s\n", param2, param3);
    }
    char* ptr0 = →gettext((char*)&gvar_8050327);
    →fprintf(__stream, (char*)&version_etc_copyright, ptr0, 2008);
    char* __s = →gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    →fputs_unlocked(__s, __stream);
    switch(v1) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            char* ptr1 = →gettext("Written by %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr1, param4);
        }
        case 2: {
            char* ptr2 = →gettext("Written by %s and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr2, param4);
        }
        case 3: {
            char* ptr3 = →gettext("Written by %s, %s, and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr3, param4);
        }
        case 4: {
            char* ptr4 = →gettext("Written by %s, %s, %s,\nand %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr4, param4);
        }
        case 5: {
            char* ptr5 = →gettext("Written by %s, %s, %s,\n%s, and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr5, param4);
        }
        case 6: {
            char* ptr6 = →gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr6, param4);
        }
        case 7: {
            char* ptr7 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr7, param4);
        }
        case 8: {
            char* ptr8 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr8, param4);
        }
        case 9: {
            char* ptr9 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr9, param4);
        }
        default: {
            char* ptr10 = →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
            return rpl_vfprintf((int*)__stream, (int)ptr10, param4);
        }
    }
}

int write_pending(void* param0, unsigned int* param1) {
    int result;
    size_t __n = (size_t)(*param1 - (int)param0);
    if(__n) {
        int v0 = full_write(1, param0, __n);
        if(v0 != __n) {
            char* __format = →gettext("write error");
            int* ptr0 = →__errno_location();
            →error(1, ptr0[0], __format);
        }
        *param1 = param0;
    }
    return result;
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
    →error(exit_failure, 0, (char*)&gvar_8050935, ptr0);
    /*NO_RETURN*/ →abort();
}

void* xcalloc(size_t __nmemb, size_t __size) {
    void* result = →calloc(__nmemb, __size);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

void* xcharalloc(size_t __size) {
    return xmalloc(__size);
}

void* xmalloc(size_t __size) {
    void* result = →malloc(__size);
    if(!result && __size) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

unsigned int xmax(unsigned int param0, unsigned int param1) {
    unsigned int result = param0;
    if(result < param1) {
        result = param1;
    }
    return result;
}

void* xmemdup(void* __src, size_t __size) {
    void* __dest = xmalloc(__size);
    return →memcpy(__dest, __src, __size);
}

void* xnmalloc(unsigned int param0, unsigned int param1) {
    if(0xffffffff / param1 < param0) {
        /*NO_RETURN*/ xalloc_die();
    }
    return xmalloc((size_t)(param0 * param1));
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

char* xstrdup(char* __s) {
    size_t v0 = →strlen(__s);
    return (char*)xmemdup(__s, v0 + 1);
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

void* xzalloc(size_t __size) {
    void* __s = xmalloc(__size);
    return →memset(__s, 0, __size);
}
