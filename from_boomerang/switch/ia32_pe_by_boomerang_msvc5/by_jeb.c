
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    unsigned int v1;
    int v2 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v2;
    DWORD v3 = GetVersion();
    gvar_40892C = (unsigned int)(unsigned char)(v3 >>> 8);
    gvar_408928 = (unsigned int)(unsigned char)v3;
    gvar_408924 = (unsigned int)((unsigned int)(unsigned char)v3 * 0x100 + (unsigned int)(unsigned char)(v3 >>> 8));
    gvar_408920 = (unsigned int)(v3 >>> 16);
    HANDLE v4 = sub_402B80();
    if(!v4) {
        sub_401200();
    }
    sub_402980();
    sub_402970();
    LPSTR v5 = GetCommandLineA();
    gvar_409D04 = v5;
    unsigned int v6 = (unsigned int)sub_402540(v0);
    gvar_4088F8 = v6;
    if(!v6 || !gvar_409D04) {
        sub_401F00(-1);
    }
    sub_402290();
    sub_4021A0(v0, v1);
    sub_401ED0();
    gvar_408940 = gvar_40893C;
    int v7 = sub_401000(gvar_408930);
    int result = sub_401F00(v7);
    *(int*)__FS_BASE = v2;
    return result;
}

int sub_401000(int param0) {
    switch(param0) {
        case 2: {
            sub_4010A0("Two!\n");
            return 0;
        }
        case 3: {
            sub_4010A0("Three!\n");
            return 0;
        }
        case 4: {
            sub_4010A0("Four!\n");
            return 0;
        }
        case 5: {
            sub_4010A0("Five!\n");
            return 0;
        }
        case 6: {
            sub_4010A0("Six!\n");
            return 0;
        }
        case 7: {
            sub_4010A0("Seven!\n");
            return 0;
        }
    }
    sub_4010A0("Other!\n");
    return 0;
}

void sub_401200() {
    char v0 = gvar_408900 == 2;
    char v1 = (int)gvar_408900 < 2;
    char v2 = __parity__((unsigned char)gvar_408900 - 2);
    char v3 = gvar_408900 < 2;
    char v4 = (((gvar_408900 - 2) ^ gvar_408900) & (gvar_408900 ^ 0x2)) < 0;
    char v5 = (((gvar_408900 - 2) ^ (gvar_408900 ^ 0x2)) >>> 4) & 0x1;
    jump v0 ? &sub_40120E: &sub_401209;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401209() {
    /*BAD_CALL!*/ sub_402D90();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40120E(int param0) {
    sub_402DD0(param0);
    return gvar_406068{sub_401F20}(0xff);
}

int sub_401ED0() {
    unsigned int v0 = gvar_408CEC;
    char v1 = v0 ? 0: 1;
    char v2 = v0 >= 0x80000000;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    jump v1 ? &sub_401EDB: &sub_401ED9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401ED9() {
    int v0;
    /*BAD_CALL!*/ v0{sub_401EDB}();
}

int sub_401EDB() {
    sub_401FF0((int*)0x406008, 0x406010);
    return sub_401FF0((int*)0x406000, 4218884);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401F00(int param0) {
    return sub_401F40(param0, 0, 0);
}

int sub_401F40(UINT uExitCode, int param1, int param2) {
    int v0;
    unsigned int v1 = gvar_40895C;
    int v2 = v0;
    if(v1 == 1) {
        HANDLE hProcess = GetCurrentProcess();
        TerminateProcess(hProcess, uExitCode);
    }
    gvar_408958 = 1;
    gvar_408954 = (unsigned char)param2;
    if(!param1) {
        unsigned int v3 = gvar_408CE8;
        if(v3) {
            for(int* i = (int*)(gvar_408CE4 - 4); v3 <= (unsigned int)i; --i) {
                int v4 = *i;
                if(v4) {
                    UINT v5 = &loc_401F9A;
                    v4();
                    v3 = gvar_408CE8;
                }
            }
        }
        sub_401FF0((int*)0x406014, 0x40601c);
    }
    int result = sub_401FF0((int*)0x406020, 0x406024);
    if(!param2) {
        gvar_40895C = 1;
        /*NO_RETURN*/ ExitProcess(uExitCode);
    }
    return result;
}

int sub_401FF0(int* param0, unsigned int param1) {
    int result;
    for(int* i = param0; (unsigned int)i < param1; ++i) {
        result = *i;
        if(result) {
            result = result();
        }
    }
    return result;
}

unsigned int* sub_4021A0(int param0, unsigned int param1) {
    char v0;
    char v1;
    int v2;
    char v3;
    int v4;
    unsigned char* ptr0 = gvar_4088F8;
    int v5 = v4;
    unsigned char v6 = *ptr0;
    int v7 = 0;
    if(v6) {
        do {
            if(v6 != 61) {
                ++v7;
            }
            unsigned char* ptr1 = ptr0;
            int v8 = -1;
            do {
                v3 = *ptr1 == 0;
                ++ptr1;
                --v8;
            }
            while(~v3 && v8 == 0);
            v6 = *(unsigned char*)((unsigned char*)((int)(unsigned int*)(-2 - v8) + (int)ptr0) + 1);
            ptr0 = (unsigned char*)((unsigned char*)((int)(unsigned int*)(-2 - v8) + (int)ptr0) + 1);
        }
        while(v6);
    }
    unsigned int* ptr2 = (unsigned int*)sub_402FB0(v7 * 4 + 4);
    unsigned int* ptr3 = ptr2;
    gvar_40893C = ptr2;
    if(!ptr2) {
        v2 = 9;
        sub_401200();
    }
    unsigned char* ptr4 = gvar_4088F8;
    param1 = (unsigned int)*ptr4 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
    if(*ptr4) {
        do {
            unsigned char* ptr5 = ptr4;
            int v9 = -1;
            do {
                v1 = *ptr5 == 0;
                ++ptr5;
                --v9;
            }
            while(~v1 && v9 == 0);
            if((unsigned char)param1 != 61) {
                int v10 = sub_402FB0(-1 - v9);
                *ptr2 = v10;
                if(!v10) {
                    v2 = 9;
                    sub_401200();
                }
                unsigned char* ptr6 = ptr4;
                int v11 = -1;
                do {
                    v0 = *ptr6 == 0;
                    ++ptr6;
                    --v11;
                }
                while(~v0 && v11 == 0);
                param1 = (unsigned int)~v11;
                int* ptr7 = (int*)((int)ptr6 - (unsigned int)~v11);
                int* ptr8 = *ptr3;
                for(int i = (unsigned int)~v11 >>> 2; i != 0; --i) {
                    *ptr8 = *ptr7;
                    ++ptr7;
                    ++ptr8;
                }
                int v12 = param1 & 0x3;
                unsigned int* ptr9 = ptr3 + 1;
                while(v12 != 0) {
                    *(char*)ptr8 = *(char*)ptr7;
                    ptr7 = (int*)((char*)ptr7 + 1);
                    ptr8 = (int*)((char*)ptr8 + 1);
                    --v12;
                }
                ptr3 = ptr9;
                ptr2 = ptr9;
            }
            param1 = (unsigned int)*(char*)(-1 - v9 + (int)ptr4) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
            ptr4 = (unsigned char*)(-1 - v9 + (int)ptr4);
        }
        while((unsigned char)param1);
    }
    unsigned int* result = sub_403590(gvar_4088F8);
    gvar_4088F8 = 0;
    *ptr2 = 0;
    return result;
}

unsigned int sub_402290() {
    char v0;
    int v1;
    int v2;
    *(int*)&v0 = 260;
    GetModuleFileNameA(NULL, (LPSTR)0x408968, *(DWORD*)&v0);
    unsigned char* ptr0 = gvar_409D04;
    gvar_40894C = 4229480;
    if(!ptr0[0]) {
        ptr0 = (unsigned char*)0x408968;
    }
    *(int**)&v0 = &v1;
    sub_402330(ptr0, NULL, NULL, &v2, v0);
    *(int*)&v0 = v2 * 4 + v1;
    unsigned int* ptr1 = (unsigned int*)sub_402FB0(*(int*)&v0);
    if(!ptr1) {
        *(int*)&v0 = 8;
        sub_401200();
    }
    *(int**)&v0 = &v1;
    sub_402330(ptr0, ptr1, (char*)&ptr1[v2], &v2, v0);
    gvar_408934 = ptr1;
    gvar_408930 = (unsigned int)(v2 - 1);
    return (unsigned int)(v2 - 1);
}

int* sub_402330(unsigned char* param0, unsigned int* param1, char* param2, int* param3, char param4) {
    int i;
    int v0;
    int* ptr0 = param3;
    int v1 = v0;
    unsigned int* ptr1 = param1;
    char* ptr2 = param2;
    unsigned int* ptr3 = *(unsigned int**)&param4;
    char v2 = ptr1 ? 0: 1;
    *ptr3 = 0;
    *ptr0 = 1;
    unsigned char* ptr4 = param0;
    int v3 = 4;
    if(!v2) {
        *ptr1 = ptr2;
        ++ptr1;
        param1 = ptr1;
    }
    if(*ptr4 == 34) {
        i = (unsigned int)*(char*)(ptr4 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        ++ptr4;
        if((unsigned char)i != 34) {
            while((unsigned char)i) {
                i = (unsigned int)(unsigned char)i;
                if((*(char*)((char*)((int)&gvar_408A78 + i) + 1) & 0x4)) {
                    *ptr3 = *ptr3 + 1;
                    if(ptr2) {
                        i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                        *ptr2 = *ptr4;
                        ++ptr2;
                        ++ptr4;
                    }
                }
                *ptr3 = *ptr3 + 1;
                if(ptr2) {
                    *ptr2 = *ptr4;
                    ++ptr2;
                }
                i = (unsigned int)*(char*)(ptr4 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                ++ptr4;
                if((unsigned char)i == 34) {
                    break;
                }
            }
        }
        *ptr3 = *ptr3 + 1;
        if(ptr2) {
            *ptr2 = 0;
            ++ptr2;
        }
        if(*ptr4 == 34) {
            ++ptr4;
        }
    }
    else {
        do {
            int v4 = *ptr3 + 1;
            char v5 = ptr2 ? 0: 1;
            *ptr3 = v4;
            if(!v5) {
                i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                *ptr2 = *ptr4;
                ++ptr2;
            }
            i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            ++ptr4;
            param4 = (unsigned char)i;
            if((*(char*)((char*)((unsigned int)(unsigned char)*(int*)&param4 + (int)&gvar_408A78) + 1) & 0x4)) {
                int v6 = *ptr3 + 1;
                char v7 = ptr2 ? 0: 1;
                *ptr3 = v6;
                if(!v7) {
                    *ptr2 = *ptr4;
                    ++ptr2;
                }
                ++ptr4;
            }
            if((unsigned char)i == 32) {
                break;
            }
            else if(!(unsigned char)i) {
                goto loc_402409;
            }
        }
        while((unsigned char)i != 9);
        if(!(unsigned char)i) {
        loc_402409:
            --ptr4;
        }
        else if(ptr2) {
            *(ptr2 - 1) = 0;
        }
    }
    int v8 = 0;
    *(int*)&param4 = 0;
    while(*ptr4) {
        for(i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); *ptr4 == 32 || *ptr4 == 9; i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
            ++ptr4;
        }
        if(!*ptr4) {
            break;
        }
        else {
            if(ptr1) {
                *ptr1 = ptr2;
                param1 = ptr1 + 1;
            }
            *param3 = *param3 + 1;
            while(1) {
                v3 = (unsigned int)*ptr4 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                int v9 = 0;
                int v10 = 1;
                while((unsigned char)v3 == 92) {
                    v3 = (unsigned int)*(char*)(ptr4 + 1) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
                    ++ptr4;
                    ++v9;
                }
                if(*ptr4 == 34) {
                    if(!((unsigned char)v9 & 0x1)) {
                        if(v8 && *(char*)(ptr4 + 1) == 34) {
                            ++ptr4;
                        }
                        else {
                            v10 = 0;
                        }
                        v8 = *(int*)&param4 ? 0: 1;
                        *(int*)&param4 = *(int*)&param4 ? 0: 1;
                    }
                    v9 >>>= 1;
                }
                v3 = v9;
                int* ptr5 = (int*)(v9 - 1);
                if(v3) {
                    ptr5 = (int*)((char*)ptr5 + 1);
                    do {
                        if(ptr2) {
                            *ptr2 = 92;
                            ++ptr2;
                        }
                        v3 = *ptr3 + 1;
                        ptr5 = (int*)((char*)ptr5 - 1);
                        *ptr3 = v3;
                    }
                    while(ptr5);
                }
                ptr5 = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)ptr5 >>> 8) & 0xffffff) << 8);
                if(!*ptr4 || (!v8 && (*ptr4 == 32 || *ptr4 == 9))) {
                    break;
                }
                else {
                    if(v10) {
                        if(ptr2) {
                            v3 = (unsigned int)(unsigned char)ptr5;
                            if((*(char*)((char*)((int)&gvar_408A78 + v3) + 1) & 0x4)) {
                                *ptr2 = (unsigned char)ptr5;
                                ++ptr2;
                                ++ptr4;
                                *ptr3 = (int*)(*ptr3 + 1);
                            }
                            *ptr2 = *ptr4;
                            ++ptr2;
                            *ptr3 = (int*)(*ptr3 + 1);
                            ++ptr4;
                            continue;
                        }
                        else {
                            if((*(char*)((char*)(unsigned char)ptr5 + 4229753) & 0x4)) {
                                ++ptr4;
                                *ptr3 = (int*)(*ptr3 + 1);
                            }
                            *ptr3 = *ptr3 + 1;
                        }
                    }
                    ++ptr4;
                }
            }
            if(ptr2) {
                *ptr2 = 0;
                ++ptr2;
            }
            ptr1 = param1;
            i = *ptr3 + 1;
            v3 = 4;
            *ptr3 = i;
        }
    }
    if(ptr1) {
        *ptr1 = 0;
    }
    int* result = param3;
    *result = *result + 1;
    return result;
}

LPSTR sub_402540(int param0) {
    int v0;
    LPCH v1 = gvar_408A70;
    int v2 = v0;
    LPCWCH lpWideCharStr = NULL;
    LPCH penv = NULL;
    if(!v1) {
        lpWideCharStr = GetEnvironmentStringsW();
        if(lpWideCharStr) {
            v1 = (LPCH)0x1;
            gvar_408A70 = v1;
            goto loc_402585;
        }
        else {
            penv = GetEnvironmentStrings();
        }
        if(penv) {
            v1 = (LPCH)0x2;
            gvar_408A70 = v1;
            goto loc_402585;
        }
    }
    else {
    loc_402585:
        if(v1 == 1) {
            if(!lpWideCharStr) {
                lpWideCharStr = GetEnvironmentStringsW();
                if(!lpWideCharStr) {
                    return NULL;
                }
            }
            LPCWCH v3 = lpWideCharStr;
            if(lpWideCharStr[0]) {
            loc_4025A3:
                do {
                    ++v3;
                    if(v3[0]) {
                        goto loc_4025A3;
                    }
                    else {
                        ++v3;
                    }
                }
                while(v3[0]);
            }
            int cchWideChar = (int)((char*)((int)(int*)((int)v3 - (int)lpWideCharStr) >> 1) + 1);
            int cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, NULL, 0, NULL, NULL);
            if(cbMultiByte) {
                LPSTR lpMultiByteStr = (LPSTR)sub_402FB0(cbMultiByte);
                if(lpMultiByteStr) {
                    int v4 = WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, NULL, NULL);
                    if(!v4) {
                        sub_403590((unsigned int)lpMultiByteStr);
                        lpMultiByteStr = NULL;
                    }
                    FreeEnvironmentStringsW(lpWideCharStr);
                    return lpMultiByteStr;
                }
            }
            FreeEnvironmentStringsW(lpWideCharStr);
            return NULL;
        }
        else if(v1 == 2) {
            if(!penv) {
                penv = GetEnvironmentStrings();
                if(!penv) {
                    return NULL;
                }
            }
            param0 = (unsigned int)penv[0] | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
            LPCH v5 = penv;
            if((unsigned char)param0) {
            loc_40263B:
                do {
                    param0 = (unsigned int)v5[1] | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                    ++v5;
                    if((unsigned char)param0) {
                        goto loc_40263B;
                    }
                    else {
                        param0 = (unsigned int)v5[1] | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                        ++v5;
                    }
                }
                while((unsigned char)param0);
            }
            int* ptr0 = (int*)((char*)((int)v5 - (int)penv) + 1);
            LPSTR result = (LPSTR)sub_402FB0((int)ptr0);
            if(!result) {
                FreeEnvironmentStringsA(penv);
                return NULL;
            }
            LPCH v6 = penv;
            int* ptr1 = ptr0;
            LPSTR v7 = result;
            for(int* i = (int*)((int)ptr0 >>> 2); i != 0; i = (int*)((char*)i - 1)) {
                *(int*)&v7[0] = *(int*)&v6[0];
                v6 += 4;
                v7 += 4;
            }
            void* ptr2 = penv;
            for(int* j = (int*)((int)ptr1 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
                v7[0] = v6[0];
                ++v6;
                ++v7;
            }
            FreeEnvironmentStringsA((LPCH)ptr2);
            return result;
        }
    }
    return NULL;
}

int sub_4026A0(UINT param0) {
    int i;
    unsigned int v0;
    char v1;
    unsigned int v2;
    char v3;
    int v4;
    char v5;
    int v6 = (unsigned int)v1 | ((unsigned int)v4 << 8);
    UINT CodePage = sub_402890(param0);
    char v7 = gvar_408B7C == CodePage;
    param0 = CodePage;
    if(!v7) {
        if(CodePage == 0) {
            sub_402940();
        }
        else {
            int v8 = 0;
            unsigned int* ptr0 = (unsigned int*)&gvar_406388;
            while(*ptr0 != CodePage) {
                ptr0 += 12;
                ++v8;
                if((unsigned int)ptr0 >= &gvar_406478) {
                    BOOL v9 = GetCPInfo(CodePage, &v2);
                    if(v9 == 1) {
                        v0 = 64;
                        int* ptr1 = (int*)&gvar_408A78;
                        while(v0 != 0) {
                            *ptr1 = 0;
                            ++ptr1;
                            --v0;
                        }
                        *(char*)ptr1 = 0;
                        if(v2 <= 1) {
                            gvar_408B7C = 0;
                            gvar_408B80 = 0;
                            gvar_408B88 = 0;
                            gvar_408B8C = 0;
                            gvar_408B90 = 0;
                            return 0;
                        loc_402766:
                            unsigned int v10 = 1;
                            do {
                                *(char*)((char*)((int)&gvar_408A78 + v10) + 1) = *(char*)((char*)((int)&gvar_408A78 + v10) + 1) | 0x8;
                                ++v10;
                            }
                            while(v10 < 0xff);
                            gvar_408B7C = CodePage;
                            i = sub_4028E0((int)CodePage);
                            gvar_408B80 = i;
                        }
                        else if(v5) {
                            char* ptr2 = &v3;
                            while(1) {
                                v0 = (unsigned int)*ptr2 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                if(*ptr2) {
                                    v0 = (unsigned int)(unsigned char)v0;
                                    for(i = (int)*(ptr2 - 1); (unsigned int)i <= v0; ++i) {
                                        *(char*)((char*)((int)&gvar_408A78 + i) + 1) = *(char*)((char*)((int)&gvar_408A78 + i) + 1) | 0x4;
                                    }
                                    i = (unsigned int)*(ptr2 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                    ptr2 += 2;
                                    if((unsigned char)i) {
                                        continue;
                                    }
                                }
                                break;
                            }
                            goto loc_402766;
                        }
                        else {
                            goto loc_402766;
                        }
                        gvar_408B88 = 0;
                        gvar_408B8C = 0;
                        gvar_408B90 = 0;
                        return 0;
                    }
                    else if(gvar_408B94 != 0) {
                        sub_402940();
                        return 0;
                    }
                    return -1;
                }
            }
            unsigned int v11 = 64;
            unsigned int v12 = 0;
            int* ptr3 = (int*)&gvar_408A78;
            int v13 = v8 * 3;
            while(v11 != 0) {
                *ptr3 = 0;
                ++ptr3;
                --v11;
            }
            *(char*)ptr3 = 0;
            unsigned int v14 = 0;
            int v15 = v13 * 16;
            char* ptr4 = (char*)(v15 + &gvar_406398);
            do {
                v12 = (unsigned int)*ptr4 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                char* ptr5 = ptr4;
                if((unsigned char)v12) {
                    do {
                        v11 = (unsigned int)*(ptr5 + 1) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
                        if(!*(ptr5 + 1)) {
                            break;
                        }
                        else {
                            v11 = (unsigned int)(unsigned char)v11;
                            v12 = (unsigned int)*ptr5;
                            if(v12 <= v11) {
                                v8 = (unsigned int)*(unsigned char*)((int)&gvar_406380 + v14) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                                do {
                                    *(char*)((char*)((int)&gvar_408A78 + v12) + 1) = (unsigned char)v8 | *(char*)((char*)((int)&gvar_408A78 + v12) + 1);
                                    ++v12;
                                }
                                while(v12 <= v11);
                            }
                            v12 = (unsigned int)*(ptr5 + 2) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                            ptr5 += 2;
                        }
                    }
                    while((unsigned char)v12);
                }
                ++v14;
                ptr4 += 8;
            }
            while(v14 < 4);
            gvar_408B7C = (int)param0;
            int v16 = sub_4028E0((int)param0);
            v0 = *(unsigned int*)((int)&gvar_40638C + v15);
            unsigned int v17 = *(unsigned int*)((int)&gvar_406390 + v15);
            gvar_408B80 = v16;
            gvar_408B88 = v0;
            unsigned int v18 = *(unsigned int*)((int)&gvar_406394 + v15);
            gvar_408B8C = v17;
            gvar_408B90 = v18;
        }
    }
    return 0;
}

UINT sub_402890(UINT param0) {
    UINT result = param0;
    gvar_408B94 = 0;
    switch(result) {
        case -4: {
            result = gvar_408BB8;
            gvar_408B94 = 1;
            return result;
        }
        case -3: {
            gvar_408B94 = 1;
            return GetACP();
        }
        case -2: {
            gvar_408B94 = 1;
            return GetOEMCP();
        }
        default: {
            return result;
        }
    }
}

int sub_4028E0(int param0) {
    switch(param0) {
        case 932: {
            return 0x411;
        }
        case 936: {
            return 2052;
        }
        case 949: {
            return 1042;
        }
        case 950: {
            return 0x404;
        }
        default: {
            return 0;
        }
    }
}

int sub_402940() {
    int v0 = 64;
    int* ptr0 = (int*)&gvar_408A78;
    while(v0 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    *(char*)ptr0 = 0;
    gvar_408B7C = 0;
    gvar_408B80 = 0;
    gvar_408B88 = 0;
    gvar_408B8C = 0;
    gvar_408B90 = 0;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402970() {
    return sub_4026A0(-3);
}

UINT sub_402980() {
    unsigned int* ptr0;
    int v0;
    unsigned short v1;
    char v2;
    char v3;
    int v4 = (unsigned int)v3 | ((unsigned int)v0 << 8);
    unsigned int* ptr1 = (unsigned int*)sub_402FB0(0x100);
    if(!ptr1) {
        sub_401200();
    }
    gvar_408BE0 = ptr1;
    gvar_408CE0 = 32;
    if((unsigned int)(int*)(ptr1 + 64) > (unsigned int)ptr1) {
        do {
            *(char*)(ptr1 + 1) = 0;
            *ptr1 = -1;
            *(char*)((char*)ptr1 + 5) = 10;
            ptr1 += 2;
        }
        while(gvar_408BE0 + 0x100 > (unsigned int)ptr1);
    }
    GetStartupInfoA(&v2);
    if(v1) {
        unsigned int* ptr2 = ptr0;
        if(ptr2) {
            unsigned int v5 = *ptr2;
            char* ptr3 = (char*)(ptr2 + 1);
            unsigned int v6 = v5;
            unsigned int* ptr4 = (unsigned int*)(v5 + (int)ptr3);
            if((int)(int*)(ptr3 + 0x800) <= (int)ptr4) {
                v6 = 0x800;
            }
            if((int)gvar_408CE0 < (int)v6) {
                ptr1 = (unsigned int*)&gvar_408BE4;
                do {
                    int* ptr5 = (int*)sub_402FB0(0x100);
                    if(ptr5) {
                        unsigned int v7 = gvar_408CE0;
                        *ptr1 = ptr5;
                        gvar_408CE0 = v7 + 32;
                        if(ptr5 + 64 > ptr5) {
                            do {
                                *(char*)(ptr5 + 1) = 0;
                                *ptr5 = -1;
                                *(char*)((char*)ptr5 + 5) = 10;
                                ptr5 += 2;
                            }
                            while((unsigned int)(*ptr1 + 0x100) > (unsigned int)ptr5);
                        }
                        ++ptr1;
                    }
                    else {
                        v6 = gvar_408CE0;
                    }
                    break;
                }
                while((int)gvar_408CE0 < (int)v6);
            }
            unsigned int v8 = v6;
            unsigned int v9 = 0;
            if((int)v8 > 0) {
                do {
                    HANDLE hFile = *ptr4;
                    if(hFile != -1) {
                        v8 = (unsigned int)*ptr3 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                        if((*ptr3 & 0x1)) {
                            if(!((unsigned char)v8 & 0x8)) {
                                DWORD v10 = GetFileType(hFile);
                                if(v10) {
                                    goto loc_402AC4;
                                }
                            }
                            else {
                            loc_402AC4:
                                int v11 = v9 & 0x1f;
                                unsigned int v12 = *(unsigned int*)((v9 >> 5) * 4 + (int)&gvar_408BE0);
                                *(int*)(v11 * 8 + v12) = *ptr4;
                                *(char*)(v11 * 8 + v12 + 4) = *ptr3;
                            }
                        }
                    }
                    v8 = v6;
                    ++v9;
                    ++ptr3;
                    ++ptr4;
                }
                while((int)v8 > (int)v9);
            }
        }
    }
    unsigned int v13 = 0;
    do {
        unsigned int v14 = gvar_408BE0;
        HANDLE v15 = *(HANDLE*)(v13 * 8 + v14);
        unsigned int* ptr6 = (unsigned int*)(v13 * 8 + v14);
        if(v15 == -1) {
            *(char*)(ptr6 + 1) = 129;
            DWORD nStdHandle = !v13 ? 0xfffffff6: v13 - 1 > 0 ? 0xfffffff4: 0xfffffff5;
            v15 = GetStdHandle(nStdHandle);
            HANDLE hFile1 = v15;
            if(hFile1 != -1) {
                v15 = (HANDLE)GetFileType(hFile1);
                if(v15) {
                    v15 = (HANDLE)(unsigned char)v15;
                    *ptr6 = hFile1;
                    if(v15 == 2) {
                        v15 = (HANDLE)(*(char*)(ptr6 + 1) | 0x40);
                        goto loc_402B5B;
                    }
                    else if(v15 != 3) {
                        goto loc_402B5E;
                    }
                    else {
                        v15 = (HANDLE)(*(char*)(ptr6 + 1) | 0x8);
                        goto loc_402B5B;
                    }
                }
            }
            v15 = (unsigned int)(*(char*)(ptr6 + 1) | 0x40) | ((unsigned int)(int*)((int)(int*)((int)v15 >>> 8) & 0xffffff) << 8);
            goto loc_402B5B;
        }
        else {
            v15 = (unsigned int)(*(char*)(ptr6 + 1) | 0x80) | ((unsigned int)(int*)((int)(int*)((int)v15 >>> 8) & 0xffffff) << 8);
        loc_402B5B:
            *(char*)(ptr6 + 1) = (unsigned char)v15;
        }
    loc_402B5E:
        ++v13;
    }
    while((int)v13 < 3);
    return SetHandleCount(gvar_408CE0);
}

HANDLE sub_402B80() {
    HANDLE v0 = HeapCreate(1, 0x1000, 0);
    gvar_408BD4 = v0;
    if(!v0) {
        return 0;
    }
    LPVOID v1 = sub_4035E0();
    if(!v1) {
        HeapDestroy(gvar_408BD4);
        return NULL;
    }
    return (HANDLE)0x1;
}

int sub_402BC0(PVOID TargetFrame) {
    int v0;
    int v1;
    int result;
    int v2 = v1;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_402BD8, NULL, NULL);
    return result;
}

int sub_402C02(int param0, unsigned int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &gvar_402BE0;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    while(1) {
        result = param0;
        int v4 = *(int*)(result + 8);
        unsigned int v5 = *(unsigned int*)(result + 12);
        if(v5 == -1 || v5 == param1) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(result + 12) = v6;
            if(!*(int*)(v5 * 12 + v4 + 4)) {
                sub_402C96(v6, 0x101);
                *(int*)(v5 * 12 + v4 + 8)();
            }
        }
    }
    *(int*)__FS_BASE = v3;
    return result;
}

unsigned int sub_402C96(int param0, int param1) {
    unsigned int v0;
    unsigned int result;
    gvar_40648C = *(unsigned int*)(v0 + 8);
    gvar_406488 = result;
    gvar_406490 = v0;
    return result;
}

int sub_402CB8(int param0, PVOID param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    void* ptr0;
    int v8;
    int v9;
    void* ptr1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    void* ptr2 = &v9;
    void* ptr3 = &v9;
    char v15 = &v7 == 12;
    char v16 = (int)&v13 < 0;
    char v17 = __parity__((unsigned char)&v7 - 12);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x8) ^ (int)&v13) >>> 4) & 0x1);
    char v19 = (unsigned int)&v9 < 8;
    char v20 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v13) & (int)(int*)((int)&v9 ^ 0x8)) < 0;
    int v21 = v12;
    int v22 = v14;
    int v23 = v8;
    void* ptr4 = &v9;
    char v24 = 0;
    PVOID TargetFrame = param1;
    int v25 = param0;
    char v26 = *(int*)(v25 + 4) & 0x6 ? 0: 1;
    char v27 = (*(int*)(v25 + 4) & 0x6) < 0;
    char v28 = __parity__((unsigned char)*(int*)(v25 + 4) & 0x6);
    char v29 = 0;
    char v30 = 0;
    if(v26) {
        v13 = v25;
        int v31 = param2;
        int v32 = param2;
        int* ptr5 = &v13;
        *(unsigned int*)((int)TargetFrame - 4) = &v13;
        unsigned int v33 = *(unsigned int*)((int)TargetFrame + 12);
        int v34 = *(int*)((int)TargetFrame + 8);
        while(1) {
            v6 = v33 == -1;
            v5 = (int)v33 < -1;
            v4 = __parity__((unsigned char)v33 - 0xff);
            v3 = v33 < 0xffffffff;
            v2 = (((v33 + 1) ^ v33) & ~v33) < 0;
            v1 = (((v33 + 1) ^ ~v33) >>> 4) & 0x1;
            if(v6) {
                break;
            }
            else {
                int v35 = v33 * 3;
                char v36 = *(int*)(v35 * 4 + v34 + 4) ? 0: 1;
                char v37 = *(int*)(v35 * 4 + v34 + 4) < 0;
                char v38 = __parity__((unsigned char)*(int*)(v35 * 4 + v34 + 4));
                char v39 = *(unsigned int*)(v35 * 4 + v34 + 4) < 0;
                char v40 = 0;
                v1 = 0;
                if(!v36) {
                    int* ptr6 = (int*)((int)TargetFrame + 16);
                    int v41 = *(int*)(v35 * 4 + v34 + 4)((int)ptr2, (int)v33);
                    ptr2 = ptr1;
                    v33 = (unsigned int)ptr0;
                    TargetFrame = *(PVOID*)((int)ptr2 + 12);
                    int v42 = v41;
                    v6 = v42 ? 0: 1;
                    v5 = v42 < 0;
                    v4 = __parity__((unsigned char)v42);
                    v2 = 0;
                    v3 = 0;
                    if(!v6) {
                        if(!v5) {
                            int v43 = *(int*)((int)TargetFrame + 8);
                            int v44 = sub_402BC0(TargetFrame);
                            int* ptr7 = &ptr0;
                            char v45 = &v7 == 28;
                            char v46 = (int)&ptr4 < 0;
                            char v47 = __parity__((unsigned char)&v7 - 28);
                            char v48 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&ptr4) >>> 4) & 0x1);
                            char v49 = (unsigned int)&ptr0 >= 0xfffffffc;
                            char v50 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
                            ptr2 = (void*)((int)TargetFrame + 16);
                            int v51 = sub_402C02((int)TargetFrame, v33);
                            int* ptr8 = &ptr1;
                            char v52 = &v7 == 28;
                            char v53 = (int)&ptr4 < 0;
                            char v54 = __parity__((unsigned char)&v7 - 28);
                            char v55 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&ptr4) >>> 4) & 0x1);
                            char v56 = (unsigned int)&ptr1 >= 0xfffffff8;
                            char v57 = (int)(int*)((int)(int*)((int)&ptr4 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x8)) < 0;
                            int v58 = (int)(v33 * 3);
                            int v59 = *(int*)(v58 * 4 + v43 + 8);
                            unsigned int v60 = sub_402C96(v58, 1);
                            int v61 = *(int*)(v10 * 4 + v43);
                            *(int*)((int)TargetFrame + 12) = *(int*)(v10 * 4 + v43);
                            *(int*)(v10 * 4 + v43 + 8)();
                        }
                        else {
                            v0 = 0;
                            goto loc_402D6D;
                        }
                    }
                }
                v34 = *(int*)((int)TargetFrame + 8);
                v10 = v33 * 3;
                v33 = *(unsigned int*)(v10 * 4 + v34);
            }
        }
    }
    else {
        ptr0 = &v9;
        int* ptr9 = (int*)((int)TargetFrame + 16);
        int v62 = sub_402C02((int)TargetFrame, 0xffffffff);
        int* ptr10 = &v11;
        v6 = &v7 == 32;
        v5 = (int)&ptr0 < 0;
        v4 = __parity__((unsigned char)&v7 - 32);
        v1 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        v3 = (unsigned int)&v11 >= 0xfffffff8;
        v2 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0x8)) < 0;
        void* ptr11 = ptr0;
    }
    v0 = 1;
loc_402D6D:
    void* ptr12 = ptr4;
    int v63 = v23;
    int v64 = v22;
    int v65 = v21;
    int v66 = *(int*)ptr12;
    int v67 = v22;
    int* ptr13 = &v21;
    jump v67;
}

int sub_402D90() {
    unsigned int v0 = gvar_408900;
    char v1 = v0 == 1;
    char v2 = (int)v0 < 1;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1;
    char v5 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v6 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    jump v1 ? &sub_402DA7: &sub_402D9A;
}

int sub_402D9A() {
    int v0;
    char v1 = v0 ? 0: 1;
    char v2 = v0 < 0;
    char v3 = __parity__((unsigned char)v0);
    char v4 = 0;
    char v5 = 0;
    char v6 = gvar_40606C == 1;
    char v7 = (int)gvar_40606C < 1;
    char v8 = __parity__((unsigned char)gvar_40606C - 1);
    char v9 = gvar_40606C < 1;
    char v10 = (((gvar_40606C - 1) ^ gvar_40606C) & (gvar_40606C ^ 0x1)) < 0;
    char v11 = (((gvar_40606C - 1) ^ (gvar_40606C ^ 0x1)) >>> 4) & 0x1;
    jump v6 ? &sub_402DA7: &sub_402DCC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402DA7() {
    char v0;
    int v1 = sub_402DD0(252);
    unsigned int v2 = gvar_408B98;
    int* ptr0 = &v0;
    char v3 = v2 ? 0: 1;
    char v4 = v2 >= 0x80000000;
    char v5 = __parity__((unsigned char)v2);
    char v6 = 0;
    char v7 = 0;
    jump v3 ? &sub_402DBF: &sub_402DBD;
}

int sub_402DD0(unsigned int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    HANDLE hFile;
    char v8;
    int v9;
    unsigned char v10;
    char v11;
    char v12;
    unsigned int v13 = param0;
    int result = &gvar_406498;
    int v14 = v9;
    int v15 = 0;
    while(*(int*)result != v13) {
        result += 8;
        ++v15;
        if((unsigned int)result >= &gvar_406528) {
            break;
        }
    }
    if(*(int*)(v15 * 8 + (int)&gvar_406498) == v13) {
        result = gvar_408900;
        if((result == 1 || (!result && gvar_40606C == 1))) {
            HANDLE v16 = gvar_408BE0;
            if(v16) {
                hFile = *(HANDLE*)((int)v16 + 16);
                if(hFile == -1) {
                    goto loc_402F70;
                }
            }
            else {
            loc_402F70:
                hFile = GetStdHandle(0xfffffff4);
            }
            LPCVOID lpBuffer = *(LPCVOID*)(v15 * 8 + (int)&gvar_40649C);
            v7 = 0;
            v6 = &v12;
            LPCVOID v17 = lpBuffer;
            int v18 = -1;
            do {
                v5 = *(char*)v17 == 0;
                v17 = (LPCVOID)((int)v17 + 1);
                --v18;
            }
            while(~v5 && v18 == 0);
            return WriteFile(hFile, lpBuffer, (DWORD)(-2 - v18), (LPDWORD)v6, NULL);
        }
        else if(v13 != 252) {
            DWORD v19 = GetModuleFileNameA(NULL, &v10, 260);
            if(!v19) {
                int v20 = 5;
                int* ptr0 = "<program name unknown>";
                LPSTR v21 = &v10;
                while(v20 != 0) {
                    *(int*)&v21[0] = *ptr0;
                    ++ptr0;
                    v21 += 4;
                    --v20;
                }
                *(short*)&v21[0] = *(CHAR*)ptr0;
                v21[2] = *((char*)ptr0 + 2);
            loc_402E62:
                int v22 = -1;
                while(v22 != 0) {
                    --v22;
                    if(v10 == 0) {
                    loc_402E75:
                        if((unsigned int)~v22 > 60) {
                            LPSTR v23 = &v10;
                            int v24 = -1;
                            do {
                                v4 = v23[0] == 0;
                                ++v23;
                                --v24;
                            }
                            while(~v4 && v24 == 0);
                            sub_403D90((int)&v8, &gvar_405358, 3);
                        }
                        int v25 = 6;
                        int* ptr1 = "Runtime Error!\n\nProgram: ";
                        int v26 = &v11;
                        while(v25 != 0) {
                            *(int*)v26 = *ptr1;
                            ++ptr1;
                            v26 += 4;
                            --v25;
                        }
                        *(short*)v26 = *(short*)ptr1;
                        int v27 = -1;
                        LPSTR v28 = &v10;
                        while(v27 != 0) {
                            char v29 = v28[0] == 0;
                            ++v28;
                            --v27;
                            if(!~v29) {
                            loc_402EC7:
                                unsigned int v30 = (unsigned int)~v27;
                                int* ptr2 = (int*)((int)v28 - (unsigned int)~v27);
                                int v31 = -1;
                                int v32 = &v11;
                                while(v31 != 0) {
                                    char v33 = *(char*)v32 == 0;
                                    ++v32;
                                    --v31;
                                    if(!~v33) {
                                    loc_402ED4:
                                        int* ptr3 = (int*)(v32 - 1);
                                        for(int i = v30 >>> 2; i != 0; --i) {
                                            *ptr3 = *ptr2;
                                            ++ptr2;
                                            ++ptr3;
                                        }
                                        int v34 = v30 & 0x3;
                                        v7 = 0x12010;
                                        while(v34 != 0) {
                                            *(char*)ptr3 = *(char*)ptr2;
                                            ptr2 = (int*)((char*)ptr2 + 1);
                                            ptr3 = (int*)((char*)ptr3 + 1);
                                            --v34;
                                        }
                                        unsigned char* ptr4 = (unsigned char*)&gvar_405338;
                                        int v35 = -1;
                                        do {
                                            v3 = *ptr4 == 0;
                                            ++ptr4;
                                            --v35;
                                        }
                                        while(~v3 && v35 == 0);
                                        unsigned int v36 = (unsigned int)~v35;
                                        v6 = "Microsoft Visual C++ Runtime Library";
                                        int* ptr5 = (int*)((int)ptr4 - v36);
                                        unsigned int v37 = v36;
                                        int v38 = &v11;
                                        int v39 = -1;
                                        do {
                                            v2 = *(char*)v38 == 0;
                                            ++v38;
                                            --v39;
                                        }
                                        while(~v2 && v39 == 0);
                                        int* ptr6 = (int*)(v38 - 1);
                                        for(int j = v37 >>> 2; j != 0; --j) {
                                            *ptr6 = *ptr5;
                                            ++ptr5;
                                            ++ptr6;
                                        }
                                        for(int k = v37 & 0x3; k != 0; --k) {
                                            *(char*)ptr6 = *(char*)ptr5;
                                            ptr5 = (int*)((char*)ptr5 + 1);
                                            ptr6 = (int*)((char*)ptr6 + 1);
                                        }
                                        unsigned char* ptr7 = *(unsigned int*)(v15 * 8 + (int)&gvar_40649C);
                                        int v40 = -1;
                                        do {
                                            v1 = *ptr7 == 0;
                                            ++ptr7;
                                            --v40;
                                        }
                                        while(~v1 && v40 == 0);
                                        unsigned int v41 = (unsigned int)~v40;
                                        int* ptr8 = (int*)((int)ptr7 - v41);
                                        unsigned int v42 = v41;
                                        int v43 = &v11;
                                        int v44 = -1;
                                        do {
                                            v0 = *(char*)v43 == 0;
                                            ++v43;
                                            --v44;
                                        }
                                        while(~v0 && v44 == 0);
                                        int* ptr9 = (int*)(v43 - 1);
                                        for(int counter = v42 >>> 2; counter != 0; --counter) {
                                            *ptr9 = *ptr8;
                                            ++ptr8;
                                            ++ptr9;
                                        }
                                        int v45 = v42 & 0x3;
                                        int v46 = &v11;
                                        while(v45 != 0) {
                                            *(char*)ptr9 = *(char*)ptr8;
                                            ptr8 = (int*)((char*)ptr8 + 1);
                                            ptr9 = (int*)((char*)ptr9 + 1);
                                            --v45;
                                        }
                                        return sub_403D00(v46, v6, v7);
                                    }
                                }
                                goto loc_402ED4;
                            }
                        }
                        goto loc_402EC7;
                    }
                }
                goto loc_402E75;
            }
            else {
                goto loc_402E62;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402FD0(unsigned int param0, int param1) {
    int result;
    unsigned int v0 = param0;
    if(v0 <= 0xffffffe0) {
        if(!v0) {
            v0 = 1;
        }
        else {
        loc_402FEB:
            if(v0 > 0xffffffe0) {
                result = 0;
            loc_402FFC:
                if(!result && param1) {
                    int v1 = sub_403E90();
                    if(v1) {
                        goto loc_402FEB;
                    }
                    else {
                        return 0;
                    }
                }
                else {
                    return result;
                }
            }
        }
        result = sub_403020((int)v0);
        goto loc_402FFC;
    }
    else {
        return 0;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
LPVOID sub_403020(int param0) {
    LPVOID result;
    if((SIZE_T)((param0 + 15) & 0xfffffff0) <= gvar_408774) {
        result = (LPVOID)sub_403940((SIZE_T)((param0 + 15) & 0xfffffff0) >>> 4);
        if(!result) {
            return HeapAlloc(gvar_408BD4, 0, (SIZE_T)((param0 + 15) & 0xfffffff0));
        }
    }
    else {
        result = HeapAlloc(gvar_408BD4, 0, (SIZE_T)((param0 + 15) & 0xfffffff0));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403350(char param0, unsigned int* param1) {
    unsigned int v0;
    unsigned int* ptr0 = param1;
    char v1 = (unsigned char)*(int*)(ptr0 + 3);
    int v2 = (unsigned int)((*(int*)(ptr0 + 3) >>> 8) & 0xffffff);
    unsigned int v3 = *(ptr0 + 4);
    if((v1 & 0x82) && !(v1 & 0x40)) {
        unsigned int v4 = 0;
        if((v1 & 0x1)) {
            *(int*)(ptr0 + 1) = 0;
            if(!(v1 & 0x10)) {
                *(int*)(ptr0 + 3) = (unsigned int)(v1 | 0x20) | ((unsigned int)v2 << 8);
                return -1;
            }
            *ptr0 = *(int*)(ptr0 + 2);
            *(int*)(ptr0 + 3) = (unsigned int)(v1 & 0xfe) | ((unsigned int)v2 << 8);
        }
        int v5 = *(int*)(ptr0 + 3);
        *(int*)(ptr0 + 1) = 0;
        v5 = (unsigned int)(((unsigned char)v5 & 0xef) | 0x2) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        *(int*)(ptr0 + 3) = v5;
        if(!(v5 & 0x10c)) {
            if(ptr0 == 0x406098 || ptr0 == 0x4060b8) {
                int v6 = sub_403060((int)v3);
                if(!v6) {
                    goto loc_4033BB;
                }
            }
            else {
            loc_4033BB:
                sub_404200((int)ptr0);
            }
        }
        if((*(int*)(ptr0 + 3) & 0x108)) {
            unsigned int v7 = *(ptr0 + 2);
            v0 = *ptr0 - v7;
            unsigned int v8 = (unsigned int)(*(int*)(ptr0 + 6) - 1);
            *ptr0 = v7 + 1;
            *(ptr0 + 1) = v8;
            if((int)v0 > 0) {
                v4 = (unsigned int)sub_403F10((int)v3, (int)v7, (int)v0);
            }
            else if((*(char*)((int)(v3 != -1 ? (HANDLE)((v3 & 0x1f) * 8 + *(unsigned int*)((v3 >> 5) * 4 + (int)&gvar_408BE0)): (HANDLE)&gvar_406478) + 4) & 0x20)) {
                HANDLE v9 = sub_404140(v3, 0, 2);
            }
            **(ptr0 + 2) = param0;
        }
        else {
            v0 = 1;
            v4 = (unsigned int)sub_403F10((int)v3, (int)&param0, 1);
        }
        if(v4 != v0) {
            *(int*)(ptr0 + 3) = (unsigned int)((unsigned char)*(int*)(ptr0 + 3) | 0x20) | ((unsigned int)((*(int*)(ptr0 + 3) >>> 8) & 0xffffff) << 8);
            return -1;
        }
        return (unsigned int)(unsigned char)*(int*)&param0;
    }
    *(int*)(ptr0 + 3) = (unsigned int)(v1 | 0x20) | ((unsigned int)v2 << 8);
    return -1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_403590(unsigned int param0) {
    unsigned int* result;
    int v0;
    int v1 = v0;
    unsigned int v2 = param0;
    if(v2) {
        unsigned int v3 = sub_403880(v2, &v1, &param0);
        if(v3) {
            return sub_4038E0(v1, param0, (char*)v3);
        }
        result = (unsigned int*)HeapFree(gvar_408BD4, 0, (LPVOID)v2);
    }
    return result;
}

LPVOID sub_4035E0() {
    LPVOID lpMem;
    if(gvar_406760 == -1) {
        lpMem = (LPVOID)&gvar_406750;
        goto loc_403625;
    }
    else {
        lpMem = HeapAlloc(gvar_408BD4, 0, 0x2020);
        if(lpMem) {
        loc_403625:
            LPVOID lpAddress = VirtualAlloc(NULL, &MZHeader, 0x2000, 4);
            if(lpAddress) {
                LPVOID v0 = VirtualAlloc(lpAddress, 0x10000, 0x1000, 4);
                if(v0) {
                    if(lpMem == &gvar_406750) {
                        if(!*(int*)&gvar_406750) {
                            *(int*)&gvar_406750 = 80;
                        }
                        if(!gvar_406754) {
                            gvar_406754 = &gvar_406750;
                        }
                    }
                    else {
                        *(int*)lpMem = &gvar_406750;
                        *(unsigned int*)((int)lpMem + 4) = gvar_406754;
                        gvar_406754 = lpMem;
                        **(LPVOID**)((int)lpMem + 4) = lpMem;
                    }
                    int* ptr0 = (int*)((int)lpMem + 24);
                    *(unsigned int*)((int)lpMem + 20) = (int*)((int)lpAddress + &MZHeader);
                    *(LPVOID*)((int)lpMem + 16) = lpAddress;
                    *(unsigned int*)((int)lpMem + 8) = ptr0;
                    *(unsigned int*)((int)lpMem + 12) = (int*)((int)lpMem + 152);
                    unsigned int v1 = 0;
                    do {
                        ptr0 += 2;
                        unsigned int v2 = (int)v1 >= 16 ? 0xffffffff: 240;
                        ++v1;
                        *(unsigned int*)(ptr0 - 2) = v2;
                        *(ptr0 - 1) = 241;
                    }
                    while((int)v1 < 0x400);
                    int v3 = 0x4000;
                    LPVOID v4 = lpAddress;
                    while(v3 != 0) {
                        *(int*)v4 = 0;
                        v4 = (LPVOID)((int)v4 + 4);
                        --v3;
                    }
                    unsigned int v5 = (unsigned int)(*(int*)((int)lpMem + 16) + 0x10000);
                    if(v5 > (unsigned int)lpAddress) {
                        v5 = (unsigned int)0xff | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                        do {
                            *(int*)((int)lpAddress + 4) = 240;
                            *(int**)lpAddress = (int*)((int)lpAddress + 8);
                            *(char*)((int)lpAddress + 248) = (unsigned char)v5;
                            lpAddress = (LPVOID)((int)lpAddress + 0x1000);
                        }
                        while((unsigned int)(*(int*)((int)lpMem + 16) + 0x10000) > (unsigned int)lpAddress);
                    }
                    return lpMem;
                }
                VirtualFree(lpAddress, 0, 0x8000);
            }
            if(lpMem != &gvar_406750) {
                HeapFree(gvar_408BD4, 0, lpMem);
            }
        }
    }
    return NULL;
}

BOOL sub_403750(LPVOID param0) {
    LPVOID v0 = param0;
    LPVOID lpMem = (LPVOID)0x8000;
    DWORD dwFlags = 0;
    BOOL result = VirtualFree(*(LPVOID*)((int)v0 + 16), 0, 0x8000);
    if(gvar_408770 == v0) {
        gvar_408770 = *(unsigned int*)((int)v0 + 4);
    }
    if(v0 != &gvar_406750) {
        int* ptr0 = *(unsigned int*)((int)v0 + 4);
        int v1 = *(int*)v0;
        lpMem = v0;
        dwFlags = 0;
        *ptr0 = v1;
        *(int*)(*(int*)v0 + 4) = *(int*)((int)v0 + 4);
        result = HeapFree(gvar_408BD4, dwFlags, lpMem);
    }
    else {
        gvar_406760 = 0xffffffff;
    }
    return result;
}

BOOL sub_4037B0(BOOL param0) {
    BOOL result;
    LPVOID v0 = gvar_406754;
    do {
        if(*(int*)((int)v0 + 16) != -1) {
            int v1 = 0;
            unsigned int* ptr0 = (unsigned int*)((int)v0 + 0x2010);
            int v2 = 0x3ff000;
            do {
                if(*ptr0 == 240) {
                    result = VirtualFree((LPVOID)(*(int*)((int)v0 + 16) + v2), 0x1000, 0x4000);
                    if(result) {
                        *ptr0 = -1;
                        --gvar_408BBC;
                        unsigned int v3 = *(unsigned int*)((int)v0 + 12);
                        if(!v3 || v3 > (unsigned int)ptr0) {
                            *(unsigned int*)((int)v0 + 12) = ptr0;
                        }
                        ++v1;
                        result = param0 - 1;
                        --param0;
                        if(!result) {
                            break;
                        }
                    }
                    goto loc_403820;
                }
                else {
                loc_403820:
                    v2 -= 0x1000;
                    ptr0 -= 2;
                }
                break;
            }
            while(v2 >= 0);
            LPVOID v4 = v0;
            v0 = *(LPVOID*)((int)v0 + 4);
            if(v1 && *(int*)((int)v4 + 24) == -1) {
                result = 1;
                unsigned int* ptr1 = (unsigned int*)((int)v4 + 32);
                while(*ptr1 == -1) {
                    ++result;
                    ptr1 += 2;
                    if(result >= 0x400) {
                        break;
                    }
                }
                if(result == 0x400) {
                    result = sub_403750(v4);
                }
            }
        }
        if(gvar_406754 == v0) {
            return result;
        }
        result = param0;
    }
    while(result > 0);
    return result;
}

int →sub_403889(int param0, int param1, int param2) {
    return sub_403889(param0, param1, param2);
}

int sub_4038D6() {
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_4038E0(int param0, unsigned int param1, char* param2) {
    int v0 = (param1 - *(int*)(param0 + 16)) >> 12;
    unsigned int* result = (unsigned int*)(v0 * 8 + param0 + 24);
    char* ptr0 = param2;
    *result = (unsigned int)*ptr0 + *(int*)(v0 * 8 + param0 + 24);
    *ptr0 = 0;
    unsigned int v1 = *result;
    *(int*)(result + 1) = 241;
    if(v1 == 240) {
        result = (unsigned int*)(gvar_408BBC + 1);
        gvar_408BBC = (unsigned int*)(gvar_408BBC + 1);
        if(result == 32) {
            result = (unsigned int*)sub_4037B0(16);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_403940(unsigned int* param0) {
    LPVOID v0;
    char v1;
    int* result;
    int v2;
    SIZE_T v3 = gvar_408770;
    int v4 = v2;
    unsigned int* ptr0 = param0;
    SIZE_T v5 = v3;
    do {
        unsigned int v6 = *(unsigned int*)(v3 + 16);
        if(v6 != -1) {
            unsigned int* ptr1 = *(unsigned int*)(v3 + 8);
            unsigned int v7 = (unsigned int)(v3 + 8216);
            int* ptr2 = (int*)((int)(int*)((int)(int*)((int)((int*)((int)ptr1 - v3) - 6) >> 3) * 0x1000) + v6);
            while(v7 > (unsigned int)ptr1) {
                unsigned int v8 = *ptr1;
                if((int)v8 >= (int)ptr0 && *(ptr1 + 1) > (unsigned int)ptr0) {
                    result = (int*)sub_403B80((int)ptr2, (int)v8, (int)ptr0);
                    if(!result) {
                        v3 = v5;
                        *(ptr1 + 1) = ptr0;
                        goto loc_40399C;
                    }
                    else {
                        SIZE_T v9 = v5;
                        gvar_408770 = v5;
                        *ptr1 = (unsigned int*)(*ptr1 - (int)ptr0);
                        *(unsigned int*)(v9 + 8) = ptr1;
                        return result;
                    }
                }
                else {
                loc_40399C:
                    ptr1 += 2;
                    ptr2 += 0x400;
                }
            }
            unsigned int v10 = *(unsigned int*)(v3 + 8);
            int v11 = *(int*)(v3 + 16);
            unsigned int* ptr3 = (unsigned int*)(v3 + 24);
            while(v10 > (unsigned int)ptr3) {
                unsigned int v12 = *ptr3;
                if((int)v12 >= (int)ptr0 && *(ptr3 + 1) > (unsigned int)ptr0) {
                    result = (int*)sub_403B80(v11, (int)v12, (int)ptr0);
                    if(!result) {
                        v3 = v5;
                        *(ptr3 + 1) = ptr0;
                        goto loc_4039D7;
                    }
                    else {
                        SIZE_T v13 = v5;
                        gvar_408770 = v5;
                        *ptr3 = (unsigned int*)(*ptr3 - (int)ptr0);
                        *(unsigned int*)(v13 + 8) = ptr3;
                        return result;
                    }
                }
                else {
                loc_4039D7:
                    ptr3 += 2;
                    v11 += 0x1000;
                }
            }
        }
        v3 = *(SIZE_T*)v3;
        v1 = gvar_408770 == v3;
        v5 = v3;
    }
    while(!v1);
    unsigned int* ptr4 = (unsigned int*)&gvar_406750;
    while(*(int*)(ptr4 + 4) == -1 || !*(int*)(ptr4 + 3)) {
        ptr4 = *ptr4;
        if(ptr4 == &gvar_406750) {
            v0 = (LPVOID)sub_4035E0();
            if(v0) {
                unsigned int* ptr5 = *(unsigned int*)((int)v0 + 16);
                *(char*)(ptr5 + 2) = (unsigned char)ptr0;
                gvar_408770 = v0;
                *ptr5 = (int*)((int)ptr5 + (int)ptr0) + 2;
                *(ptr5 + 1) = (int*)(240 - (int)ptr0);
                *(unsigned int*)((int)v0 + 24) = (unsigned int*)(*(unsigned int*)((int)v0 + 24) - (unsigned int)(unsigned char)ptr0);
                return (int*)(ptr5 + 64);
            }
            return NULL;
        }
    }
    unsigned int* ptr6 = *(ptr4 + 3);
    int v14 = *(int*)(ptr4 + 4);
    param0 = ptr6;
    LPVOID lpAddress = (LPVOID)((int)(int*)((int)(int*)((int)((int*)((int)ptr6 - (int)ptr4) - 6) >> 3) * 0x1000) + v14);
    unsigned int counter = 0;
    if(*ptr6 == -1) {
        while((int)counter < 16) {
            unsigned int v15 = *(ptr6 + 2);
            ptr6 += 2;
            ++counter;
            if(v15 != -1) {
                break;
            }
        }
    }
    v5 = (SIZE_T)(counter * 0x1000);
    v0 = VirtualAlloc(lpAddress, (SIZE_T)(counter * 0x1000), 0x1000, 4);
    if(v0 == lpAddress) {
        unsigned int* ptr7 = param0;
        unsigned int* ptr8 = param0;
        if((int)counter > 0) {
            int* ptr9 = (int*)((int)lpAddress + 4);
            do {
                *ptr9 = 240;
                *(unsigned int*)(ptr9 - 1) = ptr9 + 1;
                *(char*)(ptr9 + 61) = 0xff;
                *ptr8 = 240;
                *(int*)(ptr8 + 1) = 241;
                ptr9 += 0x400;
                ptr8 += 2;
                --counter;
            }
            while(counter);
            ptr7 = param0;
        }
        int* ptr10 = (int*)(ptr4 + 2054);
        gvar_408770 = ptr4;
        char v16 = (unsigned int)ptr10 > (unsigned int)ptr8;
        if(v16) {
            while(*ptr8 != -1) {
                ptr8 += 2;
                if((unsigned int)ptr10 <= (unsigned int)ptr8) {
                    break;
                }
            }
            v16 = (unsigned int)ptr10 > (unsigned int)ptr8;
        }
        *(ptr4 + 3) = v16 ? ptr8: NULL;
        *(char*)((int)lpAddress + 8) = (unsigned char)ptr0;
        *(ptr4 + 2) = ptr7;
        *ptr7 = (int*)(*ptr7 - (int)ptr0);
        *(unsigned int*)((int)lpAddress + 4) = (int*)(*(unsigned int*)((int)lpAddress + 4) - (int)ptr0);
        *(int**)lpAddress = (int*)((int)ptr0 + (int)lpAddress) + 2;
        return (int*)((int)lpAddress + 0x100);
    }
    return NULL;
}

int sub_403D00(int param0, int param1, int param2) {
    int v0;
    void* ptr0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    unsigned int v4 = gvar_408BC0;
    void* ptr2 = ptr0;
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    char v11 = v4 ? 0: 1;
    char v12 = v4 >= 0x80000000;
    char v13 = __parity__((unsigned char)v4);
    char v14 = 0;
    char v15 = 0;
    if(v11) {
        HMODULE hModule = LoadLibraryA("user32.dll");
        char v16 = hModule ? 0: 1;
        char v17 = (int)hModule < 0;
        char v18 = __parity__((unsigned char)hModule);
        char v19 = 0;
        char v20 = 0;
        if(!v16) {
            int v21 = 41746;
            HMODULE v22 = (HMODULE)GetProcAddress(hModule, "MessageBoxA");
            char v23 = v22 ? 0: 1;
            char v24 = (int)v22 < 0;
            char v25 = __parity__((unsigned char)v22);
            char v26 = 0;
            char v27 = 0;
            gvar_408BC0 = v22;
            if(!v23) {
                FARPROC v28 = GetProcAddress(hModule, "GetActiveWindow");
                gvar_408BC4 = v28;
                FARPROC v29 = GetProcAddress(hModule, "GetLastActivePopup");
                gvar_408BC8 = v29;
                goto loc_403D50;
            }
        }
        return 0;
    }
loc_403D50:
    unsigned int v30 = gvar_408BC4;
    char v31 = v30 ? 0: 1;
    char v32 = v30 >= 0x80000000;
    char v33 = __parity__((unsigned char)v30);
    char v34 = 0;
    char v35 = 0;
    if(!v31) {
        int v36 = v30();
        v5 = v36;
    }
    char v37 = v5 ? 0: 1;
    char v38 = v5 < 0;
    char v39 = __parity__((unsigned char)v5);
    char v40 = 0;
    char v41 = 0;
    if(!v37) {
        unsigned int v42 = gvar_408BC8;
        v37 = v42 ? 0: 1;
        v38 = v42 >= 0x80000000;
        v39 = __parity__((unsigned char)v42);
        v40 = 0;
        v41 = 0;
        if(!v37) {
            int v43 = v42(v5);
            v5 = v43;
        }
    }
    int v44 = param2;
    int v45 = param1;
    int v46 = param0;
    int v47 = gvar_408BC0(v5, v46, v45, v44);
    int v48 = v2;
    int v49 = v1;
    void* ptr3 = ptr1;
    int v50 = v0;
    int* ptr4 = &v3;
    jump v50;
}

unsigned int sub_403F10(unsigned int param0, LPCVOID param1, DWORD param2) {
    unsigned int v0;
    LPCVOID lpBuffer;
    unsigned int v1;
    char v2;
    int v3;
    unsigned int v4 = param0;
    char v5 = (unsigned int)gvar_408CE0 > v4;
    int v6 = v3;
    if(v5) {
        unsigned int* ptr0 = (unsigned int*)(v4 >> 5);
        unsigned int v7 = *(unsigned int*)((int)(int*)((int)ptr0 * 4) + (int)&gvar_408BE0);
        unsigned int* ptr1 = (unsigned int*)((int*)((int)ptr0 * 4) + 0x1022f8);
        int v8 = (v4 & 0x1f) * 8;
        unsigned int* ptr2 = ptr1;
        int v9 = v8;
        ptr0 = (unsigned int)*(char*)(v7 + v8 + 4) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        if(!(*(char*)(v7 + v8 + 4) & 0x1)) {
            gvar_408914 = 9;
            gvar_408918 = 0;
            return 0xffffffff;
        }
        DWORD nNumberOfBytesToWrite1 = param2;
        unsigned int v10 = 0;
        unsigned int v11 = 0;
        if(nNumberOfBytesToWrite1 == 0) {
            return 0;
        }
        if(((unsigned char)ptr0 & 0x20)) {
            sub_404140(v4, 0, 2);
        }
        unsigned int* ptr3 = (unsigned int*)(*ptr1 + v8);
        if((*(char*)(ptr3 + 1) & 0x80)) {
            lpBuffer = param1;
            v0 = 0;
            LPCVOID v12 = lpBuffer;
            if(nNumberOfBytesToWrite1 != 0) {
                do {
                    LPCVOID v13 = &v2;
                    do {
                        int* ptr4 = (int*)((int)v12 - (int)lpBuffer);
                        if((unsigned int)ptr4 >= nNumberOfBytesToWrite1) {
                            break;
                        }
                        else {
                            ptr4 = (unsigned int)*(char*)v12 | ((unsigned int)(int*)((int)(int*)((int)ptr4 >>> 8) & 0xffffff) << 8);
                            v12 = (LPCVOID)((int)v12 + 1);
                            if((unsigned char)ptr4 == 10) {
                                unsigned int v14 = v11;
                                *(char*)v13 = 13;
                                v13 = (LPCVOID)((int)v13 + 1);
                                v11 = v14 + 1;
                            }
                            *(char*)v13 = (unsigned char)ptr4;
                            v13 = (LPCVOID)((int)v13 + 1);
                        }
                    }
                    while((int)(int*)((int)v13 - (int)&v2) < 0x400);
                    DWORD nNumberOfBytesToWrite = (DWORD)((int)v13 - (int)&v2);
                    LPDWORD v15 = &v1;
                    int v16 = *ptr2;
                    LPCVOID v17 = &v2;
                    BOOL v18 = WriteFile(*(HANDLE*)(v16 + v9), &v2, nNumberOfBytesToWrite, &v1, NULL);
                    if(v18) {
                        v10 += v1;
                        if((int)nNumberOfBytesToWrite > (int)v1 || (unsigned int)(int*)((int)v12 - (int)lpBuffer) >= nNumberOfBytesToWrite1) {
                            break;
                        }
                    }
                    else {
                        v0 = (unsigned int)GetLastError();
                        break;
                    }
                }
                while(1);
                v8 = v9;
            }
        }
        else {
            lpBuffer = param1;
            BOOL v19 = WriteFile(*ptr3, lpBuffer, nNumberOfBytesToWrite1, &v1, NULL);
            if(v19) {
                v0 = 0;
                v10 = v1;
            }
            else {
                v0 = (unsigned int)GetLastError();
            }
        }
        unsigned int v20 = v10;
        if(v20) {
            return v20 - v11;
        }
        v4 = v0;
        if(v4) {
            if(v4 == 5) {
                gvar_408918 = 5;
                gvar_408914 = 9;
            }
            else {
                sub_4043D0(v4);
            }
            return 0xffffffff;
        }
        else if((*(char*)(*ptr2 + v8 + 4) & 0x40) && *(char*)lpBuffer == 26) {
            return 0;
        }
        gvar_408914 = 28;
    }
    else {
        gvar_408914 = 9;
    }
    gvar_408918 = 0;
    return 0xffffffff;
}

HANDLE sub_404140(unsigned int param0, LONG lDistanceToMove, DWORD dwMoveMethod) {
    int v0;
    unsigned int v1 = gvar_408CE0;
    int v2 = v0;
    if(v1 > param0 && (*(char*)((param0 & 0x1f) * 8 + *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_408BE0) + 4) & 0x1)) {
        HANDLE hFile = (HANDLE)sub_404380((int)param0);
        if(hFile == -1) {
            gvar_408914 = 9;
            return (HANDLE)0xFFFFFFFF;
        }
        DWORD v3 = SetFilePointer(hFile, lDistanceToMove, NULL, dwMoveMethod);
        if(v3 == -1) {
            DWORD v4 = GetLastError();
            if(v4) {
                sub_4043D0((unsigned int)v4);
                return (HANDLE)0xFFFFFFFF;
            }
        }
        unsigned int v5 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_408BE0);
        *(char*)((param0 & 0x1f) * 8 + v5 + 4) = *(char*)((param0 & 0x1f) * 8 + v5 + 4) & 0xfd;
        return (HANDLE)v3;
    }
    gvar_408914 = 9;
    gvar_408918 = 0;
    return (HANDLE)0xFFFFFFFF;
}

unsigned int sub_4043D0(unsigned int param0) {
    unsigned int v0 = param0;
    gvar_408918 = param0;
    char v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 0;
    int v5 = &gvar_408790;
    if(*(int*)&gvar_408790 != v0) {
        int v6 = &gvar_408790;
        unsigned int v7 = 0x408798;
        char v8 = 0;
        char v9 = 0;
        char v10 = 0;
        char v11 = 0;
        char v12 = 0;
        char v13 = 0;
        int v14 = 1;
    loc_4043E9:
        char v15 = 0;
        char v16 = 1;
        char v17 = 1;
        char v18 = 1;
        char v19 = 0;
        char v20 = 0;
    }
    else {
        goto loc_4043E9;
    }
}
