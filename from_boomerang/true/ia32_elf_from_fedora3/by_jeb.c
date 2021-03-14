
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_80488D4() {
    jump gvar_804B954;
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

void sub_8048B3A() {
}

unsigned int sub_8048B3C() {
    return 0;
}

int sub_8048B68(int __status) {
    int v0;
    int v1 = v0;
    char* __format = →dcgettext(NULL, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\nExit with a status code indicating success.\n\nThese option names may not be abbreviated.\n\n", 5);
    unsigned int v2 = program_name;
    →printf(__format, v2, v2);
    char* __s = →dcgettext(NULL, "      --help     display this help and exit\n", 5);
    FILE** ptr0 = stdout;
    →fputs_unlocked(__s, ptr0[0]);
    char* __s1 = →dcgettext(NULL, "      --version  output version information and exit\n", 5);
    →fputs_unlocked(__s1, ptr0[0]);
    char* __format1 = →dcgettext(NULL, "\nReport bugs to <%s>.\n", 5);
    →printf(__format1, "bug-coreutils@gnu.org");
    /*NO_RETURN*/ →exit(__status);
}

int sub_8048C4A(int param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    program_name = *param1;
    →setlocale(6, (char*)0x804A22C);
    →bindtextdomain((char*)0x804A28D, "/usr/share/locale");
    →textdomain((char*)0x804A28D);
    sub_804A0A0(&close_stdout);
    if(param0 != 2) {
    loc_8048CC2:
        /*NO_RETURN*/ →exit(0);
    }
    char* ptr0 = →getenv("POSIXLY_CORRECT");
    char v2 = ptr0 ? 0: 1;
    if(v2) {
        char* ptr1 = *(param1 + 1);
        char* ptr2 = "--help";
        char* ptr3 = ptr1;
        char* ptr4 = ptr1;
        int v3 = (unsigned int)7 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        while(v3 != 0) {
            v2 = *ptr4 == *ptr2;
            ++ptr4;
            ++ptr2;
            --v3;
            if(!v2) {
                break;
            }
        }
        if(v2) {
            /*NO_RETURN*/ sub_8048B68(0);
        }
        char* ptr5 = "--version";
        char* ptr6 = ptr3;
        int v4 = 10;
        while(v4 != 0) {
            v2 = *ptr6 == *ptr5;
            ++ptr6;
            ++ptr5;
            --v4;
            if(!v2) {
                break;
            }
        }
        if(v2) {
            int v5 = 0;
            int v6 = "Jim Meyering";
            sub_8049CCD(*stdout, "true", "GNU coreutils", "5.2.1");
        }
    }
    goto loc_8048CC2;
}

void sub_8048D59(int param0, int param1, int param2, int param3, int param4) {
    char v0;
    int v1;
    int v2;
    *(int*)(v1 - 24) = *(int*)(*(int*)(v1 + 12) + 4);
    while(1) {
        char* ptr0 = (char*)(v2 - 5856);
        char* ptr1 = *(unsigned int*)(v1 - 24);
        int v3 = 10;
        while(v3 != 0) {
            v0 = *ptr1 == *ptr0;
            ++ptr1;
            ++ptr0;
            --v3;
            if(!v0) {
                break;
            }
        }
        if(v0) {
            param4 = 0;
            param3 = v2 - 0x16d6;
            sub_8049CCD(**(FILE***)(v2 - 12), v2 - 5813, v2 - 5827, v2 - 5833);
        }
        /*NO_RETURN*/ →exit(0);
    }
}

void sub_8048D64() {
}

unsigned int sub_8048D68(unsigned int param0) {
    gvar_804BA04 = param0;
    return param0;
}

void sub_8048E5F() {
}

void* sub_8048E70(int* param0) {
    int* ptr0 = →__errno_location();
    int v0 = ptr0[0];
    void* result = sub_8049DC5(36);
    int* ptr1 = param0;
    if(!ptr1) {
        ptr1 = (int*)&gvar_804BB20;
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

unsigned int sub_8048EEA(unsigned int* param0) {
    if(param0) {
        return *param0;
    }
    return gvar_804BB20;
}

unsigned int sub_8048F0D(unsigned int* param0, unsigned int param1) {
    if(param0) {
        unsigned int result = param1;
        *param0 = param1;
        return result;
    }
    gvar_804BB20 = param1;
    return param1;
}

int sub_8048F36(int param0, char param1, int param2) {
    int result;
    int* ptr0 = (int*)((unsigned int)(param1 >>> 5) * 4 + param0 + 4);
    if(param0) {
        int v0 = *ptr0;
        result = (v0 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *ptr0 = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v0;
    }
    else {
        int v1 = *(int*)((unsigned int)(param1 >>> 5) * 4 + &gvar_804BB24);
        result = (v1 >> ((unsigned int)param1 & 0x1f)) & 0x1;
        *(int*)((unsigned int)(param1 >>> 5) * 4 + &gvar_804BB24) = (((param2 & 0x1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v1;
    }
    return result;
}

char* sub_8048FA3(int param0, int param1) {
    int v0;
    char* __msgid;
    int v1;
    int v2 = v1;
    char* ptr0 = →dcgettext(NULL, __msgid, 5);
    char* result = ptr0;
    if(((v0 == 6 ? 1: 0) & ((unsigned int)(ptr0 == __msgid ? 1: 0) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8)))) {
        result = (char*)0x804A588;
    }
    return result;
}

unsigned int sub_8048FF6(char* param0, int param1, int param2, int param3) {
    int v0;
    size_t v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    char* ptr0;
    int v6;
    wint_t __wc;
    int v7;
    char v8;
    char* ptr1 = ptr0;
    int v9 = v6;
    unsigned int result = 0;
    char* ptr2 = NULL;
    int v10 = 0;
    int v11 = 0;
    size_t v12 = /*BAD_CALL!*/ →__ctype_get_mb_cur_max();
    int v13 = v12 == 1 ? 1: 0;
    if((unsigned int)param2 <= 6) {
        v5 = param2;
        switch(v5) {
            case 0: 
            case 1: {
                goto loc_8049076;
            }
            case 2: {
                break;
            }
            case 3: {
                if((unsigned int)v9 > 0) {
                    *ptr1 = 34;
                }
                result = 1;
                v11 = 1;
                ptr2 = (char*)0x804A588;
                v10 = 1;
                goto loc_8049076;
            }
            case 4: {
                v11 = 1;
                goto loc_8049076;
            }
            case 5: 
            case 6: {
                char* ptr3 = sub_8048FA3(v7, param2);
                char* ptr4 = sub_8048FA3(v7, param2);
                ptr2 = ptr3;
                v5 = (int)ptr4;
                for(char i = ptr3[0] ? 0: 1; !i; i = ptr2[0] ? 0: 1) {
                    if(result < (unsigned int)v9) {
                        *(char*)(result + (int)ptr1) = ptr2[0];
                    }
                    ++ptr2;
                    ++result;
                }
                v11 = 1;
                ptr2 = (char*)v5;
                int v14 = -1;
                int v15 = v5;
                while(v14 != 0) {
                    char v16 = *(char*)v15 == 0;
                    ++v15;
                    --v14;
                    if(!~v16) {
                        v10 = ~v14 - 1;
                        goto loc_8049076;
                    }
                }
                v10 = ~v14 - 1;
                goto loc_8049076;
            }
            case 8: 
            case 9: 
            case 10: 
            case 11: 
            case 12: 
            case 13: {
            loc_8049104:
                if(v13) {
                    v4 = 1;
                    unsigned short** ptr5 = /*BAD_CALL!*/ →__ctype_b_loc();
                    v5 = (unsigned int)ptr5[0][(unsigned int)v8] & 0x4000;
                    v3 = (unsigned int)ptr5[0][(unsigned int)v8] & 0x4000;
                    v5 = (unsigned int)(v11 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                    if(!((v3 ? 0: 1) & v5)) {
                    loc_8049341:
                        v5 = v0 + 1;
                        if(v11 && ((unsigned char)(*(int*)((unsigned int)(v8 >>> 5) * 4 + param3 + 4) >> ((unsigned int)v8 & 0x1f)) & 0x1)) {
                        loc_8049378:
                            if(result < (unsigned int)v9) {
                                *(char*)(result + (int)ptr1) = 92;
                            }
                            ++result;
                            v5 = v0 + 1;
                            goto loc_80491F8;
                        }
                        else {
                        loc_80491F8:
                            if(result < (unsigned int)v9) {
                                *(char*)(result + (int)ptr1) = v8;
                            }
                            ++result;
                            v0 = v5;
                            if(param1 != -1) {
                                goto loc_8049087;
                            }
                            else {
                                goto loc_8049222;
                            }
                        }
                    }
                }
                else {
                    int v17 = 0;
                    mbstate_t* __p = &v17;
                    int v18 = 0;
                    v4 = 0;
                    v3 = 1;
                    if(param1 == -1) {
                        int v19 = -1;
                        char* ptr6 = param0;
                        while(v19 != 0) {
                            char v20 = *ptr6 == 0;
                            ++ptr6;
                            --v19;
                            if(!~v20) {
                                break;
                            }
                        }
                        param1 = ~v19 - 1;
                    }
                    int v21 = v0 + (int)param0;
                    wchar_t* __pwc = &__wc;
                    int v22 = v21;
                loc_80492BA:
                    do {
                        v2 = (int)(v4 + v0);
                        v1 = /*BAD_CALL!*/ →mbrtowc(__pwc, (char*)(v2 + (int)param0), (size_t)(param1 - v2), __p);
                        if(v1) {
                            if(v1 == -1) {
                                v3 = 0;
                            }
                            else if(v1 != -2) {
                                int v23 = →iswprint(__wc);
                                v4 = (unsigned int)(v1 + v4);
                                v3 &= 0 - (v23 ? 1: 0);
                                v1 = (size_t)→mbsinit(__p);
                                if(!v1) {
                                    goto loc_80492BA;
                                }
                                else {
                                    break;
                                }
                            }
                            else {
                                char v24 = (unsigned int)v2 < (unsigned int)param1;
                                v3 = 0;
                                if(!v24) {
                                    break;
                                }
                                else {
                                    v5 = v22;
                                    if(!*(char*)(v5 + v4)) {
                                        break;
                                    }
                                    else {
                                        do {
                                            ++v4;
                                            if(v4 + v0 >= (unsigned int)param1) {
                                                break loc_80492BA;
                                            }
                                        }
                                        while(*(char*)(v22 + v4));
                                        if(v4 <= 1) {
                                            goto loc_804932A;
                                        }
                                        else {
                                        loc_8049145:
                                            unsigned int v25 = v4 + v0;
                                            while(1) {
                                                if(((v3 ? 0: 1) & ((unsigned int)(v11 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8)))) {
                                                    if(result < (unsigned int)v9) {
                                                        *(char*)(result + (int)ptr1) = 92;
                                                    }
                                                    ++result;
                                                    if(result < (unsigned int)v9) {
                                                        *(char*)(result + (int)ptr1) = (v8 >>> 6) + 48;
                                                    }
                                                    ++result;
                                                    if(result < (unsigned int)v9) {
                                                        *(char*)(result + (int)ptr1) = ((v8 >>> 3) & 0x7) + 48;
                                                    }
                                                    ++result;
                                                    v8 = (v8 & 0x7) + 48;
                                                }
                                                v5 = v0 + 1;
                                                if(v25 <= (unsigned int)v5) {
                                                    goto loc_80491F8;
                                                }
                                                else {
                                                    if(result < (unsigned int)v9) {
                                                        *(char*)(result + (int)ptr1) = v8;
                                                    }
                                                    ++result;
                                                    v0 = v5;
                                                    v8 = *(char*)(v5 + (int)param0);
                                                }
                                            }
                                            goto loc_8049087;
                                        }
                                    }
                                }
                            }
                            if(v4 <= 1) {
                                goto loc_804932A;
                            }
                            else {
                                goto loc_8049145;
                            }
                        }
                    }
                    while(v1);
                    if(v4 <= 1) {
                    loc_804932A:
                        v5 = (unsigned int)(v11 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                        if(!((v3 ? 0: 1) & v5)) {
                            goto loc_8049341;
                        }
                    }
                }
                goto loc_8049145;
            }
            default: {
                throw 0;
            }
        }
        v5 = v9;
        if((unsigned int)v5 > 0) {
            *ptr1 = 39;
        }
        result = 1;
        ptr2 = (char*)0x804A58A;
        v10 = 1;
        goto loc_8049076;
    }
    else {
    loc_8049076:
        v0 = 0;
        if(param1 != -1) {
        loc_8049087:
            v5 = param1;
            if(v5 == v0) {
                goto loc_804922D;
            }
        }
        else {
        loc_8049222:
            if(!*(char*)(v0 + (int)param0)) {
                goto loc_804922D;
            }
        }
        v5 = (unsigned int)(v11 ? 1: 0) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        if(((v10 ? 1: 0) & v5) && (unsigned int)(v10 + v0) <= (unsigned int)param1) {
            v2 = v0 + (int)param0;
            int v26 = v10;
            char v27 = 1;
            char* ptr7 = ptr2;
            while(v26 != 0) {
                v27 = *(char*)v2 == ptr7[0];
                ++v2;
                ++ptr7;
                --v26;
                if(!v27) {
                    break;
                }
            }
            if(v27) {
                if(result < (unsigned int)v9) {
                    *(char*)(result + (int)ptr1) = 92;
                }
                ++result;
            }
        }
        char v28 = *(char*)(v0 + (int)param0);
        v8 = *(char*)(v0 + (int)param0);
        switch((unsigned int)v28) {
            case 0: {
                v5 = v0 + 1;
                if(!v11) {
                    goto loc_80491F8;
                }
                else {
                    if(result < (unsigned int)v9) {
                        *(char*)(result + (int)ptr1) = 92;
                    }
                    ++result;
                    if(result < (unsigned int)v9) {
                        *(char*)(result + (int)ptr1) = 48;
                    }
                    ++result;
                    if(result < (unsigned int)v9) {
                        *(char*)(result + (int)ptr1) = 48;
                    }
                    ++result;
                    v8 = 48;
                    goto loc_8049341;
                }
            }
            case 7: {
                v1 = 97;
                goto loc_80493E2;
            }
            case 8: {
                v1 = 98;
                goto loc_80493E2;
            }
            case 9: {
                v1 = 116;
                goto loc_80493D7;
            }
            case 10: {
                v1 = 110;
                goto loc_80493D7;
            }
            case 11: {
                v1 = 118;
                goto loc_80493E2;
            }
            case 12: {
                v1 = 102;
                goto loc_80493E2;
            }
            case 13: {
                v1 = 114;
            loc_80493D7:
                if(param2 == 1) {
                    return (unsigned int)sub_8048FF6((int)param0, param1, 2, param3);
                }
            loc_80493E2:
                v5 = v0 + 1;
                if(!v11) {
                    goto loc_80491F8;
                }
                else {
                    v8 = (unsigned char)v1;
                    goto loc_8049378;
                }
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
                goto loc_804939E;
            }
            case 35: 
            case 126: {
                break;
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
                goto loc_8049341;
            }
            case 39: {
                goto loc_8049449;
            }
            case 63: {
                if(param2 != 1) {
                    if(param2 == 3) {
                        int v29 = v0 + 2;
                        if((unsigned int)v29 < (unsigned int)param1) {
                            v2 = v0;
                            if(*(char*)((char*)(v2 + (int)param0) + 1) == 63) {
                                char v30 = *(char*)((char*)(v2 + (int)param0) + 2);
                                switch((size_t)((int)v30 - 33)) {
                                    case 0: 
                                    case 6: 
                                    case 7: 
                                    case 8: 
                                    case 12: 
                                    case 14: 
                                    case 27: 
                                    case 28: 
                                    case 29: {
                                        v8 = v30;
                                        v0 = v29;
                                        if(result < (unsigned int)v9) {
                                            *(char*)(result + (int)ptr1) = 63;
                                        }
                                        ++result;
                                        if(result < (unsigned int)v9) {
                                            *(char*)(result + (int)ptr1) = 92;
                                        }
                                        ++result;
                                        if(result < (unsigned int)v9) {
                                            *(char*)(result + (int)ptr1) = 63;
                                        }
                                        ++result;
                                    }
                                    default: {
                                        goto loc_8049341;
                                    }
                                }
                            loc_8049449:
                                if(param2 == 1) {
                                    return (unsigned int)sub_8048FF6((int)param0, param1, 2, param3);
                                }
                                else if(param2 == 2) {
                                    if(result < (unsigned int)v9) {
                                        *(char*)(result + (int)ptr1) = 39;
                                    }
                                    ++result;
                                    if(result < (unsigned int)v9) {
                                        *(char*)(result + (int)ptr1) = 92;
                                    }
                                    ++result;
                                    if(result < (unsigned int)v9) {
                                        *(char*)(result + (int)ptr1) = 39;
                                    }
                                    ++result;
                                }
                            }
                        }
                    }
                    goto loc_8049341;
                }
                else {
                    return (unsigned int)sub_8048FF6((int)param0, param1, 2, param3);
                }
            }
            case 92: {
                v1 = (size_t)v8;
                goto loc_80493D7;
            }
            default: {
                goto loc_8049104;
            }
        }
        if(v0) {
            goto loc_8049341;
        }
        else {
        loc_804939E:
            if(param2 != 1) {
                goto loc_8049341;
            }
            else {
                return (unsigned int)sub_8048FF6((int)param0, param1, 2, param3);
            }
        }
    }
loc_804922D:
    if(ptr2) {
        for(char j = ptr2[0]; j; j = ptr2[0]) {
            if(result < (unsigned int)v9) {
                *(char*)(result + (int)ptr1) = j;
            }
            ++result;
            ++ptr2;
        }
    }
    if(result < (unsigned int)v9) {
        *(char*)(result + (int)ptr1) = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80496C3(int param0, int param1, int param2, int param3, int* param4) {
    int* ptr0 = param4;
    if(!ptr0) {
        ptr0 = (int*)&gvar_804BB20;
    }
    int* ptr1 = →__errno_location();
    int v0 = ptr1[0];
    int result = sub_8048FF6(param2, param3, *ptr0, (int)ptr0);
    ptr1[0] = v0;
    return result;
}

int sub_8049721(int param0, int* param1) {
    unsigned int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = v0;
    int v5 = v1;
    int* ptr0 = →__errno_location();
    int v6 = ptr0[0];
    if(v4 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(gvar_804B9DC <= v4) {
        unsigned int v7 = v4 + 1;
        if(v7 > 0x1fffffff) {
            /*NO_RETURN*/ sub_8049D10();
        }
        void* __ptr = gvar_804B9E8;
        if(__ptr == &gvar_804B9E0) {
            void* ptr1 = sub_8049DC5(8);
            unsigned int v8 = gvar_804B9E4;
            __ptr = ptr1;
            gvar_804B9E8 = ptr1;
            *(unsigned int*)__ptr = gvar_804B9E0;
            *(unsigned int*)((int)__ptr + 4) = v8;
        }
        void* ptr2 = sub_8049E3F(__ptr, (size_t)(v7 * 8));
        unsigned int v9 = gvar_804B9DC;
        gvar_804B9E8 = ptr2;
        →memset((void*)(v9 * 8 + (int)ptr2), 0, (size_t)((v7 - v9) * 8));
        gvar_804B9DC = v7;
    }
    unsigned int v10 = gvar_804B9E8;
    int v11 = *(int*)(v4 * 8 + v10);
    int result = *(int*)(v4 * 8 + v10 + 4);
    int v12 = sub_80496C3(result, v11, v5, param0, param1);
    if((unsigned int)v12 >= (unsigned int)v11) {
        unsigned int v13 = gvar_804B9E8;
        v11 = v12 + 1;
        *(int*)(v4 * 8 + v13) = v12 + 1;
        if(result != 134527520) {
            sub_8049FE0((void*)result);
            v13 = gvar_804B9E8;
        }
        void* ptr3 = sub_8049DC5((size_t)v11);
        *(void**)(v4 * 8 + v13 + 4) = ptr3;
        result = (int)ptr3;
        sub_80496C3(result, v11, v5, param0, param1);
    }
    int* ptr4 = →__errno_location();
    ptr4[0] = v6;
    return result;
}

int sub_80498AE(int param0, int param1) {
    return sub_8049721(-1, (int*)&gvar_804BB20);
}

int sub_80498DA(int param0) {
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

int sub_804995F(int param0, int param1) {
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
    return sub_804995F(0, param0);
}

int sub_80499F0(int param0, char param1) {
    unsigned int v0 = gvar_804BB20;
    unsigned int v1 = gvar_804BB24;
    unsigned int v2 = gvar_804BB28;
    unsigned int v3 = gvar_804BB2C;
    unsigned int v4 = gvar_804BB30;
    unsigned int v5 = gvar_804BB34;
    unsigned int v6 = gvar_804BB38;
    unsigned int v7 = gvar_804BB3C;
    unsigned int v8 = gvar_804BB40;
    sub_8048F36((int)&v0, param1, 1);
    return sub_8049721(-1, &v0);
}

int sub_8049A8B(int param0) {
    return sub_80499F0(param0, ':');
}

int sub_8049AC0(FILE* param0, int param1, int param2, int param3, __gnuc_va_list __arg) {
    char* __msgid;
    int v0;
    unsigned int v1 = 0;
    int v2 = v0;
    FILE* __stream = param0;
    __gnuc_va_list v3 = __arg + 4;
    __gnuc_va_list v4 = __arg;
    while(*(int*)v4) {
        v4 = v3;
        ++v1;
        v3 += 4;
    }
    if(param1) {
        →fprintf(__stream, "%s (%s) %s\n", param1, param2, param3);
    loc_8049B2F:
        switch(v1) {
            case 0: {
                /*NO_RETURN*/ →abort();
                →fprintf(__stream, "%s %s\n", param2, param3);
                goto loc_8049B2F;
            }
            case 1: {
                __msgid = "Written by %s.\n";
            loc_8049B4A:
                char* __format = →dcgettext(NULL, __msgid, 5);
                →vfprintf(__stream, __format, __arg);
                char* ptr0 = __stream->_IO_write_ptr;
                if(__stream->_IO_write_end > ptr0) {
                    ptr0[0] = 10;
                    ++__stream->_IO_write_ptr;
                }
                else {
                    →__overflow((_IO_FILE*)__stream, 10);
                }
                →fputs_unlocked(version_etc_copyright, __stream);
                char* ptr1 = __stream->_IO_write_ptr;
                if(__stream->_IO_write_end > ptr1) {
                    ptr1[0] = 10;
                    ++__stream->_IO_write_ptr;
                }
                else {
                    →__overflow((_IO_FILE*)__stream, 10);
                }
                char* __s = →dcgettext(NULL, "This is free software; see the source for copying conditions.  There is NO\nwarranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 5);
                return →fputs_unlocked(__s, __stream);
            }
            case 2: {
                __msgid = "Written by %s and %s.\n";
                goto loc_8049B4A;
            }
            case 3: {
                __msgid = "Written by %s, %s, and %s.\n";
                goto loc_8049B4A;
            }
            case 4: {
                __msgid = "Written by %s, %s, %s,\nand %s.\n";
                goto loc_8049B4A;
            }
            case 5: {
                __msgid = "Written by %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049B4A;
            }
            case 6: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, and %s.\n";
                goto loc_8049B4A;
            }
            case 7: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n";
                goto loc_8049B4A;
            }
            case 8: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n";
                goto loc_8049B4A;
            }
            case 9: {
                __msgid = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
                goto loc_8049B4A;
            }
        }
        __msgid = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        goto loc_8049B4A;
    }
    else {
        →fprintf(__stream, "%s %s\n", param2, param3);
        goto loc_8049B2F;
    }
}

int sub_8049CCD(FILE* param0, int param1, int param2, int param3) {
    char v0;
    return sub_8049AC0(param0, param1, param2, param3, &v0);
}

void sub_8049D10() {
    unsigned int v0 = xalloc_fail_func;
    if(!v0) {
    loc_8049D47:
        char* ptr0 = →dcgettext(NULL, (char*)&xalloc_msg_memory_exhausted, 5);
        →error(exit_failure, 0, (char*)0x804A2AC, ptr0);
        /*NO_RETURN*/ →abort();
    }
    v0();
    goto loc_8049D47;
}

void* sub_8049D82(unsigned int param0, unsigned int param1) {
    if(0xffffffff / param1 >= param0) {
        void* result = →malloc((size_t)(param0 * param1));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049D10();
}

void* sub_8049DC5(size_t __size) {
    void* result = →malloc(__size);
    if(!result) {
        /*NO_RETURN*/ sub_8049D10();
    }
    return result;
}

void* sub_8049DF5(void* __ptr, unsigned int param1, unsigned int param2) {
    int v0;
    int v1 = v0;
    if(0xffffffff / param2 >= param1) {
        void* result = →realloc(__ptr, (size_t)(param1 * param2));
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049D10();
}

void* sub_8049E3F(void* __ptr, size_t __size) {
    int v0;
    int v1 = v0;
    void* result = →realloc(__ptr, __size);
    if(!result) {
        /*NO_RETURN*/ sub_8049D10();
    }
    return result;
}

void* sub_8049E75(void* __ptr, unsigned int* param1, unsigned int param2) {
    int v0;
    int v1 = v0;
    unsigned int v2 = param2;
    unsigned int v3 = *param1;
    if(__ptr) {
        if(0x7fffffff / v2 < v3) {
            /*NO_RETURN*/ sub_8049D10();
        }
        v3 *= 2;
    }
    else if(!v3) {
        v3 = 64 / v2 + (64 / v2 ? 0: 1);
    }
    *param1 = v3;
    return sub_8049E3F(__ptr, (size_t)(v3 * v2));
}

void* sub_8049EE2(void* param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    void* __ptr = param0;
    size_t __size = *param1;
    if(__ptr) {
        if(__size >= 0x80000000) {
            /*NO_RETURN*/ sub_8049D10();
        }
        __size *= 2;
    }
    else if(!__size) {
        __size = 64;
    }
    *param1 = __size;
    return sub_8049E3F(__ptr, __size);
}

void* sub_8049F27(size_t __size) {
    void* __s = sub_8049DC5(__size);
    return →memset(__s, 0, __size);
}

void* sub_8049F60(size_t __nmemb, size_t __size) {
    if(0xffffffff / __size >= __nmemb) {
        void* result = →calloc(__nmemb, __size);
        if(result) {
            return result;
        }
    }
    /*NO_RETURN*/ sub_8049D10();
}

void* sub_8049FA5(void* __src, size_t __size) {
    void* __dest = sub_8049DC5(__size);
    return →memcpy(__dest, __src, __size);
}

int sub_8049FE0(void* __ptr) {
    int result;
    if(__ptr) {
        →free(__ptr);
    }
    return result;
}

unsigned int sub_804A008(int param0, int param1) {
    initializer_0(param0, param1);
    return 0;
}

void sub_804A05A() {
}

int* sub_804A05C() {
    for(int i = -1; i != -1; --i) {
        *(int*)(i * 4 + (int)&gvar_804B82C)();
    }
    return finalizer_0();
}

int sub_804A0A0(int param0) {
    return →__cxa_atexit();
}

int sub_804A0D0(int param0, int param1) {
    unsigned int* ptr0 = (unsigned int*)&gvar_804B82C;
    for(unsigned char i = *(int*)&gvar_804B82C; i != -1; i = *ptr0) {
        --ptr0;
        i();
    }
    return param1;
}
