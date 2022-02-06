
void __i686.get_pc_thunk.bx() {
}

int atexit(FUNCPTR __func) {
    int result;
    →__cxa_atexit();
    return result;
}

int cat(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9) {
    unsigned char v0;
    char v1;
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7 = v3;
    int v8 = param4;
    int v9 = param5;
    int v10 = param6;
    int v11 = param7;
    int v12 = param8;
    int v13 = param9;
    unsigned char v14 = (unsigned char)v8;
    char v15 = (unsigned char)v9;
    unsigned char v16 = (unsigned char)v10;
    char v17 = (unsigned char)v11;
    unsigned char v18 = (unsigned char)v12;
    unsigned char v19 = (unsigned char)v13;
    unsigned int v20 = newlines2;
    unsigned char v21 = 1;
    int v22 = param0;
    int v23 = param0 + 1;
    int v24 = param2;
loc_8049160:
    while(1) {
        unsigned int v25 = (unsigned int)(param2 + param3);
        int v26 = v24;
        char v27 = v26 == v25;
        if(((unsigned int)v26 > v25 || v27)) {
            int v28 = param2;
            do {
                int* ptr0 = full_write(1, v28, param3);
                if(ptr0 != param3) {
                    →gettext("write error");
                    int v29 = v6;
                    →__errno_location();
                    →error(1, *(int*)v6, v29);
                }
                v28 += param3;
                v2 = v24 - v28;
                v4 = param3;
                v5 = v4 == v2;
            }
            while((unsigned int)v4 < (unsigned int)v2 || v5);
            →memmove(param2, v28, v2);
            v24 = v2 + param2;
        }
        int v30 = v23;
        char v31 = v30 == v22;
        if((unsigned int)v30 >= (unsigned int)v22 && !v31) {
            unsigned char v32 = 0;
            int v33 = 0;
            if(v21) {
                int v34 = input_desc;
                int* ptr1 = &v33;
                →ioctl(v34, 21531);
                if(v6 < 0) {
                    →__errno_location();
                    if(*(unsigned int*)v6 != 95) {
                        →__errno_location();
                        if(*(unsigned int*)v6 != 25) {
                            →__errno_location();
                            if(*(unsigned int*)v6 != 22) {
                                →__errno_location();
                                if(*(unsigned int*)v6 != 19) {
                                    →__errno_location();
                                    if(*(unsigned int*)v6 != 38) {
                                        int v35 = quote(infile);
                                        →gettext("cannot do ioctl on %s");
                                        int v36 = v6;
                                        →__errno_location();
                                        →error(0, *(int*)v6, v36);
                                        newlines2 = v20;
                                        v1 = 0;
                                        return (unsigned int)v1;
                                    }
                                }
                            }
                        }
                    }
                    v21 = 0;
                }
            }
            unsigned int* ptr2 = safe_read(input_desc, param0, param1);
            if(ptr2 == -1) {
                →__errno_location();
                →error(0, *(int*)v6, &gvar_8050132);
                write_pending(param2, &v24);
                newlines2 = v20;
                v1 = 0;
                return (unsigned int)v1;
            }
            else if(!ptr2) {
                write_pending(param2, &v24);
                newlines2 = v20;
                v1 = 1;
                return (unsigned int)v1;
            }
            v23 = param0;
            v22 = (int)ptr2 + v23;
            *(char*)v22 = 10;
        }
        else {
            ++v20;
            if((int)v20 > 0) {
                if((int)v20 > 1) {
                    v20 = 2;
                    if(v19) {
                        int v37 = v23;
                        v0 = *(unsigned char*)v37;
                        ++v23;
                        goto loc_8049434;
                    }
                }
                if(((unsigned int)(v17 ^ 0x1) & (unsigned int)v16)) {
                    next_line_num();
                    →stpcpy(v24, line_num_print);
                    v24 = v6;
                }
            }
            if(v18) {
                int v38 = v24;
                *(char*)v38 = 36;
                v24 = v38 + 1;
            }
            int v39 = v24;
            *(char*)v39 = 10;
            v24 = v39 + 1;
        }
        int v40 = v23;
        v0 = *(unsigned char*)v40;
        ++v23;
    loc_8049434:
        if(v0 != 10) {
            if(v20 < 0x80000000 && v16) {
                next_line_num();
                →stpcpy(v24, line_num_print);
                v24 = v6;
            }
            if(v14) {
                while(1) {
                    if(v0 == 127) {
                        int v41 = v24;
                        *(char*)v41 = 94;
                        char* ptr3 = (char*)(v41 + 1);
                        *ptr3 = 63;
                        v24 = (int)(ptr3 + 1);
                    }
                    else if(v0 <= 126) {
                        int v42 = v24;
                        *(unsigned char*)v42 = v0;
                        v24 = v42 + 1;
                    }
                    else if(v0 > 31) {
                        int v43 = v24;
                        *(char*)v43 = 77;
                        char* ptr4 = (char*)(v43 + 1);
                        *ptr4 = 45;
                        v24 = (int)(ptr4 + 1);
                        if(v0 <= 159) {
                            int v44 = v24;
                            *(char*)v44 = 94;
                            char* ptr5 = (char*)(v44 + 1);
                            *ptr5 = v0 - 64;
                            v24 = (int)(ptr5 + 1);
                        }
                        else if(v0 != 0xff) {
                            int v45 = v24;
                            *(char*)v45 = v0 + 128;
                            v24 = v45 + 1;
                        }
                        else {
                            int v46 = v24;
                            *(char*)v46 = 94;
                            char* ptr6 = (char*)(v46 + 1);
                            *ptr6 = 63;
                            v24 = (int)(ptr6 + 1);
                        }
                    }
                    else if(v0 == 9 && !((v15 ^ 0x1) ^ 0x1)) {
                        int v47 = v24;
                        *(char*)v47 = 9;
                        v24 = v47 + 1;
                    }
                    else if(0) {
                        v20 = 0xffffffff;
                        continue loc_8049160;
                    }
                    else {
                        int v48 = v24;
                        *(char*)v48 = 94;
                        char* ptr7 = (char*)(v48 + 1);
                        *ptr7 = v0 + 64;
                        v24 = (int)(ptr7 + 1);
                    }
                    int v49 = v23;
                    v0 = *(unsigned char*)v49;
                    ++v23;
                }
            }
            while(1) {
                if(v0 == 9 && !(v15 ^ 0x1)) {
                    int v50 = v24;
                    *(char*)v50 = 94;
                    char* ptr8 = (char*)(v50 + 1);
                    *ptr8 = v0 + 64;
                    v24 = (int)(ptr8 + 1);
                    goto loc_80495E0;
                }
                if(v0 == 10) {
                    break;
                }
                else {
                    int v51 = v24;
                    *(unsigned char*)v51 = v0;
                    v24 = v51 + 1;
                loc_80495E0:
                    int v52 = v23;
                    v0 = *(unsigned char*)v52;
                    ++v23;
                }
            }
            v20 = 0xffffffff;
        }
    }
}

int clone_quoting_options(int param0) {
    int* ptr0;
    →__errno_location();
    int v0 = *ptr0;
    int result = xmemdup(param0 ? param0: &default_quoting_options, 36);
    →__errno_location();
    *ptr0 = v0;
    return result;
}

int close_stdout() {
    int result;
    int v0;
    int v1 = v0;
    int v2 = close_stream(stdout);
    if(v2) {
        →gettext("write error");
        int v3 = result;
        if(file_name) {
            int v4 = quotearg_colon(file_name);
            →__errno_location();
            →error(0, *(int*)result, "%s: %s");
        }
        else {
            →__errno_location();
            →error(0, *(int*)result, &gvar_80505E2);
        }
        /*NO_RETURN*/ →_exit(exit_failure);
    }
    result = close_stream(stderr);
    if(result) {
        /*NO_RETURN*/ →_exit(exit_failure);
    }
    return result;
}

unsigned int close_stdout_set_file_name(unsigned int param0) {
    file_name = param0;
    return param0;
}

int close_stream(int param0) {
    int result;
    unsigned int* ptr0;
    →__fpending(param0);
    →ferror_unlocked(param0);
    →fclose(param0);
    if(ptr0) {
        if(!ptr0) {
            →__errno_location();
            *ptr0 = 0;
        }
        result = -1;
    }
    else {
        result = 0;
    }
    return result;
}

int emit_bug_reporting_address() {
    int result;
    →gettext("\nReport bugs to <%s>.\n");
    →printf(result);
    return result;
}

int* fseterr(int* param0) {
    int* result = param0;
    *result = *param0 | 0x20;
    return result;
}

int fstat64(int __fd, stat64* __buf) {
    int result;
    →__fxstat64(3, __fd, (int)__buf);
    return result;
}

int* full_write(int param0, int param1, int param2) {
    int* ptr0;
    int* result = NULL;
    int v0 = param1;
    while(param2) {
        unsigned int* ptr1 = safe_write(param0, v0, param2);
        if(ptr1 == -1) {
            return result;
        }
        else if(!ptr1) {
            →__errno_location();
            *ptr0 = 28;
            return result;
        }
        result = (int*)((int)ptr1 + (int)result);
        v0 += (int)ptr1;
        param2 -= (int)ptr1;
    }
    return result;
}

int get_quoting_style(unsigned int* param0) {
    return (int)(param0 ? *param0: *(int*)&default_quoting_options);
}

unsigned int gettext_quote(int param0, unsigned int param1) {
    unsigned int v0;
    →gettext(param0);
    unsigned int result = v0;
    if(result == param0 && param1 == 6) {
        result = &gvar_805067C;
    }
    return result;
}

int is_infinitel(int param0, int param1, int param2) {
    int result;
    int v0 = rpl_isnanl(param0, param1, param2);
    if(!v0) {
        __SyntheticTypeUnknownF v1 = *(__int128*)&param0;
        fucompp(*(__int128*)&param0, v1 + v1);
        fnstsw(0);
        result = 0;
    }
    else {
        result = 1;
    }
    return result;
}

int main() {
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char v7;
    int v8;
    int v9;
    char v10;
    int v11;
    int v12;
    int v13;
    void* ptr1;
    int v14;
    int v15;
    int v16;
    char v17;
    char v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int* ptr2 = &v10;
    char v23 = &v9 ? 0: 1;
    char v24 = (int)&v9 < 0;
    char v25 = __parity__((unsigned char)&v9);
    char v26 = 0;
    char v27 = 0;
    int v28 = v9;
    int* ptr3 = &v12;
    int v29 = v19;
    int* ptr4 = &v10;
    int* ptr5 = &ptr4;
    char v30 = &v9 == 0x110;
    char v31 = (int)&v13 < 0;
    char v32 = __parity__((unsigned char)&v9 - 16);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr4 ^ 0xf8) ^ (int)&v13) >>> 4) & 0x1);
    char v34 = (unsigned int)&ptr4 < 248;
    char v35 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&v13) & (int)(int*)((int)&ptr4 ^ 0xf8)) < 0;
    int* ptr6 = &v10;
    →getpagesize();
    int v36 = v20;
    unsigned char v37 = 1;
    unsigned char v38 = 1;
    unsigned char v39 = 0;
    char v40 = 0;
    char v41 = 0;
    char v42 = 0;
    char v43 = 0;
    char v44 = 0;
    char v45 = 0;
    int v46 = 0;
    int* ptr7 = ptr6;
    unsigned int* ptr8 = *(unsigned int*)(ptr7 + 1);
    unsigned int v47 = *ptr8;
    program_name = *ptr8;
    →setlocale(6, &gvar_8050260);
    →bindtextdomain("coreutils", "/usr/local/share/locale");
    →textdomain("coreutils");
    int v48 = atexit((void __cdecl (*_)())&close_stdout);
    while(1) {
        int v49 = 0;
        v8 = &long_options.4647;
        int v50 = "benstuvAET";
        int* ptr9 = ptr6;
        int v51 = *(ptr9 + 1);
        int v52 = *(ptr9 + 1);
        int* ptr10 = ptr6;
        int v53 = *ptr10;
        →getopt_long(v53, v51, "benstuvAET", &long_options.4647, 0);
        int v54 = v20;
        char v55 = v54 == -1;
        char v56 = v54 < -1;
        char v57 = __parity__((unsigned char)v54 - 0xff);
        char v58 = (unsigned int)v54 < 0xffffffff;
        char v59 = (((v54 + 1) ^ v54) & ~v54) < 0;
        char v60 = (((v54 + 1) ^ ~v54) >>> 4) & 0x1;
        if(v55) {
            break;
        }
        else {
            int v61 = v54;
            int v62 = v54;
            char v63 = v62 == 98;
            char v64 = v62 < 98;
            char v65 = __parity__((unsigned char)v62 - 98);
            char v66 = (unsigned int)v62 < 98;
            char v67 = (((v62 - 98) ^ v62) & (v62 ^ 0x62)) < 0;
            char v68 = (((v62 - 98) ^ (v62 ^ 0x62)) >>> 4) & 0x1;
            if(!v63) {
                char v69 = v62 == 98;
                char v70 = v62 < 98;
                char v71 = __parity__((unsigned char)v62 - 98);
                char v72 = (unsigned int)v62 < 98;
                char v73 = (((v62 - 98) ^ v62) & (v62 ^ 0x62)) < 0;
                char v74 = (((v62 - 98) ^ (v62 ^ 0x62)) >>> 4) & 0x1;
                if(!v69 && v70 == v73) {
                    char v75 = v62 == 115;
                    char v76 = v62 < 115;
                    char v77 = __parity__((unsigned char)v62 - 115);
                    char v78 = (unsigned int)v62 < 115;
                    char v79 = (((v62 - 115) ^ v62) & (v62 ^ 0x73)) < 0;
                    char v80 = (((v62 - 115) ^ (v62 ^ 0x73)) >>> 4) & 0x1;
                    if(v75) {
                        goto loc_80497FF;
                    }
                    else {
                        char v81 = v62 == 115;
                        char v82 = v62 < 115;
                        char v83 = __parity__((unsigned char)v62 - 115);
                        char v84 = (unsigned int)v62 < 115;
                        char v85 = (((v62 - 115) ^ v62) & (v62 ^ 0x73)) < 0;
                        char v86 = (((v62 - 115) ^ (v62 ^ 0x73)) >>> 4) & 0x1;
                        if((v81 || v82 != v85)) {
                            char v87 = v62 == 101;
                            char v88 = v62 < 101;
                            char v89 = __parity__((unsigned char)v62 - 101);
                            char v90 = (unsigned int)v62 < 101;
                            char v91 = (((v62 - 101) ^ v62) & (v62 ^ 0x65)) < 0;
                            char v92 = (((v62 - 101) ^ (v62 ^ 0x65)) >>> 4) & 0x1;
                            if(!v87) {
                                char v93 = v62 == 110;
                                char v94 = v62 < 110;
                                char v95 = __parity__((unsigned char)v62 - 110);
                                char v96 = (unsigned int)v62 < 110;
                                char v97 = (((v62 - 110) ^ v62) & (v62 ^ 0x6e)) < 0;
                                char v98 = (((v62 - 110) ^ (v62 ^ 0x6e)) >>> 4) & 0x1;
                                if(!v93) {
                                    goto loc_8049893;
                                }
                                else {
                                    v40 = 1;
                                }
                            }
                            else {
                                v43 = 1;
                                v44 = 1;
                            }
                            continue;
                        }
                        else {
                            char v99 = v62 == 117;
                            char v100 = v62 < 117;
                            char v101 = __parity__((unsigned char)v62 - 117);
                            char v102 = (unsigned int)v62 < 117;
                            char v103 = (((v62 - 117) ^ v62) & (v62 ^ 0x75)) < 0;
                            char v104 = (((v62 - 117) ^ (v62 ^ 0x75)) >>> 4) & 0x1;
                            if(v99) {
                                continue;
                            }
                            else {
                                char v105 = v62 == 117;
                                char v106 = v62 < 117;
                                char v107 = __parity__((unsigned char)v62 - 117);
                                char v108 = (unsigned int)v62 < 117;
                                char v109 = (((v62 - 117) ^ v62) & (v62 ^ 0x75)) < 0;
                                char v110 = (((v62 - 117) ^ (v62 ^ 0x75)) >>> 4) & 0x1;
                                if(v106 != v109) {
                                    v45 = 1;
                                    v44 = 1;
                                    continue;
                                }
                                else {
                                    char v111 = v62 == 118;
                                    char v112 = v62 < 118;
                                    char v113 = __parity__((unsigned char)v62 - 118);
                                    char v114 = (unsigned int)v62 < 118;
                                    char v115 = (((v62 - 118) ^ v62) & (v62 ^ 0x76)) < 0;
                                    char v116 = (((v62 - 118) ^ (v62 ^ 0x76)) >>> 4) & 0x1;
                                    if(v111) {
                                        v44 = 1;
                                        continue;
                                    }
                                }
                            }
                        }
                    }
                    goto loc_8049893;
                }
                else {
                    char v117 = v62 == 65;
                    char v118 = v62 < 65;
                    char v119 = __parity__((unsigned char)v62 - 65);
                    char v120 = (unsigned int)v62 < 65;
                    char v121 = (((v62 - 65) ^ v62) & (v62 ^ 0x41)) < 0;
                    char v122 = (((v62 - 65) ^ (v62 ^ 0x41)) >>> 4) & 0x1;
                    if(v117) {
                        v44 = 1;
                        v43 = 1;
                        v45 = 1;
                        continue;
                    }
                    else {
                        char v123 = v62 == 65;
                        char v124 = v62 < 65;
                        char v125 = __parity__((unsigned char)v62 - 65);
                        char v126 = (unsigned int)v62 < 65;
                        char v127 = (((v62 - 65) ^ v62) & (v62 ^ 0x41)) < 0;
                        char v128 = (((v62 - 65) ^ (v62 ^ 0x41)) >>> 4) & 0x1;
                        if(!v123 && v124 == v127) {
                            char v129 = v62 == 69;
                            char v130 = v62 < 69;
                            char v131 = __parity__((unsigned char)v62 - 69);
                            char v132 = (unsigned int)v62 < 69;
                            char v133 = (((v62 - 69) ^ v62) & (v62 ^ 0x45)) < 0;
                            char v134 = (((v62 - 69) ^ (v62 ^ 0x45)) >>> 4) & 0x1;
                            if(!v129) {
                                char v135 = v62 == 84;
                                char v136 = v62 < 84;
                                char v137 = __parity__((unsigned char)v62 - 84);
                                char v138 = (unsigned int)v62 < 84;
                                char v139 = (((v62 - 84) ^ v62) & (v62 ^ 0x54)) < 0;
                                char v140 = (((v62 - 84) ^ (v62 ^ 0x54)) >>> 4) & 0x1;
                                if(v135) {
                                    v45 = 1;
                                    continue;
                                }
                            }
                            else {
                                v43 = 1;
                                continue;
                            }
                            goto loc_8049893;
                        }
                        else {
                            v7 = v62 == -131;
                            char v141 = v62 < -131;
                            char v142 = __parity__((unsigned char)v62 - 125);
                            char v143 = (unsigned int)v62 < 0xffffff7d;
                            char v144 = (((v62 + 131) ^ v62) & (v62 ^ 0xffffff7d)) < 0;
                            char v145 = (((v62 + 131) ^ (v62 ^ 0xffffff7d)) >>> 4) & 0x1;
                        }
                    }
                }
                if(v7) {
                loc_8049843:
                    int v146 = stdout;
                    int v147 = 0;
                    int v148 = "Richard M. Stallman";
                    int v149 = version_etc(v146, &gvar_80502BC, "GNU coreutils", "6.10");
                    /*NO_RETURN*/ →exit(0);
                }
                char v150 = v62 == -130;
                char v151 = v62 < -130;
                char v152 = __parity__((unsigned char)v62 - 126);
                char v153 = (unsigned int)v62 < 0xffffff7e;
                char v154 = (((v62 + 130) ^ v62) & (v62 ^ 0xffffff7e)) < 0;
                char v155 = (((v62 + 130) ^ (v62 ^ 0xffffff7e)) >>> 4) & 0x1;
                if(v150) {
                    int v156 = /*NO_RETURN*/ usage(0);
                    goto loc_8049843;
                }
                else {
                loc_8049893:
                    int v157 = /*NO_RETURN*/ usage(1);
                    continue;
                loc_80497FF:
                    v42 = 1;
                }
            }
            else {
                v40 = 1;
                v41 = 1;
            }
        }
    }
    stat64* ptr11 = &v16;
    int v158 = fstat64(1, &v16);
    char v159 = v158 ? 0: 1;
    char v160 = v158 < 0;
    char v161 = __parity__((unsigned char)v158);
    char v162 = 0;
    char v163 = 0;
    if(v160) {
        →gettext("standard output");
        int v164 = v20;
        →__errno_location();
        int v165 = *(int*)v20;
        →error(1, v165, v164);
    }
    int v166 = v11;
    char v167 = v166 ? 0: 1;
    char v168 = v166 < 0;
    char v169 = __parity__((unsigned char)v166);
    char v170 = 0;
    char v171 = 0;
    if(!v167 && v168 == 0) {
        int v172 = v11;
        char v173 = v172 == 0x20000000;
        char v174 = v172 < 0x20000000;
        char v175 = __parity__((unsigned char)v172);
        char v176 = (unsigned int)v172 < 0x20000000;
        char v177 = (((v172 - 0x20000000) ^ v172) & (v172 ^ 0x20000000)) < 0;
        char v178 = (((v172 - 0x20000000) ^ (v172 ^ 0x20000000)) >>> 4) & 0x1;
        if(!v176 && !v173) {
            goto loc_8049939;
        }
        else {
            int v179 = v11;
            v6 = v11;
        }
    }
    else {
    loc_8049939:
        v6 = 0x200;
    }
    int v180 = v6;
    int v181 = v6;
    int v182 = v14;
    unsigned int v183 = (unsigned int)(v182 & 0xf000);
    char v184 = v183 == 0x8000;
    char v185 = (int)v183 < 0x8000;
    char v186 = __parity__((unsigned char)v183);
    char v187 = v183 < 0x8000;
    char v188 = (((v183 - 0x8000) ^ v183) & (v183 ^ 0x8000)) < 0;
    char v189 = (((v183 - 0x8000) ^ (v183 ^ 0x8000)) >>> 4) & 0x1;
    if(v184) {
        int v190 = v16;
        int v191 = v15;
        v5 = v190;
        v4 = v191;
        int v192 = v22;
        int v193 = v21;
        v3 = v192;
        v2 = v193;
    }
    else {
        v38 = 0;
    }
    int v194 = (unsigned int)v40;
    int v195 = (unsigned int)v43;
    int v196 = v195 | v194;
    char v197 = v196 ? 0: 1;
    char v198 = v196 < 0;
    char v199 = __parity__((unsigned char)v196);
    char v200 = 0;
    char v201 = 0;
    int v202 = (unsigned int)v42;
    int v203 = v202 | v196;
    char v204 = v203 ? 0: 1;
    char v205 = v203 < 0;
    char v206 = __parity__((unsigned char)v203);
    char v207 = 0;
    char v208 = 0;
    infile = &gvar_80502DB;
    unsigned int v209 = optind;
    unsigned int v210 = optind;
    do {
        unsigned int v211 = v210;
        unsigned int* ptr12 = (unsigned int*)ptr6;
        char v212 = *ptr12 == v211;
        char v213 = *ptr12 > (int)v211;
        char v214 = __parity__((unsigned char)v211 - (unsigned char)*ptr12);
        char v215 = *ptr12 > v211;
        char v216 = (((v211 - *ptr12) ^ v211) & (*ptr12 ^ v211)) < 0;
        char v217 = (((v211 - *ptr12) ^ (*ptr12 ^ v211)) >>> 4) & 0x1;
        if(v213 != v216) {
            unsigned int v218 = v210;
            unsigned int v219 = v210;
            int v220 = (int)(v218 * 4);
            char v221 = (v219 >>> 30) & 0x1;
            char v222 = v216;
            char v223 = v220 ? 0: 1;
            char v224 = v220 < 0;
            char v225 = __parity__((unsigned char)v220);
            int* ptr13 = ptr6;
            int v226 = v220;
            unsigned int* ptr14 = (unsigned int*)(*(ptr13 + 1) + v220);
            char v227 = ptr14 ? 0: 1;
            char v228 = (int)ptr14 < 0;
            char v229 = __parity__((unsigned char)ptr14);
            char v230 = (int*)((int)(int*)((int)(int*)((*(ptr13 + 1) ^ v226) ^ (int)ptr14) >>> 4) & 0x1);
            char v231 = __carry__(*(ptr13 + 1), v226);
            char v232 = (int)(int*)((int)(int*)((int)ptr14 ^ v226) & ~(*(ptr13 + 1) ^ v226)) < 0;
            unsigned int v233 = *ptr14;
            infile = *ptr14;
        }
        int v234 = infile;
        →strcmp(v234, &gvar_80502DB);
        char v235 = v20 ? 0: 1;
        char v236 = v20 < 0;
        char v237 = __parity__((unsigned char)v20);
        char v238 = 0;
        char v239 = 0;
        if(v235) {
            v39 = 1;
            input_desc = 0;
            goto loc_8049A47;
        }
        else {
            int v240 = infile;
            int v241 = v46;
            →open64(v240, v241);
            input_desc = v20;
            unsigned int v242 = input_desc;
            char v243 = v242 ? 0: 1;
            char v244 = v242 >= 0x80000000;
            char v245 = __parity__((unsigned char)v242);
            char v246 = 0;
            char v247 = 0;
            if(v244) {
                v1 = infile;
                →__errno_location();
                int v248 = *(int*)v20;
                v8 = v1;
                →error(0, v248, &gvar_8050132);
                v37 = 0;
            }
            else {
            loc_8049A47:
                int __fd = input_desc;
                stat64* ptr15 = &v16;
                int v249 = fstat64(__fd, &v16);
                char v250 = v249 ? 0: 1;
                char v251 = v249 < 0;
                char v252 = __parity__((unsigned char)v249);
                char v253 = 0;
                char v254 = 0;
                if(v251) {
                    v1 = infile;
                    →__errno_location();
                    int v255 = *(int*)v20;
                    v8 = v1;
                    →error(0, v255, &gvar_8050132);
                    v37 = 0;
                }
                else {
                    int v256 = v11;
                    char v257 = v256 ? 0: 1;
                    char v258 = v256 < 0;
                    char v259 = __parity__((unsigned char)v256);
                    char v260 = 0;
                    char v261 = 0;
                    if(!v257 && v258 == 0) {
                        int v262 = v11;
                        char v263 = v262 == 0x20000000;
                        char v264 = v262 < 0x20000000;
                        char v265 = __parity__((unsigned char)v262);
                        char v266 = (unsigned int)v262 < 0x20000000;
                        char v267 = (((v262 - 0x20000000) ^ v262) & (v262 ^ 0x20000000)) < 0;
                        char v268 = (((v262 - 0x20000000) ^ (v262 ^ 0x20000000)) >>> 4) & 0x1;
                        if(!v266 && !v263) {
                            goto loc_8049AB0;
                        }
                        else {
                            int v269 = v11;
                            v0 = v11;
                        }
                    }
                    else {
                    loc_8049AB0:
                        v0 = 0x200;
                    }
                    int v270 = v0;
                    int v271 = v0;
                    char v272 = v38 ? 0: 1;
                    char v273 = v38 >= 128;
                    char v274 = __parity__(v38);
                    char v275 = v38 < 0;
                    char v276 = 0;
                    char v277 = 0;
                    if(!v272) {
                        int v278 = v16;
                        int v279 = v15;
                        int v280 = v15;
                        int v281 = v280 ^ v4;
                        int v282 = v278 ^ v5;
                        int v283 = v282 | v281;
                        char v284 = v283 ? 0: 1;
                        char v285 = v283 < 0;
                        char v286 = __parity__((unsigned char)v283);
                        char v287 = 0;
                        char v288 = 0;
                        if(!v284) {
                            goto loc_8049B37;
                        }
                        else {
                            int v289 = v22;
                            int v290 = v21;
                            int v291 = v21;
                            int v292 = v291 ^ v2;
                            int v293 = v289 ^ v3;
                            int v294 = v293 | v292;
                            char v295 = v294 ? 0: 1;
                            char v296 = v294 < 0;
                            char v297 = __parity__((unsigned char)v294);
                            char v298 = 0;
                            char v299 = 0;
                            if(!v295) {
                                goto loc_8049B37;
                            }
                            else {
                                unsigned int v300 = input_desc;
                                char v301 = v300 ? 0: 1;
                                char v302 = v300 >= 0x80000000;
                                char v303 = __parity__((unsigned char)v300);
                                char v304 = 0;
                                char v305 = 0;
                                if(v301) {
                                    goto loc_8049B37;
                                }
                                else {
                                    v1 = infile;
                                    →gettext("%s: input file is output file");
                                    v8 = v1;
                                    →error(0, 0, v20);
                                    v37 = 0;
                                }
                            }
                        }
                    }
                    else {
                    loc_8049B37:
                        int v306 = (unsigned int)v40;
                        int v307 = (unsigned int)v43;
                        int v308 = v307 | v306;
                        char v309 = v308 ? 0: 1;
                        char v310 = v308 < 0;
                        char v311 = __parity__((unsigned char)v308);
                        char v312 = 0;
                        char v313 = 0;
                        int v314 = (unsigned int)v44;
                        int v315 = v314 | v308;
                        char v316 = v315 ? 0: 1;
                        char v317 = v315 < 0;
                        char v318 = __parity__((unsigned char)v315);
                        char v319 = 0;
                        char v320 = 0;
                        int v321 = (unsigned int)v45;
                        int v322 = v321 | v315;
                        char v323 = v322 ? 0: 1;
                        char v324 = v322 < 0;
                        char v325 = __parity__((unsigned char)v322);
                        char v326 = 0;
                        char v327 = 0;
                        int v328 = (unsigned int)v42;
                        int v329 = v328 | v322;
                        char v330 = v329 ? 0: 1;
                        char v331 = v329 < 0;
                        char v332 = __parity__((unsigned char)v329);
                        char v333 = 0;
                        char v334 = 0;
                        if(v330) {
                            int v335 = v271;
                            int v336 = v271;
                            int v337 = v181;
                            int v338 = v181;
                            int v339 = v336;
                            char v340 = v339 == v338;
                            char v341 = v339 > v338;
                            char v342 = __parity__((unsigned char)v338 - (unsigned char)v339);
                            char v343 = (unsigned int)v339 > (unsigned int)v338;
                            char v344 = (int)(((unsigned int)(v338 - v339) ^ v338) & (unsigned int)(v339 ^ v338)) < 0;
                            char v345 = (((unsigned int)(v338 - v339) ^ (unsigned int)(v339 ^ v338)) >>> 4) & 0x1;
                            if(v343) {
                                int v346 = v336;
                                v338 = v336;
                            }
                            int v347 = v338;
                            v271 = v338;
                            int v348 = v36;
                            int v349 = v271;
                            unsigned int v350 = (unsigned int)(v349 + v348);
                            unsigned int v351 = (unsigned int)(v349 + v348);
                            size_t __size = (size_t)(v350 - 1);
                            char v352 = __size ? 0: 1;
                            char v353 = __size >= 0x80000000;
                            char v354 = __parity__((unsigned char)__size);
                            char v355 = (((v351 ^ 0x1) ^ __size) >>> 4) & 0x1;
                            char v356 = v351 < 1;
                            char v357 = (int)((unsigned int)(__size ^ v351) & (v351 ^ 0x1)) < 0;
                            void* ptr16 = xmalloc(__size);
                            ptr0 = ptr16;
                            v1 = (int)v37;
                            unsigned int v358 = (unsigned int)v36;
                            int v359 = (int)ptr0;
                            int v360 = ptr_align(v359, v358);
                            int v361 = v360;
                            int v362 = v271;
                            int v363 = simple_cat(v361, v362);
                            int v364 = (unsigned int)(unsigned char)v363;
                            int v365 = v364 & v1;
                            char v366 = v365 ? 0: 1;
                            char v367 = v365 < 0;
                            char v368 = __parity__((unsigned char)v365);
                            char v369 = 0;
                            char v370 = 0;
                            v365 = (unsigned int)(v366 ? 0: 1) | ((unsigned int)((v365 >>> 8) & 0xffffff) << 8);
                            v37 = v366 ? 0: 1;
                        }
                        else {
                            int v371 = v36;
                            int v372 = v271;
                            int v373 = v271;
                            size_t __size1 = (size_t)(v372 + v371);
                            char v374 = __size1 ? 0: 1;
                            char v375 = __size1 >= 0x80000000;
                            char v376 = __parity__((unsigned char)__size1);
                            char v377 = (((v371 ^ v373) ^ __size1) >>> 4) & 0x1;
                            char v378 = __carry__(v371, v373);
                            char v379 = ((__size1 ^ v373) & ~(v371 ^ v373)) < 0;
                            void* ptr17 = xmalloc(__size1);
                            ptr0 = ptr17;
                            int v380 = v271;
                            int v381 = v271;
                            int v382 = v380 * 4;
                            char v383 = (v381 >>> 30) & 0x1;
                            char v384 = v379;
                            char v385 = v382 ? 0: 1;
                            char v386 = v382 < 0;
                            char v387 = __parity__((unsigned char)v382);
                            int v388 = v382 + v181;
                            int v389 = v388 + v36;
                            int v390 = v388 + v36;
                            size_t __size2 = (size_t)(v389 + 18);
                            char v391 = __size2 ? 0: 1;
                            char v392 = __size2 >= 0x80000000;
                            char v393 = __parity__((unsigned char)__size2);
                            char v394 = (((v390 ^ 0x12) ^ __size2) >>> 4) & 0x1;
                            char v395 = (unsigned int)v390 >= 0xffffffee;
                            char v396 = ((__size2 ^ v390) & ~(v390 ^ 0x12)) < 0;
                            void* ptr18 = xmalloc(__size2);
                            void* ptr19 = ptr18;
                            v1 = (int)v37;
                            int v397 = (int)v42;
                            int v398 = (int)v43;
                            int v399 = (int)v41;
                            int v400 = (int)v41;
                            int v401 = (int)v40;
                            int v402 = (int)v40;
                            int v403 = (int)v45;
                            int v404 = (int)v45;
                            int v405 = (int)v44;
                            int v406 = (int)v44;
                            unsigned int v407 = (unsigned int)v36;
                            int v408 = (int)ptr19;
                            int v409 = ptr_align(v408, v407);
                            int v410 = v409;
                            unsigned int v411 = (unsigned int)v36;
                            int v412 = (int)ptr0;
                            int v413 = ptr_align(v412, v411);
                            int v414 = v413;
                            int v415 = v400;
                            int v416 = v402;
                            int v417 = v404;
                            int v418 = v406;
                            int v419 = v181;
                            int v420 = v410;
                            int v421 = v271;
                            int v422 = cat(v414, v421, v420, v419, v418, v417, v416, v415, v398, v397);
                            int v423 = (unsigned int)(unsigned char)v422;
                            int v424 = v423 & v1;
                            char v425 = v424 ? 0: 1;
                            char v426 = v424 < 0;
                            char v427 = __parity__((unsigned char)v424);
                            char v428 = 0;
                            char v429 = 0;
                            v424 = (unsigned int)(v425 ? 0: 1) | ((unsigned int)((v424 >>> 8) & 0xffffff) << 8);
                            v37 = v425 ? 0: 1;
                            int v430 = (int)ptr19;
                            →free(v430);
                        }
                        int v431 = (int)ptr0;
                        →free(v431);
                    }
                }
                int v432 = infile;
                →strcmp(v432, &gvar_80502DB);
                char v433 = v20 ? 0: 1;
                char v434 = v20 < 0;
                char v435 = __parity__((unsigned char)v20);
                char v436 = 0;
                char v437 = 0;
                if(!v433) {
                    int v438 = input_desc;
                    →close(v438);
                    char v439 = v20 ? 0: 1;
                    char v440 = v20 < 0;
                    char v441 = __parity__((unsigned char)v20);
                    char v442 = 0;
                    char v443 = 0;
                    if(v440) {
                        v1 = infile;
                        →__errno_location();
                        int v444 = *(int*)v20;
                        v8 = v1;
                        →error(0, v444, &gvar_8050132);
                        v37 = 0;
                    }
                }
            }
        }
        unsigned int v445 = v210;
        ++v210;
        char v446 = v210 ? 0: 1;
        char v447 = v210 >= 0x80000000;
        char v448 = __parity__((unsigned char)v210);
        char v449 = (((v445 ^ 0x1) ^ v210) >>> 4) & 0x1;
        char v450 = v445 >= 0xffffffff;
        char v451 = (int)((v445 ^ v210) & ~(v445 ^ 0x1)) < 0;
        unsigned int v452 = v210;
        unsigned int* ptr20 = (unsigned int*)ptr6;
        char v453 = *ptr20 == v452;
        v18 = *ptr20 > (int)v452;
        char v454 = __parity__((unsigned char)v452 - (unsigned char)*ptr20);
        char v455 = *ptr20 > v452;
        v17 = (((v452 - *ptr20) ^ v452) & (*ptr20 ^ v452)) < 0;
        char v456 = (((v452 - *ptr20) ^ (*ptr20 ^ v452)) >>> 4) & 0x1;
    }
    while(v18 != v17);
    char v457 = v39 ? 0: 1;
    char v458 = v39 >= 128;
    char v459 = __parity__(v39);
    char v460 = v39 < 0;
    char v461 = 0;
    char v462 = 0;
    if(!v457) {
        →close(0);
        char v463 = v20 ? 0: 1;
        char v464 = v20 < 0;
        char v465 = __parity__((unsigned char)v20);
        char v466 = 0;
        char v467 = 0;
        if(v464) {
            →gettext("closing standard input");
            v1 = v20;
            →__errno_location();
            int v468 = *(int*)v20;
            →error(1, v468, v1);
        }
    }
    char v469 = v37 ? 0: 1;
    char v470 = v37 >= 128;
    char v471 = __parity__(v37);
    char v472 = v37 < 0;
    char v473 = 0;
    char v474 = 0;
    int v475 = v469 ? 1: 0;
    int __status = v469 ? 1: 0;
    int* ptr21 = &ptr1;
    /*NO_RETURN*/ →exit(__status);
}

char* next_line_num() {
    char* result;
    char* ptr0 = line_num_end;
    do {
        char v0 = *ptr0;
        char v1 = *ptr0 == 56 || v0 < 56 ? 1: 0;
        result = ptr0;
        *result = v0 + 1;
        if(v1) {
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
    int v0;
    int v1 = v0;
    unsigned int v2 = 0;
    unsigned int* ptr0 = *(param1 + 1);
    while(*param1 > v2) {
        double* ptr1 = *ptr0;
        if((unsigned int)*ptr0 <= 22) {
            jump *(void**)((int)(int*)((int)*ptr0 * 4) + (int)&gvar_80509B8);
            if(!*(int*)(ptr0 + 1)) {
                *(int*)(ptr0 + 1) = "(NULL)";
                goto loc_804ED23;
                if(!*(int*)(ptr0 + 1)) {
                    *(int*)(ptr0 + 1) = &wide_null_string.1636;
                }
            }
        loc_804ED23:
            ++v2;
            ptr0 += 4;
        }
        else {
            return -1;
        }
    }
    return 0;
}

/*
The routine was unflattened (unsafe deobfuscation).
To disable this optimizer, refer to "EnableUnsafeOptimizers" in the options.
*/
int printf_parse(unsigned char* param0, unsigned int* param1, unsigned int* param2) {
    int* ptr0;
    unsigned int* ptr1;
    int v0;
    int v1;
    unsigned int v2;
    unsigned int* ptr2;
    unsigned int* ptr3;
    unsigned int* ptr4;
    unsigned int* ptr5;
    unsigned int* ptr6;
    int* ptr7;
    unsigned int* ptr8;
    int v3;
    unsigned int* ptr9;
    unsigned int* ptr10;
    char v4;
    unsigned int v5;
    unsigned int* ptr11;
    int* ptr12;
    int* ptr13;
    unsigned int* ptr14;
    unsigned int* ptr15;
    int v6;
    int v7;
    char v8;
    unsigned int v9;
    unsigned int v10;
    unsigned int v11;
    unsigned int* ptr16;
    unsigned int* ptr17;
    unsigned int* ptr18;
    unsigned int v12;
    unsigned int v13;
    unsigned char* ptr19;
    unsigned char* ptr20;
    unsigned char* ptr21;
    unsigned char* ptr22;
    unsigned char* ptr23;
    unsigned char* ptr24;
    unsigned char* ptr25;
    unsigned char* ptr26;
    unsigned int v14;
    unsigned int* ptr27;
    unsigned int* ptr28;
    unsigned int* ptr29;
    int* ptr30;
    unsigned int* ptr31;
    int v15;
    unsigned int* ptr32;
    unsigned int* ptr33;
    char v16;
    unsigned int v17;
    unsigned int* ptr34;
    int* ptr35;
    int* ptr36;
    unsigned int* ptr37;
    unsigned int* ptr38;
    int v18;
    int v19;
    char v20;
    unsigned int v21;
    unsigned int v22;
    unsigned int v23;
    unsigned int* ptr39;
    unsigned int* ptr40;
    unsigned int* ptr41;
    unsigned int v24;
    int v25;
    unsigned int v26;
    unsigned char* ptr42;
    unsigned char v27;
    unsigned char* ptr43;
    unsigned char v28;
    unsigned char* ptr44;
    unsigned char v29;
    unsigned char* ptr45;
    unsigned int v30;
    unsigned int* ptr46;
    unsigned int v31;
    unsigned int* ptr47;
    unsigned char v32;
    unsigned char* ptr48;
    unsigned char* ptr49;
    unsigned char v33;
    unsigned char* ptr50;
    unsigned char v34;
    unsigned char* ptr51;
    unsigned char* ptr52;
    unsigned char* ptr53;
    unsigned int* ptr54;
    unsigned int* ptr55;
    unsigned int* ptr56;
    int* ptr57;
    unsigned int* ptr58;
    int v35;
    unsigned int* ptr59;
    unsigned int* ptr60;
    char v36;
    unsigned int v37;
    unsigned int* ptr61;
    int* ptr62;
    int* ptr63;
    unsigned int* ptr64;
    unsigned int* ptr65;
    int v38;
    int v39;
    char v40;
    unsigned int v41;
    unsigned int v42;
    unsigned int v43;
    unsigned int* ptr66;
    unsigned int* ptr67;
    unsigned int* ptr68;
    unsigned int v44;
    int v45;
    unsigned int v46;
    unsigned char* ptr69;
    unsigned char v47;
    unsigned char* ptr70;
    unsigned char v48;
    unsigned char* ptr71;
    unsigned int* ptr72;
    unsigned char v49;
    unsigned char* ptr73;
    unsigned int v50;
    unsigned int v51;
    unsigned int* ptr74;
    unsigned int v52;
    unsigned int* ptr75;
    unsigned char v53;
    unsigned char* ptr76;
    unsigned char v54;
    unsigned char* ptr77;
    unsigned char v55;
    unsigned char* ptr78;
    unsigned char* ptr79;
    unsigned char v56;
    unsigned char* ptr80;
    unsigned char v57;
    unsigned char* ptr81;
    unsigned char* ptr82;
    unsigned int* ptr83;
    unsigned char* ptr84;
    unsigned int* ptr85;
    unsigned char* ptr86;
    unsigned int* ptr87;
    unsigned char* ptr88;
    unsigned int* ptr89;
    unsigned char* ptr90;
    unsigned int* ptr91;
    unsigned char* ptr92;
    unsigned char* ptr93;
    unsigned char v58;
    unsigned char* ptr94;
    unsigned int v59;
    int v60;
    unsigned int v61;
    unsigned char* ptr95;
    unsigned char v62;
    unsigned char* ptr96;
    unsigned char* ptr97;
    unsigned char v63;
    unsigned char* ptr98;
    unsigned char v64;
    unsigned char* ptr99;
    unsigned int* ptr100;
    unsigned int* ptr101;
    int v65;
    unsigned int* ptr102;
    int v66;
    unsigned char* ptr103;
    unsigned char* ptr104;
    unsigned int v67;
    unsigned char v68;
    int* ptr105;
    unsigned char* ptr106 = param0;
    int v69 = 0;
    unsigned int v70 = 0;
    unsigned int v71 = 0;
    *param1 = 0;
    unsigned int v72 = 1;
    /*BAD_CALL!*/ →malloc(44);
    *(param1 + 1) = ptr105;
    unsigned int* ptr107 = param1;
    if(*(int*)(ptr107 + 1)) {
        *param2 = 0;
        v67 = 0;
        *(int*)(param2 + 1) = 0;
        do {
            ptr104 = ptr106;
            if(!*ptr104) {
                *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr106;
                *(param1 + 2) = v70;
                *(param1 + 3) = v71;
                return 0;
            }
            ptr103 = ptr106;
            v68 = *ptr103;
            ++ptr106;
        }
        while(v68 != 37);
        v66 = -1;
        ptr102 = param1;
        v65 = *(int*)(ptr102 + 1);
        ptr101 = param1;
        ptr100 = (unsigned int*)(*ptr101 * 44 + v65);
        *ptr100 = (int*)(ptr106 - 1);
        *(int*)(ptr100 + 2) = 0;
        *(int*)(ptr100 + 3) = 0;
        *(int*)(ptr100 + 4) = 0;
        *(int*)(ptr100 + 5) = -1;
        *(int*)(ptr100 + 6) = 0;
        *(int*)(ptr100 + 7) = 0;
        *(int*)(ptr100 + 8) = -1;
        *(int*)(ptr100 + 10) = -1;
        ptr99 = ptr106;
        v64 = *ptr99;
        if(*ptr99 != 47 && (char)v64 >= 47) {
            ptr98 = ptr106;
            v63 = *ptr98;
            if((*ptr98 == 57 || (char)v63 < 57)) {
                ptr97 = ptr106;
                while(1) {
                    ptr96 = ptr97;
                    v62 = *ptr96;
                    if(*ptr96 == 47 || (char)v62 < 47) {
                    loc_804EE8C:
                        ptr95 = ptr97;
                        if(*ptr95 == 36) {
                            v61 = 0;
                            ptr97 = ptr106;
                            while(1) {
                                unsigned char* ptr108 = ptr97;
                                unsigned char v73 = *ptr108;
                                if(*ptr108 == 47 || (char)v73 < 47) {
                                    break;
                                }
                                else {
                                    unsigned char* ptr109 = ptr97;
                                    unsigned char v74 = *ptr109;
                                    if(*ptr109 != 57 && (char)v74 >= 57) {
                                        break;
                                    }
                                    else {
                                        unsigned char* ptr110 = ptr97;
                                        int v75 = (unsigned int)*ptr110;
                                        v60 = (int)(((unsigned int)*ptr110 | ((unsigned int)((v75 >>> 7) & 0x1 ? 0xffffff: 0) << 8)) - 48);
                                        v59 = v61 <= 0x19999999 ? (unsigned int)(v61 * 5 * 2): 0xffffffff;
                                        v61 = /*BAD_CALL!*/ xsum2(v59, v60);
                                        ++ptr97;
                                    }
                                }
                            }
                            if(!v61 || v61 == -1) {
                            loc_804FB21:
                                if(*(int*)(param2 + 1)) {
                                    /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                                }
                                if(*(int*)(param1 + 1)) {
                                    →free(*(int*)(param1 + 1));
                                }
                                →__errno_location();
                                *ptr105 = 22;
                                return -1;
                            }
                            v66 = v61 - 1;
                            ptr106 = ptr97 + 1;
                        }
                        goto loc_804EF3C;
                    }
                    else {
                        ptr94 = ptr97;
                        v58 = *ptr94;
                        if(*ptr94 != 57 && (char)v58 >= 57) {
                            break;
                        }
                        else {
                            ++ptr97;
                        }
                    }
                }
                goto loc_804EE8C;
            }
        }
    loc_804EF3C:
        while(1) {
            ptr93 = ptr106;
            if(*ptr93 == 39) {
                goto loc_804EF46;
            }
            else {
                ptr92 = ptr106;
                if(*ptr92 == 45) {
                    ptr91 = ptr100;
                    *(int*)(ptr100 + 2) = *(int*)(ptr91 + 2) | 0x2;
                    ++ptr106;
                    continue;
                }
                else {
                    ptr90 = ptr106;
                    if(*ptr90 == 43) {
                        ptr89 = ptr100;
                        *(int*)(ptr100 + 2) = *(int*)(ptr89 + 2) | 0x4;
                        ++ptr106;
                        continue;
                    }
                    else {
                        ptr88 = ptr106;
                        if(*ptr88 == 32) {
                            ptr87 = ptr100;
                            *(int*)(ptr100 + 2) = *(int*)(ptr87 + 2) | 0x8;
                            ++ptr106;
                            continue;
                        }
                        else {
                            ptr86 = ptr106;
                            if(*ptr86 == 35) {
                                ptr85 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr85 + 2) | 0x10;
                                ++ptr106;
                                continue;
                            }
                            else {
                                ptr84 = ptr106;
                                if(*ptr84 == 48) {
                                    ptr83 = ptr100;
                                    *(int*)(ptr100 + 2) = *(int*)(ptr83 + 2) | 0x20;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr82 = ptr106;
                                    if(*ptr82 == 42) {
                                        *(ptr100 + 3) = ptr106;
                                        ++ptr106;
                                        *(ptr100 + 4) = ptr106;
                                        if(!v70) {
                                            v70 = 1;
                                        }
                                        ptr81 = ptr106;
                                        v57 = *ptr81;
                                        if(*ptr81 == 47 || (char)v57 < 47) {
                                            goto loc_804F12B;
                                        }
                                        else {
                                            ptr80 = ptr106;
                                            v56 = *ptr80;
                                            if(*ptr80 != 57 && (char)v56 >= 57) {
                                                goto loc_804F12B;
                                            }
                                            else {
                                                ptr79 = ptr106;
                                                break;
                                            }
                                        }
                                    }
                                    else {
                                        ptr78 = ptr106;
                                        v55 = *ptr78;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(*ptr78 == 47 || (char)v55 < 47) {
                goto loc_804F313;
            }
            else {
                ptr77 = ptr106;
                v54 = *ptr77;
                if(*ptr77 != 57 && (char)v54 >= 57) {
                    goto loc_804F313;
                }
                else {
                    *(ptr100 + 3) = ptr106;
                    while(1) {
                        ptr76 = ptr106;
                        v53 = *ptr76;
                        if(*ptr76 == 47 || (char)v53 < 47) {
                        loc_804F2EB:
                            *(ptr100 + 4) = ptr106;
                            ptr75 = ptr100;
                            v52 = *(ptr75 + 4);
                            ptr74 = ptr100;
                            v51 = v52 - *(ptr74 + 3);
                            v50 = v52 - *(ptr74 + 3);
                            if(v50 > v70) {
                                v70 = v50;
                            }
                            goto loc_804F313;
                        }
                        else {
                            ptr73 = ptr106;
                            v49 = *ptr73;
                            if(*ptr73 != 57 && (char)v49 >= 57) {
                                break;
                            }
                            else {
                                ++ptr106;
                            }
                        }
                    }
                    goto loc_804F2EB;
                loc_804EF46:
                    ptr72 = ptr100;
                    *(int*)(ptr100 + 2) = *(int*)(ptr72 + 2) | 0x1;
                    ++ptr106;
                }
            }
        }
        while(1) {
            ptr71 = ptr79;
            v48 = *ptr71;
            if(*ptr71 == 47 || (char)v48 < 47) {
                break;
            }
            else {
                ptr70 = ptr79;
                v47 = *ptr70;
                if(*ptr70 != 57 && (char)v47 >= 57) {
                    break;
                }
                else {
                    ++ptr79;
                }
            }
        }
        ptr69 = ptr79;
        if(*ptr69 == 36) {
            v46 = 0;
            ptr79 = ptr106;
            while(1) {
                unsigned char* ptr111 = ptr79;
                unsigned char v76 = *ptr111;
                if(*ptr111 == 47 || (char)v76 < 47) {
                loc_804F106:
                    if(!v46 || v46 == -1) {
                        goto loc_804FB21;
                    }
                    else {
                        *(int*)(ptr100 + 5) = v46 - 1;
                        ptr106 = ptr79 + 1;
                    }
                    goto loc_804F12B;
                }
                else {
                    unsigned char* ptr112 = ptr79;
                    unsigned char v77 = *ptr112;
                    if(*ptr112 != 57 && (char)v77 >= 57) {
                        break;
                    }
                    else {
                        unsigned char* ptr113 = ptr79;
                        int v78 = (unsigned int)*ptr113;
                        v45 = (int)(((unsigned int)*ptr113 | ((unsigned int)((v78 >>> 7) & 0x1 ? 0xffffff: 0) << 8)) - 48);
                        v44 = v46 <= 0x19999999 ? (unsigned int)(v46 * 5 * 2): 0xffffffff;
                        v46 = /*BAD_CALL!*/ xsum2(v44, v45);
                        ++ptr79;
                    }
                }
            }
            goto loc_804F106;
        }
        else {
        loc_804F12B:
            ptr68 = ptr100;
            if(*(ptr68 + 5) == -1) {
                *(int*)(ptr100 + 5) = v69;
                ++v69;
                ptr67 = ptr100;
                if(*(ptr67 + 5) == -1) {
                    goto loc_804FB21;
                }
            }
            ptr66 = ptr100;
            v43 = *(ptr66 + 5);
            if(v43 >= v67) {
                v42 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                v41 = v67;
                v40 = v41 == v43;
                if((v41 < v43 || v40)) {
                    v67 = /*BAD_CALL!*/ xsum2(v43, 1);
                }
                v39 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                v38 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                if(v38 == -1) {
                    goto loc_804FB68;
                }
                else {
                    ptr65 = param2;
                    if(*(int*)(ptr65 + 1)) {
                        ptr64 = param2;
                        →realloc(*(int*)(ptr64 + 1), v38);
                        ptr63 = ptr105;
                    }
                    else {
                        →malloc(v38);
                        ptr63 = ptr105;
                    }
                    ptr62 = ptr63;
                    if(!ptr62) {
                        goto loc_804FB68;
                    }
                    else {
                        *(param2 + 1) = ptr62;
                    }
                }
            }
            while(1) {
                ptr61 = param2;
                v37 = *ptr61;
                v36 = v37 == v43;
                if(v37 >= v43 && !v36) {
                    break;
                }
                else {
                    ptr60 = param2;
                    v51 = *(ptr60 + 1);
                    ptr59 = param2;
                    v35 = *ptr59;
                    *(int*)(*ptr59 * 16 + v51) = 0;
                    *param2 = v35 + 1;
                }
            }
            ptr58 = param2;
            ptr57 = (int*)(v43 * 16 + *(int*)(ptr58 + 1));
            if(!*ptr57) {
                ptr56 = param2;
                *(int*)(v43 * 16 + *(int*)(ptr56 + 1)) = 5;
                goto loc_804F313;
            }
            else {
                ptr55 = param2;
                ptr54 = (unsigned int*)(v43 * 16 + *(int*)(ptr55 + 1));
            }
            if(*ptr54 != 5) {
                goto loc_804FB21;
            }
            else {
            loc_804F313:
                ptr53 = ptr106;
                if(*ptr53 == 46) {
                    ++ptr106;
                    ptr52 = ptr106;
                    *(ptr100 + 6) = (int*)(ptr106 - 1);
                    if(*ptr52 == 42) {
                        ++ptr106;
                        *(ptr100 + 7) = ptr106;
                        if(v71 <= 1) {
                            v71 = 2;
                        }
                        ptr51 = ptr106;
                        v34 = *ptr51;
                        if(*ptr51 == 47 || (char)v34 < 47) {
                            goto loc_804F448;
                        }
                        else {
                            ptr50 = ptr106;
                            v33 = *ptr50;
                            if(*ptr50 != 57 && (char)v33 >= 57) {
                                goto loc_804F448;
                            }
                            else {
                                ptr49 = ptr106;
                            }
                        }
                    }
                    else {
                        while(1) {
                            ptr48 = ptr106;
                            v32 = *ptr48;
                            if(*ptr48 == 47 || (char)v32 < 47) {
                            loc_804F5F4:
                                *(ptr100 + 7) = ptr106;
                                ptr47 = ptr100;
                                v31 = *(ptr47 + 7);
                                ptr46 = ptr100;
                                v51 = v31 - *(ptr46 + 6);
                                v30 = v31 - *(ptr46 + 6);
                                if(v30 > v71) {
                                    v71 = v30;
                                }
                                goto loc_804F61C;
                            }
                            else {
                                ptr45 = ptr106;
                                v29 = *ptr45;
                                if(*ptr45 != 57 && (char)v29 >= 57) {
                                    break;
                                }
                                else {
                                    ++ptr106;
                                }
                            }
                        }
                        goto loc_804F5F4;
                    }
                    while(1) {
                        ptr44 = ptr49;
                        v28 = *ptr44;
                        if(*ptr44 == 47 || (char)v28 < 47) {
                            break;
                        }
                        else {
                            ptr43 = ptr49;
                            v27 = *ptr43;
                            if(*ptr43 != 57 && (char)v27 >= 57) {
                                break;
                            }
                            else {
                                ++ptr49;
                            }
                        }
                    }
                    ptr42 = ptr49;
                    if(*ptr42 == 36) {
                        v26 = 0;
                        ptr49 = ptr106;
                        while(1) {
                            unsigned char* ptr114 = ptr49;
                            unsigned char v79 = *ptr114;
                            if(*ptr114 == 47 || (char)v79 < 47) {
                            loc_804F423:
                                if(!v26 || v26 == -1) {
                                    goto loc_804FB21;
                                }
                                else {
                                    *(int*)(ptr100 + 8) = v26 - 1;
                                    ptr106 = ptr49 + 1;
                                }
                                goto loc_804F448;
                            }
                            else {
                                unsigned char* ptr115 = ptr49;
                                unsigned char v80 = *ptr115;
                                if(*ptr115 != 57 && (char)v80 >= 57) {
                                    break;
                                }
                                else {
                                    unsigned char* ptr116 = ptr49;
                                    int v81 = (unsigned int)*ptr116;
                                    v25 = (int)(((unsigned int)*ptr116 | ((unsigned int)((v81 >>> 7) & 0x1 ? 0xffffff: 0) << 8)) - 48);
                                    v24 = v26 <= 0x19999999 ? (unsigned int)(v26 * 5 * 2): 0xffffffff;
                                    v26 = /*BAD_CALL!*/ xsum2(v24, v25);
                                    ++ptr49;
                                }
                            }
                        }
                        goto loc_804F423;
                    }
                    else {
                    loc_804F448:
                        ptr41 = ptr100;
                        if(*(ptr41 + 8) == -1) {
                            *(int*)(ptr100 + 8) = v69;
                            ++v69;
                            ptr40 = ptr100;
                            if(*(ptr40 + 8) == -1) {
                                goto loc_804FB21;
                            }
                        }
                        ptr39 = ptr100;
                        v23 = *(ptr39 + 8);
                        if(v23 >= v67) {
                            v22 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                            v21 = v67;
                            v20 = v21 == v23;
                            if((v21 < v23 || v20)) {
                                v67 = /*BAD_CALL!*/ xsum2(v23, 1);
                            }
                            v19 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                            v18 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                            if(v18 == -1) {
                                goto loc_804FB68;
                            }
                            else {
                                ptr38 = param2;
                                if(*(int*)(ptr38 + 1)) {
                                    ptr37 = param2;
                                    →realloc(*(int*)(ptr37 + 1), v18);
                                    ptr36 = ptr105;
                                }
                                else {
                                    →malloc(v18);
                                    ptr36 = ptr105;
                                }
                                ptr35 = ptr36;
                                if(!ptr35) {
                                    goto loc_804FB68;
                                }
                                else {
                                    *(param2 + 1) = ptr35;
                                }
                            }
                        }
                        while(1) {
                            ptr34 = param2;
                            v17 = *ptr34;
                            v16 = v17 == v23;
                            if(v17 >= v23 && !v16) {
                                break;
                            }
                            else {
                                ptr33 = param2;
                                v51 = *(ptr33 + 1);
                                ptr32 = param2;
                                v15 = *ptr32;
                                *(int*)(*ptr32 * 16 + v51) = 0;
                                *param2 = v15 + 1;
                            }
                        }
                        ptr31 = param2;
                        ptr30 = (int*)(v23 * 16 + *(int*)(ptr31 + 1));
                        if(!*ptr30) {
                            ptr29 = param2;
                            *(int*)(v23 * 16 + *(int*)(ptr29 + 1)) = 5;
                            goto loc_804F61C;
                        }
                        else {
                            ptr28 = param2;
                            ptr27 = (unsigned int*)(v23 * 16 + *(int*)(ptr28 + 1));
                            if(*ptr27 != 5) {
                                goto loc_804FB21;
                            }
                            else {
                                goto loc_804F61C;
                            loc_804FB68:
                                if(*(int*)(param2 + 1)) {
                                    /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                                }
                                if(*(int*)(param1 + 1)) {
                                    →free(*(int*)(param1 + 1));
                                }
                            }
                        }
                    }
                }
                else {
                loc_804F61C:
                    v14 = 0;
                    while(1) {
                        ptr26 = ptr106;
                        if(*ptr26 != 104) {
                            ptr25 = ptr106;
                            if(*ptr25 == 76) {
                                v14 |= 4;
                            }
                            else {
                                ptr24 = ptr106;
                                if(*ptr24 == 108) {
                                    v14 += 8;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr23 = ptr106;
                                    if(*ptr23 == 106) {
                                        v14 += 16;
                                        ++ptr106;
                                        continue;
                                    }
                                    else {
                                        ptr22 = ptr106;
                                        if(*ptr22 != 122) {
                                            ptr21 = ptr106;
                                            if(*ptr21 != 90) {
                                                ptr20 = ptr106;
                                                if(*ptr20 == 116) {
                                                    ++ptr106;
                                                    continue;
                                                }
                                                else {
                                                    ptr19 = ptr106;
                                                    v68 = *ptr19;
                                                    ++ptr106;
                                                    v13 = (unsigned int)v68 - 37;
                                                    if((unsigned int)v68 - 37 > 83) {
                                                        goto loc_804FB21;
                                                    }
                                                    else {
                                                        jump gvar_8050A14[(unsigned int)v68 - 37];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            v51 = v14 & 0x1;
                            v14 = (unsigned int)((1 << (v51 & 0x1f)) | v14);
                        }
                        ++ptr106;
                    }
                }
            }
        }
    }
    →__errno_location();
    *ptr105 = 12;
    return -1;
    do {
        v12 = 14;
        v68 = 99;
        *(int*)(ptr100 + 10) = v66;
        ptr18 = ptr100;
        if(*(ptr18 + 10) == -1) {
            *(int*)(ptr100 + 10) = v69;
            ++v69;
            ptr17 = ptr100;
            if(*(ptr17 + 10) == -1) {
                goto loc_804FB21;
            }
        }
        ptr16 = ptr100;
        v11 = *(ptr16 + 10);
        if(v11 >= v67) {
            v10 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
            v9 = v67;
            v8 = v9 == v11;
            if((v9 < v11 || v8)) {
                v67 = /*BAD_CALL!*/ xsum2(v11, 1);
            }
            v7 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
            v6 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
            if(v6 == -1) {
                goto loc_804FB68;
            }
            else {
                ptr15 = param2;
                if(*(int*)(ptr15 + 1)) {
                    ptr14 = param2;
                    /*BAD_CALL!*/ →realloc(*(int*)(ptr14 + 1), v6);
                    ptr13 = ptr105;
                }
                else {
                    /*BAD_CALL!*/ →malloc(v6);
                    ptr13 = ptr105;
                }
                ptr12 = ptr13;
                if(!ptr12) {
                    goto loc_804FB68;
                }
                else {
                    *(param2 + 1) = ptr12;
                }
            }
        }
        while(1) {
            ptr11 = param2;
            v5 = *ptr11;
            v4 = v5 == v11;
            if(v5 >= v11 && !v4) {
                break;
            }
            else {
                ptr10 = param2;
                v51 = *(ptr10 + 1);
                ptr9 = param2;
                v3 = *ptr9;
                *(int*)(*ptr9 * 16 + v51) = 0;
                *param2 = v3 + 1;
            }
        }
        ptr8 = param2;
        ptr7 = (int*)(v11 * 16 + *(int*)(ptr8 + 1));
        if(!*ptr7) {
            ptr6 = param2;
            *(unsigned int*)(v11 * 16 + *(int*)(ptr6 + 1)) = v12;
            goto loc_804FA28;
        }
        else {
            ptr5 = param2;
            ptr4 = (unsigned int*)(v11 * 16 + *(int*)(ptr5 + 1));
        }
        if(*ptr4 == v12) {
        loc_804FA28:
            *(unsigned char*)(ptr100 + 9) = v68;
            *(ptr100 + 1) = ptr106;
            ptr3 = param1;
            *param1 = *ptr3 + 1;
            ptr2 = param1;
            if(*ptr2 >= v72) {
                v2 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                v72 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                v1 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                v0 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                if(v0 == -1) {
                    goto loc_804FB68;
                }
                else {
                    ptr1 = param1;
                    /*BAD_CALL!*/ →realloc(*(int*)(ptr1 + 1), v0);
                    ptr0 = ptr105;
                    if(!ptr0) {
                        goto loc_804FB68;
                    }
                    else {
                        *(param1 + 1) = ptr0;
                    }
                }
            }
            do {
                ptr104 = ptr106;
                if(!*ptr104) {
                    *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr106;
                    *(param1 + 2) = v70;
                    *(param1 + 3) = v71;
                    return 0;
                }
                ptr103 = ptr106;
                v68 = *ptr103;
                ++ptr106;
            }
            while(v68 != 37);
            v66 = -1;
            ptr102 = param1;
            v65 = *(int*)(ptr102 + 1);
            ptr101 = param1;
            ptr100 = (unsigned int*)(*ptr101 * 44 + v65);
            *ptr100 = (int*)(ptr106 - 1);
            *(int*)(ptr100 + 2) = 0;
            *(int*)(ptr100 + 3) = 0;
            *(int*)(ptr100 + 4) = 0;
            *(int*)(ptr100 + 5) = -1;
            *(int*)(ptr100 + 6) = 0;
            *(int*)(ptr100 + 7) = 0;
            *(int*)(ptr100 + 8) = -1;
            *(int*)(ptr100 + 10) = -1;
            ptr99 = ptr106;
            v64 = *ptr99;
            if(*ptr99 == 47 || (char)v64 < 47) {
                goto loc_804EF3C;
            }
            else {
                ptr98 = ptr106;
                v63 = *ptr98;
                if(*ptr98 != 57 && (char)v63 >= 57) {
                    goto loc_804EF3C;
                }
                else {
                    ptr97 = ptr106;
                    while(1) {
                        ptr96 = ptr97;
                        v62 = *ptr96;
                        if(*ptr96 == 47 || (char)v62 < 47) {
                        loc_804EE8C:
                            ptr95 = ptr97;
                            if(*ptr95 != 36) {
                                goto loc_804EF3C;
                            }
                            else {
                                v61 = 0;
                                ptr97 = ptr106;
                            }
                            goto loc_804EF02;
                        }
                        else {
                            ptr94 = ptr97;
                            v58 = *ptr94;
                            if(*ptr94 != 57 && (char)v58 >= 57) {
                                break;
                            }
                            else {
                                ++ptr97;
                            }
                        }
                    }
                    goto loc_804EE8C;
                }
            }
        loc_804EF02:
            while((char)*ptr97 > 47 && (char)*ptr97 <= 57) {
                v60 = (int)((unsigned int)*ptr97 - 48);
                v59 = v61 <= 0x19999999 ? (unsigned int)(v61 * 5 * 2): 0xffffffff;
                v61 = /*BAD_CALL!*/ xsum2(v59, v60);
                ++ptr97;
                continue;
            loc_804EF3C:
                while(1) {
                    ptr93 = ptr106;
                    if(*ptr93 == 39) {
                        goto loc_804EF44;
                    }
                    else {
                        ptr92 = ptr106;
                        if(*ptr92 == 45) {
                            ptr91 = ptr100;
                            *(int*)(ptr100 + 2) = *(int*)(ptr91 + 2) | 0x2;
                            ++ptr106;
                            continue;
                        }
                        else {
                            ptr90 = ptr106;
                            if(*ptr90 == 43) {
                                ptr89 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr89 + 2) | 0x4;
                                ++ptr106;
                                continue;
                            }
                            else {
                                ptr88 = ptr106;
                                if(*ptr88 == 32) {
                                    ptr87 = ptr100;
                                    *(int*)(ptr100 + 2) = *(int*)(ptr87 + 2) | 0x8;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr86 = ptr106;
                                    if(*ptr86 == 35) {
                                        ptr85 = ptr100;
                                        *(int*)(ptr100 + 2) = *(int*)(ptr85 + 2) | 0x10;
                                        ++ptr106;
                                        continue;
                                    }
                                    else {
                                        ptr84 = ptr106;
                                        if(*ptr84 == 48) {
                                            ptr83 = ptr100;
                                            *(int*)(ptr100 + 2) = *(int*)(ptr83 + 2) | 0x20;
                                            ++ptr106;
                                            continue;
                                        }
                                        else {
                                            ptr82 = ptr106;
                                            if(*ptr82 == 42) {
                                                *(ptr100 + 3) = ptr106;
                                                ++ptr106;
                                                *(ptr100 + 4) = ptr106;
                                                if(!v70) {
                                                    v70 = 1;
                                                }
                                                ptr81 = ptr106;
                                                v57 = *ptr81;
                                                if(*ptr81 == 47 || (char)v57 < 47) {
                                                loc_804F12B:
                                                    ptr68 = ptr100;
                                                    if(*(ptr68 + 5) == -1) {
                                                        *(int*)(ptr100 + 5) = v69;
                                                        ++v69;
                                                        ptr67 = ptr100;
                                                        if(*(ptr67 + 5) == -1) {
                                                            break loc_804EF02;
                                                        }
                                                    }
                                                    ptr66 = ptr100;
                                                    v43 = *(ptr66 + 5);
                                                    if(v43 >= v67) {
                                                        v42 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                        v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                        v41 = v67;
                                                        v40 = v41 == v43;
                                                        if((v41 < v43 || v40)) {
                                                            v67 = /*BAD_CALL!*/ xsum2(v43, 1);
                                                        }
                                                        v39 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                        v38 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                        if(v38 == -1) {
                                                            goto loc_804FB68;
                                                        }
                                                        else {
                                                            ptr65 = param2;
                                                            if(*(int*)(ptr65 + 1)) {
                                                                ptr64 = param2;
                                                                /*BAD_CALL!*/ →realloc(*(int*)(ptr64 + 1), v38);
                                                            }
                                                            else {
                                                                /*BAD_CALL!*/ →malloc(v38);
                                                            }
                                                            ptr63 = ptr105;
                                                            ptr62 = ptr63;
                                                            if(!ptr62) {
                                                                goto loc_804FB68;
                                                            }
                                                            else {
                                                                *(param2 + 1) = ptr62;
                                                            }
                                                        }
                                                    }
                                                    while(1) {
                                                        ptr61 = param2;
                                                        v37 = *ptr61;
                                                        v36 = v37 == v43;
                                                        if(v37 >= v43 && !v36) {
                                                        loc_804F261:
                                                            ptr58 = param2;
                                                            ptr57 = (int*)(v43 * 16 + *(int*)(ptr58 + 1));
                                                            if(!*ptr57) {
                                                                ptr56 = param2;
                                                                *(int*)(v43 * 16 + *(int*)(ptr56 + 1)) = 5;
                                                            }
                                                            else {
                                                                ptr55 = param2;
                                                                ptr54 = (unsigned int*)(v43 * 16 + *(int*)(ptr55 + 1));
                                                                if(*ptr54 != 5) {
                                                                    break loc_804EF02;
                                                                }
                                                            }
                                                        loc_804F313:
                                                            ptr53 = ptr106;
                                                            if(*ptr53 != 46) {
                                                                v14 = 0;
                                                                goto loc_804F623;
                                                            }
                                                            else {
                                                                ++ptr106;
                                                                ptr52 = ptr106;
                                                                *(ptr100 + 6) = (int*)(ptr106 - 1);
                                                                if(*ptr52 != 42) {
                                                                    while(1) {
                                                                        ptr48 = ptr106;
                                                                        v32 = *ptr48;
                                                                        if(*ptr48 == 47 || (char)v32 < 47) {
                                                                        loc_804F5F4:
                                                                            *(ptr100 + 7) = ptr106;
                                                                            ptr47 = ptr100;
                                                                            v31 = *(ptr47 + 7);
                                                                            ptr46 = ptr100;
                                                                            v51 = v31 - *(ptr46 + 6);
                                                                            v30 = v31 - *(ptr46 + 6);
                                                                            if(v30 > v71) {
                                                                                v71 = v30;
                                                                            }
                                                                            v14 = 0;
                                                                            goto loc_804F623;
                                                                        }
                                                                        else {
                                                                            ptr45 = ptr106;
                                                                            v29 = *ptr45;
                                                                            if(*ptr45 != 57 && (char)v29 >= 57) {
                                                                                break;
                                                                            }
                                                                            else {
                                                                                ++ptr106;
                                                                            }
                                                                        }
                                                                    }
                                                                    goto loc_804F5F4;
                                                                }
                                                                else {
                                                                    ++ptr106;
                                                                    *(ptr100 + 7) = ptr106;
                                                                    if(v71 <= 1) {
                                                                        v71 = 2;
                                                                    }
                                                                    ptr51 = ptr106;
                                                                    v34 = *ptr51;
                                                                    if(*ptr51 == 47 || (char)v34 < 47) {
                                                                        goto loc_804F448;
                                                                    }
                                                                    else {
                                                                        ptr50 = ptr106;
                                                                        v33 = *ptr50;
                                                                        if(*ptr50 != 57 && (char)v33 >= 57) {
                                                                            goto loc_804F448;
                                                                        }
                                                                        else {
                                                                            ptr49 = ptr106;
                                                                            while(1) {
                                                                                ptr44 = ptr49;
                                                                                v28 = *ptr44;
                                                                                if(*ptr44 == 47 || (char)v28 < 47) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    ptr43 = ptr49;
                                                                                    v27 = *ptr43;
                                                                                    if(*ptr43 != 57 && (char)v27 >= 57) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        ++ptr49;
                                                                                    }
                                                                                }
                                                                            }
                                                                            ptr42 = ptr49;
                                                                            if(*ptr42 != 36) {
                                                                                goto loc_804F448;
                                                                            }
                                                                            else {
                                                                                v26 = 0;
                                                                                ptr49 = ptr106;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            goto loc_804F40B;
                                                        }
                                                        else {
                                                            ptr60 = param2;
                                                            v51 = *(ptr60 + 1);
                                                            ptr59 = param2;
                                                            v35 = *ptr59;
                                                            *(int*)(*ptr59 * 16 + v51) = 0;
                                                            *param2 = v35 + 1;
                                                        }
                                                    }
                                                    goto loc_804F261;
                                                }
                                                else {
                                                    ptr80 = ptr106;
                                                    v56 = *ptr80;
                                                    if(*ptr80 != 57 && (char)v56 >= 57) {
                                                        goto loc_804F12B;
                                                    }
                                                    else {
                                                        ptr79 = ptr106;
                                                        break;
                                                    }
                                                }
                                            }
                                            else {
                                                ptr78 = ptr106;
                                                v55 = *ptr78;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if(*ptr78 == 47 || (char)v55 < 47) {
                        goto loc_804F313;
                    }
                    else {
                        ptr77 = ptr106;
                        v54 = *ptr77;
                        if(*ptr77 != 57 && (char)v54 >= 57) {
                            goto loc_804F313;
                        }
                        else {
                            *(ptr100 + 3) = ptr106;
                            while(1) {
                                ptr76 = ptr106;
                                v53 = *ptr76;
                                if(*ptr76 == 47 || (char)v53 < 47) {
                                loc_804F2EB:
                                    *(ptr100 + 4) = ptr106;
                                    ptr75 = ptr100;
                                    v52 = *(ptr75 + 4);
                                    ptr74 = ptr100;
                                    v51 = v52 - *(ptr74 + 3);
                                    v50 = v52 - *(ptr74 + 3);
                                    if(v50 > v70) {
                                        v70 = v50;
                                    }
                                    goto loc_804F313;
                                }
                                else {
                                    ptr73 = ptr106;
                                    v49 = *ptr73;
                                    if(*ptr73 != 57 && (char)v49 >= 57) {
                                        break;
                                    }
                                    else {
                                        ++ptr106;
                                    }
                                }
                            }
                            goto loc_804F2EB;
                        loc_804EF44:
                            ptr72 = ptr100;
                            *(int*)(ptr100 + 2) = *(int*)(ptr72 + 2) | 0x1;
                            ++ptr106;
                        }
                    }
                }
                while(1) {
                    ptr71 = ptr79;
                    v48 = *ptr71;
                    if(*ptr71 == 47 || (char)v48 < 47) {
                        break;
                    }
                    else {
                        ptr70 = ptr79;
                        v47 = *ptr70;
                        if(*ptr70 != 57 && (char)v47 >= 57) {
                            break;
                        }
                        else {
                            ++ptr79;
                        }
                    }
                }
                ptr69 = ptr79;
                if(*ptr69 != 36) {
                    goto loc_804F12B;
                }
                else {
                    v46 = 0;
                    ptr79 = ptr106;
                }
                while((char)*ptr79 > 47 && (char)*ptr79 <= 57) {
                    v45 = (int)((unsigned int)*ptr79 - 48);
                    v44 = v46 <= 0x19999999 ? (unsigned int)(v46 * 5 * 2): 0xffffffff;
                    v46 = /*BAD_CALL!*/ xsum2(v44, v45);
                    ++ptr79;
                    continue;
                loc_804F40B:
                    while((char)*ptr49 > 47 && (char)*ptr49 <= 57) {
                        v25 = (int)((unsigned int)*ptr49 - 48);
                        v24 = v26 <= 0x19999999 ? (unsigned int)(v26 * 5 * 2): 0xffffffff;
                        v26 = /*BAD_CALL!*/ xsum2(v24, v25);
                        ++ptr49;
                        continue;
                    loc_804F448:
                        ptr41 = ptr100;
                        if(*(ptr41 + 8) == -1) {
                            *(int*)(ptr100 + 8) = v69;
                            ++v69;
                            ptr40 = ptr100;
                            if(*(ptr40 + 8) == -1) {
                                break loc_804EF02;
                            }
                        }
                        ptr39 = ptr100;
                        v23 = *(ptr39 + 8);
                        if(v23 >= v67) {
                            v22 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                            v21 = v67;
                            v20 = v21 == v23;
                            if((v21 < v23 || v20)) {
                                v67 = /*BAD_CALL!*/ xsum2(v23, 1);
                            }
                            v19 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                            v18 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                            if(v18 != -1) {
                                ptr38 = param2;
                                if(*(int*)(ptr38 + 1)) {
                                    ptr37 = param2;
                                    /*BAD_CALL!*/ →realloc(*(int*)(ptr37 + 1), v18);
                                }
                                else {
                                    /*BAD_CALL!*/ →malloc(v18);
                                }
                                ptr36 = ptr105;
                                ptr35 = ptr36;
                                if(ptr35) {
                                    *(param2 + 1) = ptr35;
                                    goto loc_804F576;
                                }
                            }
                        loc_804FB68:
                            if(*(int*)(param2 + 1)) {
                                /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                            }
                            if(*(int*)(param1 + 1)) {
                                →free(*(int*)(param1 + 1));
                            }
                            /*BAD_CALL!*/ →__errno_location();
                            *ptr105 = 12;
                            return -1;
                        }
                    loc_804F576:
                        while(1) {
                            ptr34 = param2;
                            v17 = *ptr34;
                            v16 = v17 == v23;
                            if(v17 >= v23 && !v16) {
                                break;
                            }
                            else {
                                ptr33 = param2;
                                v51 = *(ptr33 + 1);
                                ptr32 = param2;
                                v15 = *ptr32;
                                *(int*)(*ptr32 * 16 + v51) = 0;
                                *param2 = v15 + 1;
                            }
                        }
                        ptr31 = param2;
                        ptr30 = (int*)(v23 * 16 + *(int*)(ptr31 + 1));
                        if(!*ptr30) {
                            ptr29 = param2;
                            *(int*)(v23 * 16 + *(int*)(ptr29 + 1)) = 5;
                            v14 = 0;
                            goto loc_804F623;
                        }
                        else {
                            ptr28 = param2;
                            ptr27 = (unsigned int*)(v23 * 16 + *(int*)(ptr28 + 1));
                        }
                        if(*ptr27 != 5) {
                            break loc_804EF02;
                        }
                        else {
                            v14 = 0;
                        loc_804F623:
                            while(1) {
                                ptr26 = ptr106;
                                if(*ptr26 != 104) {
                                    ptr25 = ptr106;
                                    if(*ptr25 == 76) {
                                        v14 |= 4;
                                    }
                                    else {
                                        ptr24 = ptr106;
                                        if(*ptr24 == 108) {
                                            v14 += 8;
                                            ++ptr106;
                                            continue;
                                        }
                                        else {
                                            ptr23 = ptr106;
                                            if(*ptr23 == 106) {
                                                v14 += 16;
                                                ++ptr106;
                                                continue;
                                            }
                                            else {
                                                ptr22 = ptr106;
                                                if(*ptr22 != 122) {
                                                    ptr21 = ptr106;
                                                    if(*ptr21 != 90) {
                                                        ptr20 = ptr106;
                                                        if(*ptr20 == 116) {
                                                            ++ptr106;
                                                            continue;
                                                        }
                                                        else {
                                                            ptr19 = ptr106;
                                                            v68 = *ptr19;
                                                            ++ptr106;
                                                            v13 = (unsigned int)v68 - 37;
                                                            if((unsigned int)v68 - 37 > 83) {
                                                                break loc_804EF02;
                                                            }
                                                            else {
                                                                jump gvar_8050A14[(unsigned int)v68 - 37];
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    v51 = v14 & 0x1;
                                    v14 = (unsigned int)((1 << (v51 & 0x1f)) | v14);
                                }
                                ++ptr106;
                            }
                        }
                    }
                }
            }
        }
    loc_804FB21:
        if(*(int*)(param2 + 1)) {
            /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
        }
        if(*(int*)(param1 + 1)) {
            →free(*(int*)(param1 + 1));
        }
        /*BAD_CALL!*/ →__errno_location();
        *ptr105 = 22;
        return -1;
        do {
            v12 = 16;
            v68 = 115;
            *(int*)(ptr100 + 10) = v66;
            ptr18 = ptr100;
            if(*(ptr18 + 10) == -1) {
                *(int*)(ptr100 + 10) = v69;
                ++v69;
                ptr17 = ptr100;
                if(*(ptr17 + 10) == -1) {
                    goto loc_804FB21;
                }
            }
            ptr16 = ptr100;
            v11 = *(ptr16 + 10);
            if(v11 >= v67) {
                v10 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                v9 = v67;
                v8 = v9 == v11;
                if((v9 < v11 || v8)) {
                    v67 = /*BAD_CALL!*/ xsum2(v11, 1);
                }
                v7 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                v6 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                if(v6 == -1) {
                    goto loc_804FB68;
                }
                else {
                    ptr15 = param2;
                    if(*(int*)(ptr15 + 1)) {
                        ptr14 = param2;
                        /*BAD_CALL!*/ →realloc(*(int*)(ptr14 + 1), v6);
                    }
                    else {
                        /*BAD_CALL!*/ →malloc(v6);
                    }
                    ptr13 = ptr105;
                    ptr12 = ptr13;
                    if(!ptr12) {
                        goto loc_804FB68;
                    }
                    else {
                        *(param2 + 1) = ptr12;
                    }
                }
            }
            while(1) {
                ptr11 = param2;
                v5 = *ptr11;
                v4 = v5 == v11;
                if(v5 >= v11 && !v4) {
                    break;
                }
                else {
                    ptr10 = param2;
                    v51 = *(ptr10 + 1);
                    ptr9 = param2;
                    v3 = *ptr9;
                    *(int*)(*ptr9 * 16 + v51) = 0;
                    *param2 = v3 + 1;
                }
            }
            ptr8 = param2;
            ptr7 = (int*)(v11 * 16 + *(int*)(ptr8 + 1));
            if(!*ptr7) {
                ptr6 = param2;
                *(unsigned int*)(v11 * 16 + *(int*)(ptr6 + 1)) = v12;
                goto loc_804FA28;
            }
            else {
                ptr5 = param2;
                ptr4 = (unsigned int*)(v11 * 16 + *(int*)(ptr5 + 1));
            }
            if(*ptr4 == v12) {
            loc_804FA28:
                *(unsigned char*)(ptr100 + 9) = v68;
                *(ptr100 + 1) = ptr106;
                ptr3 = param1;
                *param1 = *ptr3 + 1;
                ptr2 = param1;
                if(*ptr2 >= v72) {
                    v2 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                    v72 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                    v1 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                    v0 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                    if(v0 == -1) {
                        goto loc_804FB68;
                    }
                    else {
                        ptr1 = param1;
                        /*BAD_CALL!*/ →realloc(*(int*)(ptr1 + 1), v0);
                        ptr0 = ptr105;
                        if(!ptr0) {
                            goto loc_804FB68;
                        }
                        else {
                            *(param1 + 1) = ptr0;
                        }
                    }
                }
                do {
                    ptr104 = ptr106;
                    if(!*ptr104) {
                        *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr106;
                        *(param1 + 2) = v70;
                        *(param1 + 3) = v71;
                        return 0;
                    }
                    ptr103 = ptr106;
                    v68 = *ptr103;
                    ++ptr106;
                }
                while(v68 != 37);
                v66 = -1;
                ptr102 = param1;
                v65 = *(int*)(ptr102 + 1);
                ptr101 = param1;
                ptr100 = (unsigned int*)(*ptr101 * 44 + v65);
                *ptr100 = (int*)(ptr106 - 1);
                *(int*)(ptr100 + 2) = 0;
                *(int*)(ptr100 + 3) = 0;
                *(int*)(ptr100 + 4) = 0;
                *(int*)(ptr100 + 5) = -1;
                *(int*)(ptr100 + 6) = 0;
                *(int*)(ptr100 + 7) = 0;
                *(int*)(ptr100 + 8) = -1;
                *(int*)(ptr100 + 10) = -1;
                ptr99 = ptr106;
                v64 = *ptr99;
                if(*ptr99 == 47 || (char)v64 < 47) {
                    goto loc_804EF3C;
                }
                else {
                    ptr98 = ptr106;
                    v63 = *ptr98;
                    if(*ptr98 != 57 && (char)v63 >= 57) {
                        goto loc_804EF3C;
                    }
                    else {
                        ptr97 = ptr106;
                        while(1) {
                            ptr96 = ptr97;
                            v62 = *ptr96;
                            if(*ptr96 == 47 || (char)v62 < 47) {
                            loc_804EE8C:
                                ptr95 = ptr97;
                                if(*ptr95 != 36) {
                                    goto loc_804EF3C;
                                }
                                else {
                                    v61 = 0;
                                    ptr97 = ptr106;
                                }
                                goto loc_804EF02;
                            }
                            else {
                                ptr94 = ptr97;
                                v58 = *ptr94;
                                if(*ptr94 != 57 && (char)v58 >= 57) {
                                    break;
                                }
                                else {
                                    ++ptr97;
                                }
                            }
                        }
                        goto loc_804EE8C;
                    }
                }
            loc_804EF02:
                while((char)*ptr97 > 47 && (char)*ptr97 <= 57) {
                    v60 = (int)((unsigned int)*ptr97 - 48);
                    v59 = v61 <= 0x19999999 ? (unsigned int)(v61 * 5 * 2): 0xffffffff;
                    v61 = /*BAD_CALL!*/ xsum2(v59, v60);
                    ++ptr97;
                    continue;
                loc_804EF3C:
                    while(1) {
                        ptr93 = ptr106;
                        if(*ptr93 == 39) {
                            goto loc_804EF44;
                        }
                        else {
                            ptr92 = ptr106;
                            if(*ptr92 == 45) {
                                ptr91 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr91 + 2) | 0x2;
                                ++ptr106;
                                continue;
                            }
                            else {
                                ptr90 = ptr106;
                                if(*ptr90 == 43) {
                                    ptr89 = ptr100;
                                    *(int*)(ptr100 + 2) = *(int*)(ptr89 + 2) | 0x4;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr88 = ptr106;
                                    if(*ptr88 == 32) {
                                        ptr87 = ptr100;
                                        *(int*)(ptr100 + 2) = *(int*)(ptr87 + 2) | 0x8;
                                        ++ptr106;
                                        continue;
                                    }
                                    else {
                                        ptr86 = ptr106;
                                        if(*ptr86 == 35) {
                                            ptr85 = ptr100;
                                            *(int*)(ptr100 + 2) = *(int*)(ptr85 + 2) | 0x10;
                                            ++ptr106;
                                            continue;
                                        }
                                        else {
                                            ptr84 = ptr106;
                                            if(*ptr84 == 48) {
                                                ptr83 = ptr100;
                                                *(int*)(ptr100 + 2) = *(int*)(ptr83 + 2) | 0x20;
                                                ++ptr106;
                                                continue;
                                            }
                                            else {
                                                ptr82 = ptr106;
                                                if(*ptr82 == 42) {
                                                    *(ptr100 + 3) = ptr106;
                                                    ++ptr106;
                                                    *(ptr100 + 4) = ptr106;
                                                    if(!v70) {
                                                        v70 = 1;
                                                    }
                                                    ptr81 = ptr106;
                                                    v57 = *ptr81;
                                                    if(*ptr81 == 47 || (char)v57 < 47) {
                                                    loc_804F12B:
                                                        ptr68 = ptr100;
                                                        if(*(ptr68 + 5) == -1) {
                                                            *(int*)(ptr100 + 5) = v69;
                                                            ++v69;
                                                            ptr67 = ptr100;
                                                            if(*(ptr67 + 5) == -1) {
                                                                break loc_804EF02;
                                                            }
                                                        }
                                                        ptr66 = ptr100;
                                                        v43 = *(ptr66 + 5);
                                                        if(v43 >= v67) {
                                                            v42 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                            v41 = v67;
                                                            v40 = v41 == v43;
                                                            if((v41 < v43 || v40)) {
                                                                v67 = /*BAD_CALL!*/ xsum2(v43, 1);
                                                            }
                                                            v39 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                            v38 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                            if(v38 == -1) {
                                                                goto loc_804FB68;
                                                            }
                                                            else {
                                                                ptr65 = param2;
                                                                if(*(int*)(ptr65 + 1)) {
                                                                    ptr64 = param2;
                                                                    /*BAD_CALL!*/ →realloc(*(int*)(ptr64 + 1), v38);
                                                                }
                                                                else {
                                                                    /*BAD_CALL!*/ →malloc(v38);
                                                                }
                                                                ptr63 = ptr105;
                                                                ptr62 = ptr63;
                                                                if(!ptr62) {
                                                                    goto loc_804FB68;
                                                                }
                                                                else {
                                                                    *(param2 + 1) = ptr62;
                                                                }
                                                            }
                                                        }
                                                        while(1) {
                                                            ptr61 = param2;
                                                            v37 = *ptr61;
                                                            v36 = v37 == v43;
                                                            if(v37 >= v43 && !v36) {
                                                            loc_804F261:
                                                                ptr58 = param2;
                                                                ptr57 = (int*)(v43 * 16 + *(int*)(ptr58 + 1));
                                                                if(!*ptr57) {
                                                                    ptr56 = param2;
                                                                    *(int*)(v43 * 16 + *(int*)(ptr56 + 1)) = 5;
                                                                }
                                                                else {
                                                                    ptr55 = param2;
                                                                    ptr54 = (unsigned int*)(v43 * 16 + *(int*)(ptr55 + 1));
                                                                    if(*ptr54 != 5) {
                                                                        break loc_804EF02;
                                                                    }
                                                                }
                                                            loc_804F313:
                                                                ptr53 = ptr106;
                                                                if(*ptr53 != 46) {
                                                                    v14 = 0;
                                                                    goto loc_804F623;
                                                                }
                                                                else {
                                                                    ++ptr106;
                                                                    ptr52 = ptr106;
                                                                    *(ptr100 + 6) = (int*)(ptr106 - 1);
                                                                    if(*ptr52 != 42) {
                                                                        while(1) {
                                                                            ptr48 = ptr106;
                                                                            v32 = *ptr48;
                                                                            if(*ptr48 == 47 || (char)v32 < 47) {
                                                                            loc_804F5F4:
                                                                                *(ptr100 + 7) = ptr106;
                                                                                ptr47 = ptr100;
                                                                                v31 = *(ptr47 + 7);
                                                                                ptr46 = ptr100;
                                                                                v51 = v31 - *(ptr46 + 6);
                                                                                v30 = v31 - *(ptr46 + 6);
                                                                                if(v30 > v71) {
                                                                                    v71 = v30;
                                                                                }
                                                                                v14 = 0;
                                                                                goto loc_804F623;
                                                                            }
                                                                            else {
                                                                                ptr45 = ptr106;
                                                                                v29 = *ptr45;
                                                                                if(*ptr45 != 57 && (char)v29 >= 57) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    ++ptr106;
                                                                                }
                                                                            }
                                                                        }
                                                                        goto loc_804F5F4;
                                                                    }
                                                                    else {
                                                                        ++ptr106;
                                                                        *(ptr100 + 7) = ptr106;
                                                                        if(v71 <= 1) {
                                                                            v71 = 2;
                                                                        }
                                                                        ptr51 = ptr106;
                                                                        v34 = *ptr51;
                                                                        if(*ptr51 == 47 || (char)v34 < 47) {
                                                                            goto loc_804F448;
                                                                        }
                                                                        else {
                                                                            ptr50 = ptr106;
                                                                            v33 = *ptr50;
                                                                            if(*ptr50 != 57 && (char)v33 >= 57) {
                                                                                goto loc_804F448;
                                                                            }
                                                                            else {
                                                                                ptr49 = ptr106;
                                                                                while(1) {
                                                                                    ptr44 = ptr49;
                                                                                    v28 = *ptr44;
                                                                                    if(*ptr44 == 47 || (char)v28 < 47) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        ptr43 = ptr49;
                                                                                        v27 = *ptr43;
                                                                                        if(*ptr43 != 57 && (char)v27 >= 57) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            ++ptr49;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                ptr42 = ptr49;
                                                                                if(*ptr42 != 36) {
                                                                                    goto loc_804F448;
                                                                                }
                                                                                else {
                                                                                    v26 = 0;
                                                                                    ptr49 = ptr106;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                goto loc_804F40B;
                                                            }
                                                            else {
                                                                ptr60 = param2;
                                                                v51 = *(ptr60 + 1);
                                                                ptr59 = param2;
                                                                v35 = *ptr59;
                                                                *(int*)(*ptr59 * 16 + v51) = 0;
                                                                *param2 = v35 + 1;
                                                            }
                                                        }
                                                        goto loc_804F261;
                                                    }
                                                    else {
                                                        ptr80 = ptr106;
                                                        v56 = *ptr80;
                                                        if(*ptr80 != 57 && (char)v56 >= 57) {
                                                            goto loc_804F12B;
                                                        }
                                                        else {
                                                            ptr79 = ptr106;
                                                            break;
                                                        }
                                                    }
                                                }
                                                else {
                                                    ptr78 = ptr106;
                                                    v55 = *ptr78;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if(*ptr78 == 47 || (char)v55 < 47) {
                            goto loc_804F313;
                        }
                        else {
                            ptr77 = ptr106;
                            v54 = *ptr77;
                            if(*ptr77 != 57 && (char)v54 >= 57) {
                                goto loc_804F313;
                            }
                            else {
                                *(ptr100 + 3) = ptr106;
                                while(1) {
                                    ptr76 = ptr106;
                                    v53 = *ptr76;
                                    if(*ptr76 == 47 || (char)v53 < 47) {
                                    loc_804F2EB:
                                        *(ptr100 + 4) = ptr106;
                                        ptr75 = ptr100;
                                        v52 = *(ptr75 + 4);
                                        ptr74 = ptr100;
                                        v51 = v52 - *(ptr74 + 3);
                                        v50 = v52 - *(ptr74 + 3);
                                        if(v50 > v70) {
                                            v70 = v50;
                                        }
                                        goto loc_804F313;
                                    }
                                    else {
                                        ptr73 = ptr106;
                                        v49 = *ptr73;
                                        if(*ptr73 != 57 && (char)v49 >= 57) {
                                            break;
                                        }
                                        else {
                                            ++ptr106;
                                        }
                                    }
                                }
                                goto loc_804F2EB;
                            loc_804EF44:
                                ptr72 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr72 + 2) | 0x1;
                                ++ptr106;
                            }
                        }
                    }
                    while(1) {
                        ptr71 = ptr79;
                        v48 = *ptr71;
                        if(*ptr71 == 47 || (char)v48 < 47) {
                            break;
                        }
                        else {
                            ptr70 = ptr79;
                            v47 = *ptr70;
                            if(*ptr70 != 57 && (char)v47 >= 57) {
                                break;
                            }
                            else {
                                ++ptr79;
                            }
                        }
                    }
                    ptr69 = ptr79;
                    if(*ptr69 != 36) {
                        goto loc_804F12B;
                    }
                    else {
                        v46 = 0;
                        ptr79 = ptr106;
                    }
                    while((char)*ptr79 > 47 && (char)*ptr79 <= 57) {
                        v45 = (int)((unsigned int)*ptr79 - 48);
                        v44 = v46 <= 0x19999999 ? (unsigned int)(v46 * 5 * 2): 0xffffffff;
                        v46 = /*BAD_CALL!*/ xsum2(v44, v45);
                        ++ptr79;
                        continue;
                    loc_804F40B:
                        while((char)*ptr49 > 47 && (char)*ptr49 <= 57) {
                            v25 = (int)((unsigned int)*ptr49 - 48);
                            v24 = v26 <= 0x19999999 ? (unsigned int)(v26 * 5 * 2): 0xffffffff;
                            v26 = /*BAD_CALL!*/ xsum2(v24, v25);
                            ++ptr49;
                            continue;
                        loc_804F448:
                            ptr41 = ptr100;
                            if(*(ptr41 + 8) == -1) {
                                *(int*)(ptr100 + 8) = v69;
                                ++v69;
                                ptr40 = ptr100;
                                if(*(ptr40 + 8) == -1) {
                                    break loc_804EF02;
                                }
                            }
                            ptr39 = ptr100;
                            v23 = *(ptr39 + 8);
                            if(v23 >= v67) {
                                v22 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                v21 = v67;
                                v20 = v21 == v23;
                                if((v21 < v23 || v20)) {
                                    v67 = /*BAD_CALL!*/ xsum2(v23, 1);
                                }
                                v19 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                v18 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                if(v18 != -1) {
                                    ptr38 = param2;
                                    if(*(int*)(ptr38 + 1)) {
                                        ptr37 = param2;
                                        /*BAD_CALL!*/ →realloc(*(int*)(ptr37 + 1), v18);
                                    }
                                    else {
                                        /*BAD_CALL!*/ →malloc(v18);
                                    }
                                    ptr36 = ptr105;
                                    ptr35 = ptr36;
                                    if(ptr35) {
                                        *(param2 + 1) = ptr35;
                                        goto loc_804F576;
                                    }
                                }
                            loc_804FB68:
                                if(*(int*)(param2 + 1)) {
                                    /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                                }
                                if(*(int*)(param1 + 1)) {
                                    →free(*(int*)(param1 + 1));
                                }
                                /*BAD_CALL!*/ →__errno_location();
                                *ptr105 = 12;
                                return -1;
                            }
                        loc_804F576:
                            while(1) {
                                ptr34 = param2;
                                v17 = *ptr34;
                                v16 = v17 == v23;
                                if(v17 >= v23 && !v16) {
                                    break;
                                }
                                else {
                                    ptr33 = param2;
                                    v51 = *(ptr33 + 1);
                                    ptr32 = param2;
                                    v15 = *ptr32;
                                    *(int*)(*ptr32 * 16 + v51) = 0;
                                    *param2 = v15 + 1;
                                }
                            }
                            ptr31 = param2;
                            ptr30 = (int*)(v23 * 16 + *(int*)(ptr31 + 1));
                            if(!*ptr30) {
                                ptr29 = param2;
                                *(int*)(v23 * 16 + *(int*)(ptr29 + 1)) = 5;
                                v14 = 0;
                                goto loc_804F623;
                            }
                            else {
                                ptr28 = param2;
                                ptr27 = (unsigned int*)(v23 * 16 + *(int*)(ptr28 + 1));
                            }
                            if(*ptr27 != 5) {
                                break loc_804EF02;
                            }
                            else {
                                v14 = 0;
                            loc_804F623:
                                while(1) {
                                    ptr26 = ptr106;
                                    if(*ptr26 != 104) {
                                        ptr25 = ptr106;
                                        if(*ptr25 == 76) {
                                            v14 |= 4;
                                        }
                                        else {
                                            ptr24 = ptr106;
                                            if(*ptr24 == 108) {
                                                v14 += 8;
                                                ++ptr106;
                                                continue;
                                            }
                                            else {
                                                ptr23 = ptr106;
                                                if(*ptr23 == 106) {
                                                    v14 += 16;
                                                    ++ptr106;
                                                    continue;
                                                }
                                                else {
                                                    ptr22 = ptr106;
                                                    if(*ptr22 != 122) {
                                                        ptr21 = ptr106;
                                                        if(*ptr21 != 90) {
                                                            ptr20 = ptr106;
                                                            if(*ptr20 == 116) {
                                                                ++ptr106;
                                                                continue;
                                                            }
                                                            else {
                                                                ptr19 = ptr106;
                                                                v68 = *ptr19;
                                                                ++ptr106;
                                                                v13 = (unsigned int)v68 - 37;
                                                                if((unsigned int)v68 - 37 > 83) {
                                                                    break loc_804EF02;
                                                                }
                                                                else {
                                                                    jump gvar_8050A14[(unsigned int)v68 - 37];
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        v51 = v14 & 0x1;
                                        v14 = (unsigned int)((1 << (v51 & 0x1f)) | v14);
                                    }
                                    ++ptr106;
                                }
                            }
                        }
                    }
                }
            }
        loc_804FB21:
            if(*(int*)(param2 + 1)) {
                /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
            }
            if(*(int*)(param1 + 1)) {
                →free(*(int*)(param1 + 1));
            }
            /*BAD_CALL!*/ →__errno_location();
            *ptr105 = 22;
            return -1;
        }
        while(1);
    }
    while(1);
alab1:
    do {
        v12 = 17;
        *(int*)(ptr100 + 10) = v66;
        ptr18 = ptr100;
        if(*(ptr18 + 10) == -1) {
            *(int*)(ptr100 + 10) = v69;
            ++v69;
            ptr17 = ptr100;
            if(*(ptr17 + 10) == -1) {
            loc_804FB21:
                if(*(int*)(param2 + 1)) {
                    /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                }
                if(*(int*)(param1 + 1)) {
                    →free(*(int*)(param1 + 1));
                }
                /*BAD_CALL!*/ →__errno_location();
                *ptr105 = 22;
                return -1;
            }
        }
        ptr16 = ptr100;
        v11 = *(ptr16 + 10);
        if(v11 >= v67) {
            v10 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
            v9 = v67;
            v8 = v9 == v11;
            if((v9 < v11 || v8)) {
                v67 = /*BAD_CALL!*/ xsum2(v11, 1);
            }
            v7 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
            v6 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
            if(v6 == -1) {
                goto loc_804FB68;
            }
            else {
                ptr15 = param2;
                if(*(int*)(ptr15 + 1)) {
                    ptr14 = param2;
                    /*BAD_CALL!*/ →realloc(*(int*)(ptr14 + 1), v6);
                }
                else {
                    /*BAD_CALL!*/ →malloc(v6);
                }
                ptr13 = ptr105;
                ptr12 = ptr13;
                if(!ptr12) {
                    goto loc_804FB68;
                }
                else {
                    *(param2 + 1) = ptr12;
                }
            }
        }
        while(1) {
            ptr11 = param2;
            v5 = *ptr11;
            v4 = v5 == v11;
            if(v5 >= v11 && !v4) {
                break;
            }
            else {
                ptr10 = param2;
                v51 = *(ptr10 + 1);
                ptr9 = param2;
                v3 = *ptr9;
                *(int*)(*ptr9 * 16 + v51) = 0;
                *param2 = v3 + 1;
            }
        }
        ptr8 = param2;
        ptr7 = (int*)(v11 * 16 + *(int*)(ptr8 + 1));
        if(!*ptr7) {
            ptr6 = param2;
            *(unsigned int*)(v11 * 16 + *(int*)(ptr6 + 1)) = v12;
            goto loc_804FA28;
        }
        else {
            ptr5 = param2;
            ptr4 = (unsigned int*)(v11 * 16 + *(int*)(ptr5 + 1));
        }
        if(*ptr4 != v12) {
            goto loc_804FB21;
        }
        else {
        loc_804FA28:
            *(unsigned char*)(ptr100 + 9) = v68;
            *(ptr100 + 1) = ptr106;
            ptr3 = param1;
            *param1 = *ptr3 + 1;
            ptr2 = param1;
            if(*ptr2 >= v72) {
                v2 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                v72 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
                v1 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                v0 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
                if(v0 == -1) {
                    goto loc_804FB68;
                }
                else {
                    ptr1 = param1;
                    /*BAD_CALL!*/ →realloc(*(int*)(ptr1 + 1), v0);
                    ptr0 = ptr105;
                    if(!ptr0) {
                        goto loc_804FB68;
                    }
                    else {
                        *(param1 + 1) = ptr0;
                    }
                }
            }
            do {
                ptr104 = ptr106;
                if(!*ptr104) {
                    *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr106;
                    *(param1 + 2) = v70;
                    *(param1 + 3) = v71;
                    return 0;
                }
                ptr103 = ptr106;
                v68 = *ptr103;
                ++ptr106;
            }
            while(v68 != 37);
            v66 = -1;
            ptr102 = param1;
            v65 = *(int*)(ptr102 + 1);
            ptr101 = param1;
            ptr100 = (unsigned int*)(*ptr101 * 44 + v65);
            *ptr100 = (int*)(ptr106 - 1);
            *(int*)(ptr100 + 2) = 0;
            *(int*)(ptr100 + 3) = 0;
            *(int*)(ptr100 + 4) = 0;
            *(int*)(ptr100 + 5) = -1;
            *(int*)(ptr100 + 6) = 0;
            *(int*)(ptr100 + 7) = 0;
            *(int*)(ptr100 + 8) = -1;
            *(int*)(ptr100 + 10) = -1;
            ptr99 = ptr106;
            v64 = *ptr99;
            if(*ptr99 == 47 || (char)v64 < 47) {
                goto loc_804EF3C;
            }
            else {
                ptr98 = ptr106;
                v63 = *ptr98;
                if(*ptr98 != 57 && (char)v63 >= 57) {
                    goto loc_804EF3C;
                }
                else {
                    ptr97 = ptr106;
                    while(1) {
                        ptr96 = ptr97;
                        v62 = *ptr96;
                        if(*ptr96 == 47 || (char)v62 < 47) {
                        loc_804EE8C:
                            ptr95 = ptr97;
                            if(*ptr95 != 36) {
                                goto loc_804EF3C;
                            }
                            else {
                                v61 = 0;
                                ptr97 = ptr106;
                            }
                            goto loc_804EF02;
                        }
                        else {
                            ptr94 = ptr97;
                            v58 = *ptr94;
                            if(*ptr94 != 57 && (char)v58 >= 57) {
                                break;
                            }
                            else {
                                ++ptr97;
                            }
                        }
                    }
                    goto loc_804EE8C;
                }
            }
        loc_804EF02:
            while(1) {
                if((char)*ptr97 <= 47) {
                    goto loc_804FB21;
                }
                else if((char)*ptr97 > 57) {
                    goto loc_804FB21;
                }
                else {
                    v60 = (int)((unsigned int)*ptr97 - 48);
                    v59 = v61 <= 0x19999999 ? (unsigned int)(v61 * 5 * 2): 0xffffffff;
                    v61 = /*BAD_CALL!*/ xsum2(v59, v60);
                    ++ptr97;
                    continue;
                loc_804EF3C:
                    while(1) {
                        ptr93 = ptr106;
                        if(*ptr93 == 39) {
                            goto loc_804EF44;
                        }
                        else {
                            ptr92 = ptr106;
                            if(*ptr92 == 45) {
                                ptr91 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr91 + 2) | 0x2;
                                ++ptr106;
                                continue;
                            }
                            else {
                                ptr90 = ptr106;
                                if(*ptr90 == 43) {
                                    ptr89 = ptr100;
                                    *(int*)(ptr100 + 2) = *(int*)(ptr89 + 2) | 0x4;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr88 = ptr106;
                                    if(*ptr88 == 32) {
                                        ptr87 = ptr100;
                                        *(int*)(ptr100 + 2) = *(int*)(ptr87 + 2) | 0x8;
                                        ++ptr106;
                                        continue;
                                    }
                                    else {
                                        ptr86 = ptr106;
                                        if(*ptr86 == 35) {
                                            ptr85 = ptr100;
                                            *(int*)(ptr100 + 2) = *(int*)(ptr85 + 2) | 0x10;
                                            ++ptr106;
                                            continue;
                                        }
                                        else {
                                            ptr84 = ptr106;
                                            if(*ptr84 == 48) {
                                                ptr83 = ptr100;
                                                *(int*)(ptr100 + 2) = *(int*)(ptr83 + 2) | 0x20;
                                                ++ptr106;
                                                continue;
                                            }
                                            else {
                                                ptr82 = ptr106;
                                                if(*ptr82 == 42) {
                                                    *(ptr100 + 3) = ptr106;
                                                    ++ptr106;
                                                    *(ptr100 + 4) = ptr106;
                                                    if(!v70) {
                                                        v70 = 1;
                                                    }
                                                    ptr81 = ptr106;
                                                    v57 = *ptr81;
                                                    if(*ptr81 == 47 || (char)v57 < 47) {
                                                    loc_804F12B:
                                                        ptr68 = ptr100;
                                                        if(*(ptr68 + 5) == -1) {
                                                            *(int*)(ptr100 + 5) = v69;
                                                            ++v69;
                                                            ptr67 = ptr100;
                                                            if(*(ptr67 + 5) == -1) {
                                                                goto loc_804FB21;
                                                            }
                                                        }
                                                        ptr66 = ptr100;
                                                        v43 = *(ptr66 + 5);
                                                        if(v43 >= v67) {
                                                            v42 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                            v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                            v41 = v67;
                                                            v40 = v41 == v43;
                                                            if((v41 < v43 || v40)) {
                                                                v67 = /*BAD_CALL!*/ xsum2(v43, 1);
                                                            }
                                                            v39 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                            v38 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                            if(v38 == -1) {
                                                                goto loc_804FB68;
                                                            }
                                                            else {
                                                                ptr65 = param2;
                                                                if(*(int*)(ptr65 + 1)) {
                                                                    ptr64 = param2;
                                                                    /*BAD_CALL!*/ →realloc(*(int*)(ptr64 + 1), v38);
                                                                }
                                                                else {
                                                                    /*BAD_CALL!*/ →malloc(v38);
                                                                }
                                                                ptr63 = ptr105;
                                                                ptr62 = ptr63;
                                                                if(!ptr62) {
                                                                    goto loc_804FB68;
                                                                }
                                                                else {
                                                                    *(param2 + 1) = ptr62;
                                                                }
                                                            }
                                                        }
                                                        while(1) {
                                                            ptr61 = param2;
                                                            v37 = *ptr61;
                                                            v36 = v37 == v43;
                                                            if(v37 >= v43 && !v36) {
                                                            loc_804F261:
                                                                ptr58 = param2;
                                                                ptr57 = (int*)(v43 * 16 + *(int*)(ptr58 + 1));
                                                                if(!*ptr57) {
                                                                    ptr56 = param2;
                                                                    *(int*)(v43 * 16 + *(int*)(ptr56 + 1)) = 5;
                                                                }
                                                                else {
                                                                    ptr55 = param2;
                                                                    ptr54 = (unsigned int*)(v43 * 16 + *(int*)(ptr55 + 1));
                                                                    if(*ptr54 != 5) {
                                                                        goto loc_804FB21;
                                                                    }
                                                                }
                                                            loc_804F313:
                                                                ptr53 = ptr106;
                                                                if(*ptr53 != 46) {
                                                                    v14 = 0;
                                                                    goto loc_804F623;
                                                                }
                                                                else {
                                                                    ++ptr106;
                                                                    ptr52 = ptr106;
                                                                    *(ptr100 + 6) = (int*)(ptr106 - 1);
                                                                    if(*ptr52 != 42) {
                                                                        while(1) {
                                                                            ptr48 = ptr106;
                                                                            v32 = *ptr48;
                                                                            if(*ptr48 == 47 || (char)v32 < 47) {
                                                                            loc_804F5F4:
                                                                                *(ptr100 + 7) = ptr106;
                                                                                ptr47 = ptr100;
                                                                                v31 = *(ptr47 + 7);
                                                                                ptr46 = ptr100;
                                                                                v51 = v31 - *(ptr46 + 6);
                                                                                v30 = v31 - *(ptr46 + 6);
                                                                                if(v30 > v71) {
                                                                                    v71 = v30;
                                                                                }
                                                                                v14 = 0;
                                                                                goto loc_804F623;
                                                                            }
                                                                            else {
                                                                                ptr45 = ptr106;
                                                                                v29 = *ptr45;
                                                                                if(*ptr45 != 57 && (char)v29 >= 57) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    ++ptr106;
                                                                                }
                                                                            }
                                                                        }
                                                                        goto loc_804F5F4;
                                                                    }
                                                                    else {
                                                                        ++ptr106;
                                                                        *(ptr100 + 7) = ptr106;
                                                                        if(v71 <= 1) {
                                                                            v71 = 2;
                                                                        }
                                                                        ptr51 = ptr106;
                                                                        v34 = *ptr51;
                                                                        if(*ptr51 == 47 || (char)v34 < 47) {
                                                                            goto loc_804F448;
                                                                        }
                                                                        else {
                                                                            ptr50 = ptr106;
                                                                            v33 = *ptr50;
                                                                            if(*ptr50 != 57 && (char)v33 >= 57) {
                                                                                goto loc_804F448;
                                                                            }
                                                                            else {
                                                                                ptr49 = ptr106;
                                                                                while(1) {
                                                                                    ptr44 = ptr49;
                                                                                    v28 = *ptr44;
                                                                                    if(*ptr44 == 47 || (char)v28 < 47) {
                                                                                        break;
                                                                                    }
                                                                                    else {
                                                                                        ptr43 = ptr49;
                                                                                        v27 = *ptr43;
                                                                                        if(*ptr43 != 57 && (char)v27 >= 57) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            ++ptr49;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                ptr42 = ptr49;
                                                                                if(*ptr42 != 36) {
                                                                                    goto loc_804F448;
                                                                                }
                                                                                else {
                                                                                    v26 = 0;
                                                                                    ptr49 = ptr106;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                goto loc_804F40B;
                                                            }
                                                            else {
                                                                ptr60 = param2;
                                                                v51 = *(ptr60 + 1);
                                                                ptr59 = param2;
                                                                v35 = *ptr59;
                                                                *(int*)(*ptr59 * 16 + v51) = 0;
                                                                *param2 = v35 + 1;
                                                            }
                                                        }
                                                        goto loc_804F261;
                                                    }
                                                    else {
                                                        ptr80 = ptr106;
                                                        v56 = *ptr80;
                                                        if(*ptr80 != 57 && (char)v56 >= 57) {
                                                            goto loc_804F12B;
                                                        }
                                                        else {
                                                            ptr79 = ptr106;
                                                            break;
                                                        }
                                                    }
                                                }
                                                else {
                                                    ptr78 = ptr106;
                                                    v55 = *ptr78;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if(*ptr78 == 47 || (char)v55 < 47) {
                            goto loc_804F313;
                        }
                        else {
                            ptr77 = ptr106;
                            v54 = *ptr77;
                            if(*ptr77 != 57 && (char)v54 >= 57) {
                                goto loc_804F313;
                            }
                            else {
                                *(ptr100 + 3) = ptr106;
                                while(1) {
                                    ptr76 = ptr106;
                                    v53 = *ptr76;
                                    if(*ptr76 == 47 || (char)v53 < 47) {
                                    loc_804F2EB:
                                        *(ptr100 + 4) = ptr106;
                                        ptr75 = ptr100;
                                        v52 = *(ptr75 + 4);
                                        ptr74 = ptr100;
                                        v51 = v52 - *(ptr74 + 3);
                                        v50 = v52 - *(ptr74 + 3);
                                        if(v50 > v70) {
                                            v70 = v50;
                                        }
                                        goto loc_804F313;
                                    }
                                    else {
                                        ptr73 = ptr106;
                                        v49 = *ptr73;
                                        if(*ptr73 != 57 && (char)v49 >= 57) {
                                            break;
                                        }
                                        else {
                                            ++ptr106;
                                        }
                                    }
                                }
                                goto loc_804F2EB;
                            loc_804EF44:
                                ptr72 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr72 + 2) | 0x1;
                                ++ptr106;
                            }
                        }
                    }
                    while(1) {
                        ptr71 = ptr79;
                        v48 = *ptr71;
                        if(*ptr71 == 47 || (char)v48 < 47) {
                            break;
                        }
                        else {
                            ptr70 = ptr79;
                            v47 = *ptr70;
                            if(*ptr70 != 57 && (char)v47 >= 57) {
                                break;
                            }
                            else {
                                ++ptr79;
                            }
                        }
                    }
                    ptr69 = ptr79;
                    if(*ptr69 != 36) {
                        goto loc_804F12B;
                    }
                    else {
                        v46 = 0;
                        ptr79 = ptr106;
                    }
                    while(1) {
                        if((char)*ptr79 <= 47) {
                            goto loc_804FB21;
                        }
                        else if((char)*ptr79 > 57) {
                            goto loc_804FB21;
                        }
                        else {
                            v45 = (int)((unsigned int)*ptr79 - 48);
                            v44 = v46 <= 0x19999999 ? (unsigned int)(v46 * 5 * 2): 0xffffffff;
                            v46 = /*BAD_CALL!*/ xsum2(v44, v45);
                            ++ptr79;
                            continue;
                        loc_804F40B:
                            while(1) {
                                if((char)*ptr49 <= 47) {
                                    goto loc_804FB21;
                                }
                                else if((char)*ptr49 > 57) {
                                    goto loc_804FB21;
                                }
                                else {
                                    v25 = (int)((unsigned int)*ptr49 - 48);
                                    v24 = v26 <= 0x19999999 ? (unsigned int)(v26 * 5 * 2): 0xffffffff;
                                    v26 = /*BAD_CALL!*/ xsum2(v24, v25);
                                    ++ptr49;
                                    continue;
                                loc_804F448:
                                    ptr41 = ptr100;
                                    if(*(ptr41 + 8) == -1) {
                                        *(int*)(ptr100 + 8) = v69;
                                        ++v69;
                                        ptr40 = ptr100;
                                        if(*(ptr40 + 8) == -1) {
                                            goto loc_804FB21;
                                        }
                                    }
                                    ptr39 = ptr100;
                                    v23 = *(ptr39 + 8);
                                    if(v23 >= v67) {
                                        v22 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                        v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                        v21 = v67;
                                        v20 = v21 == v23;
                                        if((v21 < v23 || v20)) {
                                            v67 = /*BAD_CALL!*/ xsum2(v23, 1);
                                        }
                                        v19 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                        v18 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                        if(v18 != -1) {
                                            ptr38 = param2;
                                            if(*(int*)(ptr38 + 1)) {
                                                ptr37 = param2;
                                                /*BAD_CALL!*/ →realloc(*(int*)(ptr37 + 1), v18);
                                            }
                                            else {
                                                /*BAD_CALL!*/ →malloc(v18);
                                            }
                                            ptr36 = ptr105;
                                            ptr35 = ptr36;
                                            if(ptr35) {
                                                *(param2 + 1) = ptr35;
                                                goto loc_804F576;
                                            }
                                        }
                                    loc_804FB68:
                                        if(*(int*)(param2 + 1)) {
                                            /*BAD_CALL!*/ →free(*(int*)(param2 + 1));
                                        }
                                        if(*(int*)(param1 + 1)) {
                                            →free(*(int*)(param1 + 1));
                                        }
                                        /*BAD_CALL!*/ →__errno_location();
                                        *ptr105 = 12;
                                        return -1;
                                    }
                                loc_804F576:
                                    while(1) {
                                        ptr34 = param2;
                                        v17 = *ptr34;
                                        v16 = v17 == v23;
                                        if(v17 >= v23 && !v16) {
                                            break;
                                        }
                                        else {
                                            ptr33 = param2;
                                            v51 = *(ptr33 + 1);
                                            ptr32 = param2;
                                            v15 = *ptr32;
                                            *(int*)(*ptr32 * 16 + v51) = 0;
                                            *param2 = v15 + 1;
                                        }
                                    }
                                    ptr31 = param2;
                                    ptr30 = (int*)(v23 * 16 + *(int*)(ptr31 + 1));
                                    if(!*ptr30) {
                                        ptr29 = param2;
                                        *(int*)(v23 * 16 + *(int*)(ptr29 + 1)) = 5;
                                        v14 = 0;
                                        goto loc_804F623;
                                    }
                                    else {
                                        ptr28 = param2;
                                        ptr27 = (unsigned int*)(v23 * 16 + *(int*)(ptr28 + 1));
                                    }
                                    if(*ptr27 != 5) {
                                        goto loc_804FB21;
                                    }
                                    else {
                                        v14 = 0;
                                    loc_804F623:
                                        while(1) {
                                            ptr26 = ptr106;
                                            if(*ptr26 == 104) {
                                                v51 = v14 & 0x1;
                                                v14 = (unsigned int)((1 << (v51 & 0x1f)) | v14);
                                                ++ptr106;
                                            }
                                            else {
                                                ptr25 = ptr106;
                                                if(*ptr25 == 76) {
                                                    v14 |= 4;
                                                    ++ptr106;
                                                }
                                                else {
                                                    ptr24 = ptr106;
                                                    if(*ptr24 == 108) {
                                                        v14 += 8;
                                                        ++ptr106;
                                                    }
                                                    else {
                                                        ptr23 = ptr106;
                                                        if(*ptr23 == 106) {
                                                            v14 += 16;
                                                            ++ptr106;
                                                        }
                                                        else {
                                                            ptr22 = ptr106;
                                                            if(*ptr22 == 122) {
                                                                break alab1;
                                                            }
                                                            else {
                                                                ptr21 = ptr106;
                                                                if(*ptr21 == 90) {
                                                                    break alab1;
                                                                }
                                                                else {
                                                                    ptr20 = ptr106;
                                                                    if(*ptr20 == 116) {
                                                                        ++ptr106;
                                                                    }
                                                                    else {
                                                                        ptr19 = ptr106;
                                                                        v68 = *ptr19;
                                                                        ++ptr106;
                                                                        v13 = (unsigned int)v68 - 37;
                                                                        if((unsigned int)v68 - 37 > 83) {
                                                                            goto loc_804FB21;
                                                                        }
                                                                        else {
                                                                            jump gvar_8050A14[(unsigned int)v68 - 37];
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while(1);
    ++ptr106;
    goto loc_804F623;
alab2:
    do {
        v12 = 0;
        *(unsigned char*)(ptr100 + 9) = v68;
        *(ptr100 + 1) = ptr106;
        ptr3 = param1;
        *param1 = *ptr3 + 1;
        ptr2 = param1;
        if(*ptr2 >= v72) {
            v2 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
            v72 = v72 < 0x80000000 ? v72 * 2: 0xffffffff;
            v1 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
            v0 = v72 <= 0x5d1745d ? (int)(v72 * 44): -1;
            if(v0 == -1) {
                goto loc_804FB68;
            }
            else {
                ptr1 = param1;
                /*BAD_CALL!*/ →realloc(*(int*)(ptr1 + 1), v0);
                ptr0 = ptr105;
                if(!ptr0) {
                    goto loc_804FB68;
                }
                else {
                    *(param1 + 1) = ptr0;
                }
            }
        }
        do {
            ptr104 = ptr106;
            if(!*ptr104) {
                *(unsigned int*)(*param1 * 44 + *(int*)(param1 + 1)) = ptr106;
                *(param1 + 2) = v70;
                *(param1 + 3) = v71;
                return 0;
            }
            ptr103 = ptr106;
            v68 = *ptr103;
            ++ptr106;
        }
        while(v68 != 37);
        v66 = -1;
        ptr102 = param1;
        v65 = *(int*)(ptr102 + 1);
        ptr101 = param1;
        ptr100 = (unsigned int*)(*ptr101 * 44 + v65);
        *ptr100 = (int*)(ptr106 - 1);
        *(int*)(ptr100 + 2) = 0;
        *(int*)(ptr100 + 3) = 0;
        *(int*)(ptr100 + 4) = 0;
        *(int*)(ptr100 + 5) = -1;
        *(int*)(ptr100 + 6) = 0;
        *(int*)(ptr100 + 7) = 0;
        *(int*)(ptr100 + 8) = -1;
        *(int*)(ptr100 + 10) = -1;
        ptr99 = ptr106;
        v64 = *ptr99;
        if(*ptr99 == 47 || (char)v64 < 47) {
            goto loc_804EF3C;
        }
        else {
            ptr98 = ptr106;
            v63 = *ptr98;
            if(*ptr98 != 57 && (char)v63 >= 57) {
                goto loc_804EF3C;
            }
            else {
                ptr97 = ptr106;
                while(1) {
                    ptr96 = ptr97;
                    v62 = *ptr96;
                    if(*ptr96 == 47 || (char)v62 < 47) {
                    loc_804EE8C:
                        ptr95 = ptr97;
                        if(*ptr95 != 36) {
                            goto loc_804EF3C;
                        }
                        else {
                            v61 = 0;
                            ptr97 = ptr106;
                        }
                        goto loc_804EF02;
                    }
                    else {
                        ptr94 = ptr97;
                        v58 = *ptr94;
                        if(*ptr94 != 57 && (char)v58 >= 57) {
                            break;
                        }
                        else {
                            ++ptr97;
                        }
                    }
                }
                goto loc_804EE8C;
            }
        }
    loc_804EF02:
        while(1) {
            if((char)*ptr97 <= 47 || (char)*ptr97 > 57) {
            loc_804FB21:
                if(*(int*)(param2 + 1)) {
                    →free(*(int*)(param2 + 1));
                }
                if(*(int*)(param1 + 1)) {
                    →free(*(int*)(param1 + 1));
                }
                /*BAD_CALL!*/ →__errno_location();
                *ptr105 = 22;
                return -1;
            }
            v60 = (int)((unsigned int)*ptr97 - 48);
            v59 = v61 <= 0x19999999 ? (unsigned int)(v61 * 5 * 2): 0xffffffff;
            v61 = /*BAD_CALL!*/ xsum2(v59, v60);
            ++ptr97;
            continue;
        loc_804EF3C:
            while(1) {
                ptr93 = ptr106;
                if(*ptr93 == 39) {
                    goto loc_804EF44;
                }
                else {
                    ptr92 = ptr106;
                    if(*ptr92 == 45) {
                        ptr91 = ptr100;
                        *(int*)(ptr100 + 2) = *(int*)(ptr91 + 2) | 0x2;
                        ++ptr106;
                        continue;
                    }
                    else {
                        ptr90 = ptr106;
                        if(*ptr90 == 43) {
                            ptr89 = ptr100;
                            *(int*)(ptr100 + 2) = *(int*)(ptr89 + 2) | 0x4;
                            ++ptr106;
                            continue;
                        }
                        else {
                            ptr88 = ptr106;
                            if(*ptr88 == 32) {
                                ptr87 = ptr100;
                                *(int*)(ptr100 + 2) = *(int*)(ptr87 + 2) | 0x8;
                                ++ptr106;
                                continue;
                            }
                            else {
                                ptr86 = ptr106;
                                if(*ptr86 == 35) {
                                    ptr85 = ptr100;
                                    *(int*)(ptr100 + 2) = *(int*)(ptr85 + 2) | 0x10;
                                    ++ptr106;
                                    continue;
                                }
                                else {
                                    ptr84 = ptr106;
                                    if(*ptr84 == 48) {
                                        ptr83 = ptr100;
                                        *(int*)(ptr100 + 2) = *(int*)(ptr83 + 2) | 0x20;
                                        ++ptr106;
                                        continue;
                                    }
                                    else {
                                        ptr82 = ptr106;
                                        if(*ptr82 == 42) {
                                            *(ptr100 + 3) = ptr106;
                                            ++ptr106;
                                            *(ptr100 + 4) = ptr106;
                                            if(!v70) {
                                                v70 = 1;
                                            }
                                            ptr81 = ptr106;
                                            v57 = *ptr81;
                                            if(*ptr81 == 47 || (char)v57 < 47) {
                                            loc_804F12B:
                                                ptr68 = ptr100;
                                                if(*(ptr68 + 5) == -1) {
                                                    *(int*)(ptr100 + 5) = v69;
                                                    ++v69;
                                                    ptr67 = ptr100;
                                                    if(*(ptr67 + 5) == -1) {
                                                        goto loc_804FB21;
                                                    }
                                                }
                                                ptr66 = ptr100;
                                                v43 = *(ptr66 + 5);
                                                if(v43 >= v67) {
                                                    v42 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                    v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                                    v41 = v67;
                                                    v40 = v41 == v43;
                                                    if((v41 < v43 || v40)) {
                                                        v67 = /*BAD_CALL!*/ xsum2(v43, 1);
                                                    }
                                                    v39 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                    v38 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                                    if(v38 == -1) {
                                                        goto loc_804FB68;
                                                    }
                                                    else {
                                                        ptr65 = param2;
                                                        if(*(int*)(ptr65 + 1)) {
                                                            ptr64 = param2;
                                                            /*BAD_CALL!*/ →realloc(*(int*)(ptr64 + 1), v38);
                                                        }
                                                        else {
                                                            /*BAD_CALL!*/ →malloc(v38);
                                                        }
                                                        ptr63 = ptr105;
                                                        ptr62 = ptr63;
                                                        if(!ptr62) {
                                                            goto loc_804FB68;
                                                        }
                                                        else {
                                                            *(param2 + 1) = ptr62;
                                                        }
                                                    }
                                                }
                                                while(1) {
                                                    ptr61 = param2;
                                                    v37 = *ptr61;
                                                    v36 = v37 == v43;
                                                    if(v37 >= v43 && !v36) {
                                                    loc_804F261:
                                                        ptr58 = param2;
                                                        ptr57 = (int*)(v43 * 16 + *(int*)(ptr58 + 1));
                                                        if(!*ptr57) {
                                                            ptr56 = param2;
                                                            *(int*)(v43 * 16 + *(int*)(ptr56 + 1)) = 5;
                                                        }
                                                        else {
                                                            ptr55 = param2;
                                                            ptr54 = (unsigned int*)(v43 * 16 + *(int*)(ptr55 + 1));
                                                            if(*ptr54 != 5) {
                                                                goto loc_804FB21;
                                                            }
                                                        }
                                                    loc_804F313:
                                                        ptr53 = ptr106;
                                                        if(*ptr53 != 46) {
                                                            v14 = 0;
                                                            goto loc_804F623;
                                                        }
                                                        else {
                                                            ++ptr106;
                                                            ptr52 = ptr106;
                                                            *(ptr100 + 6) = (int*)(ptr106 - 1);
                                                            if(*ptr52 != 42) {
                                                                while(1) {
                                                                    ptr48 = ptr106;
                                                                    v32 = *ptr48;
                                                                    if(*ptr48 == 47 || (char)v32 < 47) {
                                                                    loc_804F5F4:
                                                                        *(ptr100 + 7) = ptr106;
                                                                        ptr47 = ptr100;
                                                                        v31 = *(ptr47 + 7);
                                                                        ptr46 = ptr100;
                                                                        v51 = v31 - *(ptr46 + 6);
                                                                        v30 = v31 - *(ptr46 + 6);
                                                                        if(v30 > v71) {
                                                                            v71 = v30;
                                                                        }
                                                                        v14 = 0;
                                                                        goto loc_804F623;
                                                                    }
                                                                    else {
                                                                        ptr45 = ptr106;
                                                                        v29 = *ptr45;
                                                                        if(*ptr45 != 57 && (char)v29 >= 57) {
                                                                            break;
                                                                        }
                                                                        else {
                                                                            ++ptr106;
                                                                        }
                                                                    }
                                                                }
                                                                goto loc_804F5F4;
                                                            }
                                                            else {
                                                                ++ptr106;
                                                                *(ptr100 + 7) = ptr106;
                                                                if(v71 <= 1) {
                                                                    v71 = 2;
                                                                }
                                                                ptr51 = ptr106;
                                                                v34 = *ptr51;
                                                                if(*ptr51 == 47 || (char)v34 < 47) {
                                                                    goto loc_804F448;
                                                                }
                                                                else {
                                                                    ptr50 = ptr106;
                                                                    v33 = *ptr50;
                                                                    if(*ptr50 != 57 && (char)v33 >= 57) {
                                                                        goto loc_804F448;
                                                                    }
                                                                    else {
                                                                        ptr49 = ptr106;
                                                                        while(1) {
                                                                            ptr44 = ptr49;
                                                                            v28 = *ptr44;
                                                                            if(*ptr44 == 47 || (char)v28 < 47) {
                                                                                break;
                                                                            }
                                                                            else {
                                                                                ptr43 = ptr49;
                                                                                v27 = *ptr43;
                                                                                if(*ptr43 != 57 && (char)v27 >= 57) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    ++ptr49;
                                                                                }
                                                                            }
                                                                        }
                                                                        ptr42 = ptr49;
                                                                        if(*ptr42 != 36) {
                                                                            goto loc_804F448;
                                                                        }
                                                                        else {
                                                                            v26 = 0;
                                                                            ptr49 = ptr106;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        goto loc_804F40B;
                                                    }
                                                    else {
                                                        ptr60 = param2;
                                                        v51 = *(ptr60 + 1);
                                                        ptr59 = param2;
                                                        v35 = *ptr59;
                                                        *(int*)(*ptr59 * 16 + v51) = 0;
                                                        *param2 = v35 + 1;
                                                    }
                                                }
                                                goto loc_804F261;
                                            }
                                            else {
                                                ptr80 = ptr106;
                                                v56 = *ptr80;
                                                if(*ptr80 != 57 && (char)v56 >= 57) {
                                                    goto loc_804F12B;
                                                }
                                                else {
                                                    ptr79 = ptr106;
                                                    break;
                                                }
                                            }
                                        }
                                        else {
                                            ptr78 = ptr106;
                                            v55 = *ptr78;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if(*ptr78 == 47 || (char)v55 < 47) {
                    goto loc_804F313;
                }
                else {
                    ptr77 = ptr106;
                    v54 = *ptr77;
                    if(*ptr77 != 57 && (char)v54 >= 57) {
                        goto loc_804F313;
                    }
                    else {
                        *(ptr100 + 3) = ptr106;
                        while(1) {
                            ptr76 = ptr106;
                            v53 = *ptr76;
                            if(*ptr76 == 47 || (char)v53 < 47) {
                            loc_804F2EB:
                                *(ptr100 + 4) = ptr106;
                                ptr75 = ptr100;
                                v52 = *(ptr75 + 4);
                                ptr74 = ptr100;
                                v51 = v52 - *(ptr74 + 3);
                                v50 = v52 - *(ptr74 + 3);
                                if(v50 > v70) {
                                    v70 = v50;
                                }
                                goto loc_804F313;
                            }
                            else {
                                ptr73 = ptr106;
                                v49 = *ptr73;
                                if(*ptr73 != 57 && (char)v49 >= 57) {
                                    break;
                                }
                                else {
                                    ++ptr106;
                                }
                            }
                        }
                        goto loc_804F2EB;
                    loc_804EF44:
                        ptr72 = ptr100;
                        *(int*)(ptr100 + 2) = *(int*)(ptr72 + 2) | 0x1;
                        ++ptr106;
                    }
                }
            }
            while(1) {
                ptr71 = ptr79;
                v48 = *ptr71;
                if(*ptr71 == 47 || (char)v48 < 47) {
                    break;
                }
                else {
                    ptr70 = ptr79;
                    v47 = *ptr70;
                    if(*ptr70 != 57 && (char)v47 >= 57) {
                        break;
                    }
                    else {
                        ++ptr79;
                    }
                }
            }
            ptr69 = ptr79;
            if(*ptr69 != 36) {
                goto loc_804F12B;
            }
            else {
                v46 = 0;
                ptr79 = ptr106;
            }
            while(1) {
                if((char)*ptr79 <= 47) {
                    goto loc_804FB21;
                }
                else if((char)*ptr79 > 57) {
                    goto loc_804FB21;
                }
                else {
                    v45 = (int)((unsigned int)*ptr79 - 48);
                    v44 = v46 <= 0x19999999 ? (unsigned int)(v46 * 5 * 2): 0xffffffff;
                    v46 = /*BAD_CALL!*/ xsum2(v44, v45);
                    ++ptr79;
                    continue;
                loc_804F40B:
                    while(1) {
                        if((char)*ptr49 <= 47) {
                            goto loc_804FB21;
                        }
                        else if((char)*ptr49 > 57) {
                            goto loc_804FB21;
                        }
                        else {
                            v25 = (int)((unsigned int)*ptr49 - 48);
                            v24 = v26 <= 0x19999999 ? (unsigned int)(v26 * 5 * 2): 0xffffffff;
                            v26 = /*BAD_CALL!*/ xsum2(v24, v25);
                            ++ptr49;
                            continue;
                        loc_804F448:
                            ptr41 = ptr100;
                            if(*(ptr41 + 8) == -1) {
                                *(int*)(ptr100 + 8) = v69;
                                ++v69;
                                ptr40 = ptr100;
                                if(*(ptr40 + 8) == -1) {
                                    goto loc_804FB21;
                                }
                            }
                            ptr39 = ptr100;
                            v23 = *(ptr39 + 8);
                            if(v23 >= v67) {
                                v22 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                v67 = v67 < 0x80000000 ? v67 * 2: 0xffffffff;
                                v21 = v67;
                                v20 = v21 == v23;
                                if((v21 < v23 || v20)) {
                                    v67 = /*BAD_CALL!*/ xsum2(v23, 1);
                                }
                                v19 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                v18 = v67 <= 0xfffffff ? (int)(v67 * 16): -1;
                                if(v18 != -1) {
                                    ptr38 = param2;
                                    if(*(int*)(ptr38 + 1)) {
                                        ptr37 = param2;
                                        /*BAD_CALL!*/ →realloc(*(int*)(ptr37 + 1), v18);
                                    }
                                    else {
                                        /*BAD_CALL!*/ →malloc(v18);
                                    }
                                    ptr36 = ptr105;
                                    ptr35 = ptr36;
                                    if(ptr35) {
                                        *(param2 + 1) = ptr35;
                                        goto loc_804F576;
                                    }
                                }
                            loc_804FB68:
                                if(*(int*)(param2 + 1)) {
                                    →free(*(int*)(param2 + 1));
                                }
                                if(*(int*)(param1 + 1)) {
                                    →free(*(int*)(param1 + 1));
                                }
                                /*BAD_CALL!*/ →__errno_location();
                                *ptr105 = 12;
                                return -1;
                            }
                        loc_804F576:
                            while(1) {
                                ptr34 = param2;
                                v17 = *ptr34;
                                v16 = v17 == v23;
                                if(v17 >= v23 && !v16) {
                                    break;
                                }
                                else {
                                    ptr33 = param2;
                                    v51 = *(ptr33 + 1);
                                    ptr32 = param2;
                                    v15 = *ptr32;
                                    *(int*)(*ptr32 * 16 + v51) = 0;
                                    *param2 = v15 + 1;
                                }
                            }
                            ptr31 = param2;
                            ptr30 = (int*)(v23 * 16 + *(int*)(ptr31 + 1));
                            if(!*ptr30) {
                                ptr29 = param2;
                                *(int*)(v23 * 16 + *(int*)(ptr29 + 1)) = 5;
                                v14 = 0;
                                goto loc_804F623;
                            }
                            else {
                                ptr28 = param2;
                                ptr27 = (unsigned int*)(v23 * 16 + *(int*)(ptr28 + 1));
                            }
                            if(*ptr27 != 5) {
                                goto loc_804FB21;
                            }
                            else {
                                v14 = 0;
                            loc_804F623:
                                while(1) {
                                    ptr26 = ptr106;
                                    if(*ptr26 == 104) {
                                        v51 = v14 & 0x1;
                                        v14 = (unsigned int)((1 << (v51 & 0x1f)) | v14);
                                        ++ptr106;
                                    }
                                    else {
                                        ptr25 = ptr106;
                                        if(*ptr25 == 76) {
                                            v14 |= 4;
                                            ++ptr106;
                                        }
                                        else {
                                            ptr24 = ptr106;
                                            if(*ptr24 == 108) {
                                                v14 += 8;
                                                ++ptr106;
                                            }
                                            else {
                                                ptr23 = ptr106;
                                                if(*ptr23 == 106) {
                                                    v14 += 16;
                                                    ++ptr106;
                                                }
                                                else {
                                                    ptr22 = ptr106;
                                                    if(*ptr22 == 122) {
                                                        break alab2;
                                                    }
                                                    else {
                                                        ptr21 = ptr106;
                                                        if(*ptr21 == 90) {
                                                            break alab2;
                                                        }
                                                        else {
                                                            ptr20 = ptr106;
                                                            if(*ptr20 == 116) {
                                                                ++ptr106;
                                                            }
                                                            else {
                                                                ptr19 = ptr106;
                                                                v68 = *ptr19;
                                                                ++ptr106;
                                                                v13 = (unsigned int)v68 - 37;
                                                                if((unsigned int)v68 - 37 > 83) {
                                                                    goto loc_804FB21;
                                                                }
                                                                else {
                                                                    jump gvar_8050A14[(unsigned int)v68 - 37];
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while(1);
    ++ptr106;
    goto loc_804F623;
}

int ptr_align(int param0, unsigned int param1) {
    unsigned int v0 = (unsigned int)(param1 - 1 + param0);
    return (int)(v0 - v0 % param1);
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

void* quotearg_alloc(int param0, int param1, int* param2) {
    int* ptr0;
    →__errno_location();
    int v0 = *ptr0;
    int v1 = quotearg_buffer(0, 0, param0, param1, param2);
    size_t v2 = (size_t)(v1 + 1);
    void* result = xcharalloc((size_t)(v1 + 1));
    quotearg_buffer((int)result, (int)(size_t)(v1 + 1), param0, param1, param2);
    →__errno_location();
    *ptr0 = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int quotearg_buffer(int param0, int param1, int param2, int param3, unsigned int* param4) {
    int* ptr0;
    int* ptr1 = param4 ? param4: (int*)&default_quoting_options;
    int* ptr2 = param4 ? param4: (int*)&default_quoting_options;
    →__errno_location();
    int v0 = *ptr0;
    int result = quotearg_buffer_restyled(param0, param1, param2, param3, (int)(param4 ? *param4: *(int*)&default_quoting_options), (int)(param4 ? param4: (int*)&default_quoting_options));
    →__errno_location();
    *ptr0 = v0;
    return result;
}

unsigned int quotearg_buffer_restyled(char* param0, unsigned int param1, int param2, int param3, unsigned int param4, int param5) {
    char v0;
    int* ptr0;
    unsigned char v1;
    char v2;
    char v3;
    unsigned char v4;
    char v5;
    char v6;
    int v7;
    int v8;
    unsigned int result = 0;
    unsigned int v9 = 0;
    int v10 = 0;
    unsigned char v11 = 0;
    →__ctype_get_mb_cur_max();
    unsigned char v12 = v8 != 1 ? 0: 1;
    switch(param4) {
        case 2: {
            if(param1 > 0) {
                *param0 = 39;
            }
            ++result;
            v9 = &gvar_8050680;
            v10 = 1;
            break;
        }
        case 3: {
            if(param1 > 0) {
                *param0 = 34;
            }
            ++result;
            v11 = 1;
            v9 = &gvar_805067C;
            v10 = 1;
            break;
        }
        case 4: {
            v11 = 1;
            break;
        }
        case 5: 
        case 6: {
            unsigned int v13 = gettext_quote(&gvar_805067E, param4);
            unsigned int v14 = gettext_quote(&gvar_8050680, param4);
            v9 = v13;
            for(unsigned int i = v9; *(char*)i; i = v9) {
                if(result < param1) {
                    char* ptr1 = (char*)(result + (int)param0);
                    unsigned int v15 = v9;
                    *ptr1 = *(char*)v15;
                }
                ++result;
                ++v9;
            }
            v11 = 1;
            v9 = v14;
            →strlen((int)v9);
            v10 = v8;
        }
    }
    char* ptr2 = NULL;
alab1:
    while(1) {
        if(param3 == -1) {
            char* ptr3 = (char*)((int)ptr2 + param2);
            v4 = *ptr3 ? 1: 0;
        }
        else {
            v4 = ptr2 == param3 ? 0: 1;
        }
        if(v4) {
            if(v11 && v10) {
                int* ptr4 = (int*)(v10 + (int)ptr2);
                char v16 = ptr4 == param3;
                if(((unsigned int)ptr4 < (unsigned int)param3 || v16)) {
                    →memcmp((int)ptr2 + param2, (int)v9, v10);
                    if(!v8) {
                        if(result < param1) {
                            *(char*)(result + (int)param0) = 92;
                        }
                        ++result;
                    }
                }
            }
            char* ptr5 = (char*)((int)ptr2 + param2);
            char v17 = *ptr5;
            char* ptr6 = (char*)v17;
            switch(v17) {
                case 0: {
                    break;
                }
                case 7: {
                    v3 = 97;
                    goto loc_804A649;
                }
                case 8: {
                    v3 = 98;
                    goto loc_804A649;
                }
                case 9: {
                    v3 = 116;
                    goto loc_804A63B;
                }
                case 10: {
                    v3 = 110;
                loc_804A63B:
                    v2 = param4 == 1;
                    if(v2) {
                        break alab1;
                    }
                    else {
                    loc_804A649:
                        if(v11) {
                            v17 = v3;
                            goto loc_804A98F;
                        }
                    }
                    goto loc_804A960;
                }
                case 11: {
                    v3 = 118;
                    goto loc_804A649;
                }
                case 12: {
                    v3 = 102;
                    goto loc_804A649;
                }
                case 13: {
                    v3 = 114;
                    goto loc_804A63B;
                }
                case 39: {
                    unsigned int v18 = param4;
                    v2 = v18 == 1;
                    if(v2) {
                        break alab1;
                    }
                    else if(v18 == 2) {
                        if(result < param1) {
                            *(char*)(result + (int)param0) = 39;
                        }
                        ++result;
                        if(result < param1) {
                            *(char*)(result + (int)param0) = 92;
                        }
                        ++result;
                        if(result < param1) {
                            *(char*)(result + (int)param0) = 39;
                        }
                        ++result;
                    }
                    goto loc_804A960;
                }
                case 63: {
                    unsigned int v19 = param4;
                    v2 = v19 == 1;
                    if(v2) {
                        break alab1;
                    }
                    else if(v19 == 3 && (unsigned int)(int*)(ptr2 + 2) < (unsigned int)param3) {
                        unsigned char* ptr7 = (unsigned char*)((unsigned char*)((int)ptr2 + param2) + 1);
                        if(*ptr7 == 63) {
                            char* ptr8 = (char*)((char*)((int)ptr2 + param2) + 2);
                            int v20 = (unsigned int)*ptr8;
                            *(int*)&v6 = ((unsigned int)*ptr8 | ((unsigned int)((v20 >>> 7) & 0x1 ? 0xffffff: 0) << 8)) - 33;
                            if(*(unsigned int*)&v6 <= 29 && ((1 << ((unsigned int)v6 & 0x1f)) & 0x380051c1)) {
                                char* ptr9 = (char*)((char*)((int)ptr2 + param2) + 2);
                                v17 = *ptr9;
                                ptr2 += 2;
                                if(result < param1) {
                                    *(char*)(result + (int)param0) = 63;
                                }
                                ++result;
                                if(result < param1) {
                                    *(char*)(result + (int)param0) = 92;
                                }
                                ++result;
                                if(result < param1) {
                                    *(char*)(result + (int)param0) = 63;
                                }
                                ++result;
                            }
                        }
                    }
                    goto loc_804A960;
                }
                case 92: {
                    v3 = v17;
                    goto loc_804A63B;
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
                    goto loc_804A68E;
                }
                case 123: 
                case 125: {
                    if(param3 == -1) {
                        char* ptr10 = (char*)(param2 + 1);
                        v1 = *ptr10 ? 1: 0;
                    }
                    else {
                        v1 = param3 == 1 ? 0: 1;
                    }
                    if(!v1) {
                    loc_804A688:
                        if(!ptr2) {
                        loc_804A68E:
                            v2 = param4 == 1;
                            if(v2) {
                                break alab1;
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
                    if(v12) {
                        ptr0 = (int*)0x1;
                        →__ctype_b_loc();
                        int v21 = (unsigned int)v17 * 2;
                        short* ptr11 = (short*)(*(int*)v8 + v21);
                        int v22 = (unsigned int)*ptr11 & 0x4000;
                        char v23 = v22 ? 0: 1;
                        v22 = (unsigned int)(v23 ? 0: 1) | ((unsigned int)((v22 >>> 8) & 0xffffff) << 8);
                        v0 = v23 ? 0: 1;
                    }
                    else {
                        →memset(&v5, 0, 8);
                        ptr0 = NULL;
                        v0 = 1;
                        if(param3 == -1) {
                            →strlen(param2);
                            param3 = v8;
                        }
                    alab2:
                        while(1) {
                            int v24 = param3 - (int)(int*)((int)ptr0 + (int)ptr2);
                            int v25 = (int)(int*)((int)ptr0 + (int)ptr2) + param2;
                            →mbrtowc(&v7, v25, v24, &v5);
                            int v26 = v8;
                            if(!v26) {
                            loc_804A873:
                                if((unsigned int)ptr0 > 1 || (!(v11 ^ 0x1) && (v0 ^ 0x1))) {
                                    int* ptr12 = (int*)((int)ptr0 + (int)ptr2);
                                    while(1) {
                                        if(v11 && (v0 ^ 0x1)) {
                                            if(result < param1) {
                                                *(char*)(result + (int)param0) = 92;
                                            }
                                            ++result;
                                            if(result < param1) {
                                                *(char*)(result + (int)param0) = (v17 >>> 6) + 48;
                                            }
                                            ++result;
                                            if(result < param1) {
                                                *(char*)(result + (int)param0) = ((v17 >>> 3) & 0x7) + 48;
                                            }
                                            ++result;
                                            v17 = (v17 & 0x7) + 48;
                                        }
                                        if((int*)(ptr2 + 1) >= ptr12) {
                                            goto loc_804A9A7;
                                        }
                                        else {
                                            if(result < param1) {
                                                *(char*)(result + (int)param0) = v17;
                                            }
                                            ++result;
                                            ++ptr2;
                                            char* ptr13 = (char*)((int)ptr2 + param2);
                                            v17 = *ptr13;
                                        }
                                    }
                                    v3 = 118;
                                    goto loc_804A649;
                                }
                                else {
                                    goto loc_804A960;
                                }
                            }
                            else if(v26 == -1) {
                                v0 = 0;
                                break;
                            }
                            else if(v26 != -2) {
                                if(param4 == 1) {
                                    for(unsigned int j = 1; j < (unsigned int)v26; ++j) {
                                        char* ptr14 = (char*)((int)(int*)(j + (int)ptr0) + (int)(int*)((int)ptr2 + param2));
                                        int v27 = (unsigned int)*ptr14;
                                        unsigned int v28 = ((unsigned int)*ptr14 | ((unsigned int)((v27 >>> 7) & 0x1 ? 0xffffff: 0) << 8)) - 91;
                                        v2 = v28 == 33;
                                        if((v28 < 33 || v2)) {
                                            switch(v28) {
                                                case 0: 
                                                case 1: 
                                                case 3: 
                                                case 5: {
                                                    break alab1;
                                                }
                                                case 2: 
                                                case 4: 
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
                                                    break;
                                                }
                                                default: {
                                                    throw 0;
                                                }
                                            }
                                        }
                                    }
                                }
                                →iswprint(v7);
                                if(!v8) {
                                    v0 = 0;
                                }
                                ptr0 = (int*)(v26 + (int)ptr0);
                                →mbsinit(&v5);
                                if(v8) {
                                    break;
                                }
                            }
                            else {
                                v0 = 0;
                                while((unsigned int)(int*)((int)ptr0 + (int)ptr2) < (unsigned int)param3) {
                                    char* ptr15 = (char*)((int)(int*)((int)ptr0 + (int)ptr2) + param2);
                                    if(!*ptr15) {
                                        break alab2;
                                    }
                                    else {
                                        ptr0 = (int*)((char*)ptr0 + 1);
                                    }
                                }
                            }
                        }
                    }
                    goto loc_804A873;
                }
            }
            if(v11) {
                if(result < param1) {
                    *(char*)(result + (int)param0) = 92;
                }
                ++result;
                if(result < param1) {
                    *(char*)(result + (int)param0) = 48;
                }
                ++result;
                if(result < param1) {
                    *(char*)(result + (int)param0) = 48;
                }
                ++result;
                v17 = 48;
            }
        loc_804A960:
            if(!(v11 ^ 0x1)) {
                int v29 = (unsigned int)(v17 >>> 5);
                int v30 = param5;
                int v31 = 1 << ((unsigned int)v17 & 0x1f);
                if((int*)((int)*(unsigned int*)(v29 * 4 + v30 + 4) & v31)) {
                loc_804A98F:
                    if(result < param1) {
                        *(char*)(result + (int)param0) = 92;
                    }
                    ++result;
                }
            }
        loc_804A9A7:
            if(result < param1) {
                *(char*)(result + (int)param0) = v17;
            }
            ++result;
            ++ptr2;
        }
        else if(!ptr2 && param4 == 1) {
            break;
        }
        else {
            if(v9) {
                while(*(char*)v9) {
                    if(result < param1) {
                        *(char*)(result + (int)param0) = *(char*)v9;
                    }
                    ++result;
                    ++v9;
                }
            }
            if(result < param1) {
                *(char*)(result + (int)param0) = 0;
            }
            return result;
        }
    }
    return (unsigned int)quotearg_buffer_restyled((int)param0, (int)param1, param2, param3, 2, param5);
}

int quotearg_char(int param0, int param1) {
    unsigned char v0 = *(int*)&default_quoting_options;
    unsigned int v1 = gvar_8052144;
    unsigned int v2 = gvar_8052148;
    unsigned int v3 = gvar_805214C;
    unsigned int v4 = gvar_8052150;
    unsigned int v5 = gvar_8052154;
    unsigned int v6 = gvar_8052158;
    unsigned int v7 = gvar_805215C;
    unsigned int v8 = gvar_8052160;
    set_char_quoting(&v0, (int)(unsigned char)param1, 1);
    return quotearg_n_options(0, param0, -1, (int*)&v0);
}

int quotearg_colon(int param0) {
    return quotearg_char(param0, 58);
}

unsigned int quotearg_free() {
    int v0 = slotvec;
    for(unsigned int i = 1; i < nslots; ++i) {
        →free(*(int*)(i * 8 + v0 + 4));
    }
    unsigned int result = *(unsigned int*)(v0 + 4);
    if(result != &slot0) {
        →free(*(int*)(v0 + 4));
        slotvec0 = 0x805218000000100L;
    }
    if(v0 != &slotvec0) {
        →free(v0);
        slotvec = &slotvec0;
    }
    nslots = 1;
    return result;
}

int quotearg_n(unsigned int param0, int param1) {
    return quotearg_n_options(param0, param1, -1, (int*)&default_quoting_options);
}

int quotearg_n_options(unsigned int param0, int param1, int param2, int* param3) {
    int* ptr0;
    int v0;
    int v1 = v0;
    →__errno_location();
    int v2 = *ptr0;
    unsigned int v3 = param0;
    void* ptr1 = slotvec;
    if(param0 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(nslots <= v3) {
        unsigned int v4 = v3 + 1;
        unsigned char v5 = ptr1 != &slotvec0 ? 0: 1;
        if(v4 > 0x1fffffff) {
            /*NO_RETURN*/ xalloc_die();
        }
        size_t __size = (size_t)(v4 * 8);
        void* __ptr = !v5 ? ptr1: NULL;
        ptr1 = xrealloc(__ptr, __size);
        slotvec = ptr1;
        if(v5) {
            void* ptr2 = ptr1;
            int v6 = *(int*)((char*)&slotvec0 + 4);
            *(int*)ptr2 = *(int*)&slotvec0;
            *(int*)((int)ptr2 + 4) = v6;
        }
        →memset(nslots * 8 + (int)ptr1, 0, (int)((v4 - nslots) * 8));
        nslots = v4;
    }
    int v7 = *(int*)(param0 * 8 + (int)ptr1);
    int result = *((int*)(param0 * 8 + (int)ptr1) + 1);
    int v8 = quotearg_buffer(result, v7, param1, param2, param3);
    if((unsigned int)v8 >= (unsigned int)v7) {
        v7 = v8 + 1;
        *(int*)(param0 * 8 + (int)ptr1) = v8 + 1;
        if(result != &slot0) {
            →free(result);
        }
        result = (int)xcharalloc((size_t)v7);
        *((int*)(param0 * 8 + (int)ptr1) + 1) = result;
        quotearg_buffer(result, v7, param1, param2, param3);
    }
    →__errno_location();
    *ptr0 = v2;
    return result;
}

int quotearg_n_style(unsigned int param0, int param1, int param2) {
    char v0;
    quoting_options_from_style(&v0);
    return quotearg_n_options(param0, param2, -1, &v0);
}

int quotearg_n_style_mem(unsigned int param0, int param1, int param2, int param3) {
    char v0;
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
    int v9;
    int v10 = v8;
    int* result = param0;
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
    int result;
    if(!(unsigned int)(param2 & 0x7fff)) {
        result = param1 >>> 31;
    }
    else if((unsigned int)(param2 & 0x7fff) == 0x7fff) {
        result = (param1 ^ 0x80000000) | param0 ? 1: 0;
    }
    else {
        result = (param1 >>> 31) ^ 0x1;
    }
    return result;
}

int rpl_vfprintf(int* param0, int param1, int param2) {
    int result;
    char v0;
    int v1;
    int* ptr0 = param0;
    int v2 = param1;
    int v3 = param2;
    int v4 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v5 = 2000;
    int v6 = vasnprintf((int)&v0, (int)&v5, v2, v3);
    int v7 = v5;
    if(!v6) {
        fseterr(ptr0);
        result = -1;
    }
    else {
        →fwrite(v6, 1, v7, (int)ptr0);
        if((unsigned int)v1 < (unsigned int)v7) {
            if(&v0 != v6) {
                →__errno_location();
                int v8 = *(int*)v1;
                →free(v6);
                →__errno_location();
                *(int*)v1 = v8;
            }
            result = -1;
        }
        else if(v7 < 0) {
            →__errno_location();
            *(int*)v1 = 75;
            fseterr(ptr0);
            result = -1;
        }
        else {
            result = v7;
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v4)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int* safe_read(int param0, int param1, int param2) {
    unsigned int* result;
    while(1) {
        →read(param0, param1, param2);
        unsigned int* ptr0 = result;
        if((int)result >= 0) {
            return result;
        }
        →__errno_location();
        if(*result != 4) {
            →__errno_location();
            if(*result != 22 || (unsigned int)param2 <= 0x7fffe000) {
                return result;
            }
            param2 = 0x7fffe000;
        }
    }
    return result;
}

unsigned int* safe_write(int param0, int param1, int param2) {
    unsigned int* result;
    while(1) {
        →write(param0, param1, param2);
        unsigned int* ptr0 = result;
        if((int)result >= 0) {
            return result;
        }
        →__errno_location();
        if(*result != 4) {
            →__errno_location();
            if(*result != 22 || (unsigned int)param2 <= 0x7fffe000) {
                return result;
            }
            param2 = 0x7fffe000;
        }
    }
    return result;
}

int set_char_quoting(unsigned int param0, int param1, int param2) {
    char v0 = (unsigned char)param1;
    char v1 = (unsigned char)param1;
    unsigned int v2 = param0 ? param0: &default_quoting_options;
    int* ptr0 = (int*)((unsigned int)((unsigned char)param1 >>> 5) * 4 + (param0 ? param0: &default_quoting_options) + 4);
    int v3 = (unsigned int)(unsigned char)param1 & 0x1f;
    int result = (*ptr0 >>> ((unsigned int)(unsigned char)param1 & 0x1f)) & 0x1;
    *ptr0 = (((param2 & 0x1) ^ result) << ((unsigned int)(unsigned char)param1 & 0x1f)) ^ *ptr0;
    return result;
}

int set_quoting_style(int* param0, int param1) {
    int result = param1;
    *(param0 ? param0: (int*)&default_quoting_options) = param1;
    return result;
}

int simple_cat(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int* ptr0 = safe_read(input_desc, param0, param1);
    while(ptr0 != -1) {
        if(!ptr0) {
            v0 = 1;
            return (unsigned int)v0;
        }
        unsigned int* ptr1 = ptr0;
        int* ptr2 = full_write(1, param0, (int)ptr1);
        if(ptr2 != ptr1) {
            →gettext("write error");
            →__errno_location();
            →error(1, *(int*)v1, v1);
        }
        ptr0 = safe_read(input_desc, param0, param1);
    }
    →__errno_location();
    →error(0, *(int*)v1, &gvar_8050132);
    v0 = 0;
    return (unsigned int)v0;
}

int sub_8048AD2() {
    return gvar_8051FFC();
}

int usage(int param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int* ptr0 = &v4;
    int v6 = v5;
    char v7 = param0 ? 0: 1;
    char v8 = param0 < 0;
    char v9 = __parity__((unsigned char)param0);
    char v10 = (unsigned int)param0 < 0;
    char v11 = 0;
    char v12 = 0;
    if(!v7) {
        v1 = program_name;
        →gettext("Try `%s --help\' for more information.\n");
        int v13 = stderr;
        v0 = v1;
        →fprintf(v13, v3);
    }
    else {
        unsigned int v14 = program_name;
        →gettext("Usage: %s [OPTION] [FILE]...\n");
        →printf(v3);
        int v15 = stdout;
        →gettext("Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n");
        →fputs_unlocked(v3, v15);
        int v16 = stdout;
        →gettext("  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n");
        →fputs_unlocked(v3, v16);
        int v17 = stdout;
        →gettext("      --help     display this help and exit\n");
        →fputs_unlocked(v3, v17);
        int v18 = stdout;
        →gettext("      --version  output version information and exit\n");
        →fputs_unlocked(v3, v18);
        int v19 = stdout;
        →gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
        →fputs_unlocked(v3, v19);
        v1 = program_name;
        unsigned int v20 = program_name;
        →gettext("\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n");
        v0 = v1;
        →printf(v3);
        int v21 = emit_bug_reporting_address();
    }
    int __status = param0;
    int* ptr1 = &v2;
    /*NO_RETURN*/ →exit(__status);
}

void vasnprintf() {
    // Decompilation error
}

int version_etc(int param0, int param1, int param2, int param3) {
    char v0;
    return version_etc_va(param0, param1, param2, param3, &v0);
}

int version_etc_va(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = param4;
    unsigned int v4 = 0;
    while(1) {
        int v5 = v3;
        v3 = v5 + 4;
        if(!*(int*)v5) {
            break;
        }
        else {
            ++v4;
        }
    }
    if(param1) {
        →fprintf(param0, "%s (%s) %s\n");
    }
    else {
        →fprintf(param0, "%s %s\n");
    }
    →gettext(&gvar_8050327);
    →fprintf(param0, &version_etc_copyright);
    →gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
    →fputs_unlocked(v0, param0);
    switch(v4) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            →gettext("Written by %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 2: {
            →gettext("Written by %s and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 3: {
            →gettext("Written by %s, %s, and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 4: {
            →gettext("Written by %s, %s, %s,\nand %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 5: {
            →gettext("Written by %s, %s, %s,\n%s, and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 6: {
            →gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 7: {
            →gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 8: {
            →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        case 9: {
            →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
        default: {
            →gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
            return rpl_vfprintf((int*)param0, v0, param4);
        }
    }
}

int write_pending(int param0, int* param1) {
    int v0;
    int v1;
    int v2 = v1;
    int result = (int)*param1 - param0;
    int v3 = (int)*param1 - param0;
    if(result) {
        int* ptr0 = full_write(1, param0, result);
        if(result != ptr0) {
            →gettext("write error");
            →__errno_location();
            →error(1, *(int*)v0, v0);
        }
        result = param0;
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
        v0 = 64 / param2 ? 64 / param2: 64 / param2 + 1;
    }
    *param1 = v0;
    return xrealloc(__ptr, (size_t)(v0 * param2));
}

void* x2realloc(void* __ptr, unsigned int* param1) {
    return x2nrealloc(__ptr, param1, 1);
}

int xalloc_die() {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int v3;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v4 = &v1 == 28;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v1 - 28);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 24;
    char v9 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    →gettext("memory exhausted");
    int v10 = exit_failure;
    int v11 = v3;
    →error(v10, 0, &gvar_8050935);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →abort();
}

void* xcalloc(size_t __nmemb, size_t __size) {
    void* result;
    →calloc((int)__nmemb, (int)__size);
    if(!result) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

void* xcharalloc(size_t __size) {
    return xmalloc(__size);
}

void* xmalloc(size_t __size) {
    void* result;
    →malloc((int)__size);
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

int xmemdup(int param0, size_t __size) {
    int result;
    void* ptr0 = xmalloc(__size);
    →memcpy((int)ptr0, param0, (int)__size);
    return result;
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
    void* result;
    →realloc((int)__ptr, (int)__size);
    if(!result && __size) {
        /*NO_RETURN*/ xalloc_die();
    }
    return result;
}

char* xstrdup(char* __s) {
    int v0;
    →strlen((int)__s);
    return (char*)xmemdup((int)__s, (size_t)(v0 + 1));
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
    int result;
    void* ptr0 = xmalloc(__size);
    →memset((int)ptr0, 0, (int)__size);
    return result;
}
