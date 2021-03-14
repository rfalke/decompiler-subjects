
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_8048790() {
    jump gvar_804B734;
}

void* sub_80489A4() {
    void* result = __gmon_start__;
    if(result) {
        result = (void*)result();
    }
    return result;
}

void sub_80489C8() {
}

void sub_8048A02() {
}

unsigned int sub_8048A04() {
    return 0;
}

int sub_8048A30(int __status) {
    char* __format = →dcgettext(NULL, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    unsigned int v0 = gvar_804B928;
    →printf(__format, v0, v0);
    char* __s = →dcgettext(NULL, "      --help     display this help and exit\n", 5);
    →fputs_unlocked(__s, stdout);
    char* __s1 = →dcgettext(NULL, "      --version  output version information and exit\n", 5);
    →fputs_unlocked(__s1, stdout);
    char* __format1 = →dcgettext(NULL, (char*)&gvar_804A006, 5);
    →printf(__format1, "bug-coreutils@gnu.org");
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048B10(int param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = param1;
    unsigned int v2 = *ptr0;
    int v3 = 6;
    gvar_804B928 = v2;
    →setlocale(6, (char*)&gvar_804A01C);
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    sub_8049E90(&sub_8048C20);
    if(param0 != 2) {
    loc_8048B7B:
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
            /*NO_RETURN*/ sub_8048A30(0);
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
            ptr0 = (unsigned int*)&gvar_804A079;
            int v8 = "Jim Meyering";
            sub_8049AC0(stdout, "true", &gvar_804A079, "5.2.1");
        }
    }
    goto loc_8048B7B;
}

void sub_8048C06(int param0, int param1, int param2, int param3, int param4) {
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
            param3 = "Jim Meyering";
            sub_8049AC0(stdout, "true", &gvar_804A079, "5.2.1");
        }
        /*NO_RETURN*/ →exit(0);
    }
}

unsigned int sub_8048C10(unsigned int param0) {
    gvar_804B7E8 = param0;
    return param0;
}

size_t sub_8048C20() {
    size_t result;
    int v0;
    FILE* __fp = stdout;
    int v1 = v0;
    int __errnum = (*(char*)&__fp->_flags & 0x20 ? 1: 0) - 1;
    if(__errnum) {
        result = →__fpending(__fp);
        if(result) {
            __fp = stdout;
            goto loc_8048C54;
        }
    }
    else {
    loc_8048C54:
        result = (size_t)→fclose(__fp);
        if(result) {
            result = (size_t)→__errno_location();
            __errnum = *(int*)result;
        }
        if(__errnum >= 0) {
            char* ptr0 = →dcgettext(NULL, "write error", 5);
            int v2 = gvar_804B7E8;
            if(v2) {
                int v3 = sub_8049890(v2);
                →error(gvar_804B7BC, __errnum, (char*)&gvar_804A098, v3, ptr0);
            }
            else {
                →error(gvar_804B7BC, __errnum, (char*)&gvar_804A09C, ptr0);
            }
        }
    }
    return result;
}

void* sub_8048CF0(int* param0) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    void* result = sub_8049BA0(36);
    int* ptr1 = param0;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804B900;
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

int sub_8048D70(int* param0) {
    int* ptr0 = param0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_804B900;
    }
    return *ptr0;
}

int sub_8048D7E(int param0) {
    jump param0;
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

char* sub_8048E10(char* __msgid, int param1) {
    char* result = →dcgettext(NULL, __msgid, 5);
    if(result == __msgid && param1 == 6) {
        result = (char*)&gvar_804A0CB;
    }
    return result;
}

unsigned int sub_8048E50(char* param0, unsigned int param1, char* __s1, size_t param3, int param4, int param5) {
    unsigned int v0;
    unsigned int v0;
    unsigned int v0;
    char* __s2;
    int v1;
    unsigned int v2;
    char v3;
    unsigned int v4;
    unsigned int v5;
    unsigned int v6;
    unsigned int v5;
    unsigned int v5;
    unsigned int v5;
    unsigned int v5;
    wint_t __wc;
    char v7;
    unsigned int v8;
    unsigned int result = 0;
    char* ptr0 = NULL;
    size_t v9 = 0;
    int v10 = 0;
    size_t v11 = /*BAD_CALL!*/ →__ctype_get_mb_cur_max();
    int v12 = v11 - 1 ? 0: 1;
    if((unsigned int)param4 <= 6) {
        switch(param4) {
            case 0: 
            case 1: {
                v5 = 0;
                goto loc_8048EE0;
            }
            case 2: {
                if(param1 > 0) {
                    *param0 = 39;
                }
                result = 1;
                ptr0 = (char*)&gvar_804A0CD;
                v9 = 1;
                v5 = 0;
                goto loc_8048EE0;
            }
            case 3: {
                break;
            }
            case 4: {
                v10 = 1;
                v5 = 0;
                goto loc_8048EE0;
            }
            case 5: 
            case 6: {
                char* ptr1 = sub_8048E10((char*)&gvar_804A0CF, param4);
                char* __s = sub_8048E10((char*)&gvar_804A0CD, param4);
                ptr0 = ptr1;
                if(ptr1[0]) {
                    do {
                        if(result < param1) {
                            *(char*)(result + (int)param0) = ptr0[0];
                        }
                        ++ptr0;
                        ++result;
                    }
                    while(ptr0[0]);
                }
                v10 = 1;
                ptr0 = __s;
                v9 = →strlen(__s);
                v5 = 0;
                goto loc_8048EE0;
            }
            case 7: {
                goto loc_8048F58;
            }
            case 8: 
            case 9: 
            case 10: 
            case 11: 
            case 12: 
            case 13: {
                goto loc_8049189;
            }
            case 14: {
            loc_8049020:
                v6 = (unsigned int)97 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
            loc_8049038:
                v4 = v5 + 1;
                if(v10) {
                    v3 = (char)v6;
                loc_8048FE1:
                    if(result < param1) {
                        *(char*)(result + (int)param0) = 92;
                    }
                    ++result;
                    v4 = v5 + 1;
                }
                goto loc_8049006;
            }
            case 15: {
                v6 = (unsigned int)98 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                goto loc_8049038;
            }
            default: {
                throw 0;
            }
        }
        if(param1 > 0) {
            *param0 = 34;
        }
        result = 1;
        v10 = 1;
        ptr0 = (char*)&gvar_804A0CB;
        v9 = 1;
    }
    v5 = 0;
    goto loc_8048EE0;
loc_8048F58:
    v4 = v5 + 1;
    if(v10) {
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
        v3 = '0';
        goto loc_8048FB8;
    loc_8049189:
        if(v12) {
            v2 = 1;
            unsigned short** ptr2 = →__ctype_b_loc();
            v1 = (unsigned int)ptr2[0][(unsigned int)v3] & 0x4000;
        }
        else {
            int v13 = 0;
            int v14 = 0;
            v2 = 0;
            v1 = 1;
            if(param3 == -1) {
                param3 = →strlen(__s1);
            }
        loc_80492C3:
            do {
                unsigned int v15 = v2 + v5;
                __s2 = &__s1[v15];
                size_t v16 = /*BAD_CALL!*/ →mbrtowc(&__wc, __s2, param3 - v15, &v13);
                if(v16) {
                    if(v16 == -1) {
                        v1 = 0;
                        break;
                    }
                    else if(v16 != -2) {
                        int v17 = →iswprint(__wc);
                        v2 = (unsigned int)(v16 + v2);
                        mbstate_t* __ps = &v13;
                        v1 &= (v17 ? 0: 1) - 1;
                        int v18 = →mbsinit(__ps);
                        if(!v18) {
                            goto loc_80492C3;
                        }
                        else {
                            break;
                        }
                    }
                    else {
                        char v19 = v15 < param3;
                        v1 = 0;
                        if(!v19 || !__s2[0]) {
                            break;
                        }
                    }
                    do {
                        ++v2;
                        v8 = v2 + v5;
                    }
                    while(v8 < param3 && __s1[v8]);
                }
                break;
            }
            while(1);
            if(v2 > 1) {
                goto loc_80491D0;
            }
        }
        v4 = v5 + 1;
        if(v10) {
            if(!v1) {
            loc_80491D0:
                unsigned int v20 = v2 + v5;
                while(1) {
                    if(v10 && !v1) {
                        if(result < param1) {
                            *(char*)(result + (int)param0) = 92;
                        }
                        ++result;
                        if(result < param1) {
                            *(char*)(result + (int)param0) = (v3 >>> 6) + 48;
                        }
                        ++result;
                        if(result < param1) {
                            *(char*)(result + (int)param0) = ((v3 >>> 3) & 0x7) + 48;
                        }
                        v3 &= 7;
                        ++result;
                        v3 += 48;
                    }
                    v4 = v5 + 1;
                    if(v20 <= v4) {
                        goto loc_8049006;
                    }
                    else {
                        if(result < param1) {
                            *(char*)(result + (int)param0) = v3;
                        }
                        ++result;
                        v5 = v4;
                        v3 = __s1[v4];
                    }
                }
            loc_8048EE0:
                if(param3 != -1 ? v5 == param3: __s1[v5] ? 0: 1) {
                    goto loc_8049396;
                }
                if(v10 && v9 && (unsigned int)(v9 + v5) <= param3) {
                    size_t v21 = (size_t)ptr0;
                    size_t v22 = v9;
                    __s2 = &__s1[v5];
                    char v23 = 1;
                    while(v22 != 0) {
                        v23 = __s2[0] == *(char*)v21;
                        ++__s2;
                        ++v21;
                        --v22;
                        if(!v23) {
                            break;
                        }
                    }
                    goto loc_8048F16;
                loc_8049396:
                    if(ptr0) {
                        char v24 = ptr0[0];
                        if(!v24) {
                        loc_80493C9:
                            if(result < param1) {
                                *(char*)(result + (int)param0) = 0;
                            }
                            return result;
                        }
                        do {
                            if(result < param1) {
                                *(char*)(result + (int)param0) = v24;
                            }
                            ++ptr0;
                            ++result;
                            v24 = ptr0[0];
                        }
                        while(v24);
                        goto loc_80493C9;
                    loc_8048F16:
                        if(v23) {
                            if(result < param1) {
                                *(char*)(result + (int)param0) = 92;
                            }
                            ++result;
                        }
                    }
                    else {
                        goto loc_80493C9;
                    }
                }
                v7 = __s1[v5];
                v3 = __s1[v5];
                switch((unsigned int)v7) {
                    case 0: {
                        goto loc_8048F58;
                    }
                    case 7: {
                        goto loc_8049020;
                    }
                    case 8: {
                        v6 = (unsigned int)98 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                        goto loc_8049038;
                    }
                    case 9: {
                        break;
                    }
                    case 10: {
                        v6 = (unsigned int)110 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                        goto loc_804904C;
                    }
                    case 11: {
                        v6 = (unsigned int)118 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                        goto loc_8049038;
                    }
                    case 12: {
                        v6 = (unsigned int)102 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                        goto loc_8049038;
                    }
                    case 13: {
                        v6 = (unsigned int)114 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                        goto loc_804904C;
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
                    loc_8049379:
                        if(param4 != 1) {
                            goto loc_8048FB8;
                        }
                        else {
                            return (unsigned int)sub_8048E50((int)param0, (int)param1, (int)__s1, (int)param3, 2, param5);
                        }
                    }
                    case 35: 
                    case 126: {
                        if(!v5) {
                            goto loc_8049379;
                        }
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
                        goto loc_8048FB8;
                    }
                    case 39: {
                        if(param4 == 2) {
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
                            goto loc_8048FB8;
                        }
                        else if(param4 != 1) {
                            goto loc_8048FB8;
                        }
                        else {
                            return (unsigned int)sub_8048E50((int)param0, (int)param1, (int)__s1, (int)param3, 2, param5);
                        }
                    }
                    case 63: {
                        if(param4 == 1) {
                            return (unsigned int)sub_8048E50((int)param0, (int)param1, (int)__s1, (int)param3, 2, param5);
                        }
                        else if(param4 != 3) {
                            goto loc_8048FB8;
                        }
                        else {
                            unsigned int v25 = v5 + 2;
                            if(v25 >= param3) {
                                goto loc_8048FB8;
                            }
                            else {
                                unsigned int v26 = v5;
                                if(__s1[v26 + 1] != 63) {
                                    goto loc_8048FB8;
                                }
                                else {
                                    char v27 = __s1[v26 + 2];
                                    switch((unsigned int)((int)v27 - 33)) {
                                        case 0: 
                                        case 6: 
                                        case 7: 
                                        case 8: 
                                        case 12: 
                                        case 14: 
                                        case 27: 
                                        case 28: 
                                        case 29: {
                                            break;
                                        }
                                        default: {
                                            goto loc_8048FB8;
                                        }
                                    }
                                    v5 = v25;
                                    char v28 = result < param1;
                                    v3 = v27;
                                    if(v28) {
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
                                }
                            }
                        }
                        ++result;
                        goto loc_8048FB8;
                    }
                    case 92: {
                        v6 = (unsigned int)v3;
                    loc_804904C:
                        if(param4 != 1) {
                            goto loc_8049038;
                        }
                        else {
                            return (unsigned int)sub_8048E50((int)param0, (int)param1, (int)__s1, (int)param3, 2, param5);
                        }
                    }
                    default: {
                        goto loc_8049189;
                    }
                }
                v6 = (unsigned int)116 | ((unsigned int)(((unsigned int)v7 >>> 8) & 0xffffff) << 8);
                goto loc_804904C;
            }
            else {
            loc_8048FB8:
                v4 = v5 + 1;
                if(v10 && ((unsigned char)(*(int*)((unsigned int)(v3 >>> 5) * 4 + param5 + 4) >> ((unsigned int)v3 & 0x1f)) & 0x1)) {
                    goto loc_8048FE1;
                }
            }
        }
    }
loc_8049006:
    if(result < param1) {
        *(char*)(result + (int)param0) = v3;
    }
    ++result;
    v5 = v4;
    goto loc_8048EE0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049490(int param0, int param1, int param2, int param3, int* param4) {
    int v0;
    int* ptr0 = param4;
    int v1 = v0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_804B900;
    }
    int* ptr1 = →__errno_location();
    int v2 = ptr1[0];
    int result = sub_8048E50(param0, param1, param2, param3, *ptr0, (int)ptr0);
    ptr1[0] = v2;
    return result;
}

int sub_80494F0(unsigned int param0, int param1, int param2, int* param3) {
    int v0;
    int v1 = v0;
    int* ptr0 = →__errno_location();
    int v2 = ptr0[0];
    if(param0 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(gvar_804B7C0 <= param0) {
        unsigned int v3 = param0 + 1;
        if(v3 > 0x1fffffff) {
            /*NO_RETURN*/ sub_8049B00();
        }
        void* __ptr = gvar_804B7CC;
        if(__ptr == &gvar_804B7C4) {
            void* ptr1 = sub_8049BA0(8);
            gvar_804B7CC = ptr1;
            __ptr = ptr1;
            unsigned int v4 = gvar_804B7C4;
            *(unsigned int*)((int)__ptr + 4) = gvar_804B7C8;
            *(unsigned int*)__ptr = v4;
        }
        void* ptr2 = sub_8049C20(__ptr, (size_t)(v3 * 8));
        gvar_804B7CC = ptr2;
        unsigned int v5 = gvar_804B7C0;
        →memset((void*)(v5 * 8 + (int)ptr2), 0, (size_t)((v3 - v5) * 8));
        gvar_804B7C0 = v3;
    }
    unsigned int v6 = gvar_804B7CC;
    int v7 = *(int*)(param0 * 8 + v6);
    int result = *(int*)(param0 * 8 + v6 + 4);
    int v8 = sub_8049490(result, v7, param1, param2, param3);
    if((unsigned int)v8 >= (unsigned int)v7) {
        unsigned int v9 = gvar_804B7CC;
        *(size_t*)(param0 * 8 + v9) = (size_t)(v8 + 1);
        if(result != 134526976) {
            sub_8049DF0((void*)result);
            v9 = gvar_804B7CC;
        }
        result = (int)sub_8049BA0((size_t)(v8 + 1));
        *(int*)(param0 * 8 + v9 + 4) = result;
        sub_8049490(result, (int)(size_t)(v8 + 1), param1, param2, param3);
    }
    int* ptr3 = →__errno_location();
    ptr3[0] = v2;
    return result;
}

int sub_8049660(unsigned int param0, int param1) {
    return sub_80494F0(param0, param1, -1, (int*)&gvar_804B900);
}

int sub_804968E(int param0) {
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
    int v1 = param1;
    sub_80496B0(&v0);
    return sub_80494F0(param0, param2, -1, &v0);
}

int sub_8049770(unsigned int param0, int param1, int param2, int param3) {
    char v0;
    int v1 = param1;
    sub_80496B0(&v0);
    return sub_80494F0(param0, param2, param3, &v0);
}

int sub_80497C0(int param0, int param1) {
    return sub_8049720(0, param0, param1);
}

int sub_80497F0(int param0, char param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = gvar_804B900;
    unsigned int v3 = gvar_804B904;
    unsigned int v4 = gvar_804B908;
    unsigned int v5 = gvar_804B90C;
    unsigned int v6 = gvar_804B910;
    unsigned int v7 = gvar_804B914;
    unsigned int v8 = gvar_804B918;
    unsigned int v9 = gvar_804B91C;
    unsigned int v10 = gvar_804B920;
    sub_8048DB0((int)&v2, param1, 1);
    return sub_80494F0(0, param0, -1, &v2);
}

int sub_8049890(int param0) {
    return sub_80497F0(param0, ':');
}

char* sub_80498B0(FILE* param0, FILE* param1, int param2, int param3, __gnuc_va_list __arg) {
    char* __msgid;
    char* ptr0;
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
    }
    else {
        →fprintf(__stream, "%s %s\n", v2, v3);
    }
    switch(v1) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            ptr0 = "Written by %s.\n";
            goto loc_8049940;
        }
        case 2: {
            __msgid = "Written by %s and %s.\n";
            break;
        }
        case 3: {
            ptr0 = "Written by %s, %s, and %s.\n";
            goto loc_8049940;
        }
        case 4: {
            ptr0 = "Written by %s, %s, %s,\nand %s.\n";
            goto loc_8049940;
        }
        case 5: {
            ptr0 = "Written by %s, %s, %s,\n%s, and %s.\n";
        loc_8049940:
            __msgid = ptr0;
            break;
        }
        case 6: {
            __msgid = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
            break;
        }
        case 7: {
            __msgid = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
            break;
        }
        case 8: {
            ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
            goto loc_8049940;
        }
        case 9: {
            ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
            goto loc_8049940;
        }
        default: {
            ptr0 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
            goto loc_8049940;
        }
    }
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
    →fputs_unlocked(gvar_804B7D0, __stream);
    char* result = __stream->_IO_write_ptr;
    if(__stream->_IO_write_end > result) {
        result[0] = 10;
        ++__stream->_IO_write_ptr;
    }
    else {
        →__overflow((_IO_FILE*)__stream, 10);
    }
    char* __s = →dcgettext(NULL, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
    →fputs_unlocked(__s, __stream);
    return result;
}

void sub_8049ABE() {
}

char* sub_8049AC0(FILE* param0, FILE* param1, int param2, int param3) {
    char v0;
    return sub_80498B0(param0, param1, param2, param3, &v0);
}

void sub_8049B00() {
    unsigned int v0 = gvar_804B924;
    if(!v0) {
    loc_8049B28:
        char* ptr0 = →dcgettext(NULL, "memory exhausted", 5);
        →error(gvar_804B7BC, 0, (char*)&gvar_804A09C, ptr0);
        /*NO_RETURN*/ →abort();
    }
    v0();
    goto loc_8049B28;
}

void* sub_8049B60(unsigned int param0, unsigned int param1) {
    if(0xffffffff / param1 >= param0) {
        void* result = →malloc((size_t)(param0 * param1));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049B00();
}

void* sub_8049BA0(size_t __size) {
    void* result = →malloc(__size);
    if(!result) {
        /*NO_RETURN*/ sub_8049B00();
    }
    return result;
}

void* sub_8049BD0(void* __ptr, unsigned int param1, unsigned int param2) {
    void* ptr0;
    void* ptr1 = ptr0;
    if(0xffffffff / param2 >= param1) {
        void* result = →realloc(__ptr, (size_t)(param1 * param2));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049B00();
}

void* sub_8049C20(void* __ptr, size_t __size) {
    void* result = →realloc(__ptr, __size);
    if(!result) {
        /*NO_RETURN*/ sub_8049B00();
    }
    return result;
}

unsigned int sub_8049C50(void* param0, unsigned int* param1, unsigned int param2) {
    unsigned int result;
    unsigned int v0;
    void* __ptr = param0;
    unsigned int v1 = v0;
    unsigned int v2 = *param1;
    unsigned int v3 = param2;
    if(__ptr) {
        if(0x7fffffff / v3 < v2) {
            /*NO_RETURN*/ sub_8049B00();
        }
        v2 *= 2;
    }
    else if(!v2) {
        result = 64 / v3;
        v2 = result ? 64 / v3: 1;
    }
    *param1 = v2;
    sub_8049C20(__ptr, (size_t)(v2 * v3));
    return result;
}

void* sub_8049CC0(void* param0, unsigned int* param1) {
    unsigned int* ptr0;
    void* __ptr = param0;
    unsigned int* ptr1 = ptr0;
    size_t __size = *param1;
    if(__ptr) {
        if(__size > 0x7fffffff) {
            /*NO_RETURN*/ sub_8049B00();
        }
        __size *= 2;
    }
    else if(!__size) {
        __size = 64;
    }
    *param1 = __size;
    return sub_8049C20(__ptr, __size);
}

void* sub_8049D40(size_t __size) {
    void* __s = sub_8049BA0(__size);
    →memset(__s, 0, __size);
    return __s;
}

void* sub_8049D80(size_t __nmemb, size_t __size) {
    if(0xffffffff / __size >= __nmemb) {
        void* result = →calloc(__nmemb, __size);
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049B00();
}

void* sub_8049DC0(void* __src, size_t __size) {
    void* __dest = sub_8049BA0(__size);
    return →memcpy(__dest, __src, __size);
}

void sub_8049DF0(void* __ptr) {
    if(__ptr) {
        →free(__ptr);
    }
}

int sub_8049E04() {
    return initializer_0();
}

int sub_8049E4C(int param0, int param1) {
    return finalizer_0(0, param1);
}

int sub_8049E7E(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v0;
    do {
        *(int*)(v4 * 4 + v2 - 228)();
        v1 = v4;
        --v4;
    }
    while(v1);
    return finalizer_0(v3, 0);
}

int sub_8049E90(int param0) {
    return →__cxa_atexit();
}

int sub_8049EC0(int param0, int param1) {
    unsigned int v0 = gvar_804B648;
    unsigned int* ptr0 = (unsigned int*)&gvar_804B648;
    while(v0 != -1) {
        --ptr0;
        v0();
        v0 = *ptr0;
    }
    return param1;
}
