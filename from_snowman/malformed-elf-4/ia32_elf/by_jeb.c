
int start(int param0, int param1) {
    →__libc_start_main();
    hlt();
}

void sub_80494D6() {
    jump gvar_8061FFC;
}

int sub_8049B80(int ___argc, char** param1) {
    unsigned int v0;
    char v1;
    unsigned int v2;
    int v3;
    short v4;
    int v5;
    int v6 = v5;
    int v7 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char** ___argv = (char**)param1;
    sub_80555D0(param1[0]);
    →setlocale(6, (char*)&gvar_805DA85);
    →bindtextdomain("coreutils", "/usr/share/locale");
    →textdomain("coreutils");
    gvar_80622CC = 2;
    sub_8059FC0(&gvar_8051FD0);
    unsigned int v8 = gvar_80622C0;
    gvar_8062348 = 0;
    gvar_806234C = 1;
    gvar_8062350 = 0;
    gvar_8062354 = 0x80000000;
    gvar_8062358 = 0xffffffff;
    gvar_80624E4 = 0;
    if(v8 == 2) {
        gvar_8062360 = 2;
        sub_8056430(NULL, 5);
    }
    else if(v8 != 3) {
        if(v8 != 1) {
            /*NO_RETURN*/ →abort();
        }
        int v9 = →isatty(1);
        if(v9) {
            gvar_8062360 = 2;
            gvar_80624E4 = 1;
        }
        else {
            gvar_8062360 = 1;
        }
    }
    else {
        gvar_8062360 = 0;
        sub_8056430(NULL, 5);
    }
    gvar_80624E8 = 0;
    gvar_806244C = 0;
    gvar_80624EC = 0;
    gvar_80624ED = 0;
    gvar_8062451 = 0;
    gvar_8062408 = 0;
    gvar_80624EE = 0;
    gvar_8062400 = 1;
    gvar_806240C = 0;
    gvar_8062404 = 0;
    gvar_80624F0 = 0;
    gvar_80624F4 = 0;
    gvar_80624F8 = 0;
    gvar_8062450 = 0;
    char* __s = →getenv("QUOTING_STYLE");
    if(__s) {
        int v10 = sub_8051C00(__s, (unsigned int*)&gvar_805D800, (void*)&gvar_805D7E0, 4);
        if(v10 >= 0) {
            sub_8056430(NULL, *(int*)(v10 * 4 + (int)&gvar_805D7E0));
        }
        else {
            int v11 = sub_8056780((int)__s);
            char* __format = →dcgettext(NULL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5);
            →error(0, 0, __format, v11);
        }
    }
    char* ptr0 = →getenv("LS_BLOCK_SIZE");
    sub_8054660(ptr0, (int*)&gvar_80624FC, (int*)&gvar_8062500);
    if(!ptr0) {
        char* ptr1 = →getenv((char*)0x805A177);
        if(ptr1) {
            goto loc_8049D8D;
        }
    }
    else {
    loc_8049D8D:
        unsigned int v12 = gvar_8062504;
        gvar_80622A0 = gvar_8062500;
        gvar_80622A4 = v12;
    }
    gvar_8062508 = 80;
    char* ptr2 = →getenv("COLUMNS");
    char* ptr3 = ptr2;
    if(!ptr2 || !ptr2[0]) {
    loc_8049DDD:
        int v13 = →ioctl(1, 21523, &v1);
        if(v13 != -1 && v4) {
            gvar_8062508 = (unsigned int)v4;
        }
        char* ptr4 = →getenv("TABSIZE");
        gvar_806250C = 8;
        if(ptr4) {
            int v14 = sub_8058C50(ptr4, NULL, 0, &v2, NULL);
            if(!v14) {
                gvar_806250C = v2;
            }
            else {
                int v15 = sub_8056780((int)ptr4);
                char* __format1 = →dcgettext(NULL, "ignoring invalid tab size in environment variable TABSIZE: %s", 5);
                →error(0, 0, __format1, v15);
            }
        }
        v0 = 0;
        ptr3 = (char*)&v3;
    }
    else {
        int v16 = sub_8058C50(ptr3, NULL, 0, &v2, NULL);
        if(!v16 && v2) {
            gvar_8062508 = v2;
        }
        else {
            int v17 = sub_8056780((int)ptr3);
            char* __format2 = →dcgettext(NULL, "ignoring invalid width in environment variable COLUMNS: %s", 5);
            →error(0, 0, __format2, v17);
        }
        goto loc_8049DDD;
    }
loc_8049E77:
    v3 = -1;
    int v18 = →getopt_long(___argc, ___argv, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", (option*)&gvar_805AD40, &v3);
    if(v18 == -1) {
        unsigned int v19 = gvar_8062508;
        unsigned int v20 = 1;
        if(v19 > 2) {
            v20 = v19 / 3;
        }
        gvar_8062514 = v20;
        /*NO_RETURN*/ sub_80563C0(0);
    }
    else if((unsigned int)(v18 + 131) > 0x112) {
    loc_8049EBE:
        /*NO_RETURN*/ sub_80513A0(2);
    }
    switch((unsigned int)(v18 + 131)) {
        case 0: {
            goto loc_804A176;
        }
        case 1: {
            break;
        }
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
        case 13: 
        case 14: 
        case 15: {
            goto loc_8049EBE;
        }
        default: {
            throw 0;
        }
    }
    /*NO_RETURN*/ sub_80513A0(0);
loc_804A176:
    unsigned int v21 = gvar_80622C0;
    char* ptr5 = (char*)0x805A13F;
    char* ptr6 = gvar_80622C4;
    if(v21 != 1) {
        ptr5 = v21 == 2 ? (char*)&gvar_805A150: (char*)&gvar_805A14F;
    }
    char* ptr7 = ptr5;
    FILE* __stream = stdout;
    int v22 = 0;
    unsigned int v23 = "David MacKenzie";
    size_t v24 = "Richard M. Stallman";
    sub_8058980(__stream, ptr7, (char*)&gvar_805A134, ptr6);
    /*NO_RETURN*/ →exit(0);
    v0 = optarg;
    goto loc_8049E77;
}

void sub_804BE60() {
}

unsigned int sub_804BEC0() {
    return 0;
}

int sub_804BF90() {
    char v0;
    int v1;
    unsigned int v2 = *(unsigned int*)(v1 * 8 + (int)&gvar_80621E0);
    char* ptr0 = *(unsigned int*)(v1 * 8 + (int)&gvar_80621E4);
    int result = 0;
    if(v2) {
        if(v2 == 1) {
            return *ptr0 == 48 ? 0: 1;
        }
        v0 = v2 == 2;
        result = 1;
        if(v0) {
            char* ptr1 = (char*)&gvar_805A068;
            int v3 = 2;
            while(v3 != 0) {
                v0 = *ptr0 == *ptr1;
                ++ptr0;
                ++ptr1;
                --v3;
                if(!v0) {
                    break;
                }
            }
            return v0 ? 0: 1;
        }
    }
    return result;
}

int sub_804C010(int* param0) {
    int v0;
    int v1;
    int v2;
    unsigned int* ptr0;
    int v3;
    int v4;
    unsigned int* ptr1;
    char v5;
    unsigned int* ptr2;
    unsigned int v6 = 0;
    int v7 = 0;
    int v8 = v4;
    char* ptr3 = *ptr2;
    char v9 = v5;
    char* ptr4 = *ptr1;
    unsigned int* ptr5 = ptr2;
    int result = 0;
    unsigned int* ptr6 = ptr1;
loc_804C02C:
    char v10 = v6 < 2;
    if(v6 == 2) {
    loc_804C0A7:
        int i;
    alab1:
        for(i = (unsigned int)*ptr4; (unsigned char)((unsigned char)i + 208) <= 7; i = (unsigned int)*ptr4) {
            result = result * 8 + i - 48;
            ++ptr4;
            goto loc_804C0A7;
        loc_804C125:
            do {
                switch(v1) {
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
                        goto loc_804C1CB;
                    }
                    case 10: 
                    case 11: 
                    case 12: 
                    case 13: 
                    case 14: 
                    case 15: {
                        break alab1;
                    }
                    default: {
                        throw 0;
                    }
                }
                goto loc_804C130;
            loc_804C1CB:
                ++ptr4;
                result = result * 16 + v2 - 48;
                v2 = (unsigned int)*ptr4;
                v1 = v2 - 48;
            }
            while((unsigned char)v1 <= 54);
        }
    loc_804C0B4:
        *ptr3 = (unsigned char)result;
        v3 = (unsigned int)*ptr4;
        ++ptr3;
        ++v7;
        int v11 = v3;
        char v12 = (unsigned char)v11 < 61;
        char v13 = ((((unsigned char)v11 - 61) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x3d)) < 0;
        if((unsigned char)v11 == 61) {
        loc_804C0CB:
            if(!v9) {
                ++ptr4;
                *ptr3 = (unsigned char)v3;
                ++v7;
                ++ptr3;
                goto loc_804C040;
            }
            else {
                ptr0 = ptr6;
                result = 1;
            }
            *ptr5 = ptr3;
            *ptr0 = ptr4;
            *param0 = v7;
            return result;
        }
    loc_804C04A:
        if(v12 == v13) {
            int v14 = v3;
            if((unsigned char)v14 == 92) {
            loc_804C130:
                ++ptr4;
            loc_804C133:
                int v15 = (unsigned int)*ptr4;
                if((unsigned char)v15 <= 120) {
                    switch(v15) {
                        case 0: {
                            goto loc_804C213;
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
                        case 13: 
                        case 14: 
                        case 15: {
                            goto loc_804C13D;
                        }
                        default: {
                            throw 0;
                        }
                    }
                    v3 = v0 & 0x1f;
                    ++ptr4;
                    *ptr3 = (unsigned char)v3;
                    ++v7;
                    ++ptr3;
                    goto loc_804C040;
                loc_804C213:
                    v6 = 6;
                }
                else {
                loc_804C13D:
                    result = v15;
                    *ptr3 = (unsigned char)result;
                    ++v7;
                    ++ptr3;
                    v6 = 0;
                }
                ++ptr4;
                if(v6 <= 4) {
                    goto loc_804C02C;
                }
                else {
                    ptr0 = ptr6;
                    result = (unsigned int)(v6 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
                    *ptr5 = ptr3;
                    *ptr0 = ptr4;
                    *param0 = v7;
                    return result;
                }
            }
            else if((unsigned char)v14 != 94) {
                ++ptr4;
                *ptr3 = (unsigned char)v3;
                ++v7;
                ++ptr3;
                goto loc_804C040;
            }
            else {
                ++ptr4;
                v0 = (unsigned int)*ptr4;
                if((unsigned char)((unsigned char)v0 + 192) <= 62) {
                    v3 = v0 & 0x1f;
                    ++ptr4;
                    *ptr3 = (unsigned char)v3;
                    ++v7;
                    ++ptr3;
                    goto loc_804C040;
                }
                else {
                loc_804C07F:
                    if((unsigned char)v0 != 63) {
                        ptr0 = ptr6;
                        result = 0;
                        *ptr5 = ptr3;
                        *ptr0 = ptr4;
                        *param0 = v7;
                        return result;
                    }
                    *ptr3 = 127;
                    ++v7;
                    ++ptr3;
                loc_804C040:
                    v3 = (unsigned int)*ptr4;
                    v11 = (unsigned int)*ptr4;
                    v12 = *ptr4 < 61;
                    v13 = ((((unsigned char)v11 - 61) ^ (unsigned char)v11) & ((unsigned char)v11 ^ 0x3d)) < 0;
                    if((unsigned char)v11 == 61) {
                        goto loc_804C0CB;
                    }
                    else {
                        goto loc_804C04A;
                    }
                }
            }
        }
        else if(!(unsigned char)v11) {
            ptr0 = ptr6;
            v6 = 5;
            result = (unsigned int)(v6 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
            *ptr5 = ptr3;
            *ptr0 = ptr4;
            *param0 = v7;
            return result;
        }
        if((unsigned char)v11 != 58) {
            ++ptr4;
            *ptr3 = (unsigned char)v3;
            ++v7;
            ++ptr3;
            goto loc_804C040;
        }
        else {
            ptr0 = ptr6;
            v6 = 5;
            result = (unsigned int)(v6 == 6 ? 0: 1) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
        }
    }
    else if(v10 == 0) {
        if(v6 == 3) {
            v2 = (unsigned int)*ptr4;
            v1 = v2 - 48;
            if((unsigned char)v1 > 54) {
                goto loc_804C0B4;
            }
            else {
                goto loc_804C125;
            }
        }
        else if(v6 != 4) {
            goto loc_804C040;
        }
        else {
            v0 = (unsigned int)*ptr4;
            if((unsigned char)((unsigned char)v0 + 192) > 62) {
                goto loc_804C07F;
            }
            else {
                v3 = v0 & 0x1f;
                ++ptr4;
                *ptr3 = (unsigned char)v3;
                ++v7;
                ++ptr3;
                goto loc_804C040;
            }
        }
    }
    else if(v6 == 1) {
        goto loc_804C133;
    }
    else {
        goto loc_804C040;
    }
    *ptr5 = ptr3;
    *ptr0 = ptr4;
    *param0 = v7;
    return result;
}

int sub_804C280() {
    /*NO_RETURN*/ sub_8058A70(8);
}

int sub_804C2B0(int param0, int param1) {
    /*NO_RETURN*/ sub_8058A70(16);
}

int sub_804C320() {
    int result;
    if(gvar_80624D4) {
        /*NO_RETURN*/ →free(**gvar_8062CB4);
    }
    gvar_80624D4 = 0;
    gvar_8062CB8 = 0;
    gvar_8062CBC = 0;
    gvar_8062CC0 = 0;
    gvar_8062CC4 = 0;
    gvar_8062CC8 = 0;
    gvar_8062CCC = 0;
    gvar_8062CD0 = 0;
    gvar_8062CD4 = 0;
    gvar_8062CD8 = 0;
    gvar_8062CDC = 0;
    gvar_8062CE0 = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_804C3F0() {
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3 = gvar_80624D4;
    unsigned int result = (unsigned int)((v3 >>> 1) + v3);
    if(gvar_8062CE4 < result) {
        /*NO_RETURN*/ →free(gvar_8062CB4);
    }
    if(v3) {
        unsigned int v4 = gvar_8062CB4;
        result = 0;
        unsigned int v5 = gvar_80624D0;
        do {
            *(unsigned int*)(result * 4 + v4) = v5;
            ++result;
            v5 -= -128;
        }
        while(result != v3);
    }
    if(gvar_806244C != -1) {
        int v6 = →_setjmp((__jmp_buf_tag*)0x8062D00);
        unsigned int v7 = gvar_806244C;
        if(!v6) {
            v2 = gvar_80624D4;
            v0 = 0;
            v1 = gvar_8062CB4;
        }
        else if(v7 == 3) {
            /*NO_RETURN*/ →__assert_fail("sort_type != sort_version", "ls.c", 3427, "sort_files");
        }
        else {
            v2 = gvar_80624D4;
            v6 = 0;
            v1 = gvar_8062CB4;
            unsigned int v8 = gvar_80624D0;
            if(v2) {
                do {
                    *(unsigned int*)(v6 * 4 + v1) = v8;
                    ++v6;
                    v8 -= -128;
                }
                while(v6 != v2);
            }
            v0 = 1;
        }
        result = (unsigned int)sub_80555B0((int)v1, (int)v2, *(int*)((((((v7 == 4 ? gvar_80624E8: 0) + v7) * 2 + v0) * 2 + (unsigned int)gvar_80624EC) * 2 + (unsigned int)gvar_8062453) * 4 + &gvar_805B1C0));
    }
    return result;
}

unsigned int sub_804C810(int param0, unsigned int param1) {
    char v0;
    int v1;
    int v2;
    char* ptr0 = (char*)v1;
    unsigned int v3 = param1;
    int v4 = v2;
    if(v1 && gvar_8062410) {
        /*NO_RETURN*/ sub_804C2B0(0, v1);
    }
    unsigned int v5 = gvar_80624D4;
    int v6 = (int)(unsigned int)(v3 & 0xFF);
    int v7 = v5 * 4 - 4;
    unsigned int v8 = v5;
    while(v8) {
        --v8;
        unsigned int* ptr1 = *(unsigned int*)(gvar_8062CB4 + v7);
        int v9 = *(int*)(ptr1 + 26);
        if((unsigned int)((v9 == 3 ? 1: 0) | (v9 == 9 ? 1: 0))) {
            char* ptr2 = *ptr1;
            if(ptr0) {
                char* ptr3 = sub_80520B0(ptr2);
                if(ptr3[0] != 46) {
                    goto loc_804C8AD;
                }
                else {
                    v0 = *(char*)((char*)((ptr3[1] == 46 ? 1: 0) + (int)ptr3) + 1);
                }
                if((unsigned int)((v0 == 47 ? 1: 0) | (v0 ? 0: 1))) {
                    goto loc_804C868;
                }
                else {
                loc_804C8AD:
                    char* ptr4 = *ptr1;
                    if(ptr4[0] != 47) {
                        /*NO_RETURN*/ sub_80522E0(ptr0, ptr4, 0);
                        break;
                    }
                }
            }
            /*NO_RETURN*/ sub_804C2B0(v6, *(int*)(ptr1 + 1));
        }
    loc_804C868:
        v7 -= 4;
    }
    unsigned int v10 = v8;
    unsigned int v11 = gvar_80624D4;
    unsigned int result = 0;
    if(v11) {
        unsigned int v12 = gvar_8062CB4;
        result = v10;
        do {
            int v13 = *(int*)(v10 * 4 + v12);
            char v14 = *(int*)(v13 + 104) == 9;
            *(int*)(result * 4 + v12) = v13;
            ++v10;
            result += v14 ? 0: 1;
        }
        while(v10 != v11);
    }
    gvar_80624D4 = result;
    return result;
}

_IO_FILE* sub_804C970(int param0, char* param1) {
    int v0;
    _IO_FILE* result;
    int v1 = v0;
    _IO_FILE* ptr0 = result;
    if((unsigned int)result < (unsigned int)param1) {
    loc_804C9C1:
        do {
            unsigned int v2 = gvar_806250C;
            if(!v2) {
                ptr0 = (_IO_FILE*)((char*)ptr0 + 1);
                goto loc_804C9CE;
            }
            else {
                _IO_FILE* ptr1 = (_IO_FILE*)((char*)ptr0 + 1);
                if((int*)((int)(unsigned int)param1 / v2) > (int*)((int)(unsigned int)ptr1 / v2)) {
                    _IO_FILE* ptr2 = stdout;
                    char* ptr3 = ptr2->_IO_write_ptr;
                    if(ptr2->_IO_write_end > ptr3) {
                        ptr3[0] = 9;
                        ptr2->_IO_write_ptr = ptr3 + 1;
                    }
                    else {
                        →__overflow(ptr2, 9);
                        v2 = gvar_806250C;
                    }
                    result = (_IO_FILE*)((int)(unsigned int)ptr0 / v2);
                    ptr0 = (_IO_FILE*)((int)(int*)(v2 + (int)ptr0) - (int)(char*)((int)(unsigned int)ptr0 % v2));
                }
                ptr0 = ptr1;
            loc_804C9CE:
                result = stdout;
                char* ptr4 = result->_IO_write_ptr;
                if(result->_IO_write_end > ptr4) {
                    ptr4[0] = ' ';
                    result->_IO_write_ptr = ptr4 + 1;
                    if((unsigned int)param1 > (unsigned int)ptr0) {
                        goto loc_804C9C1;
                    }
                    else {
                        return result;
                    }
                }
                else {
                    result = (_IO_FILE*)→__overflow(result, 32);
                }
            }
        }
        while((unsigned int)param1 <= (unsigned int)ptr0);
    }
    return result;
}

int sub_804CA20(int param0, int param1) {
    int result;
    char* __s;
    int v0 = *(int*)(param1 + 12);
    int v1 = *(int*)(param1 + 8);
    int v2 = (v0 - v1) >>> 2;
    if(v2) {
        if(v0 == v1) {
            *(char*)(param1 + 40) = *(char*)(param1 + 40) | 0x2;
        }
        int v3 = *(int*)(param1 + 24);
        int v4 = *(int*)(param1 + 16);
        *(int*)(param1 + 12) = (v0 + v3) & ~v3;
        if(((v0 + v3) & ~v3) - *(int*)(param1 + 4) > v4 - *(int*)(param1 + 4)) {
            *(int*)(param1 + 12) = v4;
        }
        int v5 = 0;
        *(int*)(param1 + 8) = *(int*)(param1 + 12);
        →fputs_unlocked(__s, stdout);
        do {
            int v6 = *(int*)(v5 * 4 + v1);
            ++v5;
            int v7 = " %lu";
            int v8 = 1;
            int v9 = v6;
            result = →__printf_chk();
        }
        while(v5 != v2);
        __s = stdout;
        char* ptr0 = *(int*)&__s[20];
        if(*(int*)&__s[24] > (unsigned int)ptr0) {
            *ptr0 = 10;
            *(int*)&__s[20] = (int*)(ptr0 + 1);
        }
        else {
            →__overflow((_IO_FILE*)__s, 10);
        }
    }
    return result;
}

unsigned int sub_804CAE0(int param0, int param1) {
    int v0;
    char* __s;
    int v1;
    int v2 = v1;
    if(__s) {
        int v3 = sub_8055350(__s, 0);
        int v4 = param0 - v3;
        →fputs_unlocked(__s, stdout);
        size_t v5 = →strlen(__s);
        v0 = (v4 < 0 ? 0: v4) + v5;
        int v6 = v4 < 0 ? 0: v4;
        do {
            _IO_FILE* ptr0 = stdout;
            char* ptr1 = ptr0->_IO_write_ptr;
            if(ptr0->_IO_write_end > ptr1) {
                ptr1[0] = ' ';
                ptr0->_IO_write_ptr = ptr1 + 1;
            }
            else {
                →__overflow(ptr0, 32);
            }
            --v6;
        }
        while(v6 != -1);
    }
    else {
        v0 = param0;
        →__printf_chk();
    }
    unsigned int result = (unsigned int)(gvar_80624D8 + v0 + 1);
    gvar_80624D8 = (unsigned int)(gvar_80624D8 + v0 + 1);
    return result;
}

int sub_804CBA0(int param0, int param1) {
    int v0;
    if(!param0 || gvar_80624ED) {
        unsigned int v1 = sub_804CAE0(param1, v0);
        return (int)v1;
    }
    int result = sub_8054860((__uid_t)v0);
    sub_804CAE0(param1, v0);
    return result;
}

int sub_804CBF0(char* param0) {
    char* __s;
    int v0;
    size_t v1;
    char v2;
    char v3;
    FILE* ptr0;
    int v4;
    char* ptr1;
    wchar_t __c;
    FILE* ptr2;
    FILE* ptr3 = ptr0;
    FILE* __stream = ptr2;
    int v5 = v4;
    int v6 = v4;
    char** ptr4 = (char**)ptr1;
    char* ptr5 = param0;
    int v7 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v8 = sub_8056510(&v2, 0x2000, v5, 0xffffffff, ptr4);
    char* __ptr = (char*)&v2;
    int result = v8;
    if((unsigned int)v8 > 0x1fff) {
        __ptr = (char*)((int)&v3 & 0xfffffff0);
        sub_8056510((int)&v3 & 0xfffffff0, v8 + 1, v6, 0xffffffff, (char**)ptr1);
    }
    if(gvar_80624E4) {
        size_t v9 = →__ctype_get_mb_cur_max();
        if(v9 > 1) {
            int* ptr6 = (int*)(result + (int)__ptr);
            v0 = 0;
            int* ptr7 = ptr6;
            result = 0;
            if((unsigned int)__ptr < (unsigned int)ptr7) {
                char* ptr8 = __ptr;
                __s = __ptr;
                do {
                    int v10 = (unsigned int)__s[0];
                    if(__s[0] > 95) {
                        if((unsigned char)((unsigned char)v10 + 159) <= 29) {
                        loc_804CEDC:
                            ptr8[0] = (char)v10;
                            ++__s;
                            ++ptr8;
                            ++v0;
                        }
                    loc_804CD78:
                        int v11 = 0;
                        int v12 = 0;
                    loc_804CDA8:
                        do {
                            v1 = →mbrtowc(&__c, __s, (size_t)((int)ptr7 - (int)__s), &v11);
                            if(v1 != -1) {
                                if(v1 != -2) {
                                    int v13 = →wcwidth(__c);
                                    if(v13 >= 0) {
                                        int v14 = 0;
                                        do {
                                            ptr8[v14] = __s[v14];
                                            ++v14;
                                        }
                                        while((v1 ? v1: 1) != v14);
                                        v0 += v13;
                                        ptr8 = (char*)((v1 ? v1: 1) + (int)ptr8);
                                        __s = (char*)((v1 ? v1: 1) + (int)__s);
                                    }
                                    else {
                                        ptr8[0] = '?';
                                        __s = (char*)((v1 ? v1: 1) + (int)__s);
                                        ++ptr8;
                                        ++v0;
                                    }
                                    int v15 = →mbsinit(&v11);
                                    if(!v15) {
                                        goto loc_804CDA8;
                                    }
                                }
                                ptr8[0] = '?';
                                ++v0;
                                result = (int)(int*)(ptr8 + 1) - (int)__ptr;
                                goto loc_804CCAA;
                            }
                        }
                        while(v1 != -1);
                        ptr8[0] = '?';
                        ++__s;
                        ++ptr8;
                        ++v0;
                    }
                    else if((unsigned char)v10 >= 65 || ((unsigned char)v10 >= 32 && ((unsigned char)v10 <= 35 || (unsigned char)((unsigned char)v10 + 219) <= 26))) {
                        goto loc_804CEDC;
                    }
                    else {
                        goto loc_804CD78;
                    }
                }
                while((unsigned int)__s < (unsigned int)ptr7);
                result = (int)ptr8 - (int)__ptr;
            }
        }
        else {
            v0 = result;
            __s = &__ptr[result];
            if(__s > __ptr) {
                unsigned short** ptr9 = →__ctype_b_loc();
                char* ptr10 = __ptr;
                do {
                    if(!(*((char*)&ptr9[0][(unsigned int)ptr10[0]] + 1) & 0x40)) {
                        ptr10[0] = '?';
                    }
                    ++ptr10;
                }
                while(ptr10 != __s);
                v0 = result;
            }
        }
    }
    else if(ptr5) {
        size_t v16 = →__ctype_get_mb_cur_max();
        if(v16 > 1) {
            v0 = sub_8055160(__ptr, result, 0);
        }
        else {
            v0 = 0;
            int* ptr11 = (int*)(result + (int)__ptr);
            if((unsigned int)ptr11 > (unsigned int)__ptr) {
                unsigned short** ptr12 = →__ctype_b_loc();
                __s = NULL;
                unsigned short* ptr13 = ptr12[0];
                char* ptr14 = __ptr;
                do {
                    __s = (char*)((int)__s - ((unsigned int)((unsigned int)((unsigned int)ptr13[(unsigned int)ptr14[0]] & 0x4000) < 1) - 1));
                    ++ptr14;
                }
                while(ptr14 != ptr11);
                v0 = (int)__s;
            }
        }
    }
loc_804CCAA:
    if(__stream) {
        →fwrite_unlocked(__ptr, 1, (size_t)result, __stream);
    }
    if(ptr5) {
        *(int*)&ptr5[0] = (char)v0;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v7)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804D260(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    v0 = !(unsigned char)v1 ? (unsigned int)(param0 == 5 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8): (unsigned int)((param1 & 0xf000) == 0x8000 ? 1: 0) | ((unsigned int)(((param1 & 0xf000) >>> 8) & 0xFFFFFF) << 8);
    if((unsigned char)v0) {
        result = 0;
        if((unsigned char)v1 && gvar_8062408 == 3) {
            return ~((unsigned int)(param1 & 0x49) < 1 ? -1: 0);
        }
    }
    else {
        int v2 = !(unsigned char)v1 ? (param0 == 9 ? 1: 0) | (param0 == 3 ? 1: 0): (unsigned int)((param1 & 0xf000) == 0x4000 ? 1: 0) | ((unsigned int)(((param1 & 0xf000) >>> 8) & 0xFFFFFF) << 8);
        result = 47;
        if(!(unsigned char)v2) {
            result = 0;
            if(gvar_8062408 != 1) {
                int v3 = !(unsigned char)v1 ? param0 == 6 ? 1: 0: (unsigned int)((param1 & 0xf000) == 0xa000 ? 1: 0) | ((unsigned int)((v2 >>> 8) & 0xFFFFFF) << 8);
                result = 64;
                if(!(unsigned char)v3) {
                    result = 124;
                    if(!(unsigned char)(!(unsigned char)v1 ? param0 == 1 ? 1: 0: (unsigned int)((param1 & 0xf000) == 0x1000 ? 1: 0) | ((unsigned int)((v3 >>> 8) & 0xFFFFFF) << 8))) {
                        result = param0 == 7 ? 1: 0;
                        if((unsigned char)v1) {
                            result = (unsigned int)((param1 & 0xf000) == 0xc000 ? 1: 0) | ((unsigned int)((result >>> 8) & 0xFFFFFF) << 8);
                        }
                        result = (0 - result) & 0x3d;
                    }
                }
            }
        }
    }
    return result;
}

int sub_804D3A0(int param0, int param1) {
    int v0 = sub_804D260(param0, param1);
    int v1 = v0;
    if((unsigned char)v0) {
        v0 = stdout;
        char* ptr0 = *(unsigned int*)(v0 + 20);
        if(*(unsigned int*)(v0 + 24) > (unsigned int)ptr0) {
            *ptr0 = (unsigned char)v1;
            *(unsigned int*)(v0 + 20) = (int*)(ptr0 + 1);
        }
        else {
            v0 = →__overflow((_IO_FILE*)v0, (int)(unsigned char)v1);
        }
        ++gvar_80624D8;
    }
    return (unsigned int)((unsigned char)v1 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xFFFFFF) << 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D3F0() {
    char* ptr0;
    int v0;
    int v1;
    int v2;
    char v3;
    int v4 = v2;
    int v5 = 0;
    int v6 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(gvar_80624EE) {
        v5 = gvar_8062CBC + 1;
        if(gvar_8062360 == 4) {
            unsigned int v7 = *(unsigned int*)(v1 + 100);
            ptr0 = &v3;
            char* __s = sub_8054C60(*(unsigned int*)(v1 + 96), v7, (int)&v3);
            size_t v8 = →strlen(__s);
            v5 = v8 + 1;
        }
    }
    if(gvar_8062451) {
        int v9 = gvar_8062CC0 + 1;
        if(gvar_8062360 == 4) {
            v9 = 2;
            if(*(char*)(v1 + 116)) {
                unsigned int v10 = gvar_8062500;
                unsigned int v11 = gvar_8062504;
                unsigned int v12 = 0x200;
                unsigned int v13 = 0;
                unsigned int v14 = v10;
                int v15 = gvar_80624FC;
                unsigned int v16 = v11;
                unsigned int v17 = *(unsigned int*)(v1 + 68);
                int v18 = v15;
                ptr0 = &v3;
                void* ptr1 = sub_8053850(*(unsigned int*)(v1 + 64), v17, &v3, v18, 0x200, 0, v14, v16);
                size_t v19 = →strlen((char*)ptr1);
                v9 = v19 + 1;
            }
        }
        v5 += v9;
    }
    if(gvar_8062450) {
        int v20 = gvar_8062CD4 + 1;
        if(gvar_8062360 == 4) {
            size_t v21 = →strlen(*(char**)(v1 + 112));
            v20 = v21 + 1;
        }
        v5 += v20;
    }
    sub_804CBF0((int)&v0);
    int result = v5 + v0;
    if(gvar_8062408) {
        int v22 = sub_804D260(*(int*)(v1 + 104), *(int*)(v1 + 24));
        result += (unsigned char)v22 ? 1: 0;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v6)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_804D570(int param0, char* param1) {
    unsigned int result1;
    char* __format;
    int v0 = sub_8056980(param0);
    int* ptr0 = →__errno_location();
    char* ptr1 = __format;
    →error(0, ptr0[0], __format, v0);
    if(!(unsigned char)result1) {
        unsigned int result = gvar_8062348;
        if(!result) {
            gvar_8062348 = 1;
        }
        return result;
    }
    gvar_8062348 = 2;
    return result1;
}

size_t sub_804D600() {
    char v0;
    int v1;
    int v2 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v3 = v1;
    int v4 = 134586507;
    int v5 = 11;
    int v6 = 1;
    →__sprintf_chk();
    size_t result = →strlen(&v0);
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v2)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804D660() {
    int result;
    __uid_t __uid;
    if(!gvar_80624ED) {
        result = sub_8054860(__uid);
        if(result) {
            return sub_8055350((char*)result, 0);
        }
    }
    sub_804D600();
    return result;
}

size_t sub_804D940() {
    if(gvar_80621F4) {
        return sub_804D980();
    }
    sub_804D980();
    size_t result = sub_804D980();
    sub_804D980();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
size_t sub_804D980() {
    unsigned int* ptr0;
    if(!gvar_80624DC) {
        unsigned int* ptr1 = ptr0;
        gvar_80624DC = 1;
        sub_804D940();
        ptr0 = ptr1;
    }
    return →fwrite_unlocked(*(void**)(ptr0 + 1), *ptr0, 1, stdout);
}

size_t sub_804D9D0() {
    sub_804D980();
    return sub_804D980();
}

int sub_804D9F0(unsigned int param0) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    int v2;
    char* __s;
    int v3;
    int v4;
    int v5;
    unsigned int* ptr1;
    char v6;
    char v7;
    int v8;
    obstack* ptr2;
    int v9 = v8;
    if(v7) {
        v5 = 0;
        char v10 = gvar_806235C ? 0: 1;
        v4 = *(int*)(ptr1 + 1);
        if(!v10) {
            goto loc_804DABF;
        }
        else {
            goto loc_804DA1E;
        }
    }
    else {
        v4 = *ptr1;
        v5 = 0;
        if(gvar_806235C) {
        loc_804DABF:
            if(v7) {
                v3 = 0;
                __s = *(char**)(ptr1 + 1);
                v2 = *(int*)(ptr1 + 27);
                if(!*(char*)((char*)ptr1 + 117)) {
                    v1 = 12;
                    if(gvar_8062244) {
                        goto loc_804DAEA;
                    }
                    else {
                        v3 = -1;
                    }
                }
                goto loc_804DC7D;
            }
            else {
                __s = *ptr1;
                if(gvar_806235D) {
                    v0 = 0;
                    if(!*(char*)((char*)ptr1 + 117)) {
                        goto loc_804DC73;
                    }
                    else {
                        v2 = *(int*)(ptr1 + 27);
                        v0 = 1;
                    }
                }
                else {
                    v0 = (unsigned int)*(char*)((char*)ptr1 + 117);
                loc_804DC73:
                    v2 = *(int*)(ptr1 + 6);
                }
                v3 = (unsigned int)(unsigned char)v0;
            loc_804DC7D:
                if(!*(char*)(ptr1 + 29)) {
                    v1 = *(int*)(*(int*)(ptr1 + 26) * 4 + &gvar_805B2A0);
                    if(v1 == 5) {
                    loc_804DC99:
                        size_t v11 = →strlen(__s);
                        unsigned int* ptr3 = gvar_8062CB0;
                        int* ptr4 = (int*)(v11 + (int)__s);
                        if(ptr3) {
                            do {
                                size_t __n = *ptr3;
                                if(v11 >= __n) {
                                    int v12 = →strncmp((char*)((int)ptr4 - __n), *(char**)(ptr3 + 1), __n);
                                    if(v12) {
                                        goto loc_804DCD5;
                                    }
                                    else {
                                        ptr0 = (int*)(ptr3 + 2);
                                        goto loc_804DAFB;
                                    }
                                }
                                else {
                                loc_804DCD5:
                                    ptr3 = *(ptr3 + 4);
                                }
                            }
                            while(ptr3);
                        }
                        v1 = 5;
                    }
                }
                else if((v2 & 0xf000) == 0x8000) {
                    if((v2 & 0x800)) {
                        int v13 = sub_804BF90();
                        v1 = 16;
                        if((unsigned char)v13) {
                            goto loc_804DAEA;
                        }
                    }
                    if((v2 & 0x400)) {
                        int v14 = sub_804BF90();
                        v1 = 17;
                        if((unsigned char)v14) {
                            goto loc_804DAEA;
                        }
                    }
                    int v15 = sub_804BF90();
                    if((unsigned char)v15) {
                        v1 = 21;
                        if(*(char*)(ptr1 + 31)) {
                            goto loc_804DAEA;
                        }
                    }
                    if((v2 & 0x49)) {
                        int v16 = sub_804BF90();
                        v1 = 14;
                        if((unsigned char)v16) {
                            goto loc_804DAEA;
                        }
                    }
                    if(*(ptr1 + 7) > 1) {
                        int v17 = sub_804BF90();
                        v1 = 22;
                        if((unsigned char)v17) {
                            goto loc_804DAEA;
                        }
                    }
                    goto loc_804DC99;
                }
                else if((v2 & 0xf000) != 0x4000) {
                    if((v2 & 0xf000) != 0xa000) {
                        v1 = (v2 & 0xf000) == 0x1000 ? 8: (v2 & 0xf000) == 0xc000 ? 9: (v2 & 0xf000) == 0x6000 ? 10: ((v2 & 0xf000) == 0x2000 ? 0: 1) * 2 + 11;
                    }
                    else {
                        char v18 = v3 ? 0: 1;
                        char v19 = 0;
                        v1 = 7;
                        if(v18) {
                            v3 = (unsigned int)6 | ((unsigned int)((v3 >>> 8) & 0xFFFFFF) << 8);
                            unsigned char* ptr5 = "target";
                            unsigned char* ptr6 = gvar_806221C;
                            v1 = 13;
                            while(v3 != 0) {
                                v18 = *ptr6 == *ptr5;
                                v19 = *ptr6 < *ptr5;
                                ++ptr6;
                                ++ptr5;
                                --v3;
                                if(!v18) {
                                    break;
                                }
                            }
                            if((v19 || v18 ? 0: 1) != (v19 ? 1: 0)) {
                                v1 = ((gvar_806224C < 1 ? -1: 0) & 0xfffffffa) + 13;
                            }
                        }
                    }
                }
                else if((v2 & 0x202) == 0x202) {
                    int v20 = sub_804BF90();
                    v1 = 20;
                    if(!(unsigned char)v20) {
                        goto loc_804DEAC;
                    }
                }
                else {
                loc_804DEAC:
                    if((v2 & 0x2)) {
                        int v21 = sub_804BF90();
                        v1 = 19;
                        if(!(unsigned char)v21) {
                            goto loc_804DECB;
                        }
                    }
                    else {
                    loc_804DECB:
                        v1 = 6;
                        if((v2 & 0x200)) {
                            int v22 = sub_804BF90();
                            v1 = (((unsigned char)v22 < 1 ? -1: 0) & 0xfffffff4) + 18;
                        }
                    }
                }
            loc_804DAEA:
                ptr0 = (int*)(v1 * 8 + &gvar_80621E0);
            }
        loc_804DAFB:
            if(*(ptr0 + 1)) {
                int v23 = sub_804BF90();
                if((unsigned char)v23) {
                    sub_804D9D0();
                }
                v5 = 1;
                sub_804D980();
                sub_804D980();
                sub_804D980();
                if(ptr2) {
                    goto loc_804DA2B;
                }
                else {
                    goto loc_804DB4C;
                }
            }
            else {
                int v24 = sub_804BF90();
                v5 = (unsigned char)v24 ? 1: 0;
            }
        }
    loc_804DA1E:
        if(ptr2) {
        loc_804DA2B:
            if(gvar_8062455) {
                char* ptr7 = ptr2->next_free;
                if((unsigned int)(int*)(ptr7 + 4) > (unsigned int)ptr2->chunk_limit) {
                    →_obstack_newchunk(ptr2, 4);
                    ptr7 = ptr2->next_free;
                }
                *(int*)&ptr7[0] = gvar_80624D8;
                ptr2->next_free += 4;
            }
            int v25 = sub_804CBF0(NULL);
            gvar_80624D8 += v25;
            result = v25;
            if(gvar_8062455) {
                char* ptr8 = ptr2->next_free;
                if((unsigned int)(int*)(ptr8 + 4) > (unsigned int)ptr2->chunk_limit) {
                    →_obstack_newchunk(ptr2, 4);
                    ptr8 = ptr2->next_free;
                }
                *(int*)&ptr8[0] = gvar_80624D8;
                ptr2->next_free += 4;
            }
            if(v5) {
                goto loc_804DBD8;
            }
            else {
                return result;
            }
        }
        else {
        loc_804DB4C:
            int v26 = sub_804CBF0(NULL);
            gvar_80624D8 += v26;
            result = v26;
        }
        if(v5) {
        loc_804DBD8:
            while(gvar_8062344 || gvar_8062340) {
                if(gvar_80624DC) {
                    sub_804D9D0();
                }
                →fflush_unlocked(stdout);
                →sigprocmask(0, (sigset_t*)&gvar_8062380, &v6);
                int __sig = gvar_8062344;
                unsigned int v27 = gvar_8062340;
                if(v27) {
                    __sig = 19;
                    gvar_8062340 = v27 - 1;
                }
                else {
                    →signal(__sig, NULL);
                }
                →raise(__sig);
                →sigprocmask(2, &v6, NULL);
            }
            sub_804D940();
            unsigned int v28 = gvar_8062508;
            if((unsigned int)(result + param0 - 1) / v28 != param0 / v28) {
                sub_804D980();
                return result;
            }
        }
    }
    return result;
}

int sub_804DF20() {
    int result;
    if(gvar_806235C) {
        result = sub_804BF90();
        if((unsigned char)result) {
            sub_804D980();
            size_t v0 = sub_804D980();
            sub_804D980();
            return (int)v0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DF70(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8 = v7;
    int v9 = *(int*)(__GS_BASE + (int)(int*)0x14);
    sub_804DF20();
    if(gvar_80624EE) {
        char* ptr0 = (char*)&gvar_805A095;
        if(*(char*)(v6 + 116)) {
            unsigned int v10 = *(unsigned int*)(v6 + 100);
            unsigned int v11 = *(unsigned int*)(v6 + 96);
            if((v11 | v10)) {
                ptr0 = sub_8054C60(v11, v10, &v5);
            }
        }
        int v12 = gvar_8062360 == 4 ? 0: gvar_8062CBC;
        v3 = (int)ptr0;
        v2 = "%*s ";
        v1 = v12;
        v0 = 1;
        →__printf_chk();
    }
    if(gvar_8062451) {
        void* ptr1 = (void*)&gvar_805A095;
        if(*(char*)(v6 + 116)) {
            unsigned int v13 = gvar_8062500;
            unsigned int v14 = gvar_8062504;
            unsigned int v15 = 0x200;
            unsigned int v16 = 0;
            unsigned int v17 = v13;
            int v18 = gvar_80624FC;
            unsigned int v19 = v14;
            unsigned int v20 = *(unsigned int*)(v6 + 68);
            v3 = v18;
            v1 = &v5;
            ptr1 = sub_8053850(*(unsigned int*)(v6 + 64), v20, (char*)&v5, v18, 0x200, 0, v17, v19);
        }
        int v21 = gvar_8062360 == 4 ? 0: gvar_8062CC0;
        v3 = (int)ptr1;
        v2 = "%*s ";
        v1 = v21;
        v0 = 1;
        →__printf_chk();
    }
    if(gvar_8062450) {
        int v22 = *(int*)(v6 + 112);
        int v23 = gvar_8062360 == 4 ? 0: gvar_8062CD4;
        v2 = "%*s ";
        v3 = v22;
        v1 = v23;
        →__printf_chk();
    }
    int result = sub_804D9F0(v4);
    if(gvar_8062408) {
        int v24 = sub_804D3A0(*(int*)(v6 + 104), *(int*)(v6 + 24));
        result += (unsigned int)(unsigned char)v24;
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v9)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E120(int param0) {
    char v0;
    int v1;
    int v2;
    char* __haystack;
    int v3;
    char* ptr0 = gvar_806251C;
    int v4 = v2;
    int v5 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __s = __haystack;
    if(ptr0) {
        char* ptr1 = →strstr(__haystack, (char*)&gvar_805A09E);
        if(ptr1) {
            size_t v6 = →strlen(__s);
            if(v6 <= 101) {
                int* ptr2 = (int*)((int)ptr1 - (int)__s);
                __s = &v0;
                int v7 = 261;
                int* ptr3 = ptr2;
                char* ptr4 = &v0;
                int v8 = →__mempcpy_chk();
                char* __dest = →stpcpy((char*)v8, (char*)(*(int*)(v3 + 16) * 161 + 0x8062520));
                →strcpy(__dest, ptr1 + 2);
            }
        }
    }
    int result = sub_8058320(v1, 1001, (int)__s, v3, 0, param0);
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v5)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_804E240(int param0, void* param1) {
    int result;
    int* ptr0;
    int v0;
    int v1;
    char* __s2;
    char* ptr1;
    unsigned int v2;
    int v3;
    void* ptr2;
    char* ptr3;
    int v4;
    char* __s;
    unsigned int v5;
    unsigned int v6;
    unsigned int v7;
    int v8;
    char* ptr4;
    int v9;
    unsigned int v10;
    unsigned int v11;
    int v12;
    char v13;
    unsigned int v14;
    char v15;
    char v16;
    char v17;
    char v18;
    char v19;
    int v20;
    char v21;
    int v22 = *(int*)(__GS_BASE + (int)(int*)0x14);
    if(*(char*)(v20 + 116)) {
        sub_80522D0(v20 + 8, &v19);
        if(gvar_8062CB8) {
            goto loc_804E62E;
        }
        else {
            goto loc_804E288;
        }
    }
    else {
        int v23 = *(int*)(v20 + 104);
        char v24 = gvar_8062CB8 ? 0: 1;
        int v25 = 1061109567;
        int v26 = 1061109567;
        char v27 = a_pcdb_lswd[v23];
        short v28 = 0x3f3f;
        char v29 = 0;
        v19 = v27;
        if(!v24) {
        loc_804E62E:
            int v30 = *(int*)(v20 + 120);
            if(v30 == 1) {
                (v28 >>> 8) & 0xFF = 46;
            }
            else if(v30 == 2) {
                v14 = gvar_80624E8;
                (v28 >>> 8) & 0xFF = 43;
                v13 = v14 < 1;
                if(v14 != 1) {
                    goto loc_804E29E;
                }
                else {
                    unsigned int v31 = *(unsigned int*)(v20 + 88);
                    v12 = *(int*)(v20 + 92);
                    v11 = v31;
                    goto loc_804E2BD;
                }
            }
        }
        else {
        loc_804E288:
            (v28 >>> 8) & 0xFF = 0;
        }
        v14 = gvar_80624E8;
        v13 = v14 < 1;
        if(v14 != 1) {
        loc_804E29E:
            if(v13) {
                unsigned int v32 = *(unsigned int*)(v20 + 80);
                v12 = *(int*)(v20 + 84);
                v11 = v32;
                goto loc_804E2BD;
            }
        }
        else {
            unsigned int v31 = *(unsigned int*)(v20 + 88);
            v12 = *(int*)(v20 + 92);
            v11 = v31;
            goto loc_804E2BD;
        }
        if(v14 != 2) {
            /*NO_RETURN*/ →abort();
            ptr3 = __s2;
            goto loc_804E502;
        }
        else {
            unsigned int v33 = *(unsigned int*)(v20 + 72);
            v12 = *(int*)(v20 + 76);
            v11 = v33;
        loc_804E2BD:
            char* __s1 = &v17;
            if(gvar_80624EE) {
                char* ptr5 = (char*)&gvar_805A095;
                if(*(char*)(v20 + 116)) {
                    unsigned int v34 = *(unsigned int*)(v20 + 100);
                    unsigned int v35 = *(unsigned int*)(v20 + 96);
                    if((v35 | v34)) {
                        ptr5 = sub_8054C60(v35, v34, (int)&v18);
                    }
                }
                v10 = (unsigned int)ptr5;
                unsigned int v36 = gvar_8062CBC;
                v9 = "%*s ";
                ptr4 = (char*)0xE3B;
                v8 = 1;
                v7 = v36;
                →__sprintf_chk();
                size_t v37 = →strlen(&v17);
                __s1 = (char*)(v37 + (int)&v17);
            }
            if(gvar_8062451) {
                void* ptr6 = (void*)&gvar_805A095;
                if(*(char*)(v20 + 116)) {
                    unsigned int v38 = gvar_8062500;
                    unsigned int v39 = gvar_8062504;
                    v7 = 0x200;
                    v10 = 0;
                    v6 = v38;
                    int v40 = gvar_80624FC;
                    v5 = v39;
                    unsigned int v41 = *(unsigned int*)(v20 + 68);
                    v9 = v40;
                    ptr4 = &v18;
                    ptr6 = sub_8053850(*(unsigned int*)(v20 + 64), v41, &v18, v9, 0x200, 0, v6, v5);
                }
                int v42 = gvar_8062CC0;
                __s = (char*)ptr6;
                v4 = v42;
                int v43 = sub_8055350(__s, 0);
                int v44 = v4 - v43;
                if(v44 > 0) {
                    int* ptr7 = (int*)(v44 + (int)&v17);
                    do {
                        __s1[0] = ' ';
                        ++__s1;
                    }
                    while(ptr7 != __s1);
                }
                do {
                    v21 = *(char*)ptr6;
                    ptr6 = (void*)((int)ptr6 + 1);
                    __s1 = &v16;
                    v17 = v21;
                }
                while(v21);
                v17 = 32;
            }
            char* ptr8 = (char*)&gvar_805A095;
            if(*(char*)(v20 + 116)) {
                ptr8 = sub_8054C60(*(unsigned int*)(v20 + 28), 0, (int)&v18);
            }
            v6 = (unsigned int)ptr8;
            unsigned int v45 = gvar_8062CC4;
            v9 = "%s %*s ";
            ptr4 = (char*)0xFFFFFFFF;
            v8 = 1;
            v10 = v45;
            v7 = (unsigned int)&v19;
            →__sprintf_chk();
            size_t v46 = →strlen(__s1);
            ptr3 = &__s1[v46];
            if(gvar_8062455) {
                →fwrite_unlocked((void*)&gvar_805A0A9, 1, 2, stdout);
                gvar_80624D8 += 2;
            }
            if(gvar_80622A8 || gvar_80622A9 || gvar_8062510 || gvar_8062450) {
                →fputs_unlocked(&v17, stdout);
                gvar_80624D8 = (int*)((int)(int*)((int)ptr3 - (int)&v17) + gvar_80624D8);
                if(gvar_80622A8) {
                    sub_804CBA0((int)*(char*)(v20 + 116), gvar_8062CC8);
                }
                if(gvar_80622A9) {
                    int v47 = gvar_8062CCC;
                    int v48 = *(int*)(v20 + 36);
                    if(*(char*)(v20 + 116) && !gvar_80624ED) {
                        __s = (char*)v48;
                        ptr2 = (void*)v48;
                        v3 = v47;
                        sub_80549F0((__gid_t)__s);
                        v47 = v3;
                        v48 = (int)ptr2;
                    }
                    sub_804CAE0(v47, v48);
                }
                if(gvar_8062510) {
                    sub_804CBA0((int)*(char*)(v20 + 116), gvar_8062CD0);
                }
                ptr3 = &v17;
                if(gvar_8062450) {
                    sub_804CAE0(gvar_8062CD4, 0);
                }
            }
            void* ptr9 = (void*)&gvar_805A095;
            if(*(char*)(v20 + 116)) {
                int v49 = *(int*)(v20 + 24) & 0xf000;
                if(v49 == 0x6000 || v49 == 0x2000) {
                    int v50 = *(int*)(v20 + 44);
                    ptr4 = (char*)&v15;
                    int v51 = -2 - gvar_8062CD8 - gvar_8062CDC + gvar_8062CE0;
                    char* ptr10 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((*(int*)(v20 + 40) >>> 12) & 0xFFFFF) | ((unsigned long long)v50 << 20) | ((unsigned long long)0 << 52)) & 0xffffff00) | (unsigned int)*(char*)(v20 + 40)), 0, &v15);
                    unsigned int v52 = gvar_8062CDC;
                    int v53 = *(int*)(v20 + 44);
                    v8 = 0;
                    v2 = v52;
                    int v54 = *(int*)(v20 + 44);
                    ptr1 = ptr10;
                    char* ptr11 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((*(int*)(v20 + 40) >>> 8) & 0xFFFFFF) | ((unsigned long long)v54 << 24) | ((unsigned long long)0 << 56)) & 0xfff) | (v53 & 0xfffff000)), 0, (int)&v18);
                    v9 = &gvar_805A0AC;
                    ptr4 = (char*)0xFFFFFFFF;
                    v5 = (unsigned int)ptr1;
                    v6 = v2;
                    v10 = (unsigned int)ptr11;
                    unsigned int v55 = (unsigned int)((v51 < 0 ? 0: v51) + gvar_8062CD8);
                    v8 = 1;
                    v7 = v55;
                    →__sprintf_chk();
                    __s2 = (char*)(gvar_8062CE0 + (int)ptr3) + 1;
                    goto loc_804E524;
                }
                else {
                    unsigned int v56 = gvar_80622A0;
                    unsigned int v57 = gvar_80622A4;
                    v7 = 1;
                    v10 = 0;
                    v6 = v56;
                    int v58 = gvar_80624FC;
                    v5 = v57;
                    unsigned int v59 = *(unsigned int*)(v20 + 56);
                    v9 = v58;
                    ptr4 = &v18;
                    ptr9 = sub_8053850(*(unsigned int*)(v20 + 52), v59, &v18, v9, 1, 0, v6, v5);
                }
            }
            unsigned int v60 = gvar_8062CE0;
            __s = (char*)ptr9;
            ptr2 = ptr9;
            int v61 = sub_8055350(__s, 0);
            param1 = ptr2;
            v1 = (int)(v60 - v61);
        }
        if(v1 > 0) {
            int* ptr12 = (int*)(v1 + (int)ptr3);
            do {
                ptr3[0] = ' ';
                ++ptr3;
            }
            while(ptr12 != ptr3);
        }
    loc_804E502:
        char v62 = *(char*)param1;
        param1 = (void*)((int)param1 + 1);
        __s2 = ptr3 + 1;
        ptr3[0] = v62;
        if(v62) {
            ptr3 = __s2;
            goto loc_804E502;
        }
        else {
            ptr3[0] = ' ';
        }
    }
loc_804E524:
    tm* ptr13 = →localtime(&v11);
    __s2[0] = 1;
    if(*(char*)(v20 + 116)) {
        if(ptr13) {
            unsigned int v63 = gvar_8062354;
            unsigned int v64 = v11;
            ptr1 = gvar_8062358;
            char v65 = (int)v63 > (int)v64;
            char v66 = (int)(((v64 - v63) ^ v64) & (v63 ^ v64)) < 0;
            v4 = v12;
            if((v63 != v64 && v65 == v66) || (v65 == v66 && (int)ptr1 < v12)) {
                v3 = (int)ptr13;
                sub_8052840((timespec*)&gvar_8062354);
                v63 = gvar_8062354;
                ptr1 = gvar_8062358;
                v64 = v11;
                v4 = v12;
            }
            char v67 = v63 - 15778476 == v64;
            char v68 = (int)(v63 - 15778476) < (int)v64;
            char v69 = (((v63 - 15778476) ^ (v63 - 15778476 - v64)) & ((v63 - 15778476) ^ v64)) < 0;
            if(v68 == v69) {
                v2 = 0;
                if((v67 || v68 != v69) && v4 > (int)ptr1) {
                    goto loc_804E6D6;
                }
            }
            else {
            loc_804E6D6:
                char v70 = (int)v63 < (int)v64;
                char v71 = (int)(((v63 - v64) ^ v63) & (v63 ^ v64)) < 0;
                v2 = v63 != v64 && v70 == v71 ? 1: v70 != v71 ? 0: (unsigned int)((int)(int*)(v4 - (int)ptr1) >>> 31);
            }
            v0 = sub_804E120(v4);
            if(v0) {
                goto loc_804E723;
            }
            else if(!__s2[0]) {
                goto loc_804E723;
            }
            else if(!*(char*)(v20 + 116)) {
                goto loc_804E536;
            }
        }
        char* ptr14 = sub_8054B80(v11, v11 >> 31, &v15);
        goto loc_804E536;
    }
    else {
    loc_804E536:
        tm* ptr15 = gvar_80622B8;
        if((int)ptr15 >= 0) {
            goto loc_804E54A;
        loc_804E723:
            char* ptr16 = &__s2[v0];
            *ptr16 = 32;
            ptr0 = (int*)(ptr16 + 1);
            *(ptr16 + 1) = 0;
        }
        else {
            int v72 = 0;
            ptr15 = →localtime(&v72);
            if(ptr15) {
                int v73 = sub_804E120(0);
                if(!v73) {
                    ptr15 = gvar_80622B8;
                }
                else {
                    ptr15 = (tm*)sub_8055160(&v18, v73, 0);
                    gvar_80622B8 = ptr15;
                }
                if((int)ptr15 < 0) {
                    goto loc_804EB01;
                }
            }
            else {
            loc_804EB01:
                gvar_80622B8 = 0;
                ptr15 = NULL;
            }
        loc_804E54A:
            v7 = (unsigned int)ptr15;
            v9 = "%*s ";
            ptr4 = (char*)0xFFFFFFFF;
            v8 = 1;
            →__sprintf_chk();
            size_t v74 = →strlen(__s2);
            ptr0 = (int*)(v74 + (int)__s2);
        }
    }
    unsigned int v75 = (unsigned int)((int)ptr0 - (int)&v17);
    →fputs_unlocked(&v17, stdout);
    gvar_80624D8 += v75;
    int v76 = sub_804D9F0(v75);
    int v77 = *(int*)(v20 + 104);
    if(v77 != 6) {
        result = gvar_8062408;
        if(result) {
            result = sub_804D3A0(v77, *(int*)(v20 + 24));
        }
    }
    else {
        result = *(int*)(v20 + 4);
        if(result) {
            →fwrite_unlocked(" -> ", 1, 4, stdout);
            __s = (char*)(v76 + v75 + 4);
            gvar_80624D8 += 4;
            sub_804D9F0((unsigned int)__s);
            result = gvar_8062408;
            if(result) {
                result = sub_804D3A0(0, *(int*)(v20 + 108));
            }
        }
    }
    if((char*)(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v22)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

unsigned int sub_804EB40(stat64* param0) {
    unsigned int result;
    int v0;
    unsigned char v1;
    size_t v2;
    size_t v3;
    char* ptr0;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int* ptr1;
    int v10;
    char* ptr2;
    unsigned int v11;
    unsigned char v12;
    unsigned int v13;
    char v14;
    char v15;
    char* ptr3;
    int v16;
    char v17;
    int v18 = v16;
    char v19 = v17;
    int v20 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __s5 = ptr3;
    void* __ptr = gvar_80624D0;
    stat64* __stat_buf = param0;
    unsigned int v21 = gvar_80624D4;
    if(gvar_80624CC != v21) {
        goto loc_804EB8F;
    }
    if(v21 > 0xffffff) {
        /*NO_RETURN*/ sub_8058C00();
    }
    __ptr = (void*)sub_8058AA0(__ptr, (size_t)(v21 * 0x100));
    v21 = gvar_80624D4;
    gvar_80624CC *= 2;
    gvar_80624D0 = __ptr;
loc_804EB8F:
    unsigned int v22 = (unsigned int)(v21 * 128 + (int)__ptr);
    v13 = (unsigned int)(v21 * 128 + (int)__ptr);
    int v23 = 128;
    if(v22 & 1) {
        *(char*)v22 = 0;
        v23 = 127;
        ++v22;
    }
    if(v22 & 0x2) {
        *(short*)v22 = 0;
        v23 -= 2;
        v22 += 2;
        goto loc_804EBB8;
    }
    else {
    loc_804EBB8:
        for(int i = v23 >>> 2; i != 0; --i) {
            *(int*)v22 = 0;
            v22 += 4;
        }
        if(((unsigned char)v23 & 0x2)) {
            *(short*)v22 = 0;
            v22 += 2;
        }
        if((v23 & 1)) {
            *(char*)v22 = 0;
        }
        *(int*)(v13 + 96) = 0;
        *(int*)(v13 + 100) = 0;
        *(int*)(v13 + 104) = v18;
        if(!(v19 ? 0: 1) || gvar_8062452) {
            goto loc_804EC05;
        }
        else if(v18 == 3 && gvar_806235C) {
            int v24 = sub_804BF90();
            if(!(unsigned char)v24) {
                int v25 = sub_804BF90();
                if(!(unsigned char)v25) {
                    int v26 = sub_804BF90();
                    if(!(unsigned char)v26) {
                        goto loc_804EEB5;
                    }
                }
            }
            goto loc_804EC05;
        }
        else {
        loc_804EEB5:
            v12 = gvar_80624EE;
            if(v12) {
                goto loc_804EECF;
            }
        }
        if(!gvar_8062454) {
            goto loc_804EDFD;
        }
        else {
        loc_804EECF:
            if((v18 ? 0: 1) || v18 == 6) {
                v11 = gvar_8062400;
                if(v11 == 5 || gvar_806235D || gvar_8062364) {
                    goto loc_804EC0B;
                }
            }
            if(!v12) {
                if(!gvar_8062454) {
                    goto loc_804EDFD;
                }
                else if(!(unsigned char)((unsigned int)(v18 ? 0: 1) | ((unsigned int)((v18 >>> 8) & 0xFFFFFF) << 8))) {
                    if(v18 != 5) {
                        goto loc_804EDFD;
                    }
                    else if(gvar_8062408 != 3) {
                        if(!gvar_806235C) {
                            goto loc_804EDFD;
                        }
                        else {
                            int v27 = sub_804BF90();
                            if(!(unsigned char)v27) {
                                int v28 = sub_804BF90();
                                if(!(unsigned char)v28) {
                                    int v29 = sub_804BF90();
                                    if(!(unsigned char)v29) {
                                        int v30 = sub_804BF90();
                                        if(!(unsigned char)v30) {
                                            goto loc_804EDFD;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        loc_804EC05:
            v11 = gvar_8062400;
        loc_804EC0B:
            char* __s = __s5;
            if(__s[0] != 47 && *(char*)&__stat_buf->st_dev) {
                →strlen(__s);
                →strlen((char*)__stat_buf);
                stat64* ptr4 = __stat_buf;
                __s = (char*)((int)&v19 & 0xfffffff0);
                char v31 = *(char*)&ptr4->st_dev;
                if(v31 != 46) {
                    ptr2 = (char*)((int)&v19 & 0xfffffff0);
                    if(v31) {
                        goto loc_804F1EA;
                    }
                }
                else if(!*((char*)&ptr4->st_dev + 1)) {
                    ptr2 = (char*)((int)&v19 & 0xfffffff0);
                }
                else {
                loc_804F1EA:
                    ptr2 = (char*)((int)&v19 & 0xfffffff0);
                    stat64* ptr5 = __stat_buf;
                    do {
                        ptr5 = (stat64*)((char*)ptr5 + 1);
                        ptr2[0] = v31;
                        v31 = *(char*)&ptr5->st_dev;
                        ++ptr2;
                    }
                    while(v31);
                    if(ptr5 > __stat_buf && *(char*)((char*)ptr5 - 1) != 47) {
                        ptr2[0] = '/';
                        ++ptr2;
                    }
                }
                char* ptr6 = __s5;
                char v32 = ptr6[0];
                if(v32) {
                    do {
                        ++ptr6;
                        ptr2[0] = v32;
                        v32 = ptr6[0];
                        ++ptr2;
                    }
                    while(v32);
                }
                ptr2[0] = 0;
            }
            __stat_buf = (stat64*)(v13 + 8);
            if(v11 >= 3) {
                if(v11 == 5) {
                    v22 = 1;
                    v10 = →__xstat64(3, __s, (stat64*)(v13 + 8));
                    if(!v10) {
                        goto loc_804EC70;
                    }
                    else {
                        goto loc_804EE80;
                    }
                }
                else if(v11 <= 4 && v19) {
                    v22 = 1;
                    int v33 = →__xstat64(3, __s, __stat_buf);
                    v10 = v33;
                    if(v11 == 3) {
                        goto loc_804EC5D;
                    }
                    else {
                        if(v33 >= 0) {
                            ptr1 = (unsigned int)((*(int*)(v13 + 24) & 0xf000) == 0x4000 ? 0: 1) | ((unsigned int)(((*(int*)(v13 + 24) & 0xf000) >>> 8) & 0xFFFFFF) << 8);
                        }
                        else {
                            v9 = v33;
                            ptr1 = →__errno_location();
                            v10 = v9;
                            ptr1 = (unsigned int)(ptr1[0] == 2 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xFFFFFF) << 8);
                        }
                        v22 = 1;
                        if(!(unsigned char)ptr1) {
                            goto loc_804EC5D;
                        }
                    }
                }
            }
            v22 = 0;
            v10 = →__lxstat64(3, __s, __stat_buf);
        loc_804EC5D:
            if(!v10) {
            loc_804EC70:
                *(char*)(v13 + 116) = 1;
                if(v18 == 5 || (*(int*)(v13 + 24) & 0xf000) == 0x8000) {
                    if(gvar_806235C) {
                        v9 = 0;
                        int v34 = sub_804BF90();
                        if((unsigned char)v34) {
                            *(char*)(v13 + 124) = 0;
                        }
                    }
                loc_804EC94:
                    if(!gvar_8062360 || gvar_8062450) {
                        char* ptr7 = __s;
                        v9 = 0;
                        unsigned int* ptr8 = (unsigned int*)(v13 + 112);
                        if((unsigned char)v22) {
                            v8 = sub_8059550(ptr7, ptr8);
                            v7 = v9;
                        }
                        else {
                            v8 = sub_80595E0(ptr7, ptr8);
                            v7 = v9;
                        }
                        char v35 = v8 ? 0: 1;
                        if(v8 >= 0) {
                            v6 = 10;
                            char* ptr9 = "unlabeled";
                            v22 = *(unsigned int*)(v13 + 112);
                            while(v6 != 0) {
                                v35 = *ptr9 == *(char*)v22;
                                ++ptr9;
                                ++v22;
                                --v6;
                                if(!v35) {
                                    v6 = (unsigned int)(v35 ? 0: 1) | ((unsigned int)((v6 >>> 8) & 0xFFFFFF) << 8);
                                    goto loc_804F031;
                                }
                            }
                            v6 = (unsigned int)(v35 ? 0: 1) | ((unsigned int)((v6 >>> 8) & 0xFFFFFF) << 8);
                            goto loc_804F031;
                        }
                        else {
                            *(int*)(v13 + 112) = &gvar_80622B4;
                            v9 = v7;
                            int* ptr10 = →__errno_location();
                            v7 = v9;
                            int v36 = ptr10[0];
                            if(v36 != 61 && v36 != 95) {
                                *(int*)(v13 + 120) = 0;
                                goto loc_804F339;
                            }
                            else {
                                v6 = 0;
                            loc_804F031:
                                int v37 = 0;
                                if(!gvar_8062360) {
                                    v9 & 0xFF = (unsigned char)v6;
                                    v37 = sub_8051AA0((int)__s, (int)__stat_buf);
                                    v6 = (unsigned int)(unsigned char)v9;
                                    v7 = v37 >>> 31;
                                    v37 = (unsigned int)(v37 <= 0 ? 0: 1) | ((unsigned int)((v37 >>> 8) & 0xFFFFFF) << 8);
                                }
                                if((unsigned char)v6) {
                                    v5 = 1;
                                    v11 = 1;
                                    if((unsigned char)v37) {
                                        goto loc_804F078;
                                    }
                                }
                                else if((unsigned char)v37) {
                                loc_804F078:
                                    v5 = 1;
                                    v11 = 2;
                                }
                                else {
                                    v5 = 0;
                                    v11 = 0;
                                }
                                gvar_8062CB8 = (unsigned char)((unsigned char)v5 | gvar_8062CB8);
                                *(unsigned int*)(v13 + 120) = v11;
                            }
                            if(v7) {
                            loc_804F339:
                                v11 = (unsigned int)sub_8056980((int)__s);
                                int* ptr11 = →__errno_location();
                                v4 = (int)v11;
                                ptr0 = (char*)0x805A1BF;
                                →error(0, ptr11[0], (char*)0x805A1BF, v4);
                            }
                        }
                    }
                    int v38 = *(int*)(v13 + 24);
                    int v39 = v38 & 0xf000;
                    if(v39 == 0xa000) {
                        if(gvar_8062360 && !gvar_8062364) {
                            *(char*)(v13 + 117) = 1;
                            v39 = v38 & 0xf000;
                            if(v39 == 0xa000) {
                                *(int*)(v13 + 104) = 6;
                            loc_804ECE7:
                                v11 = *(unsigned int*)(v13 + 64);
                                v22 = *(unsigned int*)(v13 + 68);
                                if(!gvar_8062360 || gvar_8062451) {
                                    void* ptr12 = sub_8053850(v11, v22, &v14, gvar_80624FC, 0x200, 0, gvar_8062500, gvar_8062504);
                                    int v40 = sub_8055350((char*)ptr12, 0);
                                    if(gvar_8062CC0 < v40) {
                                        gvar_8062CC0 = v40;
                                    }
                                    if(!gvar_8062360) {
                                        if(gvar_80622A8) {
                                            int v41 = sub_804D660();
                                            if(gvar_8062CC8 < v41) {
                                                gvar_8062CC8 = v41;
                                            }
                                        }
                                        if(gvar_80622A9) {
                                            __gid_t __gid = *(__gid_t*)(v13 + 36);
                                            if(!gvar_80624ED) {
                                                int v42 = sub_80549F0(__gid);
                                                if(!v42) {
                                                    goto loc_804ED92;
                                                }
                                                else {
                                                    int v43 = sub_8055350((char*)v42, 0);
                                                    v3 = (size_t)(v43 < 0 ? 0: v43);
                                                }
                                            }
                                            else {
                                            loc_804ED92:
                                                v3 = sub_804D600();
                                            }
                                            if(gvar_8062CCC < (int)v3) {
                                                gvar_8062CCC = v3;
                                            }
                                        }
                                        if(gvar_8062510) {
                                            int v44 = sub_804D660();
                                            if(gvar_8062CD0 < v44) {
                                                gvar_8062CD0 = v44;
                                            }
                                        }
                                    }
                                }
                                if(gvar_8062450) {
                                    v2 = →strlen(*(char**)(v13 + 112));
                                    if(gvar_8062CD4 < (int)v2) {
                                        goto loc_804F240;
                                    }
                                    else {
                                        goto loc_804EDDF;
                                    }
                                }
                                else {
                                loc_804EDDF:
                                    if(gvar_8062360) {
                                        v1 = gvar_80624EE;
                                        goto loc_804EDEE;
                                    loc_804F240:
                                        gvar_8062CD4 = v2;
                                        if(gvar_8062360) {
                                            v1 = gvar_80624EE;
                                            goto loc_804EDEE;
                                        }
                                    }
                                    ptr0 = (char*)&v15;
                                    char* __s1 = sub_8054C60(*(unsigned int*)(v13 + 28), 0, &v15);
                                    size_t v45 = →strlen(__s1);
                                    if(gvar_8062CC4 < (int)v45) {
                                        gvar_8062CC4 = v45;
                                    }
                                    int v46 = *(int*)(v13 + 24) & 0xf000;
                                    if(v46 == 0x6000 || v46 == 0x2000) {
                                        int v47 = *(int*)(v13 + 44);
                                        char* __s2 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((*(int*)(v13 + 40) >>> 8) & 0xFFFFFF) | ((unsigned long long)v47 << 24) | ((unsigned long long)0 << 56)) & 0xfff) | (v47 & 0xfffff000)), 0, (int)&v14);
                                        size_t v48 = →strlen(__s2);
                                        if(gvar_8062CD8 < (int)v48) {
                                            gvar_8062CD8 = v48;
                                        }
                                        int v49 = *(int*)(v13 + 40);
                                        char* __s3 = sub_8054C60((unsigned int)(((unsigned int)((unsigned long long)((v49 >>> 12) & 0xFFFFF) | ((unsigned long long)*(int*)(v13 + 44) << 20) | ((unsigned long long)0 << 52)) & 0xffffff00) | (unsigned int)(unsigned char)v49), 0, (int)&v14);
                                        size_t v50 = →strlen(__s3);
                                        size_t v51 = gvar_8062CDC;
                                        if((int)v51 < (int)v50) {
                                            gvar_8062CDC = v50;
                                            v51 = v50;
                                        }
                                        int v52 = (int)(gvar_8062CD8 + v51 + 2);
                                        if(gvar_8062CE0 < v52) {
                                            gvar_8062CE0 = v52;
                                            v1 = gvar_80624EE;
                                        }
                                        else {
                                            v1 = gvar_80624EE;
                                        }
                                        goto loc_804EDEE;
                                    }
                                    else {
                                        unsigned int v53 = gvar_80622A0;
                                        unsigned int v54 = gvar_80622A4;
                                        unsigned int v55 = 1;
                                        unsigned int v56 = v53;
                                        int v57 = gvar_80624FC;
                                        unsigned int v58 = 0;
                                        unsigned int v59 = v54;
                                        v4 = v57;
                                        ptr0 = &v14;
                                        void* ptr13 = sub_8053850(*(unsigned int*)(v13 + 52), *(unsigned int*)(v13 + 56), &v14, v4, 1, 0, v56, v59);
                                        v0 = sub_8055350((char*)ptr13, 0);
                                    }
                                    if(gvar_8062CE0 < v0) {
                                        gvar_8062CE0 = v0;
                                    }
                                    v1 = gvar_80624EE;
                                }
                                goto loc_804EDEE;
                            }
                        }
                        else {
                            /*NO_RETURN*/ sub_8051B00((int)__s, *(unsigned int*)(v13 + 52));
                            *(short*)v22 = 0;
                            v23 -= 2;
                            v22 += 2;
                            goto loc_804EBB8;
                        }
                    }
                    *(int*)(v13 + 104) = v39 != 0x4000 ? 5: v19 && !gvar_8062404 ? 9: 3;
                    goto loc_804ECE7;
                }
                else {
                    goto loc_804EC94;
                }
            }
            else {
            loc_804EE80:
                char* ptr14 = →dcgettext(NULL, "cannot access %s", 5);
                result = sub_804D570((int)__s, ptr14);
            }
            if(v19) {
                goto loc_804EE1F;
            }
            else {
                goto loc_804EDFD;
            }
        }
    }
loc_804EDEE:
    if(v1) {
        ptr0 = &v14;
        char* __s4 = sub_8054C60(*(unsigned int*)(v13 + 96), *(unsigned int*)(v13 + 100), (int)&v14);
        size_t v60 = →strlen(__s4);
        if(gvar_8062CBC < (int)v60) {
            gvar_8062CBC = v60;
        }
    }
loc_804EDFD:
    /*NO_RETURN*/ sub_8058BD0(__s5);
loc_804EE1F:
    if(!(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v20)) {
        return result;
    }
    /*NO_RETURN*/ →__stack_chk_fail();
    /*NO_RETURN*/ sub_8058C00();
}

int sub_804F7E0() {
    unsigned int v0;
    int v1;
    void* __ptr1;
    unsigned int v2;
    unsigned int v3;
    char v4;
    int v5 = gvar_80624D4;
    char v6 = v4;
    int v7 = gvar_8062514;
    int v8 = (unsigned int)v7 <= (unsigned int)v5 ? v7: v5;
    char v9 = gvar_8062DA0 == v8;
    char v10 = gvar_8062DA0 > (unsigned int)v8;
    int v11 = v8;
    if(!v10 && !v9) {
        if((unsigned int)(v7 >>> 1) <= (unsigned int)v11) {
            void* __ptr = gvar_8062D9C;
            if((unsigned int)v7 > 0x15555555) {
                goto loc_804FA6D;
            }
            else {
                int v12 = sub_8058AA0(__ptr, (size_t)(v7 * 3 * 4));
                v2 = gvar_8062514;
                gvar_8062D9C = v12;
                goto loc_804F849;
            }
        }
        else {
            __ptr1 = gvar_8062D9C;
        }
        if((unsigned int)v11 <= 0xaaaaaaa) {
            v2 = (unsigned int)(v11 * 2);
            int v13 = sub_8058AA0(__ptr1, (size_t)((v2 + v11) * 8));
            gvar_8062D9C = v13;
        loc_804F849:
            unsigned int v14 = gvar_8062DA0;
            unsigned int v15 = v14 + v2 + 1;
            if(v15 >= v2) {
                unsigned int v16 = v2 - v14;
                unsigned int v17 = v15 * v16;
                if(v17 / v16 == v15) {
                    v17 >>>= 1;
                    if(v17 <= 0x3fffffff) {
                        /*NO_RETURN*/ sub_8058A70((size_t)(v17 * 4));
                    }
                }
            }
        }
    loc_804FA6D:
        /*NO_RETURN*/ sub_8058C00();
    }
    if(v11) {
        v1 = v5;
        char* ptr0 = gvar_8062D9C;
        v8 = 0;
        int v18 = 3;
        while(1) {
            v0 = *(unsigned int*)(ptr0 + 8);
            int v19 = v8 + 1;
            unsigned int v20 = 0;
            *ptr0 = 1;
            *(int*)(ptr0 + 4) = v18;
            do {
                *(int*)(v20 * 4 + v0) = 3;
                ++v20;
            }
            while(v20 <= (unsigned int)v8);
            ptr0 += 12;
            v18 += 3;
            if(v19 == v11) {
                break;
            }
            else {
                v8 = v19;
            }
        }
        v5 = v1;
    }
    if(v5) {
        v1 = 0;
        do {
            int v21 = sub_804D3F0();
            v3 = gvar_80624D4;
            int v22 = v21;
            if(v11) {
                v0 = 1;
                char* ptr1 = gvar_8062D9C;
                unsigned int v23 = v3;
                unsigned int v24 = gvar_8062508;
                while(1) {
                    int v25 = v0 - 1;
                    if(*ptr1) {
                        unsigned int v26 = !v6 ? (unsigned int)((unsigned int)v1 % v0): (unsigned int)((unsigned int)v1 / (v23 / v0));
                        unsigned int v27 = (unsigned int)((v25 == v26 ? 0: 1) * 2 + v22);
                        unsigned int* ptr2 = (unsigned int*)(v26 * 4 + *(int*)(ptr1 + 8));
                        v8 = *ptr2;
                        if(v27 > (unsigned int)v8) {
                            *(int*)(ptr1 + 4) = v27 - v8 + *(int*)(ptr1 + 4);
                            *ptr2 = v27;
                            *ptr1 = *(unsigned int*)(ptr1 + 4) < v24 ? 1: 0;
                        }
                    }
                    ptr1 += 12;
                    ++v23;
                    unsigned int v28 = v0 + 1;
                    if((unsigned int)(v11 + 1) <= v28) {
                        break;
                    }
                    else {
                        v0 = v28;
                    }
                }
            }
            ++v1;
        }
        while((unsigned int)v1 < v3);
    }
    int result = v11;
    if((unsigned int)result > 1) {
        v8 = gvar_8062D9C;
        if(!*(char*)((unsigned int)(result * 3 - 3) * 4 + v8)) {
            v8 = result * 12 + v8 - 24;
            do {
                --result;
                if(result == 1) {
                    return result;
                }
                v8 -= 12;
            }
            while(*(char*)(v8 + 12));
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FA80(int param0) {
    int v0;
    int v1;
    int v2;
    int result1;
    int result;
    int v3;
    int v4;
    _IO_FILE* ptr0 = gvar_8062360;
    switch(ptr0) {
        case 0: {
            unsigned int v5 = 0;
            if(gvar_80624D4) {
                do {
                    sub_804DF20();
                    result = sub_804E240();
                    ptr0 = stdout;
                    char* ptr1 = ptr0->_IO_write_ptr;
                    if(ptr0->_IO_write_end > ptr1) {
                        ptr1[0] = 10;
                        ptr0->_IO_write_ptr = ptr1 + 1;
                    }
                    else {
                        →__overflow(ptr0, 10);
                    }
                    ++gvar_80624D8;
                    ++v5;
                }
                while(gvar_80624D4 > v5);
                return result;
            }
            break;
        }
        case 1: {
            unsigned int v6 = 0;
            if(gvar_80624D4) {
                do {
                    result1 = sub_804DF70(v4, 0);
                    ptr0 = stdout;
                    char* ptr2 = ptr0->_IO_write_ptr;
                    if(ptr0->_IO_write_end > ptr2) {
                        ptr2[0] = 10;
                        ptr0->_IO_write_ptr = ptr2 + 1;
                    }
                    else {
                        →__overflow(ptr0, 10);
                    }
                    ++v6;
                }
                while(gvar_80624D4 > v6);
                return result1;
            }
            break;
        }
        case 2: {
            int v7 = sub_804F7E0();
            unsigned int v8 = gvar_8062D9C;
            int* ptr3 = NULL;
            int v9 = (v7 * 3 - 3) * 4 + v8;
            unsigned int v10 = gvar_80624D4;
            ptr0 = (_IO_FILE*)(v10 / (unsigned int)v7);
            char* ptr4 = (char*)((v10 % (unsigned int)v7 ? 1: 0) + (int)ptr0);
            if((char*)((v10 % (unsigned int)v7 ? 1: 0) + (int)ptr0)) {
                int* ptr5 = (int*)((int)ptr4 * 4);
                do {
                    int v11 = 0;
                    int v12 = 0;
                    int* ptr6 = ptr3;
                    int* ptr7 = (int*)((int)ptr3 * 4);
                    while(1) {
                        v0 = *(int*)(gvar_8062CB4 + (int)ptr7);
                        v2 = /*BAD_CALL!*/ sub_804D3F0();
                        int v13 = *(int*)(*(int*)(v9 + 8) + v11);
                        v11 += 4;
                        v1 = v13;
                        sub_804DF70(v0, v12);
                        ptr6 = (int*)((int)ptr6 + (int)ptr4);
                        ptr7 = (int*)((int)ptr7 + (int)ptr5);
                        if(gvar_80624D4 <= (unsigned int)ptr6) {
                            break;
                        }
                        else {
                            int v14 = v12 + v1;
                            sub_804C970(v14, (char*)v14);
                            v12 = v14;
                        }
                    }
                    _IO_FILE* ptr8 = stdout;
                    char* ptr9 = ptr8->_IO_write_ptr;
                    if(ptr8->_IO_write_end > ptr9) {
                        ptr9[0] = 10;
                        ptr8->_IO_write_ptr = ptr9 + 1;
                    }
                    else {
                        →__overflow(ptr8, 10);
                    }
                    ptr3 = (int*)((char*)ptr3 + 1);
                }
                while(ptr4 != ptr3);
                return (int)ptr4;
            }
            break;
        }
        case 3: {
            int v15 = sub_804F7E0();
            unsigned int v16 = gvar_8062D9C;
            v2 = v15;
            int v17 = (v15 * 3 - 3) * 4 + v16;
            sub_804D3F0();
            int v18 = **(int**)(v17 + 8);
            sub_804DF70(v3, 0);
            if(gvar_80624D4 > 1) {
                unsigned int v19 = 1;
                v1 = v17;
                int v20 = 0;
                v4 = v18;
                do {
                    int v21 = v19 % (unsigned int)v2;
                    if(v21) {
                        int v22 = v4 + v20;
                        v0 = v4 + v20;
                        sub_804C970(v22, (char*)v22);
                        v4 = v0;
                        v20 = v0;
                    }
                    else {
                        _IO_FILE* ptr10 = stdout;
                        char* ptr11 = ptr10->_IO_write_ptr;
                        if(ptr10->_IO_write_end > ptr11) {
                            ptr11[0] = 10;
                            v20 = 0;
                            ptr10->_IO_write_ptr = ptr11 + 1;
                        }
                        else {
                            v20 = 0;
                            →__overflow(ptr10, 10);
                        }
                    }
                    ++v19;
                    sub_804DF70(v4, v20);
                    sub_804D3F0();
                    v4 = *(int*)(v21 * 4 + *(int*)(v1 + 8));
                }
                while(gvar_80624D4 <= v19);
            }
            goto loc_804FAA0;
        }
        case 4: {
            if(gvar_80624D4) {
                int v23 = 0;
                v2 = sub_804D3F0();
                unsigned int v24 = 0;
                while(1) {
                    sub_804DF70(param0, v23);
                    ++v24;
                    if(gvar_80624D4 <= v24) {
                        break;
                    }
                    else {
                        v23 += v2;
                        int v25 = sub_804D3F0();
                        v2 = v25;
                        if(v24) {
                            unsigned int v26 = (unsigned int)(v25 + v23 + 2);
                            int v27 = ((gvar_8062508 > v26 ? -1: 0) & 0x16) + 10;
                            int v28 = ((gvar_8062508 > v26 ? -1: 0) & 0x16) + 10;
                            v23 = gvar_8062508 > v26 ? v23 + 2: 0;
                            _IO_FILE* ptr12 = stdout;
                            char* ptr13 = ptr12->_IO_write_ptr;
                            if(ptr12->_IO_write_end > ptr13) {
                                ptr13[0] = ',';
                                ptr12->_IO_write_ptr = ptr13 + 1;
                            }
                            else {
                                v0 & 0xFF = (unsigned char)v28;
                                →__overflow(ptr12, 44);
                                v28 = (unsigned int)(unsigned char)v0;
                            }
                            _IO_FILE* ptr14 = stdout;
                            char* ptr15 = ptr14->_IO_write_ptr;
                            if(ptr14->_IO_write_end > ptr15) {
                                ptr15[0] = (char)v28;
                                param0 = (int)(ptr15 + 1);
                                ptr14->_IO_write_ptr = (char*)(int)(ptr15 + 1);
                            }
                            else {
                                →__overflow(ptr14, (int)(unsigned char)v27);
                            }
                        }
                    }
                }
            }
        loc_804FAA0:
            ptr0 = stdout;
            char* ptr16 = ptr0->_IO_write_ptr;
            if(ptr0->_IO_write_end > ptr16) {
                ptr16[0] = 10;
                ptr0->_IO_write_ptr = ptr16 + 1;
            }
            else {
                ptr0 = (_IO_FILE*)→__overflow(ptr0, 10);
            }
        }
    }
    return (int)ptr0;
}

void sub_80513A0(int __status) {
    int __category = 5;
    if(__status) {
        __category = (int)→dcgettext(NULL, "Try `%s --help\' for more information.\n", 5);
        →__fprintf_chk();
    loc_80513EF:
        /*NO_RETURN*/ →exit(__status);
    }
    →dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", __category);
    →__printf_chk();
    FILE* __stream = stdout;
    char* __s = →dcgettext(NULL, "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n\n", 5);
    →fputs_unlocked(__s, __stream);
    FILE* __stream1 = stdout;
    char* __s1 = →dcgettext(NULL, "Mandatory arguments to long options are mandatory for short options too.\n", 5);
    →fputs_unlocked(__s1, __stream1);
    FILE* __stream2 = stdout;
    char* __s2 = →dcgettext(NULL, "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n", 5);
    →fputs_unlocked(__s2, __stream2);
    FILE* __stream3 = stdout;
    char* __s3 = →dcgettext(NULL, "      --block-size=SIZE      scale sizes by SIZE before printing them.  E.g.,\n                               `--block-size=M\' prints sizes in units of\n                               1,048,576 bytes.  See SIZE format below.\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime, newest first\n", 5);
    →fputs_unlocked(__s3, __stream3);
    FILE* __stream4 = stdout;
    char* __s4 = →dcgettext(NULL, "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output.  WHEN defaults to `always\'\n                               or can be `never\' or `auto\'.  More info below\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n", 5);
    →fputs_unlocked(__s4, __stream4);
    FILE* __stream5 = stdout;
    char* __s5 = →dcgettext(NULL, "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n", 5);
    →fputs_unlocked(__s5, __stream5);
    FILE* __stream6 = stdout;
    char* __s6 = →dcgettext(NULL, "  -g                         like -l, but do not list owner\n", 5);
    →fputs_unlocked(__s6, __stream6);
    FILE* __stream7 = stdout;
    char* __s7 = →dcgettext(NULL, "      --group-directories-first\n                             group directories before files.\n                               augment with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n", 5);
    →fputs_unlocked(__s7, __stream7);
    FILE* __stream8 = stdout;
    char* __s8 = →dcgettext(NULL, "  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n", 5);
    →fputs_unlocked(__s8, __stream8);
    FILE* __stream9 = stdout;
    char* __s9 = →dcgettext(NULL, "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n", 5);
    →fputs_unlocked(__s9, __stream9);
    FILE* __stream10 = stdout;
    char* __s10 = →dcgettext(NULL, "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n", 5);
    →fputs_unlocked(__s10, __stream10);
    FILE* __stream11 = stdout;
    char* __s11 = →dcgettext(NULL, "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n", 5);
    →fputs_unlocked(__s11, __stream11);
    FILE* __stream12 = stdout;
    char* __s12 = →dcgettext(NULL, "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n", 5);
    →fputs_unlocked(__s12, __stream12);
    FILE* __stream13 = stdout;
    char* __s13 = →dcgettext(NULL, "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n", 5);
    →fputs_unlocked(__s13, __stream13);
    FILE* __stream14 = stdout;
    char* __s14 = →dcgettext(NULL, "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n", 5);
    →fputs_unlocked(__s14, __stream14);
    FILE* __stream15 = stdout;
    char* __s15 = →dcgettext(NULL, "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n", 5);
    →fputs_unlocked(__s15, __stream15);
    FILE* __stream16 = stdout;
    char* __s16 = →dcgettext(NULL, "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-\', STYLE\n                             takes effect only outside the POSIX locale\n", 5);
    →fputs_unlocked(__s16, __stream16);
    FILE* __stream17 = stdout;
    char* __s17 = →dcgettext(NULL, "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n", 5);
    →fputs_unlocked(__s17, __stream17);
    FILE* __stream18 = stdout;
    char* __s18 = →dcgettext(NULL, "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n", 5);
    →fputs_unlocked(__s18, __stream18);
    FILE* __stream19 = stdout;
    char* __s19 = →dcgettext(NULL, "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n", 5);
    →fputs_unlocked(__s19, __stream19);
    FILE* __stream20 = stdout;
    char* __s20 = →dcgettext(NULL, "      --help     display this help and exit\n", 5);
    →fputs_unlocked(__s20, __stream20);
    FILE* __stream21 = stdout;
    char* __s21 = →dcgettext(NULL, "      --version  output version information and exit\n", 5);
    →fputs_unlocked(__s21, __stream21);
    FILE* __stream22 = stdout;
    char* __s22 = →dcgettext(NULL, "\nSIZE may be (or may be an integer optionally followed by) one of following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n", 5);
    →fputs_unlocked(__s22, __stream22);
    FILE* __stream23 = stdout;
    char* __s23 = →dcgettext(NULL, "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n", 5);
    →fputs_unlocked(__s23, __stream23);
    FILE* __stream24 = stdout;
    char* __s24 = →dcgettext(NULL, "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n", 5);
    →fputs_unlocked(__s24, __stream24);
    sub_80520B0(gvar_8062DBC);
    →dcgettext(NULL, "\nReport %s bugs to %s\n", 5);
    char* ptr0 = "bug-coreutils@gnu.org";
    →__printf_chk();
    →dcgettext(NULL, "%s home page: <%s>\n", 5);
    ptr0 = "http://www.gnu.org/software/coreutils/";
    →__printf_chk();
    FILE* __stream25 = stdout;
    char* __s25 = →dcgettext(NULL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5);
    →fputs_unlocked(__s25, __stream25);
    char* __s1_1 = →setlocale(5, NULL);
    if(__s1_1) {
        int v0 = →strncmp(__s1_1, (char*)&gvar_805A142, 3);
        if(v0) {
            char* ptr1 = sub_80520B0(gvar_8062DBC);
            char* ptr2 = →dcgettext(NULL, "Report %s translation bugs to <http://translationproject.org/team/>\n", 5);
            →__printf_chk();
        }
    }
    char* ptr3 = sub_80520B0(gvar_8062DBC);
    →dcgettext(NULL, "For complete documentation, run: info coreutils \'%s invocation\'\n", 5);
    __category = (int)ptr3;
    →__printf_chk();
    goto loc_80513EF;
}

int sub_8051AA0(int param0, int param1) {
    int result = 0;
    if((*(int*)(param1 + 16) & 0xf000) != 0xa000) {
        int v0 = param0;
        result = →acl_extended_file_nofollow();
        if(result < 0) {
            int* ptr0 = →__errno_location();
            int v1 = ptr0[0];
            result = v1 == 38 || v1 == 95 || v1 == 22 ? 0: (v1 == 16 ? 1: 0) - 1;
        }
    }
    return result;
}

int sub_8051B00(int param0, unsigned int param1) {
    /*NO_RETURN*/ →malloc(param1 <= 0x400 ? (size_t)(param1 + 1): 1025);
}

int sub_8051C00(char* __s, unsigned int* param1, void* param2, size_t __n1) {
    size_t v0 = →strlen(__s);
    int result1 = -1;
    char* __s1 = *param1;
    size_t __n = v0;
    if(__s1) {
        void* __s2 = param2;
        int result = 0;
        char v1 = 0;
    loc_8051C9D:
        do {
            int v2 = →strncmp(__s1, __s, __n);
            if(!v2) {
                size_t v3 = →strlen(__s1);
                if(v3 == __n) {
                    return result;
                }
                else if(result1 == -1) {
                    __s2 = (void*)((int)__s2 + __n1);
                    result1 = result;
                    ++result;
                    __s1 = *(char**)(result * 4 + (int)param1);
                    if(__s1) {
                        goto loc_8051C9D;
                    }
                }
                else {
                    if(param2) {
                        int v4 = →memcmp((void*)(result1 * __n1 + (int)param2), __s2, __n1);
                        v1 = v4 ? 1: v1;
                    }
                    else {
                        v1 = 1;
                    }
                    goto loc_8051C7E;
                }
            }
            else {
            loc_8051C7E:
                ++result;
                __s2 = (void*)((int)__s2 + __n1);
                __s1 = *(char**)(result * 4 + (int)param1);
            }
            break;
        }
        while(!__s1);
        result1 = v1 ? -2: result1;
    }
    return result1;
}

int sub_8051D10(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result;
    char* __format = param2 != -1 ? →dcgettext(NULL, "ambiguous argument %s for %s", 5): →dcgettext(NULL, "invalid argument %s for %s", 5);
    int v4 = sub_8055690(1, param0);
    int v5 = sub_80567D0(0, 6);
    →error(0, 0, __format, v5, v4, v0, v1, v2, v3);
    return result;
}

_IO_FILE* sub_8051DB0(int* param0, void* param1, size_t __n) {
    void* __s2 = param1;
    int* ptr0 = param0;
    char* ptr1 = →dcgettext(NULL, "Valid arguments are:", 5);
    int v0 = 1;
    int v1 = (int)ptr1;
    unsigned int v2 = stderr;
    →__fprintf_chk();
    if(*ptr0) {
        void* __s1 = NULL;
        int v3 = 0;
    loc_8051E4F:
        do {
            if(v3) {
                int v4 = →memcmp(__s1, __s2, __n);
                if(v4) {
                    goto loc_8051E18;
                }
                else {
                    unsigned int v5 = stderr;
                    ++v3;
                    __s2 = (void*)((int)__s2 + __n);
                    v1 = ", `%s\'";
                    v2 = v5;
                    →__fprintf_chk();
                    if(*(int*)(v3 * 4 + (int)ptr0)) {
                        goto loc_8051E4F;
                    }
                }
            }
            else {
            loc_8051E18:
                unsigned int v6 = stderr;
                ++v3;
                v1 = "\n  - `%s\'";
                v2 = v6;
                →__fprintf_chk();
                __s1 = __s2;
                __s2 = (void*)((int)__s2 + __n);
            }
            break;
        }
        while(!*(int*)(v3 * 4 + (int)ptr0));
    }
    _IO_FILE* result = stderr;
    char* ptr2 = result->_IO_write_ptr;
    if(result->_IO_write_end > ptr2) {
        ptr2[0] = 10;
        result->_IO_write_ptr = ptr2 + 1;
    }
    else {
        result = (_IO_FILE*)→__overflow(result, 10);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051EE0(int param0, char* __s, unsigned int* param2, void* param3, size_t __n1) {
    int v0;
    int v1;
    int v2;
    int result = sub_8051C00(__s, param2, param3, __n1);
    if(result < 0) {
        sub_8051D10(param0, (int)__s, result);
        sub_8051DB0((int*)param2, param3, __n1);
        __n1(v0, v1, v2);
        result = -1;
    }
    return result;
}

int sub_8051F60(void* __s1, int* param1, void* param2, size_t __n) {
    int* ptr0 = param1;
    int result = *ptr0;
    if(result) {
        void* __s2 = param2;
        do {
            int v0 = →memcmp(__s1, __s2, __n);
            if(!v0) {
                return result;
            }
            result = *(ptr0 + 1);
            __s2 = (void*)((int)__s2 + __n);
            ++ptr0;
        }
        while(!result);
    }
    return result;
}

char* sub_80520B0(char* param0) {
    char* result = param0;
    char i;
    for(i = *result; i == 47; i = *result) {
        ++result;
    }
    if(i) {
        char* ptr0 = result;
        int v0 = 0;
    loc_80520ED:
        do {
            if(i == 47) {
                ++ptr0;
                v0 = 1;
                i = *ptr0;
                if(i) {
                    goto loc_80520ED;
                }
            }
            else {
                if((unsigned char)v0) {
                    result = ptr0;
                    v0 = 0;
                }
                ++ptr0;
                i = *ptr0;
            }
            return result;
        }
        while(!i);
    }
    return result;
}

size_t sub_8052100(char* __s) {
    size_t result = →strlen(__s);
    if(result > 1) {
        while(__s[result - 1] == 47) {
            --result;
            if(result == 1) {
                return result;
            }
        }
    }
    return result;
}

int sub_80522D0(int param0, char* param1) {
    param0 = *(int*)(param0 + 16);
    int v0 = param0;
    int v1 = 45;
    char* ptr0 = param1;
    if((v0 & 0xf000) != 0x8000) {
        v1 = (v0 & 0xf000) == 0x4000 ? 100: (v0 & 0xf000) == 0x6000 ? 98: (v0 & 0xf000) == 0x2000 ? 99: (v0 & 0xf000) == 0xa000 ? 108: (v0 & 0xf000) == 0x1000 ? 112: (v0 & 0xf000) == 0xc000 ? 115: 63;
    }
    *ptr0 = (unsigned char)v1;
    *(ptr0 + 1) = (unsigned char)(((unsigned int)(v0 & 0x100) < 1 ? -1: 0) & 0xffffffbb) + 114;
    *(ptr0 + 2) = (unsigned char)(((unsigned int)(v0 & 0x80) < 1 ? -1: 0) & 0xffffffb6) + 119;
    *(ptr0 + 3) = ((unsigned char)(v0 >>> 8) & 0x8) != 0 ? (unsigned char)(((unsigned int)(v0 & 0x40) < 1 ? -1: 0) & 0xffffffe0) + 115: (unsigned char)(((unsigned int)(v0 & 0x40) < 1 ? -1: 0) & 0xffffffb5) + 120;
    *(ptr0 + 4) = (unsigned char)(((unsigned int)(v0 & 0x20) < 1 ? -1: 0) & 0xffffffbb) + 114;
    *(ptr0 + 5) = (unsigned char)(((unsigned int)(v0 & 0x10) < 1 ? -1: 0) & 0xffffffb6) + 119;
    *(ptr0 + 6) = ((unsigned char)(v0 >>> 8) & 0x4) != 0 ? (unsigned char)(((unsigned int)(v0 & 0x8) < 1 ? -1: 0) & 0xffffffe0) + 115: (unsigned char)(((unsigned int)(v0 & 0x8) < 1 ? -1: 0) & 0xffffffb5) + 120;
    *(ptr0 + 7) = (unsigned char)(((unsigned int)(v0 & 0x4) < 1 ? -1: 0) & 0xffffffbb) + 114;
    *(ptr0 + 8) = (unsigned char)(((unsigned int)(v0 & 0x2) < 1 ? -1: 0) & 0xffffffb6) + 119;
    if(((unsigned char)(v0 >>> 8) & 0x2)) {
        *(ptr0 + 9) = (unsigned char)(((unsigned int)(v0 & 1) < 1 ? -1: 0) & 0xffffffe0) + 116;
        *(ptr0 + 10) = 32;
        *(ptr0 + 11) = 0;
        return (((unsigned int)(v0 & 1) < 1 ? -1: 0) & 0xffffffe0) + 116;
    }
    *(ptr0 + 9) = (unsigned char)(((unsigned int)(v0 & 1) < 1 ? -1: 0) & 0xffffffb5) + 120;
    *(ptr0 + 10) = 32;
    *(ptr0 + 11) = 0;
    return (((unsigned int)(v0 & 1) < 1 ? -1: 0) & 0xffffffb5) + 120;
}

int sub_80522E0(char* param0, char* param1, int param2) {
    int v0 = param2;
    /*NO_RETURN*/ sub_8052310(param0, param1);
}

void sub_8052310(char* param0, char* param1) {
    int v0;
    int v1 = v0;
    int v2 = 0;
    char* __s = sub_80520B0(param0);
    size_t v3 = sub_8052100(__s);
    int* ptr0 = (int*)((int)(int*)((int)__s - (int)param0) + v3);
    if(v3) {
        v2 = __s[v3 - 1] == 47 ? 0: 1;
    }
    char* __s1 = param1;
    if(param1[0] != 47) {
    loc_805236A:
        size_t v4 = →strlen(__s1);
        /*NO_RETURN*/ →malloc((size_t)((int)(int*)(v2 + (int)ptr0) + (v4 + 1)));
    }
    while(1) {
        ++__s1;
        if(__s1[0] != 47) {
            goto loc_805236A;
        }
        else {
            ++__s1;
            if(__s1[0] != 47) {
                goto loc_805236A;
            }
        }
    }
}

char* sub_8052420() {
    int v0;
    unsigned int* ptr0;
    char* result = NULL;
    int v1 = v0;
    char* ptr1 = *ptr0;
    char v2 = *ptr1;
    if(v2) {
        int v3 = 0;
    loc_8052461:
        do {
            if((unsigned char)v3) {
                v3 = 0;
                if((unsigned int)(((int)v2 & 0xffffffdf) - 65) > 25) {
                loc_8052450:
                    result = v2 == 126 ? result: NULL;
                }
            loc_8052453:
                ++ptr1;
                *ptr0 = ptr1;
                v2 = *ptr1;
            }
            else if(v2 != 46) {
                int v4 = (int)v2;
                if((unsigned int)(v4 - 48) <= 9) {
                    goto loc_8052453;
                }
                else if((unsigned int)((v4 & 0xffffffdf) - 65) > 25) {
                    goto loc_8052450;
                }
                else {
                    ++ptr1;
                    *ptr0 = ptr1;
                    v2 = *ptr1;
                    if(v2) {
                        goto loc_8052461;
                    }
                }
            }
            else {
                v3 = 1;
                result = result ? result: ptr1;
                goto loc_8052453;
            }
            return result;
        }
        while(!v2);
    }
    return result;
}

int sub_80524B0(char* param0, char* param1) {
    int result;
    int v0;
    char v1;
    size_t v2;
    char v3;
    int v4;
    char* __s1 = param0;
    char* __s2 = param1;
    int v5 = →strcmp(__s1, __s2);
    int result1 = v5;
    if(v5) {
        char v6 = __s1[0];
        if(v6) {
            unsigned int v7 = (unsigned int)__s2[0];
            if(!(unsigned char)v7) {
            loc_805250D:
                result1 = 1;
            }
            else if(!(46 - (unsigned int)v6) && !__s1[1]) {
                return -1;
            }
            else if(!(46 - (unsigned int)(unsigned char)v7) && !__s2[1]) {
                goto loc_805250D;
            }
            else if(!(46 - (unsigned int)v6) && __s1[1] == 46 && !__s1[2]) {
                return -1;
            }
            else {
                if((unsigned int)(unsigned char)v7 != 46) {
                    goto loc_8052546;
                }
                if(__s2[1] == 46 && !__s2[2]) {
                    goto loc_805250D;
                }
                else {
                loc_8052546:
                    if(v6 == 46) {
                        ++__s1;
                        ++__s2;
                        if((unsigned char)v7 != 46) {
                            return -1;
                        }
                    }
                    else if((unsigned char)v7 == 46) {
                        goto loc_805250D;
                    }
                    char* ptr0 = __s1;
                    char* ptr1 = __s2;
                    char* ptr2 = sub_8052420();
                    char* ptr3 = sub_8052420();
                    size_t __n = (size_t)((int)(ptr2 ? ptr2: ptr0) - (int)__s1);
                    size_t v8 = (size_t)((int)(ptr3 ? ptr3: ptr1) - (int)__s2);
                    if((ptr3 || ptr2) && __n == v8) {
                        ptr3 = (char*)→strncmp(__s1, __s2, __n);
                        v8 = __n;
                        if(!ptr3) {
                            v2 = (size_t)((int)ptr1 - (int)__s2);
                            __n = (size_t)((int)ptr0 - (int)__s1);
                            v8 = v2;
                        }
                    }
                    unsigned int v9 = 0;
                    v7 = 0;
                    do {
                        if(v9 < v8 || v7 < __n) {
                            char* ptr4 = __s1;
                            char* ptr5 = __s2;
                            while(1) {
                                if(v7 < __n) {
                                    v1 = ptr4[v7];
                                    if((unsigned int)((int)v1 - 48) > 9) {
                                        goto loc_8052666;
                                    }
                                }
                                if(v9 >= v8) {
                                    __s2 = ptr5;
                                    __s1 = ptr4;
                                    v0 = (unsigned int)__s2[v9];
                                    goto loc_805273A;
                                }
                                else {
                                    char v10 = ptr5[v9];
                                    if((unsigned int)((int)v10 - 48) <= 9) {
                                        __s2 = ptr5;
                                        v0 = (unsigned int)v10;
                                        __s1 = ptr4;
                                        goto loc_805273A;
                                    }
                                    else {
                                        if(v7 != __n) {
                                            v1 = ptr4[v7];
                                        loc_8052666:
                                            ptr2 = (char*)v1;
                                            if((unsigned int)(int*)(ptr2 - 48) <= 9) {
                                                ptr2 = NULL;
                                            }
                                            else if((unsigned int)(int*)((char*)((int)ptr2 & 0xffffffdf) - 65) > 25) {
                                                ptr2 = v1 == 126 ? (char*)0xFFFFFFFF: ptr2 + 0x100;
                                            }
                                            v2 = 0;
                                            if(v9 == v8) {
                                                goto loc_8052612;
                                            }
                                        }
                                        else {
                                            ptr2 = NULL;
                                        }
                                        char v11 = ptr5[v9];
                                        v2 = (size_t)v11;
                                        if((unsigned int)(v2 - 48) <= 9) {
                                            v2 = 0;
                                        }
                                        else if((unsigned int)((v2 & 0xffffffdf) - 65) > 25) {
                                            v2 = v11 == 126 ? 0xffffffff: v2 + 0x100;
                                        }
                                    loc_8052612:
                                        if(v2 != ptr2) {
                                            break;
                                        }
                                        else {
                                            ++v7;
                                            ++v9;
                                        }
                                    }
                                }
                            }
                            int v12 = (int)ptr2 - v2;
                            return v12 ? v12: result1;
                        loc_805273A:
                            char v13 = __s1[v7];
                            (char)ptr4 = __s1[v7];
                            if(v13 == 48) {
                                do {
                                    ++v7;
                                    v3 = __s1[v7];
                                }
                                while(v3 == 48);
                                (char)ptr4 = v3;
                            }
                            if((unsigned char)v0 == 48) {
                                do {
                                    ++v9;
                                    v4 = (unsigned int)__s2[v9];
                                }
                                while((unsigned char)v4 == 48);
                                v0 = v4;
                                (char*)(ptr4 & 0xFF) = (unsigned char)ptr4;
                            }
                            char* ptr6 = (char*)(unsigned char)ptr4;
                            if((unsigned int)(int*)(ptr6 - 48) <= 9) {
                                int v14 = (int)(unsigned char)v0;
                                if((unsigned int)(v14 - 48) <= 9) {
                                    v2 = (size_t)ptr6;
                                    ptr2 = NULL;
                                    ptr4 = __s2;
                                loc_80527C0:
                                    do {
                                        ptr2 = ptr2 ? ptr2: (char*)(v2 - v14);
                                        ++v7;
                                        v2 = (size_t)__s1[v7];
                                        ++v9;
                                        __s2 = ptr4;
                                        if((unsigned int)(v2 - 48) > 9) {
                                            v0 = (unsigned int)__s2[v9];
                                            goto loc_80527E8;
                                        }
                                        else {
                                            v14 = (int)__s2[v9];
                                        }
                                        if((unsigned int)(v14 - 48) <= 9) {
                                            goto loc_80527C0;
                                        }
                                    }
                                    while((unsigned int)(v14 - 48) <= 9);
                                }
                                result = 1;
                                return result;
                            }
                            ptr2 = NULL;
                        loc_80527E8:
                            if((unsigned int)((int)(unsigned char)v0 - 48) <= 9) {
                                result = -1;
                                return result;
                            }
                        }
                        else {
                            return result1;
                        }
                    }
                    while(!ptr2);
                    return (int)ptr2;
                }
            }
        }
        else {
            result1 = -1;
        }
    }
    return result1;
}

int sub_8052840(timespec* param0) {
    long v0;
    int v1;
    timespec* __tp = param0;
    int result = →clock_gettime(0, __tp);
    if(result) {
        →gettimeofday(&v0, NULL);
        __tp->tv_sec = v0;
        result = v1 * 1000;
        __tp->tv_nsec = (long)(v1 * 1000);
    }
    return result;
}

int sub_8052890(int __category) {
    char* ptr0 = →setlocale(__category, NULL);
    int result = 1;
    if(ptr0) {
        char v0 = ptr0[0] == 67;
        if(v0) {
            v0 = ptr0[1] ? 0: 1;
            if(v0) {
                return 0;
            }
        }
        char* ptr1 = "POSIX";
        int v1 = 6;
        while(v1 != 0) {
            v0 = ptr0[0] == *ptr1;
            ++ptr0;
            ++ptr1;
            --v1;
            if(!v0) {
                break;
            }
        }
        return v0 ? 0: 1;
    }
    return result;
}

int sub_8052920(int param0, int param1) {
    int* ptr0;
    unsigned int v0 = (unsigned int)*(ptr0 + 6)(param1, *(ptr0 + 2));
    if(*(unsigned int*)(ptr0 + 2) <= v0) {
        /*NO_RETURN*/ →abort();
    }
    return v0 * 8 + *ptr0;
}

int sub_8052950(char param0) {
    int result1;
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    char v5 = param0;
    int v6 = sub_8052920(v3, v0);
    int v7 = v6;
    *(int*)v3 = v6;
    int result = *(int*)v6;
    if(result) {
        if(result != v0) {
            int v8 = *(int*)(v1 + 28)(v0, result);
            if((unsigned char)v8) {
                result = *(int*)v7;
                goto loc_80529E8;
            }
            else {
                ptr0 = *(unsigned int*)(v7 + 4);
                result = 0;
            }
            if(ptr0) {
                do {
                    result = *ptr0;
                    if(result != v0) {
                        result1 = *(int*)(v1 + 28)(v0, result);
                        if((unsigned char)result1) {
                            ptr0 = *(unsigned int*)(v7 + 4);
                            result = *ptr0;
                            if(v5) {
                                *(int*)(v7 + 4) = *(ptr0 + 1);
                                *ptr0 = 0;
                                *(ptr0 + 1) = *(int*)(v1 + 36);
                                *(unsigned int*)(v1 + 36) = ptr0;
                            }
                            return result;
                        }
                        v7 = *(int*)(v7 + 4);
                        ptr0 = *(unsigned int*)(v7 + 4);
                    }
                    else if(v5) {
                        *(int*)(v7 + 4) = *(ptr0 + 1);
                        *ptr0 = 0;
                        *(ptr0 + 1) = *(int*)(v1 + 36);
                        *(unsigned int*)(v1 + 36) = ptr0;
                        return result;
                    }
                    else {
                        return result;
                    }
                }
                while(!ptr0);
                return result1;
            }
        }
        else {
        loc_80529E8:
            if(v5) {
                ptr0 = *(unsigned int*)(v7 + 4);
                if(ptr0) {
                    int v9 = *(ptr0 + 1);
                    *(int*)v7 = *ptr0;
                    *(int*)(v7 + 4) = v9;
                    *ptr0 = 0;
                    *(ptr0 + 1) = *(int*)(v1 + 36);
                    *(unsigned int*)(v1 + 36) = ptr0;
                    return result;
                }
                *(int*)v7 = 0;
            }
        }
    }
    return result;
}

int* sub_8052A50(int param0, unsigned int* param1) {
    int* result;
    int v0;
    int* ptr0 = *param1;
    char v1 = *(param1 + 1) > (unsigned int)ptr0;
    unsigned int* ptr1 = param1;
    char v2 = (unsigned char)param0;
    if(v1) {
    loc_8052A70:
        do {
            int v3 = *ptr0;
            if(v3) {
                int* ptr2 = *(unsigned int*)(ptr0 + 1);
                if(ptr2) {
                    while(1) {
                        int v4 = *ptr2;
                        int v5 = sub_8052920(param0, v4);
                        int* ptr3 = *(unsigned int*)(ptr2 + 1);
                        param0 = *(int*)v5;
                        if(!param0) {
                            *(int*)v5 = v4;
                            *(int*)(v0 + 12) = *(int*)(v0 + 12) + 1;
                            *ptr2 = 0;
                            *(ptr2 + 1) = *(int*)(v0 + 36);
                            *(unsigned int*)(v0 + 36) = ptr2;
                            if(ptr3) {
                                goto loc_8052A8D;
                            }
                            else {
                                break;
                            }
                        }
                        else {
                            param0 = *(int*)(v5 + 4);
                            *(ptr2 + 1) = *(int*)(v5 + 4);
                            *(unsigned int*)(v5 + 4) = ptr2;
                        }
                        if(!ptr3) {
                            break;
                        }
                        else {
                        loc_8052A8D:
                            ptr2 = ptr3;
                        }
                    }
                    v3 = *ptr0;
                }
                *(ptr0 + 1) = 0;
                if(v2) {
                    return result;
                }
                int v6 = sub_8052920(param0, v3);
                param0 = *(int*)v6;
                if(param0) {
                    result = *(unsigned int*)(v0 + 36);
                    if(!result) {
                        /*NO_RETURN*/ →malloc(8);
                    }
                    *(int*)(v0 + 36) = *(result + 1);
                    int v7 = *(int*)(v6 + 4);
                    *result = v3;
                    *(result + 1) = v7;
                    *(unsigned int*)(v6 + 4) = result;
                }
                else {
                    *(int*)v6 = v3;
                    *(int*)(v0 + 12) = *(int*)(v0 + 12) + 1;
                }
                *ptr0 = 0;
                ptr0 += 2;
                *(int*)(ptr1 + 3) = *(int*)(ptr1 + 3) - 1;
                if(*(ptr1 + 1) > (unsigned int)ptr0) {
                    goto loc_8052A70;
                }
            }
            else {
                ptr0 += 2;
            }
            return result;
        }
        while(*(ptr1 + 1) > (unsigned int)ptr0);
    }
    return result;
}

int sub_8052B60() {
    __SyntheticTypeUnknownF v0;
    __int128 v1;
    __SyntheticTypeUnknownF v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    __int128 v6;
    __int128 v7;
    unsigned int* ptr0;
    float* ptr1 = *ptr0;
    int result = 1;
    if(ptr1 != 134599692) {
        v8[v9] = fucomi(0.10000000149011612, *(ptr1 + 2));
        if((unsigned int)ptr1 >= 134599692) {
            v8[v9] = fucomip(0.8999999761581421, v6);
            v8[v9] = fucomip(1.100000023841858, *(ptr1 + 3));
            fldz();
            v8[v9] = fucomi(*ptr1, v7);
            v8[v9] = fucomi(*(ptr1 + 1), v0 + v2);
            fld1();
            v8[v9] = fucomip(v5, v3);
            v8[v9] = fucomip(v1, v4);
        }
        else {
            *ptr0 = 134599692;
            result = 0;
        }
    }
    return result;
}

unsigned int sub_8052C10(float param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    unsigned int v4;
    int v5 = v2;
    if(!(unsigned char)v3) {
        unsigned int v6 = v4;
        int v7 = 0;
        v10[v11] = fucomi(4.294967296E9, (double)*(long long*)&v6 / param0);
    }
    else if(v4 <= 9) {
        v1 = 11;
        goto loc_8052C73;
    }
    else {
        v1 = v4 | 1;
        if(v1 != -1) {
        loc_8052C73:
            do {
                if(v1 <= 9) {
                    v0 = 3;
                loc_8052CB6:
                    if((v1 % v0)) {
                        return v1 < 0x40000000 ? v1: 0;
                    }
                }
                else if(v1 / 3 * 3 != v1) {
                    int v8 = 16;
                    unsigned int v9 = 9;
                    v0 = 3;
                    do {
                        v9 += v8;
                        v0 += 2;
                        if(v9 >= v1) {
                            goto loc_8052CB6;
                        }
                        else {
                            v8 += 8;
                        }
                    }
                    while(!(v1 % v0));
                }
                v1 += 2;
            }
            while(v1 != -1);
            return 0;
        }
    }
    return 0;
}

int sub_8052D20(int param0) {
    return *(int*)(param0 + 16);
}

int sub_8053140(int param0, int param1, int param2, int param3) {
    /*NO_RETURN*/ →malloc(40);
}

int sub_80532B0(unsigned int* param0) {
    int* ptr0;
    unsigned int v0;
    if(*(int*)(param0 + 8) && *(param0 + 4)) {
        ptr0 = *param0;
        if(*(param0 + 1) > (unsigned int)ptr0) {
            do {
                int v1 = *ptr0;
                if(v1 && ptr0) {
                    int* ptr1 = ptr0;
                    while(1) {
                        *(int*)(param0 + 8)(v1);
                        ptr1 = *(unsigned int*)(ptr1 + 1);
                        if(!ptr1) {
                            break;
                        }
                        else {
                            v1 = *ptr1;
                        }
                    }
                }
                v0 = *(param0 + 1);
                ptr0 += 2;
            }
            while(v0 > (unsigned int)ptr0);
            goto loc_80532FE;
        }
    }
    else {
        v0 = *(param0 + 1);
    loc_80532FE:
        ptr0 = *param0;
        if(v0 > (unsigned int)ptr0) {
            do {
                void* __ptr = *(void**)(ptr0 + 1);
                if(__ptr) {
                    /*NO_RETURN*/ →free(__ptr);
                }
                ptr0 += 2;
            }
            while(*(param0 + 1) > (unsigned int)ptr0);
        }
    }
    void* __ptr1 = *(void**)(param0 + 9);
    if(__ptr1) {
        /*NO_RETURN*/ →free(__ptr1);
    }
    /*NO_RETURN*/ →free(*param0);
}

int sub_8053370(unsigned int* param0) {
    unsigned int __nmemb = sub_8052C10(*(float*)(param0[5] + 8));
    unsigned int v0 = __nmemb;
    if(!__nmemb) {
        return 0;
    }
    else if(param0[2] != __nmemb) {
        __nmemb = (unsigned int)→calloc(__nmemb, 8);
        void* __ptr = (void*)__nmemb;
        if(__nmemb) {
            int v1 = v0 * 8 + __nmemb;
            unsigned int v2 = param0[6];
            int v3 = 0;
            int v4 = 0;
            unsigned int v5 = v2;
            unsigned int v6 = param0[7];
            unsigned int v7 = param0[8];
            unsigned int v8 = param0[9];
            int* ptr0 = sub_8052A50(0, param0);
            if((unsigned char)ptr0) {
                /*NO_RETURN*/ →free(param0[0]);
            }
            param0[9] = v8;
            int* ptr1 = sub_8052A50(1, &__ptr);
            if((unsigned char)ptr1) {
                int* ptr2 = sub_8052A50(0, &__ptr);
                if((unsigned char)ptr2) {
                    /*NO_RETURN*/ →free(__ptr);
                }
            }
            /*NO_RETURN*/ →abort();
        }
        return 0;
    }
    return 1;
}

int sub_80534F0(int param0, int param1, int* param2) {
    int result;
    int* ptr0;
    int v0;
    int v1 = param1;
    int v2 = v0;
    int* ptr1 = param2;
    int v3 = param0;
    if(v1) {
        int v4 = sub_8052950(0);
        if(!v4) {
            int v5 = *(int*)(v3 + 12);
            int v6 = 0;
            int v7 = v5;
            int v8 = *(int*)(v3 + 8);
            int v9 = *(int*)(v3 + 20);
            __SyntheticTypeUnknownF v10 = (double)*(long long*)&v7;
            v7 = v8;
            v13[v14] = fucomip((double)*(long long*)&v7 * *(float*)(v9 + 8), v10);
            ptr1 = ptr0;
            if(!*ptr1) {
                *ptr1 = v1;
                result = 1;
                *(int*)(v3 + 16) = *(int*)(v3 + 16) + 1;
                *(int*)(v3 + 12) = *(int*)(v3 + 12) + 1;
            }
            else {
                int v11 = *(int*)(v3 + 36);
                if(v11) {
                    *(int*)(v3 + 36) = *(int*)(v11 + 4);
                    int v12 = *(ptr1 + 1);
                    *(int*)v11 = v1;
                    *(int*)(v11 + 4) = v12;
                    *(ptr1 + 1) = v11;
                    *(int*)(v3 + 16) = *(int*)(v3 + 16) + 1;
                    return 1;
                }
                /*NO_RETURN*/ →malloc(8);
                result = -1;
            }
            return result;
        }
        result = 0;
        if(ptr1) {
            *ptr1 = v4;
            return result;
        }
    }
    else {
        /*NO_RETURN*/ →abort();
        *ptr1 = v1;
        result = 1;
        *(int*)(v3 + 16) = *(int*)(v3 + 16) + 1;
        *(int*)(v3 + 12) = *(int*)(v3 + 12) + 1;
    }
    return result;
}

int sub_80536D0(int param0, int param1) {
    int v0;
    int v1 = sub_80534F0(param0, param1, &v0);
    return v1 != -1 ? v1 ? param1: v0: 0;
}

int sub_8053710(int param0) {
    int* ptr0;
    int v0 = param0;
    int result = sub_8052950(1);
    if(result) {
        int* ptr1 = ptr0;
        *(int*)(v0 + 16) = *(int*)(v0 + 16) - 1;
        if(!*ptr1) {
            int v1 = *(int*)(v0 + 12) - 1;
            *(int*)(v0 + 12) = *(int*)(v0 + 12) - 1;
            int v2 = 0;
            int v3 = v1;
            int v4 = *(int*)(v0 + 8);
            float* ptr2 = *(unsigned int*)(v0 + 20);
            __SyntheticTypeUnknownF v5 = (double)*(long long*)&v3;
            v3 = v4;
            v6[v7] = fucomip((double)*(long long*)&v3 * *ptr2, v5);
        }
    }
    return result;
}

void* sub_8053850(unsigned int param0, unsigned int param1, char* param2, int param3, unsigned int param4, unsigned int param5, unsigned int param6, unsigned int param7) {
    void* ptr0;
    size_t __n1;
    unsigned int v0;
    __int128 v1;
    int v2;
    char v3;
    char v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    char v7;
    void* result;
    int v8;
    unsigned int v9;
    void* __dest1;
    unsigned int v10;
    unsigned int v11;
    __SyntheticTypeUnknown v12;
    __int128 v13;
    __int128 v14;
    __int128 v15;
    __int128 v16;
    __int128 v17;
    char v18;
    unsigned int v19;
    __int128 v20;
    __int128 v21;
    __int128 v22;
    short v23;
    __int128 v24;
    __int128 v25;
    __SyntheticTypeUnknownF v26;
    unsigned int v27 = param0;
    unsigned int v28 = param5;
    unsigned int v29 = param4;
    unsigned int v30 = param1;
    char* ptr1 = param2;
    unsigned int v31 = param0;
    unsigned int v32 = param6;
    char* __s2 = param2;
    unsigned int v33 = param7;
    unsigned int v34 = param6;
    int v35 = param3;
    unsigned int v36 = param7;
    int v37 = *(int*)(__GS_BASE + (int)(int*)0x14);
    int v38 = param3;
    unsigned int v39 = (unsigned int)(param3 & 0x3);
    void* ptr2 = (void*)(param3 & 0x20);
    unsigned int v40 = (unsigned int)((((unsigned int)(void*)(param3 & 0x20) < 1 ? -1: 0) & 0xffffffe8) + 0x400);
    void* ptr3 = (void*)(param3 & 0x20);
    lconv* ptr4 = →localeconv();
    char* __s = ptr4->decimal_point;
    size_t v41 = →strlen(__s);
    char* ptr5 = ptr4->thousands_sep;
    char* ptr6 = ptr4->grouping;
    char* __s1 = ptr5;
    unsigned int v42 = (unsigned int)(v41 - 1);
    char v43 = (unsigned int)(v41 - 1) == 15;
    char v44 = (unsigned int)(v41 - 1) < 15;
    size_t __n = (unsigned int)(v41 - 1) < 15 || (unsigned int)(v41 - 1) == 15 ? v41: 1;
    void* __src = (unsigned int)(v41 - 1) < 15 || (unsigned int)(v41 - 1) == 15 ? __s: (char*)&gvar_805A2B3;
    size_t v45 = →strlen(__s1);
    char* ptr7 = __s2;
    char* __s3 = v45 < 17 ? ptr5: (char*)&gvar_805DA85;
    char v46 = param5 == v36;
    char v47 = param5 > v36;
    void* ptr8 = (void*)(__s2 + 0x288);
    if((v47 || v46)) {
        if(v47) {
            goto loc_8053963;
        }
        else if(param4 >= v34) {
            goto loc_8053963;
        }
    }
    if((param4 | param5)) {
        int v48 = sub_8059DC0(v34, v36, param4, param5);
        if(!(v48 | v19)) {
            int v49 = sub_8059C90(v34, v36, param4, param5);
            unsigned int v50 = v19;
            unsigned int v51 = (unsigned int)v49;
            int v52 = sub_8059DC0(v31, v30, (unsigned int)v49, v19);
            unsigned int v53 = v51;
            v11 = v19;
            v10 = v51;
            unsigned int v54 = (unsigned int)(v52 * 10);
            unsigned int v55 = (unsigned int)(v52 * 10);
            unsigned int v56 = (unsigned int)(v19 * 10 + (unsigned int)(((unsigned long long)v52 * 10L) >>> 32L));
            int v57 = sub_8059DC0(v54, v56, v51, v19);
            unsigned int v58 = (unsigned int)((unsigned long long)((v57 >>> 31) & 1) | ((unsigned long long)v19 << 1) | ((unsigned long long)0 << 33));
            __dest1 = (void*)(v57 * 2);
            int v59 = sub_8059C90(v31, v30, v51, v19);
            unsigned int v60 = v51;
            v11 = v19;
            v10 = v51;
            int v61 = v59;
            unsigned int v62 = v54;
            unsigned int v63 = v19;
            int v64 = sub_8059C90(v54, v56, v10, v11);
            char v65 = v19 == v58;
            int v66 = v64;
            if(v19 < v58) {
            loc_8053D7E:
                v6 = 3;
            loc_8053F5E:
                int v67 = param3;
                void* __dest = ptr8;
                v31 = 0xffffffff;
                unsigned int v68 = (unsigned int)(param3 & 0x10);
                v51 = (unsigned int)(param3 & 0x10);
                if((unsigned int)(param3 & 0x10)) {
                    if(v63 < 0 || (v63 ? 0: 1)) {
                        char v69 = v40 > (unsigned int)v61;
                        v31 = 0;
                        if(!v69) {
                            goto loc_8053F89;
                        }
                    }
                    else {
                    loc_8053F89:
                        int v70 = v61;
                        unsigned int v71 = v63;
                        void* ptr9 = __src;
                        int v72 = v66;
                        v31 = 0;
                        unsigned int v73 = (unsigned int)v61;
                        do {
                            int v74 = sub_8059DC0(v73, v71, v40, 0);
                            __s1 = (char*)v73;
                            v0 = v71;
                            unsigned int v75 = (unsigned int)(v74 * 10 + v72);
                            unsigned int v76 = v75 % v40;
                            v54 = v75 / v40;
                            unsigned int v77 = v40;
                            unsigned int v78 = (unsigned int)(v76 * 2 + (v6 >> 1));
                            int v79 = sub_8059C90((unsigned int)__s1, v0, v40, 0);
                            v72 = (int)v54;
                            v73 = (unsigned int)v79;
                            v71 = v19;
                            v6 = v78 < v40 ? v6 + v78 ? 1: 0: ~((unsigned int)(v6 + v78) > v40 ? -1: 0) + 3;
                            ++v31;
                        }
                        while((int)v31 <= 7 && (v71 > 0 || v73 >= v40));
                        v63 = v71;
                        v66 = v72;
                        unsigned int v80 = v54;
                        char v81 = v63 ? 0: 1;
                        char v82 = v63 < 0;
                        v61 = (int)v73;
                        __src = ptr9;
                        if(((v63 >= 0 && !(v63 ? 0: 1)) || (unsigned int)v61 > 9)) {
                            __dest = ptr8;
                        }
                        else if((unsigned char)(v39 != 1 ? (v6 <= 0 ? 0: 1) & (v39 ? 0: 1): (unsigned int)((v80 & 1) + v6 <= 2 ? 0: 1) | ((unsigned int)((((v80 & 1) + v6) >>> 8) & 0xFFFFFF) << 8))) {
                            v66 = (int)(v80 + 1);
                            if(v66 != 10) {
                                goto loc_80540A0;
                            }
                            else {
                                int v83 = v61;
                                ++v61;
                                int v84 = v61;
                                v63 = (unsigned int)((unsigned int)((unsigned int)v83 >= 0xffffffff) + v63);
                                if(!((v61 ^ 0xa) | v63)) {
                                    __dest = ptr8;
                                    v6 = 0;
                                    v66 = 0;
                                }
                                else {
                                    v6 = 0;
                                    goto loc_80545D3;
                                }
                            }
                        }
                        else {
                            if(!v80) {
                            loc_80545D3:
                                v66 = 0;
                                __dest = ptr8;
                                if((unsigned char)param3 & 0x8) {
                                loc_80540D5:
                                    if(v39 == 1) {
                                        int v85 = v61;
                                        int v86 = 0;
                                        v39 = (unsigned int)(v61 & 1);
                                        v9 = (unsigned int)((((v6 >> 31) + (unsigned int)__carry__(v6, v39)) | (v6 + v39) ? 1: 0) + v66 <= 5 ? 0: 1) | ((unsigned int)((((((v6 >> 31) + (unsigned int)__carry__(v6, v39)) | (v6 + v39) ? 1: 0) + v66) >>> 8) & 0xFFFFFF) << 8);
                                    loc_80540EC:
                                        if((unsigned char)v9) {
                                            unsigned int v87 = v51;
                                            int v88 = v61;
                                            ++v61;
                                            v63 = (unsigned int)((unsigned int)((unsigned int)v88 >= 0xffffffff) + v63);
                                            if(v51 && !((v40 ^ v61) | v63) && (int)v31 <= 7) {
                                                ++v31;
                                                char v89 = (unsigned char)param3 & 0x8 ? 0: 1;
                                                v61 = 1;
                                                v63 = 0;
                                                if(((unsigned char)param3 & 0x8 ? 0: 1)) {
                                                    size_t v90 = __n;
                                                    *(char*)((int)__dest - 1) = 48;
                                                    __dest = (void*)((int)(int*)((int)__dest - 1) - __n);
                                                    →memcpy(__dest, __src, __n);
                                                }
                                            }
                                        }
                                    }
                                    else if(!v39) {
                                        v9 = v66 + v6 <= 0 ? 0: 1;
                                        goto loc_80540EC;
                                    }
                                    __src = __dest;
                                    void* ptr10 = __dest;
                                    unsigned int v91 = v63;
                                    unsigned int v92 = (unsigned int)v61;
                                    do {
                                        ptr10 = (void*)((int)ptr10 - 1);
                                        int v93 = sub_8059DC0(v92, v91, 10, 0);
                                        *(char*)ptr10 = (unsigned char)v93 + 48;
                                        v92 = (unsigned int)sub_8059C90(v92, v91, 10, 0);
                                        v91 = v19;
                                    }
                                    while(v19 | v92);
                                    __dest1 = ptr10;
                                    ptr0 = __src;
                                    if(((unsigned char)param3 & 0x4)) {
                                        goto loc_80541CC;
                                    }
                                    else {
                                    loc_8053E24:
                                        if(((unsigned char)param3 & 0x80)) {
                                            if(v31 == -1) {
                                                if((v36 < 0 || (v36 ? 0: 1))) {
                                                    char v94 = v34 == 1;
                                                    char v95 = v34 < 1;
                                                    v31 = 0;
                                                    if(v34 > 1) {
                                                        goto loc_805439A;
                                                    }
                                                }
                                                else {
                                                loc_805439A:
                                                    unsigned int v96 = v40;
                                                    unsigned int v97 = 1;
                                                    unsigned int v98 = 0;
                                                    unsigned int v99 = 1;
                                                    do {
                                                        unsigned int v100 = v97;
                                                        v97 *= v40;
                                                        v98 = v98 * v40 + (unsigned int)(((unsigned long long)v40 * (unsigned long long)v100) >>> 32L);
                                                        char v101 = v98 > v36;
                                                        if((v101 || v98 == v36) && (v101 || v97 >= v34)) {
                                                            break;
                                                        }
                                                        else {
                                                            ++v99;
                                                        }
                                                    }
                                                    while(v99 != 8);
                                                    v31 = v99;
                                                }
                                            }
                                            int v102 = param3 & 0x100;
                                            if(((param3 & 0x100) | v31)) {
                                                if((unsigned char)param3 & 0x40) {
                                                    char* ptr11 = __s2;
                                                    __s2[0x288] = ' ';
                                                    ptr8 = (void*)(__s2 + 649);
                                                }
                                                if(v31) {
                                                    if(v31 == 1) {
                                                        v8 = 107;
                                                        if(ptr3) {
                                                            goto loc_8053E77;
                                                        }
                                                    }
                                                    else {
                                                    loc_8053E77:
                                                        v8 = (unsigned int)*(char*)(v31 + 134599788);
                                                    }
                                                    void* ptr12 = ptr8;
                                                    *(char*)ptr8 = (unsigned char)v8;
                                                    ptr8 = (void*)((int)ptr8 + 1);
                                                }
                                                if((param3 & 0x100)) {
                                                    if(v31) {
                                                        result = ptr3;
                                                        if(result) {
                                                            void* ptr13 = ptr8;
                                                            *(char*)ptr8 = 105;
                                                            ptr8 = (void*)((int)ptr8 + 1);
                                                        }
                                                    }
                                                    void* ptr14 = ptr8;
                                                    *(char*)ptr8 = 66;
                                                    ptr8 = (void*)((int)ptr8 + 1);
                                                }
                                            }
                                        }
                                        char v103 = *(int*)(__GS_BASE + (int)(int*)0x14) ^ v37 ? 0: 1;
                                        v7 = 0;
                                        *(char*)ptr8 = 0;
                                        if(v103) {
                                            return result;
                                        }
                                        /*NO_RETURN*/ →__stack_chk_fail();
                                    }
                                }
                            }
                        loc_80540A0:
                            char* ptr15 = __s2;
                            __s2[647] = (unsigned char)v66 + 48;
                            v6 = 0;
                            __dest = (void*)((int)(int*)(__s2 + 647) - __n);
                            →memcpy(__dest, __src, __n);
                            v66 = 0;
                        }
                    }
                }
                goto loc_80540D5;
            }
            else if(v65 != 0 && (unsigned int)__dest1 >= v51) {
                v7 = v19 < v58;
                if(!v7 && v19 != v58) {
                    v6 = 2;
                    goto loc_8053F5E;
                }
                else if(!v7 && (unsigned int)__dest1 <= v51) {
                    v6 = 2;
                    goto loc_8053F5E;
                }
                else {
                    goto loc_8053D7E;
                }
            }
            else {
                v6 = (int*)((int)__dest1 | v58) ? 1: 0;
                goto loc_8053F5E;
            loc_8053963:
                int v104 = sub_8059DC0(param4, param5, v34, v36);
                if(!(v104 | v19)) {
                    int v105 = sub_8059C90(param4, param5, v34, v36);
                    unsigned int v106 = v31;
                    v11 = v19;
                    v10 = (unsigned int)v105;
                    unsigned int v107 = v31;
                    v51 = (unsigned int)(v105 * v30 + v31 * v19);
                    unsigned int v108 = (unsigned int)((unsigned int)(((unsigned long long)v105 * (unsigned long long)v31) >>> 32L) + v51);
                    v61 = v105 * v31;
                    unsigned int v109 = (unsigned int)(v105 * v31);
                    v63 = v108;
                    int v110 = sub_8059C90((unsigned int)v61, v63, v10, v11);
                    if(!((v110 ^ v31) | (v19 ^ v30))) {
                        v6 = 0;
                        v66 = 0;
                        goto loc_8053F5E;
                    }
                }
            }
        }
    }
    __SyntheticTypeUnknownF v111 = (double)*(long long*)&v31;
    if(v30 >= 0x80000000) {
        v111 += 1.8446744073709552E19;
    }
    unsigned int v112 = param4;
    unsigned int v113 = param5;
    __SyntheticTypeUnknownF v114 = (double)*(long long*)&v112;
    if(param5 < 0x80000000) {
        __src = (void*)v36;
        v5 = (double)*(long long*)&v34;
        if((int)__src < 0) {
            goto loc_805436E;
        }
    }
    else {
        v114 += 1.8446744073709552E19;
        __src = (void*)v36;
        v5 = (double)*(long long*)&v34;
        if((int)__src < 0) {
        loc_805436E:
            v5 += 1.8446744073709552E19;
        }
    }
    __SyntheticTypeUnknownF v115 = v114 / v5;
    __SyntheticTypeUnknownF v116 = v111 * v115;
    char v117 = 6;
    if(((unsigned char)param3 & 0x10)) {
        unsigned int v118 = v40;
        v113 = 0;
        v31 = 0;
        v112 = v40;
        unsigned int v119 = 0;
        __SyntheticTypeUnknownF v120 = (double)*(long long*)&v112;
        __SyntheticTypeUnknownF v121 = (double)*(long long*)&v112;
        while(1) {
            unsigned int v122 = v119;
            ++v119;
            v12[v152] = fucomi(v121 * v120, v116);
            if(v122 >= 0xffffffff || (int)v119 > 7) {
            loc_8053A0C:
                v12[v152 + 1] = fdivrp(v16, v26);
                char v123 = v39 == 1;
                char v124 = v39 < 1;
                v31 = v119;
                char v125 = 4;
                if(v39 != 1) {
                    v12[v152] = fucomip(*(__int128*)&gvar_805D4A0, v115);
                    if(v124 == 0) {
                        v12[v152] = fucomi(9.223372036854776E18, v5);
                        v23 = fnstcw(v23);
                        v12[v152 + 1] = fsubr(v24, v22);
                        __int128 v126 = v25;
                        v151 = fldcw((unsigned short)(unsigned char)v23 | ((unsigned short)12 << 8));
                        fistp();
                        v23 = fldcw(v23);
                        unsigned int v127 = v112;
                        int v128 = 0;
                        if(!v39) {
                            v112 = v127;
                            v113 = 0x80000000;
                            v128 = 1;
                            v12[v152] = fucomi((double)*(long long*)&v112 + 1.8446744073709552E19, v25);
                        }
                        v112 = v127 + v128;
                        v113 = (unsigned int)((unsigned int)__carry__(v127, v128) - 0x80000000);
                        v125 = 2;
                    }
                    else {
                        v125 = 3;
                    }
                }
                v1 = v12[v125];
                v11 = "%.1Lf";
                __SyntheticTypeUnknownF v129 = v12[v125 + 1];
                v10 = 0xffffffff;
                v0 = 1;
                →__sprintf_chk();
                size_t v130 = →strlen(__s2);
                __src = ptr3;
                v2 = __n + 1;
                __n1 = v130;
                char v131 = 6;
                __SyntheticTypeUnknownF v132 = v129;
                if((unsigned int)((__src ? 0: 1) + v2 + 1) < __n1 || (((unsigned char)param3 & 0x8) && __s2[__n1 - 1] == 48)) {
                    char v133 = v39 < 1;
                    v116 = v129 * 10.0;
                    if(v39 != 1) {
                        v131 = 5;
                        v12[v152] = fucomip(*(__int128*)&gvar_805D4A0, v129 * 10.0);
                        if(v133 == 0) {
                            v12[v152] = fucomi(9.223372036854776E18, v115);
                            v23 = fnstcw(v23);
                            v12[v152 + 1] = fsubr(v21, v15);
                            __int128 v134 = v20;
                            v151 = fldcw((unsigned short)(unsigned char)v23 | ((unsigned short)12 << 8));
                            fistp();
                            v23 = fldcw(v23);
                            unsigned int v135 = v112;
                            unsigned int v136 = v113 + 0x80000000;
                            int v137 = 0;
                            if(!v39) {
                                v112 = v135;
                                v113 = v136;
                                __SyntheticTypeUnknownF v138 = (double)*(long long*)&v112;
                                v137 = 1;
                                v12[v152] = fucomip(v136 < 0x80000000 ? v138: v138 + 1.8446744073709552E19, v20);
                                v4 = 4;
                            }
                            else {
                                v4 = 5;
                            }
                            unsigned int v139 = (unsigned int)((unsigned int)__carry__(v135, v137) + v136);
                            v112 = v135 + v137;
                            v113 = v139;
                            v131 = v4 - 1;
                            v12[v131] = (double)*(long long*)&v112;
                            if(v139 >= 0x80000000) {
                                v12[v131] += 1.8446744073709552E19;
                            }
                        }
                    }
                    v12[v131] /= 10.0;
                    v2 = 0;
                    v11 = "%.0Lf";
                    v10 = 0xffffffff;
                    v0 = 1;
                    v1 = v12[v131];
                    →__sprintf_chk();
                    __n1 = →strlen(__s2);
                }
                goto loc_8053DFC;
            }
            else {
                v121 = v26;
            }
        }
        goto loc_8053A0C;
    }
    else {
        char v140 = v39 < 1;
        if(v39 != 1) {
            v117 = 5;
            v12[v152] = fucomip(*(__int128*)&gvar_805D4A0, v116);
            if(v140 == 0) {
                v12[v152] = fucomi(9.223372036854776E18, v115);
                v23 = fnstcw(v23);
                v12[v152 + 1] = fsubr(v14, v13);
                __int128 v141 = v17;
                short v151 = fldcw((unsigned short)(unsigned char)v23 | ((unsigned short)12 << 8));
                fistp();
                v23 = fldcw(v23);
                unsigned int v142 = v112;
                unsigned int v143 = v113 + 0x80000000;
                int v144 = 0;
                if(!v39) {
                    v112 = v142;
                    v113 = v143;
                    __SyntheticTypeUnknownF v145 = (double)*(long long*)&v112;
                    v144 = 1;
                    v12[v152] = fucomip(v143 < 0x80000000 ? v145: v145 + 1.8446744073709552E19, v17);
                    v3 = 4;
                }
                else {
                    v3 = 5;
                }
                unsigned int v146 = (unsigned int)((unsigned int)__carry__(v142, v144) + v143);
                v112 = v142 + v144;
                v113 = v146;
                v117 = v3 - 1;
                v12[v117] = (double)*(long long*)&v112;
                if(v146 >= 0x80000000) {
                    v12[v117] += 1.8446744073709552E19;
                }
            }
        }
        v2 = 0;
        v1 = v12[v117];
        v11 = "%.0Lf";
        v10 = 0xffffffff;
        v0 = 1;
        →__sprintf_chk();
        size_t v147 = →strlen(__s2);
        v31 = 0xffffffff;
        __n1 = v147;
    }
loc_8053DFC:
    __dest1 = (void*)((int)ptr8 - __n1);
    ptr0 = (void*)(__n1 - v2 + (int)__dest1);
    →memmove(__dest1, __s2, __n1);
    if(!((unsigned char)param3 & 0x4)) {
        goto loc_8053E24;
    }
    else {
    loc_80541CC:
        unsigned int v148 = (unsigned int)((int)ptr0 - (int)__dest1);
        size_t __n2 = 0xffffffff;
        size_t v149 = →strlen(__s3);
        void* __dest2 = (void*)(v148 + (int)__dest1);
        v11 = 41;
        v10 = v148;
        __src = (void*)v149;
        __s1 = &v18;
        →__memcpy_chk();
        while(1) {
            char* ptr16 = ptr6;
            char v150 = ptr6[0];
            if(v150) {
                __n2 = (unsigned char)v150 <= 126 ? (unsigned int)v150: v148;
                ++ptr6;
            }
            __n2 = v148 >= __n2 ? __n2: v148;
            v148 -= __n2;
            __dest1 = (void*)((int)__dest2 - __n2);
            →memcpy(__dest1, (void*)(v148 + (int)&v18), __n2);
            if(!v148) {
                goto loc_8053E24;
            }
            else {
                __dest2 = (void*)((int)__dest1 - (int)__src);
                →memcpy(__dest2, __s3, (size_t)__src);
            }
        }
    }
}

int sub_8054660(char* param0, int* param1, int* param2) {
    int result;
    char* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char* __s = param0;
    int v6 = v5;
    int* ptr1 = param2;
    int* ptr2 = param1;
    if(!__s) {
        char* ptr3 = →getenv((char*)0x805A177);
        __s = ptr3;
        if(ptr3) {
            goto loc_8054687;
        }
        else {
            char* ptr4 = →getenv("BLOCKSIZE");
            __s = ptr4;
            if(ptr4) {
                goto loc_8054687;
            }
            else {
                char* ptr5 = →getenv("POSIXLY_CORRECT");
                v3 = 0;
                v2 = 0x400;
                if(ptr5) {
                    v2 = 0x200;
                    v3 = 0;
                }
                ptr1[0] = v2;
                v1 = 0;
                ptr1[1] = 0;
                goto loc_80546DD;
            }
        }
    }
    else {
    loc_8054687:
        v1 = 0;
        if(__s[0] == 39) {
            ++__s;
            v1 = 4;
        }
        char* ptr6 = __s;
        int v7 = sub_8051C00(__s, (unsigned int*)&gvar_805D478, (void*)&gvar_805D484, 4);
        if(v7 >= 0) {
            v1 |= *(int*)(v7 * 4 + (int)&gvar_805D484);
            v2 = 1;
            ptr1[0] = 1;
            v3 = 0;
            ptr1[1] = 0;
            goto loc_80546DD;
        }
        else {
            v0 = sub_8059230(ptr6, &v4, 0, ptr1, "eEgGkKmMpPtTyYzZ0");
            ptr0 = ptr6;
            result = v0;
        }
        if(!v0) {
            if((unsigned char)(ptr0[0] - 48) > 9) {
                if(ptr0 == v4) {
                    goto loc_8054820;
                }
                while(1) {
                    if((unsigned char)(ptr0[1] - 48) <= 9) {
                        goto loc_80547A6;
                    }
                    else {
                        ++ptr0;
                        if(ptr0 == v4) {
                        loc_8054820:
                            v1 |= 128;
                            if(*(char*)(v4 - 1) != 66) {
                                goto loc_805482C;
                            }
                            else {
                                v1 |= 0x100;
                            }
                            if(*(char*)(v4 - 2) != 105) {
                                goto loc_80547A6;
                            }
                            else {
                            loc_805482C:
                                v1 |= 32;
                                v2 = ptr1[0];
                                v3 = ptr1[1];
                                break;
                            }
                        }
                    }
                }
            }
            else {
            loc_80547A6:
                v2 = ptr1[0];
                v3 = ptr1[1];
            }
        loc_80546DD:
            *ptr2 = v1;
            result = 0;
        }
        else {
            *ptr2 = 0;
            v2 = ptr1[0];
            v3 = ptr1[1];
        }
    }
    if(!(v3 | v2)) {
        int v8 = 0x400;
        char* ptr7 = →getenv("POSIXLY_CORRECT");
        if(ptr7) {
            v8 = 0x200;
        }
        ptr1[1] = 0;
        result = 4;
        ptr1[0] = v8;
    }
    return result;
}

int sub_8054860(__uid_t __uid) {
    int v0 = gvar_8062DAC;
    if(!v0) {
    loc_805488E:
        passwd* ptr0 = →getpwuid(__uid);
        if(ptr0) {
            size_t v1 = →strlen(ptr0->pw_name);
            ptr0 = (passwd*)(v1 + 9);
        }
        else {
            ptr0 = (passwd*)0x9;
        }
        /*NO_RETURN*/ sub_8058A70((size_t)ptr0);
    }
    int v2 = v0;
    if(*(int*)v0 != __uid) {
        do {
            v0 = *(int*)(v0 + 4);
            if(!v0) {
                goto loc_805488E;
            }
        }
        while(*(int*)v0 == __uid);
        v2 = v0;
    }
    return *(char*)(v2 + 8) ? v2 + 8: 0;
}

int sub_80549F0(__gid_t __gid) {
    int v0 = gvar_8062DB4;
    if(!v0) {
    loc_8054A1E:
        group* ptr0 = →getgrgid(__gid);
        if(ptr0) {
            size_t v1 = →strlen(ptr0->gr_name);
            ptr0 = (group*)(v1 + 9);
        }
        else {
            ptr0 = (group*)0x9;
        }
        /*NO_RETURN*/ sub_8058A70((size_t)ptr0);
    }
    int v2 = v0;
    if(*(int*)v0 != __gid) {
        do {
            v0 = *(int*)(v0 + 4);
            if(!v0) {
                goto loc_8054A1E;
            }
        }
        while(*(int*)v0 == __gid);
        v2 = v0;
    }
    return *(char*)(v2 + 8) ? v2 + 8: 0;
}

char* sub_8054B80(unsigned int param0, unsigned int param1, int param2) {
    char* ptr0;
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param0;
    char* result = (char*)(param2 + 20);
    *(char*)(param2 + 20) = 0;
    if(v1 < 0x80000000) {
        do {
            --result;
            unsigned int v3 = sub_8059AC0(v2, v1, 10, 0);
            *result = (unsigned char)v3 + 48;
            v2 = sub_8059950(v2, v1, 10, 0);
            v1 = v0;
        }
        while(v0 | v2);
        return result;
    }
    do {
        ptr0 = result;
        --result;
        unsigned int v4 = sub_8059AC0(v2, v1, 10, 0);
        *(ptr0 - 1) = 48 - (unsigned char)v4;
        v2 = sub_8059950(v2, v1, 10, 0);
        v1 = v0;
    }
    while(v0 | v2);
    *(ptr0 - 2) = 45;
    return ptr0 - 2;
}

char* sub_8054C60(unsigned int param0, unsigned int param1, int param2) {
    unsigned int v0;
    unsigned int v1 = param0;
    unsigned int v2 = param1;
    char* result = (char*)(param2 + 20);
    *(char*)(param2 + 20) = 0;
    unsigned int v3 = v1;
    do {
        --result;
        int v4 = sub_8059DC0(v3, v2, 10, 0);
        *result = (unsigned char)v4 + 48;
        v3 = (unsigned int)sub_8059C90(v3, v2, 10, 0);
        v2 = v0;
    }
    while(v0 | v3);
    return result;
}

void sub_8054CE0(char* param0, void* param1, int param2, size_t param3, int param4, char param5) {
    size_t v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    size_t v4;
    void* __ptr;
    char* __s = param0;
    void* __dest = param1;
    size_t v5 = →strlen(__s);
    size_t v6 = v5;
    size_t v7 = v5;
    size_t v8 = →__ctype_get_mb_cur_max();
    if(v8 > 1) {
        size_t v9 = →mbstowcs(NULL, __s, 0);
        if(v9 != -1) {
            size_t v10 = v9;
            /*NO_RETURN*/ →malloc((size_t)((v9 + 1) * 4));
        }
        if(!(param5 & 1)) {
            __ptr = NULL;
            v3 = 0;
            v1 = 0xffffffff;
            /*NO_RETURN*/ →free(__ptr);
        }
        v4 = v6;
        __ptr = NULL;
        v7 = (size_t)__s;
        v3 = 0;
        goto loc_8054D8C;
    }
    else {
        __ptr = NULL;
    }
    v4 = v7;
    v3 = 0;
    v7 = (size_t)__s;
loc_8054D8C:
    size_t v11 = *(size_t*)param3;
    if(v11 < v6) {
        v4 = v11;
        v2 = 0;
    }
    else if(v11 > v6) {
        size_t v12 = v11;
        v11 = v6;
        v2 = (unsigned int)(v12 - v6);
    }
    else {
        v11 = v6;
        v2 = 0;
    }
    v6 = param3;
    *(size_t*)v6 = v11;
    v1 = v2 + v4;
    if(param2) {
        unsigned int v13 = v2;
        __s = (char*)((int)__dest + param2) - 1;
        v6 = (size_t)(v2 - 1);
        if(param4) {
            if(param4 != 1) {
                v13 >>>= 1;
                v2 = (unsigned int)((v2 & 1) + v13);
                v6 = (size_t)(v13 - 1);
                v0 = (size_t)(v2 - 1);
            }
            else {
                v0 = v6;
                v6 = 0xffffffff;
                v13 = 0;
            }
            if((v2 && (unsigned int)__dest < (unsigned int)__s)) {
                do {
                    *(char*)__dest = 32;
                    __dest = (void*)((int)__dest + 1);
                    if(!v0) {
                        break;
                    }
                    else {
                        --v0;
                    }
                }
                while(__dest == __s);
            }
        }
        size_t v14 = (size_t)((int)__s - (int)__dest);
        *(char*)__dest = 0;
        void* ptr0 = →mempcpy(__dest, (void*)v7, v14 <= v4 ? v14: v4);
        if((v13 && (unsigned int)ptr0 < (unsigned int)__s)) {
            do {
                *(char*)ptr0 = 32;
                ptr0 = (void*)((int)ptr0 + 1);
                if(!v6) {
                    break;
                }
                else {
                    --v6;
                }
            }
            while(ptr0 == __s);
        }
        *(char*)ptr0 = 0;
    }
    /*NO_RETURN*/ →free(__ptr);
}

int sub_8055160(char* param0, int param1, int param2) {
    int result;
    wchar_t __c;
    char* __s = param0;
    int v0 = *(int*)(__GS_BASE + (int)(int*)0x14);
    size_t v1 = (size_t)((int)__s + param1);
    size_t v2 = →__ctype_get_mb_cur_max();
    if(v2 > 1) {
        result = 0;
    alab1:
        while((unsigned int)__s < v1) {
            int v3 = (unsigned int)__s[0];
            if(__s[0] <= 95) {
                if((unsigned char)v3 >= 65 || ((unsigned char)v3 >= 32 && ((unsigned char)v3 <= 35 || (unsigned char)((unsigned char)v3 - 37) <= 26))) {
                    goto loc_8055298;
                }
            }
            else if((unsigned char)((unsigned char)v3 - 97) <= 29) {
                goto loc_8055298;
            }
            int v4 = 0;
            int v5 = 0;
            int v6 = param2 & 0x2;
            do {
                size_t v7 = →mbrtowc(&__c, __s, v1 - (int)__s, &v4);
                if(v7 != -1) {
                    if(v7 != -2) {
                        int v8 = →wcwidth(__c);
                        if(v8 < 0) {
                            if(v6) {
                            loc_805533F:
                                result = -1;
                                break alab1;
                            }
                            else {
                                int v9 = →iswcntrl((wint_t)__c);
                                if(!v9) {
                                    if(result == 0x7fffffff) {
                                        break alab1;
                                    }
                                    else {
                                        ++result;
                                    }
                                }
                                goto loc_8055204;
                            }
                        }
                        if(0x7fffffff - result >= v8) {
                            result += v8;
                        loc_8055204:
                            __s = (char*)((v7 ? v7: 1) + (int)__s);
                            int v10 = →mbsinit(&v4);
                        }
                        else {
                            result = 0x7fffffff;
                            break alab1;
                        }
                    }
                    else if((unsigned char)param2 & 1) {
                        goto loc_805533F;
                    }
                    else {
                        ++result;
                        break alab1;
                    }
                }
                else if((unsigned char)param2 & 1) {
                    goto loc_805533F;
                }
                else {
                loc_8055298:
                    ++__s;
                    ++result;
                }
            }
            while(1);
        }
    }
    else {
        result = 0;
        if((unsigned int)__s < v1) {
            unsigned short** ptr0 = →__ctype_b_loc();
            result = 0;
            unsigned short* ptr1 = ptr0[0];
            do {
                int v11 = (unsigned int)ptr1[(unsigned int)__s[0]];
                if(!((unsigned char)(v11 >>> 8) & 0x40)) {
                    if(param2 & 0x2) {
                        goto loc_805533F;
                    }
                    else if((unsigned char)v11 & 0x2) {
                        goto loc_8055333;
                    }
                }
                if(result == 0x7fffffff) {
                    break;
                }
                else {
                    ++result;
                loc_8055333:
                    ++__s;
                }
            }
            while(__s != v1);
        }
    }
    if((*(int*)(__GS_BASE + (int)(int*)0x14) ^ v0)) {
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return result;
}

int sub_8055350(char* __s, int param1) {
    size_t v0 = →strlen(__s);
    return sub_8055160(__s, (int)v0, param1);
}

void* sub_8055380(int param0) {
    int* ptr0;
    void* ptr1;
    int v0;
    unsigned int* ptr2;
    void* result;
    void* ptr3;
    void* ptr4 = result;
    void* ptr5 = ptr3;
    unsigned int* ptr6 = ptr2;
    if((unsigned int)ptr3 > 2) {
        int* ptr7 = (int*)((int)(int*)((int)(int*)((int)ptr5 >>> 1) * 4) + (int)ptr4);
        int* ptr8 = (int*)((int)ptr5 >>> 1);
        sub_8055380(param0);
        if(ptr8 != 1) {
            int* ptr9 = (int*)((int)ptr5 >>> 2);
            int* ptr10 = (int*)((int)(int*)((int)(int*)((int)ptr5 >>> 2) * 4) + (int)ptr4);
            sub_8055380(param0);
            sub_8055380(param0);
            int v1 = *(int*)ptr4;
            int v2 = *ptr10;
            ptr1 = ptr4;
            int* ptr11 = ptr9;
            ptr0 = NULL;
            int v3 = v1;
            void* __dest = (void*)(ptr6 + 1);
            while(1) {
                int v4 = v0(v3, v2);
                if(v4 <= 0) {
                    ptr0 = (int*)((char*)ptr0 + 1);
                    int* ptr12 = ptr0;
                    char v5 = ptr12 == ptr9;
                    *(int*)((int)__dest - 4) = v3;
                    if(!v5) {
                        v3 = *(int*)((int)(int*)((int)ptr12 * 4) + (int)ptr1);
                        goto loc_8055457;
                    }
                    else {
                        ptr4 = ptr1;
                        ptr0 = ptr11;
                        ptr9 = ptr8;
                        goto loc_8055581;
                    }
                }
                else {
                    ptr11 = (int*)((char*)ptr11 + 1);
                    char v6 = ptr11 == ptr8;
                    *(int*)((int)__dest - 4) = v2;
                    if(v6) {
                        break;
                    }
                    else {
                        v2 = *(int*)((int)(int*)((int)ptr11 * 4) + (int)ptr1);
                    loc_8055457:
                        __dest = (void*)((int)__dest + 4);
                    }
                }
            }
            ptr4 = ptr1;
        loc_8055581:
            →memcpy(__dest, (void*)((int)(int*)((int)ptr0 * 4) + (int)ptr4), (size_t)((int)(int*)((int)ptr9 - (int)ptr0) * 4));
            ptr0 = *ptr6;
        }
        else {
            int* ptr13 = *(int**)ptr4;
            ptr0 = *(int**)ptr4;
            *ptr6 = ptr13;
        }
        int* ptr14 = ptr8;
        ptr1 = NULL;
        int v7 = *ptr7;
        int v8 = 1;
        while(1) {
            result = (void*)v0((int)ptr0, v7);
            if((int)result <= 0) {
                ptr1 = (void*)((int)ptr1 + 1);
                ptr3 = ptr1;
                char v9 = ptr3 == ptr8;
                *(unsigned int*)((int*)(v8 * 4 + (int)ptr4) - 1) = ptr0;
                if(v9) {
                    return result;
                }
                ptr0 = *(unsigned int*)((int)(int*)((int)ptr3 * 4) + (int)ptr6);
            }
            else {
                ptr14 = (int*)((char*)ptr14 + 1);
                char v10 = ptr14 == ptr5;
                *((int*)(v8 * 4 + (int)ptr4) - 1) = v7;
                if(v10) {
                    break;
                }
                else {
                    v7 = *(int*)((int)(int*)((int)ptr14 * 4) + (int)ptr4);
                }
            }
            ++v8;
        }
        void* __dest1 = (void*)(v8 * 4 + (int)ptr4);
        →memcpy(__dest1, (void*)((int)(int*)((int)ptr1 * 4) + (int)ptr6), (size_t)((int)(int*)((int)ptr8 - (int)ptr1) * 4));
        return __dest1;
    }
    else if(ptr3 == 2) {
        int v11 = *(int*)result;
        int v12 = *(int*)((int)result + 4);
        result = (void*)v0(v11, v12);
        if((int)result > 0) {
            *(int*)ptr4 = v12;
            *(int*)((int)ptr4 + 4) = v11;
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80555B0(int param0, int param1, int param2) {
    return sub_8055380(param2);
}

char* sub_80555D0(char* param0) {
    char* __s = param0;
    if(!__s) {
        →fwrite("A NULL argv[0] was passed through an exec system call.\n", 1, 55, stderr);
        /*NO_RETURN*/ →abort();
    }
    char* result = →strrchr(__s, 47);
    if(result) {
        int* ptr0 = (int*)((int)(result + 1) - (int)__s);
        char v0 = ptr0 == 6;
        char v1 = (unsigned int)ptr0 < 6;
        if(!v0 && (int)ptr0 >= 6) {
            unsigned char* ptr1 = (unsigned char*)(result - 6);
            unsigned char* ptr2 = "/.libs/";
            ptr0 = (int*)0x7;
            while(ptr0 != 0) {
                v0 = *ptr1 == *ptr2;
                v1 = *ptr1 < *ptr2;
                ++ptr1;
                ++ptr2;
                ptr0 = (int*)((char*)ptr0 - 1);
                if(!v0) {
                    break;
                }
            }
            if(v0) {
                ptr0 = (int*)0x3;
                unsigned char* ptr3 = (unsigned char*)&gvar_805D4F0;
                char* ptr4 = result + 1;
                __s = result + 1;
                while(ptr0 != 0) {
                    v0 = ptr4[0] == *ptr3;
                    v1 = ptr4[0] < *ptr3;
                    ++ptr4;
                    ++ptr3;
                    ptr0 = (int*)((char*)ptr0 - 1);
                    if(!v0) {
                        break;
                    }
                }
                if((v1 || v0 ? 0: 1) == (v1 ? 1: 0)) {
                    __s = result + 4;
                    __progname = result + 4;
                }
            }
        }
    }
    gvar_8062DBC = __s;
    __progname_full = __s;
    return result;
}

int sub_8055690(int param0, int param1) {
    return sub_80567D0(param0, 6);
}

int sub_80556C0(int param0) {
    return sub_8055690(0, param0);
}

int* sub_80556E0(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int* result;
    int v12 = 12;
    int* ptr0 = &v6;
    while(v12 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v12;
    }
    if(param1 == 8) {
        /*NO_RETURN*/ →abort();
    }
    *result = param1;
    *(result + 1) = v0;
    *(result + 2) = v7;
    *(result + 3) = v1;
    *(result + 4) = v8;
    *(result + 5) = v2;
    *(result + 6) = v9;
    *(result + 7) = v3;
    *(result + 8) = v10;
    *(result + 9) = v4;
    *(result + 10) = v11;
    *(result + 11) = v5;
    return result;
}

int sub_8055760(size_t param0, char* param1, int param2, int param3, char* param4, char* param5) {
    void* ptr0;
    void* __s1;
    int v0;
    char* ptr1;
    char* ptr2;
    char v1;
    void* ptr3;
    char* ptr4;
    void* ptr5;
    char* ptr4;
    void* ptr5;
    char* ptr4;
    void* ptr5;
    char* ptr4;
    void* ptr5;
    size_t v2;
    size_t __n;
    size_t v3;
    void* ptr6;
    char* ptr4;
    void* ptr5;
    char* ptr4;
    void* ptr5;
    char* ptr4;
    void* ptr5;
    size_t v4;
    int v5;
    char* __s2;
    void* ptr7;
    size_t v6;
    wint_t __wc;
    char v7;
    char v8;
    size_t v9;
    size_t v10 = (unsigned int)v8 | ((unsigned int)v5 << 8);
    size_t v11 = v9;
    char* ptr8 = param4;
    size_t v12 = v4;
    int v13 = param3;
    void* ptr9 = ptr7;
    char* ptr10 = param4;
    char* ptr11 = param5;
    int v14 = param3;
    int v15 = *(int*)(__GS_BASE + (int)(int*)0x14);
    char* __s = param5;
    size_t v16 = →__ctype_get_mb_cur_max();
    char v17 = (unsigned char)param2 & 0x2 ? 1: 0;
    char v18 = param1 == 8;
    char v19 = (unsigned int)param1 < 8;
    size_t v20 = v16;
    if((unsigned int)param1 >= 8 && param1 != 8) {
        /*NO_RETURN*/ →abort();
    }
    switch(param1) {
        case 0: {
            v17 = 0;
            ptr6 = NULL;
            v3 = 0;
            __n = 0;
            v2 = 0;
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 1: {
            v17 = 1;
            ptr6 = NULL;
            v3 = 0;
            __n = 1;
            v2 = 134599557;
            param1 = (char*)0x2;
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 2: {
            if(!v17) {
                v16 = v12;
                if(v16) {
                    v16 = v11;
                    ptr6 = NULL;
                    v3 = 1;
                    __n = 1;
                    v2 = 134599557;
                    *(char*)v16 = 39;
                }
                else {
                    ptr6 = NULL;
                    v3 = 1;
                    __n = 1;
                    v2 = 134599557;
                }
            }
            else {
                ptr6 = NULL;
                v3 = 0;
                __n = 1;
                v2 = 134599557;
            }
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 3: {
            if(!v17) {
                v16 = v12;
                if(v16) {
                    v16 = v11;
                    ptr6 = (void*)0x1;
                    v3 = 1;
                    __n = 1;
                    v2 = &gvar_805D4F4;
                    *(char*)v16 = 34;
                }
                else {
                    ptr6 = (void*)0x1;
                    v3 = 1;
                    __n = 1;
                    v2 = &gvar_805D4F4;
                }
            }
            else {
                ptr6 = (void*)0x1;
                v3 = 0;
                __n = 1;
                v2 = &gvar_805D4F4;
            }
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 4: {
            v17 = 1;
            ptr6 = (void*)0x1;
            v3 = 0;
            __n = 1;
            v2 = &gvar_805D4F4;
            param1 = (char*)0x3;
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 5: {
            v17 = 0;
            ptr6 = (void*)0x1;
            v3 = 0;
            __n = 0;
            v2 = 0;
            ptr5 = ptr6;
            ptr4 = NULL;
            goto loc_8055827;
        }
        case 6: 
        case 7: 
        case 8: {
            if(param1 != 8) {
                char* ptr12 = →dcgettext(NULL, (char*)&gvar_805D4F6, 5);
                v8 = param1 == 7 ? 1: 0;
                ptr10 = ptr12;
                if(ptr12 == &gvar_805D4F6) {
                    ptr10 = param1 == 7 ? 1: 0 ? (char*)&gvar_805D4F4: ptr10;
                loc_8055A9D:
                    char* ptr13 = →dcgettext(NULL, (char*)0x805D385, 5);
                    __s = ptr13;
                    if(ptr13 == 134599557) {
                        __s = param1 == 7 ? 1: 0 ? (char*)&gvar_805D4F4: __s;
                    }
                loc_8055AB1:
                    v3 = 0;
                    if(!v17) {
                        char v21 = ptr10[0];
                        if(v21) {
                            size_t v22 = v12;
                            char* ptr14 = ptr10;
                            size_t v23 = v11;
                            do {
                                if(v12 > v3) {
                                    *(char*)(v3 + v11) = v21;
                                }
                                ++v3;
                                v21 = ptr10[v3];
                            }
                            while(v21);
                        }
                    }
                    ptr6 = (void*)0x1;
                    __n = →strlen(__s);
                    v16 = (size_t)__s;
                    v2 = (size_t)__s;
                    ptr5 = ptr6;
                    ptr4 = NULL;
                    goto loc_8055827;
                }
                else {
                    goto loc_8055A9D;
                }
            }
            else {
                goto loc_8055AB1;
            }
        }
        case 9: {
        loc_8055B32:
            if(!(unsigned char)ptr5) {
                if(!((unsigned char)param2 & 1)) {
                loc_8055D05:
                    if(!v17) {
                        goto loc_8055BD7;
                    }
                    else {
                        goto loc_8055BB6;
                    }
                }
                else {
                    ++ptr4;
                loc_8055827:
                    v16 = (unsigned int)(ptr4 == param0 ? 0: 1) | ((unsigned int)((v16 >>> 8) & 0xFFFFFF) << 8);
                    if(param0 != -1) {
                        if(!(unsigned char)v16) {
                            goto loc_8055EA5;
                        }
                        else {
                            goto loc_8055842;
                        }
                    }
                    if(ptr4[ptr9]) {
                        goto loc_8055842;
                    }
                    else {
                    loc_8055EA5:
                        if(!v3 && param1 == 2 && v17) {
                        loc_8055D8F:
                            v3 = (size_t)sub_8055760((int)param0);
                            break;
                        }
                    }
                    if(v2 && !v17) {
                        __s2 = (char*)v2;
                        char v24 = *(char*)v2;
                        if(v24) {
                            ptr0 = (void*)v12;
                            int* ptr15 = (int*)(v2 - v3);
                            ptr4 = (char*)v11;
                            goto loc_8055EEA;
                        loc_8055842:
                            if((unsigned char)ptr5 && __n) {
                                __s2 = &ptr4[ptr9];
                                if((unsigned int)(int*)((int)ptr4 + __n) <= param0) {
                                    size_t v25 = __n;
                                    ptr6 = (void*)v2;
                                    __s1 = __s2;
                                    v1 = (unsigned char)ptr5;
                                    int v26 = →memcmp(__s1, (void*)v2, __n);
                                    ptr5 = (void*)v1;
                                    v7 = 0;
                                    if(!v26) {
                                        if(v17) {
                                            goto loc_8055D8F;
                                        }
                                        else {
                                            v7 = 1;
                                        }
                                    }
                                }
                                else {
                                    v7 = 0;
                                }
                                goto loc_8055872;
                            }
                            else {
                                void* ptr16 = ptr9;
                                v7 = 0;
                                __s2 = &ptr4[ptr9];
                                ptr6 = (void*)__s2[0];
                                ptr3 = (void*)__s2[0];
                            }
                            if((unsigned char)ptr3 > 126) {
                                goto loc_8055884;
                            }
                            else {
                                goto loc_8055C28;
                            loc_8055872:
                                ptr6 = (void*)__s2[0];
                                ptr3 = (void*)__s2[0];
                                if((unsigned char)ptr3 > 126) {
                                    goto loc_8055884;
                                }
                                else {
                                loc_8055C28:
                                    v16 = (size_t)(unsigned char)ptr3;
                                    switch(v16) {
                                        case 0: {
                                            goto loc_8055B32;
                                        }
                                        case 7: {
                                            v16 = 97;
                                            goto loc_8055DC2;
                                        }
                                        case 8: {
                                            v16 = 98;
                                            goto loc_8055DC2;
                                        }
                                        case 9: {
                                            v16 = 116;
                                            goto loc_8055DE5;
                                        }
                                        case 10: {
                                            v16 = 110;
                                            goto loc_8055DE5;
                                        }
                                        case 11: {
                                            v16 = 118;
                                            goto loc_8055DC2;
                                        }
                                        case 12: {
                                            break;
                                        }
                                        case 13: {
                                            v16 = 114;
                                            goto loc_8055DE5;
                                        }
                                        case 1: 
                                        case 2: 
                                        case 3: 
                                        case 4: 
                                        case 5: 
                                        case 6: 
                                        case 14: 
                                        case 15: {
                                            goto loc_8055884;
                                        }
                                        default: {
                                            throw 0;
                                        }
                                    }
                                    v16 = 102;
                                    goto loc_8055DC2;
                                loc_8055DE5:
                                    if(param1 == 2 && v17) {
                                        goto loc_8055D8F;
                                    }
                                    else {
                                    loc_8055DC2:
                                        if(!(unsigned char)ptr5) {
                                            goto loc_8055D05;
                                        }
                                        else {
                                            ptr6 = (void*)v16;
                                        loc_8055BDE:
                                            if(v17) {
                                                goto loc_8055D8F;
                                            }
                                            else {
                                                if(v3 < v12) {
                                                    v16 = v11;
                                                    *(char*)(v16 + v3) = 92;
                                                }
                                                ++v3;
                                                ++ptr4;
                                                goto loc_8055BFC;
                                            }
                                        loc_8055EEA:
                                            do {
                                                if(v12 > v3) {
                                                    *(char*)(v3 + v11) = v24;
                                                }
                                                ++v3;
                                                v24 = *(char*)((int)ptr15 + v3);
                                            }
                                            while(v24);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if(v3 < v12) {
                        *(char*)(v3 + v11) = 0;
                    }
                    break;
                }
            }
            else if(v17) {
                goto loc_8055D8F;
            }
            else {
                if(v3 < v12) {
                    *(char*)(v3 + v11) = 92;
                }
                ptr6 = (void*)0x30;
                v16 = v3 + 1;
            }
            if((unsigned int)(int*)(ptr4 + 1) < param0) {
                char v27 = ptr4[(void*)((int)ptr9 + 1)];
                if(v27 > 47 && v27 <= 57) {
                    if(v16 < v12) {
                        *(char*)(v16 + v11) = 48;
                    }
                    if((unsigned int)(v3 + 2) < v12) {
                        *(char*)((unsigned int)(v3 + v11) + 2) = 48;
                    }
                    v16 = v3 + 3;
                    ptr6 = (void*)0x30;
                }
            }
            v3 = v16;
            goto loc_8055BB6;
        }
        case 10: 
        case 11: 
        case 12: 
        case 13: 
        case 14: 
        case 15: {
        loc_8055884:
            if(v20 == 1) {
                v1 = (unsigned char)ptr5;
                unsigned short** ptr17 = →__ctype_b_loc();
                ptr5 = (void*)v1;
                ptr2 = (char*)0x1;
                v16 = (size_t)ptr17[0];
                (size_t)(v6 & 0xFF) = *(char*)((char*)((int)(int*)((int)(char*)(unsigned char)ptr6 * 2) + v16) + 1) & 0x40 ? 1: 0;
                goto loc_80558B3;
            }
            else {
                char v28 = param0 == -1;
                int v29 = 0;
                int v30 = 0;
                if(param0 == -1) {
                    char* ptr18 = (char*)ptr9;
                    v1 = (unsigned char)ptr5;
                    size_t v31 = →strlen((char*)ptr9);
                    ptr5 = (void*)v1;
                    param0 = v31;
                }
                char v32 = (unsigned char)ptr5;
                ptr1 = ptr4;
                ptr4 = NULL;
                (size_t)(v6 & 0xFF) = 1;
                ptr2 = NULL;
                size_t v33 = v3;
                char v34 = (unsigned char)ptr6;
                char* ptr19 = __s2;
            loc_8055FC3:
                do {
                    ptr6 = (void*)((int)ptr4 + (int)ptr1);
                    __s2 = (char*)((int)ptr6 + (int)ptr9);
                    v16 = →mbrtowc(&__wc, __s2, param0 - (int)ptr6, &v29);
                    size_t v35 = v16;
                    if(!v16) {
                        break;
                    }
                    else {
                        if(v16 == -2) {
                            v16 = (size_t)__s2;
                            v3 = v33;
                            char v36 = (unsigned int)ptr6 < param0;
                            ptr2 = ptr4;
                            ptr5 = (void*)v32;
                            ptr4 = ptr1;
                            ptr6 = (void*)v34;
                            __s2 = ptr19;
                            (size_t)(v6 & 0xFF) = 0;
                            if(v36 && *(char*)v16) {
                                v6 = v3;
                                v16 = (size_t)ptr2;
                                size_t v37 = param0;
                                do {
                                    ++v16;
                                }
                                while((unsigned int)(int*)(v16 + (int)ptr4) < param0 && !__s2[v16]);
                                v3 = v6;
                                ptr2 = (char*)v16;
                                (size_t)(v6 & 0xFF) = 0;
                            }
                            goto loc_8056063;
                        }
                        else if(v16 == -1) {
                            ptr2 = ptr4;
                            v3 = v33;
                            ptr5 = (void*)v32;
                            ptr6 = (void*)v34;
                            ptr4 = ptr1;
                            (size_t)(v6 & 0xFF) = 0;
                            goto loc_8056063;
                        }
                        else if(!v17 || param1 != 2) {
                            goto loc_805601E;
                        }
                        else if(v16 <= 1) {
                            goto loc_805601E;
                        }
                        else {
                            v0 = 1;
                        }
                        while(1) {
                            switch(__s2[v0] - 91) {
                                case 0: 
                                case 1: 
                                case 3: 
                                case 5: 
                                case 33: {
                                    goto loc_8055D8F;
                                }
                            }
                            ++v0;
                            if(v0 == v16) {
                            loc_805601E:
                                int v38 = →iswprint(__wc);
                                int v39 = (unsigned int)(unsigned char)v6;
                                __s1 = &v29;
                                ptr4 = &ptr4[v16];
                                (size_t)(v6 & 0xFF) = v38 ? (unsigned char)(unsigned int)(unsigned char)v6: 0;
                                v16 = (size_t)→mbsinit((mbstate_t*)__s1);
                                if(!v16) {
                                    goto loc_8055FC3;
                                }
                                else {
                                    break loc_8055FC3;
                                }
                            }
                        }
                    }
                }
                while(1);
                ptr2 = ptr4;
                v3 = v33;
                ptr5 = (void*)v32;
                ptr6 = (void*)v34;
                ptr4 = ptr1;
            }
        loc_8056063:
            if((unsigned int)ptr2 <= 1) {
            loc_80558B3:
                if(!(unsigned char)ptr5) {
                    goto loc_8055D05;
                }
                else {
                    v16 = v3;
                    if((unsigned char)v6) {
                        v3 = v16;
                        goto loc_8055BB6;
                    }
                }
            }
            char* ptr20 = ptr2;
            ptr0 = ptr6;
            (char*)(ptr2 & 0xFF) = (unsigned char)ptr5;
            __s2 = (char*)v12;
            ptr1 = &ptr20[ptr4];
            v16 = (size_t)v7;
            while(1) {
                if((unsigned char)ptr2 && !(unsigned char)v6) {
                    if(v17) {
                        goto loc_8055D8F;
                    }
                    else {
                        if(v3 < v12) {
                            *(char*)(v3 + v11) = 92;
                        }
                        if((unsigned int)(v3 + 1) < v12) {
                            *(char*)((unsigned int)(v3 + v11) + 1) = (unsigned char)((unsigned int)((unsigned char)ptr0 >>> 6) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xFFFFFF) << 8)) + 48;
                        }
                        if((unsigned int)(v3 + 2) < v12) {
                            *(char*)((unsigned int)(v3 + v11) + 2) = (unsigned char)(((unsigned int)((unsigned char)ptr0 >>> 3) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xFFFFFF) << 8)) & 0x7) + 48;
                        }
                        v3 += 3;
                        ptr0 = (void*)((int*)((int)ptr0 & 0x7) + 12);
                        goto loc_8055949;
                    }
                }
                if((unsigned char)v16) {
                    if(v3 < v12) {
                        *(char*)(v3 + v11) = 92;
                    }
                    ++v3;
                    v16 = 0;
                    ++ptr4;
                    if(ptr4 < ptr1) {
                        goto loc_8055954;
                    }
                    else {
                        break;
                    }
                }
                else {
                loc_8055949:
                    ++ptr4;
                }
                if(ptr4 >= ptr1) {
                    break;
                }
                else {
                loc_8055954:
                    if(v3 < v12) {
                        *(char*)(v3 + v11) = (unsigned char)ptr0;
                    }
                    ++v3;
                    ptr0 = (void*)ptr4[ptr9];
                }
            }
            ptr5 = (void*)(unsigned char)ptr2;
            ptr6 = ptr0;
        loc_8055BFC:
            if(v3 < v12) {
                v16 = v11;
                *(char*)(v16 + v3) = (unsigned char)ptr6;
            }
            ++v3;
            goto loc_8055827;
        }
        default: {
            throw 0;
        }
    }
    int v40 = (int)v3;
    if(!(*(int*)(__GS_BASE + (int)(int*)0x14) ^ v15)) {
        return (int)v3;
    }
    /*NO_RETURN*/ →__stack_chk_fail();
loc_8055BB6:
    if(v14) {
        v16 = (size_t)(1 << (int)(int*)((int)ptr6 & 0x1f));
        if(*(int*)((int)(int*)((int)(char*)((unsigned char)ptr6 >>> 5) * 4) + v14) & v16) {
            goto loc_8055BDE;
        }
    }
loc_8055BD7:
    if(v7) {
        goto loc_8055BDE;
    }
    else {
        ++ptr4;
        goto loc_8055BFC;
    }
}

int sub_8056220(char** param0) {
    unsigned int v0;
    char** ptr0;
    int v1;
    size_t v2;
    char** ptr1 = ptr0;
    int v3 = v1;
    char** ptr2 = param0;
    size_t v4 = v2;
    int* ptr3 = →__errno_location();
    void* __ptr = gvar_80622D0;
    int* ptr4 = ptr3;
    int v5 = ptr3[0];
    if(v0 >= 0x80000000) {
        /*NO_RETURN*/ →abort();
    }
    if(gvar_80622D4 <= v0) {
        if(v0 + 1 > 0x1fffffff) {
            /*NO_RETURN*/ sub_8058C00();
        }
        size_t __size = (size_t)((v0 + 1) * 8);
        if(__ptr != &gvar_80622D8) {
            int v6 = sub_8058AA0(__ptr, __size);
            __ptr = (void*)v6;
            gvar_80622D0 = v6;
        }
        else {
            int v7 = sub_8058AA0(NULL, __size);
            unsigned int v8 = gvar_80622DC;
            __ptr = (void*)v7;
            gvar_80622D0 = v7;
            unsigned int v9 = gvar_80622D8;
            *(unsigned int*)((int)__ptr + 4) = v8;
            *(unsigned int*)__ptr = v9;
        }
        unsigned int v10 = gvar_80622D4;
        →memset((void*)(v10 * 8 + (int)__ptr), 0, (size_t)((v0 + 1 - v10) * 8));
        gvar_80622D4 = v0 + 1;
    }
    unsigned int* ptr5 = (unsigned int*)(v0 * 8 + (int)__ptr);
    char* ptr6 = ptr2[1];
    unsigned int v11 = *ptr5;
    int v12 = (int)(ptr2 + 2);
    char* ptr7 = ptr2[11];
    void* __ptr1 = *(void**)(ptr5 + 1);
    unsigned int v13 = v11;
    char* ptr8 = ptr7;
    int v14 = sub_8055760(v4, ptr2[0], (int)ptr6 | 1, v12, ptr2[10], ptr7);
    if((unsigned int)v14 >= v13) {
        *ptr5 = (size_t)(v14 + 1);
        if(__ptr1 != 0x8062e00) {
            size_t v15 = (size_t)(v14 + 1);
            /*NO_RETURN*/ →free(__ptr1);
        }
        /*NO_RETURN*/ sub_8058A70((size_t)(v14 + 1));
    }
    ptr4[0] = v5;
    return (int)__ptr1;
}

int sub_80563C0(int param0) {
    int* ptr0 = →__errno_location();
    /*NO_RETURN*/ sub_8058BA0(param0 ? param0: &gvar_8062DC0, 48);
}

unsigned int sub_8056410(unsigned int* param0) {
    return param0 ? *param0: gvar_8062DC0;
}

int* sub_8056430(int* param0, int param1) {
    int* result = param0 ? param0: (int*)&gvar_8062DC0;
    *result = param1;
    return result;
}

int sub_8056450(int param0, char param1, int param2) {
    int v0 = *(int*)((unsigned int)(param1 >>> 5) * 4 + (param0 ? param0: &gvar_8062DC0) + 8);
    int result = (v0 >>> ((unsigned int)param1 & 0x1f)) & 1;
    *(int*)((unsigned int)(param1 >>> 5) * 4 + (param0 ? param0: &gvar_8062DC0) + 8) = (((param2 & 1) ^ result) << ((unsigned int)param1 & 0x1f)) ^ v0;
    return result;
}

int sub_8056510(int param0, int param1, int param2, size_t param3, char** param4) {
    int v0;
    int v1 = v0;
    int* ptr0 = →__errno_location();
    int v2 = ptr0[0];
    int result = sub_8055760(param3, param4 ? param4[0]: gvar_8062DC0, *(int*)((param4 ? param4: (char**)&gvar_8062DC0) + 1), (int)((param4 ? param4: (char**)&gvar_8062DC0) + 2), *((param4 ? param4: (char**)&gvar_8062DC0) + 10), *((param4 ? param4: (char**)&gvar_8062DC0) + 11));
    ptr0[0] = v2;
    return result;
}

int sub_8056740(int param0) {
    return sub_8056220((char**)&gvar_8062DC0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8056780(int param0) {
    return sub_8056740(0, param0);
}

int sub_80567D0(int param0, int param1) {
    char v0;
    int v1;
    sub_80556E0(v1, param1);
    return sub_8056220(&v0);
}

int sub_8056890(int param0, int param1, char param2) {
    unsigned int v0 = gvar_8062DC0;
    unsigned int v1 = gvar_8062DC4;
    unsigned int v2 = gvar_8062DC8;
    unsigned int v3 = gvar_8062DCC;
    unsigned int v4 = gvar_8062DD0;
    unsigned int v5 = gvar_8062DD4;
    unsigned int v6 = gvar_8062DD8;
    unsigned int v7 = gvar_8062DDC;
    unsigned int v8 = gvar_8062DE0;
    unsigned int v9 = gvar_8062DE4;
    unsigned int v10 = gvar_8062DE8;
    unsigned int v11 = gvar_8062DEC;
    int v12 = *(int*)((unsigned int)(param2 >>> 5) * 4 + (int)&v2);
    *(int*)((unsigned int)(param2 >>> 5) * 4 + (int)&v2) = ((((v12 >>> ((unsigned int)param2 & 0x1f)) & 1) ^ 1) << ((unsigned int)param2 & 0x1f)) ^ v12;
    return sub_8056220(&v0);
}

int sub_8056950(int param0, char param1) {
    return sub_8056890(param0, -1, param1);
}

int sub_8056980(int param0) {
    return sub_8056950(param0, ':');
}

int sub_8056B30(int param0, int param1) {
    int result;
    int v0;
    int counter = param0;
    int v1 = v0;
    if(param0) {
        __int32_t** ptr0 = →__ctype_toupper_loc();
        do {
            *(char*)(result + counter - 1) = (unsigned char)ptr0[0][(unsigned int)*(char*)(param1 + counter - 1)];
            --counter;
        }
        while(counter);
    }
    return result;
}

int sub_8056B70(int par0, int par1, int par2, int par3) {
    // Decompilation error
}

int sub_8058320(int param0, int param1, int param2, int param3, int param4, int param5) {
    return sub_8056B70(param2, param3, param4, param5);
}

int sub_8058370(FILE* __stream, char* param1, char* param2, char* param3, unsigned int* param4, unsigned int param5) {
    char* ptr0;
    char* __msgid;
    char* ptr1;
    char* ptr2;
    char* ptr3;
    char* ptr4;
    char* ptr5;
    char* ptr6;
    char* ptr7;
    char* ptr8;
    char* ptr9;
    int v0;
    int v1 = v0;
    if(param1) {
        char* ptr10 = param3;
        ptr9 = param2;
        ptr8 = param1;
    }
    else {
        ptr9 = param3;
        ptr8 = param2;
    }
    →__fprintf_chk();
    char* ptr11 = →dcgettext(NULL, (char*)&gvar_805DA3F, 5);
    ptr9 = (char*)0x7DB;
    ptr8 = ptr11;
    →__fprintf_chk();
    char* __s = →dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5);
    →fputs_unlocked(__s, __stream);
    switch(param5) {
        case 0: {
            /*NO_RETURN*/ →abort();
        }
        case 1: {
            →dcgettext(NULL, "Written by %s.\n", 5);
            return →__fprintf_chk();
        }
        case 2: {
            char* ptr12 = →dcgettext(NULL, "Written by %s and %s.\n", 5);
            →__fprintf_chk();
            return (int)ptr12;
        }
        case 3: {
            char* ptr13 = →dcgettext(NULL, (char*)&gvar_805DA6A, 5);
            →__fprintf_chk();
            return (int)ptr13;
        }
        case 4: {
            ptr7 = *(char**)(param4 + 3);
            →dcgettext(NULL, "Written by %s, %s, %s,\nand %s.\n", 5);
            return →__fprintf_chk();
        }
        case 5: {
            char* ptr14 = *(char**)(param4 + 1);
            ptr7 = *(char**)(param4 + 4);
            ptr6 = ptr14;
            →dcgettext(NULL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
            return →__fprintf_chk();
        }
        case 6: {
            char* ptr15 = *(char**)(param4 + 5);
            char* ptr16 = *(char**)(param4 + 2);
            ptr4 = *(char**)(param4 + 1);
            ptr7 = ptr15;
            ptr6 = ptr16;
            →dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
            return →__fprintf_chk();
        }
        case 7: {
            char* ptr17 = *(char**)(param4 + 6);
            char* ptr18 = *(char**)(param4 + 3);
            ptr4 = *(char**)(param4 + 2);
            char* ptr19 = *(char**)(param4 + 1);
            ptr7 = ptr17;
            ptr6 = ptr18;
            ptr2 = ptr19;
            →dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
            return →__fprintf_chk();
        }
        case 8: {
            char* ptr20 = *(char**)(param4 + 7);
            char* ptr21 = *(char**)(param4 + 4);
            ptr4 = *(char**)(param4 + 3);
            ptr2 = *(char**)(param4 + 2);
            char* ptr22 = *(char**)(param4 + 1);
            ptr7 = ptr20;
            ptr6 = ptr21;
            ptr1 = ptr22;
            →dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
            return →__fprintf_chk();
        }
        case 9: {
            ptr5 = *(char**)(param4 + 8);
            ptr4 = *(char**)(param4 + 4);
            ptr3 = *(char**)(param4 + 5);
            ptr2 = *(char**)(param4 + 3);
            ptr1 = *(char**)(param4 + 2);
            char* ptr23 = *(char**)(param4 + 1);
            __msgid = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
            ptr0 = ptr23;
            ptr7 = ptr5;
            ptr6 = ptr3;
            →dcgettext(NULL, __msgid, 5);
            return →__fprintf_chk();
        }
        default: {
            ptr5 = *(char**)(param4 + 8);
            ptr4 = *(char**)(param4 + 4);
            ptr3 = *(char**)(param4 + 5);
            ptr2 = *(char**)(param4 + 3);
            ptr1 = *(char**)(param4 + 2);
            char* ptr24 = *(char**)(param4 + 1);
            __msgid = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
            ptr0 = ptr24;
            ptr7 = ptr5;
            ptr6 = ptr3;
            →dcgettext(NULL, __msgid, 5);
            return →__fprintf_chk();
        }
    }
}

int sub_8058920(FILE* __stream, char* param1, char* param2, char* param3, int param4) {
    int v0;
    unsigned int v1 = 0;
    int v2 = param4;
    do {
        unsigned int v3 = *(unsigned int*)(v1 * 4 + v2);
        *(unsigned int*)(v1 * 4 + (int)&v0) = *(unsigned int*)(v1 * 4 + v2);
        if(!v3) {
            break;
        }
        else {
            ++v1;
        }
    }
    while(v1 != 10);
    return sub_8058370(__stream, param1, param2, param3, &v0, v1);
}

int sub_8058980(FILE* __stream, char* param1, char* param2, char* param3) {
    char v0;
    return sub_8058920(__stream, param1, param2, param3, &v0);
}

int sub_8058A70(size_t __size) {
    /*NO_RETURN*/ →malloc(__size);
}

int sub_8058AA0(void* __ptr, size_t __size) {
    int result;
    if(__size || !__ptr) {
        void* ptr0 = →realloc(__ptr, __size);
        if(!ptr0 && __size) {
            /*NO_RETURN*/ sub_8058C00();
        }
    }
    else {
        /*NO_RETURN*/ →free(__ptr);
    }
    return result;
}

int sub_8058BA0(int param0, size_t __size) {
    /*NO_RETURN*/ sub_8058A70(__size);
}

int sub_8058BD0(char* __s) {
    size_t v0 = →strlen(__s);
    /*NO_RETURN*/ sub_8058BA0((int)__s, v0 + 1);
}

int sub_8058C00() {
    char* ptr0 = →dcgettext(NULL, "memory exhausted", 5);
    →error(gvar_80622CC, 0, (char*)0x805A1BF, ptr0);
    /*NO_RETURN*/ →abort();
}

int sub_8058C50(char* param0, char** param1, int param2, int* param3, char* __s) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int v5;
    int* ptr0;
    int v6;
    unsigned long v7;
    char* ptr1;
    int result;
    char v8;
    char** ptr2;
    int* ptr3;
    char** ptr4 = ptr2;
    int v9 = param2;
    char* ptr5 = param0;
    char** ptr6 = param1;
    if((unsigned int)v9 <= 36) {
        ptr2 = param1 ? param1: &v8;
        (char)ptr3 = ptr5[0];
        unsigned short** ptr7 = →__ctype_b_loc();
        int* ptr8 = (int*)(unsigned char)ptr3;
        unsigned short* ptr9 = ptr7[0];
        char* ptr10 = ptr5;
        while((*((char*)&ptr9[(char*)(unsigned char)ptr8] + 1) & 0x20)) {
            ++ptr10;
            ptr8 = (int*)ptr10[0];
        }
        result = 4;
        if((unsigned char)ptr8 != 45) {
            int* ptr11 = →__errno_location();
            ptr11[0] = 0;
            int __base = v9;
            char** __endptr = ptr2;
            char* __nptr = ptr5;
            ptr3 = ptr11;
            unsigned long v10 = →strtoul(__nptr, __endptr, __base);
            ptr1 = ptr2[0];
            ptr8 = ptr3;
            v7 = v10;
            if(ptr1 != ptr5) {
                int v11 = ptr8[0];
                result = 0;
                if(!v11) {
                    goto loc_8058CF5;
                }
                else {
                    result = 4;
                }
                if(v11 != 34) {
                    return result;
                }
                result = 1;
            loc_8058CF5:
                if(!__s) {
                    param3[0] = (int)v7;
                    return result;
                }
                v6 = (unsigned int)ptr1[0];
                int v12 = (unsigned int)ptr1[0];
                if(!(unsigned char)v6) {
                    param3[0] = (int)v7;
                    return result;
                }
                char* ptr12 = __s;
                __endptr = (char**)(unsigned char)v6;
                ptr3 = (int*)ptr1;
                char* ptr13 = →strchr(__s, (int)__endptr);
                ptr1 = (char*)ptr3;
                if(!ptr13) {
                    result |= 2;
                    param3[0] = (int)v7;
                    return result;
                }
                goto loc_8058D42;
            }
        loc_8058DA5:
            if(__s) {
                v6 = (unsigned int)ptr5[0];
                int v13 = (unsigned int)ptr5[0];
                if((unsigned char)v6) {
                    char* ptr14 = __s;
                    result = 0;
                    __endptr = (char**)(unsigned char)v6;
                    v7 = 1;
                    ptr3 = (int*)ptr1;
                    char* ptr15 = →strchr(__s, (int)__endptr);
                    ptr1 = (char*)ptr3;
                    if(!ptr15) {
                        result = 4;
                    }
                    else {
                    loc_8058D42:
                        char* ptr16 = __s;
                        ptr3 = (int*)ptr1;
                        char* ptr17 = →strchr(__s, 48);
                        ptr1 = (char*)ptr3;
                        ptr0 = (int*)0x1;
                        v5 = 0x400;
                        if(ptr17) {
                            char v14 = ptr1[1];
                            if(v14 == 68 || v14 == 66) {
                                ptr0 = (int*)0x2;
                                v5 = 1000;
                            }
                            else if(v14 == 105) {
                                ptr0 = (int*)((ptr1[2] == 66 ? 1: 0) * 2 + 1);
                            }
                        }
                        int v15 = v6 - 66;
                        if((unsigned char)(v6 - 66) <= 53) {
                            switch(v6 - 66) {
                                case 0: {
                                    goto loc_8058FAC;
                                }
                                case 3: {
                                    v4 = 6;
                                    v2 = 0xffffffff / v5;
                                    v1 = 0;
                                    goto loc_8058F98;
                                }
                                case 5: {
                                    unsigned int v16 = 0xffffffff / v5;
                                    int v17 = 1;
                                    if(0xffffffff / v5 >= v7) {
                                        unsigned int v18 = (unsigned int)(v7 * v5);
                                        if(0xffffffff / v5 >= v18) {
                                            unsigned int v19 = v18 * v5;
                                            if(0xffffffff / v5 < v19) {
                                                goto loc_805907C;
                                            }
                                            else {
                                                v7 = (unsigned long)(v19 * v5);
                                                v1 = 0;
                                                ptr1 = &ptr1[ptr0];
                                                int v20 = v1 | result;
                                                ptr2[0] = ptr1;
                                                result = ptr1[0] ? v20 | 0x2: v20;
                                                param3[0] = (int)v7;
                                                return result;
                                            }
                                        }
                                        else {
                                            v17 = 0;
                                        }
                                    }
                                    v7 = 0xffffffff;
                                    v1 = v17 | 1;
                                    ptr1 = &ptr1[ptr0];
                                    int v20 = v1 | result;
                                    ptr2[0] = ptr1;
                                    result = ptr1[0] ? v20 | 0x2: v20;
                                    param3[0] = (int)v7;
                                    return result;
                                }
                                case 9: {
                                    if(0xffffffff / v5 < v7) {
                                        v7 = 0xffffffff;
                                        v1 = 1;
                                        ptr1 = &ptr1[ptr0];
                                        int v20 = v1 | result;
                                        ptr2[0] = ptr1;
                                        result = ptr1[0] ? v20 | 0x2: v20;
                                        param3[0] = (int)v7;
                                        return result;
                                    loc_8058FAC:
                                        if(v7 <= 0x3fffff) {
                                            v7 *= 0x400;
                                            v1 = 0;
                                            ptr1 = &ptr1[ptr0];
                                            int v20 = v1 | result;
                                            ptr2[0] = ptr1;
                                            result = ptr1[0] ? v20 | 0x2: v20;
                                            param3[0] = (int)v7;
                                            return result;
                                        }
                                        v7 = 0xffffffff;
                                        v1 = 1;
                                        ptr1 = &ptr1[ptr0];
                                        int v20 = v1 | result;
                                        ptr2[0] = ptr1;
                                        result = ptr1[0] ? v20 | 0x2: v20;
                                        param3[0] = (int)v7;
                                        return result;
                                    loc_8058F27:
                                        unsigned int v21 = 0xffffffff / v5;
                                        if(0xffffffff / v5 < v7) {
                                            v1 = 1;
                                            v7 = 0xffffffff;
                                            ptr1 = &ptr1[ptr0];
                                            int v20 = v1 | result;
                                            ptr2[0] = ptr1;
                                            result = ptr1[0] ? v20 | 0x2: v20;
                                            param3[0] = (int)v7;
                                            return result;
                                        }
                                        v7 *= v5;
                                        if(0xffffffff / v5 < v7) {
                                            v1 = 1;
                                            v7 = 0xffffffff;
                                            ptr1 = &ptr1[ptr0];
                                            int v20 = v1 | result;
                                            ptr2[0] = ptr1;
                                            result = ptr1[0] ? v20 | 0x2: v20;
                                            param3[0] = (int)v7;
                                            return result;
                                        }
                                    }
                                    v7 *= v5;
                                    v1 = 0;
                                    ptr1 = &ptr1[ptr0];
                                    int v20 = v1 | result;
                                    ptr2[0] = ptr1;
                                    result = ptr1[0] ? v20 | 0x2: v20;
                                    param3[0] = (int)v7;
                                    return result;
                                }
                                case 11: {
                                    goto loc_8058F27;
                                }
                                case 14: {
                                    v3 = 5;
                                    v2 = 0xffffffff / v5;
                                    v1 = 0;
                                    goto loc_8058F12;
                                }
                                case 1: 
                                case 2: 
                                case 4: 
                                case 6: 
                                case 7: 
                                case 8: 
                                case 10: 
                                case 12: 
                                case 13: 
                                case 15: {
                                    result |= 2;
                                    param3[0] = (int)v7;
                                    return result;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                            goto loc_8058DA5;
                        }
                        else {
                            result |= 2;
                            param3[0] = (int)v7;
                        }
                    }
                }
            }
        }
        return result;
    loc_8058F98:
        do {
            if(v7 > v2) {
                v7 = 0xffffffff;
                v6 = 1;
            }
            else {
                v7 *= v5;
                v6 = 0;
            }
            v1 |= v6;
            --v4;
            if(!v4) {
                ptr1 = &ptr1[ptr0];
                int v20 = v1 | result;
                ptr2[0] = ptr1;
                result = ptr1[0] ? v20 | 0x2: v20;
                param3[0] = (int)v7;
                return result;
            }
            goto loc_8058F98;
        loc_8058F12:
            do {
                if(v7 > v2) {
                    v7 = 0xffffffff;
                    v0 = 1;
                }
                else {
                    v7 *= v5;
                    v0 = 0;
                }
                v1 |= v0;
                --v3;
            }
            while(!v3);
        }
        while(1);
    }
    else {
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, "xstrtoul");
    loc_805907C:
        v7 = 0xffffffff;
        v1 = 1;
        ptr1 = &ptr1[ptr0];
        int v20 = v1 | result;
        ptr2[0] = ptr1;
        result = ptr1[0] ? v20 | 0x2: v20;
    }
    param3[0] = (int)v7;
    return result;
}

void sub_8059090(unsigned int param0, int param1, char param2, int param3, int param4) {
    char v0;
    int v1;
    char* __msgid;
    int __status = gvar_80622CC;
    char* ptr0 = (char*)param2;
    if(param0 <= 3) {
        __msgid = "invalid suffix in %s%s argument `%s\'";
        if(param0 >= 2) {
            goto loc_80590BA;
        }
        if(param0 == 1) {
            __msgid = "%s%s argument `%s\' too large";
        loc_80590BA:
            if(param1 >= 0) {
                v1 = &gvar_805DE6D;
                ptr0 = *(unsigned int*)(param1 * 16 + param3);
            }
            else {
                v1 = &gvar_805DE6D - param1;
                v0 = (unsigned char)ptr0;
                ptr0 = &v0;
                char v2 = 0;
            }
            char* __format = →dcgettext(NULL, __msgid, 5);
            →error(__status, 0, __format, v1, &v0, param4);
        }
    loc_8059107:
        /*NO_RETURN*/ →abort();
    }
    __msgid = "invalid %s%s argument `%s\'";
    if(param0 != 4) {
        goto loc_8059107;
    }
    else {
        goto loc_80590BA;
    }
}

int sub_8059140(int param0, unsigned int param1) {
    int result;
    unsigned int* ptr0;
    unsigned int v0 = *ptr0;
    unsigned int v1 = *(ptr0 + 1);
    int v2 = sub_8059C90(0xffffffff, 0xffffffff, param1, param1 >> 31);
    char v3 = v1 > param1;
    if((!v3 && v1 != param1) || (!v3 && v0 <= (unsigned int)v2)) {
        *ptr0 = v0 * param1;
        result = 0;
        *(int*)(ptr0 + 1) = (param1 >> 31) * v0 + v1 * param1 + (unsigned int)(((unsigned long long)v0 * (unsigned long long)param1) >>> 32L);
    }
    else {
        *ptr0 = -1;
        result = 1;
        *(int*)(ptr0 + 1) = -1;
    }
    return result;
}

int sub_80591F0(int param0, unsigned int param1) {
    int result = 0;
    if(param0) {
        int counter = param0;
        do {
            int v0 = sub_8059140(param0, param1);
            result |= v0;
            --counter;
        }
        while(counter);
    }
    return result;
}

int sub_8059230(char* param0, unsigned int* param1, unsigned int param2, int* param3, char* __s) {
    int v0;
    int v1;
    char v2;
    int v3;
    int* ptr0;
    char* ptr1 = param0;
    if(param2 > 36) {
        /*NO_RETURN*/ →__assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 83, "xstrtoumax");
    }
    unsigned int* ptr2 = param1 ? param1: &v2;
    (int*)(ptr0 & 0xFF) = *ptr1;
    unsigned short** ptr3 = →__ctype_b_loc();
    int v4 = (int)(unsigned char)ptr0;
    unsigned short* ptr4 = ptr3[0];
    char* ptr5 = ptr1;
    while((*((char*)&ptr4[(int*)(unsigned char)v4] + 1) & 0x20)) {
        ++ptr5;
        v4 = (int)*ptr5;
    }
    int result = 4;
    if((unsigned char)v4 != 45) {
        int* ptr6 = →__errno_location();
        ptr6[0] = 0;
        int v5 = 0;
        unsigned int* ptr7 = ptr2;
        ptr0 = ptr6;
        int v6 = →__strtoull_internal();
        char* ptr8 = *ptr2;
        int v7 = v6;
        int v8 = v3;
        if(ptr8 != ptr1) {
            int* ptr9 = (int*)ptr0[0];
            result = 0;
            if(!ptr9) {
                goto loc_80592E7;
            }
            else {
            loc_8059373:
                result = 4;
            }
            if(ptr9 != 34) {
                return result;
            }
            result = 1;
        loc_80592E7:
            if(!__s) {
                param3[0] = v6;
                param3[1] = v4;
                return result;
            }
            goto loc_80592ED;
        }
        if(__s) {
            char v9 = *ptr1;
            if(v9) {
                char* ptr10 = →strchr(__s, (int)v9);
                if(ptr10) {
                    v7 = 1;
                    result = 0;
                    v8 = 0;
                loc_80592ED:
                    int v10 = (unsigned int)*ptr8;
                    if((unsigned char)v10) {
                        char* ptr11 = →strchr(__s, (int)(unsigned char)v10);
                        if(ptr11) {
                            char* ptr12 = →strchr(__s, 48);
                            unsigned int v11 = 0x400;
                            int v12 = 1;
                            if(ptr12) {
                                char v13 = *(ptr8 + 1);
                                if(v13 == 68 || v13 == 66) {
                                    v12 = 2;
                                    v11 = 1000;
                                }
                                else if(v13 == 105) {
                                    v1 = (*(ptr8 + 2) == 66 ? 1: 0) * 2 + 1;
                                    v12 = (*(ptr8 + 2) == 66 ? 1: 0) * 2 + 1;
                                }
                            }
                            if((unsigned char)((unsigned char)v10 + 190) <= 53) {
                                switch(v10 - 66) {
                                    case 0: {
                                        v0 = sub_8059140(v1, 0x400);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 3: {
                                        v0 = sub_80591F0(6, v11);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 5: {
                                        v0 = sub_80591F0(3, v11);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 9: {
                                        v0 = sub_80591F0(1, v11);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 11: {
                                        v0 = sub_80591F0(2, v11);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 14: {
                                        v0 = sub_80591F0(5, v11);
                                        ptr8 = *ptr2;
                                        char* ptr13 = (char*)((int)ptr8 + v12);
                                        int v14 = v0 | result;
                                        *ptr2 = ptr13;
                                        result = *ptr13 ? v14 | 0x2: v14;
                                        v6 = v7;
                                        v4 = v8;
                                        param3[0] = v6;
                                        param3[1] = v4;
                                        return result;
                                    }
                                    case 1: 
                                    case 2: 
                                    case 4: 
                                    case 6: 
                                    case 7: 
                                    case 8: 
                                    case 10: 
                                    case 12: 
                                    case 13: 
                                    case 15: {
                                        goto loc_8059413;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                goto loc_8059373;
                            }
                        }
                    loc_8059413:
                        result |= 2;
                        param3[0] = v7;
                        param3[1] = v8;
                    }
                    else {
                        v6 = v7;
                        v4 = v8;
                        param3[0] = v6;
                        param3[1] = v4;
                        return result;
                    }
                }
            }
        }
    }
    return result;
}

int sub_8059550(char* param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    char* ptr0 = param0;
    int result = →getfilecon();
    if(result) {
        char v2 = result == 10;
        if(v2) {
            char* ptr1 = "unlabeled";
            int v3 = 10;
            char* ptr2 = *param1;
            while(v3 != 0) {
                v2 = *ptr2 == *ptr1;
                ++ptr2;
                ++ptr1;
                --v3;
                if(!v2) {
                    break;
                }
            }
            if(v2) {
                →freecon();
                int* ptr3 = →__errno_location();
                ptr3[0] = 61;
                result = -1;
            }
        }
    }
    else {
        int* ptr4 = →__errno_location();
        ptr4[0] = 95;
        result = -1;
    }
    return result;
}

int sub_80595E0(char* param0, unsigned int* param1) {
    int v0;
    int v1 = v0;
    char* ptr0 = param0;
    int result = →lgetfilecon();
    if(result) {
        char v2 = result == 10;
        if(v2) {
            char* ptr1 = "unlabeled";
            int v3 = 10;
            char* ptr2 = *param1;
            while(v3 != 0) {
                v2 = *ptr2 == *ptr1;
                ++ptr2;
                ++ptr1;
                --v3;
                if(!v2) {
                    break;
                }
            }
            if(v2) {
                →freecon();
                int* ptr3 = →__errno_location();
                ptr3[0] = 61;
                result = -1;
            }
        }
    }
    else {
        int* ptr4 = →__errno_location();
        ptr4[0] = 95;
        result = -1;
    }
    return result;
}

unsigned int sub_8059950(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param3;
    unsigned int v3 = param2;
    unsigned int v4 = param0;
    unsigned int v5 = v2;
    int v6 = 0;
    if(v1 >= 0x80000000) {
        unsigned int v7 = v4;
        v4 = (unsigned int)(0 - v4);
        v1 = (unsigned int)(0 - ((unsigned int)(v7 > 0) + v1));
        v6 = -1;
    }
    if(v2 >= 0x80000000) {
        unsigned int v8 = v3;
        v3 = (unsigned int)(0 - v3);
        v6 = ~v6;
        v2 = (unsigned int)(0 - ((unsigned int)(v8 > 0) + v2));
    }
    unsigned int v9 = v3;
    unsigned int v10 = v4;
    unsigned int v11 = v3;
    if(v2) {
        unsigned int v12 = 0;
        v0 = 0;
        if(v2 <= v1) {
            if(v2 != 0) {
                unsigned int i;
                for(i = 31; !(v2 >>> i); --i) {
                }
                v12 = i;
            }
            v12 ^= 31;
            unsigned int v13 = v12;
            if(v12) {
                int v14 = 32 - v12;
                int v15 = (unsigned int)(unsigned char)v12;
                unsigned int v16 = (unsigned int)((v2 << (v12 & 0x1f)) | (v3 >>> ((32 - v12) & 0x1f)));
                int v17 = v3 << ((unsigned int)(unsigned char)v12 & 0x1f);
                int v18 = v1 >>> ((32 - v12) & 0x1f);
                int v19 = (v1 << (v12 & 0x1f)) | (v4 >>> ((32 - v12) & 0x1f));
                unsigned int v20 = (unsigned int)((unsigned long long)v19 | ((unsigned long long)v18 << 32)) / v16;
                unsigned int v21 = (unsigned int)((unsigned long long)v19 | ((unsigned long long)v18 << 32)) % v16;
                v0 = v20;
                unsigned int v22 = (unsigned int)(((unsigned long long)v20 * (unsigned long long)v17) >>> 32L);
                if(v22 > v21 || (v20 * v17 > v4 << (v12 & 0x1f) && v22 == v21)) {
                    --v0;
                }
            }
            else if(v3 <= v4 || v2 < v1) {
                v0 = 1;
            }
        }
    }
    else if(v3 > v1) {
        v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)v1 << 32)) / v3;
    }
    else {
        if(!v3) {
            v11 = 1 / v3;
        }
        v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v1 % v11) << 32)) / v11;
    }
    unsigned int result = v0;
    if(v6) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

unsigned int sub_8059AC0(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int result;
    unsigned int v0;
    unsigned int v1 = param1;
    unsigned int v2 = param0;
    unsigned int v3 = param3;
    unsigned int v4 = param2;
    unsigned int v5 = param1;
    unsigned int v6 = param0;
    unsigned int v7 = v3;
    int v8 = 0;
    if(param1 >= 0x80000000) {
        unsigned int v9 = v6;
        v6 = (unsigned int)(0 - v6);
        v5 = (unsigned int)(0 - ((unsigned int)(v9 > 0) + v5));
        v8 = -1;
    }
    if(v3 >= 0x80000000) {
        unsigned int v10 = v4;
        v4 = (unsigned int)(0 - v4);
        v3 = (unsigned int)(0 - ((unsigned int)(v10 > 0) + v3));
    }
    unsigned int v11 = v6;
    unsigned int v12 = v3;
    unsigned int v13 = v4;
    unsigned int v14 = v5;
    unsigned int v15 = v4;
    unsigned int v16 = v11;
    if(!v3) {
        if(v5 < v4) {
            v0 = (unsigned int)((unsigned long long)v11 | ((unsigned long long)v5 << 32)) % v13;
        }
        else {
            if(!v4) {
                v13 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v16 | ((unsigned long long)(v5 % v13) << 32)) % v13;
        }
        result = v0;
    }
    else if(v3 > v5) {
        result = v6;
    }
    else {
        if(v3 != 0) {
            unsigned int i;
            for(i = 31; !(v3 >>> i); --i) {
            }
            v4 = i;
        }
        if(!(v4 ^ 0x1f)) {
            if(v13 <= v11 || v3 < v5) {
                v16 -= v13;
            }
            result = v16;
        }
        else {
            unsigned int v17 = v15;
            v6 = (unsigned int)(32 - (v4 ^ 0x1f));
            unsigned int v18 = (unsigned int)((v3 << ((v4 ^ 0x1f) & 0x1f)) | (v15 >>> ((unsigned int)(32 - (v4 ^ 0x1f)) & 0x1f)));
            int v19 = (unsigned int)(unsigned char)(unsigned int)(32 - (v4 ^ 0x1f));
            v15 <<= (v4 ^ 0x1f) & 0x1f;
            int v20 = (v5 << ((v4 ^ 0x1f) & 0x1f)) | (v11 >>> ((unsigned int)(32 - (v4 ^ 0x1f)) & 0x1f));
            unsigned int v21 = v11 << ((v4 ^ 0x1f) & 0x1f);
            int v22 = v5 >>> ((unsigned int)(unsigned char)(unsigned int)(32 - (v4 ^ 0x1f)) & 0x1f);
            unsigned int v23 = (unsigned int)((unsigned long long)v20 | ((unsigned long long)v22 << 32)) / v18;
            unsigned int v24 = (unsigned int)((unsigned long long)v20 | ((unsigned long long)v22 << 32)) % v18;
            unsigned int v25 = v23 * v15;
            unsigned int v26 = (unsigned int)(((unsigned long long)v23 * (unsigned long long)v15) >>> 32L);
            unsigned int v27 = v25;
            unsigned int v28 = v26;
            if(v24 < v26 || (v25 > v21 && v24 == v26)) {
                v27 = v25 - v15;
                v28 = v26 - ((unsigned int)(v25 < v15) + v18);
            }
            result = (unsigned int)(((v24 - ((unsigned int)(v27 > v21) + v28)) << ((unsigned int)(32 - (v4 ^ 0x1f)) & 0x1f)) | ((v21 - v27) >>> ((v4 ^ 0x1f) & 0x1f)));
        }
    }
    if(v8) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

int sub_8059C90(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param3;
    unsigned int v2 = param0;
    unsigned int v3 = param2;
    unsigned int v4 = param1;
    unsigned int v5 = param0;
    unsigned int v6 = v3;
    unsigned int v7 = param0;
    if(param3) {
        v0 = 0;
        if(param1 >= param3) {
            if(param3 != 0) {
                unsigned int i;
                for(i = 31; !(param3 >>> i); --i) {
                }
                v3 = i;
            }
            v3 ^= 31;
            v7 = v3;
            if(v3) {
                int v8 = 32 - v3;
                int v9 = (unsigned int)(unsigned char)v3;
                unsigned int v10 = (unsigned int)((param3 << (v3 & 0x1f)) | (v6 >>> ((32 - v3) & 0x1f)));
                int v11 = v6 << ((unsigned int)(unsigned char)v3 & 0x1f);
                int v12 = param1 >>> ((32 - v3) & 0x1f);
                int v13 = (param1 << (v3 & 0x1f)) | (param0 >>> ((32 - v3) & 0x1f));
                unsigned int v14 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v12 << 32)) / v10;
                unsigned int v15 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v12 << 32)) % v10;
                unsigned int v16 = v14;
                unsigned int v17 = v14 * v11;
                unsigned int v18 = (unsigned int)(((unsigned long long)v14 * (unsigned long long)v11) >>> 32L);
                if(v18 <= v15 && (param0 << (v3 & 0x1f) >= v17 || v18 != v15)) {
                    v0 = v14;
                }
                else {
                    return (int)v17;
                }
            }
            else if(v6 <= param0 || param1 > param3) {
                v0 = 1;
            }
        }
    }
    else if(v3 <= param1) {
        if(!v3) {
            v3 = 1 / 0;
        }
        v0 = (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param1 % v3) << 32)) / v3;
    }
    else {
        return (int)((unsigned int)((unsigned long long)param0 | ((unsigned long long)param1 << 32)) / v3);
    }
    return (int)v0;
}

int sub_8059DC0(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1 = param3;
    unsigned int v2 = param0;
    unsigned int v3 = param2;
    unsigned int v4 = param1;
    unsigned int v5 = v2;
    unsigned int v6 = v3;
    unsigned int v7 = v2;
    unsigned int v8 = param1;
    if(!param3) {
        if(v3 > param1) {
            v0 = (unsigned int)((unsigned long long)v2 | ((unsigned long long)param1 << 32)) % v3;
        }
        else {
            if(!v3) {
                v3 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v2 | ((unsigned long long)(param1 % v3) << 32)) % v3;
        }
        return (int)v0;
    }
    else if(param3 <= param1) {
        if(param3 != 0) {
            unsigned int i;
            for(i = 31; !(param3 >>> i); --i) {
            }
            v2 = i;
        }
        int v9 = v2 ^ 0x1f;
        if(!(v2 ^ 0x1f)) {
            return 0;
        }
        v7 = (unsigned int)((param3 << ((v2 ^ 0x1f) & 0x1f)) | (v3 >>> ((32 - (v2 ^ 0x1f)) & 0x1f)));
        unsigned int v10 = v3 << ((unsigned int)(unsigned char)(v2 ^ 0x1f) & 0x1f);
        int v11 = param1 >>> ((32 - (v2 ^ 0x1f)) & 0x1f);
        unsigned int v12 = v10;
        int v13 = (param1 << ((unsigned int)(unsigned char)(v2 ^ 0x1f) & 0x1f)) | (v5 >>> ((32 - (v2 ^ 0x1f)) & 0x1f));
        unsigned int v14 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v11 << 32)) / v7;
        unsigned int v15 = (unsigned int)((unsigned long long)v13 | ((unsigned long long)v11 << 32)) % v7;
        v5 <<= (v2 ^ 0x1f) & 0x1f;
        unsigned int v16 = v14 * v10;
        unsigned int v17 = (unsigned int)(((unsigned long long)v14 * (unsigned long long)v10) >>> 32L);
        unsigned int v18 = v16;
        if(v17 > v15 || (v16 > v5 && v17 == v15)) {
            v18 = v16 - v10;
        }
        return (v5 - v18) >>> ((v2 ^ 0x1f) & 0x1f);
    }
    return (int)v2;
}

void sub_8059FB2() {
}

int sub_8059FC0(int param0) {
    return →__cxa_atexit();
}

unsigned int sub_805A000() {
    unsigned int v0 = gvar_8061EF8;
    if(v0 != -1) {
        unsigned int* ptr0 = (unsigned int*)&gvar_8061EF8;
        do {
            --ptr0;
            v0();
            v0 = *ptr0;
        }
        while(v0 != -1);
    }
    return -1;
}
