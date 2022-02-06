
int start(int param0, int param1) {
    int v0;
    char v1;
    void* ptr0;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr1 = &v1;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v2;
    int* ptr2 = &v15;
    int* ptr3 = &v15;
    int v16 = param1;
    int v17 = &sub_8049E4C;
    int v18 = &sub_8049E04;
    int* ptr4 = &v1;
    int v19 = &sub_8048B10;
    int* ptr5 = &ptr0;
    →__libc_start_main();
    hlt();
}

int sub_8048796() {
    return gvar_804B734();
}

void* sub_80489A4() {
    void* result = __gmon_start__;
    if(result) {
        result = (void*)result();
    }
    return result;
}

int* sub_80489C8() {
    int* result;
    return result;
}

unsigned int sub_8048A04() {
    return 0;
}

int sub_8048A30(int param0) {
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
    unsigned int v13 = gvar_804B928;
    unsigned int v14 = gvar_804B928;
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
    int v21 = &gvar_804A006;
    int v22 = 5;
    →dcgettext(0, &gvar_804A006, 5);
    int v23 = "bug-coreutils@gnu.org";
    unsigned int v24 = "bug-coreutils@gnu.org";
    →printf(v2);
    int __status = param0;
    int* ptr2 = &v1;
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048B10(unsigned int param0, unsigned int* param1) {
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
    int* ptr3 = &v5;
    int* ptr4 = &v5;
    char v8 = &v2 == 44;
    char v9 = (int)&v7 < 0;
    char v10 = __parity__((unsigned char)&v2 - 44);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x28) ^ (int)&v7) >>> 4) & 0x1);
    char v12 = (unsigned int)&v5 < 40;
    char v13 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v7) & (int)(int*)((int)&v5 ^ 0x28)) < 0;
    int v14 = v6;
    char v15 = &v2 == 48;
    char v16 = (int)&v3 < 0;
    char v17 = __parity__((unsigned char)&v2 - 48);
    char v18 = 0;
    char v19 = 0;
    unsigned int* ptr5 = param1;
    unsigned int v20 = *ptr5;
    gvar_804B928 = *ptr5;
    int v21 = &gvar_804A01C;
    →setlocale(6, &gvar_804A01C);
    int v22 = "/usr/share/locale";
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    int v23 = sub_8049E90(&gvar_8048C20);
    char v24 = param0 == 2;
    char v25 = (int)param0 < 2;
    char v26 = __parity__((unsigned char)param0 - 2);
    char v27 = param0 < 2;
    char v28 = (((param0 - 2) ^ param0) & (param0 ^ 0x2)) < 0;
    if(!v24) {
    loc_8048B7B:
        /*NO_RETURN*/ →exit(0);
    }
    →getenv("POSIXLY_CORRECT");
    if(!v4) {
        char v29 = 0;
        unsigned char* ptr6 = *(ptr5 + 1);
        unsigned char* ptr7 = "--help";
        unsigned char* ptr8 = ptr6;
        unsigned char* ptr9 = ptr6;
        int v30 = 7;
        int v31 = 7;
        do {
            v1 = *ptr9 == *ptr7;
            char v32 = *ptr9 < *ptr7;
            char v33 = __parity__(*ptr9 - *ptr7);
            char v34 = *ptr9 < *ptr7;
            char v35 = (((*ptr9 - *ptr7) ^ *ptr9) & (*ptr9 ^ *ptr7)) < 0;
            char v36 = (((*ptr9 - *ptr7) ^ (*ptr9 ^ *ptr7)) >>> 4) & 0x1;
            ++ptr9;
            ++ptr7;
            --v31;
        }
        while(v1 && v31 == 0);
        if(!v1) {
            char v37 = 0;
            ptr1 = ptr8;
            int v38 = 10;
            ptr0 = "--version";
            v0 = 10;
        }
        else {
            int* ptr10 = &ptr2;
            int v39 = /*NO_RETURN*/ sub_8048A30(0);
        }
        do {
            v1 = *ptr1 == *ptr0;
            char v40 = *ptr1 < *ptr0;
            char v41 = __parity__(*ptr1 - *ptr0);
            char v42 = *ptr1 < *ptr0;
            char v43 = (((*ptr1 - *ptr0) ^ *ptr1) & (*ptr1 ^ *ptr0)) < 0;
            ++ptr1;
            ++ptr0;
            --v0;
        }
        while(v1 && v0 == 0);
        if(v1) {
            int v44 = 0;
            char v45 = 1;
            char v46 = 0;
            char v47 = 1;
            char v48 = 0;
            char v49 = 0;
            int v50 = "Jim Meyering";
            int v51 = "5.2.1";
            int v52 = 0;
            ptr5 = (unsigned int*)&gvar_804A079;
            int v53 = "true";
            int v54 = "Jim Meyering";
            int v55 = stdout;
            int v56 = sub_8049AC0(v55, "true", &gvar_804A079, "5.2.1");
        }
    }
    goto loc_8048B7B;
}

unsigned int sub_8048C10(unsigned int param0) {
    gvar_804B7E8 = param0;
    return param0;
}

int sub_8048CF0(int* param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    →__errno_location();
    int v2 = *ptr0;
    int result = sub_8049BA0(36);
    int* ptr1 = param0;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804B900;
    }
    *(int*)result = *ptr1;
    *(int*)(result + 4) = *(ptr1 + 1);
    *(int*)(result + 8) = *(ptr1 + 2);
    *(int*)(result + 12) = *(ptr1 + 3);
    *(int*)(result + 16) = *(ptr1 + 4);
    *(int*)(result + 20) = *(ptr1 + 5);
    *(int*)(result + 24) = *(ptr1 + 6);
    *(int*)(result + 28) = *(ptr1 + 7);
    *(int*)(result + 32) = *(ptr1 + 8);
    *ptr0 = v2;
    return result;
}

int sub_8048D70(int* param0) {
    int* ptr0 = param0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_804B900;
    }
    return *ptr0;
}

int sub_8048D90(int* param0, int param1) {
    int* ptr0 = param0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_804B900;
    }
    int result = param1;
    *ptr0 = param1;
    return result;
}

int sub_8048DB0(int param0, char param1, int param2) {
    int v0;
    int v1 = v0;
    int* ptr0 = (int*)((unsigned int)(param1 >>> 5) * 4 + param0 + 4);
    if(!param0) {
        ptr0 = (int*)((unsigned int)(param1 >>> 5) * 4 + &gvar_804B904);
    }
    int v2 = *ptr0;
    int result = (v2 >> ((unsigned int)param1 & 0x1f)) & 0x1;
    *ptr0 = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v2;
    return result;
}

unsigned int sub_8048E10(int param0, unsigned int param1) {
    →dcgettext(0, param0, 5);
    return &gvar_804A0CB;
}

int sub_8048E50(int param0, int param1, int param2, int param3, unsigned int param4, int param5) {
    char v0;
    int v1;
    int* ptr0;
    int v2;
    int v2;
    char v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7;
    unsigned int v8;
    int v9;
    int* ptr1;
    int v10 = v6;
    int result = 0;
    unsigned int v11 = 0;
    unsigned int v12 = 0;
    unsigned int v13 = 0;
    →__ctype_get_mb_cur_max();
    int* ptr2 = (int*)(v5 - 1);
    char v14 = ptr2 ? 0: 1;
    ptr2 = (unsigned int)(v14 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
    char v15 = param4 == 6;
    char v16 = param4 < 6;
    int v17 = (unsigned int)(unsigned char)ptr2;
    if((v16 || v15)) {
        jump gvar_804A11C[param4];
        if(v71) {
            *(char*)param0 = 34;
        }
        result = 1;
        v13 = 1;
        v11 = &gvar_804A0CB;
        v12 = 1;
        goto loc_8048EBE;
        if((unsigned int)v76 > 0) {
            *(char*)param0 = 39;
        }
        result = 1;
        v11 = &gvar_804A0CD;
        v12 = 1;
        goto loc_8048EBE;
        if(*(char*)v78) {
            do {
                v4 = param1;
                if((unsigned int)v4 > (unsigned int)result) {
                    unsigned int v18 = v11;
                    int v19 = param0;
                    v4 = result;
                    *(char*)(v19 + v4) = *(char*)v18;
                }
                ++v11;
                ++result;
                v8 = v11;
            }
            while(*(char*)v8);
        }
        v13 = 1;
        v11 = (unsigned int)v74;
        →strlen(v74);
        v12 = v5;
    }
loc_8048EBE:
    int v20 = 0;
    int v21 = v4;
    unsigned int v22 = v78;
    while(1) {
        if(param3 != -1) {
            v76 = param3;
            v3 = v76 == v20;
        }
        else {
            v21 = param2;
            int v23 = v20;
            v3 = *(char*)(v23 + v21) ? 0: 1;
        }
        if(v3) {
            break;
        }
        else {
            if(v13 && v12) {
                int* ptr3 = (int*)(v12 + v20);
                char v24 = ptr3 == param3;
                if(((unsigned int)ptr3 < (unsigned int)param3 || v24)) {
                    unsigned int v25 = v12;
                    int v26 = param2;
                    int v27 = v20;
                    v22 = v11;
                    unsigned int v28 = v25;
                    v21 = v27 + v26;
                    char v29 = 1;
                    while(v28 != 0) {
                        v29 = *(char*)v21 == *(char*)v22;
                        ++v21;
                        ++v22;
                        --v28;
                        if(!v29) {
                            break;
                        }
                    }
                    if(v29) {
                        int v30 = param1;
                        char v31 = (unsigned int)v30 > (unsigned int)result;
                        if(v31) {
                            *(char*)(result + param0) = 92;
                        }
                        ++result;
                        v21 = v30;
                    }
                }
            }
            int v32 = param2;
            int v33 = v20;
            char v34 = *(char*)(v32 + v33);
            unsigned int v35 = (unsigned int)*(char*)(v32 + v33);
            char v36 = v35 == 126;
            char v37 = v35 < 126;
            char v38 = v34;
            if((v37 || v36)) {
                jump gvar_804A138[v35];
                if(v79) {
                    goto loc_8049000;
                }
                else {
                    if((unsigned int)result < (unsigned int)param1) {
                        *(char*)(result + param0) = 92;
                    }
                    ++result;
                    if((unsigned int)result < (unsigned int)param1) {
                        v72 = param0;
                        *(char*)(v72 + result) = 48;
                    }
                    ++result;
                    if((unsigned int)result < (unsigned int)param1) {
                        *(char*)(result + param0) = 48;
                    }
                    ++result;
                    v38 = 48;
                    goto loc_8048FB0;
                    if(v20) {
                        goto loc_8048FB0;
                    }
                    else if(param4 != 1) {
                        goto loc_8048FB0;
                    }
                    else {
                        return sub_8048E50(param0, param1, param2, param3, 2, param5);
                        if(param4 == 2) {
                            if((unsigned int)result < (unsigned int)param1) {
                                *(char*)(result + param0) = 39;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)param1) {
                                *(char*)(result + param0) = 92;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)param1) {
                                *(char*)(result + param0) = 39;
                                ++result;
                                goto loc_8048FB0;
                                if(param4 == 1) {
                                    return sub_8048E50(param0, param1, param2, param3, 2, param5);
                                }
                                else if(param4 != 3) {
                                    goto loc_8048FB0;
                                }
                                else {
                                    int v39 = v20 + 2;
                                    char v40 = (unsigned int)v39 < (unsigned int)param3;
                                    if(!v40) {
                                        goto loc_8048FB0;
                                    }
                                    else {
                                        v21 = param2;
                                        int v41 = v20;
                                        if(*(char*)(v41 + v21 + 1) != 63) {
                                            goto loc_8048FB0;
                                        }
                                        else {
                                            char v42 = *(char*)(v41 + v21 + 2);
                                            unsigned int v43 = (unsigned int)(((unsigned int)*(char*)(v41 + v21 + 2) | ((unsigned int)(v42 < 0 ? 0xffffff: 0) << 8)) - 33);
                                            char v44 = v43 == 29;
                                            if(v43 >= 29 && !v44) {
                                                goto loc_8048FB0;
                                            }
                                            else if(v43 == 0 || (v43 >= 6 && v43 <= 8) || v43 == 12 || v43 == 14) {
                                                goto loc_8049139;
                                            }
                                            else if((v43 >= 1 && v43 <= 5) || (v43 >= 9 && v43 <= 11) || v43 == 13 || v43 == 15) {
                                                goto loc_8048FB0;
                                            }
                                            else {
                                                throw 0;
                                            loc_8049139:
                                                v20 = v39;
                                                char v45 = (unsigned int)result < (unsigned int)param1;
                                                v38 = v42;
                                                if(v45) {
                                                    *(char*)(result + param0) = 63;
                                                }
                                                ++result;
                                                if((unsigned int)result < (unsigned int)param1) {
                                                    *(char*)(result + param0) = 92;
                                                }
                                                ++result;
                                                if((unsigned int)result < (unsigned int)param1) {
                                                    *(char*)(result + param0) = 63;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            ++result;
                            goto loc_8048FB0;
                            if(param4 != 1) {
                                v22 = v13;
                                int v46 = v20;
                                char v47 = v22 ? 0: 1;
                                v76 = v46 + 1;
                                if(v47) {
                                    goto loc_8049000;
                                }
                                else {
                                    v38 = (unsigned char)v35;
                                    goto loc_8048FE1;
                                }
                            }
                        }
                        else if(param4 != 1) {
                            goto loc_8048FB0;
                        }
                        return sub_8048E50(param0, param1, param2, param3, 2, param5);
                    }
                }
            }
            else {
                if(v17) {
                    ptr0 = (int*)0x1;
                    →__ctype_b_loc();
                    int v48 = (unsigned int)v38;
                    int v49 = *(int*)v5;
                    v1 = (unsigned int)*(short*)(v48 * 2 + v49) & 0x4000;
                }
                else {
                    char v50 = param3 == -1;
                    int v51 = 0;
                    int v52 = 0;
                    ptr0 = NULL;
                    v1 = 1;
                    if(v50) {
                        →strlen(param2);
                        param3 = (int)v5;
                    }
                loc_80492B3:
                    do {
                        int* ptr4 = ptr0;
                        int v53 = param3;
                        int v54 = param2;
                        int* ptr5 = (int*)((int)ptr4 + v20);
                        int v55 = v53 - (int)ptr5;
                        v21 = (int)ptr5 + v54;
                        →mbrtowc(&v7, v21, v55, &v51);
                        char v56 = v5 ? 0: 1;
                        v22 = v5;
                        if(!v56) {
                            if(v5 == -1) {
                                v1 = 0;
                                break;
                            }
                            else if(v5 != -2) {
                                →iswprint(v7);
                                char v57 = v5 ? 0: 1;
                                ptr0 = (int*)(v22 + (int)ptr0);
                                v1 &= (unsigned int)v57 - 1;
                                →mbsinit(&v51);
                                if(!v5) {
                                    goto loc_80492B3;
                                }
                                else {
                                    break;
                                }
                            }
                            else {
                                char v58 = (unsigned int)ptr5 < (unsigned int)param3;
                                v1 = 0;
                                if(!v58 || !*(char*)v21) {
                                    break;
                                }
                            }
                            do {
                                ptr0 = (int*)((char*)ptr0 + 1);
                                ptr1 = (int*)((int)ptr0 + v20);
                                if((unsigned int)ptr1 >= (unsigned int)param3) {
                                    break;
                                }
                                else {
                                    v9 = param2;
                                }
                            }
                            while(*(char*)((int)ptr1 + v9));
                        }
                        break;
                    }
                    while(1);
                    if((unsigned int)ptr0 > 1) {
                        goto loc_80491D0;
                    }
                }
                unsigned int v59 = v13;
                int v60 = v20;
                v0 = v59 ? 0: 1;
                v76 = v60 + 1;
            }
            if(!v0) {
                if(!v1) {
                loc_80491D0:
                    int* ptr6 = (int*)((int)ptr0 + v20);
                    while(1) {
                        v22 = v13;
                        if(v22 && !v1) {
                            int v61 = param1;
                            char v62 = (unsigned int)v61 > (unsigned int)result;
                            if(v62) {
                                *(char*)(result + param0) = 92;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)param1) {
                                v61 = param0;
                                *(char*)(v61 + result) = (v38 >>> 6) + 48;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)param1) {
                                v61 = param0;
                                *(char*)(v61 + result) = ((v38 >>> 3) & 0x7) + 48;
                            }
                            ++result;
                            v38 = (v38 & 0x7) + 48;
                        }
                        v76 = v20 + 1;
                        if((unsigned int)ptr6 <= (unsigned int)v76) {
                            goto loc_8049000;
                        }
                        else {
                            if((unsigned int)result < (unsigned int)param1) {
                                *(char*)(result + param0) = v38;
                            }
                            ++result;
                            int v63 = param2;
                            v20 = v76;
                            v38 = *(char*)(v63 + v76);
                        }
                    }
                }
            loc_8048FB0:
                unsigned int v64 = v13;
                int v65 = v20;
                char v66 = v64 ? 0: 1;
                v76 = v65 + 1;
                if(!v66) {
                    int v67 = param5;
                    int v68 = (unsigned int)v38;
                    int v69 = (unsigned int)(v38 >>> 5);
                    if(((unsigned char)(*(int*)(v69 * 4 + v67 + 4) >> (v68 & 0x1f)) & 0x1)) {
                    loc_8048FE1:
                        if((unsigned int)result < (unsigned int)param1) {
                            *(char*)(result + param0) = 92;
                        }
                        ++result;
                        v76 = v20 + 1;
                    }
                }
            }
        loc_8049000:
            v21 = param1;
            if((unsigned int)v21 > (unsigned int)result) {
                *(char*)(result + param0) = v38;
            }
            ++result;
            v20 = v76;
        }
    }
    if(v11) {
        char v70 = *(char*)v11;
        if(*(char*)v11) {
            do {
                if((unsigned int)result < (unsigned int)param1) {
                    *(char*)(result + param0) = v70;
                }
                ++v11;
                ++result;
                v70 = *(char*)v11;
            }
            while(*(char*)v11);
        }
    }
    if((unsigned int)result < (unsigned int)param1) {
        *(char*)(result + param0) = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049490(int param0, int param1, int param2, int param3, int* param4) {
    int* ptr0;
    int v0;
    int* ptr1 = param4;
    int v1 = v0;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804B900;
    }
    →__errno_location();
    int v2 = *ptr0;
    int result = sub_8048E50(param0, param1, param2, param3, *ptr1, (int)ptr1);
    *ptr0 = v2;
    return result;
}

int sub_80494F0(unsigned int param0, int param1, int param2, int* param3) {
    int* ptr0;
    void* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int v2;
    int* ptr3 = &ptr2;
    int v3 = v1;
    int* ptr4 = &v3;
    char v4 = &ptr0 == 44;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x1c) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v3 < 28;
    char v9 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v3 ^ 0x1c)) < 0;
    →__errno_location();
    int v10 = *(int*)v0;
    int v11 = *(int*)v0;
    unsigned int v12 = param0;
    char v13 = v12 ? 0: 1;
    char v14 = v12 >= 0x80000000;
    char v15 = __parity__((unsigned char)v12);
    char v16 = 0;
    char v17 = 0;
    if(v14) {
        /*NO_RETURN*/ →abort();
    }
    unsigned int v18 = param0;
    char v19 = gvar_804B7C0 == v18;
    char v20 = (int)gvar_804B7C0 < (int)v18;
    char v21 = __parity__((unsigned char)gvar_804B7C0 - (unsigned char)v18);
    char v22 = gvar_804B7C0 < v18;
    char v23 = (int)(((gvar_804B7C0 - v18) ^ gvar_804B7C0) & (gvar_804B7C0 ^ v18)) < 0;
    char v24 = (((gvar_804B7C0 - v18) ^ (gvar_804B7C0 ^ v18)) >>> 4) & 0x1;
    if((v22 || v19)) {
        unsigned int v25 = v18;
        unsigned int v26 = v25 + 1;
        v13 = v26 == 0x1fffffff;
        v14 = (int)v26 < 0x1fffffff;
        v15 = __parity__((unsigned char)v26 - 0xff);
        v17 = v26 < 0x1fffffff;
        v16 = (((v26 - 0x1fffffff) ^ v26) & (v26 ^ 0x1fffffff)) < 0;
        v7 = (((v26 - 0x1fffffff) ^ (v26 ^ 0x1fffffff)) >>> 4) & 0x1;
        if(!v17 && !v13) {
            int* ptr5 = &ptr1;
            /*NO_RETURN*/ sub_8049B00();
        }
        int v27 = gvar_804B7CC;
        if(v27 == &gvar_804B7C4) {
            int v28 = sub_8049BA0(8);
            gvar_804B7CC = v28;
            v27 = v28;
            unsigned int v29 = gvar_804B7C4;
            *(unsigned int*)(v27 + 4) = gvar_804B7C8;
            *(unsigned int*)v27 = v29;
        }
        int v30 = sub_8049C20(v27, (int)(v26 * 8));
        gvar_804B7CC = v30;
        unsigned int v31 = gvar_804B7C0;
        →memset(v31 * 8 + v30, 0, (int)((v26 - v31) * 8));
        gvar_804B7C0 = v26;
    }
    unsigned int v32 = gvar_804B7CC;
    int v33 = *(int*)(param0 * 8 + v32);
    int result = *(int*)(param0 * 8 + v32 + 4);
    int v34 = sub_8049490(result, v33, param1, param2, param3);
    if((unsigned int)v34 >= (unsigned int)v33) {
        unsigned int v35 = gvar_804B7CC;
        *(int*)(param0 * 8 + v35) = v34 + 1;
        if(result != 134526976) {
            sub_8049DF0(result);
            v35 = gvar_804B7CC;
        }
        result = sub_8049BA0(v34 + 1);
        int* ptr6 = param3;
        int v36 = param2;
        *(int*)(param0 * 8 + v35 + 4) = result;
        sub_8049490(result, v34 + 1, param1, v36, ptr6);
    }
    →__errno_location();
    *(int*)v0 = v11;
    return result;
}

int sub_8049660(unsigned int param0, int param1) {
    return sub_80494F0(param0, param1, -1, (int*)&gvar_804B900);
}

int sub_8049690(int param0) {
    return sub_8049660(0, param0);
}

int* sub_80496B0(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9 = 8;
    int* ptr0 = &v0;
    int v10 = v8;
    int* result = param0;
    while(v9 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v9;
    }
    *result = v10;
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

int sub_8049720(unsigned int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2 = v1;
    sub_80496B0(&v0);
    return sub_80494F0(param0, param2, -1, &v0);
}

int sub_8049770(unsigned int param0, int param1, int param2, int param3) {
    char v0;
    int v1;
    int v2 = v1;
    sub_80496B0(&v0);
    return sub_80494F0(param0, param2, param3, &v0);
}

int sub_80497C0(int param0, int param1) {
    return sub_8049720(0, param0, param1);
}

int sub_80497F0(int param0, char param1) {
    char v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = gvar_804B900;
    unsigned int v4 = gvar_804B904;
    *(int*)&v0 = (int)param1;
    unsigned int v5 = v4;
    unsigned int v6 = gvar_804B908;
    unsigned int v7 = gvar_804B90C;
    unsigned int v8 = gvar_804B910;
    unsigned int v9 = gvar_804B914;
    unsigned int v10 = gvar_804B918;
    unsigned int v11 = gvar_804B91C;
    unsigned int v12 = gvar_804B920;
    sub_8048DB0(&v3, v0, 1);
    *(int*)&v0 = param0;
    return sub_80494F0(0, *(int*)&v0, -1, (int*)&v3);
}

int sub_80498B0(int param0, int param1, int param2, int param3, int param4) {
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
    }
    else {
        v3 = v10;
        →fprintf(v8, "%s %s\n");
    }
    switch(v7) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            v1 = 5;
            v0 = "Written by %s.\n";
            goto loc_8049940;
        }
        case 2: {
            v1 = 5;
            v2 = "Written by %s and %s.\n";
            break;
        }
        case 3: {
            v0 = "Written by %s, %s, and %s.\n";
            v1 = 5;
            goto loc_8049940;
        }
        case 4: {
            v1 = 5;
            v0 = "Written by %s, %s, %s,\nand %s.\n";
        loc_8049940:
            v2 = v0;
            break;
        }
        case 5: {
            v1 = 5;
            v0 = "Written by %s, %s, %s,\n%s, and %s.\n";
            goto loc_8049940;
        }
        case 6: {
            v1 = 5;
            v2 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
            break;
        }
        case 7: {
            v1 = 5;
            v2 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
            break;
        }
        case 8: {
            v1 = 5;
            v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
            goto loc_8049940;
        }
        case 9: {
            v1 = 5;
            v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
            goto loc_8049940;
        }
        default: {
            v1 = 5;
            v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
            goto loc_8049940;
        }
    }
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
    →fputs_unlocked(gvar_804B7D0, v8);
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

int sub_8049AC0(int param0, int param1, int param2, int param3) {
    char v0;
    return sub_80498B0(param0, param1, param2, param3, &v0);
}

void sub_8049B00() {
    unsigned int v0 = gvar_804B924;
    if(!v0) {
    loc_8049B28:
        →dcgettext(0, "memory exhausted", 5);
        →error(gvar_804B7BC, 0, &gvar_804A09C);
        /*NO_RETURN*/ →abort();
    }
    v0();
    goto loc_8049B28;
}

int sub_8049BA0(int param0) {
    int* ptr0;
    int* ptr1;
    int v0;
    void* ptr2;
    int result;
    int* ptr3 = &ptr0;
    int* ptr4 = &ptr0;
    char v1 = &ptr1 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr1 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v7 = param0;
    →malloc(v7);
    char v8 = result ? 0: 1;
    char v9 = result < 0;
    char v10 = __parity__((unsigned char)result);
    char v11 = 0;
    char v12 = 0;
    if(v8) {
        int* ptr5 = &ptr2;
        /*NO_RETURN*/ sub_8049B00();
    }
    return result;
}

int sub_8049C20(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    void* ptr2;
    int result;
    int* ptr3 = &ptr0;
    int* ptr4 = &ptr0;
    char v1 = &ptr1 == 12;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&ptr1 - 12);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v5 = (unsigned int)&ptr0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v7 = param0;
    int v8 = param1;
    →realloc(v7, v8);
    char v9 = result ? 0: 1;
    char v10 = result < 0;
    char v11 = __parity__((unsigned char)result);
    char v12 = 0;
    char v13 = 0;
    if(v9) {
        int* ptr5 = &ptr2;
        /*NO_RETURN*/ sub_8049B00();
    }
    return result;
}

int sub_8049C50(int param0, int param1, unsigned int param2) {
    void* ptr0;
    void* ptr1;
    int* ptr2;
    char v0;
    int v1;
    int* ptr3 = &ptr2;
    int* ptr4 = &ptr2;
    char v2 = &ptr0 == 28;
    char v3 = (int)&v0 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 28);
    char v5 = (unsigned int)&ptr2 < 24;
    char v6 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v0) & (int)(int*)((int)&ptr2 ^ 0x18)) < 0;
    int v7 = param0;
    int v8 = param1;
    char v9 = v7 ? 0: 1;
    char v10 = v7 < 0;
    char v11 = __parity__((unsigned char)v7);
    char v12 = 0;
    char v13 = 0;
    int v14 = v1;
    unsigned int v15 = *(unsigned int*)v8;
    unsigned int v16 = param2;
    if(!v9) {
        int v17 = 0;
        char v18 = 1;
        char v19 = 0;
        char v20 = 1;
        char v21 = 0;
        char v22 = 0;
        int v23 = 0x7fffffff;
        unsigned int v24 = 0x7fffffff % v16;
        unsigned int v25 = 0x7fffffff / v16;
        unsigned int v26 = v24;
        char v27 = v25 == v15;
        char v28 = (int)v25 < (int)v15;
        char v29 = __parity__((unsigned char)v25 - (unsigned char)v15);
        char v30 = v25 < v15;
        char v31 = (int)(((v25 - v15) ^ v25) & (v25 ^ v15)) < 0;
        char v32 = (((v25 - v15) ^ (v25 ^ v15)) >>> 4) & 0x1;
        if(v30) {
            int* ptr5 = &ptr1;
            /*NO_RETURN*/ sub_8049B00();
        }
        v15 *= 2;
    }
    else if(!v15) {
        v15 = 64 / v16;
        if(!(64 / v16)) {
            v15 = 1;
        }
    }
    *(unsigned int*)v8 = v15;
    return sub_8049C20(v7, (int)(v15 * v16));
}

int sub_8049D40(int param0) {
    int result = sub_8049BA0(param0);
    →memset(result, 0, param0);
    return result;
}

int sub_8049DC0(int param0, int param1) {
    int result;
    int v0 = sub_8049BA0(param1);
    →memcpy(v0, param0, param1);
    return result;
}

int sub_8049DF0(int param0) {
    int result;
    if(param0) {
        →free(param0);
        return result;
    }
    return 0;
}

int sub_8049E04() {
    return initializer_0();
}

int* sub_8049E4C(int param0, int param1) {
    return finalizer_0(0, param1);
}

int sub_8049E90(int param0) {
    int result;
    →__cxa_atexit();
    return result;
}

int sub_8049EC0(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param1;
    unsigned int v3 = gvar_804B648;
    unsigned int* ptr0 = (unsigned int*)&gvar_804B648;
    while(v3 != -1) {
        --ptr0;
        v3();
        v3 = *ptr0;
    }
    return param1;
}
