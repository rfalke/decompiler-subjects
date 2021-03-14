
void start() {
    long long v0;
    long long v1;
    SetDefaultDllDirectories(0x800);
    &gvar_403180();
    &gvar_403730();
    while(1) {
        long long v2 = -1L;
        LPCWSTR v3 = NULL;
        SIZE_T v4 = 0x20000L;
        gvar_41C718 = 4;
        HANDLE hFileMappingObject = CreateFileMappingNumaW((HANDLE)0xFFFFFFFFFFFFFFFF, NULL, 64, 0, 0x20000, NULL, 0xffffffff);
        v2 = -1L;
        gvar_446EF0 = hFileMappingObject;
        v3 = (LPCWSTR)0x777000000000;
        v4 = 0x20000L;
        LPVOID v5 = MapViewOfFileExNuma(hFileMappingObject, 6, 0, 0, 0x20000L, (LPVOID)0x777000000000, 0xffffffff);
        gvar_446EF8 = 3;
        gvar_446EE8 = (unsigned int)(long long*)((long long)v5 >>> 16);
        gvar_446EEC = (unsigned int)((unsigned int)(long long*)((long long)v5 >>> 16) + 1);
        gvar_446EFC = gvar_4408C8 | 0x2;
        gvar_446EE0 = 1;
        LPWSTR v6 = GetCommandLineW();
        long long v7 = sub_4047D0((long long)v6, (long long)((long long)v5 + 0x14000L), 0x3fffL, (long long)((long long)v5 + 0x11ff0L), 0x200L);
        char* ptr0 = *(unsigned long long*)((long long)v5 + 0x11ff0L);
        char v8 = *ptr0;
        if(v8) {
            long long v9 = 1L;
            do {
                if(v8 == 92) {
                    *ptr0 = 47;
                }
                ptr0 = (char*)(*(long long*)(long long)((long long)v5 + 0x11ff0L) + v9);
                ++v9;
                v8 = *ptr0;
            }
            while(v8);
        }
        LPWCH penv = /*BAD_CALL!*/ GetEnvironmentStringsW();
        sub_404B30((long long)penv, (long long)((long long)v5 + 0x17fffL), 0x7fffL, (long long)((long long)v5 + 77808L), 0x200L);
        FreeEnvironmentStringsW(penv);
        *(long long*)((long long)v5 + 0x13ff0L) = 0L;
        *(long long*)((long long)v5 + 0x13ff8L) = 0L;
        sub_40F84E((long long)((long long)v5 + 0x10000L), &sub_4021C7, (long long)(unsigned int)v7, (long long)((long long)v5 + 0x11ff0L), (long long)((long long)v5 + 77808L), (long long)((long long)v5 + 0x13ff0L), v0);
        long long v10 = *(long long*)(__GS_BASE + (long long)(long long*)0x60);
        if((unsigned int)((unsigned int)(unsigned short)((unsigned int)0 | ((unsigned int)(*(int*)(v10 + 0x118L) & 0xffffff) << 8)) | *(int*)(v10 + 0x11cL)) > 0x9ff) {
            sub_40ED60(&gvar_4042C0, v1, v10);
            HANDLE hFile = GetStdHandle(0xfffffff6);
            HANDLE hFile1 = GetStdHandle(0xfffffff5);
            HANDLE hFile2 = GetStdHandle(0xfffffff4);
            DWORD v11 = GetFileType(hFile);
            if((unsigned int)v11 == 2) {
                SetEnvironmentVariableW("TERM", "xterm-truecolor");
                gvar_447B10 = hFile;
                UINT v12 = GetConsoleCP();
                gvar_447B08 = (unsigned int)v12;
                SetConsoleCP(65001);
                GetConsoleMode(hFile, (LPDWORD)&gvar_447B0C);
                SetConsoleMode(hFile, (DWORD)(gvar_447B0C | 0x20f));
            }
            DWORD v13 = GetFileType(hFile1);
            if((unsigned int)v13 != 2) {
                DWORD v14 = GetFileType(hFile2);
                if((unsigned int)v14 != 2) {
                    continue;
                }
                else {
                    hFile1 = hFile2;
                }
            }
            SetEnvironmentVariableW("TERM", "xterm-truecolor");
            gvar_447B20 = hFile1;
            UINT v15 = GetConsoleOutputCP();
            gvar_447B18 = (unsigned int)v15;
            SetConsoleOutputCP(65001);
            GetConsoleMode(hFile1, (LPDWORD)&gvar_447B1C);
            long long v16 = *(long long*)(__GS_BASE + (long long)(long long*)0x60);
            SetConsoleMode(hFile1, (DWORD)((~((unsigned int)((unsigned int)(unsigned short)((unsigned int)0 | ((unsigned int)(*(int*)(v16 + 0x118L) & 0xffffff) << 8)) | *(int*)(v16 + 0x11cL)) < 0xa00 ? -1: 0) & 0x4) | gvar_447B1C | 0x3));
        }
    }
}

long long sub_401005(long long param0, unsigned long long param1, unsigned long long param2) {
    long long result;
    long long v0;
    long long v1;
    unsigned long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v0;
    unsigned long long v6 = param1;
    do {
        long long v7 = sub_4010B0((long long)(v6 + &MZHeader), 3L, 454656L, (long long*)0x3220);
        long long v8 = v6 + 0x4000L;
        v6 += 0x1000L;
        result = v8 | v3;
        *(long long*)v7 = v8 | v3;
    }
    while(v2 > v6);
    return result;
}

long long sub_4010B0(long long param0, long long param1, long long param2, long long* param3) {
    long long* ptr0 = param3;
    long long v0 = (unsigned long long)((unsigned int)(param0 >> 39) & 0x1ff);
    if((unsigned int)param1) {
        param3 = (long long*)0x1E;
        param1 = (unsigned long long)(30 - (unsigned int)param1 * 9);
        do {
            long long* ptr1 = (long long*)(v0 * 8L + param2);
            long long v1 = *ptr1;
            if(!v1) {
                long long v2 = *ptr0 - 0x1000L;
                *ptr0 = *ptr0 - 0x1000L;
                v1 = v2 | 0x3L;
                *ptr1 = v2 | 0x3L;
            }
            param2 = v1 & 0x3fffffffff000L;
            long long* ptr2 = (long long*)(param0 >> (long long)(long long*)((long long)param3 & 0x3fL));
            param3 = (long long*)((unsigned int)param3 - 9);
            v0 = (unsigned long long)((unsigned int)ptr2 & 0x1ff);
        }
        while((unsigned int)param3 != (unsigned int)param1);
    }
    return v0 * 8L + param2;
}

void sub_40116D() {
    long long v0;
    char* ptr0 = (char*)((long long)((long long*)((long long)&v0 & 0xFFFFFFFFL) - 1) & 0xFFFFFFFFL);
    long long v1 = 8L;
    for(long long i = 8L; i != 0L; --i) {
        *ptr0 = 0;
        ++ptr0;
    }
    while(1) {
        *(__SyntheticTypeUnknownP80)((long long*)((long long)&v0 & 0xFFFFFFFFL) + -1) = lidt(*(__SyntheticTypeUnknownP80)((long long*)((long long)&v0 & 0xFFFFFFFFL) - 1));
        ud2();
    }
}

long long sub_4011F2(long long param0, long long param1) {
    char* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long* ptr1;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    int v7;
    long long v8;
    unsigned long long v9;
    long long* ptr2 = (long long*)&gvar_4199E0;
    rdtsc();
    *(int*)&gvar_41C000 = v7;
    long long v10 = (unsigned long long)v7;
    *(int*)((char*)&gvar_41C000 + 4) = (unsigned int)param1;
    unsigned char* ptr3 = (unsigned char*)&gvar_41C008;
    gvar_447FEC = 1;
    gvar_447FE8 = 1;
    *(int*)&gvar_447FD0 = 0x447fc8;
    long long v11 = v2;
    long long v12 = 0L;
    long long v13 = 22L;
    long long v14 = 0xffffffff80000007L;
    long long v15 = 0xffffffff80000001L;
    long long v16 = 7L;
    long long v17 = 2L;
    unsigned long long* ptr4 = &v3;
    v3 = 1L;
    int v18 = 0;
    do {
        cpuid();
        *(int*)ptr3 = v18;
        int v19 = (unsigned int)v2;
        v2 = (unsigned long long)v18;
        *(int*)(ptr3 + 4L) = v19;
        *(int*)(ptr3 + 8L) = 0;
        int v20 = (unsigned int)v10;
        v10 = 0L;
        *(int*)(ptr3 + 12L) = v20;
        ptr3 += 16L;
    loc_401243:
        while(1) {
            v18 = (unsigned int)*ptr4;
            ++ptr4;
            if(!v18) {
                if((gvar_41C023 & 0x10)) {
                    if((gvar_41C023 & 0x8)) {
                        xgetbv();
                    }
                    *(int*)0x41C020 = *(int*)0x41C020 & 0xefffffff;
                    *(int*)&gvar_41C03C = *(int*)&gvar_41C03C & 0xffffffdf;
                }
                long long v21 = *ptr4;
                ++ptr4;
                *(long long*)ptr3 = &gvar_40B8F0;
                *(long long*)(ptr3 + 8L) = &sub_40DCD0;
                if(gvar_41C008 > 3) {
                    int v22 = 4;
                    while(1) {
                        int v23 = v22;
                        --ptr4;
                        *ptr4 = v21;
                        cpuid();
                        int v24 = (unsigned int)v21;
                        v21 = *ptr4;
                        ++ptr4;
                        if(!((unsigned char)v22 & 0x1f)) {
                            v0 = &MZHeader;
                            break;
                        }
                        else if((unsigned char)v22 == 99) {
                            v0 = (unsigned long long)((((v24 >>> 12) & 0x3ff) + 1) * ((v24 & 0xfff) + 1) * (((v24 >>> 22) + 1) * (v23 + 1)));
                        loc_4012EC:
                            *(long long*)(ptr3 + 16L) = (unsigned long long)((unsigned int)v0 >>> 1);
                            *(long long*)(ptr3 + 24L) = &sub_40C5F0;
                            *(long long*)(ptr3 + 32L) = gvar_41C065 & 0x1 ? &sub_410E10: &gvar_410E00;
                            unsigned long long* ptr5 = (unsigned long long*)(ptr3 + 40L);
                            --ptr4;
                            *ptr4 = v8;
                            --ptr4;
                            *ptr4 = v1;
                            ptr4 -= 5;
                            *ptr4 = &loc_401326;
                            HMODULE hModule = /*BAD_CALL!*/ GetModuleHandleA("ntdll.dll");
                            while(1) {
                                long long v25 = *ptr2;
                                ++ptr2;
                                if(!v25) {
                                loc_401348:
                                    ptr4 += 4;
                                    long long* ptr6 = *ptr4;
                                    ptr4 += 2;
                                    *ptr5 = &sub_40E4E0;
                                    *(long long*)(ptr5 + 1) = &gvar_40E5C0;
                                    unsigned long long* ptr7 = ptr5 + 2;
                                    long long v26 = (unsigned long long)(unsigned char)v6 | ((unsigned long long)15 << 8) | ((unsigned long long)((v6 >>> 16L) & 0xffffffffffffL) << 16);
                                    do {
                                        long long v27 = (unsigned long long)*(char*)ptr2;
                                        char* ptr8 = (char*)((char*)ptr2 + 1L);
                                        v26 = (unsigned long long)(unsigned char)v27 | ((unsigned long long)((v26 >>> 8L) & 0xffffffffffffffL) << 8);
                                        ptr2 = (long long*)(ptr8 + 1L);
                                        long long v28 = ((unsigned long long)*ptr8 | ((unsigned long long)((v27 >>> 8L) & 0xffffffffffffffL) << 8)) + &gvar_415424;
                                        do {
                                            *ptr7 = v28;
                                            ++ptr7;
                                            v26 = (unsigned long long)((unsigned char)v26 + 0xff) | ((unsigned long long)((v26 >>> 8L) & 0xffffffffffffffL) << 8);
                                        }
                                        while((unsigned char)v26);
                                        v26 = (unsigned long long)(unsigned char)v26 | ((unsigned long long)((unsigned char)(v26 >>> 8L) + 0xff) << 8) | ((unsigned long long)((v26 >>> 16L) & 0xffffffffffffL) << 16);
                                    }
                                    while((unsigned char)(v26 >>> 8L));
                                    gvar_448018 = v9;
                                    *ptr7 = ptr6;
                                    *(ptr7 + 1) = ptr1;
                                    char* ptr9 = (char*)(ptr7 + 8);
                                    int v29 = 0;
                                    --ptr4;
                                    *ptr4 = 10L;
                                    int counter = (unsigned int)*ptr4;
                                    ++ptr4;
                                    do {
                                        ++v29;
                                        *ptr9 = (unsigned char)v29;
                                        ++ptr9;
                                        --counter;
                                    }
                                    while(counter);
                                    char* ptr10 = ptr9 + 7L;
                                    --ptr4;
                                    *ptr4 = 26L;
                                    int counter1 = (unsigned int)*ptr4;
                                    ++ptr4;
                                    do {
                                        ++v29;
                                        *(ptr10 + 32L) = (unsigned char)v29;
                                        *ptr10 = (unsigned char)v29;
                                        ++ptr10;
                                        --counter1;
                                    }
                                    while(counter1);
                                    --ptr4;
                                    *ptr4 = 64L;
                                    long long v30 = *ptr4;
                                    *ptr4 = &loc_4013C6;
                                    /*BAD_CALL!*/ sub_4025F2((long long)(ptr10 + 165L), (long long)((char*)ptr2 + 2L), v30);
                                    --ptr4;
                                    *ptr4 = 64L;
                                    long long v31 = *ptr4;
                                    *ptr4 = &loc_4013D5;
                                    /*BAD_CALL!*/ sub_4025F2(v5, v4, v31);
                                    --ptr4;
                                    *ptr4 = 32L;
                                    long long v32 = *ptr4;
                                    *ptr4 = &loc_4013E9;
                                    /*BAD_CALL!*/ sub_40283C((long long*)v5, (char*)v4, &gvar_4154D7, v32);
                                    --ptr4;
                                    *ptr4 = 32L;
                                    long long v33 = *ptr4;
                                    *ptr4 = &loc_4013FD;
                                    /*BAD_CALL!*/ sub_40283C((long long*)v5, (char*)v4, &gvar_41563C, v33);
                                    --ptr4;
                                    *ptr4 = 1L;
                                    long long v34 = *ptr4;
                                    ptr4 -= 4;
                                    *ptr4 = &loc_40140F;
                                    /*BAD_CALL!*/ SetConsoleCtrlHandler((PHANDLER_ROUTINE)&gvar_404EB8, (BOOL)v34);
                                    *(long long*)v5 = *ptr6;
                                    ptr4 += 3;
                                    *ptr4 = v21;
                                    --ptr4;
                                    *ptr4 = v4;
                                    --ptr4;
                                    if((*(char*)(v5 + 8L) & 0x2)) {
                                        *ptr4 = 0L;
                                        --ptr4;
                                        *ptr4 = 2L;
                                        ptr0 = (char*)&gvar_41A194;
                                    }
                                    else if((*(char*)(v5 + 8L) & 0x8)) {
                                        *ptr4 = 79L;
                                        --ptr4;
                                        *ptr4 = 8L;
                                        ptr0 = (char*)&gvar_41A337;
                                    }
                                    else if((*(char*)(v5 + 8L) & 0x20)) {
                                        *ptr4 = 53L;
                                        --ptr4;
                                        *ptr4 = 32L;
                                        ptr0 = (char*)&gvar_41A119;
                                    }
                                    else if((*(char*)(v5 + 8L) & 0x4)) {
                                        *ptr4 = 39L;
                                        --ptr4;
                                        *ptr4 = 4L;
                                        ptr0 = (char*)&gvar_41A28D;
                                    }
                                    else if(*ptr1) {
                                        *ptr4 = 0L;
                                        --ptr4;
                                        *ptr4 = 1L;
                                        ptr0 = (char*)&gvar_41A194;
                                    }
                                    else {
                                        *ptr4 = 47L;
                                        --ptr4;
                                        *ptr4 = 16L;
                                        ptr0 = (char*)&gvar_41A212;
                                    }
                                    long long v35 = *ptr4;
                                    ++ptr4;
                                    *(long long*)(v5 + 8L) = v35;
                                    *(long long*)(v5 + 16L) = *ptr4 + &gvar_4147E0;
                                    *ptr4 = (long long*)(v5 + 24L);
                                    --ptr4;
                                    *ptr4 = &loc_401493;
                                    /*BAD_CALL!*/ sub_40276D((long long*)&gvar_440770, ptr0);
                                    long long v36 = *ptr4;
                                    ++ptr4;
                                    long long v37 = *ptr4;
                                    ++ptr4;
                                    --ptr4;
                                    --ptr4;
                                    *ptr4 = &loc_40149D;
                                    /*BAD_CALL!*/ sub_410650();
                                    char* ptr11 = *ptr4;
                                    ++ptr4;
                                    char* ptr12 = *ptr4;
                                    ptr4 -= 4;
                                    *ptr4 = &loc_4014B1;
                                    /*BAD_CALL!*/ GetStartupInfoW((LPSTARTUPINFOW)0x447F60);
                                    ptr4 += 4;
                                    unsigned long long* ptr13 = ptr4;
                                    ptr4 -= 5;
                                    *ptr4 = &loc_4014C7;
                                    /*BAD_CALL!*/ GetSystemInfo((LPSYSTEM_INFO)0x447CE0);
                                    ptr4 += 3;
                                    *ptr4 = 1L;
                                    gvar_442000 = *ptr4;
                                    *ptr4 = 2L;
                                    gvar_44200C = *ptr4;
                                    *(int*)((char*)&gvar_442000 + 4) = gvar_440958;
                                    gvar_442018 = 0x441000L;
                                    gvar_442020 = 0x1000;
                                    gvar_442030 = &sub_40ADE0;
                                    gvar_442038 = &gvar_442000;
                                    gvar_444004 = gvar_440938;
                                    gvar_444018 = 0x443000L;
                                    gvar_444020 = 0x1000;
                                    gvar_444028 = &sub_40B050;
                                    gvar_444038 = 0x444000L;
                                    *ptr4 = 1L;
                                    gvar_44600C = *ptr4;
                                    gvar_446004 = gvar_440958;
                                    gvar_446018 = 0x445000L;
                                    gvar_446020 = 0x1000;
                                    gvar_446030 = &sub_40ADE0;
                                    gvar_446038 = 0x446000L;
                                    *ptr4 = ptr11;
                                    --ptr4;
                                    *ptr4 = &loc_401577;
                                    char* ptr14 = /*BAD_CALL!*/ sub_4027C0(ptr12, ptr11, 1203L);
                                    char* ptr15 = (char*)(*ptr4 + 1208L);
                                    *ptr4 = (char*)(*ptr4 + 1208L);
                                    --ptr4;
                                    *ptr4 = &loc_40158D;
                                    char* ptr16 = /*BAD_CALL!*/ sub_4027C0(ptr14, ptr15, 500L);
                                    long long v38 = *ptr4;
                                    *ptr4 = ptr16;
                                    --ptr4;
                                    *ptr4 = v38 + 504L;
                                    --ptr4;
                                    *ptr4 = &loc_40159F;
                                    /*BAD_CALL!*/ sub_402140();
                                    jump *(long long*)(ptr13 + 1);
                                }
                                else {
                                    --ptr4;
                                    *ptr4 = &loc_40133D;
                                    FARPROC v39 = /*BAD_CALL!*/ GetProcAddress(hModule, (LPCSTR)(v25 + v21));
                                    *ptr5 = v39 ? v39: (FARPROC)&gvar_405E9F;
                                    ++ptr5;
                                }
                            }
                            goto loc_401348;
                        }
                        else {
                            ++v22;
                        }
                    }
                }
                else {
                    v0 = &MZHeader;
                }
                goto loc_4012EC;
            }
        }
    }
    while((unsigned char)v18 <= *(char*)&gvar_41C008);
    ptr3 += 16L;
    goto loc_401243;
}

long long sub_4015B0(int param0, long long* param1) {
    long long* ptr0;
    long long v0;
    long long* ptr1;
    long long v1;
    long long v2;
    long long v3;
    __SyntheticTypeUnknownF v4;
    long long* ptr2;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    char v10;
    long long v11;
    __SyntheticTypeUnknownF v12;
    long long v13;
    unsigned int v14;
    long long v15;
    long long* ptr3 = ptr2;
    long long v16 = v5;
    gvar_446360 = 0x6566696c657061L;
    gvar_44649C = 1;
    gvar_446438 = 1L;
    gvar_446468 = 80L;
    gvar_446460 = 80L;
    gvar_446478 = 24L;
    gvar_446458 = 24L;
    gvar_446450 = 0x1000L;
    gvar_446448 = 0x1000L;
loc_40164A:
    while(1) {
        long long v17 = /*BAD_CALL!*/ sub_407FC0((unsigned long long)param0, (long long)param1, "?hNWzw:h:");
        int v18 = (unsigned int)v17;
        switch((unsigned int)v17) {
            case 119: {
                long long v19 = sub_4145A0();
                gvar_446448 = (unsigned long long)(((v19 < 8L ? 8L: v19) + 7L) & 0xfffffffffffffff8L);
                continue loc_40164A;
            }
            case 87: {
                gvar_4464A4 = 1;
                continue loc_40164A;
            }
            case 104: {
                long long v20 = sub_4145A0();
                gvar_446450 = (unsigned long long)(((v20 < 8L ? 8L: v20) + 7L) & 0xfffffffffffffff8L);
                continue loc_40164A;
            }
            case 122: {
                goto loc_401701;
            }
            case 78: {
                break;
            }
            case 63: {
                goto loc_4016F0;
            }
            case -1: {
                break loc_40164A;
            }
            default: {
                /*NO_RETURN*/ sub_406750(64L);
            }
        }
        gvar_4464A3 = 1;
        continue;
    loc_4016F0:
        long long v21 = /*NO_RETURN*/ sub_406750((unsigned long long)gvar_4408B8);
        v18 = (unsigned int)v21;
        if((unsigned int)v21 == 122) {
        loc_401701:
            ++gvar_446440;
        }
        else {
            /*NO_RETURN*/ sub_406750(64L);
        }
    }
    if(gvar_446408) {
        sub_40F560(gvar_446400 - 0x1000L, (long long)gvar_4463F8);
        sub_40F560(gvar_446408 - 0x1000L, (long long)gvar_4463F8);
    }
    unsigned long long v22 = (unsigned long long)sub_4067C0(&gvar_4463F8, (long long)param1, v3, v13, v15, v6);
    gvar_446408 = v22;
    unsigned long long v23 = (unsigned long long)sub_4067C0(0L, (long long)param1, v3, v13, v15, v6);
    gvar_446400 = v23;
    if(gvar_447FE8 < param0) {
        long long v24 = sub_406A10();
        if(!((unsigned int)v24 + 1)) {
            long long v25 = *(long long*)((long long)gvar_447FE8 * 8L + (long long)param1);
            ptr1 = (long long*)0x1;
            sub_40AD00(((unsigned long long)gvar_446498 + 1L) & 0xFFFFFFFFL, v25, (unsigned long long)gvar_446494, "error: failed to load game of life run length encoded (rle) file");
            return (long long)(long long*)((long long)ptr1 & 0xFFFFFFFFL);
        }
    }
    ptr1 = (long long*)(gvar_41C718 & 0x4);
    if(!(gvar_41C718 & 0x4)) {
        sub_407100();
        sub_4064D0();
        sub_410A20((unsigned long long)gvar_44649C, 0x4463a0L);
        long long v26 = sub_41571A(&gvar_417078, &gvar_417078, v3);
        sub_411A10((unsigned long long)gvar_44649C, (long long)param1, v26);
        sub_4154C0(v13, 56L);
        *(char*)(v11 + (long long)&v8) = 1;
        int v27 = (unsigned int)gvar_4409A0 | gvar_4409A8 | gvar_4409B0;
        *(char*)(gvar_440A00 + (long long)&v8) = 1;
        unsigned int v28 = gvar_4409C8;
        unsigned long long v29 = gvar_4409E0;
        (v1 >>> 32L) & 0xFFFFFFFFL = ~(v27 | 0x8) & (unsigned int)(v1 >>> 32L);
        long long v30 = (unsigned long long)gvar_44649C;
        v1 & 0xFFFFFFFFL = (~((unsigned int)gvar_4409D0 | gvar_440998) & (unsigned int)v1) | gvar_440990;
        v9 & 0xFFFFFFFFL = (~(v28 | 0x1f8) & (unsigned int)v9) | gvar_4409C0;
        sub_410A90(v30, (long long)v29, (long long)&v9);
        gvar_4464A2 = 1;
        long long v31 = sub_41571A(&gvar_41707F, &gvar_41707F, v3);
        sub_411A10((unsigned long long)gvar_44649C, (long long)param1, v31);
        sub_40ED60(&gvar_407080, (long long)param1, v3);
        v0 = 10L;
        ptr0 = &v1;
        goto loc_401891;
    }
    else {
        sub_41561F((long long)&v9, 0L, 72L);
        v1 = &gvar_407FAA;
        long long v32 = sub_405F9E(0L);
        long long v33 = sub_402C92(0L, 32515L, v3, v13);
        long long v34 = "apelife";
        long long v35 = v33;
        long long v36 = 11L;
        long long v37 = sub_402CD5((long long)&v9);
        if((unsigned short)v37) {
            long long* ptr4 = (long long*)sub_402BFF(0L, "apelife", "Conway\'s Game of Life", 0xcf0000L, 0x80000000L, 0x80000000L, 0xffffffff80000000L, 0xffffffff80000000L, 0L, 0L, v32, 0L);
            if(ptr4) {
                long long v38 = sub_402C72((long long)ptr4, 0L, v3, v13);
                sub_402BDF(v38, 0x800L, 0L, 0L);
                sub_402BDF(v38, 0L, 32L, "&Open File...");
                sub_402BDF(v38, 0L, 16L, "&About...");
                sub_402D3E((long long)ptr4, 1L, v3, v13);
                goto loc_401AE9;
            }
        }
        long long* ptr5 = &v7;
        sub_4028C1(0L, 0L, &gvar_41873D);
        if(!gvar_448024) {
            gvar_448024 = 1;
            long long v39 = sub_410B10(0L, (long long)param1, v3, v13);
            if((unsigned int)v39) {
                int3();
            }
            sub_40A090(2L, 0L);
            /*NO_RETURN*/ sub_40286F((unsigned long long)gvar_4408B0);
        }
        long long* ptr6 = &v2;
        /*NO_RETURN*/ sub_401114(v13, v3);
        long long v40 = *&v2;
        jump v40;
    }
loc_401AE9:
    while(1) {
        long long v41 = sub_402C62((long long)&v10, 0L, 0L, 0L);
        ptr1 = (long long*)(v41 & 0xFFFFFFFFL);
        if(!(unsigned int)v41) {
            break;
        }
        else {
            sub_402D4E((long long)&v10);
            sub_402C1F((long long)&v10);
            continue;
        loc_401891:
            while(v0 != 0L) {
                *(int*)ptr0 = (unsigned int)ptr1;
                ptr0 = (long long*)((char*)ptr0 + 4L);
                --v0;
            }
            v9 = &gvar_406730;
            sub_4114C0(2L, (long long)&v9, 0L);
            long long* ptr7 = &v1;
            for(long long i = 10L; i != 0L; --i) {
                *(int*)ptr7 = (unsigned int)ptr1;
                ptr7 = (long long*)((char*)ptr7 + 4L);
            }
            v9 = &gvar_406740;
            sub_4114C0(28L, (long long)&v9, 0L);
            long long v42 = sub_41571A(&gvar_41707F, (unsigned long long)gvar_446490, v3);
            long long v43 = sub_41571A(&gvar_417029, (long long)param1, v3);
            do {
                if(!(v14 & 0x2)) {
                    char v44 = gvar_4464A1 < 0;
                    if(gvar_4464A1) {
                        gvar_41C098();
                        v53[v54] = fcomi(*(__SyntheticTypeUnknownP80)0x446040, v4);
                        v4 = v12;
                        __SyntheticTypeUnknownF v45 = v12;
                        if(v44 == 0) {
                            unsigned short v46 = gvar_440968;
                            v9 &= 0xffffffff00000000L;
                            (unsigned short)(v9 >>> 32L) = v46;
                            (v9 >>> 48L) & 0xFFFFL = 0;
                            sub_408230((long long)&v9, 1L, 0L);
                            if(!((gvar_440968 | gvar_440960) & (unsigned short)(v9 >>> 48L))) {
                                v12 = v45 + 0.041666666666666664;
                                *(__SyntheticTypeUnknownPF80)0x446040 = v45 + 0.041666666666666664;
                                goto loc_4019CD;
                            }
                        }
                    }
                    else {
                    loc_4019CD:
                        sub_4078F0(v13, v3, v15, v6);
                    }
                }
                else {
                    sub_407100();
                    gvar_446490 &= -3;
                    sub_4078F0(v13, v3, v15, v6);
                }
                *(__SyntheticTypeUnknownP128)&v9 = 0x0X;
                *(__SyntheticTypeUnknownP128)&v8 = 0x0X;
                long long v47 = sub_410F90(0L, (long long)&v9, 32L);
                if(v47 != -1L) {
                    long long v48 = v9 & 0xFFL;
                    if((unsigned char)v48 > 32) {
                        if((unsigned char)((unsigned char)v48 - 77) <= 38) {
                            switch((unsigned long long)((unsigned int)v48 - 77)) {
                                case 0: {
                                    long long v49 = (unsigned long long)gvar_44649C;
                                    if(gvar_4464A2) {
                                        gvar_4464A2 = 0;
                                        sub_411A10(v49, &gvar_417029, v43);
                                    }
                                    else {
                                        gvar_4464A2 = 1;
                                        sub_411A10(v49, &gvar_41707F, v42);
                                    }
                                }
                                case 1: 
                                case 2: 
                                case 3: 
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
                                    goto loc_401944;
                                }
                                case 5: {
                                    goto loc_401CFC;
                                }
                                default: {
                                    throw 0;
                                }
                            }
                        loc_401B40:
                            long long v50 = (long long)gvar_448020;
                            if(gvar_440818 != v50) {
                                /*NO_RETURN*/ sub_40286F(v50);
                            loc_401CFC:
                                sub_41561F((long long)gvar_446408, 0L, (gvar_446450 * gvar_446448) >> 3);
                            }
                        }
                    }
                    else if((unsigned char)v48 > 8 && (unsigned char)((unsigned char)v48 - 9) <= 23) {
                        switch((unsigned long long)((unsigned int)v48 - 9)) {
                            case 0: {
                                long long v51 = gvar_446438;
                                long long v52 = 0L;
                                if(v51 > 0L) {
                                    do {
                                        sub_4060A0();
                                        ++v52;
                                    }
                                    while(v52 != v51);
                                }
                            }
                            case 1: 
                            case 2: 
                            case 3: 
                            case 4: 
                            case 6: 
                            case 8: 
                            case 9: 
                            case 10: 
                            case 12: 
                            case 14: 
                            case 15: {
                                break;
                            }
                            case 5: {
                                sub_406570(1L, 0L);
                                break;
                            }
                            case 7: {
                                sub_406570(-1L, 0L);
                                break;
                            }
                            case 11: {
                                ++gvar_446438;
                                break;
                            }
                            case 13: {
                                sub_406570(gvar_446460 - 2L, 0L);
                                break;
                            }
                            default: {
                                throw 0;
                            }
                        }
                    }
                }
                else {
                    goto loc_401B40;
                }
            loc_401944:
                v14 = gvar_446490;
            }
            while((unsigned char)v14 & 0x1);
        }
    }
    return (long long)(long long*)((long long)ptr1 & 0xFFFFFFFFL);
}

long long sub_401F80() {
    gvar_447FF0 = 0x102030a0a030201L;
    gvar_447FF8 = 0xfffd03111103fdffL;
    return 0xfffd03111103fdffL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4020A0() {
    long long v0 = gvar_446038;
    if(!(*(char*)&gvar_41C718 & 0x4)) {
        long long v1 = sub_4023B0((long long)*(int*)(v0 + 12L));
        if((unsigned int)v1) {
            *(char*)v0 = 1;
            return sub_401FA0(v0);
        }
    }
    else {
        *(char*)v0 = 1;
    }
    return sub_401FA0(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_402140() {
    long long result;
    if(!gvar_4466C0) {
        unsigned long long v0 = gvar_447D08 < 0x10000 ? 0x10000L: (unsigned long long)gvar_447D08;
        if(((v0 - 1L) & (v0 - 2L))) {
            /*NO_RETURN*/ sub_401114();
        }
        gvar_4466D0 = v0;
        unsigned long long v1 = gvar_41C000;
        gvar_4466C8 = 0x1000L;
        gvar_4466D8 = 0x40000L;
        gvar_4466E0 = 0xa00000L;
        result = (v1 & 0xfffffffffffffff8L) | 0x8L;
        gvar_4466E8 = 5;
        gvar_446A70 = 5;
        gvar_4466C0 = result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4021C7(int param0, long long param1, long long param2, long long param3) {
    sub_40ED3D(param3, param2);
    long long v0 = sub_4015B0((unsigned long long)param0, param1);
    /*NO_RETURN*/ sub_40286F(v0 & 0xFFFFFFFFL, param1, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_402200(LPVOID param0, long long param1, long long param2) {
    long long result;
    SIZE_T v0 = (SIZE_T)(param1 - (long long)param0);
    if((long long)v0 > 0L && param0) {
        result = (long long)(v0 | (long long)param0);
        if(!((unsigned int)result & 0xfff)) {
            result = sub_416180(param0, v0, param2);
            if((unsigned int)result == -1) {
                /*NO_RETURN*/ sub_401114();
            }
            return result;
        }
    }
    return result;
}

void sub_402240(int param0) {
    char v0;
    unsigned long long* ptr0 = &v0;
    while(1) {
        --ptr0;
        *ptr0 = &loc_40229C;
        /*BAD_CALL!*/ sub_402200((LPVOID)&gvar_416000, &gvar_416000, 0L);
        --ptr0;
        *ptr0 = &loc_402270;
        /*BAD_CALL!*/ sub_402200("SYNOPSIS\n\n  ", &gvar_41B000, 1L);
        ptr0 += 3;
        /*BAD_CALL!*/ sub_402200((LPVOID)&gvar_41B000, 0x441000L, (long long)param0);
    }
}

long long* sub_40229E() {
    long long* result = (long long*)&gvar_41B008;
    long long v0 = &gvar_41B038;
    while(result != v0) {
        long long* ptr0 = result;
        long long v1 = v0;
        *result{sub_401F80}();
        v0 = v1;
        result = ptr0 + 1;
    }
    return result;
}

long long sub_4025F2(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1 = param2;
    long long v2 = param0;
    long long v3 = v0(v2, param2);
    unsigned int counter = (unsigned int)v1;
    long long result = (unsigned int)v3 >= counter ? 0L: (unsigned long long)(unsigned int)v3;
    if(((unsigned int)v3 >= counter ? 0: (unsigned int)v3) > 1 && *(char*)(result + param0 - 1L) != 92) {
        *(short*)(result + param0) = 92;
        result = (unsigned long long)((unsigned int)result + 1);
    }
    do {
        ++param0;
        if(*(char*)(param0 - 1L) == 92) {
            *(char*)(param0 - 1L) = 47;
        }
        --counter;
    }
    while(counter);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4026A6(long long param0, long long param1) {
    long long result = sub_405E30(param0, param1);
    gvar_448010 ^= result;
    return result;
}

long long sub_40276D(long long* param0, char* param1) {
    long long result;
    unsigned long long v0;
    long long v1;
    while(v0 > (unsigned long long)param0) {
        long long v2 = 0L;
        long long v3 = 0L;
        do {
            v1 = (unsigned long long)*param1 | ((unsigned long long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
            ++param1;
            long long v4 = (unsigned long long)((unsigned int)v1 & 0x7f) << (v2 & 0x3fL);
            v2 = (unsigned long long)((unsigned int)v2 + 7);
            v3 |= v4;
        }
        while((unsigned char)v1 < 0);
        if(((unsigned char)v1 & 0x40)) {
            v3 |= -1L << (v2 & 0x3fL);
        }
        result = v3;
        v1 = *param0 ? *param0: result;
        *param0 = *param0 ? *param0: result;
        ++param0;
    }
    return result;
}

char* sub_4027C0(char* param0, char* param1, long long param2) {
    int v0;
    long long v1;
    long long v2;
    char* ptr0 = param1;
    long long* ptr1 = (long long*)(param2 + (long long)param1);
    long long v3 = 15L;
loc_4027F3:
    char* ptr2 = ptr0 + 1L;
    long long v4 = (unsigned long long)*ptr0;
    long long v5 = (unsigned long long)((unsigned int)v4 >>> 4);
    if((unsigned int)v4 >>> 4 == 15) {
        do {
            v2 = (unsigned long long)*ptr2;
            ++ptr2;
            v5 = (unsigned long long)((unsigned int)v5 + (unsigned int)v2);
        }
        while((unsigned char)v2 == 0xff);
    }
    while(v5 != 0L) {
        *param0 = *ptr2;
        ++ptr2;
        ++param0;
        --v5;
    }
    if((unsigned long long)ptr1 > (unsigned long long)ptr2) {
        v1 = (unsigned long long)*(short*)ptr2;
        ptr0 = ptr2 + 2L;
        v0 = (unsigned int)v4 & 0xf;
        if(v0 != 15) {
            goto loc_4027EB;
        }
    }
    else {
        return param0;
    }
    do {
        v2 = (unsigned long long)*ptr0;
        ++ptr0;
        v0 += (unsigned int)v2;
    }
    while((unsigned char)v2 == 0xff);
loc_4027EB:
    long long v6 = (unsigned long long)(v0 + 4);
    char* ptr3 = (char*)((long long)param0 - v1);
    while(1) {
        if(v6 == 0L) {
            goto loc_4027F3;
        }
        else {
            *param0 = *ptr3;
            ++ptr3;
            ++param0;
            --v6;
        }
    }
}

long long sub_40283C(long long* param0, char* param1, long long param2, int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((unsigned long long)(((v0 ? 0: 1) * 2) | (gvar_41C03D & 0x2 ? 1: 0)) + (long long)param1) + param2;
    return *(long long*)param1;
}

long long sub_402B0C() {
    gvar_448020 = *(int*)&gvar_440818;
    return -1L;
}

int sub_40339C() {
    return WSACleanup();
}

int sub_4033EC(WORD wVersionRequired, LPWSADATA lpWSAData) {
    return WSAStartup(wVersionRequired, lpWSAData);
}

void sub_403720(HANDLE hFile, long long param1, unsigned long long param2, long long param3, long long param4, long long param5) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    if(param2) {
        long long v6 = v2;
        long long v7 = v3;
        long long v8 = v4;
        long long v9 = v5;
        long long v10 = v1;
        unsigned long long v11 = 0L;
        do {
            sub_406014(hFile, (LPCVOID)(v11 + param1), (long long)(param2 - v11), &v0, NULL, param5);
            v11 = (unsigned long long)((unsigned long long)v0 + v11);
        }
        while(param2 > v11);
    }
}

int sub_403748(LPCWSTR lpName, long long param1, long long param2) {
    long long v0;
    short* ptr0;
    SIZE_T dwNumberOfBytesToMap;
    LPVOID lpBaseAddress;
    long long v1;
    long long v2;
    long long v3;
    short v4;
    long long v5;
    char v6;
    char v7;
    long long v8;
    DWORD v9 = GetEnvironmentVariableW(lpName, &v4, (DWORD)param2);
    if((unsigned int)((unsigned int)v9 - 1) > 42) {
        jump v5;
    }
    long long v10 = (unsigned long long)v4;
    int v11 = (int)&v4;
    HANDLE hFile = NULL;
    long long i;
    for(i = (v10 - 48L) & 0xFFFFFFFFL; (unsigned short)i <= 9; i = (v10 - 48L) & 0xFFFFFFFFL) {
        v11 += 2L;
        hFile = (HANDLE)((long long)(long long*)((long long)hFile * 10L) + (long long)((unsigned int)v10 - 48));
        v10 = (unsigned long long)*(short*)v11;
    }
    if((unsigned short)v10 != 32) {
    loc_4037D7:
        unsigned int v12 = 0;
        long long v13 = &gvar_446EE8;
        sub_403720(hFile, &v6, 64L, i, param2, v8);
        sub_403720(hFile, &gvar_446EE0, 4L, (long long)lpName, param2, v8);
        if(gvar_446EE0) {
            do {
                sub_403720(hFile, v13, 24L, (long long)lpName, param2, v8);
                long long v14 = (long long)*(int*)v13;
                long long v15 = (unsigned long long)((*(int*)(v13 + 16L) & 0x7) - 1);
                unsigned long long dwSize = (unsigned long long)((long long)(*(int*)(v13 + 4L) - (unsigned int)v14) * 0x10000L + 0x10000L);
                if((unsigned int)v15 > 6) {
                    v3 = 0L;
                    v2 = 1L;
                }
                else {
                    v2 = (unsigned long long)*(unsigned int*)(v15 * 4L + (long long)&gvar_418810);
                    v3 = (unsigned long long)*(unsigned int*)(v15 * 4L + (long long)&gvar_4187F0);
                }
                int v16 = (unsigned int)v2;
                if((*(char*)(v13 + 20L) & 0x2)) {
                    HANDLE hFileMappingObject = CreateFileMappingNumaW((HANDLE)0xFFFFFFFFFFFFFFFF, NULL, 64, 0, (DWORD)dwSize, NULL, 0xffffffff);
                    v1 = -1L;
                    lpBaseAddress = (LPVOID)(v14 * 0x10000L);
                    dwNumberOfBytesToMap = dwSize;
                    *(HANDLE*)(v13 + 8L) = hFileMappingObject;
                    MapViewOfFileExNuma(hFileMappingObject, 38, 0, 0, dwNumberOfBytesToMap, lpBaseAddress, (DWORD)v1);
                    sub_403720(hFile, v14 * 0x10000L, dwSize, (long long)lpName, param2, v8);
                    sub_405FF4((LPVOID)(v14 * 0x10000L), dwSize, (long long)v16, &v7);
                }
                else {
                    HANDLE hFileMappingObject1 = *(HANDLE*)(v13 + 8L);
                    v1 = -1L;
                    lpBaseAddress = (LPVOID)(v14 * 0x10000L);
                    dwNumberOfBytesToMap = dwSize;
                    MapViewOfFileExNuma(hFileMappingObject1, (DWORD)v3, 0, 0, dwNumberOfBytesToMap, lpBaseAddress, 0xffffffff);
                }
                ++v12;
                v13 += 24L;
            }
            while(gvar_446EE0 <= v12);
        }
        sub_403720(hFile, &gvar_41C000, 0x2d000L, (long long)lpName, param2, v8);
        sub_405EF5((long long)hFile);
        v11 = sub_416315((long long*)&v6, 1L);
    }
    long long v17 = (unsigned long long)*(short*)(v11 + 2L);
    if((unsigned short)((unsigned short)v17 + 65488) <= 9) {
        ptr0 = (short*)(v11 + 2L);
        v0 = 0L;
    }
    else {
        v0 = 0L;
        sub_405EF5(v0);
        goto loc_4037D7;
    }
    do {
        ++ptr0;
        v0 = v0 * 10L + (long long)((unsigned int)v17 - 48);
        v17 = (unsigned long long)*ptr0;
    }
    while((unsigned short)((unsigned short)v17 + 65488) <= 9);
    sub_405EF5(v0);
    goto loc_4037D7;
}

long long sub_404760(unsigned long long* param0) {
    short* ptr0;
    long long v0;
    short* ptr1 = *param0;
    while(1) {
        v0 = (unsigned long long)*ptr1;
        ptr0 = ptr1 + 1;
        if((unsigned int)v0) {
            if(((unsigned short)v0 & 0xfc00) == 0xdc00) {
                ptr1 = ptr0;
                continue;
            }
            else if((unsigned short)((unsigned long long)((unsigned short)v0 & 0xfc00) | ((unsigned long long)(((v0 & 0xFFFFFFFFL) >>> 16L) & 0xffffffffffffL) << 16)) == 0xd800) {
                *param0 = (long long*)(ptr1 + 2);
                long long v1 = (unsigned long long)*(ptr1 + 1);
                if((unsigned int)v1) {
                    return ((unsigned long long)(((unsigned int)v0 - 0xd800) * 0x400) + v1 + 0x2400L) & 0xFFFFFFFFL;
                }
                return 0L;
            }
        }
        break;
    }
    *param0 = ptr0;
    return v0 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4047D0(long long param0, long long param1, long long param2, long long param3, unsigned long long param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    unsigned long long v9;
    long long v10;
    long long v11;
    char v12;
    int v13;
    long long v14;
    long long v15;
    long long v16;
    long long v17 = v5;
    unsigned long long v18 = 0L;
    long long v19 = (unsigned long long)v12 | ((unsigned long long)v10 << 8);
    long long v20 = param1;
    long long v21 = param2;
    long long v22 = param3;
    long long v23 = param1;
    unsigned long long v24 = (unsigned long long)(param2 + param1);
    long long v25 = sub_404760(&v4);
    unsigned int v26 = (unsigned int)v25;
    long long v27 = (long long)(unsigned int)v25;
    if(!(unsigned int)v25) {
        v3 = v23;
        v2 = 0L;
    }
    else {
        do {
            do {
                long long v28 = sub_4148D0(v27, v14, v15);
                if((unsigned int)v28) {
                    v6 = sub_404760(&v4);
                    v26 = (unsigned int)v6;
                    v27 = (long long)(unsigned int)v6;
                }
                else {
                    ++v18;
                    if(v9 > v18) {
                        v15 = 0L;
                        *(unsigned long long*)(v22 - 8L) = (unsigned long long)v23 < v24 ? v23: 0L;
                    }
                    unsigned int v29 = v26;
                    v12 = 0;
                    if(v29) {
                        do {
                            if(!v12) {
                                long long v30 = sub_4148D0((long long)v29, v14, v15);
                                if((unsigned int)v30) {
                                    break;
                                }
                                else {
                                    goto loc_40489C;
                                }
                            }
                            else {
                            loc_40489C:
                                if(v29 != 34 && v29 != 92) {
                                    long long v31 = (long long)v29;
                                    if(v29 > 127) {
                                        v31 = sub_414845((long long)v29, v14, v15, v16);
                                    }
                                    do {
                                        long long v32 = v23;
                                        if((unsigned long long)v32 >= v24) {
                                            break;
                                        }
                                        else {
                                            v23 = v32 + 1L;
                                            *(char*)v32 = (unsigned char)v31;
                                            v31 >>>= 8;
                                        }
                                    }
                                    while(!v31);
                                    long long v33 = sub_404760(&v4);
                                    v26 = (unsigned int)v33;
                                    v29 = (unsigned int)v33;
                                }
                                else {
                                    unsigned int v34 = v26;
                                    v14 = 0L;
                                    if(v34 == 92) {
                                        do {
                                            v7 = sub_404760(&v4);
                                            v26 = (unsigned int)v7;
                                            v14 = param1 + 1L;
                                        }
                                        while((unsigned int)v7 == 92);
                                        if((unsigned int)v7 != 34) {
                                        loc_404A18:
                                            v15 = v14 - 1L;
                                            if(!v14) {
                                                goto loc_404B01;
                                            }
                                            else {
                                                do {
                                                    long long v35 = v23;
                                                    if((unsigned long long)v35 < v24) {
                                                        v16 = v35 + 1L;
                                                        v23 = v35 + 1L;
                                                        *(char*)v35 = 92;
                                                    }
                                                    --v15;
                                                }
                                                while(v15 != -1L);
                                            }
                                            goto loc_404A08;
                                        }
                                        else {
                                            goto loc_40495C;
                                        }
                                    }
                                    else {
                                        if(v34 != 34) {
                                            v29 = v34;
                                        }
                                    loc_40495C:
                                        do {
                                            v11 = sub_404760(&v4);
                                            v16 = v8;
                                            v26 = (unsigned int)v11;
                                            v1 = v8 + 1L;
                                        }
                                        while((unsigned int)v11 == 34);
                                        if(!v1) {
                                            goto loc_404A18;
                                        }
                                        else {
                                            v15 = param1;
                                            if((unsigned long long)param1 > 1L) {
                                                do {
                                                    long long v36 = v23;
                                                    if((unsigned long long)v36 < v24) {
                                                        v23 = v36 + 1L;
                                                        *(char*)v36 = 92;
                                                    }
                                                    v15 -= 2L;
                                                }
                                                while((unsigned long long)v15 > 1L);
                                                v14 = (long long)(v13 & 0x1);
                                            }
                                        }
                                        if(v14) {
                                            long long v37 = v23;
                                            if((unsigned long long)v37 < v24) {
                                                v15 = v37 + 1L;
                                                v23 = v37 + 1L;
                                                *(char*)v37 = 34;
                                            }
                                            if(v16) {
                                                v1 = v16;
                                                goto loc_4049B5;
                                            }
                                        }
                                        else {
                                        loc_4049B5:
                                            if(v12) {
                                                v14 = v1 + 1L;
                                                v0 = v1;
                                            }
                                            else {
                                                v0 = v1 - 1L;
                                                v14 = v1;
                                            }
                                            v15 = 3L;
                                            if((unsigned long long)v14 > 2L) {
                                                do {
                                                    long long v38 = v23;
                                                    if((unsigned long long)v38 < v24) {
                                                        v16 = v38 + 1L;
                                                        v23 = v38 + 1L;
                                                        *(char*)v38 = 34;
                                                    }
                                                    v15 += 3L;
                                                }
                                                while((unsigned long long)v15 <= (unsigned long long)v14);
                                            }
                                            v12 = (unsigned long long)(v0 * 0xaaaaaaaaaaaaaaabL) <= 0x5555555555555555L ? 1: 0;
                                        }
                                    loc_404A08:
                                        v29 = v26;
                                    loc_404B01:
                                        v29 = v26;
                                    }
                                }
                            }
                        }
                        while(v29);
                        goto loc_4048EE;
                    }
                    else {
                        v3 = v23;
                    }
                    if((unsigned long long)v3 >= v24) {
                        goto loc_404912;
                    loc_4048EE:
                        v3 = v23;
                        if((unsigned long long)v3 >= v24) {
                            goto loc_404903;
                        }
                    }
                    v15 = v3 + 1L;
                    v23 = v3 + 1L;
                    *(char*)v3 = 0;
                    goto loc_404903;
                }
                goto loc_404A94;
            }
            while(!(unsigned int)v6);
            v3 = v23;
            v2 = v18 & 0xFFFFFFFFL;
            goto loc_404A94;
        loc_404903:
            v27 = (long long)v26;
        }
        while(v26);
        v3 = v23;
    loc_404912:
        v2 = v18 & 0xFFFFFFFFL;
    }
loc_404A94:
    if((unsigned long long)v3 < v24) {
        v23 = v3 + 1L;
        *(char*)v3 = 0;
    }
    if(v21) {
        long long v39 = v23 - v20;
        *(char*)(((unsigned long long)(v21 - 1L) >= (unsigned long long)v39 ? v39: (unsigned long long)(v21 - 1L)) + v20) = 0;
    }
    if(v9) {
        *(long long*)((v9 - 1L <= v18 ? v9 - 1L: v18) * 8L + v22) = 0L;
    }
    return v2 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404B30(long long param0, long long param1, unsigned long long param2, long long param3, unsigned long long param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long v4 = param2;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = 0L;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = param3;
    unsigned long long v11 = param4;
    if(param2) {
        long long $rdx$2 = param0;
        long long $rsi = (long long)(param2 - 1L);
        long long $rdi$2 = param1;
        if(*(short*)param0) {
            do {
                v4 = (unsigned long long)(unsigned int)v7;
                unsigned long long v12 = (unsigned long long)((unsigned int)v7 + 1);
                if(v12 < v11) {
                    v7 = (unsigned long long)((unsigned int)v7 + 1);
                    *(long long*)(v4 * 8L + v10) = $rdi$2;
                    v4 = v12;
                }
                long long v13 = sub_414E40($rdi$2, $rsi, $rdx$2);
                $rdx$2 += param2 * 2L;
                $rdi$2 = v13 + $rdi$2 + 1L;
                $rsi += ~v13;
            }
            while(*(short*)$rdx$2);
        }
        else {
            v4 = 0L;
        }
        *(char*)$rdi$2 = 0;
    }
    if(v4 < v11) {
        *(long long*)(v4 * 8L + v10) = 0L;
    }
    return v7 & 0xFFFFFFFFL;
}

long long sub_405FC1(LPFILETIME lpSystemTimeAsFileTime) {
    long long result;
    GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
    return result;
}

BOOL sub_405FD4(HANDLE hFile, LPVOID lpBuffer, long long param2, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped, long long param5) {
    return ReadFile(hFile, lpBuffer, (DWORD)param2, lpNumberOfBytesRead, lpOverlapped);
}

DWORD sub_405FE4(DWORD dwMilliseconds, BOOL bAlertable) {
    return SleepEx(dwMilliseconds, bAlertable);
}

BOOL sub_405FF4(LPVOID lpAddress, SIZE_T dwSize, long long param2, PDWORD lpflOldProtect) {
    return VirtualProtect(lpAddress, dwSize, (DWORD)param2, lpflOldProtect);
}

BOOL sub_406014(HANDLE hFile, LPCVOID lpBuffer, long long param2, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped, long long param5) {
    return WriteFile(hFile, lpBuffer, (DWORD)param2, lpNumberOfBytesWritten, lpOverlapped);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406024(long long param0, long long param1) {
    long long v0;
    char v1;
    long long v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    long long v12;
    long long v13;
    long long result;
    long long v14 = (unsigned long long)((unsigned long long)&v0 < 0x100L) | ((unsigned long long)1 << 1) | ((unsigned long long)__parity__((unsigned char)&v1) << 2) | ((unsigned long long)0 << 3) | ((unsigned long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)&v0 ^ 0x100L) ^ (long long)&v1) >>> 4L) & 0x1L) << 4) | ((unsigned long long)0 << 5) | ((unsigned long long)(&v2 == 264L) << 6) | ((unsigned long long)((long long)&v1 < 0L) << 7) | ((unsigned long long)v4 << 8) | ((unsigned long long)v5 << 9) | ((unsigned long long)0 << 10) | ((unsigned long long)((long long)(long long*)((long long)(long long*)((long long)&v0 ^ (long long)&v1) & (long long)(long long*)((long long)&v0 ^ 0x100L)) < 0L) << 11) | ((unsigned long long)v6 << 12) | ((unsigned long long)v7 << 14) | ((unsigned long long)0 << 15) | ((unsigned long long)v8 << 18) | ((unsigned long long)v10 << 19) | ((unsigned long long)v9 << 20) | ((unsigned long long)v11 << 21) | ((unsigned long long)0L << 22);
    sub_41633B(&v3);
    result(v12, v13);
    sub_4162C8(&v3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_407170(long long param0, long long param1, int param2) {
    if(param0 >= 0L && gvar_446460 > param0 && param1 >= 0L && gvar_446458 > param1) {
        unsigned long long v0 = gvar_446440;
        long long v1 = (long long)param2 + v0;
        long long v2 = (v1 < 0L ? 0L: v1) <= 14L ? v1 < 0L ? 0L: v1: 14L;
        gvar_446440 = (v1 < 0L ? 0L: v1) <= 14L ? v1 < 0L ? 0L: v1: 14L;
        sub_406570(((param0 << ((unsigned long long)((unsigned int)v0 + (v0 ? 1: 0)) & 0x3fL)) - (param0 << ((unsigned long long)((unsigned int)v2 + (v1 <= 0L ? 0: 1)) & 0x3fL))) >> (v2 & 0x3fL), ((param1 << (v0 & 0x3fL)) - (param1 << (v2 & 0x3fL))) >> (v2 & 0x3fL));
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407200(long long param0, long long param1, unsigned long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    int v2;
    int v3;
    int v4;
    int v5;
    void* ptr0;
    int v6;
    int v7;
    long long v8;
    long long v9;
    int v10;
    int v11;
    long long v12;
    long long v13;
    long long v14 = v12;
    if((unsigned int)param1 <= 517) {
        if((unsigned int)param1 > 0x1ff) {
            if((unsigned int)((unsigned int)param1 - 0x200) > 5) {
                return sub_402C0F(param0, param1, (long long)param2, param3);
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 0) {
                v4 = (unsigned int)param3 >>> 16;
                result = (unsigned long long)((unsigned int)param2 & 0x1);
                if(((unsigned int)param2 & 0x1)) {
                    sub_406E60((long long)v4, (long long)(unsigned int)(param3 & 0xFFFFL));
                    v9 & 0xFFFFFFFFL = (unsigned int)(param3 & 0xFFFFL);
                    v3 = (unsigned int)(param3 & 0xFFFFL) + 1;
                    (v9 >>> 32L) & 0xFFFFFFFFL = v4;
                loc_407351:
                    v5 = v3;
                    v11 = v4 + 1;
                    result = 0L;
                    sub_402CC5(param0, (long long)&v9, 0L, 1L);
                }
                else if(!((unsigned int)param2 & 0x2)) {
                loc_407325:
                    result = 0L;
                }
                else {
                    sub_4066A0((long long)v4, (long long)(unsigned int)(param3 & 0xFFFFL));
                    sub_402CC5(param0, 0L, 0L, 1L);
                }
                return result;
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 1) {
                sub_402D08(param0);
                v4 = (unsigned int)param3 >>> 16;
                sub_4065D0((long long)v4, (long long)(unsigned int)(param3 & 0xFFFFL), v13, v8);
                v9 & 0xFFFFFFFFL = (unsigned int)(param3 & 0xFFFFL);
                v3 = (unsigned int)(param3 & 0xFFFFL) + 1;
                (v9 >>> 32L) & 0xFFFFFFFFL = v4;
                goto loc_407351;
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 2) {
                gvar_4464A1 = 0;
                result = 0L;
                sub_402CE8();
                return result;
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 3) {
                return sub_402C0F(param0, param1, (long long)param2, param3);
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 4) {
                v0 = param3;
                unsigned long long v15 = (unsigned long long)sub_402C52();
                gvar_4463F0 = v15;
                sub_402D08(param0);
                long long v16 = sub_402C92(0L, 32646L, v13, v8);
                sub_402D1B(v16);
                gvar_4464A1 = 1;
                gvar_446428 = (unsigned long long)(unsigned short)v0;
                gvar_446430 = (unsigned long long)((unsigned int)v0 >>> 16);
                gvar_446420 = gvar_446480;
                gvar_446418 = gvar_446470;
                goto loc_407404;
            }
            else if(((param1 - 0x200L) & 0xFFFFFFFFL) == 5) {
                unsigned long long v17 = gvar_4463F0;
                gvar_4464A1 = 0;
                result = 0L;
                sub_402D1B((long long)v17);
                sub_402CE8();
                return result;
            }
            else {
                throw 0;
                unsigned long long v17 = gvar_4463F0;
                gvar_4464A1 = 0;
                result = 0L;
                sub_402D1B((long long)v17);
                sub_402CE8();
                return result;
            }
        }
        else if((unsigned int)param1 == 15) {
            sub_402BEF(param0, (long long)&v9, (long long)param2, param3);
            long long v18 = 0L;
            int v19 = v6 - v10;
            long long v20 = (long long)v10 + gvar_446480;
            unsigned long long v21 = gvar_446448;
            int v22 = v7 - v11;
            int v23 = v19;
            int v24 = v22;
            long long v25 = (long long)v11 + gvar_446470;
            int v26 = v20 > 0L ? 0: 0 - (unsigned int)v20;
            long long v27 = (long long)(v21 - v25);
            unsigned long long v28 = gvar_446450;
            int v29 = v25 > 0L ? 0: 0 - (unsigned int)v25;
            long long v30 = (long long)(v28 - v20);
            int v31 = (long long)v22 >= v27 ? (unsigned int)v27: v22;
            int v32 = (long long)v19 >= v30 ? (unsigned int)v30: v19;
            HDC hdc = (HDC)sub_402D81(v9);
            long long v33 = sub_402D71(v9, (unsigned long long)v24, (unsigned long long)v23, v8);
            long long v34 = v33;
            sub_402DBA((long long)hdc, v33, v13, v8);
            sub_402C42((long long)hdc, (long long)&v18, 11L, v8);
            sub_402C42((long long)hdc, (long long)&v29, 12L, v8);
            int y = v26;
            if(y < v32) {
                v2 = v11;
                v1 = (unsigned long long)v10;
                long long v35 = (long long)y;
                do {
                    int x = v29;
                    if(x < v31) {
                        long long v36 = (long long)x;
                        do {
                            long long v37 = (long long)(unsigned int)v1 + gvar_446480 + v35;
                            long long v38 = (long long)v2 + gvar_446470 + v36;
                            if(((*(long long*)(((gvar_446448 >> 3) * (v37 >> 3) + (v38 >> 3)) * 8L + gvar_446408) >>> ((unsigned long long)(((unsigned int)((unsigned long long)0 | ((unsigned long long)(v37 & 0x1fffffffffffffffL) << 3)) & 0x38) | ((unsigned int)v38 & 0x7)) % 64L)) & 0x1L)) {
                                v0 = v36;
                                SetPixel(hdc, x, y, 0);
                                v1 = (unsigned long long)v10;
                                v2 = v11;
                                v36 = v0;
                            }
                            ++x;
                            ++v36;
                        }
                        while(x < v31);
                    }
                    ++y;
                    ++v35;
                }
                while(y < v32);
            }
            else {
                v1 = (unsigned long long)v10;
                v2 = v11;
            }
            sub_402D61(v9, (unsigned long long)v2, v1, (unsigned long long)v24, (unsigned long long)v23, (long long)hdc, 0L, 0L, 0xcc0020L, (long long)ptr0);
            sub_402DA7(v34);
            result = 0L;
            sub_402D94((long long)hdc);
            sub_406D30();
            sub_414FC0(4481120L, 0x100L, 0x446260L);
            sub_402D2E(param0, 4481120L, v13, v8);
            sub_402C32(param0, (long long)&v9, v13, v8);
            return result;
        }
        else if((unsigned int)param1 < 15) {
            if((unsigned int)param1 == 2) {
                result = 0L;
                sub_402CB2(0L);
                return result;
            }
            else if((unsigned int)param1 != 5) {
                return sub_402C0F(param0, param1, (long long)param2, param3);
            }
            result = 0L;
            gvar_446458 = (unsigned long long)(param3 & 0xFFFFL);
            gvar_446460 = (unsigned long long)(unsigned short)(param3 >>> 16L);
            sub_4064D0();
            return result;
        }
        else if((unsigned int)param1 == 258) {
            switch(param2) {
                case 9: 
                case 32: 
                case 115: {
                    goto loc_4077EA;
                }
                case 116: {
                    param3 = (unsigned long long)((unsigned int)param3 & 0x20000000);
                    unsigned long long v39 = gvar_446438;
                    result = param3;
                    if(!(unsigned int)param3) {
                        gvar_446438 = v39 + 1L;
                        return result;
                    }
                    else if((long long)v39 > 1L) {
                        gvar_446438 = (long long)(v39 - 1L);
                        goto loc_407325;
                    }
                    else {
                        gvar_446438 = 1L;
                        return 0L;
                    }
                }
                case 13: {
                    break;
                }
                default: {
                    goto loc_407325;
                }
            }
            v9 & 0xFFFFFFFFL = 60;
            long long v40 = sub_402C82(param0, (long long)&v9, 13L, param3);
            if((unsigned int)v40 && v5 == 3) {
                sub_402CF8(param0, 0x112L, 61728L, 0L);
                return 0L;
            }
            sub_402CF8(param0, 0x112L, 0xf030L, 0L);
            goto loc_407325;
        }
        else if((unsigned int)((unsigned int)param1 - 0x111) > 1) {
            return sub_402C0F(param0, param1, (long long)param2, param3);
        }
        else if((param2 & 0xfffffffffffffff0L) == 16L) {
            result = 0L;
            sub_402CA2(param0, "Apelife\r\nCosmopolitan C Library\r\nαcτµαlly pδrταblε εxεcµταblε\r\nBy Justine Tunney <jtunney@gmail.com>\r\nIn memory of John Horton Conway, 1937-2020\r\nhttps://github.com/jart/cosmopolitan\r\n\r\n- Hold space to animate\r\n- Hold left mouse to draw cells\r\n- Hold right mouse to move view\r\n- Press t or alt+t to adjust speed", "Conway\'s Game of Life", 64L);
            return result;
        }
        else if((param2 & 0xfffffffffffffff0L) != 32L) {
            return sub_402C0F(param0, param1, (long long)param2, param3);
        }
        else {
            sub_406FA0(param0, param1);
            return 0L;
        }
    loc_4077EA:
        if((unsigned int)(param3 & 0xFFFFL)) {
            long long v41 = gvar_446438;
            int v42 = 0;
            do {
                v12 = 0L;
                if(v41 > 0L) {
                    do {
                        sub_4060A0();
                        ++v12;
                    }
                    while(v12 != v41);
                }
                ++v42;
            }
            while((unsigned int)(param3 & 0xFFFFL) != v42);
        }
    loc_407404:
        sub_402CC5(param0, 0L, 0L, 1L);
        result = 0L;
    }
    else {
        result = sub_402C0F(param0, param1, (long long)param2, param3);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_408A60(long long param0, long long param1, char* param2, long long $rcx$15, long long $r8d$1, unsigned long long $r9) {
    long long v0;
    char* result = param2;
    if($r8d$1 > 1L && $rcx$15 > 0L) {
        char* $rsi1 = param2;
        long long v1 = 0L;
        do {
            ++v1;
            sub_4097E0((unsigned long long)$r8d$1, $rsi1, (char*)&gvar_447FF0, $rcx$15, $r8d$1, $r9);
            $rsi1 = &$rsi1[v0];
        }
        while($rcx$15 != v1);
    }
    return result;
}

long long sub_409270(long long $rdi$4, long long $rsi, long long $rdx$3, long long $rcx$4, long long $r8, long long $r9, long long par08, long long par10, char* par18) {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40AFA0(int param0, long long param1) {
    long long result;
    long long v0 = (unsigned long long)*(int*)(param1 + 16L);
    if(*(unsigned int*)(param1 + 16L) < *(unsigned int*)(param1 + 32L)) {
        long long v1 = *(long long*)(param1 + 24L);
        *(int*)(param1 + 16L) = (unsigned int)v0 + 1;
        *(char*)(v0 + v1) = (unsigned char)param0;
        if(*(int*)(param1 + 16L) != *(int*)(param1 + 32L)) {
            char v2 = *(char*)param1;
            if(v2 == 2 || (param0 == 10 && v2 == 1)) {
                result = *(long long*)(param1 + 48L);
                if(result) {
                    result((v0 + 1L) & 0xFFFFFFFFL, v1);
                    return result;
                }
            }
        }
        else {
            result = *(long long*)(param1 + 48L);
            if(!result) {
                *(int*)(param1 + 16L) = 0;
            }
            else {
                result((v0 + 1L) & 0xFFFFFFFFL, v1);
            }
        }
        return result;
    }
    return sub_40AD90(param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40B050(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result = sub_410F70((long long)*(int*)(param0 + 12L), *(long long*)(param0 + 24L), (long long)*(int*)(param0 + 32L), param3, param4, param5);
    if(result == -1L) {
        result = sub_40B0B0(param0);
    }
    else if(result) {
        *(int*)(param0 + 16L) = 0;
        *(int*)(param0 + 20L) = (unsigned int)result;
    }
    else {
        result = sub_40AD90(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40B8D0(long long $rdi1, long long $rsi$1, long long $edx) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    char v5;
    long long result1;
    long long v6;
    long long $ecx;
    long long $rdi2 = (long long)sub_40B7A0($rdi1, $rsi$1, $edx);
    long long v7 = v6;
    long long v8 = v1;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = v4;
    *(int*)&v5 = 1;
    char* ptr0 = sub_41576B($rdi2, 61L, $edx, $ecx);
    if(ptr0) {
        unsigned long long* ptr1 = gvar_448018;
        long long* ptr2 = (long long*)((long long)(long long*)(ptr0 + 1L) - $rdi2);
        char* ptr3 = *ptr1;
        unsigned long long* ptr4 = ptr1;
        if(ptr3) {
            long long v12 = 0L;
            v0 = 0L;
        loc_40B85D:
            result = sub_414C00(ptr3, (char*)$rdi2, (long long)((long long)ptr2 & 0xFFFFFFFFL));
            while((unsigned int)result) {
                v0 = ((v12 + 1L) & 0xFFFFFFFFL) * 8L;
                ptr3 = *(char**)(v0 + (long long)ptr4);
                if(ptr3) {
                    v12 = (v12 + 1L) & 0xFFFFFFFFL;
                    goto loc_40B85D;
                }
                else if((unsigned int)((unsigned int)v12 + 2) > 0x1ff) {
                    sub_40B701();
                    sub_402B21();
                    return result;
                }
                else {
                    *ptr4 = 0L;
                    sub_40B701();
                    *(char**)(gvar_448018 + v0) = (char*)$rdi2;
                    return result1;
                }
            }
            if(v5) {
                sub_40B701();
                *(char**)(gvar_448018 + v0) = (char*)$rdi2;
                return result1;
            }
            sub_40B701();
        }
        else {
            v0 = 0L;
            *ptr4 = 0L;
            sub_40B701();
            *(char**)(gvar_448018 + v0) = (char*)$rdi2;
        }
        return result1;
    }
    sub_40B701();
    sub_402B21();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40B940(long long param0) {
    unsigned long long v0;
    long long* ptr0;
    long long* ptr1;
    unsigned long long v1;
    unsigned long long* ptr2;
    int v2;
    int v3;
    unsigned long long* ptr3;
    long long v4;
    long long* ptr4;
    long long v5;
    long long v6;
alab1:
    while(1) {
        ptr2 = ptr2 - 1;
        *ptr2 = ptr3;
        ptr3 = ptr2;
        --ptr2;
        *ptr2 = (unsigned long long)v3 | ((unsigned long long)v2 << 32);
        --ptr2;
        *ptr2 = v4;
        --ptr2;
        *ptr2 = ptr4;
        --ptr2;
        *ptr2 = v5;
        --ptr2;
        *ptr2 = v6;
        v6 = param0;
        ptr2 -= 3;
        long long* ptr5 = *(unsigned long long*)(param0 + 0x388L);
        if(ptr5) {
            unsigned long long v7 = (unsigned long long)*(int*)(ptr5 + 3);
            v3 = *(int*)(ptr5 + 3) & 0x1;
            v2 = 0;
            if(v3 && !((unsigned int)v7 & 0x8)) {
                param0 = *ptr5;
                v4 = *ptr5;
                if(((unsigned char)param0 & 0xf)) {
                    v4 = (unsigned long long)((0 - ((unsigned int)param0 + 16)) & 0xf) + param0;
                }
                v7 = *(unsigned long long*)(v4 + 8L);
                if(((unsigned int)v7 & 0x3) == 1) {
                    v5 = *(ptr5 + 1);
                    ptr4 = (long long*)(v7 & 0xfffffffffffffff8L);
                    if((unsigned long long)(long long*)((long long)(long long*)(v7 & 0xfffffffffffffff8L) + v4) >= (unsigned long long)(param0 - 80L)) {
                        *(long long*)(ptr3 - 7) = *(ptr5 + 2);
                        if(*(long long*)(v6 + 32L) != v4) {
                            unsigned long long v8 = *(unsigned long long*)(v4 + 24L);
                            unsigned long long v9 = *(unsigned long long*)(v4 + 48L);
                            if(v8 != v4) {
                                unsigned long long v10 = *(unsigned long long*)(v4 + 16L);
                                if(*(unsigned long long*)(v6 + 24L) > v10 || *(long long*)(v10 + 24L) != v4 || *(long long*)(v8 + 16L) != v4) {
                                    goto loc_402A0C;
                                }
                                else {
                                    *(unsigned long long*)(v10 + 24L) = v8;
                                    *(unsigned long long*)(v8 + 16L) = v10;
                                    goto loc_40BA2B;
                                }
                            }
                            else {
                                v1 = *(unsigned long long*)(v4 + 40L);
                                ptr1 = (long long*)(v4 + 40L);
                                if(v1) {
                                    goto loc_40BC20;
                                }
                                else {
                                    v1 = *(unsigned long long*)(v4 + 32L);
                                }
                            }
                            if(v1) {
                                ptr1 = (long long*)(v4 + 32L);
                            loc_40BC20:
                                do {
                                    ptr0 = ptr1;
                                    v8 = v1;
                                    ptr1 = (long long*)(v1 + 40L);
                                    v1 = *(unsigned long long*)(v1 + 40L);
                                    if(v1) {
                                        goto loc_40BC20;
                                    }
                                    else {
                                        v1 = *(unsigned long long*)(v8 + 32L);
                                        ptr1 = (long long*)(v8 + 32L);
                                    }
                                }
                                while(v1);
                                if(*(unsigned long long*)(v6 + 24L) > (unsigned long long)ptr0) {
                                    goto loc_402A0C;
                                }
                                else {
                                    *ptr0 = 0L;
                                loc_40BA2B:
                                    if(!v9) {
                                        goto loc_40BAA6;
                                    }
                                    else {
                                        long long v11 = (unsigned long long)*(int*)(v4 + 56L) * 8L + v6;
                                        if(*(long long*)(v11 + 600L) != v4) {
                                            goto loc_40BA42;
                                        }
                                        else {
                                            *(unsigned long long*)(v11 + 600L) = v8;
                                            v0 = *(unsigned long long*)(v6 + 24L);
                                            goto loc_40BA65;
                                        }
                                    }
                                }
                            }
                            if(v9) {
                                long long v12 = (unsigned long long)*(int*)(v4 + 56L);
                                v8 = 0L;
                                long long v13 = v12 * 8L + v6;
                                if(*(long long*)(v13 + 600L) == v4) {
                                    *(long long*)(v13 + 600L) = 0L;
                                    *(int*)(v6 + 4L) = (__rol__(-2, v12 & 0x1fL)) & *(int*)(v6 + 4L);
                                }
                                else {
                                loc_40BA42:
                                    v0 = *(unsigned long long*)(v6 + 24L);
                                    if(v0 > v9) {
                                        goto loc_402A0C;
                                    }
                                    else {
                                        if(*(long long*)(v9 + 32L) != v4) {
                                            *(unsigned long long*)(v9 + 40L) = v8;
                                        }
                                        else {
                                            *(unsigned long long*)(v9 + 32L) = v8;
                                        }
                                        if(v8) {
                                        loc_40BA65:
                                            if(v0 > v8) {
                                                goto loc_402A0C;
                                            }
                                            else {
                                                unsigned long long v14 = *(unsigned long long*)(v4 + 32L);
                                                *(unsigned long long*)(v8 + 48L) = v9;
                                                if(v14) {
                                                    if(v0 > v14) {
                                                        goto loc_402A0C;
                                                    }
                                                    else {
                                                        *(unsigned long long*)(v8 + 32L) = v14;
                                                        *(unsigned long long*)(v14 + 48L) = v8;
                                                    }
                                                }
                                                unsigned long long v15 = *(unsigned long long*)(v4 + 40L);
                                                if(v15) {
                                                    if(v0 > v15) {
                                                        goto loc_402A0C;
                                                    }
                                                    else {
                                                        *(unsigned long long*)(v8 + 40L) = v15;
                                                        *(unsigned long long*)(v15 + 48L) = v8;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            *(long long*)(v6 + 32L) = 0L;
                            *(long long*)(v6 + 8L) = 0L;
                        }
                    loc_40BAA6:
                        --ptr2;
                        *ptr2 = &loc_40BAAB;
                        long long v16 = /*BAD_CALL!*/ sub_40F560(param0, v5);
                        if((unsigned int)v16) {
                            long long* ptr6 = (long long*)0x258;
                            long long* ptr7 = (long long*)((long long)ptr4 >>> 8);
                            ptr0 = (long long*)((long long)ptr7 & 0xFFFFFFFFL);
                            long long* ptr8 = (long long*)((long long)ptr7 & 0xFFFFFFFFL);
                            if((unsigned int)ptr7) {
                                if((unsigned int)ptr7 <= 0xffff) {
                                    if((unsigned int)ptr7 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)ptr7 >>> i); --i) {
                                        }
                                        ptr7 = (unsigned long long)i | ((unsigned long long)(unsigned int)(long long*)((long long)ptr7 >>> 32L) << 32);
                                    }
                                    ptr0 = (long long*)(((unsigned long long)(31 - ((unsigned int)ptr7 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(long long*)((long long)ptr4 >>> ((unsigned long long)(38 - ((unsigned int)ptr7 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xFFFFFFFFL);
                                    ptr8 = (long long*)(((unsigned long long)(31 - ((unsigned int)ptr7 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(long long*)((long long)ptr4 >>> ((unsigned long long)(38 - ((unsigned int)ptr7 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xFFFFFFFFL);
                                    ptr6 = (long long*)((long long)ptr0 * 8L) + 75;
                                    v3 = 1 << (long long)(long long*)((long long)ptr8 & 0x1fL);
                                    v2 = 0;
                                }
                                else {
                                    v3 = 0x80000000;
                                    v2 = 0;
                                    ptr6 = (long long*)0x350;
                                    ptr8 = (long long*)0x1F;
                                    ptr0 = (long long*)0x1F;
                                }
                            }
                            int v17 = *(int*)(v6 + 4L);
                            *(int*)(v4 + 56L) = (unsigned int)ptr8;
                            *(long long*)(v4 + 40L) = 0L;
                            *(long long*)(v4 + 32L) = 0L;
                            if((v17 & v3)) {
                                v7 = *(unsigned long long*)((long long*)((long long)(long long*)((long long)ptr0 * 8L) + v6) + 75);
                                ptr0 = ptr4;
                                if((unsigned int)ptr8 != 31) {
                                    ptr0 = (long long*)((long long)ptr0 << ((unsigned long long)(57 - ((unsigned int)ptr8 >>> 1)) & 0x3fL));
                                }
                                while((*(long long*)(v7 + 8L) & 0xfffffffffffffff8L) != ptr4) {
                                    long long* ptr9 = ptr0;
                                    ptr0 = (long long*)((long long)ptr0 * 2L);
                                    unsigned long long v18 = *(unsigned long long*)((long long)(long long*)((long long)(long long*)(4L - (long long)(long long*)((long long)ptr9 >> 63)) * 8L) + v7);
                                    if(v18) {
                                        v7 = v18;
                                    }
                                    else if((unsigned long long)(long long*)((long long)(long long*)((long long)(long long*)(4L - (long long)(long long*)((long long)ptr9 >> 63)) * 8L) + v7) < *(unsigned long long*)(v6 + 24L)) {
                                        goto loc_402A0C;
                                    }
                                    else {
                                        *(long long*)((long long)(long long*)((long long)(long long*)(4L - (long long)(long long*)((long long)ptr9 >> 63)) * 8L) + v7) = v4;
                                        *(unsigned long long*)(v4 + 48L) = v7;
                                        *(long long*)(v4 + 24L) = v4;
                                        *(long long*)(v4 + 16L) = v4;
                                        break alab1;
                                    }
                                }
                                unsigned long long v19 = *(unsigned long long*)(v7 + 16L);
                                ptr8 = *(unsigned long long*)(v6 + 24L);
                                if((v19 < (unsigned long long)ptr8 || (unsigned long long)ptr8 > v7)) {
                                loc_402A0C:
                                    --ptr2;
                                    *ptr2 = &loc_402A11;
                                    /*NO_RETURN*/ sub_401114();
                                }
                                *(long long*)(v19 + 24L) = v4;
                                *(long long*)(v7 + 16L) = v4;
                                *(unsigned long long*)(v4 + 16L) = v19;
                                *(unsigned long long*)(v4 + 24L) = v7;
                                *(long long*)(v4 + 48L) = 0L;
                            }
                            else {
                                *(int*)(v6 + 4L) = v17 | v3;
                                *((long long*)((long long)(long long*)((long long)ptr0 * 8L) + v6) + 75) = v4;
                                *(unsigned long long*)(v4 + 48L) = (long long*)((long long)ptr6 + v6);
                                *(long long*)(v4 + 24L) = v4;
                                *(long long*)(v4 + 16L) = v4;
                            }
                        }
                        else {
                            long long v20 = *(long long*)(ptr3 - 7);
                            *(long long*)(v6 + 856L) = *(long long*)(v6 + 856L) - v5;
                            *(long long*)(v6 + 0x388L) = v20;
                        }
                    }
                }
            }
        }
        break;
    }
    *(long long*)(v6 + 56L) = 128L;
    jump *(long long*)(ptr2 + 9);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40BEA0(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    unsigned long long v3;
    long long v4;
    long long v5;
    unsigned long long v6;
    long long v7;
    unsigned long long v8;
    long long v9;
    long long v10;
    unsigned long long* ptr0;
    unsigned long long v11;
    long long v12;
    while(1) {
        unsigned long long* ptr1 = ptr1 - 1;
        *ptr1 = ptr0;
        ptr0 = ptr1;
        --ptr1;
        *ptr1 = v11;
        --ptr1;
        *ptr1 = v12;
        v12 = param0;
        param0 = param1;
        param1 += param2;
        char v13 = (unsigned char)*(long long*)(param0 + 8L);
        if(v13 & 0x1) {
            v6 = *(unsigned long long*)(v12 + 24L);
        loc_40BFB7:
            if((unsigned long long)param1 < v6) {
                goto loc_402A1A;
            }
            else {
                v0 = *(long long*)(param1 + 8L);
                if((unsigned char)v0 & 0x2) {
                    *(long long*)(param1 + 8L) = v0 & 0xfffffffffffffffeL;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + param0) = param2;
                loc_40C0EA:
                    v4 = param2 >>> 3;
                    if((unsigned long long)param2 <= 0xffL) {
                        param1 = (long long)*(int*)v12;
                        param2 = (((unsigned long long)0 | ((unsigned long long)(v4 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + v12 + 72L;
                        if(((1 << (v4 & 0x1fL)) & (unsigned int)param1)) {
                            v0 = *(long long*)(param2 + 16L);
                            if((unsigned long long)v0 < v6) {
                                goto loc_402A1A;
                            }
                        }
                        else {
                            *(int*)v12 = (1 << (v4 & 0x1fL)) | (unsigned int)param1;
                            v0 = param2;
                        }
                        *(long long*)(param2 + 16L) = param0;
                        *(long long*)(v0 + 24L) = param0;
                        *(long long*)(param0 + 16L) = v0;
                        *(long long*)(param0 + 24L) = param2;
                        jump *(long long*)(ptr1 + 3);
                    }
                    long long v14 = param2 >>> 8;
                    v4 = v14 & 0xFFFFFFFFL;
                    if(!(unsigned int)v14) {
                        v10 = 1L;
                        v5 = 600L;
                        v7 = v4 & 0xFFFFFFFFL;
                    }
                    else if((unsigned int)v14 <= 0xffff) {
                        if((unsigned int)v14 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v14 >>> i); --i) {
                            }
                            v14 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v14 >>> 32L) << 32);
                        }
                        v7 = ((unsigned long long)(31 - ((unsigned int)v14 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(param2 >>> ((unsigned long long)(38 - ((unsigned int)v14 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xFFFFFFFFL;
                        v4 = ((unsigned long long)(31 - ((unsigned int)v14 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(param2 >>> ((unsigned long long)(38 - ((unsigned int)v14 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xFFFFFFFFL;
                        v5 = v7 * 8L + 600L;
                        v10 = (unsigned long long)(1 << (v4 & 0x1fL));
                    }
                    else {
                        v10 = 0x80000000L;
                        v5 = 848L;
                        v4 = 31L;
                        v7 = 31L;
                    }
                    param1 = (long long)*(int*)(v12 + 4L);
                    *(int*)(param0 + 56L) = (unsigned int)v4;
                    *(long long*)(param0 + 40L) = 0L;
                    *(long long*)(param0 + 32L) = 0L;
                    if(!((unsigned int)v10 & (unsigned int)param1)) {
                        *(int*)(v12 + 4L) = (unsigned int)v10 | (unsigned int)param1;
                        *(long long*)(v7 * 8L + v12 + 600L) = param0;
                        *(long long*)(param0 + 48L) = v12 + v5;
                        *(long long*)(param0 + 24L) = param0;
                        *(long long*)(param0 + 16L) = param0;
                    }
                    else {
                        param1 = *(long long*)(v7 * 8L + v12 + 600L);
                        v5 = param2;
                        if((unsigned int)v4 != 31) {
                            v5 <<= (unsigned long long)(57 - ((unsigned int)v4 >>> 1)) & 0x3fL;
                        }
                        while((*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != param2) {
                            long long v15 = v5;
                            v5 *= 2L;
                            v4 = *(long long*)((4L - (v15 >> 63)) * 8L + param1);
                            if(v4) {
                                param1 = v4;
                            }
                            else {
                                param2 = (4L - (v15 >> 63)) * 8L + param1;
                                if((unsigned long long)param2 < v6) {
                                    goto loc_402A1A;
                                }
                                else {
                                    *(long long*)((4L - (v15 >> 63)) * 8L + param1) = param0;
                                    *(long long*)(param0 + 48L) = param1;
                                    *(long long*)(param0 + 24L) = param0;
                                    *(long long*)(param0 + 16L) = param0;
                                    jump *(long long*)(ptr1 + 3);
                                }
                            }
                        }
                        v0 = *(long long*)(param1 + 16L);
                        if((unsigned long long)param1 < v6 || (unsigned long long)v0 < v6) {
                            goto loc_402A1A;
                        }
                        else {
                            *(long long*)(v0 + 24L) = param0;
                            *(long long*)(param1 + 16L) = param0;
                            *(long long*)(param0 + 16L) = v0;
                            *(long long*)(param0 + 24L) = param1;
                            *(long long*)(param0 + 48L) = 0L;
                        }
                    }
                    jump *(long long*)(ptr1 + 3);
                }
                else {
                    v3 = *(unsigned long long*)(v12 + 32L);
                    if(*(long long*)(v12 + 40L) == param1) {
                        long long v16 = *(long long*)(v12 + 16L) + param2;
                        *(long long*)(v12 + 40L) = param0;
                        *(long long*)(v12 + 16L) = v16;
                        *(long long*)(param0 + 8L) = v16 | 0x1L;
                    }
                    else if(param1 != v3) {
                        v5 = *(long long*)(param1 + 24L);
                        param2 = (long long)((unsigned long long)(v0 & 0xfffffffffffffff8L) + param2);
                        if((unsigned long long)(v0 & 0xfffffffffffffff8L) > 248L) {
                            v11 = *(unsigned long long*)(param1 + 48L);
                            if(param1 != v5) {
                                unsigned long long v17 = *(unsigned long long*)(param1 + 16L);
                                if(v17 < v6 || *(long long*)(v17 + 24L) != param1 || *(long long*)(v5 + 16L) != param1) {
                                    goto loc_402A1A;
                                }
                                else {
                                    *(long long*)(v17 + 24L) = v5;
                                    *(unsigned long long*)(v5 + 16L) = v17;
                                    goto loc_40C037;
                                }
                            }
                            else {
                                v9 = *(long long*)(param1 + 40L);
                                v4 = param1 + 40L;
                                if(v9) {
                                    goto loc_40C408;
                                }
                                else {
                                    v9 = *(long long*)(param1 + 32L);
                                }
                            }
                            if(v9) {
                                v4 = param1 + 32L;
                            loc_40C408:
                                do {
                                    v7 = v4;
                                    v5 = v9;
                                    v4 = v9 + 40L;
                                    v9 = *(long long*)(v9 + 40L);
                                    if(v9) {
                                        goto loc_40C408;
                                    }
                                    else {
                                        v9 = *(long long*)(v5 + 32L);
                                        v4 = v5 + 32L;
                                    }
                                }
                                while(v9);
                                if(v6 > (unsigned long long)v7) {
                                    goto loc_402A1A;
                                }
                                else {
                                    *(long long*)v7 = 0L;
                                loc_40C037:
                                    if(!v11) {
                                        goto loc_40C0B7;
                                    }
                                    else {
                                        long long v18 = (unsigned long long)*(int*)(param1 + 56L) * 8L + v12;
                                        if(*(long long*)(v18 + 600L) != param1) {
                                            goto loc_40C050;
                                        }
                                        else {
                                            *(long long*)(v18 + 600L) = v5;
                                            goto loc_40C06E;
                                        }
                                    }
                                }
                            }
                            if(v11) {
                                long long v19 = (long long)*(int*)(param1 + 56L);
                                v5 = 0L;
                                long long v20 = v19 * 8L + v12;
                                if(*(long long*)(v20 + 600L) == param1) {
                                    *(long long*)(v20 + 600L) = 0L;
                                    *(int*)(v12 + 4L) = (__rol__(-2, v19 & 0x1fL)) & *(int*)(v12 + 4L);
                                }
                                else {
                                loc_40C050:
                                    if(v6 > v11) {
                                        goto loc_402A1A;
                                    }
                                    else {
                                        if(*(long long*)(v11 + 32L) != param1) {
                                            *(long long*)(v11 + 40L) = v5;
                                        }
                                        else {
                                            *(long long*)(v11 + 32L) = v5;
                                        }
                                        if(v5) {
                                        loc_40C06E:
                                            if((unsigned long long)v5 < v6) {
                                                goto loc_402A1A;
                                            }
                                            else {
                                                unsigned long long v21 = *(unsigned long long*)(param1 + 32L);
                                                *(unsigned long long*)(v5 + 48L) = v11;
                                                if(v21) {
                                                    if(v21 < v6) {
                                                        goto loc_402A1A;
                                                    }
                                                    else {
                                                        *(unsigned long long*)(v5 + 32L) = v21;
                                                        *(long long*)(v21 + 48L) = v5;
                                                    }
                                                }
                                                unsigned long long v22 = *(unsigned long long*)(param1 + 40L);
                                                if(v22) {
                                                    if(v22 < v6) {
                                                        goto loc_402A1A;
                                                    }
                                                    else {
                                                        *(unsigned long long*)(v5 + 40L) = v22;
                                                        *(long long*)(v22 + 48L) = v5;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            goto loc_40C0B7;
                        }
                        else {
                            v8 = *(unsigned long long*)(param1 + 16L);
                            v7 = (((unsigned long long)0 | ((unsigned long long)((long long)((unsigned long long)(v0 & 0xfffffffffffffff8L) >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + v12 + 72L;
                            if(v8 == v7) {
                                if(v8 != v5) {
                                    goto loc_40C53D;
                                }
                                else {
                                    goto loc_40C216;
                                }
                            }
                        }
                        if(v8 < v6 || *(long long*)(v8 + 24L) != param1) {
                            goto loc_402A1A;
                        }
                        else {
                            if(v8 != v5) {
                                if(v5 != v7) {
                                loc_40C53D:
                                    if((unsigned long long)v5 < v6 || *(long long*)(v5 + 16L) != param1) {
                                        goto loc_402A1A;
                                    }
                                }
                                *(long long*)(v8 + 24L) = v5;
                                *(unsigned long long*)(v5 + 16L) = v8;
                            }
                            else {
                            loc_40C216:
                                *(int*)v12 = (__rol__(-2, (long long)((unsigned long long)(v0 & 0xfffffffffffffff8L) >>> 3) & 0x1fL)) & *(int*)v12;
                            }
                        loc_40C0B7:
                            *(long long*)(param0 + 8L) = param2 | 0x1L;
                            *(long long*)(param2 + param0) = param2;
                            if(param0 != v3) {
                                goto loc_40C0EA;
                            }
                            else {
                                *(long long*)(v12 + 8L) = param2;
                                jump *(long long*)(ptr1 + 3);
                            }
                        }
                    }
                    else {
                        param2 += *(long long*)(v12 + 8L);
                        *(long long*)(v12 + 32L) = param0;
                        *(long long*)(v12 + 8L) = param2;
                        *(long long*)(param0 + 8L) = param2 | 0x1L;
                        *(long long*)(param2 + param0) = param2;
                        jump *(long long*)(ptr1 + 3);
                    }
                }
                if(param0 == v3) {
                    *(long long*)(v12 + 32L) = 0L;
                    *(long long*)(v12 + 8L) = 0L;
                }
            }
            jump *(long long*)(ptr1 + 3);
        }
        else {
            v7 = *(long long*)param0;
            param0 -= v7;
            if((v13 & 0x3)) {
                v6 = *(unsigned long long*)(v12 + 24L);
                param2 += v7;
                if((unsigned long long)param0 < v6) {
                    goto loc_402A1A;
                }
                else if(*(long long*)(v12 + 32L) != param0) {
                    v5 = *(long long*)(param0 + 24L);
                    v4 = v7 >>> 3;
                    if((unsigned long long)v7 > 0xffL) {
                        v3 = *(unsigned long long*)(param0 + 48L);
                        if(param0 != v5) {
                            unsigned long long v23 = *(unsigned long long*)(param0 + 16L);
                            if(v23 < v6 || *(long long*)(v23 + 24L) != param0 || *(long long*)(v5 + 16L) != param0) {
                                goto loc_402A1A;
                            }
                            else {
                                *(long long*)(v23 + 24L) = v5;
                                *(unsigned long long*)(v5 + 16L) = v23;
                                goto loc_40BF35;
                            }
                        }
                        else {
                            v2 = *(long long*)(param0 + 40L);
                            v4 = param0 + 40L;
                            if(v2) {
                                goto loc_40C458;
                            }
                            else {
                                v2 = *(long long*)(param0 + 32L);
                            }
                        }
                        if(v2) {
                            v4 = param0 + 32L;
                        loc_40C458:
                            do {
                                v7 = v4;
                                v5 = v2;
                                v4 = v2 + 40L;
                                v2 = *(long long*)(v2 + 40L);
                                if(v2) {
                                    goto loc_40C458;
                                }
                                else {
                                    v2 = *(long long*)(v5 + 32L);
                                    v4 = v5 + 32L;
                                }
                            }
                            while(v2);
                            if(v6 > (unsigned long long)v7) {
                                goto loc_402A1A;
                            }
                            else {
                                *(long long*)v7 = 0L;
                            loc_40BF35:
                                if(!v3) {
                                    goto loc_40BFB7;
                                }
                                else {
                                    long long v24 = (unsigned long long)*(int*)(param0 + 56L) * 8L + v12;
                                    if(*(long long*)(v24 + 600L) != param0) {
                                        goto loc_40BF4E;
                                    }
                                    else {
                                        *(long long*)(v24 + 600L) = v5;
                                        goto loc_40BF6A;
                                    }
                                }
                            }
                        }
                        if(v3) {
                            long long v25 = (long long)*(int*)(param0 + 56L);
                            v5 = 0L;
                            long long v26 = v25 * 8L + v12;
                            if(*(long long*)(v26 + 600L) == param0) {
                                *(long long*)(v26 + 600L) = 0L;
                                *(int*)(v12 + 4L) = (__rol__(-2, v25 & 0x1fL)) & *(int*)(v12 + 4L);
                            }
                            else {
                            loc_40BF4E:
                                if(v6 > v3) {
                                    goto loc_402A1A;
                                }
                                else {
                                    if(*(long long*)(v3 + 32L) != param0) {
                                        *(long long*)(v3 + 40L) = v5;
                                    }
                                    else {
                                        *(long long*)(v3 + 32L) = v5;
                                    }
                                    if(v5) {
                                    loc_40BF6A:
                                        if((unsigned long long)v5 < v6) {
                                            goto loc_402A1A;
                                        }
                                        else {
                                            unsigned long long v27 = *(unsigned long long*)(param0 + 32L);
                                            *(unsigned long long*)(v5 + 48L) = v3;
                                            if(v27) {
                                                if(v27 < v6) {
                                                    goto loc_402A1A;
                                                }
                                                else {
                                                    *(unsigned long long*)(v5 + 32L) = v27;
                                                    *(long long*)(v27 + 48L) = v5;
                                                }
                                            }
                                            unsigned long long v28 = *(unsigned long long*)(param0 + 40L);
                                            if(v28) {
                                                if(v28 < v6) {
                                                    goto loc_402A1A;
                                                }
                                                else {
                                                    *(unsigned long long*)(v5 + 40L) = v28;
                                                    *(long long*)(v28 + 48L) = v5;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        goto loc_40BFB7;
                    }
                    else {
                        unsigned long long v29 = *(unsigned long long*)(param0 + 16L);
                        v7 = (((unsigned long long)0 | ((unsigned long long)(v4 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + v12 + 72L;
                        if(v29 == v7) {
                            if(v29 != v5) {
                                goto loc_40C553;
                            }
                            else {
                                *(int*)v12 = (__rol__(-2, v4 & 0x1fL)) & *(int*)v12;
                                goto loc_40BFB7;
                            }
                        }
                        if(v29 < v6 || *(long long*)(v29 + 24L) != param0) {
                            goto loc_402A1A;
                        }
                        else {
                            if(v29 != v5) {
                                if(v5 != v7) {
                                loc_40C553:
                                    if((unsigned long long)v5 < v6 || *(long long*)(v5 + 16L) != param0) {
                                        goto loc_402A1A;
                                    }
                                }
                                *(long long*)(v29 + 24L) = v5;
                                *(unsigned long long*)(v5 + 16L) = v29;
                            }
                            else {
                                *(int*)v12 = (__rol__(-2, v4 & 0x1fL)) & *(int*)v12;
                            }
                            goto loc_40BFB7;
                        }
                    }
                }
                else {
                    long long v30 = *(long long*)(param1 + 8L);
                    if(((unsigned int)v30 & 0x3) != 3) {
                        goto loc_40BFB7;
                    }
                    else {
                        *(long long*)(v12 + 8L) = param2;
                        *(long long*)(param1 + 8L) = v30 & 0xfffffffffffffffeL;
                        *(long long*)(param0 + 8L) = param2 | 0x1L;
                        *(long long*)param1 = param2;
                        jump *(long long*)(ptr1 + 3);
                    }
                }
            }
            else {
                v1 = param2 + v7 + 32L;
                --ptr1;
                *ptr1 = &loc_40C25D;
                v0 = /*BAD_CALL!*/ sub_40F560(param0, v1);
            }
        }
        if(!(unsigned int)v0) {
            *(long long*)(v12 + 856L) = *(long long*)(v12 + 856L) - v1;
        }
        jump *(long long*)(ptr1 + 3);
    loc_402A1A:
        --ptr1;
        *ptr1 = &loc_402A1F;
        /*NO_RETURN*/ sub_401114();
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40C5F0() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40DCD0(long long param0, long long* param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    unsigned long long v7;
    long long v8;
    long long* ptr0;
    long long* ptr1;
    long long v9;
    unsigned long long v10;
    long long v11;
    long long v12;
    unsigned long long v13;
    unsigned long long* ptr2;
    long long* ptr3;
    long long v14;
    unsigned long long* ptr4;
    long long v15;
    long long v16;
    unsigned long long* ptr5;
    long long* ptr6;
    long long v17;
    char v18;
    long long v19;
    long long v20;
    if(!param0) {
        return;
    }
    ptr4 = ptr5;
    v14 = param0;
    param0 -= 16L;
    ptr5 = &ptr4;
    ptr3 = ptr6;
    ptr2 = &v18;
    v13 = gvar_446718;
    if((unsigned long long)param0 < v13) {
    loc_402A33:
        --ptr2;
        *ptr2 = &loc_402A38;
        /*NO_RETURN*/ sub_401114();
    }
    long long v21 = *(long long*)(v14 - 8L);
    if(((unsigned int)v21 & 0x3) == 1) {
        --ptr2;
        *ptr2 = &loc_402A38;
        /*NO_RETURN*/ sub_401114();
    }
    v12 = v21 & 0xfffffffffffffff8L;
    param1 = (long long*)(v12 + param0);
    if((unsigned int)v21 & 0x1) {
        goto loc_40DD9B;
    }
    else {
        unsigned long long v22 = *(unsigned long long*)(v14 - 16L);
        param0 -= v22;
        if(((unsigned int)v21 & 0x3)) {
            v12 += v22;
            if((unsigned long long)param0 < v13) {
                --ptr2;
                *ptr2 = &loc_402A38;
                /*NO_RETURN*/ sub_401114();
            }
            if(gvar_446720 != param0) {
                v11 = *(long long*)(param0 + 24L);
                if(v22 > 0xffL) {
                    v10 = *(unsigned long long*)(param0 + 48L);
                    if(param0 == v11) {
                        v9 = *(long long*)(param0 + 40L);
                        ptr1 = (long long*)(param0 + 40L);
                        if(v9) {
                            goto loc_40E3B0;
                        }
                        else {
                            v9 = *(long long*)(param0 + 32L);
                            if(v9) {
                                ptr1 = (long long*)(param0 + 32L);
                                goto loc_40E3B0;
                            }
                            else {
                                v11 = 0L;
                                goto loc_40E149;
                            }
                        }
                    }
                    else {
                        unsigned long long v23 = *(unsigned long long*)(param0 + 16L);
                        if(v23 < v13 || *(long long*)(v23 + 24L) != param0 || *(long long*)(v11 + 16L) != param0) {
                            --ptr2;
                            *ptr2 = &loc_402A33;
                            /*NO_RETURN*/ sub_401114();
                            --ptr2;
                            *ptr2 = &loc_402A38;
                            /*NO_RETURN*/ sub_401114();
                        }
                        *(long long*)(v23 + 24L) = v11;
                        *(unsigned long long*)(v11 + 16L) = v23;
                        goto loc_40E149;
                    }
                }
                else {
                    unsigned long long v24 = *(unsigned long long*)(param0 + 16L);
                    if((long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)(long long*)(v22 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748) == v24) {
                        goto loc_40DD7B;
                    }
                    else if(v24 < v13 || *(long long*)(v24 + 24L) != param0) {
                        --ptr2;
                        *ptr2 = &loc_402A33;
                        /*NO_RETURN*/ sub_401114();
                        --ptr2;
                        *ptr2 = &loc_402A38;
                        /*NO_RETURN*/ sub_401114();
                    }
                    else {
                    loc_40DD7B:
                        if(v24 == v11) {
                            gvar_446700 = (unsigned int)((__rol__(-2, (long long)(long long*)((long long)(long long*)(v22 >>> 3) & 0x1fL))) & gvar_446700);
                            goto loc_40DD9B;
                        }
                        else if((long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)(long long*)(v22 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748) == v11) {
                            *(long long*)(v24 + 24L) = v11;
                            *(unsigned long long*)(v11 + 16L) = v24;
                            goto loc_40DD9B;
                        }
                        if((unsigned long long)v11 < v13 || *(long long*)(v11 + 16L) != param0) {
                            --ptr2;
                            *ptr2 = &loc_402A33;
                            /*NO_RETURN*/ sub_401114();
                            --ptr2;
                            *ptr2 = &loc_402A38;
                            /*NO_RETURN*/ sub_401114();
                        }
                        *(long long*)(v24 + 24L) = v11;
                        *(unsigned long long*)(v11 + 16L) = v24;
                        goto loc_40DD9B;
                    loc_40E3B0:
                        do {
                            ptr0 = ptr1;
                            v11 = v9;
                            ptr1 = (long long*)(v9 + 40L);
                            v9 = *(long long*)(v9 + 40L);
                            if(v9) {
                                goto loc_40E3B0;
                            }
                            else {
                                v9 = *(long long*)(v11 + 32L);
                                ptr1 = (long long*)(v11 + 32L);
                            }
                        }
                        while(v9);
                        if(v13 > (unsigned long long)ptr0) {
                            --ptr2;
                            *ptr2 = &loc_402A33;
                            /*NO_RETURN*/ sub_401114();
                        }
                        *ptr0 = 0L;
                    loc_40E149:
                        if(v10) {
                            long long* ptr7 = (long long*)*(int*)(param0 + 56L);
                            if(*(unsigned long long*)((long long)(long long*)((long long)ptr7 * 8L) + (long long)&gvar_446958) == param0) {
                                *(long long*)((long long)(long long*)((long long)(long long*)((char*)ptr7 + 75L) * 8L) + (long long)&gvar_446700) = v11;
                                if(v11) {
                                    goto loc_40E18A;
                                }
                                else {
                                    gvar_446704 = (unsigned int)((__rol__(-2, (long long)(long long*)((long long)ptr7 & 0x1fL))) & gvar_446704);
                                    goto loc_40DD9B;
                                }
                            }
                            else if(v13 > v10) {
                                --ptr2;
                                *ptr2 = &loc_402A33;
                                /*NO_RETURN*/ sub_401114();
                            }
                            else if(*(long long*)(v10 + 32L) != param0) {
                                *(long long*)(v10 + 40L) = v11;
                            }
                            else {
                                *(long long*)(v10 + 32L) = v11;
                            }
                            if(v11) {
                            loc_40E18A:
                                if((unsigned long long)v11 < v13) {
                                    --ptr2;
                                    *ptr2 = &loc_402A33;
                                    /*NO_RETURN*/ sub_401114();
                                }
                                unsigned long long v25 = *(unsigned long long*)(param0 + 32L);
                                *(unsigned long long*)(v11 + 48L) = v10;
                                if(v25) {
                                    if(v25 < v13) {
                                        --ptr2;
                                        *ptr2 = &loc_402A33;
                                        /*NO_RETURN*/ sub_401114();
                                    }
                                    *(unsigned long long*)(v11 + 32L) = v25;
                                    *(long long*)(v25 + 48L) = v11;
                                }
                                unsigned long long v26 = *(unsigned long long*)(param0 + 40L);
                                if(v26) {
                                    if(v26 < v13) {
                                        --ptr2;
                                        *ptr2 = &loc_402A33;
                                        /*NO_RETURN*/ sub_401114();
                                    }
                                    *(unsigned long long*)(v11 + 40L) = v26;
                                    *(long long*)(v26 + 48L) = v11;
                                }
                            }
                        }
                    loc_40DD9B:
                        if((unsigned long long)param1 <= (unsigned long long)param0) {
                            goto loc_402A33;
                        }
                        else {
                            long long v27 = *(param1 + 1);
                            if(!((unsigned char)v27 & 0x1)) {
                                goto loc_402A33;
                            }
                            else {
                                if(!((unsigned char)v27 & 0x2)) {
                                    v10 = gvar_446720;
                                    if(gvar_446728 == param1) {
                                        goto loc_40E268;
                                    }
                                    else if(param1 == v10) {
                                        v12 = (long long)(gvar_446708 + v12);
                                        gvar_446720 = param0;
                                        gvar_446708 = v12;
                                        *(long long*)(param0 + 8L) = v12 | 0x1L;
                                        *(long long*)(v12 + param0) = v12;
                                        jump *(long long*)(ptr2 + 3);
                                    }
                                    else {
                                        v11 = *(param1 + 3);
                                        v12 = (long long)((unsigned long long)(v27 & 0xfffffffffffffff8L) + v12);
                                        if((unsigned long long)(v27 & 0xfffffffffffffff8L) <= 248L) {
                                            goto loc_40E074;
                                        }
                                        else {
                                            ptr6 = *(unsigned long long*)(param1 + 6);
                                            if(param1 == v11) {
                                                v8 = *(param1 + 5);
                                                ptr1 = param1 + 5;
                                                if(v8) {
                                                    goto loc_40E348;
                                                }
                                                else {
                                                    v8 = *(param1 + 4);
                                                    if(v8) {
                                                        ptr1 = param1 + 4;
                                                        goto loc_40E348;
                                                    }
                                                    else {
                                                        v11 = 0L;
                                                        goto loc_40DE2C;
                                                    }
                                                }
                                            }
                                            else {
                                                unsigned long long v28 = *(unsigned long long*)(param1 + 2);
                                                if(v28 < v13 || *(long long*)(v28 + 24L) != param1 || *(long long*)(v11 + 16L) != param1) {
                                                    --ptr2;
                                                    *ptr2 = &loc_402A33;
                                                    /*NO_RETURN*/ sub_401114();
                                                }
                                                *(long long*)(v28 + 24L) = v11;
                                                *(unsigned long long*)(v11 + 16L) = v28;
                                                goto loc_40DE2C;
                                            }
                                        }
                                    }
                                }
                                else {
                                    *(param1 + 1) = v27 & 0xfffffffffffffffeL;
                                    *(long long*)(param0 + 8L) = v12 | 0x1L;
                                    *(long long*)(v12 + param0) = v12;
                                    goto loc_40DED2;
                                loc_40E074:
                                    v7 = *(unsigned long long*)(param1 + 2);
                                    ptr0 = (long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)(long long*)((unsigned long long)(v27 & 0xfffffffffffffff8L) >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748);
                                }
                                if(v7 == ptr0) {
                                    goto loc_40E08C;
                                loc_40E268:
                                    v12 = (long long)(gvar_446710 + v12);
                                    gvar_446728 = param0;
                                    gvar_446710 = v12;
                                    *(long long*)(param0 + 8L) = v12 | 0x1L;
                                }
                                else if(v7 < v13 || *(long long*)(v7 + 24L) != param1) {
                                    --ptr2;
                                    *ptr2 = &loc_402A33;
                                    /*NO_RETURN*/ sub_401114();
                                }
                                else {
                                    goto loc_40E08C;
                                }
                                if(param0 == v10) {
                                    gvar_446720 = 0L;
                                    gvar_446708 = 0L;
                                    goto loc_40E294;
                                loc_40E08C:
                                    if(v7 != v11 && v11 == ptr0) {
                                        *(long long*)(v7 + 24L) = v11;
                                        *(unsigned long long*)(v11 + 16L) = v7;
                                        goto loc_40E0AA;
                                    }
                                    else if(v7 != v11) {
                                        goto loc_40E487;
                                    }
                                }
                                else {
                                loc_40E294:
                                    if(gvar_446730 >= (unsigned long long)v12) {
                                        jump *(long long*)(ptr2 + 3);
                                    }
                                    else {
                                        param1 = NULL;
                                        param0 = &gvar_446700;
                                        ptr6 = ptr3;
                                        ptr5 = ptr4;
                                        ptr2 = &v16;
                                        goto loc_40BD07;
                                    }
                                }
                                gvar_446700 = (unsigned int)((__rol__(-2, (long long)(long long*)((long long)(long long*)((unsigned long long)(v27 & 0xfffffffffffffff8L) >>> 3) & 0x1fL))) & gvar_446700);
                                goto loc_40E0AA;
                            loc_40E487:
                                if((unsigned long long)v11 < v13 || *(long long*)(v11 + 16L) != param1) {
                                    --ptr2;
                                    *ptr2 = &loc_402A33;
                                    /*NO_RETURN*/ sub_401114();
                                }
                                *(long long*)(v7 + 24L) = v11;
                                *(unsigned long long*)(v11 + 16L) = v7;
                                goto loc_40E0AA;
                            loc_40E348:
                                do {
                                    ptr0 = ptr1;
                                    v11 = v8;
                                    ptr1 = (long long*)(v8 + 40L);
                                    v8 = *(long long*)(v8 + 40L);
                                    if(v8) {
                                        goto loc_40E348;
                                    }
                                    else {
                                        v8 = *(long long*)(v11 + 32L);
                                        ptr1 = (long long*)(v11 + 32L);
                                    }
                                }
                                while(v8);
                                if(v13 > (unsigned long long)ptr0) {
                                    --ptr2;
                                    *ptr2 = &loc_402A33;
                                    /*NO_RETURN*/ sub_401114();
                                }
                                *ptr0 = 0L;
                            loc_40DE2C:
                                if(ptr6) {
                                    long long* ptr8 = (long long*)*(int*)(param1 + 7);
                                    if(*(unsigned long long*)((long long)(long long*)((long long)ptr8 * 8L) + (long long)&gvar_446958) == param1) {
                                        *(long long*)((long long)(long long*)((long long)(long long*)((char*)ptr8 + 75L) * 8L) + (long long)&gvar_446700) = v11;
                                        if(v11) {
                                            goto loc_40DE6D;
                                        }
                                        else {
                                            gvar_446704 = (unsigned int)((__rol__(-2, (long long)(long long*)((long long)ptr8 & 0x1fL))) & gvar_446704);
                                            goto loc_40E0AA;
                                        }
                                    }
                                    else if((unsigned long long)ptr6 < v13) {
                                        --ptr2;
                                        *ptr2 = &loc_402A33;
                                        /*NO_RETURN*/ sub_401114();
                                    }
                                    else if(*(ptr6 + 4) != param1) {
                                        *(ptr6 + 5) = v11;
                                    }
                                    else {
                                        *(ptr6 + 4) = v11;
                                    }
                                    if(v11) {
                                    loc_40DE6D:
                                        if((unsigned long long)v11 < v13) {
                                            --ptr2;
                                            *ptr2 = &loc_402A33;
                                            /*NO_RETURN*/ sub_401114();
                                        }
                                        unsigned long long v29 = *(unsigned long long*)(param1 + 4);
                                        *(unsigned long long*)(v11 + 48L) = ptr6;
                                        if(v29) {
                                            if(v29 < v13) {
                                                --ptr2;
                                                *ptr2 = &loc_402A33;
                                                /*NO_RETURN*/ sub_401114();
                                            }
                                            *(unsigned long long*)(v11 + 32L) = v29;
                                            *(long long*)(v29 + 48L) = v11;
                                        }
                                        unsigned long long v30 = *(unsigned long long*)(param1 + 5);
                                        if(v30) {
                                            if(v30 < v13) {
                                                --ptr2;
                                                *ptr2 = &loc_402A33;
                                                /*NO_RETURN*/ sub_401114();
                                            }
                                            *(unsigned long long*)(v11 + 40L) = v30;
                                            *(long long*)(v30 + 48L) = v11;
                                        }
                                    }
                                }
                            loc_40E0AA:
                                *(long long*)(param0 + 8L) = v12 | 0x1L;
                                *(long long*)(v12 + param0) = v12;
                                if(param0 == v10) {
                                    gvar_446708 = v12;
                                    jump *(long long*)(ptr2 + 3);
                                }
                                else {
                                loc_40DED2:
                                    ptr1 = (long long*)(v12 >>> 3);
                                    if((unsigned long long)v12 <= 0xffL) {
                                        param1 = (long long*)gvar_446700;
                                        if(!((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) & (unsigned int)param1)) {
                                            gvar_446700 = (unsigned int)((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) | (unsigned int)param1);
                                            v12 = (((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748;
                                            *(long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + (long long)&gvar_446758) = param0;
                                            *(long long*)(v12 + 24L) = param0;
                                            *(long long*)(param0 + 16L) = v12;
                                            *(long long*)(param0 + 24L) = (((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748;
                                            goto loc_40DF21;
                                        }
                                        else {
                                            v12 = *(long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + (long long)&gvar_446758);
                                            if((unsigned long long)v12 < v13) {
                                                --ptr2;
                                                *ptr2 = &loc_402A33;
                                                /*NO_RETURN*/ sub_401114();
                                            }
                                            *(long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + (long long)&gvar_446758) = param0;
                                            *(long long*)(v12 + 24L) = param0;
                                            *(long long*)(param0 + 16L) = v12;
                                            *(long long*)(param0 + 24L) = (((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr1 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_446748;
                                            jump *(long long*)(ptr2 + 3);
                                        }
                                    }
                                    else {
                                        v6 = v12 >>> 8;
                                        ptr1 = (long long*)(v6 & 0xFFFFFFFFL);
                                        if(!(unsigned int)v6) {
                                            v5 = 1L;
                                            param1 = (long long*)0x258;
                                            goto loc_40DF82;
                                        }
                                    }
                                }
                            }
                        }
                        if((unsigned int)v6 > 0xffff) {
                            v5 = 0x80000000L;
                            param1 = (long long*)0x350;
                            ptr1 = (long long*)0x1F;
                        }
                        else if((unsigned int)v6 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v6 >>> i); --i) {
                            }
                            v6 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v6 >>> 32L) << 32);
                            ptr6 = (long long*)(v12 >>> ((unsigned long long)(38 - ((unsigned int)v6 ^ 0x1f)) & 0x3fL));
                            ptr1 = (long long*)(((unsigned long long)(31 - ((unsigned int)v6 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)ptr6 & 0x1)) & 0xFFFFFFFFL);
                            param1 = (long long*)((long long)(long long*)(((unsigned long long)(31 - ((unsigned int)v6 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)ptr6 & 0x1)) & 0xFFFFFFFFL) * 8L) + 75;
                            v5 = (unsigned long long)(1 << (long long)(long long*)((long long)ptr1 & 0x1fL));
                        }
                        else {
                            ptr6 = (long long*)(v12 >>> ((unsigned long long)(38 - ((unsigned int)v6 ^ 0x1f)) & 0x3fL));
                            ptr1 = (long long*)(((unsigned long long)(31 - ((unsigned int)v6 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)ptr6 & 0x1)) & 0xFFFFFFFFL);
                            param1 = (long long*)((long long)(long long*)(((unsigned long long)(31 - ((unsigned int)v6 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)ptr6 & 0x1)) & 0xFFFFFFFFL) * 8L) + 75;
                            v5 = (unsigned long long)(1 << (long long)(long long*)((long long)ptr1 & 0x1fL));
                        }
                        goto loc_40DF82;
                    }
                }
            }
            else {
                v4 = *(param1 + 1);
            }
            if(((unsigned int)v4 & 0x3) != 3) {
                goto loc_40DD9B;
            }
            else {
                gvar_446708 = v12;
                *(param1 + 1) = v4 & 0xfffffffffffffffeL;
                *(long long*)(param0 + 8L) = v12 | 0x1L;
                *param1 = v12;
                jump *(long long*)(ptr2 + 3);
            }
        }
        else {
            v3 = v12 + v22 + 32L;
            ptr2 = &v15;
            v12 = sub_40F560(param0, v3);
        }
    }
    if(!(unsigned int)v12) {
        gvar_446A58 -= v3;
    }
loc_40DF21:
    jump *(long long*)(ptr2 + 3);
loc_40BD07:
    if((unsigned long long)param1 > 18446744073709551487L) {
        jump *ptr2;
    }
    --ptr2;
    *ptr2 = ptr5;
    ptr5 = ptr2;
    --ptr2;
    *ptr2 = v19;
    --ptr2;
    *ptr2 = v17;
    --ptr2;
    *ptr2 = v20;
    v20 = param0;
    --ptr2;
    *ptr2 = ptr6;
    unsigned long long v31 = *(unsigned long long*)(param0 + 40L);
    if(v31) {
        unsigned long long v32 = *(unsigned long long*)(param0 + 16L);
        param1 += 10;
        if(v32 > (unsigned long long)param1) {
            long long* ptr9 = (long long*)(param0 + 888L);
            ptr6 = (long long*)(param0 + 888L);
            do {
                param0 = *ptr6;
                if(v31 >= (unsigned long long)param0) {
                    unsigned long long v33 = *(unsigned long long*)(ptr6 + 1);
                    unsigned long long v34 = (unsigned long long)(param0 + v33);
                    if(v31 < v34) {
                        long long v35 = (unsigned long long)*(int*)(ptr6 + 3);
                        if(!((unsigned char)v35 & 0x8) && ((unsigned char)v35 & 0x1)) {
                            unsigned long long v36 = gvar_4466D0;
                            v17 = (long long)((long long)(long long*)((char*)((long long)(unsigned long long)(long long*)(v32 + v36 - 1L - (long long)param1) / v36) - 1L) * v36);
                            if(v33 >= (unsigned long long)v17) {
                                while((unsigned long long)param0 > (unsigned long long)ptr9 || v34 <= (unsigned long long)ptr9) {
                                    ptr9 = *(unsigned long long*)(ptr9 + 2);
                                    if(!ptr9) {
                                        long long v37 = v33 - v17;
                                        --ptr2;
                                        *ptr2 = &loc_40BE01;
                                        long long v38 = /*BAD_CALL!*/ sub_40F550();
                                        if(v38 != -1L) {
                                            goto loc_40BE0A;
                                        }
                                        else {
                                            long long v39 = *ptr6 + v37;
                                            --ptr2;
                                            *ptr2 = &loc_40BE87;
                                            v2 = /*BAD_CALL!*/ sub_40F560(v39, v17);
                                        }
                                        if((unsigned int)v2) {
                                            break;
                                        }
                                        else {
                                        loc_40BE0A:
                                            if(!v17) {
                                                break;
                                            }
                                            else {
                                                long long v40 = *(long long*)(v20 + 16L);
                                                long long v41 = *(long long*)(v20 + 40L);
                                                *(ptr6 + 1) = *(ptr6 + 1) - v17;
                                                long long v42 = v40 - v17;
                                                *(long long*)(v20 + 856L) = *(long long*)(v20 + 856L) - v17;
                                                if(((unsigned char)v41 & 0xf)) {
                                                    v1 = (unsigned long long)((0 - ((unsigned int)v41 + 16)) & 0xf) + v41;
                                                    v0 = v42 - (unsigned long long)((0 - ((unsigned int)v41 + 16)) & 0xf);
                                                }
                                                else {
                                                    v0 = v42;
                                                    v1 = v41;
                                                }
                                                *(long long*)(v20 + 16L) = v0;
                                                *(long long*)(v20 + 40L) = v1;
                                                *(long long*)(v1 + 8L) = v0 | 0x1L;
                                                unsigned long long v43 = gvar_4466E0;
                                                *(long long*)(v41 + v42 + 8L) = 80L;
                                                *(unsigned long long*)(v20 + 48L) = v43;
                                                goto loc_40BD76;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        goto loc_40BD70;
                    }
                }
                ptr6 = *(unsigned long long*)(ptr6 + 2);
            }
            while(!ptr6);
            ud2();
            --ptr2;
            *ptr2 = &loc_402A1F;
            /*NO_RETURN*/ sub_401114();
            --ptr2;
            *ptr2 = &loc_402A33;
            /*NO_RETURN*/ sub_401114();
        }
    loc_40BD70:
        v17 = 0L;
    loc_40BD76:
        --ptr2;
        *ptr2 = &loc_40BD7B;
        long long v44 = /*BAD_CALL!*/ sub_40B940(v20);
        if(!(v44 + v17) && *(unsigned long long*)(v20 + 16L) > *(unsigned long long*)(v20 + 48L)) {
            *(long long*)(v20 + 48L) = -1L;
        }
    }
    jump *(long long*)(ptr2 + 5);
loc_40DF82:
    v11 = (long long)gvar_446704;
    *(int*)(param0 + 56L) = (unsigned int)ptr1;
    ptr0 = param1 + 0x88ce0;
    *(long long*)(param0 + 40L) = 0L;
    *(long long*)(param0 + 32L) = 0L;
    if(!((unsigned int)v5 & (unsigned int)v11)) {
        gvar_446704 = (unsigned int)((unsigned int)v5 | (unsigned int)v11);
        *(param1 + 0x88ce0) = param0;
        *(unsigned long long*)(param0 + 48L) = ptr0;
        *(long long*)(param0 + 24L) = param0;
        *(long long*)(param0 + 16L) = param0;
        goto loc_40E029;
    }
    else {
        param1 = *(unsigned long long*)(param1 + 0x88ce0);
        v11 = v12;
    }
    if((unsigned int)ptr1 != 31) {
        ptr1 = (long long*)(57 - ((unsigned int)ptr1 >>> 1));
        v11 <<= (long long)(long long*)((long long)ptr1 & 0x3fL);
        goto loc_40DFF9;
    }
    else {
    loc_40DFF9:
        while((*(param1 + 1) & 0xfffffffffffffff8L) != v12) {
            long long v45 = v11;
            v11 *= 2L;
            ptr1 = *(unsigned long long*)((4L - (v45 >> 63)) * 8L + (long long)param1);
            if(ptr1) {
                param1 = ptr1;
            }
            else if((unsigned long long)((4L - (v45 >> 63)) * 8L + (long long)param1) < v13) {
                --ptr2;
                *ptr2 = &loc_402A33;
                /*NO_RETURN*/ sub_401114();
            }
            else {
                *(long long*)((4L - (v45 >> 63)) * 8L + (long long)param1) = param0;
                *(unsigned long long*)(param0 + 48L) = param1;
                *(long long*)(param0 + 24L) = param0;
                *(long long*)(param0 + 16L) = param0;
                goto loc_40E029;
            }
        }
        v12 = *(param1 + 2);
        if((unsigned long long)param1 < v13 || (unsigned long long)v12 < v13) {
            --ptr2;
            *ptr2 = &loc_402A33;
            /*NO_RETURN*/ sub_401114();
        }
        *(long long*)(v12 + 24L) = param0;
        *(param1 + 2) = param0;
        *(long long*)(param0 + 16L) = v12;
        *(unsigned long long*)(param0 + 24L) = param1;
        *(long long*)(param0 + 48L) = 0L;
    }
loc_40E029:
    --gvar_446738;
    if(gvar_446738) {
        jump *(long long*)(ptr2 + 3);
    }
    else {
        ++ptr2;
        ptr6 = *ptr2;
        ++ptr2;
        ptr5 = *ptr2;
        ++ptr2;
        v12 = /*BAD_CALL!*/ sub_40B940(&gvar_446700);
        v5 = 1L;
        param1 = (long long*)0x258;
        goto loc_40DF82;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E4E0(long long param0, long long* param1, long long param2, long long param3) {
    long long result;
    if(!param0) {
        return sub_40C5F0((long long)param1, (long long)param1, param2, param3);
    }
    else if((unsigned long long)param1 <= 18446744073709551487L) {
        if(param1) {
            long long v0 = sub_40E5D0(&gvar_446700, (long long*)(param0 - 16L), (unsigned long long)param1 <= 14L ? 32L: (unsigned long long)((long long)(long long*)((char*)param1 + 31L) & 0xfffffffffffffff0L));
            if(v0) {
                result = v0 + 16L;
            }
            else {
                result = sub_40C5F0((long long)param1, (long long)param1, param2, param3);
                if(result) {
                    long long v1 = *(long long*)(param0 - 8L);
                    sub_4154C0(param3, (unsigned long long)((v1 & 0xfffffffffffffff8L) - 16L) <= (unsigned long long)param1 ? (unsigned long long)((v1 & 0xfffffffffffffff8L) - 16L): param1);
                    sub_40DCD0(param0, (long long*)param0);
                }
            }
        }
        else {
            sub_40DCD0(param0, NULL);
            result = 0L;
        }
        return result;
    }
    sub_402B8A();
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E5D0(long long param0, long long* param1, unsigned long long param2) {
    long long v0;
    long long* ptr0;
    long long* ptr1;
    long long* ptr2;
    long long* ptr3;
    long long v1;
    long long* ptr4;
    unsigned long long* ptr5;
    long long* ptr6;
    long long v2;
    long long* ptr7;
    while(1) {
        unsigned long long* ptr8 = ptr8 - 1;
        *ptr8 = ptr5;
        ptr5 = ptr8;
        --ptr8;
        *ptr8 = v1;
        --ptr8;
        *ptr8 = ptr6;
        --ptr8;
        *ptr8 = ptr4;
        --ptr8;
        *ptr8 = v2;
        v2 = param0;
        --ptr8;
        *ptr8 = ptr7;
        ptr7 = param1;
        ptr8 -= 3;
        param1 = *(unsigned long long*)(param1 + 1);
        unsigned long long v3 = *(unsigned long long*)(v2 + 24L);
        param0 = (long long)((long long)param1 & 0xfffffffffffffff8L) + (long long)ptr7;
        if((unsigned long long)ptr7 >= v3 && (long long*)((unsigned int)param1 & 0x3) != 1L && (unsigned long long)ptr7 < (unsigned long long)param0) {
            long long* ptr9 = *(unsigned long long*)(param0 + 8L);
            if(((unsigned char)ptr9 & 0x1)) {
                if(!(long long*)((unsigned int)param1 & 0x3)) {
                    if(param2 > 0xffL) {
                        param0 = gvar_4466D0;
                        if(param2 + 8L > (unsigned long long)(long long)((long long)param1 & 0xfffffffffffffff8L) || (unsigned long long)((long long)((long long)param1 & 0xfffffffffffffff8L) - param2) > (unsigned long long)(param0 * 2L)) {
                            long long v4 = *ptr7;
                            long long v5 = (param2 + param0 + 62L) & (0L - param0);
                            *(long long*)(ptr5 - 7) = (long long)((long long)param1 & 0xfffffffffffffff8L) + v4 + 32L;
                            --ptr8;
                            *ptr8 = &loc_40E7EA;
                            long long v6 = /*BAD_CALL!*/ sub_40F550();
                            if(v6 != -1L) {
                                ptr6 = (long long*)(v6 + v4);
                                param1 = *(ptr5 - 7);
                                v0 = v5 - v4;
                                char v7 = *(unsigned long long*)(v2 + 24L) > (unsigned long long)v6;
                                *(ptr6 + 1) = v0 - 32L;
                                *((long long*)(v0 + (long long)ptr6) - 3) = 11L;
                                *((long long*)(v0 + (long long)ptr6) - 2) = 0L;
                                if(v7) {
                                    *(long long*)(v2 + 24L) = v6;
                                }
                                long long* ptr10 = (long long*)(*(long long*)(v2 + 856L) + v5 - (long long)param1);
                                *(unsigned long long*)(v2 + 856L) = (long long*)(*(long long*)(v2 + 856L) + v5 - (long long)param1);
                                if(*(unsigned long long*)(v2 + 864L) < (unsigned long long)ptr10) {
                                    *(unsigned long long*)(v2 + 864L) = ptr10;
                                }
                            }
                        }
                    }
                    jump *(long long*)(ptr8 + 9);
                }
                else if((unsigned long long)(long long)((long long)param1 & 0xfffffffffffffff8L) < param2) {
                    if(*(long long*)(v2 + 40L) == param0) {
                        v0 = (long long)((long long)param1 & 0xfffffffffffffff8L) + *(long long*)(v2 + 16L);
                        if((unsigned long long)v0 > param2) {
                            v0 -= param2;
                            ptr0 = (long long*)(param2 + (long long)ptr7);
                            *(ptr7 + 1) = (unsigned long long)((unsigned int)param1 & 0x1) | param2 | 0x2L;
                            *(ptr0 + 1) = v0 | 0x1L;
                            *(unsigned long long*)(v2 + 40L) = ptr0;
                            *(long long*)(v2 + 16L) = v0;
                        }
                        jump *(long long*)(ptr8 + 9);
                    }
                    else if(*(long long*)(v2 + 32L) == param0) {
                        v0 = (long long)((long long)param1 & 0xfffffffffffffff8L) + *(long long*)(v2 + 8L);
                        if((unsigned long long)v0 >= param2) {
                            ptr0 = (long long*)(v0 + (long long)ptr7);
                            param1 = (long long*)((unsigned int)param1 & 0x1);
                            param0 = v0 - param2;
                            if((unsigned long long)param0 > 31L) {
                                ptr2 = (long long*)(param2 + (long long)ptr7);
                                *(unsigned long long*)(ptr7 + 1) = (long long*)((long long)(long long*)(param2 | (long long)param1) | 0x2L);
                                *(ptr2 + 1) = param0 | 0x1L;
                                *ptr0 = param0;
                                *(ptr0 + 1) = *(ptr0 + 1) & 0xfffffffffffffffeL;
                                *(long long*)(v2 + 8L) = param0;
                                *(unsigned long long*)(v2 + 32L) = ptr2;
                            }
                            else {
                                *(unsigned long long*)(ptr7 + 1) = (long long*)((long long)(long long*)(v0 | (long long)param1) | 0x2L);
                                *(ptr0 + 1) = *(ptr0 + 1) | 0x1L;
                                *(long long*)(v2 + 8L) = 0L;
                                *(long long*)(v2 + 32L) = 0L;
                            }
                        }
                        jump *(long long*)(ptr8 + 9);
                    }
                    else if((unsigned char)ptr9 & 0x2) {
                        jump *(long long*)(ptr8 + 9);
                    }
                    else {
                        ptr9 = (long long*)((long long)ptr9 & 0xfffffffffffffff8L);
                        ptr3 = (long long*)((long long)((long long)param1 & 0xfffffffffffffff8L) + (long long)ptr9);
                        if(param2 > (unsigned long long)ptr3) {
                            jump *(long long*)(ptr8 + 9);
                        }
                        else {
                            ptr2 = *(unsigned long long*)(param0 + 24L);
                            v0 = (long long)((long long)ptr3 - param2);
                            long long* ptr11 = (long long*)((long long)ptr9 >>> 3);
                            if((unsigned long long)ptr9 > 248L) {
                                ptr6 = *(unsigned long long*)(param0 + 48L);
                                if(param0 != ptr2) {
                                    unsigned long long v8 = *(unsigned long long*)(param0 + 16L);
                                    if(v8 < v3 || *(long long*)(v8 + 24L) != param0 || *(ptr2 + 2) != param0) {
                                        goto loc_402A38;
                                    }
                                    else {
                                        *(unsigned long long*)(v8 + 24L) = ptr2;
                                        *(unsigned long long*)(ptr2 + 2) = v8;
                                        goto loc_40E6E8;
                                    }
                                }
                                else {
                                    ptr1 = *(unsigned long long*)(param0 + 40L);
                                    ptr9 = (long long*)(param0 + 40L);
                                    if(ptr1) {
                                        goto loc_40E9F8;
                                    }
                                    else {
                                        ptr1 = *(unsigned long long*)(param0 + 32L);
                                    }
                                }
                                if(ptr1) {
                                    ptr9 = (long long*)(param0 + 32L);
                                loc_40E9F8:
                                    do {
                                        ptr4 = ptr9;
                                        ptr2 = ptr1;
                                        ptr9 = ptr1 + 5;
                                        ptr1 = *(unsigned long long*)(ptr1 + 5);
                                        if(ptr1) {
                                            goto loc_40E9F8;
                                        }
                                        else {
                                            ptr1 = *(unsigned long long*)(ptr2 + 4);
                                            ptr9 = ptr2 + 4;
                                        }
                                    }
                                    while(ptr1);
                                    if(v3 > (unsigned long long)ptr4) {
                                        goto loc_402A38;
                                    }
                                    else {
                                        *ptr4 = 0L;
                                    loc_40E6E8:
                                        if(!ptr6) {
                                            goto loc_40E763;
                                        }
                                        else {
                                            long long v9 = (unsigned long long)*(int*)(param0 + 56L) * 8L + v2;
                                            if(*(long long*)(v9 + 600L) != param0) {
                                                goto loc_40E701;
                                            }
                                            else {
                                                *(unsigned long long*)(v9 + 600L) = ptr2;
                                                goto loc_40E71D;
                                            }
                                        }
                                    }
                                }
                                if(ptr6) {
                                    long long v10 = (unsigned long long)*(int*)(param0 + 56L);
                                    ptr9 = (long long*)(v10 * 8L + v2);
                                    ptr2 = NULL;
                                    if(*(ptr9 + 75) == param0) {
                                        *(ptr9 + 75) = 0L;
                                        *(int*)(v2 + 4L) = (__rol__(-2, v10 & 0x1fL)) & *(int*)(v2 + 4L);
                                    }
                                    else {
                                    loc_40E701:
                                        if(v3 > (unsigned long long)ptr6) {
                                            goto loc_402A38;
                                        }
                                        else {
                                            if(*(ptr6 + 4) != param0) {
                                                *(unsigned long long*)(ptr6 + 5) = ptr2;
                                            }
                                            else {
                                                *(unsigned long long*)(ptr6 + 4) = ptr2;
                                            }
                                            if(ptr2) {
                                            loc_40E71D:
                                                if((unsigned long long)ptr2 < v3) {
                                                    goto loc_402A38;
                                                }
                                                else {
                                                    unsigned long long v11 = *(unsigned long long*)(param0 + 32L);
                                                    *(unsigned long long*)(ptr2 + 6) = ptr6;
                                                    if(v11) {
                                                        if(v11 < v3) {
                                                            goto loc_402A38;
                                                        }
                                                        else {
                                                            *(unsigned long long*)(ptr2 + 4) = v11;
                                                            *(unsigned long long*)(v11 + 48L) = ptr2;
                                                        }
                                                    }
                                                    unsigned long long v12 = *(unsigned long long*)(param0 + 40L);
                                                    if(v12) {
                                                        if(v12 < v3) {
                                                            goto loc_402A38;
                                                        }
                                                        else {
                                                            *(unsigned long long*)(ptr2 + 5) = v12;
                                                            *(unsigned long long*)(v12 + 48L) = ptr2;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                goto loc_40E763;
                            }
                            else {
                                ptr9 = *(unsigned long long*)(param0 + 16L);
                                ptr4 = (long long*)((((unsigned long long)0 | ((unsigned long long)(long long*)((long long)ptr11 & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + v2 + 72L);
                                if(ptr9 == ptr4) {
                                    if(ptr2 != ptr9) {
                                        goto loc_40EA86;
                                    }
                                    else {
                                        goto loc_40E976;
                                    }
                                }
                            }
                            if((unsigned long long)ptr9 < v3 || *(ptr9 + 3) != param0) {
                                goto loc_402A38;
                            }
                            else {
                                if(ptr2 != ptr9) {
                                    if(ptr2 != ptr4) {
                                    loc_40EA86:
                                        if((unsigned long long)ptr2 < v3 || *(ptr2 + 2) != param0) {
                                            goto loc_402A38;
                                        }
                                    }
                                    *(unsigned long long*)(ptr9 + 3) = ptr2;
                                    *(unsigned long long*)(ptr2 + 2) = ptr9;
                                }
                                else {
                                loc_40E976:
                                    *(int*)v2 = (__rol__(-2, (long long)(long long*)((long long)ptr11 & 0x1fL))) & *(int*)v2;
                                }
                            loc_40E763:
                                ptr0 = (long long*)((long long)ptr7 + (long long)ptr3);
                            }
                        }
                    }
                    if((unsigned long long)v0 <= 31L) {
                        *(unsigned long long*)(ptr7 + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)param1 & 0x1) | (long long)ptr3) | 0x2L);
                        *(ptr0 + 1) = *(ptr0 + 1) | 0x1L;
                    }
                    else {
                        long long v13 = (long long)(param2 + (long long)ptr7);
                        *(ptr7 + 1) = (unsigned long long)((unsigned int)param1 & 0x1) | param2 | 0x2L;
                        *(long long*)(v13 + 8L) = v0 | 0x3L;
                        *(ptr0 + 1) = *(ptr0 + 1) | 0x1L;
                        --ptr8;
                        *ptr8 = &loc_40E9AD;
                        /*BAD_CALL!*/ sub_40BEA0(v2, v13, v0);
                    }
                    jump *(long long*)(ptr8 + 9);
                }
                else {
                    v0 = (long long)((long long)param1 & 0xfffffffffffffff8L) - param2;
                }
                if((unsigned long long)v0 > 31L) {
                    long long v14 = (long long)(param2 + (long long)ptr7);
                    *(ptr7 + 1) = (unsigned long long)((unsigned int)param1 & 0x1) | param2 | 0x2L;
                    *(long long*)(v14 + 8L) = v0 | 0x3L;
                    *(long long*)(param0 + 8L) = *(long long*)(param0 + 8L) | 0x1L;
                    --ptr8;
                    *ptr8 = &loc_40E8AD;
                    /*BAD_CALL!*/ sub_40BEA0(v2, v14, v0);
                }
                jump *(long long*)(ptr8 + 9);
            }
        }
    loc_402A38:
        --ptr8;
        *ptr8 = &loc_402A3D;
        /*NO_RETURN*/ sub_401114();
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40ED3D(long long param0, long long param1) {
    long long result;
    sub_4011F2(param0, param1);
    sub_40229E();
    sub_402240(1L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40F550() {
    return sub_402B9F();
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40F84E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6) {
    param1(param5, param4, param4, param5);
    ud2();
    sub_40B701();
    jump param6;
}

HANDLE sub_410650() {
    gvar_447B50 = &gvar_447B58;
    gvar_447B40 = 3L;
    gvar_447B48 = (HANDLE)0x10;
    if(!(*(char*)&gvar_41C718 & 0x2)) {
        gvar_447B68 = 1;
        gvar_447B80 = 1;
        gvar_447B98 = 1;
        HANDLE v0 = GetStdHandle(0xfffffff6);
        gvar_447B58 = v0;
        HANDLE v1 = GetStdHandle(0xfffffff5);
        gvar_447B70 = v1;
        HANDLE result = GetStdHandle(0xfffffff4);
        gvar_447B88 = result;
        return result;
    }
    gvar_447B58 = 1016L;
    gvar_447B70 = 1016L;
    gvar_447B88 = 1016L;
    gvar_447B68 = 5;
    gvar_447B80 = 5;
    gvar_447B98 = 5;
    return (HANDLE)0x5;
}

long long sub_410C80() {
    __SyntheticTypeUnknown v0;
    long long v1;
    long long v2;
    __SyntheticTypeUnknownF v3;
    char v4;
    long long v5;
    long long v6;
    long long v7;
    fld1();
    long long v8 = v2;
    long long v9 = v5;
    long long v10 = v6;
    int v11 = 1;
    int v12 = (unsigned int)gvar_440798;
    do {
        __SyntheticTypeUnknownF v13 = v0[v4];
        sub_411490();
        long long v14 = sub_411D70((long long)v12);
        *(__SyntheticTypeUnknownP80)&v1 = v3;
        rdtsc();
        long long v15 = 0L;
        long long v16 = 100000L;
        long long v17 = (v7 * 0x100000000L) | v14;
        sub_411EA0((long long)&v15, 0L);
        long long v18 = sub_411D70((long long)v12);
        rdtsc();
        long long v19 = (v7 * 0x100000000L) | v18;
        __SyntheticTypeUnknownF v20 = (v3 - *(__SyntheticTypeUnknownP80)&v1) * 1.0E9;
        if(v19 != v17) {
            v1 = v19 - v17;
            __SyntheticTypeUnknownF v21 = (double)v1;
            if(v19 < v17) {
                v21 += 1.8446744073709552E19;
            }
            v20 /= v21;
        }
        v1 & 0xFFFFFFFFL = v11;
        ++v11;
        v3 = (v20 - v13) / (double)(unsigned int)v1 + v13;
        v4 = 7;
    }
    while(v11 != 5);
    *(__SyntheticTypeUnknownPF80)0x447D40 = v3;
    long long result = sub_411D70((long long)gvar_4407A0);
    *(__SyntheticTypeUnknownPF80)0x447D30 = v3;
    rdtsc();
    gvar_447D20 = 1;
    gvar_447D28 = (unsigned long long)((v7 * 0x100000000L) | result);
    return result;
}

long long sub_410D60(long long param0) {
    long long result;
    __SyntheticTypeUnknown v0;
    char v1;
    if(!gvar_447D20) {
        result = sub_410C80();
    }
    v0[v1 - 1] = (double)param0;
    if(param0 < 0L) {
        v0[v1 - 1] += 1.8446744073709552E19;
    }
    v0[v1 - 2] = *(__SyntheticTypeUnknownP80)0x447D40;
    v0[v1 - 1] *= v0[v1 - 2];
    return result;
}

long long sub_410DB0(long long param0) {
    long long result;
    __SyntheticTypeUnknown v0;
    char v1;
    if(!gvar_447D20) {
        result = sub_410C80();
    }
    v0[v1 - 1] = (double)param0;
    if(param0 < 0L) {
        v0[v1 - 1] += 1.8446744073709552E19;
    }
    v0[v1 - 2] = *(__SyntheticTypeUnknownP80)0x447D40;
    v0[v1 - 1] *= v0[v1 - 2];
    v0[v1 - 1] *= 1.0E-9;
    return result;
}

long long sub_410E10(long long param0, long long param1) {
    long long result;
    __SyntheticTypeUnknown v0;
    long long v1;
    char v2;
    if(!gvar_447D20) {
        result = sub_410C80();
    }
    rdtsc();
    char v3 = v2 - 1;
    v0[v3] = *(__SyntheticTypeUnknownP80)0x447D30;
    long long v4 = ((param1 * 0x100000000L) | result) - gvar_447D28;
    if(!gvar_447D20) {
        *(__SyntheticTypeUnknownP80)&v1 = v0[v3];
        result = sub_410C80();
        v3 = 6;
    }
    v0[v3 - 1] = (double)v4;
    if(v4 < 0L) {
        v0[v3 - 1] += 1.8446744073709552E19;
    }
    v0[v3 - 2] = *(__SyntheticTypeUnknownP80)0x447D40;
    v0[v3 - 1] *= v0[v3 - 2];
    v0[v3 - 1] *= 1.0E-9;
    v0[v3] += v0[v3 - 1];
    return result;
}

long long sub_411490() {
    if(!(*(char*)&gvar_41C718 & 0x4)) {
        jump gvar_41C720;
    }
    long long v0 = gvar_41C0A8();
    if((unsigned int)v0 == 0xc0000135) {
        long long counter = 16L;
        do {
            pause();
            --counter;
        }
        while(counter);
    }
    return 0L;
}

long long sub_4119F0(unsigned long long param0, int* param1, unsigned long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    int v4;
    int v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    int v10;
    long long v11;
    if(!(*(char*)&gvar_41C718 & 0x4)) {
        jump gvar_41C720;
    }
    long long v12 = v6;
    long long v13 = v7;
    long long v14 = (long long)(unsigned int)param2;
    long long v15 = v11;
    long long v16 = v8;
    long long v17 = v9;
    int* ptr0 = param1;
    if((unsigned int)param0 != -1) {
        int v18 = (unsigned int)param0;
        long long v19 = sub_410C50((long long)param0, 3L);
        if(!(unsigned char)v19) {
            long long v20 = sub_402AE2();
            v1 = v20 & 0xFFFFFFFFL;
            return v1 & 0xFFFFFFFFL;
        }
        param2 = gvar_447B50;
        v5 = (unsigned int)param0;
        v4 = 1;
        v3 = *(long long*)((long long)(unsigned int)param0 * 24L + param2);
        goto loc_4058D4;
    }
    else {
        unsigned long long v21 = gvar_447B48;
        int v22 = (unsigned int)v21 - 1;
        if((unsigned int)v21) {
            param0 = gvar_447B50;
            v4 = 0;
            long long* ptr1 = (long long*)((unsigned long long)v22 * 24L + param0);
            while(1) {
                if(*(int*)(ptr1 + 2) == 3) {
                    long long v23 = *ptr1;
                    param2 = (unsigned long long)v4;
                    ++v4;
                    *(int*)(param2 * 4L + (long long)&v5) = v22;
                    *(long long*)(param2 * 8L + (long long)&v3) = v23;
                    if(v4 == 64) {
                        goto loc_4058D4;
                    }
                }
                --v22;
                param1 = (int*)(ptr1 - 3);
                if(param0 - 24L == (int*)(ptr1 - 3)) {
                    break;
                }
                else {
                    ptr1 = (long long*)(ptr1 - 3);
                }
            }
            if(!v4) {
                long long v20 = sub_402AE2();
                v1 = v20 & 0xFFFFFFFFL;
                return v1 & 0xFFFFFFFFL;
            }
        loc_4058D4:
            long long v24 = gvar_440A08 & v14;
            do {
                int v25 = 259;
                if(v24) {
                    v2 = sub_406004((unsigned long long)v4, (long long)&v3, 0L, 0L);
                    if((unsigned int)v2 != 258) {
                        goto loc_40590F;
                    }
                    else {
                        v1 = 0L;
                    }
                }
                else {
                    v2 = sub_406004((unsigned long long)v4, (long long)&v3, 0L, 0xFFFFFFFFL);
                loc_40590F:
                    if((unsigned int)v2 == -1) {
                    loc_405AA9:
                        long long v26 = sub_4162A0();
                        v1 = v26 & 0xFFFFFFFFL;
                    }
                    else {
                        v0 = v2 & 0xFFFFFFFFL;
                        BOOL v27 = GetExitCodeProcess(*(HANDLE*)(v0 * 8L + (long long)&v3), &v25);
                        if(!(unsigned int)v27) {
                            goto loc_405AA9;
                        }
                        else {
                            v10 = v25;
                        }
                    }
                }
                return v1 & 0xFFFFFFFFL;
            }
            while(v10 == 259);
            if(ptr0) {
                *ptr0 = (unsigned int)(unsigned short)((unsigned int)0 | ((unsigned int)(v10 & 0xffffff) << 8));
            }
            v1 = (long long)*(int*)(v0 * 4L + (long long)&v5);
            long long v28 = (long long)*(int*)(v0 * 4L + (long long)&v5) * 3L * 8L;
            sub_405EF5(*(long long*)(gvar_447B50 + v28));
            *(int*)(gvar_447B50 + v28 + 16L) = 0;
        }
        else {
            long long v20 = sub_402AE2();
            v1 = v20 & 0xFFFFFFFFL;
        }
    }
    return v1 & 0xFFFFFFFFL;
}

long long sub_411D3D(int param0) {
    long long result;
    long long v0 = (unsigned long long)*(unsigned int*)((unsigned long long)(param0 & 0x7f) * 4L + (long long)&gvar_447D60);
    if((int)*(unsigned int*)((unsigned long long)(param0 & 0x7f) * 4L + (long long)&gvar_447D60) >= 8) {
        (v0 + &MZHeader) & 0xFFFFFFFFL();
        result = 1L;
    }
    else {
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411D70(long long param0) {
    long long v0;
    return sub_412010(param0, (long long)&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411EA0(long long par0, long long par1) {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_412010(long long param0, long long* param1) {
    long long result;
    long long $rdi;
    long long v0;
    long long v1 = (unsigned long long)gvar_41C718;
    if(!((unsigned char)v1 & 0x4)) {
        if(!((unsigned char)v1 & 0x8)) {
            if(param1) {
                param1[0] = 0L;
                param1[1] = 0L;
            }
            result = sub_412320();
        }
        else if(param1) {
            param1[0] = 0L;
            param1[1] = 0L;
            result = sub_412114(param1, NULL);
            param1[1] *= 1000L;
        }
        else {
            result = sub_412114(NULL, NULL);
        }
        return result;
    }
    sub_405FC1(&$rdi);
    long long v2 = sub_4124A0($rdi);
    param1[0] = v2;
    param1[1] = v0;
    return 0L;
}

long long sub_412114(long long* param0, long long* param1) {
    long long v0;
    if(param1) {
        *param1 = 0L;
    }
    long long v1 = sub_4122F0();
    if((*(char*)&gvar_41C718 & 0x8) && param0 && v1) {
        *param0 = v1;
        *(param0 + 1) = v0;
    }
    return 0L;
}

long long sub_4122F0() {
    jump gvar_41C720;
}

long long sub_412320() {
    jump gvar_41C720;
}

long long sub_412400() {
    jump gvar_41C720;
}

long long sub_4147EA() {
    unsigned long long v0;
    syscall();
    if(v0 < 0xfffffffffffff001L) {
        return (long long)v0;
    }
    gvar_448020 = (unsigned int)(0 - (unsigned int)v0);
    return (long long)(unsigned int)(0 - (unsigned int)v0);
}

long long sub_414825() {
    char v0;
    long long result;
    syscall();
    if(!v0) {
        return result;
    }
    gvar_448020 = (unsigned int)result;
    return -1L;
}

long long sub_415469(long long $rdi, long long $rsi$1, long long $rdx$3, long long $rcx) {
    // Decompilation error
}

long long sub_41547A(long long $rdi, long long $rsi$1, long long $rdx$3, long long $rcx) {
    // Decompilation error
}

long long sub_41548B(long long $rdi) {
    // Decompilation error
}

char* sub_415760(long long $rdi, char $sil, long long $rdx$2, int $ecx) {
    // Decompilation error
}

long long sub_415794(long long $rdi, unsigned long long $rsi, long long $rdx$2, int $ecx) {
    // Decompilation error
}

BOOL sub_416040(LPCVOID param0, long long param1) {
    char v0;
    char v1;
    long long v2;
    long long v3;
    LPCVOID lpBuffer;
    long long v4;
    long long v5 = v2;
    long long v6 = v3;
    sub_41633B((long long)&v0);
    HANDLE hFile = GetStdHandle(0xfffffff4);
    LPOVERLAPPED v7 = NULL;
    WriteFile(hFile, lpBuffer, (DWORD)v4, &v1, NULL);
    BOOL result = FlushFileBuffers(hFile);
    sub_4162C8((long long)&v0);
    return result;
}

int sub_416315(long long* param0, long long param1) {
    jump *(param0 + 7);
}
