
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    int result;
    →__cxa_atexit();
    return result;
}

void* clone_quoting_options(int* param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    →__errno_location();
    int v2 = *ptr0;
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
    *ptr0 = v2;
    return result;
}

int close_stdout() {
    int result;
    int v0;
    int v1 = v0;
    int v2 = stdout;
    int v3 = (unsigned int)((*(int*)v2 >>> 5) & 0x1) < 1 ? -1: 0;
    if(v3) {
        →__fpending(v2);
        if(result) {
            v2 = stdout;
            goto loc_8048CB4;
        }
    }
    else {
    loc_8048CB4:
        →fclose(v2);
        if(result) {
            →__errno_location();
            v3 = *(int*)result;
        }
        if(v3 >= 0) {
            →dcgettext(0, "write error", 5);
            int v4 = file_name;
            if(v4) {
                int v5 = quotearg_colon(v4);
                →error(exit_failure, v3, &gvar_804A0B8);
            }
            else {
                →error(exit_failure, v3, &gvar_804A0BC);
                return result;
            }
        }
    }
    return result;
}

unsigned int close_stdout_set_file_name(unsigned int param0) {
    file_name = param0;
    return param0;
}

unsigned char get_quoting_style(unsigned int* param0) {
    return param0 ? (unsigned char)*param0: (unsigned char)*(int*)&default_quoting_options;
}

int gettext_quote(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2;
    →dcgettext(0, v1, 5);
    return (unsigned char)(((unsigned int)(v0 != 6 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & ((unsigned int)1 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8))) & 0x1 ? &gvar_804A3BC: v1;
}

int main(unsigned int param0, unsigned int* param1) {
    int v0;
    unsigned char* ptr0;
    unsigned char* ptr1;
    char v1;
    char v2;
    int v3;
    int v4;
    int v5;
    void* ptr2;
    int v6;
    int v7;
    int v8;
    int* ptr3 = &v5;
    int* ptr4 = &v5;
    char v9 = &v2 == 44;
    char v10 = (int)&v8 < 0;
    char v11 = __parity__((unsigned char)&v2 - 44);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x28) ^ (int)&v8) >>> 4) & 0x1);
    char v13 = (unsigned int)&v5 < 40;
    char v14 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v8) & (int)(int*)((int)&v5 ^ 0x28)) < 0;
    int v15 = v7;
    unsigned int* ptr5 = param1;
    char v16 = &v2 == 48;
    char v17 = (int)&v3 < 0;
    char v18 = __parity__((unsigned char)&v2 - 48);
    char v19 = 0;
    char v20 = 0;
    int* ptr6 = &v3;
    char v21 = &v2 == 64;
    char v22 = (int)&v4 < 0;
    char v23 = __parity__((unsigned char)&v2 - 64);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x10) ^ (int)&v4) >>> 4) & 0x1);
    char v25 = (unsigned int)&v3 < 16;
    char v26 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v3) & (int)(int*)((int)&v3 ^ 0x10)) < 0;
    unsigned int v27 = *ptr5;
    program_name = *ptr5;
    int v28 = 134520892;
    →setlocale(6, 134520892);
    int v29 = "/usr/share/locale";
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    int v30 = atexit((void __cdecl (*_)())&close_stdout);
    char v31 = param0 == 2;
    char v32 = (int)param0 < 2;
    char v33 = __parity__((unsigned char)param0 - 2);
    char v34 = param0 < 2;
    char v35 = (((param0 - 2) ^ param0) & (param0 ^ 0x2)) < 0;
    if(!v31) {
    loc_8048BCE:
        /*NO_RETURN*/ →exit(0);
    }
    →getenv("POSIXLY_CORRECT");
    if(!v6) {
        char v36 = 0;
        unsigned char* ptr7 = *(ptr5 + 1);
        unsigned char* ptr8 = "--help";
        unsigned char* ptr9 = ptr7;
        unsigned char* ptr10 = ptr7;
        int v37 = 7;
        int v38 = 7;
        do {
            v1 = *ptr10 == *ptr8;
            char v39 = *ptr10 < *ptr8;
            char v40 = __parity__(*ptr10 - *ptr8);
            char v41 = *ptr10 < *ptr8;
            char v42 = (((*ptr10 - *ptr8) ^ *ptr10) & (*ptr10 ^ *ptr8)) < 0;
            char v43 = (((*ptr10 - *ptr8) ^ (*ptr10 ^ *ptr8)) >>> 4) & 0x1;
            ++ptr10;
            ++ptr8;
            --v38;
        }
        while(v1 && v38 == 0);
        if(!v1) {
            char v44 = 0;
            ptr1 = ptr9;
            int v45 = 10;
            ptr0 = "--version";
            v0 = 10;
        }
        else {
            int* ptr11 = &ptr2;
            int v46 = /*NO_RETURN*/ usage(0);
        }
        do {
            v1 = *ptr1 == *ptr0;
            char v47 = *ptr1 < *ptr0;
            char v48 = __parity__(*ptr1 - *ptr0);
            char v49 = *ptr1 < *ptr0;
            char v50 = (((*ptr1 - *ptr0) ^ *ptr1) & (*ptr1 ^ *ptr0)) < 0;
            ++ptr1;
            ++ptr0;
            --v0;
        }
        while(v1 && v0 == 0);
        if(v1) {
            int v51 = 0;
            char v52 = 1;
            char v53 = 0;
            char v54 = 1;
            char v55 = 0;
            char v56 = 0;
            int v57 = "Jim Meyering";
            int v58 = "5.2.1";
            v8 = 0;
            int v59 = stdout;
            ptr5 = (unsigned int*)&gvar_804A099;
            v3 = "Jim Meyering";
            int v60 = "true";
            int v61 = version_etc(v59, "true", &gvar_804A099, "5.2.1");
        }
    }
    goto loc_8048BCE;
}

int quotearg(int param0) {
    return quotearg_n(NULL, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int quotearg_buffer(int param0, int param1, int param2, int param3, int* param4) {
    int* ptr0;
    int v0;
    int* ptr1 = param4;
    int v1 = v0;
    if(!ptr1) {
        ptr1 = (int*)&default_quoting_options;
    }
    →__errno_location();
    int v2 = *ptr0;
    int result = quotearg_buffer_restyled(param3, *ptr1, (int)ptr1);
    *ptr0 = v2;
    return result;
}

int quotearg_buffer_restyled(int param0, unsigned int param1, int param2) {
    int* ptr0;
    int* ptr1;
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
    int v10 = v9;
    int v11 = v3;
    int v12 = v7;
    int v13 = v5;
    int result = 0;
    int v14 = 0;
    int v15 = 0;
    int v16 = 0;
    →__ctype_get_mb_cur_max();
    int* ptr2 = (int*)(v3 - 1);
    char v17 = ptr2 ? 0: 1;
    ptr2 = (unsigned int)(v17 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
    int v18 = v17 ? 1: 0;
    char v19 = param1 == 6;
    char v20 = param1 < 6;
    int v21 = v18;
    if((v20 || v19)) {
        jump gvar_804A100[param1];
        if((unsigned int)v7 > 0) {
            *(char*)v11 = 34;
        }
        result = 1;
        v16 = 1;
        v14 = &gvar_804A3BC;
        v15 = 1;
        goto loc_8048F97;
        if((unsigned int)v12 > 0) {
            v7 = v11;
            *(char*)v7 = 39;
        }
        result = 1;
        v14 = &gvar_804A3C0;
        v15 = 1;
        goto loc_8048F97;
        if(*(char*)v78) {
            do {
                if((unsigned int)result < (unsigned int)v12) {
                    int v22 = v14;
                    int v23 = v11;
                    int v24 = result;
                    *(char*)(v23 + v24) = *(char*)v22;
                }
                ++v14;
                ++result;
                v4 = v14;
            }
            while(*(char*)v4);
        }
        v16 = 1;
        v14 = v75;
        →strlen(v75);
        v15 = v3;
    }
loc_8048F97:
    int v25 = 0;
    while(1) {
        if(param0 != -1) {
            v7 = param0;
            if(v7 == v25) {
                goto loc_804912A;
            }
            else {
                goto loc_8048FBB;
            }
        }
        else {
            v2 = v13;
            v1 = v25;
        }
        if(!*(char*)(v1 + v2)) {
        loc_804912A:
            if(v14) {
                char v26 = *(char*)v14;
                if(*(char*)v14) {
                    do {
                        if((unsigned int)result < (unsigned int)v12) {
                            *(char*)(result + v11) = v26;
                        }
                        ++v14;
                        ++result;
                        v26 = *(char*)v14;
                    }
                    while(*(char*)v14);
                }
            }
            if((unsigned int)result < (unsigned int)v12) {
                *(char*)(result + v11) = 0;
            }
            return result;
        }
    loc_8048FBB:
        if(v16 && v15) {
            int v27 = v25;
            v78 = v15;
            unsigned int v28 = (unsigned int)(v27 + v78);
            if(v28 <= (unsigned int)param0) {
                int v29 = v25;
                int v30 = v13;
                int v31 = v15;
                v78 = v14;
                unsigned char* ptr3 = (unsigned char*)(v30 + v29);
                char v32 = 1;
                while(v31 != 0) {
                    v32 = *ptr3 == *(char*)v78;
                    ++ptr3;
                    ++v78;
                    --v31;
                    if(!v32) {
                        break;
                    }
                }
                if(v32) {
                    if((unsigned int)result < (unsigned int)v12) {
                        *(char*)(result + v11) = 92;
                    }
                    ++result;
                }
            }
        }
        int v33 = v13;
        int v34 = v25;
        char v35 = *(char*)(v33 + v34);
        unsigned int v36 = (unsigned int)*(char*)(v33 + v34);
        char v37 = v36 == 126;
        char v38 = v36 < 126;
        char v39 = v35;
        if((v38 || v37)) {
            jump gvar_804A11C[v36];
            if(!v76) {
                if((unsigned int)result < (unsigned int)v12) {
                    *(char*)(result + v11) = 92;
                }
                ++result;
                if((unsigned int)result < (unsigned int)v12) {
                    *(char*)(result + v11) = 48;
                }
                ++result;
                if((unsigned int)result < (unsigned int)v12) {
                    *(char*)(result + v11) = 48;
                }
                ++result;
                v39 = 48;
                goto loc_8049240;
                if(param1 == 1) {
                    return quotearg_buffer_restyled(param0, 2, param2);
                    if(v25) {
                        goto loc_8049240;
                    }
                    else if(param1 != 1) {
                        goto loc_8049240;
                    loc_8049325:
                        if(param1 == 1) {
                            return quotearg_buffer_restyled(param0, 2, param2);
                        }
                        else if(param1 != 2) {
                            goto loc_8049240;
                        }
                        else {
                            if((unsigned int)result < (unsigned int)v12) {
                                *(char*)(result + v11) = 39;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)v12) {
                                *(char*)(result + v11) = 92;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)v12) {
                                *(char*)(result + v11) = 39;
                                ++result;
                                goto loc_8049240;
                                if(param1 == 1) {
                                    return quotearg_buffer_restyled(param0, 2, param2);
                                }
                                else if(param1 != 3) {
                                    goto loc_8049240;
                                }
                                else {
                                    int v40 = v25 + 2;
                                    char v41 = (unsigned int)v40 < (unsigned int)param0;
                                    if(!v41) {
                                        goto loc_8049240;
                                    }
                                    else {
                                        int v42 = v13;
                                        int v43 = v25;
                                        if(*(char*)(v42 + v43 + 1) != 63) {
                                            goto loc_8049240;
                                        }
                                        else {
                                            char v44 = *(char*)(v42 + v43 + 2);
                                            unsigned int v45 = (unsigned int)(((unsigned int)*(char*)(v42 + v43 + 2) | ((unsigned int)(v44 < 0 ? 0xffffff: 0) << 8)) - 33);
                                            char v46 = v45 == 29;
                                            if(v45 >= 29 && !v46) {
                                                goto loc_8049240;
                                            }
                                            else if(v45 == 0 || (v45 >= 6 && v45 <= 8) || v45 == 12 || v45 == 14) {
                                                v39 = v44;
                                                char v47 = (unsigned int)result < (unsigned int)v12;
                                                v25 = v40;
                                                if(v47) {
                                                    *(char*)(result + v11) = 63;
                                                }
                                                ++result;
                                                if((unsigned int)result < (unsigned int)v12) {
                                                    *(char*)(result + v11) = 92;
                                                }
                                                ++result;
                                                if((unsigned int)result < (unsigned int)v12) {
                                                    *(char*)(result + v11) = 63;
                                                }
                                            }
                                            else if((v45 >= 1 && v45 <= 5) || (v45 >= 9 && v45 <= 11) || v45 == 13 || v45 == 15) {
                                                goto loc_8049240;
                                            }
                                            else {
                                                throw 0;
                                                goto loc_8049325;
                                            }
                                        }
                                    }
                                }
                            }
                            ++result;
                            goto loc_8049240;
                            if(param1 == 1) {
                                return quotearg_buffer_restyled(param0, 2, param2);
                            }
                        }
                    }
                }
                int v48 = v16;
                int v49 = v25;
                char v50 = v48 ? 0: 1;
                v7 = v49 + 1;
                if(!v50) {
                    v39 = (unsigned char)v36;
                    goto loc_8049271;
                }
            }
        }
        else {
            v78 = v21;
            if(v78) {
                v0 = 1;
                →__ctype_b_loc();
                int v51 = (unsigned int)v39;
                int v52 = *(int*)v3;
                ptr1 = (int*)((unsigned int)*(short*)(v51 * 2 + v52) & 0x4000);
                ptr0 = (int*)((unsigned int)*(short*)(v51 * 2 + v52) & 0x4000);
            }
            else {
                char v53 = param0 == -1;
                int v54 = 0;
                int v55 = 0;
                v0 = 0;
                ptr0 = (int*)0x1;
                if(v53) {
                    →strlen(v13);
                    param0 = v3;
                }
                do {
                    int v56 = v25;
                    v34 = v0;
                    int v57 = param0;
                    unsigned int v58 = (unsigned int)(v56 + v34);
                    int v59 = v57 - v58;
                    int v60 = (int)(v58 + v13);
                    int v61 = (int)(v58 + v13);
                    →mbrtowc(&v6, v60, v59, &v54);
                    char v62 = v3 ? 0: 1;
                    v78 = v3;
                    if(v62) {
                        break;
                    }
                    else if(v3 == -2) {
                        char v63 = v58 < (unsigned int)param0;
                        ptr0 = NULL;
                        if(v63) {
                            int v64 = v61;
                            if(*(char*)v64) {
                                do {
                                    ++v0;
                                    ptr1 = (int*)(v0 + v25);
                                    if((unsigned int)ptr1 >= (unsigned int)param0) {
                                        break;
                                    }
                                    else {
                                        v8 = v13;
                                    }
                                }
                                while(*(char*)((int)ptr1 + v8));
                            }
                        }
                        break;
                    }
                    else if(v3 == -1) {
                        ptr0 = NULL;
                        break;
                    }
                    else {
                        →iswprint(v6);
                        int v65 = v3 ? 1: 0;
                        v0 += v78;
                        ptr0 = (int*)((0 - v65) & (int)ptr0);
                        →mbsinit(&v54);
                    }
                }
                while(!v3);
                if((unsigned int)v0 > 1) {
                    goto loc_8049063;
                }
            }
            ptr1 = (unsigned int)(v16 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
            v7 = (unsigned int)(ptr0 ? 0: 1) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            if(((unsigned char)(int*)((int)ptr1 & v7) & 0x1)) {
            loc_8049063:
                int v66 = v25;
                int v67 = v0;
                int* ptr4 = (int*)(v67 + v66);
                while(1) {
                    v78 = v16;
                    int* ptr5 = ptr0;
                    v67 = (unsigned int)(v78 ? 1: 0) | ((unsigned int)((v67 >>> 8) & 0xffffff) << 8);
                    if(((unsigned char)(int*)(((unsigned int)(ptr5 ? 0: 1) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8)) & v67) & 0x1)) {
                        if((unsigned int)result < (unsigned int)v12) {
                            *(char*)(result + v11) = 92;
                        }
                        ++result;
                        if((unsigned int)result < (unsigned int)v12) {
                            *(char*)(result + v11) = (v39 >>> 6) + 48;
                        }
                        ++result;
                        if((unsigned int)result < (unsigned int)v12) {
                            *(char*)(result + v11) = ((v39 >>> 3) & 0x7) + 48;
                        }
                        ++result;
                        v39 = (v39 & 0x7) + 48;
                    }
                    v7 = v25 + 1;
                    if((unsigned int)ptr4 <= (unsigned int)v7) {
                        goto loc_8049296;
                    }
                    else {
                        if((unsigned int)result < (unsigned int)v12) {
                            *(char*)(result + v11) = v39;
                        }
                        ++result;
                        int v68 = v13;
                        v25 = v7;
                        v67 = (int)*(char*)(v68 + v7);
                        v39 = *(char*)(v68 + v7);
                    }
                }
            }
        loc_8049240:
            int v69 = v16;
            int v70 = v25;
            char v71 = v69 ? 0: 1;
            v7 = v70 + 1;
            if(!v71) {
                int v72 = param2;
                int v73 = (unsigned int)v39;
                int v74 = (unsigned int)(v39 >>> 5);
                if(((unsigned char)(*(int*)(v74 * 4 + v72 + 4) >> (v73 & 0x1f)) & 0x1)) {
                loc_8049271:
                    if((unsigned int)result < (unsigned int)v12) {
                        *(char*)(result + v11) = 92;
                    }
                    ++result;
                    v7 = v25 + 1;
                }
            }
        }
    loc_8049296:
        if((unsigned int)result < (unsigned int)v12) {
            *(char*)(result + v11) = v39;
        }
        ++result;
        v25 = v7;
    }
}

int quotearg_char(int param0, char param1) {
    char v0;
    int v1;
    int v2 = v1;
    unsigned char v3 = *(int*)&default_quoting_options;
    unsigned int v4 = gvar_804B924;
    unsigned int v5 = gvar_804B928;
    unsigned int v6 = gvar_804B92C;
    unsigned int v7 = gvar_804B930;
    unsigned int v8 = gvar_804B934;
    unsigned int v9 = gvar_804B938;
    unsigned int v10 = gvar_804B93C;
    unsigned int v11 = gvar_804B940;
    *(int*)&v0 = (int)param1;
    set_char_quoting(&v3, v0, 1);
    return quotearg_n_options((int*)&v3);
}

int quotearg_colon(int param0) {
    char v0;
    *(int*)&v0 = 58;
    return quotearg_char(param0, ':');
}

int quotearg_n(int* param0, int param1) {
    return quotearg_n_options((int*)&default_quoting_options);
}

int quotearg_n_options(int* param0) {
    int* ptr0;
    void* ptr1;
    int v0;
    int v1;
    int* ptr2;
    int v2;
    int v3;
    int v4;
    int* ptr3 = &ptr2;
    int v5 = v4;
    int* ptr4 = &v5;
    char v6 = &ptr0 == 60;
    char v7 = (int)&v3 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 60);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x2c) ^ (int)&v3) >>> 4) & 0x1);
    char v10 = (unsigned int)&v5 < 44;
    char v11 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v3) & (int)(int*)((int)&v5 ^ 0x2c)) < 0;
    int v12 = v2;
    int v13 = v0;
    int v14 = v1;
    →__errno_location();
    int v15 = *(int*)v2;
    int v16 = *(int*)v2;
    int v17 = v12;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = 0;
    char v22 = 0;
    if(v19) {
        /*NO_RETURN*/ →abort();
    }
    int v23 = v12;
    char v24 = nslots.1 == v23;
    char v25 = (int)nslots.1 < v23;
    char v26 = __parity__((unsigned char)nslots.1 - (unsigned char)v23);
    char v27 = nslots.1 < (unsigned int)v23;
    char v28 = (((nslots.1 - v23) ^ nslots.1) & (nslots.1 ^ v23)) < 0;
    char v29 = (((nslots.1 - v23) ^ (nslots.1 ^ v23)) >>> 4) & 0x1;
    if((v27 || v24)) {
        int v30 = v23;
        unsigned int v31 = (unsigned int)(v30 + 1);
        v18 = v31 == 0x1fffffff;
        v19 = (int)v31 < 0x1fffffff;
        v20 = __parity__((unsigned char)v31 - 0xff);
        v22 = v31 < 0x1fffffff;
        v21 = (((v31 - 0x1fffffff) ^ v31) & (v31 ^ 0x1fffffff)) < 0;
        v9 = (((v31 - 0x1fffffff) ^ (v31 ^ 0x1fffffff)) >>> 4) & 0x1;
        if(!v22 && !v18) {
            int* ptr5 = &ptr1;
            /*NO_RETURN*/ xalloc_die();
        }
        void* __ptr = slotvec.3;
        if(__ptr == &slotvec0.2) {
            void* ptr6 = xmalloc(8);
            slotvec.3 = ptr6;
            __ptr = ptr6;
            int v32 = *(int*)&slotvec0.2;
            *(int*)((int)__ptr + 4) = *(int*)((char*)&slotvec0.2 + 4);
            *(int*)__ptr = v32;
        }
        void* ptr7 = xrealloc(__ptr, (size_t)(v31 * 8));
        slotvec.3 = ptr7;
        unsigned int v33 = nslots.1;
        int* ptr8 = (int*)(v33 * 8 + (int)ptr7);
        unsigned int v34 = (v31 - v33) * 8;
        if(v34 > 7 && (int*)((int)ptr8 & 0x4)) {
            *ptr8 = 0;
            v34 -= 4;
            ++ptr8;
        }
        for(int i = v34 >>> 2; i != 0; --i) {
            *ptr8 = 0;
            ++ptr8;
        }
        nslots.1 = v31;
    }
    unsigned int v35 = slotvec.3;
    int v36 = *(int*)(v12 * 8 + v35);
    int result = *(int*)(v12 * 8 + v35 + 4);
    int v37 = quotearg_buffer(result, v36, v13, v14, param0);
    if((unsigned int)v37 >= (unsigned int)v36) {
        unsigned int v38 = slotvec.3;
        *(size_t*)(v12 * 8 + v38) = (size_t)(v37 + 1);
        if(result != &slot0.0) {
            →free(result);
            v38 = slotvec.3;
        }
        result = (int)xmalloc((size_t)(v37 + 1));
        int* ptr9 = param0;
        *(int*)(v12 * 8 + v38 + 4) = result;
        quotearg_buffer(result, (int)(size_t)(v37 + 1), v13, v14, ptr9);
    }
    →__errno_location();
    *(int*)v2 = v16;
    return result;
}

int quotearg_n_style(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3 = v1;
    quoting_options_from_style(v2, param1);
    return quotearg_n_options(&v0);
}

int quotearg_n_style_mem(int param0, int param1, int param2, int param3) {
    char v0;
    int v1;
    int v2;
    int v3 = v1;
    quoting_options_from_style(v2, param1);
    return quotearg_n_options(&v0);
}

int quotearg_style(int param0, int param1) {
    return quotearg_n_style(0, param0, param1);
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
    int v0;
    int v1 = v0;
    int* ptr0 = (int*)((unsigned int)(param1 >>> 5) * 4 + param0 + 4);
    if(param0) {
        int v2 = *ptr0;
        result = (v2 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *ptr0 = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v2;
    }
    else {
        unsigned int v3 = *(unsigned int*)((unsigned int)(param1 >>> 5) * 4 + (int)&gvar_804B924);
        result = (v3 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *(unsigned int*)((unsigned int)(param1 >>> 5) * 4 + (int)&gvar_804B924) = (unsigned int)((((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v3);
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

int sub_80487CE() {
    return gvar_804B74C();
}

int usage(int param0) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = 5;
    int* ptr0 = &v3;
    int v6 = "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n";
    int* ptr1 = &v3;
    char v7 = &v0 == 28;
    char v8 = (int)&v4 < 0;
    char v9 = __parity__((unsigned char)&v0 - 28);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x18) ^ (int)&v4) >>> 4) & 0x1);
    char v11 = (unsigned int)&v3 < 24;
    char v12 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int)(int*)((int)&v3 ^ 0x18)) < 0;
    →dcgettext(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    unsigned int v13 = program_name;
    unsigned int v14 = program_name;
    →printf(v2);
    int v15 = 5;
    int v16 = "      --help     display this help and exit\n";
    →dcgettext(0, "      --help     display this help and exit\n", 5);
    int v17 = stdout;
    →fputs_unlocked(v2, v17);
    int v18 = 5;
    int v19 = "      --version  output version information and exit\n";
    →dcgettext(0, "      --version  output version information and exit\n", 5);
    int v20 = stdout;
    →fputs_unlocked(v2, v20);
    int v21 = "\nReport bugs to <%s>.\n";
    int v22 = 5;
    →dcgettext(0, "\nReport bugs to <%s>.\n", 5);
    int v23 = "bug-coreutils@gnu.org";
    unsigned int v24 = "bug-coreutils@gnu.org";
    →printf(v2);
    int __status = param0;
    int* ptr2 = &v1;
    /*NO_RETURN*/ →exit(__status);
}

int version_etc(int param0, int param1, int param2, int param3) {
    char v0;
    return version_etc_va(param0, param1, param2, param3, &v0);
}

int version_etc_va(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result;
    int v4;
    int v5;
    int v6 = v4;
    unsigned int v7 = 0;
    int v8 = param0;
    int v9 = param2;
    int* ptr0 = (int*)(param4 + 4);
    int v10 = param3;
    if(*(int*)param4) {
        do {
            ++v7;
            v5 = *ptr0;
            ++ptr0;
        }
        while(v5);
    }
    if(param1) {
        int v11 = v10;
        v3 = v9;
        →fprintf(v8, "%s (%s) %s\n");
    loc_804993C:
        switch(v7) {
            case 0: {
                /*NO_RETURN*/ →abort();
                v3 = v10;
                →fprintf(v8, "%s %s\n");
                goto loc_804993C;
            }
            case 1: {
                v1 = 5;
                v0 = "Written by %s.\n";
            loc_8049951:
                v2 = v0;
            loc_804995C:
                →dcgettext(0, v2, 5);
                →vfprintf(v8, result, param4);
                char* ptr1 = *(unsigned int*)(v8 + 20);
                if(*(unsigned int*)(v8 + 24) > (unsigned int)ptr1) {
                    *ptr1 = 10;
                    *(int*)(v8 + 20) = *(int*)(v8 + 20) + 1;
                }
                else {
                    →__overflow(v8, 10);
                }
                →fputs_unlocked(version_etc_copyright, v8);
                char* ptr2 = *(unsigned int*)(v8 + 20);
                if(*(unsigned int*)(v8 + 24) > (unsigned int)ptr2) {
                    *ptr2 = 10;
                    *(int*)(v8 + 20) = *(int*)(v8 + 20) + 1;
                }
                else {
                    →__overflow(v8, 10);
                }
                →dcgettext(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
                →fputs_unlocked(result, v8);
                return result;
            }
            case 2: {
                v1 = 5;
                v2 = "Written by %s and %s.\n";
                goto loc_804995C;
            }
            case 3: {
                v0 = "Written by %s, %s, and %s.\n";
                v1 = 5;
                goto loc_8049951;
            }
            case 4: {
                v1 = 5;
                v0 = "Written by %s, %s, %s,\nand %s.\n";
                goto loc_8049951;
            }
            case 5: {
                v1 = 5;
                v0 = "Written by %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049951;
            }
            case 6: {
                v1 = 5;
                v2 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                goto loc_804995C;
            }
            case 7: {
                v1 = 5;
                v2 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                goto loc_804995C;
            }
            case 8: {
                v1 = 5;
                v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
                goto loc_8049951;
            }
            case 9: {
                v1 = 5;
                v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049951;
            }
        }
        v1 = 5;
        v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        goto loc_8049951;
    }
    else {
        v3 = v10;
        →fprintf(v8, "%s %s\n");
        goto loc_804993C;
    }
}

void* x2nrealloc(void* param0, size_t param1, unsigned int param2) {
    void* ptr0;
    void* ptr1;
    int v0;
    int* ptr2;
    char v1;
    int* ptr3 = &ptr2;
    int* ptr4 = &ptr2;
    char v2 = &ptr0 == 28;
    char v3 = (int)&v1 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 28);
    char v5 = (unsigned int)&ptr2 < 24;
    char v6 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v1) & (int)(int*)((int)&ptr2 ^ 0x18)) < 0;
    void* __ptr = param0;
    size_t v7 = param1;
    char v8 = __ptr ? 0: 1;
    char v9 = (int)__ptr < 0;
    char v10 = __parity__((unsigned char)__ptr);
    char v11 = 0;
    char v12 = 0;
    int v13 = v0;
    unsigned int v14 = *(unsigned int*)v7;
    unsigned int v15 = param2;
    if(!v8) {
        int v16 = 0;
        char v17 = 1;
        char v18 = 0;
        char v19 = 1;
        char v20 = 0;
        char v21 = 0;
        int v22 = 0x7fffffff;
        unsigned int v23 = 0x7fffffff % v15;
        unsigned int v24 = 0x7fffffff / v15;
        unsigned int v25 = v23;
        char v26 = v24 == v14;
        char v27 = (int)v24 < (int)v14;
        char v28 = __parity__((unsigned char)v24 - (unsigned char)v14);
        char v29 = v24 < v14;
        char v30 = (int)(((v24 - v14) ^ v24) & (v24 ^ v14)) < 0;
        char v31 = (((v24 - v14) ^ (v24 ^ v14)) >>> 4) & 0x1;
        if(v29) {
            int* ptr5 = &ptr1;
            /*NO_RETURN*/ xalloc_die();
        }
        v14 *= 2;
    }
    else if(!v14) {
        v14 = 64 / v15 ? 64 / v15: 64 / v15 + 1;
    }
    *(unsigned int*)v7 = v14;
    return xrealloc(__ptr, (size_t)(v14 * v15));
}

void* x2realloc(void* param0, size_t param1) {
    void* ptr0;
    void* ptr1;
    size_t v0;
    char v1;
    size_t v2 = &v0;
    size_t v3 = &v0;
    char v4 = &ptr0 == 12;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 12);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v0 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v8 = &v0 < 8;
    char v9 = (int)(int*)((int)(int*)(&v0 ^ (int)&v1) & (int)(int*)(&v0 ^ 0x8)) < 0;
    void* __ptr = param0;
    size_t v10 = param1;
    char v11 = __ptr ? 0: 1;
    char v12 = (int)__ptr < 0;
    char v13 = __parity__((unsigned char)__ptr);
    char v14 = 0;
    char v15 = 0;
    size_t __size = *(size_t*)v10;
    if(!v11) {
        char v16 = __size ? 0: 1;
        char v17 = __size >= 0x80000000;
        char v18 = __parity__((unsigned char)__size);
        char v19 = 0;
        char v20 = 0;
        if(v17) {
            int* ptr2 = &ptr1;
            /*NO_RETURN*/ xalloc_die();
        }
        __size *= 2;
    }
    else if(!__size) {
        __size = 64;
    }
    *(size_t*)v10 = __size;
    return xrealloc(__ptr, __size);
}

void xalloc_die() {
    unsigned int v0 = xalloc_fail_func;
    if(!v0) {
    loc_8049B48:
        →dcgettext(0, &xalloc_msg_memory_exhausted, 5);
        →error(exit_failure, 0, &gvar_804A0BC);
        /*NO_RETURN*/ →abort();
    }
    v0();
    goto loc_8049B48;
}

void* xcalloc(size_t __nmemb, size_t __size) {
    int v0;
    void* ptr0;
    int v1;
    int* ptr1;
    int v2;
    void* result;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int* ptr2 = &ptr1;
    int v9 = v1;
    int v10 = -1;
    int* ptr3 = &v9;
    char v11 = &v0 == 28;
    char v12 = (int)&v2 < 0;
    char v13 = __parity__((unsigned char)&v0 - 28);
    char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x14) ^ (int)&v2) >>> 4) & 0x1);
    char v15 = (unsigned int)&v9 < 20;
    char v16 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v2) & (int)(int*)((int)&v9 ^ 0x14)) < 0;
    int v17 = (int)__size;
    int v18 = (int)__nmemb;
    int v19 = 0xffffffff % (unsigned int)v17;
    unsigned int v20 = 0xffffffff / (unsigned int)v17;
    int v21 = v19;
    char v22 = v20 == v18;
    char v23 = (int)v20 < v18;
    char v24 = __parity__((unsigned char)v20 - (unsigned char)v18);
    char v25 = v20 < (unsigned int)v18;
    char v26 = (((v20 - v18) ^ v20) & (v20 ^ v18)) < 0;
    char v27 = (((v20 - v18) ^ (v20 ^ v18)) >>> 4) & 0x1;
    if(!v25) {
        →calloc(v18, v17);
        v22 = result ? 0: 1;
        v23 = (int)result < 0;
        v24 = __parity__((unsigned char)result);
        v26 = 0;
        v25 = 0;
        if(!v22) {
            return result;
        }
    }
    int* ptr4 = &ptr0;
    /*NO_RETURN*/ xalloc_die();
}

int xclone(FUNCPTR __fn, void* __child_stack, int __flags, void* __arg, ...) {
    int result;
    int v0;
    int v1 = v0;
    void* ptr0 = xmalloc((size_t)__child_stack);
    →memcpy((int)ptr0, (int)__fn, (int)__child_stack);
    return result;
}

void* xmalloc(size_t __size) {
    int* ptr0;
    int* ptr1;
    int v0;
    void* ptr2;
    void* result;
    int* ptr3 = &ptr0;
    int* ptr4 = &ptr0;
    char v1 = &ptr1 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr1 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v7 = (int)__size;
    →malloc(v7);
    char v8 = result ? 0: 1;
    char v9 = (int)result < 0;
    char v10 = __parity__((unsigned char)result);
    char v11 = 0;
    char v12 = 0;
    if(v8) {
        int* ptr5 = &ptr2;
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

int xnmalloc(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    void* ptr0;
    int v1;
    int* ptr1;
    int v2;
    int result;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int* ptr2 = &ptr1;
    int v9 = v1;
    int v10 = -1;
    int* ptr3 = &v9;
    char v11 = &v0 == 12;
    char v12 = (int)&v2 < 0;
    char v13 = __parity__((unsigned char)&v0 - 12);
    char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v15 = (unsigned int)&v9 < 4;
    char v16 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v2) & (int)(int*)((int)&v9 ^ 0x4)) < 0;
    unsigned int v17 = param1;
    unsigned int v18 = param0;
    unsigned int v19 = 0xffffffff % v17;
    unsigned int v20 = 0xffffffff / v17;
    unsigned int v21 = v19;
    char v22 = v20 == v18;
    char v23 = (int)v20 < (int)v18;
    char v24 = __parity__((unsigned char)v20 - (unsigned char)v18);
    char v25 = v20 < v18;
    char v26 = (int)(((v20 - v18) ^ v20) & (v20 ^ v18)) < 0;
    char v27 = (((v20 - v18) ^ (v20 ^ v18)) >>> 4) & 0x1;
    if(!v25) {
        v19 = v18;
        int v28 = (int)(v18 * v17);
        char v29 = (long long)v17 * (long long)v19 != (long long)v28;
        char v30 = (long long)v17 * (long long)v19 != (long long)v28;
        →malloc(v28);
        v22 = result ? 0: 1;
        v23 = result < 0;
        v24 = __parity__((unsigned char)result);
        v26 = 0;
        v25 = 0;
        if(!v22) {
            return result;
        }
    }
    int* ptr4 = &ptr0;
    /*NO_RETURN*/ xalloc_die();
}

int xnrealloc(int param0, unsigned int param1, unsigned int param2) {
    unsigned int v0;
    void* ptr0;
    int result;
    int* ptr1;
    int v1;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int* ptr2 = &ptr1;
    int* ptr3 = &ptr1;
    char v9 = &v0 == 28;
    char v10 = (int)&v1 < 0;
    char v11 = __parity__((unsigned char)&v0 - 28);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x18) ^ (int)&v1) >>> 4) & 0x1);
    char v13 = (unsigned int)&ptr1 < 24;
    char v14 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v1) & (int)(int*)((int)&ptr1 ^ 0x18)) < 0;
    unsigned int v15 = param2;
    int v16 = -1;
    int v17 = v2;
    unsigned int v18 = param1;
    int v19 = param0;
    unsigned int v20 = 0xffffffff % v15;
    unsigned int v21 = 0xffffffff / v15;
    unsigned int v22 = v20;
    char v23 = v21 == v18;
    char v24 = (int)v21 < (int)v18;
    char v25 = __parity__((unsigned char)v21 - (unsigned char)v18);
    char v26 = v21 < v18;
    char v27 = (int)(((v21 - v18) ^ v21) & (v21 ^ v18)) < 0;
    char v28 = (((v21 - v18) ^ (v21 ^ v18)) >>> 4) & 0x1;
    if(!v26) {
        v20 = v18;
        int v29 = (int)(v18 * v15);
        char v30 = (long long)v15 * (long long)v20 != (long long)v29;
        char v31 = (long long)v15 * (long long)v20 != (long long)v29;
        →realloc(v19, v29);
        v23 = result ? 0: 1;
        v24 = result < 0;
        v25 = __parity__((unsigned char)result);
        v27 = 0;
        v26 = 0;
        if(!v23) {
            return result;
        }
    }
    int* ptr4 = &ptr0;
    /*NO_RETURN*/ xalloc_die();
}

void* xrealloc(void* __ptr, size_t __size) {
    int* ptr0;
    int* ptr1;
    int v0;
    void* ptr2;
    void* result;
    int* ptr3 = &ptr0;
    int* ptr4 = &ptr0;
    char v1 = &ptr1 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr1 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v7 = (int)__ptr;
    int v8 = (int)__size;
    →realloc(v7, v8);
    char v9 = result ? 0: 1;
    char v10 = (int)result < 0;
    char v11 = __parity__((unsigned char)result);
    char v12 = 0;
    char v13 = 0;
    if(v9) {
        int* ptr5 = &ptr2;
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

int xzalloc(size_t __size) {
    int result;
    int v0;
    int v1 = v0;
    void* ptr0 = xmalloc(__size);
    →memset((int)ptr0, 0, (int)__size);
    return result;
}
