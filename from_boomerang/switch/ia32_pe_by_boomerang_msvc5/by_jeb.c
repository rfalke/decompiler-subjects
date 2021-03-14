
// Stale decompilation - Refresh this view to re-decompile this code
int start() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = &gvar_405000;
    int v5 = &sub_402CB8;
    int v6 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v6;
    int v7 = v1;
    int* ptr0 = &v0;
    DWORD v8 = /*BAD_CALL!*/ GetVersion();
    gvar_40892C = (unsigned int)(unsigned char)(v8 >>> 8);
    gvar_408928 = (unsigned int)(unsigned char)v8;
    gvar_408924 = (unsigned int)((unsigned int)(unsigned char)v8 * 0x100 + (unsigned int)(unsigned char)(v8 >>> 8));
    gvar_408920 = (unsigned int)(v8 >>> 16);
    int v9 = sub_402B80();
    if(!v9) {
        sub_401200(28);
    }
    int v10 = 0;
    sub_402980();
    sub_402970();
    LPSTR v11 = GetCommandLineA();
    gvar_409D04 = v11;
    unsigned int v12 = (unsigned int)sub_402540(v2);
    gvar_4088F8 = v12;
    if(!v12 || !gvar_409D04) {
        sub_401F00(-1);
    }
    sub_402290();
    sub_4021A0(v2, v3);
    sub_401ED0();
    unsigned int v13 = gvar_40893C;
    gvar_408940 = gvar_40893C;
    unsigned int v14 = v13;
    unsigned int v15 = gvar_408934;
    int v16 = sub_401000(gvar_408930);
    int result = sub_401F00(v16);
    *(int*)__FS_BASE = v6;
    return result;
}

int sub_401000(int param0) {
    switch((unsigned int)(param0 - 2)) {
        case 0: {
            sub_4010A0("Two!\n");
            return 0;
        }
        case 1: {
            sub_4010A0("Three!\n");
            return 0;
        }
        case 2: {
            sub_4010A0("Four!\n");
            return 0;
        }
        case 3: {
            sub_4010A0("Five!\n");
            return 0;
        }
        case 4: {
            sub_4010A0("Six!\n");
            return 0;
        }
        case 5: {
            sub_4010A0("Seven!\n");
            return 0;
        }
    }
    sub_4010A0("Other!\n");
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401200(int param0) {
    if(gvar_408900 != 2) {
        sub_402D90();
    }
    sub_402DD0(param0);
    return gvar_406068{sub_401F20}(0xFF);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401ED0() {
    unsigned int v0 = gvar_408CEC;
    if(v0) {
        v0();
    }
    sub_401FF0((int*)0x406008, 0x406010);
    return sub_401FF0((int*)0x406000, 4218884);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401F00(int param0) {
    return sub_401F40(param0, 0, 0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401F20(int param0) {
    return sub_401F40(param0, 1, 0);
}

int sub_401F40(UINT uExitCode1, int param1, int param2) {
    UINT uExitCode;
    int v0;
    int result;
    unsigned int v1 = gvar_40895C;
    int v2 = v0;
    if(v1 == 1) {
        uExitCode = uExitCode1;
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
                    uExitCode = &loc_401F9A;
                    v4();
                    v3 = gvar_408CE8;
                }
            }
        }
        sub_401FF0(0x406014, 0x40601c);
    }
    sub_401FF0(0x406020, 0x406024);
    if(!param2) {
        gvar_40895C = 1;
        /*NO_RETURN*/ ExitProcess(uExitCode1);
    }
    return result;
}

int* sub_4021A0(int param0, int param1) {
    int v0;
    char* ptr0 = gvar_4088F8;
    int v1 = v0;
    char v2 = *ptr0;
    int v3 = 0;
    if(v2) {
        do {
            if(v2 != 61) {
                ++v3;
            }
            char* ptr1 = ptr0;
            int v4 = -1;
            while(v4 != 0) {
                char v5 = *ptr1 == 0;
                ++ptr1;
                --v4;
                if(!~v5) {
                    break;
                }
            }
            v2 = *(char*)(~v4 + (int)ptr0);
            ptr0 = (char*)(~v4 + (int)ptr0);
        }
        while(v2);
    }
    int v6 = sub_402FB0(v3 * 4 + 4);
    int v7 = v6;
    gvar_40893C = v6;
    if(!v6) {
        sub_401200(9);
    }
    char* ptr2 = gvar_4088F8;
    param1 = (unsigned int)*ptr2 | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
    if((unsigned char)param1) {
        do {
            char* ptr3 = ptr2;
            int v8 = -1;
            while(v8 != 0) {
                char v9 = *ptr3 == 0;
                ++ptr3;
                --v8;
                if(!~v9) {
                    break;
                }
            }
            int v10 = ~v8;
            if((unsigned char)param1 != 61) {
                int v11 = sub_402FB0(v10);
                *(int*)v6 = v11;
                if(!v11) {
                    sub_401200(9);
                }
                char* ptr4 = ptr2;
                int v12 = -1;
                while(v12 != 0) {
                    char v13 = *ptr4 == 0;
                    ++ptr4;
                    --v12;
                    if(!~v13) {
                        break;
                    }
                }
                param1 = ~v12;
                int* ptr5 = (int*)((int)ptr4 - ~v12);
                int* ptr6 = *(int**)v7;
                for(int i = ~v12 >>> 2; i != 0; --i) {
                    *ptr6 = *ptr5;
                    ++ptr5;
                    ++ptr6;
                }
                int v14 = param1 & 0x3;
                int v15 = v7 + 4;
                while(v14 != 0) {
                    *(char*)ptr6 = *(char*)ptr5;
                    ptr5 = (int*)((char*)ptr5 + 1);
                    ptr6 = (int*)((char*)ptr6 + 1);
                    --v14;
                }
                v7 = v15;
                v6 = v15;
            }
            param1 = (unsigned int)*(char*)(v10 + (int)ptr2) | ((unsigned int)((param1 >>> 8) & 0xffffff) << 8);
            ptr2 = (char*)(v10 + (int)ptr2);
        }
        while((unsigned char)param1);
    }
    int* result = sub_403590(gvar_4088F8);
    gvar_4088F8 = 0;
    *(int*)v6 = 0;
    return result;
}

unsigned int sub_402290() {
    int v0;
    int v1;
    GetModuleFileNameA(NULL, (LPSTR)0x408968, 260);
    char* ptr0 = gvar_409D04;
    gvar_40894C = 4229480;
    if(!ptr0[0]) {
        ptr0 = (char*)0x408968;
    }
    sub_402330(ptr0, NULL, NULL, &v0, &v1);
    unsigned int* ptr1 = (unsigned int*)sub_402FB0(v0 * 4 + v1);
    if(!ptr1) {
        sub_401200(8);
    }
    sub_402330(ptr0, ptr1, (char*)&ptr1[v0], &v0, &v1);
    gvar_408934 = ptr1;
    gvar_408930 = (unsigned int)(v0 - 1);
    return (unsigned int)(v0 - 1);
}

int* sub_402330(char* param0, unsigned int* param1, char* param2, int* param3, int* param4) {
    int i;
    int v0;
    int* ptr0 = param3;
    int v1 = v0;
    unsigned int* ptr1 = param1;
    char* ptr2 = param2;
    int* ptr3 = param4;
    *ptr3 = 0;
    *ptr0 = 1;
    char* ptr4 = param0;
    int v2 = 4;
    if(ptr1) {
        *ptr1 = ptr2;
        ++ptr1;
        param1 = ptr1;
    }
    if(*ptr4 == 34) {
        i = (unsigned int)*(ptr4 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
        ++ptr4;
        if((unsigned char)i != 34) {
            while((unsigned char)i) {
                i &= 0xFF;
                if((*(char*)((char*)((int)&gvar_408A78 + i) + 1) & 0x4)) {
                    *ptr3 = *ptr3 + 1;
                    if(ptr2) {
                        i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                        *ptr2 = (unsigned char)i;
                        ++ptr2;
                        ++ptr4;
                    }
                }
                *ptr3 = *ptr3 + 1;
                if(ptr2) {
                    *ptr2 = *ptr4;
                    ++ptr2;
                }
                i = (unsigned int)*(ptr4 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
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
            *ptr3 = *ptr3 + 1;
            if(ptr2) {
                i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                *ptr2 = (unsigned char)i;
                ++ptr2;
            }
            i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
            ++ptr4;
            (int*)(param4 & 0xFF) = (unsigned char)i;
            if((*(char*)((char*)((int)(int*)((int)param4 & 0xFF) + (int)&gvar_408A78) + 1) & 0x4)) {
                *ptr3 = *ptr3 + 1;
                if(ptr2) {
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
    int* ptr5 = NULL;
    param4 = NULL;
    while(*ptr4) {
        for(i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); (unsigned char)i == 32 || (unsigned char)i == 9; i = (unsigned int)*ptr4 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
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
                v2 = (unsigned int)*ptr4 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
                int v3 = 0;
                int v4 = 1;
                while((unsigned char)v2 == 92) {
                    v2 = (unsigned int)*(ptr4 + 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
                    ++ptr4;
                    ++v3;
                }
                if(*ptr4 == 34) {
                    if(!((unsigned char)v3 & 0x1)) {
                        if(ptr5 && *(ptr4 + 1) == 34) {
                            ++ptr4;
                        }
                        else {
                            v4 = 0;
                        }
                        ptr5 = param4 ? NULL: (int*)0x1;
                        param4 = ptr5;
                    }
                    v3 >>>= 1;
                }
                v2 = v3;
                int v5 = v3 - 1;
                if(v2) {
                    ++v5;
                    do {
                        if(ptr2) {
                            *ptr2 = 92;
                            ++ptr2;
                        }
                        v2 = *ptr3 + 1;
                        --v5;
                        *ptr3 = v2;
                    }
                    while(v5);
                }
                v5 = (unsigned int)*ptr4 | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                if(!(unsigned char)v5 || (!ptr5 && ((unsigned char)v5 == 32 || (unsigned char)v5 == 9))) {
                    break;
                }
                else {
                    if(v4) {
                        if(ptr2) {
                            v2 = v5 & 0xFF;
                            if((*(char*)((char*)((int)&gvar_408A78 + v2) + 1) & 0x4)) {
                                *ptr2 = (unsigned char)v5;
                                ++ptr2;
                                ++ptr4;
                                *ptr3 = *ptr3 + 1;
                            }
                            *ptr2 = *ptr4;
                            ++ptr2;
                            *ptr3 = *ptr3 + 1;
                            ++ptr4;
                            continue;
                        }
                        else {
                            if((*(char*)((char*)((v5 & 0xFF) + (int)&gvar_408A78) + 1) & 0x4)) {
                                ++ptr4;
                                *ptr3 = *ptr3 + 1;
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
            v2 = 4;
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
    unsigned int v1 = gvar_408A70;
    int v2 = v0;
    LPWCH lpWideCharStr = NULL;
    LPCH penv = NULL;
    if(!v1) {
        lpWideCharStr = GetEnvironmentStringsW();
        if(lpWideCharStr) {
            v1 = 1;
            gvar_408A70 = v1;
            goto loc_402585;
        }
        else {
            penv = GetEnvironmentStrings();
        }
        if(penv) {
            v1 = 2;
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
            LPWCH v3 = lpWideCharStr;
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
            LPSTR v7 = result;
            for(int* i = (int*)((int)ptr0 >>> 2); i != 0; i = (int*)((char*)i - 1)) {
                *(int*)&v7[0] = *(int*)&v6[0];
                v6 += 4;
                v7 += 4;
            }
            void* ptr1 = penv;
            for(int* j = (int*)((int)ptr0 & 0x3); j != 0; j = (int*)((char*)j - 1)) {
                v7[0] = v6[0];
                ++v6;
                ++v7;
            }
            FreeEnvironmentStringsA((LPCH)ptr1);
            return result;
        }
    }
    return NULL;
}

int sub_4026A0(UINT param0) {
    void* ptr0;
    int i;
    unsigned int v0;
    int v1;
    unsigned int v2;
    char v3;
    char v4;
    char v5;
    UINT v6 = param0;
    int v7 = (unsigned int)v4 | ((unsigned int)v1 << 8);
    UINT CodePage = sub_402890(v6);
    unsigned int v8 = gvar_408B7C;
    param0 = CodePage;
    if(v8 != CodePage) {
        if(CodePage == 0) {
            sub_402940();
        }
        else {
            int v9 = 0;
            int* ptr1 = (int*)&gvar_406388;
            while(*ptr1 != CodePage) {
                ptr1 += 12;
                ++v9;
                if((unsigned int)ptr1 >= &gvar_406478) {
                    BOOL v10 = GetCPInfo(CodePage, &v2);
                    if(v10 == 1) {
                        v0 = 64;
                        int* ptr2 = (int*)&gvar_408A78;
                        while(v0 != 0) {
                            *ptr2 = 0;
                            ++ptr2;
                            --v0;
                        }
                        *(char*)ptr2 = 0;
                        if(v2 <= 1) {
                            gvar_408B7C = 0;
                            gvar_408B80 = 0;
                            gvar_408B88 = 0;
                            gvar_408B8C = 0;
                            gvar_408B90 = 0;
                            return 0;
                        loc_402766:
                            unsigned int v11 = 1;
                            do {
                                *(char*)((char*)((int)&gvar_408A78 + v11) + 1) = *(char*)((char*)((int)&gvar_408A78 + v11) + 1) | 0x8;
                                ++v11;
                            }
                            while(v11 < 0xff);
                            ptr0 = (void*)CodePage;
                            gvar_408B7C = CodePage;
                            i = sub_4028E0((int)ptr0);
                            gvar_408B80 = i;
                        }
                        else if(v5) {
                            char* ptr3 = &v3;
                            while(1) {
                                v0 = (unsigned int)*ptr3 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                if((unsigned char)v0) {
                                    v0 = (unsigned int)(v0 & 0xFF);
                                    for(i = (int)*(ptr3 - 1); (unsigned int)i <= v0; ++i) {
                                        *(char*)((char*)((int)&gvar_408A78 + i) + 1) = *(char*)((char*)((int)&gvar_408A78 + i) + 1) | 0x4;
                                    }
                                    i = (unsigned int)*(ptr3 + 1) | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                                    ptr3 += 2;
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
            unsigned int v12 = 64;
            unsigned int v13 = 0;
            int* ptr4 = (int*)&gvar_408A78;
            int v14 = v9 * 3;
            while(v12 != 0) {
                *ptr4 = 0;
                ++ptr4;
                --v12;
            }
            *(char*)ptr4 = 0;
            unsigned int v15 = 0;
            int v16 = v14 * 16;
            char* ptr5 = (char*)(v16 + &gvar_406398);
            do {
                v13 = (unsigned int)*ptr5 | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                char* ptr6 = ptr5;
                if((unsigned char)v13) {
                    do {
                        v12 = (unsigned int)*(ptr6 + 1) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
                        if(!(unsigned char)v12) {
                            break;
                        }
                        else {
                            v12 = (unsigned int)(v12 & 0xFF);
                            v13 = (unsigned int)*ptr6;
                            if(v13 <= v12) {
                                v9 = (unsigned int)*(unsigned char*)((int)&gvar_406380 + v15) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                                do {
                                    *(char*)((char*)((int)&gvar_408A78 + v13) + 1) = (unsigned char)v9 | *(char*)((char*)((int)&gvar_408A78 + v13) + 1);
                                    ++v13;
                                }
                                while(v13 <= v12);
                            }
                            v13 = (unsigned int)*(ptr6 + 2) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
                            ptr6 += 2;
                        }
                    }
                    while((unsigned char)v13);
                }
                ++v15;
                ptr5 += 8;
            }
            while(v15 < 4);
            UINT v17 = param0;
            ptr0 = (void*)v17;
            gvar_408B7C = v17;
            int v18 = sub_4028E0((int)ptr0);
            v0 = *(unsigned int*)((int)&gvar_40638C + v16);
            unsigned int v19 = *(unsigned int*)((int)&gvar_406390 + v16);
            gvar_408B80 = v18;
            gvar_408B88 = v0;
            unsigned int v20 = *(unsigned int*)((int)&gvar_406394 + v16);
            gvar_408B8C = v19;
            gvar_408B90 = v20;
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
    switch((unsigned int)(param0 - 932)) {
        case 0: {
            return 0x411;
        }
        case 4: {
            return 2052;
        }
        case 17: {
            return 1042;
        }
        case 18: {
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
    int* ptr0;
    int v0;
    short v1;
    char v2;
    char v3;
    int v4 = (unsigned int)v3 | ((unsigned int)v0 << 8);
    unsigned int* ptr1 = (unsigned int*)sub_402FB0(0x100);
    if(!ptr1) {
        sub_401200(27);
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
        int* ptr2 = ptr0;
        if(ptr2) {
            int v5 = *ptr2;
            char* ptr3 = (char*)(ptr2 + 1);
            int v6 = v5;
            unsigned int* ptr4 = (unsigned int*)(v5 + (int)ptr3);
            if((int)(int*)(ptr3 + 0x800) <= (int)ptr4) {
                v6 = 0x800;
            }
            if(gvar_408CE0 < v6) {
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
                while(gvar_408CE0 < v6);
            }
            int v8 = v6;
            int v9 = 0;
            if(v8 > 0) {
                do {
                    HANDLE hFile = *ptr4;
                    if(hFile != -1) {
                        v8 = (unsigned int)*ptr3 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                        if(((unsigned char)v8 & 0x1)) {
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
                while(v8 > v9);
            }
        }
    }
    int v13 = 0;
    do {
        unsigned int v14 = gvar_408BE0;
        HANDLE v15 = *(HANDLE*)(v13 * 8 + v14);
        unsigned int* ptr6 = (unsigned int*)(v13 * 8 + v14);
        if(v15 == -1) {
            *(char*)(ptr6 + 1) = 129;
            v15 = GetStdHandle(!v13 ? 0xfffffff6: (unsigned int)(v13 - 1) > 0 ? 0xfffffff4: 0xfffffff5);
            HANDLE hFile1 = v15;
            if(hFile1 != -1) {
                v15 = (HANDLE)GetFileType(hFile1);
                if(v15) {
                    v15 = (HANDLE)(v15 & 0xFF);
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
    while(v13 < 3);
    return SetHandleCount(gvar_408CE0);
}

int sub_402B80() {
    HANDLE v0 = HeapCreate(1, 0x1000, 0);
    gvar_408BD4 = v0;
    if(!v0) {
        return 0;
    }
    LPVOID v1 = sub_4035E0();
    if(!v1) {
        return HeapDestroy(gvar_408BD4);
    }
    return (int)v1;
}

int sub_402BC0(PVOID TargetFrame) {
    int v0;
    int result;
    int* ptr0 = &v0;
    →KERNEL32.dll!RtlUnwind(TargetFrame, (PVOID)&loc_402BD8, NULL, NULL);
    return result;
}

int sub_402C02(int param0, int param1) {
    int result;
    int v0 = param0;
    int v1 = -2;
    int v2 = &gvar_402BE0;
    int v3 = *(int*)__FS_BASE;
    *(int**)__FS_BASE = &v3;
    while(1) {
        int v4 = *(int*)(param0 + 8);
        int v5 = *(int*)(param0 + 12);
        if(v5 == -1 || v5 == param1) {
            break;
        }
        else {
            int v6 = *(int*)(v5 * 12 + v4);
            v1 = *(int*)(v5 * 12 + v4);
            *(int*)(param0 + 12) = v6;
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
    void* ptr0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    void* ptr2 = &v0;
    int v4 = v1;
    int v5 = v2;
    void* ptr3 = &v0;
    PVOID TargetFrame = param1;
    if(!(*(int*)(param0 + 4) & 0x6)) {
        int v6 = param0;
        int v7 = param2;
        *(unsigned int*)((int)TargetFrame - 4) = &v6;
        int v8 = *(int*)((int)TargetFrame + 12);
        int v9 = *(int*)((int)TargetFrame + 8);
        while(v8 != -1) {
            int v10 = v8 * 3;
            if(*(int*)(v10 * 4 + v9 + 4)) {
                int v11 = *(int*)(v10 * 4 + v9 + 4)((int)ptr2, v8);
                ptr2 = ptr0;
                v8 = (int)ptr1;
                TargetFrame = *(PVOID*)((int)ptr2 + 12);
                if(v11) {
                    if(v11 < 0) {
                        break;
                    }
                    else {
                        int v12 = *(int*)((int)TargetFrame + 8);
                        sub_402BC0(TargetFrame);
                        ptr2 = (void*)((int)TargetFrame + 16);
                        sub_402C02((int)TargetFrame, v8);
                        sub_402C96(v8 * 3, 1);
                        *(int*)((int)TargetFrame + 12) = *(int*)(v3 * 4 + v12);
                        *(int*)(v3 * 4 + v12 + 8)();
                    }
                }
            }
            v9 = *(int*)((int)TargetFrame + 8);
            v8 = *(int*)(v8 * 12 + v9);
        }
    }
    else {
        ptr1 = &v0;
        sub_402C02((int)TargetFrame, -1);
    }
    jump v5;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_402D90() {
    unsigned int result = gvar_408900;
    if(result == 1 || (!result && gvar_40606C == 1)) {
        sub_402DD0(252);
        unsigned int v0 = gvar_408B98;
        if(v0) {
            v0();
        }
        result = (unsigned int)sub_402DD0(0xFF);
    }
    return result;
}

int sub_402DD0(int param0) {
    int v0;
    int v1;
    HANDLE hFile;
    char v2;
    char v3;
    int v4;
    char v5;
    char v6;
    int result = &gvar_406498;
    int v7 = v4;
    int v8 = 0;
    while(*(int*)result != param0) {
        result += 8;
        ++v8;
        if((unsigned int)result >= &gvar_406528) {
            break;
        }
    }
    if(*(int*)(v8 * 8 + (int)&gvar_406498) == param0) {
        result = gvar_408900;
        if((result == 1 || (!result && gvar_40606C == 1))) {
            unsigned int v9 = gvar_408BE0;
            if(v9) {
                hFile = *(HANDLE*)(v9 + 16);
                if(hFile == -1) {
                    goto loc_402F70;
                }
            }
            else {
            loc_402F70:
                hFile = GetStdHandle(0xfffffff4);
            }
            LPCVOID lpBuffer = *(LPCVOID*)(v8 * 8 + (int)&gvar_40649C);
            v1 = 0;
            v0 = &v5;
            LPCVOID v10 = lpBuffer;
            int v11 = -1;
            while(v11 != 0) {
                char v12 = *(char*)v10 == 0;
                v10 = (LPCVOID)((int)v10 + 1);
                --v11;
                if(!~v12) {
                    break;
                }
            }
            return WriteFile(hFile, lpBuffer, (DWORD)(~v11 - 1), (LPDWORD)&v5, NULL);
        }
        else if(param0 != 252) {
            DWORD v13 = GetModuleFileNameA(NULL, &v2, 260);
            if(!v13) {
                int v14 = 5;
                int* ptr0 = "<program name unknown>";
                LPSTR v15 = &v2;
                while(v14 != 0) {
                    *(int*)&v15[0] = *ptr0;
                    ++ptr0;
                    v15 += 4;
                    --v14;
                }
                *(short*)&v15[0] = *(CHAR*)ptr0;
                v15[2] = *((char*)ptr0 + 2);
            loc_402E62:
                int v16 = -1;
                while(v16 != 0) {
                    --v16;
                    if(v2 == 0) {
                    loc_402E75:
                        if((unsigned int)~v16 > 60) {
                            LPSTR v17 = &v2;
                            int v18 = -1;
                            while(v18 != 0) {
                                char v19 = v17[0] == 0;
                                ++v17;
                                --v18;
                                if(!~v19) {
                                    break;
                                }
                            }
                            sub_403D90((int)(int*)((char*)(~v18 + (int)&v6) - 1), &gvar_405358, 3);
                        }
                        int v20 = 6;
                        int* ptr1 = "Runtime Error!\n\nProgram: ";
                        int v21 = &v3;
                        while(v20 != 0) {
                            *(int*)v21 = *ptr1;
                            ++ptr1;
                            v21 += 4;
                            --v20;
                        }
                        *(short*)v21 = *(short*)ptr1;
                        int v22 = -1;
                        LPSTR v23 = &v2;
                        while(v22 != 0) {
                            char v24 = v23[0] == 0;
                            ++v23;
                            --v22;
                            if(!~v24) {
                            loc_402EC9:
                                int* ptr2 = (int*)((int)v23 - ~v22);
                                int v25 = -1;
                                int v26 = &v3;
                                while(v25 != 0) {
                                    char v27 = *(char*)v26 == 0;
                                    ++v26;
                                    --v25;
                                    if(!~v27) {
                                    loc_402ED4:
                                        int* ptr3 = (int*)(v26 - 1);
                                        for(int i = ~v22 >>> 2; i != 0; --i) {
                                            *ptr3 = *ptr2;
                                            ++ptr2;
                                            ++ptr3;
                                        }
                                        int v28 = ~v22 & 0x3;
                                        v1 = 0x12010;
                                        while(v28 != 0) {
                                            *(char*)ptr3 = *(char*)ptr2;
                                            ptr2 = (int*)((char*)ptr2 + 1);
                                            ptr3 = (int*)((char*)ptr3 + 1);
                                            --v28;
                                        }
                                        char* ptr4 = (char*)&gvar_405338;
                                        int v29 = -1;
                                        while(v29 != 0) {
                                            char v30 = *ptr4 == 0;
                                            ++ptr4;
                                            --v29;
                                            if(!~v30) {
                                            loc_402EF8:
                                                v0 = "Microsoft Visual C++ Runtime Library";
                                                int* ptr5 = (int*)((int)ptr4 - ~v29);
                                                int v31 = &v3;
                                                int v32 = -1;
                                                while(v32 != 0) {
                                                    char v33 = *(char*)v31 == 0;
                                                    ++v31;
                                                    --v32;
                                                    if(!~v33) {
                                                    loc_402F0A:
                                                        int* ptr6 = (int*)(v31 - 1);
                                                        for(int j = ~v29 >>> 2; j != 0; --j) {
                                                            *ptr6 = *ptr5;
                                                            ++ptr5;
                                                            ++ptr6;
                                                        }
                                                        for(int k = ~v29 & 0x3; k != 0; --k) {
                                                            *(char*)ptr6 = *(char*)ptr5;
                                                            ptr5 = (int*)((char*)ptr5 + 1);
                                                            ptr6 = (int*)((char*)ptr6 + 1);
                                                        }
                                                        char* ptr7 = *(unsigned int*)(v8 * 8 + (int)&gvar_40649C);
                                                        int v34 = -1;
                                                        while(v34 != 0) {
                                                            char v35 = *ptr7 == 0;
                                                            ++ptr7;
                                                            --v34;
                                                            if(!~v35) {
                                                            loc_402F2B:
                                                                int* ptr8 = (int*)((int)ptr7 - ~v34);
                                                                int v36 = &v3;
                                                                int v37 = -1;
                                                                while(v37 != 0) {
                                                                    char v38 = *(char*)v36 == 0;
                                                                    ++v36;
                                                                    --v37;
                                                                    if(!~v38) {
                                                                    loc_402F38:
                                                                        int* ptr9 = (int*)(v36 - 1);
                                                                        for(int counter = ~v34 >>> 2; counter != 0; --counter) {
                                                                            *ptr9 = *ptr8;
                                                                            ++ptr8;
                                                                            ++ptr9;
                                                                        }
                                                                        int v39 = ~v34 & 0x3;
                                                                        int v40 = &v3;
                                                                        while(v39 != 0) {
                                                                            *(char*)ptr9 = *(char*)ptr8;
                                                                            ptr8 = (int*)((char*)ptr8 + 1);
                                                                            ptr9 = (int*)((char*)ptr9 + 1);
                                                                            --v39;
                                                                        }
                                                                        sub_403D00(v40, v0, v1);
                                                                        return &v3;
                                                                    }
                                                                }
                                                                goto loc_402F38;
                                                            }
                                                        }
                                                        goto loc_402F2B;
                                                    }
                                                }
                                                goto loc_402F0A;
                                            }
                                        }
                                        goto loc_402EF8;
                                    }
                                }
                                goto loc_402ED4;
                            }
                        }
                        goto loc_402EC9;
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
    int v0;
    unsigned int v1 = param0;
    if(v1 <= 0xffffffe0) {
        if(!v1) {
            v1 = 1;
        }
        do {
            result = v1 <= 0xffffffe0 ? sub_403020((int)v1): 0;
            if(result || !param1) {
                return result;
            }
            v0 = sub_403E90((int)v1);
        }
        while(v0);
    }
    else {
        result = 0;
    }
    return result;
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
int sub_403350(int param0, int* param1) {
    int v0;
    int* ptr0 = param1;
    int v1 = *(ptr0 + 3);
    unsigned int v2 = *(unsigned int*)(ptr0 + 4);
    if(((unsigned char)v1 & 0x82) && !((unsigned char)v1 & 0x40)) {
        int v3 = 0;
        if(((unsigned char)v1 & 0x1)) {
            *(ptr0 + 1) = 0;
            if(!((unsigned char)v1 & 0x10)) {
                *(ptr0 + 3) = (unsigned int)((unsigned char)v1 | 0x20) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                return -1;
            }
            *ptr0 = *(ptr0 + 2);
            *(ptr0 + 3) = (unsigned int)((unsigned char)v1 & 0xfe) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        }
        int v4 = *(ptr0 + 3);
        *(ptr0 + 1) = 0;
        v4 = (unsigned int)(((unsigned char)v4 & 0xef) | 0x2) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
        *(ptr0 + 3) = v4;
        if(!(v4 & 0x10c)) {
            if(ptr0 == 0x406098 || ptr0 == 0x4060b8) {
                int v5 = sub_403060((int)v2);
                if(!v5) {
                    goto loc_4033BB;
                }
            }
            else {
            loc_4033BB:
                sub_404200((int)ptr0);
            }
        }
        if((*(ptr0 + 3) & 0x108)) {
            int v6 = *(ptr0 + 2);
            v0 = *ptr0 - v6;
            unsigned int v7 = (unsigned int)(*(ptr0 + 6) - 1);
            *ptr0 = v6 + 1;
            *(unsigned int*)(ptr0 + 1) = v7;
            if(v0 > 0) {
                v3 = sub_403F10((int)v2, v6, v0);
            }
            else if((*(char*)((int)(v2 != -1 ? (HANDLE)((v2 & 0x1f) * 8 + *(unsigned int*)((v2 >> 5) * 4 + (int)&gvar_408BE0)): (HANDLE)&gvar_406478) + 4) & 0x20)) {
                sub_404140(v2, 0, 2);
            }
            **(unsigned int*)(ptr0 + 2) = (unsigned char)param0;
        }
        else {
            v0 = 1;
            v3 = sub_403F10((int)v2, (int)&param0, 1);
        }
        if(v3 != v0) {
            int v8 = *(ptr0 + 3);
            *(ptr0 + 3) = (unsigned int)((unsigned char)v8 | 0x20) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
            return -1;
        }
        return (unsigned int)(unsigned char)param0;
    }
    *(ptr0 + 3) = (unsigned int)((unsigned char)v1 | 0x20) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    return -1;
}

int* sub_403590(unsigned int param0) {
    int* result;
    int v0;
    int v1 = v0;
    if(param0) {
        int v2 = sub_403880(param0, &v1, &param0);
        if(v2) {
            return sub_4038E0(v1, (int)param0, (char*)v2);
        }
        result = (int*)HeapFree(gvar_408BD4, 0, (LPVOID)param0);
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
                    int v1 = 0;
                    do {
                        ptr0 += 2;
                        unsigned int v2 = (unsigned int)((((v1 < 16 ? 0: 1) - 1) & 0xf1) - 1);
                        ++v1;
                        *(unsigned int*)(ptr0 - 2) = v2;
                        *(ptr0 - 1) = 241;
                    }
                    while(v1 < 0x400);
                    int v3 = 0x4000;
                    LPVOID v4 = lpAddress;
                    while(v3 != 0) {
                        *(int*)v4 = 0;
                        v4 = (LPVOID)((int)v4 + 4);
                        --v3;
                    }
                    unsigned int v5 = (unsigned int)(*(int*)((int)lpMem + 16) + 0x10000);
                    if(v5 > (unsigned int)lpAddress) {
                        v5 = (unsigned int)0xFF | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
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

int sub_403750(LPVOID param0) {
    LPVOID v0 = param0;
    BOOL result = VirtualFree(*(LPVOID*)((int)v0 + 16), 0, 0x8000);
    if(gvar_408770 == v0) {
        gvar_408770 = *(unsigned int*)((int)v0 + 4);
    }
    if(v0 != &gvar_406750) {
        int* ptr0 = *(unsigned int*)((int)v0 + 4);
        int v1 = *(int*)v0;
        LPVOID lpMem = v0;
        DWORD dwFlags = 0;
        *ptr0 = v1;
        *(int*)(*(int*)v0 + 4) = *(int*)((int)v0 + 4);
        HANDLE hHeap = gvar_408BD4;
        HeapFree(hHeap, dwFlags, lpMem);
        return (int)hHeap;
    }
    gvar_406760 = 0xffffffff;
    return result;
}

BOOL sub_4037B0(BOOL param0) {
    BOOL result;
    LPVOID v0 = gvar_406754;
    do {
        if(*(int*)((int)v0 + 16) != -1) {
            int v1 = 0;
            int* ptr0 = (int*)((int)v0 + 0x2010);
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
                int* ptr1 = (int*)((int)v4 + 32);
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

int sub_403880(unsigned int param0, unsigned int* param1, int* param2) {
    unsigned int v0 = param0;
    unsigned int* ptr0 = (unsigned int*)&gvar_406750;
    while(*(ptr0 + 4) >= v0 || *(ptr0 + 5) <= v0) {
        ptr0 = *ptr0;
        if(ptr0 == &gvar_406750) {
            return 0;
        }
    }
    if(!((unsigned char)v0 & 0xf) && (v0 & 0xfff) >= 0x100) {
        *param1 = ptr0;
        *param2 = v0 & 0xfffff000;
        return (v0 & 0xfffff000) + ((v0 - (v0 & 0xfffff000) - 0x100) >> 4) + 8;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4038E0(int param0, int param1, char* param2) {
    int v0 = (param1 - *(int*)(param0 + 16)) >> 12;
    int* result = (int*)(v0 * 8 + param0 + 24);
    char* ptr0 = param2;
    *result = (unsigned int)*ptr0 + *(int*)(v0 * 8 + param0 + 24);
    *ptr0 = 0;
    int v1 = *result;
    *(result + 1) = 241;
    if(v1 == 240) {
        result = (int*)(gvar_408BBC + 1);
        gvar_408BBC = (int*)(gvar_408BBC + 1);
        if(result == 32) {
            result = (int*)sub_4037B0(16);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403940(unsigned int* param0) {
    LPVOID v0;
    char v1;
    int result;
    int v2;
    SIZE_T v3 = gvar_408770;
    int v4 = v2;
    unsigned int* ptr0 = param0;
    SIZE_T v5 = v3;
    do {
        int v6 = *(int*)(v3 + 16);
        if(v6 != -1) {
            int* ptr1 = *(unsigned int*)(v3 + 8);
            unsigned int v7 = (unsigned int)(v3 + 8216);
            int* ptr2 = (int*)((int)(int*)((int)(int*)((int)((int*)((int)ptr1 - v3) - 6) >> 3) * 0x1000) + v6);
            while(v7 > (unsigned int)ptr1) {
                int v8 = *ptr1;
                if(v8 >= (int)ptr0 && *(unsigned int*)(ptr1 + 1) > (unsigned int)ptr0) {
                    result = sub_403B80((int)ptr2, v8, (int)ptr0);
                    if(!result) {
                        v3 = v5;
                        *(ptr1 + 1) = ptr0;
                        goto loc_40399C;
                    }
                    else {
                        SIZE_T v9 = v5;
                        gvar_408770 = v9;
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
            int* ptr3 = (int*)(v3 + 24);
            while(v10 > (unsigned int)ptr3) {
                int v12 = *ptr3;
                if(v12 >= (int)ptr0 && *(unsigned int*)(ptr3 + 1) > (unsigned int)ptr0) {
                    result = sub_403B80(v11, v12, (int)ptr0);
                    if(!result) {
                        v3 = v5;
                        *(ptr3 + 1) = ptr0;
                        goto loc_4039D7;
                    }
                    else {
                        SIZE_T v13 = v5;
                        gvar_408770 = v13;
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
            DWORD v14 = &loc_403B32;
            v0 = (LPVOID)sub_4035E0();
            if(v0) {
                unsigned int* ptr5 = *(unsigned int*)((int)v0 + 16);
                *(char*)(ptr5 + 2) = (unsigned char)ptr0;
                gvar_408770 = v0;
                *ptr5 = (int*)((int)ptr5 + (int)ptr0) + 2;
                *(ptr5 + 1) = (int*)(240 - (int)ptr0);
                *(unsigned int*)((int)v0 + 24) = (unsigned int*)(*(int*)((int)v0 + 24) - (unsigned int)(unsigned int*)(ptr0 & 0xFF));
            }
            return (int)v0;
        }
    }
    unsigned int* ptr6 = *(ptr4 + 3);
    int v15 = *(int*)(ptr4 + 4);
    param0 = ptr6;
    LPVOID v16 = (LPVOID)((int)(int*)((int)(int*)((int)((int*)((int)ptr6 - (int)ptr4) - 6) >> 3) * 0x1000) + v15);
    int counter = 0;
    if(*ptr6 == -1) {
        while(counter < 16) {
            int v17 = *(int*)(ptr6 + 2);
            ptr6 += 2;
            ++counter;
            if(v17 != -1) {
                break;
            }
        }
    }
    SIZE_T v18 = (SIZE_T)(counter * 0x1000);
    SIZE_T dwSize = v18;
    LPVOID lpAddress = v16;
    v5 = v18;
    v0 = VirtualAlloc(lpAddress, dwSize, 0x1000, 4);
    if(v0 == v16) {
        unsigned int* ptr7 = param0;
        unsigned int* ptr8 = ptr7;
        if(counter > 0) {
            int* ptr9 = (int*)((int)v16 + 4);
            do {
                *ptr9 = 240;
                *(unsigned int*)(ptr9 - 1) = ptr9 + 1;
                *(char*)(ptr9 + 61) = 0xFF;
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
        char v19 = (unsigned int)ptr10 > (unsigned int)ptr8;
        if(v19) {
            while(*ptr8 != -1) {
                ptr8 += 2;
                if((unsigned int)ptr10 <= (unsigned int)ptr8) {
                    break;
                }
            }
            v19 = (unsigned int)ptr10 > (unsigned int)ptr8;
        }
        *(ptr4 + 3) = (int*)((v19 ? -1: 0) & (int)ptr8);
        *(char*)((int)v16 + 8) = (unsigned char)ptr0;
        *(ptr4 + 2) = ptr7;
        *ptr7 = (int*)(*ptr7 - (int)ptr0);
        int* ptr11 = (int*)(*(int*)((int)v16 + 4) - (int)ptr0);
        *(unsigned int*)((int)v16 + 4) = ptr11;
        *(int**)v16 = (int*)((int)ptr0 + (int)v16) + 2;
        return (int)ptr11;
    }
    return (int)v0;
}

int sub_403D00(int param0, int param1, int param2) {
    LPCSTR v0;
    HMODULE v1;
    unsigned int v2 = gvar_408BC0;
    HMODULE v3 = v1;
    int v4 = 0;
    if(!v2) {
        HMODULE hModule = LoadLibraryA("user32.dll");
        if(hModule) {
            FARPROC v5 = GetProcAddress(hModule, "MessageBoxA");
            gvar_408BC0 = v5;
            if(v5) {
                FARPROC v6 = GetProcAddress(hModule, "GetActiveWindow");
                gvar_408BC4 = v6;
                FARPROC v7 = GetProcAddress(hModule, "GetLastActivePopup");
                gvar_408BC8 = v7;
                goto loc_403D50;
            }
        }
        return 0;
    }
loc_403D50:
    unsigned int v8 = gvar_408BC4;
    if(v8) {
        v4 = v8();
    }
    if(v4) {
        unsigned int v9 = gvar_408BC8;
        if(v9) {
            v4 = v9(v4);
        }
    }
    gvar_408BC0(v4, param0, param1, param2);
    jump v0;
}

int sub_403F10(unsigned int param0, LPCVOID param1, DWORD param2) {
    LPOVERLAPPED v0;
    unsigned int v1;
    LPCVOID lpBuffer;
    int v2;
    int v3;
    char v4;
    char v5 = gvar_408CE0 > param0;
    int v6 = v3;
    if(v5) {
        int v7 = *(int*)((param0 >> 5) * 4 + (int)&gvar_408BE0);
        int v8 = (param0 & 0x1f) * 8;
        int* ptr0 = (int*)((param0 >> 5) * 4 + &gvar_408BE0);
        int v9 = v8;
        int v10 = (unsigned int)*(char*)(v7 + v8 + 4) | ((unsigned int)(((param0 >> 5) >>> 8) & 0xffffff) << 8);
        if(!(*(char*)(v7 + v8 + 4) & 0x1)) {
            gvar_408914 = 9;
            gvar_408918 = 0;
            return -1;
        }
        DWORD nNumberOfBytesToWrite1 = param2;
        int v11 = 0;
        int v12 = 0;
        if(nNumberOfBytesToWrite1 == 0) {
            return 0;
        }
        if(((unsigned char)v10 & 0x20)) {
            sub_404140(param0, 0, 2);
        }
        HANDLE* ptr1 = (HANDLE*)(*(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_408BE0) + v8);
        if((*(char*)&ptr1[1] & 0x80)) {
            lpBuffer = param1;
            v1 = 0;
            LPCVOID v13 = lpBuffer;
            if(nNumberOfBytesToWrite1 != 0) {
                do {
                    LPCVOID v14 = &v4;
                    do {
                        int* ptr2 = (int*)((int)v13 - (int)lpBuffer);
                        if((unsigned int)ptr2 >= nNumberOfBytesToWrite1) {
                            break;
                        }
                        else {
                            ptr2 = (unsigned int)*(char*)v13 | ((unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff) << 8);
                            v13 = (LPCVOID)((int)v13 + 1);
                            if((unsigned char)ptr2 == 10) {
                                *(char*)v14 = 13;
                                v14 = (LPCVOID)((int)v14 + 1);
                                ++v12;
                            }
                            *(char*)v14 = (unsigned char)ptr2;
                            v14 = (LPCVOID)((int)v14 + 1);
                        }
                    }
                    while((int)(int*)((int)v14 - (int)&v4) < 0x400);
                    DWORD nNumberOfBytesToWrite = (DWORD)((int)v14 - (int)&v4);
                    v0 = NULL;
                    LPDWORD v15 = &v2;
                    BOOL v16 = WriteFile(*(HANDLE*)(*ptr0 + v9), &v4, nNumberOfBytesToWrite, &v2, NULL);
                    if(v16) {
                        v11 += v2;
                        if((int)nNumberOfBytesToWrite > v2 || (unsigned int)(int*)((int)v13 - (int)lpBuffer) >= nNumberOfBytesToWrite1) {
                            break;
                        }
                    }
                    else {
                        v0 = (LPOVERLAPPED)&loc_4040E5;
                        v1 = (unsigned int)GetLastError();
                        break;
                    }
                }
                while(1);
                v8 = v9;
            }
        }
        else {
            lpBuffer = param1;
            BOOL v17 = WriteFile(ptr1[0], lpBuffer, nNumberOfBytesToWrite1, &v2, NULL);
            if(v17) {
                v1 = 0;
                v11 = v2;
            }
            else {
                v0 = (LPOVERLAPPED)&loc_404125;
                v1 = (unsigned int)GetLastError();
            }
        }
        if(v11) {
            return v11 - v12;
        }
        else if(v1) {
            if(v1 == 5) {
                gvar_408918 = 5;
                gvar_408914 = 9;
            }
            else {
                sub_4043D0((int)v1);
            }
            return -1;
        }
        else if((*(char*)(*ptr0 + v8 + 4) & 0x40) && *(char*)lpBuffer == 26) {
            return 0;
        }
        gvar_408914 = 28;
    }
    else {
        gvar_408914 = 9;
    }
    gvar_408918 = 0;
    return -1;
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
        DWORD v4 = v3 == -1 ? GetLastError(): 0;
        if(v4) {
            sub_4043D0((int)v4);
            return (HANDLE)0xFFFFFFFF;
        }
        unsigned int v5 = *(unsigned int*)((param0 >> 5) * 4 + (int)&gvar_408BE0);
        *(char*)((param0 & 0x1f) * 8 + v5 + 4) = *(char*)((param0 & 0x1f) * 8 + v5 + 4) & 0xfd;
        return (HANDLE)v3;
    }
    gvar_408914 = 9;
    gvar_408918 = 0;
    return (HANDLE)0xFFFFFFFF;
}
