
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
    int v17 = &sub_804A05C;
    int v18 = &sub_804A008;
    int* ptr4 = &v1;
    int v19 = &sub_8048C4A;
    int* ptr5 = &ptr0;
    →__libc_start_main();
    hlt();
}

int sub_80488DA() {
    return gvar_804B954();
}

int sub_8048AE4(int param0, int param1) {
    void* ptr0 = __gmon_start__;
    if(ptr0) {
        ptr0();
    }
    return param1;
}

int* sub_8048B08() {
    int* result;
    if(!gvar_804BA00) {
        while(1) {
            result = gvar_804B9D4;
            int v0 = *result;
            if(!v0) {
                break;
            }
            else {
                gvar_804B9D4 = result + 1;
                v0{sub_804B838}();
            }
        }
        gvar_804BA00 = 1;
    }
    return result;
}

unsigned int sub_8048B3C() {
    return 0;
}

int sub_8048B68(int param0) {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr1 = &v2;
    int v5 = v1;
    int v6 = &loc_8048B72;
    int v7 = 134527308;
    int* ptr2 = &v5;
    char v8 = &v0 == 28;
    char v9 = (int)&v3 < 0;
    char v10 = __parity__((unsigned char)&v0 - 28);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v3) >>> 4) & 0x1);
    char v12 = (unsigned int)&v5 < 16;
    char v13 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v3) & (int)(int*)((int)&v5 ^ 0x10)) < 0;
    int v14 = "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n";
    →dcgettext(0, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    int v15 = &program_name;
    unsigned int v16 = program_name;
    unsigned int v17 = program_name;
    unsigned int v18 = v16;
    →printf(v4);
    int v19 = "      --help     display this help and exit\n";
    →dcgettext(0, "      --help     display this help and exit\n", 5);
    void* ptr3 = stdout;
    int v20 = *(int*)ptr3;
    →fputs_unlocked(v4, v20);
    int v21 = "      --version  output version information and exit\n";
    →dcgettext(0, "      --version  output version information and exit\n", 5);
    int v22 = *(int*)ptr3;
    →fputs_unlocked(v4, v22);
    int v23 = "\nReport bugs to <%s>.\n";
    →dcgettext(0, "\nReport bugs to <%s>.\n", 5);
    int v24 = "bug-coreutils@gnu.org";
    v18 = "bug-coreutils@gnu.org";
    →printf(v4);
    int __status = param0;
    int* ptr4 = &ptr0;
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048C4A(unsigned int param0, unsigned int* param1) {
    int v0;
    unsigned char* ptr0;
    unsigned char* ptr1;
    char v1;
    int v2;
    int v3;
    int v4;
    void* ptr2;
    int v5;
    int v6;
    char v7;
    int v8;
    int v9;
    int* ptr3 = &v4;
    int v10 = v8;
    int v11 = &loc_8048C55;
    int v12 = 134527308;
    int* ptr4 = &v10;
    char v13 = &v1 == 60;
    char v14 = (int)&v6 < 0;
    char v15 = __parity__((unsigned char)&v1 - 60);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x2c) ^ (int)&v6) >>> 4) & 0x1);
    char v17 = (unsigned int)&v10 < 44;
    char v18 = (int)(int*)((int)(int*)((int)&v10 ^ (int)&v6) & (int)(int*)((int)&v10 ^ 0x2c)) < 0;
    int v19 = "coreutils";
    unsigned int* ptr5 = param1;
    char v20 = &v1 == 64;
    char v21 = (int)&v2 < 0;
    char v22 = __parity__((unsigned char)&v1 - 64);
    char v23 = 0;
    char v24 = 0;
    unsigned int v25 = *ptr5;
    int v26 = &program_name;
    int* ptr6 = &v2;
    char v27 = &v1 == 80;
    char v28 = (int)&v3 < 0;
    char v29 = __parity__((unsigned char)&v1 - 80);
    char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x10) ^ (int)&v3) >>> 4) & 0x1);
    char v31 = (unsigned int)&v2 < 16;
    char v32 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v2 ^ 0x10)) < 0;
    program_name = v25;
    int v33 = 134521388;
    →setlocale(6, 134521388);
    int v34 = "/usr/share/locale";
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    int v35 = &close_stdout;
    int v36 = sub_804A0A0(&close_stdout);
    char v37 = param0 == 2;
    char v38 = (int)param0 < 2;
    char v39 = __parity__((unsigned char)param0 - 2);
    char v40 = param0 < 2;
    char v41 = (((param0 - 2) ^ param0) & (param0 ^ 0x2)) < 0;
    char v42 = (((param0 - 2) ^ (param0 ^ 0x2)) >>> 4) & 0x1;
    if(!v37) {
    loc_8048CC2:
        /*NO_RETURN*/ →exit(0);
    }
    int v43 = "POSIXLY_CORRECT";
    →getenv("POSIXLY_CORRECT");
    char v44 = v9 ? 0: 1;
    char v45 = v9 < 0;
    char v46 = __parity__(v7);
    char v47 = 0;
    char v48 = 0;
    if(v44) {
        unsigned int* ptr7 = param1;
        char v49 = 7;
        char v50 = 0;
        unsigned char* ptr8 = *(ptr7 + 1);
        unsigned char* ptr9 = "--help";
        unsigned char* ptr10 = ptr8;
        unsigned char* ptr11 = ptr8;
        int v51 = (unsigned int)7 | ((unsigned int)v5 << 8);
        while(v51 != 0) {
            v44 = *ptr11 == *ptr9;
            v45 = *ptr11 < *ptr9;
            v46 = __parity__(*ptr11 - *ptr9);
            v48 = *ptr11 < *ptr9;
            v47 = (((*ptr11 - *ptr9) ^ *ptr11) & (*ptr11 ^ *ptr9)) < 0;
            v42 = (((*ptr11 - *ptr9) ^ (*ptr11 ^ *ptr9)) >>> 4) & 0x1;
            ++ptr11;
            ++ptr9;
            --v51;
            if(!v44) {
                break;
            }
        }
        if(!v44) {
            int v52 = 10;
            char v53 = 0;
            ptr1 = "--version";
            ptr0 = ptr10;
            v0 = 10;
        }
        else {
            int* ptr12 = &ptr2;
            int v54 = /*NO_RETURN*/ sub_8048B68(0);
        }
        do {
            v44 = *ptr0 == *ptr1;
            char v55 = *ptr0 < *ptr1;
            char v56 = __parity__(*ptr0 - *ptr1);
            char v57 = *ptr0 < *ptr1;
            char v58 = (((*ptr0 - *ptr1) ^ *ptr0) & (*ptr0 ^ *ptr1)) < 0;
            v42 = (((*ptr0 - *ptr1) ^ (*ptr0 ^ *ptr1)) >>> 4) & 0x1;
            ++ptr0;
            ++ptr1;
            --v0;
        }
        while(v44 && v0 == 0);
        if(v44) {
            int v59 = "Jim Meyering";
            v6 = 0;
            v2 = "Jim Meyering";
            int v60 = "5.2.1";
            int v61 = "5.2.1";
            int v62 = "GNU coreutils";
            int v63 = "GNU coreutils";
            int v64 = "true";
            int v65 = "true";
            void* ptr13 = stdout;
            int v66 = *(int*)ptr13;
            int v67 = sub_8049CCD(v66, "true", "GNU coreutils", "5.2.1");
        }
    }
    goto loc_8048CC2;
}

void sub_8048D64() {
}

int sub_8048E70(int* param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    →__errno_location();
    int v2 = *ptr0;
    int result = sub_8049DC5(36);
    int* ptr1 = param0;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804BB20;
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

int sub_8048F36(int param0, char param1, int param2) {
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
        unsigned int v3 = *(unsigned int*)((unsigned int)(param1 >>> 5) * 4 + (int)&gvar_804BB24);
        result = (v3 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *(unsigned int*)((unsigned int)(param1 >>> 5) * 4 + (int)&gvar_804BB24) = (unsigned int)((((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v3);
    }
    return result;
}

int sub_8048FA3(int param0, int param1) {
    unsigned int v0;
    int v1;
    →dcgettext(0, v1, 5);
    return (v0 != 6 ? 0: 1) & ((unsigned int)1 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8)) ? 134522248: v1;
}

int sub_8048FF6(unsigned char* param0, int param1, unsigned int param2, int param3) {
    char v0;
    char v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int v6;
    int v5;
    int v6;
    int v5;
    int v6;
    int v7;
    int v8;
    int* ptr0;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int* ptr1;
    int v16 = v12;
    int v17 = v14;
    int v18 = v15;
    int result = 0;
    int v19 = 0;
    int v20 = 0;
    int v21 = 0;
    →__ctype_get_mb_cur_max();
    char v22 = v14 != 1 ? 0: 1;
    char v23 = param2 == 6;
    char v24 = param2 < 6;
    int v25 = (int)v22;
    if((v24 || v23)) {
        v15 = (int)param2;
        v11 = (int)gvar_804A2CC[v15] + 134527308;
        jump v11;
        if((unsigned int)v15 > 0) {
            v10 = v17;
            *(char*)v10 = 39;
        }
        v9 = 134522250;
        result = 1;
        v19 = 134522250;
        v20 = 1;
        goto loc_8049076;
        if((unsigned int)v10 > 0) {
            v9 = v17;
            *(char*)v9 = 34;
        }
        result = 1;
        v21 = 1;
        v19 = 134522248;
        v20 = 1;
        goto loc_8049076;
        while(!v78) {
            if((unsigned int)result < (unsigned int)v18) {
                int v26 = v19;
                v9 = v17;
                int v27 = result;
                *(char*)(v9 + v27) = *(char*)v26;
            }
            ++v19;
            ++result;
            v75 = v19;
            v78 = *(char*)v75 ? 0: 1;
        }
        v21 = 1;
        v19 = v15;
        int v28 = -1;
        v11 = 0;
        int v29 = v15;
        while(v28 != 0) {
            char v30 = *(char*)v29 == 0;
            ++v29;
            --v28;
            if(!~v30) {
                break;
            }
        }
        v10 = (int)((unsigned int)~v28 - 1);
        v20 = (int)((unsigned int)~v28 - 1);
    }
loc_8049076:
    int v31 = 0;
    if(param1 != -1) {
    loc_8049087:
        v15 = param1;
        if(v15 != v31) {
            goto loc_8049098;
        }
    }
    else {
    loc_8049218:
        unsigned char* ptr2 = param0;
        if(*(char*)((int)ptr2 + v31)) {
        loc_8049098:
            v15 = (unsigned int)(v21 ? 1: 0) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
            if((v20 ? v15 & 0x1: 0)) {
                unsigned int v32 = (unsigned int)(v20 + v31);
                char v33 = v32 == param1;
                if((v32 < (unsigned int)param1 || v33)) {
                    v9 = v31 + (int)param0;
                    int v34 = v20;
                    char v35 = 1;
                    int v36 = v19;
                    while(v34 != 0) {
                        v35 = *(char*)v9 == *(char*)v36;
                        ++v9;
                        ++v36;
                        --v34;
                        if(!v35) {
                            break;
                        }
                    }
                    if(v35) {
                        if((unsigned int)result < (unsigned int)v18) {
                            *(char*)(result + v17) = 92;
                        }
                        ++result;
                    }
                }
            }
            unsigned char* ptr3 = param0;
            int v37 = v31;
            char v38 = *(char*)((int)ptr3 + v37);
            char v39 = *(char*)((int)ptr3 + v37);
            unsigned int v40 = (unsigned int)v38;
            char v41 = v40 == 126;
            if((v40 < 126 || v41)) {
                v11 = (int)gvar_804A2E8[v40] + 134527308;
                jump v11;
            }
            else {
                if(v25) {
                    ptr0 = (int*)0x1;
                    →__ctype_b_loc();
                    int v42 = (unsigned int)v39;
                    int v43 = v21;
                    int v44 = *(int*)v14;
                    v15 = (unsigned int)*(short*)(v42 * 2 + v44) & 0x4000;
                    char v45 = v43 ? 0: 1;
                    v8 = v15;
                    v15 = (unsigned int)(v45 ? 0: 1) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
                    v11 = v8 ? 0: 1;
                    if(!(v11 & v15)) {
                        goto loc_8049341;
                    }
                    else {
                        goto loc_8049145;
                    }
                }
                else {
                    char v46 = param1 == -1;
                    int v47 = 0;
                    v7 = &v47;
                    int v48 = 0;
                    ptr0 = NULL;
                    v8 = 1;
                    if(v46) {
                        int v49 = param1;
                        unsigned char* ptr4 = param0;
                        while(v49 != 0) {
                            char v50 = *ptr4 == 0;
                            ++ptr4;
                            --v49;
                            if(!~v50) {
                                param1 = (int)((unsigned int)~v49 - 1);
                                int v51 = v31 + (int)param0;
                                v6 = &v13;
                                v5 = v51;
                                goto loc_80492AD;
                            }
                        }
                        param1 = (int)((unsigned int)~v49 - 1);
                        int v51 = v31 + (int)param0;
                        v6 = &v13;
                        v5 = v51;
                        goto loc_80492AD;
                    }
                    else {
                        int v51 = v31 + (int)param0;
                        v6 = &v13;
                        v5 = v51;
                        goto loc_80492AD;
                        if(v11) {
                            goto loc_8049341;
                        }
                        else if(param2 != 1) {
                            goto loc_8049341;
                        }
                        else {
                            return sub_8048FF6((int)param0, param1, 2, param3);
                            if(param2 == 3) {
                                v4 = v31 + 2;
                                char v52 = (unsigned int)v4 < (unsigned int)param1;
                                if(!v52) {
                                    goto loc_8049341;
                                }
                                else {
                                    unsigned char* ptr5 = param0;
                                    v9 = v31;
                                    if(*(char*)((char*)((int)ptr5 + v9) + 1) != 63) {
                                        goto loc_8049341;
                                    }
                                    else {
                                        v3 = *(char*)((char*)((int)ptr5 + v9) + 2);
                                        v11 = (int)*(void**)((((unsigned int)*(char*)((char*)((int)ptr5 + v9) + 2) | ((unsigned int)(v3 < 0 ? 0xffffff: 0) << 8)) - 33) * 4 + (int)&gvar_804A4E4) + 134527308;
                                        switch(v11) {
                                            case 0: 
                                            case 6: 
                                            case 7: 
                                            case 8: 
                                            case 12: 
                                            case 14: 
                                            case 27: 
                                            case 28: 
                                            case 29: {
                                                goto loc_8049672;
                                            }
                                            default: {
                                                goto loc_8049341;
                                            }
                                        }
                                        if(param2 == 1) {
                                            return sub_8048FF6((int)param0, param1, 2, param3);
                                        }
                                        else if(param2 != 2) {
                                            goto loc_8049341;
                                        }
                                        else {
                                            v11 = v18;
                                            if((unsigned int)v11 > (unsigned int)result) {
                                                *(char*)(result + v17) = 39;
                                            }
                                            ++result;
                                            v9 = v18;
                                            if((unsigned int)v9 > (unsigned int)result) {
                                                int v53 = v17;
                                                v11 = result;
                                                *(char*)(v11 + v53) = 92;
                                            }
                                            ++result;
                                        }
                                    }
                                }
                            }
                            else if(param2 != 1) {
                                goto loc_8049341;
                            }
                        }
                    }
                }
                if((unsigned int)result < (unsigned int)v18) {
                    int v54 = v17;
                    v9 = result;
                    *(char*)(v54 + v9) = 39;
                    ++result;
                    goto loc_8049341;
                    if(v74) {
                        goto loc_80491F8;
                    }
                    else {
                        v9 = v18;
                        if((unsigned int)v9 > (unsigned int)result) {
                            int v55 = v17;
                            v11 = result;
                            *(char*)(v11 + v55) = 92;
                        }
                        ++result;
                        if((unsigned int)result < (unsigned int)v18) {
                            int v56 = v17;
                            v9 = result;
                            *(char*)(v56 + v9) = 48;
                        }
                        ++result;
                        if((unsigned int)result < (unsigned int)v18) {
                            v11 = v17;
                            *(char*)(v11 + result) = 48;
                        }
                        ++result;
                        v39 = 48;
                        goto loc_8049341;
                    loc_8049672:
                        v11 = v18;
                        v39 = v3;
                        v31 = v4;
                        if((unsigned int)v11 > (unsigned int)result) {
                            *(char*)(result + v17) = 63;
                        }
                        ++result;
                        v9 = v18;
                        if((unsigned int)v9 > (unsigned int)result) {
                            int v57 = v17;
                            v11 = result;
                            *(char*)(v11 + v57) = 92;
                        }
                        ++result;
                        if((unsigned int)result >= (unsigned int)v18) {
                            ++result;
                            goto loc_8049341;
                        }
                        else {
                            v9 = result;
                            *(char*)(v9 + v17) = 63;
                            ++result;
                            goto loc_8049341;
                            if(param2 == 1) {
                                return sub_8048FF6((int)param0, param1, 2, param3);
                            }
                            v10 = v21;
                            int v58 = v31;
                            char v59 = v10 ? 0: 1;
                            v15 = v58 + 1;
                            if(v59) {
                                goto loc_80491F8;
                            }
                            else {
                                v39 = (unsigned char)v11;
                            }
                        }
                    }
                }
                else {
                    ++result;
                    goto loc_8049341;
                loc_80492AD:
                    do {
                        int v60 = v7;
                        int v61 = v31;
                        int v62 = param1;
                        v9 = v61 + (int)ptr0;
                        →mbrtowc(v6, v9 + (int)param0, v62 - v9, v60);
                        v2 = v14 ? 0: 1;
                        int v63 = v14;
                        if(!v2) {
                            if(v14 == -1) {
                                v1 = ptr0 == 1;
                                v0 = (unsigned int)ptr0 < 1;
                                v8 = 0;
                            }
                            else if(v14 != -2) {
                                →iswprint(v13);
                                char v64 = v14 ? 1: 0;
                                ptr0 = (int*)(v63 + (int)ptr0);
                                v8 &= 0 - (unsigned int)v64;
                                →mbsinit(v7);
                                if(!v14) {
                                    goto loc_80492AD;
                                }
                                else {
                                    break;
                                }
                            }
                            else {
                                char v65 = (unsigned int)v9 < (unsigned int)param1;
                                v8 = 0;
                                if(!v65) {
                                    break;
                                }
                                else {
                                    v15 = v5;
                                    int* ptr6 = ptr0;
                                    if(!*(char*)((int)ptr6 + v15)) {
                                        break;
                                    }
                                    else {
                                        do {
                                            ptr0 = (int*)((char*)ptr0 + 1);
                                            if((unsigned int)((int)ptr0 + v31) >= (unsigned int)param1) {
                                                break loc_80492AD;
                                            }
                                            else {
                                                v9 = v5;
                                                ptr1 = ptr0;
                                            }
                                        }
                                        while(*(char*)(v9 + (int)ptr1));
                                        if((unsigned int)ptr0 <= 1) {
                                            goto loc_804932A;
                                        }
                                        else {
                                            goto loc_8049145;
                                        }
                                    }
                                }
                            }
                            if(v0 || v1) {
                                goto loc_804932A;
                            }
                            else {
                                goto loc_8049145;
                            }
                        }
                    }
                    while(!v2);
                    if((unsigned int)ptr0 <= 1) {
                    loc_804932A:
                        v15 = (unsigned int)(v21 ? 1: 0) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
                        v11 = v8 ? 0: 1;
                        if(!(v11 & v15)) {
                            goto loc_8049341;
                        }
                    }
                loc_8049145:
                    v10 = (int)ptr0 + v31;
                    while(1) {
                        v9 = v21;
                        char v66 = v9 ? 0: 1;
                        v11 = v8 ? 0: 1;
                        if((((unsigned int)(v66 ? 0: 1) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8)) & v11)) {
                            if((unsigned int)result < (unsigned int)v18) {
                                v9 = v17;
                                *(char*)(v9 + result) = 92;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)v18) {
                                int v67 = v17;
                                v9 = result;
                                *(char*)(v67 + v9) = (v39 >>> 6) + 48;
                            }
                            ++result;
                            if((unsigned int)result < (unsigned int)v18) {
                                int v68 = v17;
                                v9 = result;
                                *(char*)(v68 + v9) = ((v39 >>> 3) & 0x7) + 48;
                            }
                            ++result;
                            v11 = (int)((v39 & 0x7) + 48);
                            v39 = (v39 & 0x7) + 48;
                        }
                        v15 = v31 + 1;
                        if((unsigned int)v10 <= (unsigned int)v15) {
                            break;
                        }
                        else {
                            if((unsigned int)result < (unsigned int)v18) {
                                *(char*)(result + v17) = v39;
                            }
                            ++result;
                            v31 = v15;
                            unsigned char* ptr7 = param0;
                            v39 = *(char*)((int)ptr7 + v15);
                        }
                    }
                    goto loc_80491F8;
                loc_8049341:
                    v15 = v31 + 1;
                    v10 = v21;
                    if(!v10) {
                        goto loc_80491F8;
                    }
                    else {
                        int v69 = (unsigned int)v39;
                        v9 = param3;
                        char v70 = v39 >>> 5;
                        v10 = v69 & 0x1f;
                        int v71 = (unsigned int)v70;
                        v11 = *(int*)(v71 * 4 + v9 + 4) >> (v10 & 0x1f);
                        if(!((unsigned char)v11 & 0x1)) {
                            goto loc_80491F8;
                        }
                    }
                }
                v11 = v18;
                if((unsigned int)v11 > (unsigned int)result) {
                    int v72 = v17;
                    v10 = result;
                    *(char*)(v10 + v72) = 92;
                }
                v9 = v31;
                ++result;
                v15 = v9 + 1;
            }
        loc_80491F8:
            if((unsigned int)result < (unsigned int)v18) {
                v10 = v17;
                v9 = result;
                *(char*)(v10 + v9) = v39;
            }
            ++result;
            char v73 = param1 == -1;
            v31 = v15;
            if(!v73) {
                goto loc_8049087;
            }
            else {
                goto loc_8049218;
            }
        }
    }
    if(v19) {
        for(char i = *(char*)v19; *(char*)v19; i = *(char*)v19) {
            if((unsigned int)result < (unsigned int)v18) {
                *(char*)(result + v17) = i;
            }
            ++result;
            ++v19;
        }
    }
    if((unsigned int)result < (unsigned int)v18) {
        *(char*)(result + v17) = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80496C3(int param0, int param1, int param2, int param3, int* param4) {
    int* ptr0;
    int v0;
    int v1 = v0;
    int* ptr1 = param4;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804BB20;
    }
    →__errno_location();
    int v2 = *ptr0;
    int result = sub_8048FF6(param2, param3, *ptr1, (int)ptr1);
    *ptr0 = v2;
    return result;
}

int sub_8049721(int param0, int* param1) {
    int* ptr0;
    void* ptr1;
    int* ptr2;
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr3 = &ptr2;
    int v4 = v0;
    int v5 = &loc_804972C;
    int v6 = 134527308;
    int* ptr4 = &v4;
    char v7 = &ptr0 == 60;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&ptr0 - 60);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x2c) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 < 44;
    char v12 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v1) & (int)(int*)((int)&v4 ^ 0x2c)) < 0;
    int v13 = v2;
    int v14 = v3;
    →__errno_location();
    int v15 = *(int*)v2;
    int v16 = *(int*)v2;
    int v17 = v13;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = 0;
    char v22 = 0;
    if(v19) {
        /*NO_RETURN*/ →abort();
    }
    int v23 = v13;
    char v24 = gvar_804B9DC == v23;
    char v25 = (int)gvar_804B9DC < v23;
    char v26 = __parity__((unsigned char)gvar_804B9DC - (unsigned char)v23);
    char v27 = gvar_804B9DC < (unsigned int)v23;
    char v28 = (((gvar_804B9DC - v23) ^ gvar_804B9DC) & (gvar_804B9DC ^ v23)) < 0;
    char v29 = (((gvar_804B9DC - v23) ^ (gvar_804B9DC ^ v23)) >>> 4) & 0x1;
    if((v27 || v24)) {
        int v30 = v23;
        unsigned int v31 = (unsigned int)(v30 + 1);
        v18 = v31 == 0x1fffffff;
        v19 = (int)v31 < 0x1fffffff;
        v20 = __parity__((unsigned char)v31 - 0xff);
        v22 = v31 < 0x1fffffff;
        v21 = (((v31 - 0x1fffffff) ^ v31) & (v31 ^ 0x1fffffff)) < 0;
        v10 = (((v31 - 0x1fffffff) ^ (v31 ^ 0x1fffffff)) >>> 4) & 0x1;
        if(!v22 && !v18) {
            int* ptr5 = &ptr1;
            /*NO_RETURN*/ sub_8049D10();
        }
        int v32 = gvar_804B9E8;
        if(v32 == &gvar_804B9E0) {
            int v33 = sub_8049DC5(8);
            unsigned int v34 = gvar_804B9E4;
            v32 = v33;
            gvar_804B9E8 = v33;
            *(unsigned int*)v32 = gvar_804B9E0;
            *(unsigned int*)(v32 + 4) = v34;
        }
        int v35 = sub_8049E3F(v32, (int)(v31 * 8));
        unsigned int v36 = gvar_804B9DC;
        gvar_804B9E8 = v35;
        →memset(v36 * 8 + v35, 0, (int)((v31 - v36) * 8));
        gvar_804B9DC = v31;
    }
    unsigned int v37 = gvar_804B9E8;
    int v38 = *(int*)(v13 * 8 + v37);
    int result = *(int*)(v13 * 8 + v37 + 4);
    int v39 = sub_80496C3(result, v38, v14, param0, param1);
    if((unsigned int)v39 >= (unsigned int)v38) {
        unsigned int v40 = gvar_804B9E8;
        v38 = v39 + 1;
        *(int*)(v13 * 8 + v40) = v39 + 1;
        if(result != 134527520) {
            sub_8049FE0(result);
            v40 = gvar_804B9E8;
        }
        int v41 = sub_8049DC5(v38);
        *(int*)(v13 * 8 + v40 + 4) = v41;
        result = v41;
        sub_80496C3(result, v38, v14, param0, param1);
    }
    →__errno_location();
    *(int*)v2 = v16;
    return result;
}

int sub_80498AE(int param0, int* param1) {
    return sub_8049721(-1, (int*)&gvar_804BB20);
}

int sub_80498DA(int* param0) {
    int v0;
    int v1 = v0;
    return sub_80498AE(0, param0);
}

int* sub_8049905(int param0, int param1) {
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
    int* ptr0 = &v0;
    int v9 = param1;
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

int sub_804995F(int param0, int param1, int param2) {
    char v0;
    int v1;
    sub_8049905(v1, param1);
    return sub_8049721(-1, &v0);
}

int sub_804998F(int param0, int param1, int param2, int param3) {
    char v0;
    int v1;
    sub_8049905(v1, param1);
    return sub_8049721(param3, &v0);
}

int sub_80499BE(int param0, int param1) {
    return sub_804995F(0, param0, param1);
}

int sub_80499F0(int param0, char param1) {
    char v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = gvar_804BB20;
    unsigned int v4 = gvar_804BB24;
    unsigned int v5 = gvar_804BB28;
    unsigned int v6 = gvar_804BB2C;
    unsigned int v7 = gvar_804BB30;
    unsigned int v8 = gvar_804BB34;
    unsigned int v9 = gvar_804BB38;
    unsigned int v10 = gvar_804BB3C;
    unsigned int v11 = gvar_804BB40;
    *(int*)&v0 = (int)param1;
    unsigned int v12 = v11;
    sub_8048F36(&v3, v0, 1);
    *(int*)&v0 = &v3;
    return sub_8049721(-1, *(int**)&v0);
}

int sub_8049A8B(int param0) {
    char v0;
    *(int*)&v0 = 58;
    return sub_80499F0(param0, ':');
}

int sub_8049AC0(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3;
    unsigned int v4 = 0;
    int v5 = v3;
    int v6 = param0;
    int v7 = param4 + 4;
    int v8 = param4;
    while(*(int*)v8) {
        v8 = v7;
        ++v4;
        v7 += 4;
    }
    if(param1) {
        v2 = param2;
        int v9 = param3;
        →fprintf(v6, "%s (%s) %s\n");
    loc_8049B2F:
        switch(v4) {
            case 0: {
                /*NO_RETURN*/ →abort();
                v2 = param3;
                →fprintf(v6, "%s %s\n");
                goto loc_8049B2F;
            }
            case 1: {
                v0 = "Written by %s.\n";
                v1 = 5;
            loc_8049B4A:
                →dcgettext(0, v0, 5);
                →vfprintf(v6, result, param4);
                char* ptr0 = *(unsigned int*)(v6 + 20);
                if(*(unsigned int*)(v6 + 24) > (unsigned int)ptr0) {
                    *ptr0 = 10;
                    *(int*)(v6 + 20) = *(int*)(v6 + 20) + 1;
                }
                else {
                    →__overflow(v6, 10);
                }
                →fputs_unlocked(version_etc_copyright, v6);
                char* ptr1 = *(unsigned int*)(v6 + 20);
                if(*(unsigned int*)(v6 + 24) > (unsigned int)ptr1) {
                    *ptr1 = 10;
                    *(int*)(v6 + 20) = *(int*)(v6 + 20) + 1;
                }
                else {
                    →__overflow(v6, 10);
                }
                →dcgettext(0, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
                →fputs_unlocked(result, v6);
                return result;
            }
            case 2: {
                v0 = "Written by %s and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 3: {
                v0 = "Written by %s, %s, and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 4: {
                v0 = "Written by %s, %s, %s,\nand %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 5: {
                v0 = "Written by %s, %s, %s,\n%s, and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 6: {
                v0 = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 7: {
                v0 = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 8: {
                v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
            case 9: {
                v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
                v1 = 5;
                goto loc_8049B4A;
            }
        }
        v1 = 5;
        v0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        goto loc_8049B4A;
    }
    else {
        v2 = param3;
        →fprintf(v6, "%s %s\n");
        goto loc_8049B2F;
    }
}

int sub_8049CCD(int param0, int param1, int param2, int param3) {
    char v0;
    return sub_8049AC0(param0, param1, param2, param3, &v0);
}

void sub_8049D10() {
    int v0;
    unsigned int v1 = xalloc_fail_func;
    if(!v1) {
    loc_8049D47:
        →dcgettext(0, &xalloc_msg_memory_exhausted, 5);
        int v2 = v0;
        →error(exit_failure, 0, 134521516);
        /*NO_RETURN*/ →abort();
    }
    v1();
    goto loc_8049D47;
}

int sub_8049DC5(int param0) {
    int* ptr0;
    void* ptr1;
    int result;
    int* ptr2;
    int v0;
    int v1;
    int* ptr3 = &ptr2;
    int v2 = v1;
    int v3 = &loc_8049DCE;
    int v4 = 134527308;
    int* ptr4 = &v2;
    char v5 = &ptr0 == 12;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v9 = (unsigned int)&v2 < 4;
    char v10 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v2 ^ 0x4)) < 0;
    int v11 = param0;
    →malloc(v11);
    char v12 = result ? 0: 1;
    char v13 = result < 0;
    char v14 = __parity__((unsigned char)result);
    char v15 = 0;
    char v16 = 0;
    if(v12) {
        int* ptr5 = &ptr1;
        /*NO_RETURN*/ sub_8049D10();
    }
    return result;
}

int sub_8049E3F(int param0, int param1) {
    int* ptr0;
    void* ptr1;
    int result;
    int* ptr2;
    int v0;
    int v1;
    int* ptr3 = &ptr2;
    int v2 = v1;
    int v3 = &loc_8049E48;
    int v4 = 134527308;
    int* ptr4 = &v2;
    char v5 = &ptr0 == 28;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 28);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x14) ^ (int)&v0) >>> 4) & 0x1);
    char v9 = (unsigned int)&v2 < 20;
    char v10 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v2 ^ 0x14)) < 0;
    int v11 = param0;
    int v12 = param1;
    →realloc(v11, v12);
    char v13 = result ? 0: 1;
    char v14 = result < 0;
    char v15 = __parity__((unsigned char)result);
    char v16 = 0;
    char v17 = 0;
    if(v13) {
        int* ptr5 = &ptr1;
        /*NO_RETURN*/ sub_8049D10();
    }
    return result;
}

int sub_8049E75(int param0, unsigned int* param1, unsigned int param2) {
    int v0;
    void* ptr0;
    int v1;
    int* ptr1;
    int v2;
    int* ptr2 = &ptr1;
    int v3 = v1;
    int v4 = &loc_8049E80;
    int v5 = 134527308;
    int* ptr3 = &v3;
    char v6 = &v0 == 28;
    char v7 = (int)&v2 < 0;
    char v8 = __parity__((unsigned char)&v0 - 28);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v10 = (unsigned int)&v3 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v3 ^ 0xc)) < 0;
    int v12 = param0;
    unsigned int* ptr4 = param1;
    unsigned int v13 = param2;
    char v14 = v12 ? 0: 1;
    char v15 = v12 < 0;
    char v16 = __parity__((unsigned char)v12);
    char v17 = 0;
    char v18 = 0;
    unsigned int v19 = *ptr4;
    if(!v14) {
        int v20 = 0;
        char v21 = 1;
        char v22 = 0;
        char v23 = 1;
        char v24 = 0;
        char v25 = 0;
        int v26 = 0x7fffffff;
        unsigned int v27 = 0x7fffffff % v13;
        unsigned int v28 = 0x7fffffff / v13;
        unsigned int v29 = v27;
        char v30 = v28 == v19;
        char v31 = (int)v28 < (int)v19;
        char v32 = __parity__((unsigned char)v28 - (unsigned char)v19);
        char v33 = v28 < v19;
        char v34 = (int)(((v28 - v19) ^ v28) & (v28 ^ v19)) < 0;
        char v35 = (((v28 - v19) ^ (v28 ^ v19)) >>> 4) & 0x1;
        if(v33) {
            int* ptr5 = &ptr0;
            /*NO_RETURN*/ sub_8049D10();
        }
        v19 *= 2;
    }
    else if(!v19) {
        v19 = 64 / v13 ? 64 / v13: 64 / v13 + 1;
    }
    *ptr4 = v19;
    return sub_8049E3F(param0, (int)(v19 * v13));
}

int sub_8049EE2(int param0, int* param1) {
    int* ptr0;
    void* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int* ptr3 = &ptr2;
    int v2 = v0;
    int v3 = &loc_8049EEB;
    int v4 = 134527308;
    int* ptr4 = &v2;
    char v5 = &ptr0 == 28;
    char v6 = (int)&v1 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 28);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x14) ^ (int)&v1) >>> 4) & 0x1);
    char v9 = (unsigned int)&v2 < 20;
    char v10 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v1) & (int)(int*)((int)&v2 ^ 0x14)) < 0;
    int v11 = param0;
    int* ptr5 = param1;
    char v12 = v11 ? 0: 1;
    char v13 = v11 < 0;
    char v14 = __parity__((unsigned char)v11);
    char v15 = 0;
    char v16 = 0;
    int v17 = *ptr5;
    if(!v12) {
        char v18 = v17 ? 0: 1;
        char v19 = v17 < 0;
        char v20 = __parity__((unsigned char)v17);
        char v21 = 0;
        char v22 = 0;
        if(v19) {
            int* ptr6 = &ptr1;
            /*NO_RETURN*/ sub_8049D10();
        }
        v17 *= 2;
    }
    else if(!v17) {
        v17 = 64;
    }
    *ptr5 = v17;
    return sub_8049E3F(v11, v17);
}

int sub_8049F27(int param0) {
    int result;
    int v0 = sub_8049DC5(param0);
    →memset(v0, 0, param0);
    return result;
}

int sub_8049FA5(int param0, int param1) {
    int result;
    int v0 = sub_8049DC5(param1);
    →memcpy(v0, param0, param1);
    return result;
}

int sub_8049FE0(int param0) {
    if(param0) {
        →free(param0);
    }
    return param0;
}

unsigned int sub_804A008(int param0, int param1) {
    initializer_0(param0, param1);
    return 0;
}

int* sub_804A05C() {
    return finalizer_0();
}

int sub_804A0A0(int param0) {
    int result;
    →__cxa_atexit();
    return result;
}

int sub_804A0D0(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param1;
    unsigned int* ptr0 = (unsigned int*)&gvar_804B82C;
    for(unsigned int i = *(int*)&gvar_804B82C; i != -1; i = *ptr0) {
        --ptr0;
        i();
    }
    return param1;
}
