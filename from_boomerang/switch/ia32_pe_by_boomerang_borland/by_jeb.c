
int start(int param0, unsigned int param1) {
    char* ptr0;
    void* ptr1;
    char v0;
    char v1;
    int v2;
    gvar_40A113 = gvar_40A10F * 4;
    unsigned int v3 = param1;
    →KERNEL32.DLL!GetModuleHandleA(NULL);
    sub_402134();
    sub_4014D0();
    sub_402138();
    sub_402D50(NULL);
    v3 = &gvar_40A0B8;
    HMODULE v4 = →KERNEL32.DLL!GetModuleHandleA(NULL);
    gvar_40A117 = v4;
    int v5 = 0;
    int v6 = v2;
    gvar_40BBF4 = (unsigned int)(*(int*)(v3 + 16) & 0x1);
    sub_405010();
    sub_405348(*(unsigned int*)(v3 + 28), *(unsigned int*)(v3 + 32));
    sub_4033A0(*(unsigned int*)(v3 + 40));
    sub_4033B0(*(unsigned int**)(v3 + 68));
    gvar_40CCD4 = 1;
    gvar_40CCD8 = v3;
    gvar_40CCC0 = &v1;
    sub_402F38();
    LPCH v7 = →KERNEL32.DLL!GetEnvironmentStrings();
    gvar_40CCB0 = v7;
    LPSTR v8 = →KERNEL32.DLL!GetCommandLineA();
    gvar_40CCAC = v8;
    sub_406F78(*(unsigned int**)(v3 + 44), *(unsigned int**)(v3 + 48));
    sub_406FBC(*(unsigned int*)(v3 + 52), *(unsigned int*)(v3 + 56), *(unsigned int*)(v3 + 60), *(unsigned int*)(v3 + 64));
    int v9 = sub_407A50();
    if(v9) {
        *(int*)(*(int*)v9 * 4 + v9 + 4) = -1;
        sub_407A58(v9, 0);
        int v10 = 0;
        for(int* i = (int*)(v9 + 4); *(int*)v9 > v10; ++i) {
            int v11 = *i;
            *(int*)(v11 + 24)(0, *(int*)(v11 + 20));
            ++v10;
        }
    }
    /*BAD_CALL!*/ sub_407A58(&gvar_40CCD4, 0);
    if((*(char*)(v3 + 16) & 0x1)) {
        char* ptr2 = gvar_40CCAC;
        char j;
        for(j = *ptr2; (j == 32 || j == 9); j = *ptr2) {
            ++ptr2;
        }
        if(*ptr2 == 34) {
            v0 = 34;
            ++ptr2;
        }
        else {
            v0 = 32;
        }
        for(j = *ptr2; (j && j != v0 && j != 9); j = *ptr2) {
            ++ptr2;
        }
        if(*ptr2 == 34) {
            ++ptr2;
        }
        for(j = *ptr2; ((j && j == 32) || j == 9); j = *ptr2) {
            ++ptr2;
        }
        ptr1 = (void*)sub_407D1C();
        ptr0 = ptr2;
        int v12 = 0;
        HMODULE v13 = →KERNEL32.DLL!GetModuleHandleA(NULL);
        int v14 = *(int*)(v3 + 24){sub_401150}((unsigned int)v13);
        sub_406F28(v14);
    }
    else {
        ptr1 = gvar_40CCA8;
        ptr0 = gvar_40CCA4;
        int v15 = *(int*)(v3 + 24){sub_401150}(gvar_40CCA0);
        sub_406F28(v15);
    }
    jump v5;
}

int sub_401150(unsigned int param0) {
    switch(param0) {
        case 2: {
            sub_4038E4("Two!\n");
            return 0;
        }
        case 3: {
            sub_4038E4("Three!\n");
            return 0;
        }
        case 4: {
            sub_4038E4("Four!\n");
            return 0;
        }
        case 5: {
            sub_4038E4("Five!\n");
            return 0;
        }
        case 6: {
            sub_4038E4("Six!\n");
            return 0;
        }
        case 7: {
            sub_4038E4("Seven!\n");
            return 0;
        }
        default: {
            sub_4038E4("Other!\n");
            return 0;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4011E0(int param0, int param1) {
    int v0 = param0 * param1;
    int result = sub_4013E0(v0);
    if(result) {
        sub_4021AC(result, 0, v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40120C(int param0) {
    return sub_4013F0(param0);
}

int sub_40121C(int param0) {
    return sub_40120C(param0);
}

int sub_40122C(unsigned int* param0, unsigned int* param1) {
    int result;
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    unsigned int v1 = gvar_40A15C;
    SIZE_T dwSize = (SIZE_T)((v0 + v1 - 1) & ~(v1 - 1));
    LPVOID v2 = →KERNEL32.DLL!VirtualAlloc(NULL, dwSize, 0x2000, 1);
    *ptr0 = v2;
    if(!v2) {
        result = 0;
    }
    else {
        *ptr1 = dwSize;
        result = 1;
    }
    return result;
}

int sub_401298(int param0, SIZE_T dwSize) {
    LPVOID* ptr0;
    LPVOID v0 = →KERNEL32.DLL!VirtualAlloc(ptr0[0], dwSize, 0x1000, 4);
    ptr0[0] = v0;
    return ((unsigned int)(v0 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_4012C0(int param0, int param1) {
    int result;
    LPVOID v0;
    int v1;
    int v2 = param1;
    LPVOID lpAddress = v0;
    if(v2) {
        do {
            LPVOID v3 = →KERNEL32.DLL!VirtualAlloc(lpAddress, 0x1000, 0x1000, 4);
            if(!v3) {
                sub_40130C(v1, (SIZE_T)((int)lpAddress - (int)v0));
                return 0;
            }
            lpAddress = (LPVOID)((int)lpAddress + 0x1000);
            v2 -= 0x1000;
            if(!v2) {
                return 1;
            }
        }
        while(1);
    }
    else {
        result = 1;
    }
    return result;
}

int sub_40130C(int param0, SIZE_T dwSize) {
    LPVOID lpAddress;
    BOOL v0 = →KERNEL32.DLL!VirtualFree(lpAddress, dwSize, 0x4000);
    if((v0 - 1)) {
        return 0;
    }
    return 1;
}

int sub_401324() {
    LPVOID lpAddress;
    BOOL v0 = →KERNEL32.DLL!VirtualFree(lpAddress, 0, 0x8000);
    if((v0 - 1)) {
        return 0;
    }
    return 1;
}

int sub_401360(unsigned int* param0, unsigned int* param1, unsigned int* param2) {
    int result;
    unsigned int* ptr0 = param1;
    unsigned int* ptr1 = param0;
    if(!ptr1 || !ptr0 || !param2) {
        result = 0;
    }
    else {
        HMODULE hModule = →KERNEL32.DLL!GetModuleHandleA("borlndmm");
        if(!hModule) {
            result = 0;
        }
        else {
            FARPROC v0 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysGetMem$qqri");
            *ptr1 = v0;
            FARPROC v1 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysFreeMem$qqrpv");
            *ptr0 = v1;
            FARPROC v2 = →KERNEL32.DLL!GetProcAddress(hModule, "@Borlndmm@SysReallocMem$qqrpvi");
            *param2 = v2;
            result = !*ptr1 || !*ptr0 || !*param2 ? 0: 1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4013E0(int param0) {
    return gvar_40A20C{sub_401478}(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4013F0(int param0) {
    return gvar_40A208{sub_401460}(param0);
}

int sub_401400(int param0, int param1) {
    return gvar_40A210{sub_401490}(param0, param1);
}

int sub_401460(int param0) {
    sub_401418(1);
    return gvar_40A208{sub_401460}(param0);
}

int sub_401478(int param0) {
    sub_401418(1);
    return gvar_40A20C{sub_401478}(param0);
}

int sub_401490(int param0, int param1) {
    sub_401418(1);
    return gvar_40A210{sub_401490}(param0, param1);
}

void sub_4014D0() {
}

int sub_4014D4() {
    for(int i = 12; i < gvar_40A228; i += 4) {
        int v0 = gvar_40A23C + i + (i - 12);
        *(int*)(v0 + 4) = gvar_40A23C + i + (i - 12);
        *(int*)(v0 + 8) = v0;
    }
    unsigned int v1 = gvar_40A228;
    int result = gvar_40A23C + v1 + (v1 - 12);
    *(int*)(result + 4) = 0;
    *(int*)(result + 8) = 0;
    return result;
}

int sub_401514(unsigned int* param0, unsigned int param1, int param2) {
    int result;
    unsigned int v0 = param1;
    unsigned int* ptr0 = param0;
    int v1 = 0;
    if(v0 < 0x1000) {
        result = -1;
    }
    else {
        *(int*)(ptr0 + 2) = 1;
        *(ptr0 + 3) = ptr0;
        *ptr0 = v0;
        *(int*)(ptr0 + 1) = param2;
        *(ptr0 + 35) = gvar_40A234;
        *(int*)(ptr0 + 36) = 0;
        unsigned int v2 = gvar_40A234;
        if(v2) {
            *(unsigned int*)(v2 + 144) = ptr0;
        }
        else {
            gvar_40A238 = ptr0;
        }
        gvar_40A234 = ptr0;
        *(int*)(ptr0 + 37) = 0;
        int* ptr1 = (int*)(ptr0 + 38);
        if(!gvar_40A23C) {
            int v3 = (gvar_40A228 * 2 + 3) & 0xfffffffc;
            gvar_40A23C = ptr1 + 1;
            *ptr1 = v3;
            ptr1 = (int*)((v3 & 0xfffffffc) + (int)ptr1) + 1;
            sub_4014D4();
            v1 = v3 + 4;
        }
        unsigned int v4 = (unsigned int)(v0 - 160 - v1);
        *ptr1 = v4 + 1;
        *((int*)(((v4 + 1) & 0xfffffffc) + (int)ptr1) + 1) = 2;
        unsigned int v5 = gvar_40A228 > v4 ? gvar_40A23C + v4 + (v4 - 12): gvar_40A24C;
        *(ptr1 + 1) = *(int*)(v5 + 4);
        *(unsigned int*)(ptr1 + 2) = v5;
        *(unsigned int*)(*(ptr1 + 1) + 8) = ptr1;
        *(unsigned int*)(v5 + 4) = ptr1;
        *(unsigned int*)(v4 + (int)ptr1) = (unsigned int*)(v4 + 4);
        result = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401614(unsigned int* param0, int param1) {
    int* ptr0;
    unsigned int* ptr1 = param0;
    unsigned int v0 = *ptr1;
    char* ptr2 = (char*)((int*)(v0 + (int)ptr1) - 1);
    if((unsigned int)(param1 & 0xfffff000) < v0) {
        if(!(*ptr2 & 0x2)) {
            return -1;
        }
        ptr0 = (int*)((int)ptr2 - *(int*)(ptr2 - 4));
        unsigned int v1 = v0 - (unsigned int)(param1 & 0xfffff000);
        if((unsigned int)((*ptr0 & 0xfffffffc) - 12) < v1) {
            return -1;
        }
        *ptr0 = *ptr0 - v1;
        int v2 = *ptr0 & 0xfffffffc;
        *(int*)((int)ptr0 + v2) = v2 + 4;
        *((int*)((*ptr0 & 0xfffffffc) + (int)ptr0) + 1) = 2;
        if((unsigned int)(*ptr0 & 0xfffffffc) < gvar_40A228) {
            int v3 = *(ptr0 + 1);
            *(int*)(v3 + 8) = *(ptr0 + 2);
            *(int*)(*(ptr0 + 2) + 4) = v3;
            int v4 = *ptr0 & 0xfffffffc;
            *(ptr0 + 1) = *(int*)(gvar_40A23C + v4 + (v4 - 8));
            int v5 = *ptr0 & 0xfffffffc;
            *(ptr0 + 2) = gvar_40A23C + v5 + (v5 - 12);
            *(unsigned int*)(*(ptr0 + 1) + 8) = ptr0;
            int v6 = *ptr0 & 0xfffffffc;
            *(unsigned int*)(gvar_40A23C + v6 + (v6 - 8)) = ptr0;
        }
    }
    else {
        int v7 = (unsigned int)(param1 & 0xfffff000) - *ptr1;
        *(int*)ptr2 = v7 - 4 + *(int*)ptr2;
        *((int*)((*(int*)ptr2 & 0xfffffffc) + (int)ptr2) + 1) = 0;
        sub_401AE4((int)(int*)(ptr2 + 4));
        *ptr1 = *ptr1 + v7;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401700(int param0) {
    int result;
    unsigned int v0;
    int v1;
    unsigned int* ptr0;
    int v2;
    unsigned int v3 = (unsigned int)((param0 + 0xfff) & 0xfffff000);
    if(!gvar_40A250) {
        int v4 = sub_401E28();
        gvar_40A250 = v4;
    }
    if(!gvar_40A23C) {
        v3 = (unsigned int)(((gvar_40A228 * 2 + 4255) & 0xfffff000) + v3);
    }
    unsigned int* ptr1 = gvar_40A234;
    if(ptr1) {
        do {
            unsigned int v5 = ptr1[1];
            if(v5 - ptr1[0] > v3) {
                int v6 = ~(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
                if((unsigned int)((((unsigned int)(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) + v3) - 1) & v6) + ptr1[0]) > v5) {
                    v0 = ptr1[1];
                }
                else {
                    v6 = ~(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
                    v0 = (unsigned int)((((unsigned int)(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) + v3) - 1) & v6) + ptr1[0]);
                }
                int v7 = sub_4012C0(v6, (int)(v0 - ptr1[0]));
                if(v7) {
                    gvar_40A254 = (unsigned int)((int)(v0 - ptr1[0]) + gvar_40A254);
                    sub_401614(ptr1, (int)v0);
                    result = 0;
                }
                else {
                    int v8 = sub_4012C0(v2, 0x1000);
                    if(v8) {
                        gvar_40A254 += 0x1000;
                        sub_401614(ptr1, (int)(ptr1[0] + 0x1000));
                        result = 0;
                    }
                    else {
                        result = -1;
                    }
                }
                return result;
            }
            ptr1 = (unsigned int*)ptr1[35];
            if(!ptr1) {
                goto loc_401887;
            }
        }
        while(1);
    }
    else {
    loc_401887:
        int v9 = sub_40122C(&v1, &ptr0);
        if(!v9) {
            result = -1;
        }
        else {
            int v10 = (int)(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
            unsigned int* ptr2 = gvar_40A234;
            int v11 = (v10 + v3 + 0x1000) & ~(((unsigned int)(*(int*)&gvar_40A21C + gvar_40A254) < gvar_40A250 ? *(int*)&gvar_40A21C: gvar_40A220) - 1);
            if(ptr2) {
                do {
                    unsigned int v12 = ptr2[1];
                    if((int*)(v12 + (int)ptr2) == ptr0 && (int)ptr2[2] < 32) {
                        int v13 = (int)(v12 - ptr2[0]);
                        if(v13) {
                            int v14 = sub_4012C0(v10, v13);
                            if(v14) {
                                gvar_40A254 += v13;
                                sub_401614(ptr2, ptr2[1]);
                                goto loc_40193C;
                            }
                            else {
                                result = -1;
                            }
                        }
                        else {
                        loc_40193C:
                            int v15 = sub_4012C0(v10, v11 - v13);
                            if(v15) {
                                gvar_40A254 = (unsigned int)(v11 - v13 + gvar_40A254);
                                unsigned int v16 = ptr2[2];
                                ++ptr2[2];
                                ptr2[v16 + 3] = (unsigned int)ptr0;
                                ptr2[1] += v1;
                                sub_401614(ptr2, ptr2[0] + v11 - v13);
                                result = 0;
                            }
                            else {
                                result = -1;
                            }
                        }
                        return result;
                    }
                    ptr2 = (unsigned int*)ptr2[35];
                    if(!ptr2) {
                        goto loc_40198C;
                    }
                }
                while(1);
            }
            else {
            loc_40198C:
                int v17 = sub_4012C0(v10, v11);
                if(!v17) {
                    sub_401324();
                    result = -1;
                }
                else {
                    gvar_40A254 += v11;
                    sub_401514(ptr0, (unsigned int)v11, v1);
                    result = 0;
                }
            }
        }
    }
    return result;
}

int sub_4019C4(unsigned int param0) {
    int result;
    int v0;
    int* ptr0 = (int*)((*(int*)param0 & 0xfffffffc) + param0) + 1;
    unsigned int v1 = gvar_40A250 > gvar_40A254 ? gvar_40A22C: gvar_40A230;
    unsigned int v2 = (unsigned int)(*(int*)param0 - 12);
    if(v1 > v2) {
        result = 0;
    }
    else {
        v1 = (unsigned int)(~(v1 - 1) & v2);
        unsigned int* ptr1 = gvar_40A234;
        if(ptr1) {
            do {
                unsigned int v3 = ptr1[0];
                if((int*)(v3 + (int)ptr1) - 1 == ptr0) {
                    int v4 = (int)(v3 - v1);
                    sub_401614(ptr1, v4);
                    while((unsigned int)(int*)((int)ptr1 + v4) <= ptr1[ptr1[2] + 2]) {
                        --ptr1[2];
                        SIZE_T dwSize = (SIZE_T)(ptr1[0] - (int)(int*)(ptr1[ptr1[2] + 3] - (int)ptr1));
                        sub_40130C(v0, dwSize);
                        gvar_40A254 -= dwSize;
                        sub_401324();
                        v0 = (int)(ptr1[ptr1[2] + 3] - (int)ptr1);
                        ptr1[1] = (unsigned int)(int)(ptr1[ptr1[2] + 3] - (int)ptr1);
                        ptr1[0] = (unsigned int)v0;
                    }
                    sub_40130C(v0, (SIZE_T)(ptr1[0] - v4));
                    gvar_40A254 -= ptr1[0] - v4;
                    ptr1[0] = (unsigned int)v4;
                    return 1;
                }
                ptr1 = (unsigned int*)ptr1[35];
                if(!ptr1) {
                    return 0;
                }
            }
            while(1);
        }
        else {
            result = 0;
        }
    }
    return result;
}

int sub_401AB8(int param0) {
    int result = param0;
    if(result) {
        if((unsigned int)(*(int*)(result - 4) & 0xfffffffc) >= 0x100000) {
            return sub_401324();
        }
        result = (int)sub_401AE4((unsigned int)result);
    }
    return result;
}

unsigned int sub_401AE4(unsigned int param0) {
    unsigned int result = param0;
    if(result) {
        result -= 4;
        int v0 = *(int*)result;
        if(((unsigned char)v0 & 0x2)) {
            unsigned int v1 = result - *(int*)(result - 4);
            *(int*)v1 = (v0 & 0xfffffffc) + *(int*)v1 + 4;
            result = v1;
            unsigned int v2 = gvar_40A24C;
            if(result == v2) {
                gvar_40A24C = *(unsigned int*)(v2 + 4);
            }
            int v3 = *(int*)(result + 4);
            *(int*)(v3 + 8) = *(int*)(result + 8);
            *(int*)(*(int*)(result + 8) + 4) = v3;
        }
        else {
            *(int*)result = *(int*)result | 0x1;
        }
        char* ptr0 = (char*)((*(int*)result & 0xfffffffc) + result + 4);
        if((*ptr0 & 0x1)) {
            *(int*)result = (*(int*)ptr0 & 0xfffffffc) + *(int*)result + 4;
            if(gvar_40A24C == ptr0) {
                gvar_40A24C = *(unsigned int*)(ptr0 + 4);
            }
            int v4 = *(int*)(ptr0 + 4);
            *(int*)(v4 + 8) = *(int*)(ptr0 + 8);
            *(int*)(*(int*)(ptr0 + 8) + 4) = v4;
        }
        int v5 = *(int*)result & 0xfffffffc;
        *(int*)(result + v5 + 4) = *(int*)(result + v5 + 4) | 0x2;
        unsigned int v6 = (unsigned int)(*(int*)result & 0xfffffffc);
        int v7 = gvar_40A228 > v6 ? gvar_40A23C + v6 + (v6 - 12): *(int*)(gvar_40A24C + 4);
        *(int*)(result + 4) = *(int*)(v7 + 4);
        *(int*)(result + 8) = v7;
        *(unsigned int*)(*(int*)(result + 4) + 8) = result;
        *(unsigned int*)(v7 + 4) = result;
        *(int*)(result + v6) = v6 + 4;
        unsigned int v8 = *(unsigned int*)result;
        if(*(int*)((v8 & 0xfffffffc) + result + 4) == 2 && (gvar_40A250 > gvar_40A254 ? gvar_40A22C: gvar_40A230) < v8) {
            result = (unsigned int)sub_4019C4(result);
        }
    }
    return result;
}

int sub_401BEC(int param0) {
    int v0;
    int result = 0;
    int v1 = sub_401298(v0, (SIZE_T)((param0 + 0x1003) & 0xfffff000));
    if(v1) {
        result = 4;
        *NULL = (SIZE_T)((param0 + 0x1003) & 0xfffff000) - 4;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401C28(int param0) {
    if(!param0) {
        return 0;
    }
    return (unsigned int)param0 >= 0x100000 ? sub_401BEC(param0): sub_401C50(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401C50(unsigned int param0) {
    unsigned int* j;
    int* ptr0;
    int* result;
    unsigned int v0 = param0;
    if(!v0) {
        result = NULL;
    }
    else {
        if(!gvar_40A23C) {
            sub_401700(1);
        }
        if((v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) < gvar_40A228) {
            int v1 = (v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) * 2 + gvar_40A23C - 12;
            int* ptr1 = *(unsigned int*)(v1 + 4);
            if(v1 != ptr1) {
                *ptr1 = *ptr1 & 0xfffffffe;
                int v2 = *ptr1 & 0xfffffffc;
                *((int*)((int)ptr1 + v2) + 1) = *((int*)((int)ptr1 + v2) + 1) & 0xfffffffd;
                ptr0 = *(unsigned int*)(ptr1 + 1);
                *(ptr0 + 2) = *(ptr1 + 2);
                result = ptr1 + 1;
                *(unsigned int*)(*(ptr1 + 2) + 4) = ptr0;
            }
            else {
                j = gvar_40A244;
                if(gvar_40A244 == &gvar_40A240) {
                    int i;
                    for(i = (v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) * 2 + gvar_40A23C - 4; i == *(int*)(i + 4); i += 8) {
                    }
                    unsigned int* ptr2 = *(unsigned int*)(i + 4);
                    j = ptr2 != 0 ? ptr2: gvar_40A24C;
                }
                goto loc_401D3E;
            }
        }
        else {
            unsigned int* ptr3 = gvar_40A24C;
            j = gvar_40A24C;
            unsigned int v3 = *ptr3;
            if((v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) > v3) {
                *ptr3 = -3;
                for(j = *(j + 1); (v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) > *j; j = *(j + 1)) {
                }
                *gvar_40A24C = v3;
                if(gvar_40A24C == j) {
                    j = (unsigned int*)&gvar_40A240;
                }
            }
        loc_401D3E:
            if(j != &gvar_40A240) {
                unsigned int v4 = (unsigned int)(*j & 0xfffffffc);
                unsigned int v5 = v4 - (v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc));
                if(v5 < 16) {
                    *j = *j & 0xfffffffe;
                    int v6 = *j & 0xfffffffc;
                    *((int*)((int)j + v6) + 1) = *((int*)((int)j + v6) + 1) & 0xfffffffd;
                    if(gvar_40A228 <= v4) {
                        gvar_40A24C = *(j + 1);
                    }
                    ptr0 = *(j + 1);
                    *(ptr0 + 2) = *(int*)(j + 2);
                    result = (int*)(j + 1);
                    *(unsigned int*)(*(int*)(j + 2) + 4) = ptr0;
                }
                else {
                    *j = v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc);
                    ptr0 = (int*)(((v0 < 12 ? 12: (unsigned int)((v0 + 3) & 0xfffffffc)) & 0xfffffffc) + (int)j) + 1;
                    *ptr0 = v5 - 3;
                    *(unsigned int*)(v5 - 4 + (int)ptr0) = v5;
                    if(v5 - 4 < gvar_40A228) {
                        int v7 = v5 - 8 + gvar_40A23C + (v5 - 12);
                        *(ptr0 + 1) = *(int*)(v7 + 4);
                        *(ptr0 + 2) = v7;
                        *(unsigned int*)(*(ptr0 + 1) + 8) = ptr0;
                        *(unsigned int*)(v7 + 4) = ptr0;
                        if(gvar_40A24C == j) {
                            gvar_40A24C = *(j + 1);
                        }
                        ptr0 = *(j + 1);
                        *(ptr0 + 2) = *(int*)(j + 2);
                        *(unsigned int*)(*(int*)(j + 2) + 4) = ptr0;
                    }
                    else {
                        int v8 = *(int*)(j + 2);
                        *(unsigned int*)(v8 + 4) = ptr0;
                        *(ptr0 + 2) = v8;
                        int v9 = *(int*)(j + 1);
                        *(unsigned int*)(v9 + 8) = ptr0;
                        *(ptr0 + 1) = v9;
                        gvar_40A24C = ptr0;
                    }
                    result = (int*)(j + 1);
                }
            }
            else {
                int v10 = sub_401700((int)(v0 + 64));
                result = !v10 ? (int*)sub_401C50((int)v0): NULL;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_401E28() {
    int result;
    int v0 = 32;
    →KERNEL32.DLL!GlobalMemoryStatus(&v0);
    return result;
}

int sub_401EA0(int param0, unsigned int param1) {
    int result;
    int* ptr0 = (int*)(param0 - 4);
    int* ptr1 = (int*)((*ptr0 & 0xfffffffc) + (int)ptr0) + 1;
    unsigned int v0 = param1 < 12 ? 12: (unsigned int)((param1 + 3) & 0xfffffffc);
    unsigned int v1 = (unsigned int)(*ptr0 & 0xfffffffc);
    if(v0 == v1) {
        result = param0;
    }
    else {
        int v2 = *ptr1 & 0x1;
        if(v2) {
            v1 = (unsigned int)((*ptr1 & 0xfffffffc) + v1 + 4);
        }
        if(v0 <= v1) {
            int* ptr2 = NULL;
            if(v2) {
                if((unsigned int)(*ptr1 & 0xfffffffc) >= gvar_40A228) {
                    ptr2 = *(unsigned int*)(ptr1 + 2);
                }
                if(gvar_40A24C == ptr1) {
                    gvar_40A24C = *(unsigned int*)(ptr1 + 1);
                }
                *(int*)(*(ptr1 + 1) + 8) = *(ptr1 + 2);
                *(int*)(*(ptr1 + 2) + 4) = *(ptr1 + 1);
                int v3 = *ptr1 & 0xfffffffc;
                *((int*)((int)ptr1 + v3) + 1) = *((int*)((int)ptr1 + v3) + 1) & 0xfffffffd;
                *ptr0 = (*ptr0 & 0x2) + v1;
            }
            int* ptr3 = (int*)(v1 - v0);
            if((unsigned int)ptr3 >= 16) {
                int v4 = (*ptr0 & 0x2) + v0;
                *ptr0 = (*ptr0 & 0x2) + v0;
                unsigned int* ptr4 = (unsigned int*)((int*)((v4 & 0xfffffffc) + (int)ptr0) + 1);
                *ptr4 = (int*)((char*)ptr3 - 3);
                *((int*)((int)(int*)((int)(int*)((char*)ptr3 - 3) & 0xfffffffc) + (int)ptr4) + 1) = *((int*)((int)(int*)((int)(int*)((char*)ptr3 - 3) & 0xfffffffc) + (int)ptr4) + 1) | 0x2;
                int* ptr5 = (unsigned int)(ptr3 - 1) < gvar_40A228 ? (int*)((int)(int*)((int)(ptr3 - 2) + gvar_40A23C) + (int)(ptr3 - 3)): ptr2 != 0 ? ptr2: *(unsigned int*)(gvar_40A24C + 4);
                *(int*)(ptr4 + 1) = *(ptr5 + 1);
                *(ptr4 + 2) = ptr5;
                *(unsigned int*)(*(int*)(ptr4 + 1) + 8) = ptr4;
                *(unsigned int*)(ptr5 + 1) = ptr4;
                *(unsigned int*)((int)(ptr3 - 1) + (int)ptr4) = ptr3;
            }
            result = param0;
        }
        else {
            result = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_401FC8(int* param0, int param1) {
    int* result;
    int v0;
    int v1 = param0[-1] & 0xfffffffc;
    if(((param1 + 0x1003) & 0xfffff000) - 4 == v1) {
        result = param0;
    }
    else if((unsigned int)(((param1 + 0x1003) & 0xfffff000) - 4) > (unsigned int)v1) {
        int* ptr0 = (int*)sub_401C28(param1);
        if(ptr0) {
            sub_40213C(ptr0, param0, v1);
            sub_401AB8((int)param0);
        }
        result = ptr0;
    }
    else if((unsigned int)(((param1 + 0x1003) & 0xfffff000) - 4) < 0x100000) {
        int* ptr1 = (int*)sub_401C28(param1);
        if(ptr1) {
            sub_40213C(ptr1, param0, param1);
            sub_401AB8((int)param0);
        }
        result = ptr1;
    }
    else {
        sub_40130C(v0, (SIZE_T)(v1 + 4 - ((param1 + 0x1003) & 0xfffff000)));
        result = param0;
        param0[-1] = ((param1 + 0x1003) & 0xfffff000) - 4;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402080(int param0, int param1) {
    int result;
    int v0 = param1;
    if(!v0) {
        sub_401AB8(param0);
        result = 0;
    }
    else if(!param0) {
        result = sub_401C28(v0);
    }
    else if((unsigned int)(*(int*)(param0 - 4) & 0xfffffffc) >= 0x100000) {
        result = (int)sub_401FC8((int*)param0, v0);
    }
    else {
        int v1 = sub_401EA0(param0, (unsigned int)v0);
        if(v1) {
            result = param0;
        }
        else {
            int v2 = sub_401C28(v0);
            if(v2) {
                if((unsigned int)(*(int*)(param0 - 4) & 0xfffffffc) <= (unsigned int)v0) {
                    v0 = *(int*)(param0 - 4) & 0xfffffffc;
                }
                sub_402160((int*)v2, (int*)param0, v0);
                sub_401AB8(param0);
            }
            result = v2;
        }
    }
    return result;
}

int sub_402118(int param0) {
    if(!param0) {
        return 0;
    }
    return *(int*)(param0 - 4) & 0xfffffffc;
}

void sub_402134() {
}

void sub_402138() {
}

int* sub_402160(int* param0, int* param1, int param2) {
    int j;
    int* ptr0 = param0;
    int* ptr1 = param1;
    int v0 = param2;
    char v1 = ptr1 == ptr0;
    if(ptr1 > ptr0) {
        for(int i = (param2 >>> 1) >>> 1; i != 0; --i) {
            *ptr0 = *ptr1;
            ++ptr1;
            ++ptr0;
        }
        for(j = v0 & 0x3; j != 0; --j) {
            *(char*)ptr0 = *(char*)ptr1;
            ptr1 = (int*)((char*)ptr1 + 1);
            ptr0 = (int*)((char*)ptr0 + 1);
        }
    }
    else if(!v1) {
        char* ptr2 = (char*)((char*)((int)ptr1 + param2) - 1);
        char* ptr3 = (char*)((char*)((int)ptr0 + param2) - 1);
        for(int k = param2 & 0x3; k != 0; --k) {
            *ptr3 = *ptr2;
            --ptr2;
            --ptr3;
        }
        j = (v0 >>> 1) >>> 1;
        int* ptr4 = (int*)(ptr2 - 3);
        int* ptr5 = (int*)(ptr3 - 3);
        while(j != 0) {
            *ptr5 = *ptr4;
            --ptr4;
            --ptr5;
            --j;
        }
    }
    return param0;
}

short* sub_402238(short* param0, short param1, int param2) {
    short* ptr0 = param0;
    short v0 = param1;
    for(int i = param2; i != 0; --i) {
        *ptr0 = v0;
        ++ptr0;
    }
    return param0;
}

char* sub_40231C(char* param0, char* param1, int param2) {
    char v0;
    char v1;
    char* result;
    int v2 = param2;
    char* ptr0 = param0;
    char* ptr1 = param1;
    while(v2 >= 4 && *ptr0 == *ptr1 && *(ptr0 + 1) == *(ptr1 + 1) && *(ptr0 + 2) == *(ptr1 + 2) && *(ptr0 + 3) == *(ptr1 + 3)) {
        v2 -= 4;
        ptr0 += 4;
        ptr1 += 4;
        if(v2 < 4) {
            break;
        }
    }
    if(!v2) {
        result = NULL;
    }
    else {
        do {
            v1 = *ptr0;
            v0 = *ptr1;
            if(v1 != v0) {
                break;
            }
            else {
                ++ptr0;
                ++ptr1;
                --v2;
            }
        }
        while(v2);
        result = (char*)((unsigned int)v1 - (unsigned int)v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402388(int param0) {
    int v0 = sub_402250(param0);
    int result = sub_4013E0(v0 + 1);
    if(result) {
        sub_40213C(result, param0, v0 + 1);
    }
    return result;
}

int sub_4023BC(short* param0) {
    int result = 0;
    for(short* i = param0; *i; ++i) {
        ++result;
    }
    return result;
}

short* sub_4023D4(short* param0, short* param1) {
    short* ptr0 = param1;
    int v0 = sub_4023BC(ptr0);
    unsigned int v1 = 0;
    short* ptr1 = param0;
    short* ptr2 = ptr0;
    if((unsigned int)v0 > 0) {
        do {
            ptr0 = (unsigned int)ptr2[0] | ((unsigned int)(unsigned short)(int*)((int)ptr0 >>> 16) << 16);
            *ptr1 = (unsigned short)ptr0;
            ++v1;
            ++ptr1;
            ++ptr2;
        }
        while(v1 < (unsigned int)v0);
    }
    *(short*)(v0 * 2 + (int)param0) = 0;
    return param0;
}

int sub_402484(int param0, int param1, int param2, int param3) {
    int v0;
    if(!(*(char*)(param1 + 4) & 0x1)) {
        sub_406B6C("IS_STRUC(base->tpMask)", "xxtype.cpp", 315);
    }
    if(!(*(char*)(param0 + 4) & 0x1)) {
        sub_406B6C("IS_STRUC(derv->tpMask)", "xxtype.cpp", 316);
    }
    if(!(*(char*)(param0 + 12) & 0x4)) {
        sub_406B6C("derv->tpClass.tpcFlags & CF_HAS_BASES", "xxtype.cpp", 318);
    }
    int* ptr0 = (int*)((unsigned int)*(short*)(param0 + 18) + param0);
    for(int i = *ptr0; i; i = *ptr0) {
        if(!(*(char*)(ptr0 + 2) & 0x8)) {
            int v1 = !param3 || (*(ptr0 + 2) & 0x3) != 3 ? 0: 1;
            v0 = sub_402970(param1, i);
            if(v0 && v1) {
                return 1;
            }
            else if((*(char*)(i + 12) & 0x4)) {
                v0 = sub_402484(i, param1, param2, v1);
                if(v0) {
                    return 1;
                }
            }
        }
        ptr0 += 3;
    }
    int* ptr1 = (int*)((unsigned int)*(short*)(param0 + 16) + param0);
    int v2 = *ptr1;
    while(v2) {
        int v3 = !param3 || (*(ptr1 + 2) & 0x3) != 3 ? 0: 1;
        v0 = sub_402970(param1, v2);
        if(v0 && v3) {
            return 1;
        }
        if((*(char*)(v2 + 12) & 0x4)) {
            v0 = sub_402484(v2, param1, param2, v3);
            if(v0) {
                return 1;
            }
        }
        ptr1 += 3;
        v2 = *ptr1;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4025DB() {
    int v0;
    int result;
    sub_402414();
    int v1 = 0;
    do {
        unsigned int* ptr0 = *(unsigned int*)(v1 * 4 + (int)&gvar_40C4A8);
        if(ptr0 && ptr0) {
            do {
                unsigned int* ptr1 = *(ptr0 + 3);
                if(ptr0) {
                    unsigned int* ptr2 = ptr0;
                    **ptr0((int)ptr0, 3);
                }
                ptr0 = ptr1;
            }
            while(ptr0);
        }
        ++v1;
    }
    while(v1 < 0x100);
    *(int*)__FS_BASE = v0;
    return result;
}

unsigned int* sub_40262E(int param0, int param1, int param2, int param3, int param4, int param5, int* param6, int param7, int param8) {
    int v0;
    int v1;
    unsigned int* result1;
    int v2 = 0;
    unsigned int* ptr0 = NULL;
    int v3 = 0;
    if(!param1 || !(*(char*)(param1 + 4) & 0x1)) {
        sub_406B6C("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)", "xxtype.cpp", 847);
    }
    if(!param3 || !(*(char*)(param3 + 4) & 0x1)) {
        sub_406B6C("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)", "xxtype.cpp", 848);
    }
    if(param5 && !(*(char*)(param5 + 4) & 0x1)) {
        sub_406B6C("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)", "xxtype.cpp", 849);
    }
    if(param5) {
        int v4 = sub_402970(param5, param3);
        if(v4) {
            sub_406B6C("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x355);
        }
        int v5 = sub_402970(param5, param1);
        if(!v5) {
            goto loc_402704;
        }
        else {
            result1 = NULL;
        }
    }
    else {
    loc_402704:
        if(param3) {
            int v6 = sub_402970(param1, param3);
            if(v6) {
                goto loc_402727;
            }
        }
        else {
        loc_402727:
            sub_406B6C("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 859);
        }
        if(!(*(char*)(param1 + 12) & 0x4)) {
            result1 = NULL;
        }
        else {
            int v7 = 0;
            int* ptr1 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
            while(1) {
                int v8 = *ptr1;
                if(v8) {
                    if(!(*(char*)(ptr1 + 2) & 0x8)) {
                        int v9 = !param7 || (*(ptr1 + 2) & 0x3) != 3 ? 0: 1;
                        unsigned int* result = (unsigned int*)(*(ptr1 + 1) + param0);
                        int v10 = param8;
                        if((*(char*)(ptr1 + 2) & 0x4)) {
                            result = *result;
                            v10 = v8;
                        }
                        int v11 = sub_402970(param3, v8);
                        if(v11) {
                            if(param2) {
                                if(result != param2) {
                                    goto loc_402858;
                                }
                                else {
                                    return result;
                                }
                            }
                            else if(param4) {
                                if(!param5) {
                                    sub_406B6C("srcTypPtr", "xxtype.cpp", 976);
                                }
                                v1 = 0;
                                v0 = 0;
                                int v12 = sub_40262E((int)result, v8, param4, param5, 0, 0, (int)param6);
                                if(!v12) {
                                    goto loc_402858;
                                }
                            }
                        }
                        else if(!(*(char*)(v8 + 12) & 0x4)) {
                            goto loc_402858;
                        }
                        else {
                            v1 = v10;
                            v0 = v9;
                            unsigned int* ptr2 = (unsigned int*)sub_40262E((int)result, v8, param2, param3, param4, param5, (int)param6);
                            if(!ptr2) {
                                goto loc_402858;
                            }
                            else {
                                result = ptr2;
                                v9 = *param6;
                            }
                        }
                        if(v3 && result == ptr0) {
                            v2 |= v9;
                        }
                        else {
                            ++v3;
                            ptr0 = result;
                            v2 = v9;
                        }
                    }
                loc_402858:
                    ptr1 += 3;
                }
                else if(v7) {
                    break;
                }
                else {
                    v7 = 1;
                    ptr1 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
                }
            }
            *param6 = v2;
            if(v3 != 1) {
                ptr0 = NULL;
            }
            result1 = ptr0;
        }
    }
    return result1;
}

void sub_402BD8() {
}

int sub_402C00() {
    int v0;
    sub_402414();
    if(gvar_40A57C != &sub_402C00) {
        gvar_40A57C{sub_402C00}();
    }
    int result = sub_406EC0();
    *(int*)__FS_BASE = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402D50(int* param0) {
    char v0;
    int* ptr0;
    int result;
    int* ptr1 = param0;
    if(!ptr1) {
        sub_402D9C(&v0);
        ptr1 = ptr0;
    }
    int v1 = sub_401140();
    sub_40213C((int*)v1, ptr1, 156);
    sub_402BD8();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_402D9C(int* param0) {
    int* ptr0 = param0;
    int v0 = sub_401140();
    gvar_40A5CC = (unsigned int)(v0 + 28);
    *ptr0 = -2106428599;
    *(ptr0 + 1) = 4236728;
    return (unsigned int)(v0 + 28);
}

int sub_402DC4() {
    return 1;
}

LONG sub_402DD0(unsigned int* param0, int param1, void* param2, int param3) {
    LONG result;
    int v0;
    if(*param0 == 0xeedfae6) {
        result = 0;
    }
    else {
        int v1 = *param0;
        if(v1 == 0xeefface || v1 == 0xeedface) {
            sub_402F9A(v0, (int)param0);
            sub_402CA4();
        }
        if(*param0 == 0xc00000fd && gvar_40A69C) {
            sub_406E08("Stack Overflow!");
        }
        if(gvar_40C8BC) {
            int v2 = gvar_40C8BC((int)param0, param1, (int)param2, param3);
            if(v2) {
                goto loc_402E53;
            }
            else {
                result = 0;
            }
        }
        else {
        loc_402E53:
            if(gvar_40C8B8) {
                int v3 = gvar_40C8B8((int)param0, param1, (int)param2, param3);
                if(v3) {
                    goto loc_402E74;
                }
                else {
                    result = 0;
                }
            }
            else {
            loc_402E74:
                if(gvar_40CCE4) {
                    int v4 = *gvar_40CCE4;
                    if(v4 == 1 || v4 == 2) {
                        unsigned int v5 = *param0;
                        if(v5 < 0xeedface || v5 > 0xeefface) {
                            sub_408021(2, 3);
                        }
                    }
                }
                unsigned int* ptr0 = param0;
                result = →KERNEL32.DLL!UnhandledExceptionFilter(&ptr0);
            }
        }
    }
    return result;
}

int* sub_402EC0(int* param0) {
    int* ptr0 = param0;
    ptr0[0] = 0;
    ptr0[1] = &sub_402DD0;
    return sub_402F4C(ptr0);
}

unsigned int* sub_402EDC(unsigned int* param0) {
    return sub_402F61(param0);
}

unsigned int sub_402EEC(unsigned int param0) {
    unsigned int result = gvar_40C8BC;
    gvar_40C8BC = param0;
    return result;
}

int* sub_402F38() {
    int* result = gvar_40CCC0;
    if(result) {
        result = sub_402EC0(result);
    }
    return result;
}

int* sub_402F4C(int* param0) {
    int* result = param0;
    *result = *(int*)0;
    *(int**)0 = result;
    return result;
}

unsigned int* sub_402F61(unsigned int* param0) {
    unsigned int* result = param0;
    unsigned int* ptr0 = *(unsigned int**)0;
    if(result == ptr0) {
        result = *result;
        *(unsigned int**)0 = result;
    }
    else {
        while(ptr0 != -1) {
            if(*ptr0 != result) {
                ptr0 = *ptr0;
            }
            else {
                result = *result;
                *ptr0 = result;
                return result;
            }
        }
    }
    return result;
}

int sub_402FB8(unsigned int param0) {
    if(gvar_40AB68 <= param0) {
        return 0;
    }
    DWORD v0 = →KERNEL32.DLL!GetFileType(*(HANDLE*)(param0 * 4 + (int)&gvar_40C988));
    return ((unsigned int)(v0 == 2 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_402FE8(HANDLE hFile) {
    DWORD v0 = →KERNEL32.DLL!GetFileType(hFile);
    return ((unsigned int)(v0 == 2 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_403194(char* param0) {
    if(param0) {
        *param0 = 0;
    }
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403228(unsigned int param0, LPCVOID param1, DWORD nNumberOfBytesToWrite) {
    return sub_403078(param0, param1, nNumberOfBytesToWrite);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_403244(int* param0, int param1, int param2, int param3) {
    int result;
    int* ptr0 = param0;
    int v0 = param3;
    int v1 = param1;
    if((*(char*)((char*)ptr0 + 18) & 0x4)) {
        sub_4013F0(*(ptr0 + 1));
    }
    *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) & 0xfff3;
    *(ptr0 + 3) = 0;
    *(unsigned int*)(ptr0 + 1) = ptr0 + 5;
    *ptr0 = ptr0 + 5;
    if(param2 != 2 && v0 != 0) {
        gvar_40BA5C = &gvar_40440C;
        if(!v1) {
            int v2 = sub_4013E0(v0);
            v1 = v2;
            if(v2) {
                *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x4;
                goto loc_4032A7;
            }
            else {
                result = -1;
            }
        }
        else {
        loc_4032A7:
            *ptr0 = v1;
            *(ptr0 + 1) = v1;
            *(ptr0 + 3) = v0;
            if(param2 == 1) {
                *(short*)((char*)ptr0 + 18) = *(short*)((char*)ptr0 + 18) | 0x8;
            }
            return 0;
        }
    }
    else {
        result = 0;
    }
    return result;
}

unsigned int sub_4033A0(unsigned int param0) {
    gvar_40AC38 = param0;
    return param0;
}

unsigned int* sub_4033B0(unsigned int* param0) {
    unsigned int* result = param0;
    if(result) {
        result = *result;
        gvar_40A6B4 = result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4033C4(int* param0, int param1, unsigned int* param2) {
    int result;
    unsigned int* ptr0 = param2;
    int v0 = param1;
    int* ptr1 = param0;
    if((*((char*)&ptr0[4] + 2) & 0x8)) {
        int v1 = v0;
        if(v1) {
            do {
                int v2 = sub_4037D4(*(char*)&ptr1[0], ptr0);
                if(!(v2 + 1)) {
                    return 0;
                }
                --v1;
                ptr1 = (int*)((char*)ptr1 + 1);
                if(!v1) {
                    goto loc_403404;
                }
            }
            while(1);
        }
        else {
        loc_403404:
            result = v0;
        }
    }
    else {
        unsigned int v3 = ptr0[3];
        if(v3 && v3 >= (unsigned int)v0) {
            unsigned int v4 = ptr0[2];
            if((int)(v4 + v0) < 0) {
            loc_403448:
                sub_40213C(ptr0[0], ptr1, v0);
                ptr0[2] += v0;
                result = v0;
                ptr0[0] += v0;
            }
            else if(!v4) {
                ptr0[2] = (unsigned int)(-1 - v3);
                goto loc_403448;
            }
            else {
                int v5 = sub_4032C4(ptr0);
                if(!v5) {
                    goto loc_403448;
                }
                else {
                    result = 0;
                }
            }
        }
        else if(ptr0[3] && ptr0[2]) {
            int v6 = sub_4032C4(ptr0);
            if(!v6) {
                int v7 = sub_403078((unsigned int)*((char*)&ptr0[5] + 2), ptr1, (DWORD)v0);
                return v7 == -1 || (unsigned int)v7 < (unsigned int)v0 ? 0: v0;
            }
            result = 0;
        }
        else {
            int v7 = sub_403078((unsigned int)*((char*)&ptr0[5] + 2), ptr1, (DWORD)v0);
            result = v7 == -1 || (unsigned int)v7 < (unsigned int)v0 ? 0: v0;
        }
    }
    return result;
}

int sub_4034A0(unsigned int param0, int* param1) {
    int result = 0;
    for(int* i = (int*)&gvar_40AB6C; gvar_40AB68 > result && *i; ++i) {
        ++result;
    }
    if(gvar_40AB68 == result) {
        return -1;
    }
    *(unsigned int*)(result * 4 + (int)&gvar_40AB6C) = param1;
    *(unsigned int*)(result * 4 + (int)&gvar_40C988) = param0;
    return result;
}

int sub_4034E0(unsigned int param0, int param1, unsigned int param2) {
    int result = param1;
    if(result == -1) {
        result = 0;
        for(int* i = (int*)&gvar_40AB6C; (gvar_40AB68 > result && *i); ++i) {
            ++result;
        }
    }
    unsigned int v0 = gvar_40AB68;
    if(v0 <= param0 || (unsigned int)result >= v0) {
        return -1;
    }
    v0 = *(unsigned int*)(param0 * 4 + (int)&gvar_40AB6C);
    if(!v0 || *(int*)(result * 4 + (int)&gvar_40AB6C)) {
        return -1;
    }
    *(unsigned int*)(result * 4 + (int)&gvar_40AB6C) = v0;
    *(unsigned int*)(result * 4 + (int)&gvar_40C988) = param2;
    return result;
}

unsigned int sub_403548(unsigned int param0) {
    if(gvar_40AB68 > param0) {
        *(int*)(param0 * 4 + (int)&gvar_40AB6C) = 0;
    }
    return param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_403564(int* param0) {
    int* result;
    int v0 = gvar_40AB68;
    int* ptr0 = param0;
    int* ptr1 = (int*)(v0 * 4 + &gvar_40AB68);
    if(v0) {
        while(!*ptr1) {
            --v0;
            --ptr1;
            if(!v0) {
                break;
            }
        }
    }
    if(!ptr0) {
        result = !v0 ? NULL: (int*)(v0 * 5 + 4);
    }
    else {
        *ptr0 = v0;
        int v1 = 0;
        int* ptr2 = ptr0 + 1;
        int* ptr3 = (int*)&gvar_40AB6C;
        if(v0 > 0) {
            do {
                char v2 = 1;
                int v3 = *ptr3;
                if(((unsigned char)(v3 >>> 8) & 0x8)) {
                    v2 = 33;
                }
                if(!((unsigned char)(v3 >>> 8) & 0x80)) {
                    v2 |= 128;
                }
                if(((unsigned char)(v3 >>> 8) & 0x20)) {
                    v2 |= 64;
                }
                *(char*)&ptr2[0] = v2;
                ptr2 = (int*)((char*)ptr2 + 1);
                ++v1;
                ++ptr3;
            }
            while(v0 > v1);
        }
        sub_40213C(ptr2, (int*)&gvar_40C988, v0 * 4);
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4037D4(char param0, unsigned int* param1) {
    int result;
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = (unsigned int)v0 | ((unsigned int)v1 << 8);
    unsigned int* ptr0 = param1;
    v0 = param0;
    (v3 >>> 16) & 0xFF = param0;
    if((int)ptr0[2] < -1) {
        sub_40213C(ptr0[0], (int*)((char*)&v3 + 2), 1);
        ++ptr0[2];
        ++ptr0[0];
        if((*((char*)&ptr0[4] + 2) & 0x8) && (v0 == 10 || v0 == 13)) {
            int* ptr1 = (int*)sub_4032C4(ptr0);
            if(!ptr1) {
                goto loc_40382C;
            }
            else {
                result = -1;
            }
        }
        else {
        loc_40382C:
            result = (unsigned int)v0;
        }
    }
    else {
        int v5 = (unsigned int)*(short*)((char*)&ptr0[4] + 2) | ((unsigned int)0xFFFF << 16);
        if(((unsigned char)v5 & 0x90) || !((unsigned char)v5 & 0x2)) {
            *(short*)((char*)&ptr0[4] + 2) = *(short*)((char*)&ptr0[4] + 2) | 0x10;
            result = -1;
        }
        else {
            *(short*)((char*)&ptr0[4] + 2) = *(short*)((char*)&ptr0[4] + 2) | 0x100;
            if(!ptr0[3]) {
                int v6 = sub_403078((unsigned int)*((char*)&ptr0[5] + 2), (LPCVOID)((char*)&v3 + 2), 1);
                if(v6 != 1 && !(*((char*)&ptr0[4] + 3) & 0x2)) {
                    *(short*)((char*)&ptr0[4] + 2) = *(short*)((char*)&ptr0[4] + 2) | 0x10;
                    result = -1;
                }
                else {
                    result = (unsigned int)v0;
                }
            }
            else if(ptr0[2]) {
                int v7 = sub_4032C4(ptr0);
                if(!v7) {
                    goto loc_403876;
                }
                else {
                    result = -1;
                }
            }
            else {
            loc_403876:
                ptr0[2] = (unsigned int)(0 - ptr0[3]);
                sub_40213C(ptr0[0], (int*)((char*)&v3 + 2), 1);
                ++ptr0[0];
                if((*((char*)&ptr0[4] + 2) & 0x8) && (v0 == 10 || v0 == 13)) {
                    int* ptr2 = (int*)sub_4032C4(ptr0);
                    if(!ptr2) {
                        return (unsigned int)v0;
                    }
                    result = -1;
                }
                else {
                    result = (unsigned int)v0;
                }
            }
        }
    }
    return result;
}

char* sub_403A9C(int param0, int param1) {
    int v0 = 7;
    int v1 = param0;
    char* result = (char*)(param1 + 7);
    do {
        *result = (v1 & 0xf) < 10 ? (unsigned char)(v1 & 0xf) + 48: (unsigned char)(v1 & 0xf) + 55;
        v1 >>>= 4;
        --v0;
        --result;
    }
    while(v0 >= 0);
    return result;
}

int sub_404434(int param0) {
    unsigned int v0 = gvar_40B59C;
    switch(param0) {
        case 14: {
            return *(int*)(*(int*)(v0 + 24) + 4);
        }
        case 15: {
            return **(unsigned int*)(v0 + 24);
        }
        case 16: {
            return *(int*)(*(int*)(v0 + 24) + 8);
        }
        case 80: {
            return *(int*)(*(int*)(v0 + 24) + 12);
        }
        case 81: {
            return *(int*)(*(int*)(v0 + 24) + 16);
        }
        default: {
            return 0;
        }
    }
}

int sub_404488(unsigned int param0) {
    return sub_404690(param0, 260);
}

int sub_4044A0(unsigned int param0) {
    int v0;
    return ((unsigned int)(param0 < 128 ? 1: 0) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_4044B4(unsigned int param0) {
    return sub_404690(param0, 0x100);
}

int sub_4044CC(unsigned int param0) {
    return sub_404690(param0, 32);
}

int sub_4044E0(unsigned int param0) {
    return sub_404690(param0, 4);
}

int sub_4044F4(unsigned int param0) {
    return sub_404690(param0, 404);
}

int sub_40450C(unsigned int param0) {
    return sub_404690(param0, 2);
}

int sub_404520(unsigned int param0) {
    return sub_404690(param0, 468);
}

int sub_404538(unsigned int param0) {
    return sub_404690(param0, 16);
}

int sub_40454C(unsigned int param0) {
    return sub_404690(param0, 8);
}

int sub_404560(unsigned int param0) {
    return sub_404690(param0, 1);
}

int sub_404574(unsigned int param0) {
    return sub_404690(param0, 128);
}

int sub_40458C(short param0) {
    return sub_4046D4((int)param0, 260);
}

int sub_4045A4(unsigned short param0) {
    return ((unsigned int)(param0 < 128 ? 1: 0) | ((unsigned int)(((unsigned int)param0 >>> 8) & 0xffffff) << 8)) & 0x1;
}

int sub_4045B8(short param0) {
    return sub_4046D4((int)param0, 0x100);
}

int sub_4045D0(short param0) {
    return sub_4046D4((int)param0, 32);
}

int sub_4045E4(short param0) {
    return sub_4046D4((int)param0, 4);
}

int sub_4045F8(short param0) {
    return sub_4046D4((int)param0, 404);
}

int sub_404610(short param0) {
    return sub_4046D4((int)param0, 2);
}

int sub_404624(short param0) {
    return sub_4046D4((int)param0, 468);
}

int sub_40463C(short param0) {
    return sub_4046D4((int)param0, 16);
}

int sub_404650(short param0) {
    return sub_4046D4((int)param0, 8);
}

int sub_404664(short param0) {
    return sub_4046D4((int)param0, 1);
}

int sub_404678(short param0) {
    return sub_4046D4((int)param0, 128);
}

int sub_404690(unsigned int param0, int param1) {
    if(param0 > 0xff) {
        return 0;
    }
    unsigned int v0 = gvar_40B59C;
    if(*(int*)(v0 + 8) || !*(int*)(v0 + 16)) {
        return (unsigned int)*(unsigned short*)((unsigned int)(unsigned short)param0 * 2 + (int)&gvar_40B25E) & param1;
    }
    return (unsigned int)*(short*)(param0 * 2 + *(int*)(v0 + 16) + 2) & param1;
}

int sub_4046D4(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    if(param0 == 0xFFFF) {
        result = 0;
    }
    else if(*(int*)(gvar_40B59C + 8) && param0 < 0x100) {
        result = (unsigned int)*(unsigned short*)((int)(unsigned short)param0 * 2 + (int)&gvar_40B25E) & param1;
    }
    else {
        →KERNEL32.DLL!GetStringTypeW(1, &param0, 1, (LPWORD)((char*)&v1 + 2));
        result = (v1 >>> 16) & param1;
    }
    return result;
}

int sub_40472C(LPCCH lpMultiByteStr, int param1) {
    if(!lpMultiByteStr || !lpMultiByteStr[0] || !param1) {
        return 0;
    }
    else if(!(*(char*)((unsigned int)lpMultiByteStr[0] + 4246101) & 0x4)) {
        int v0 = →KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, 1, NULL, 0);
        if(!v0) {
            return -1;
        }
        return 1;
    }
    else if(param1 >= 2) {
        LPCCH v1 = (LPCCH)→KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, 2, NULL, 0);
        if(!v1) {
            return -1;
        }
        return 2;
    }
    return -1;
}

int sub_4047A8(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, int param2) {
    int result;
    if(!lpMultiByteStr || !param2) {
        result = 0;
    }
    else if(!lpMultiByteStr[0]) {
        if(lpWideCharStr) {
            lpWideCharStr[0] = 0;
        }
        result = 0;
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        if(lpWideCharStr) {
            lpWideCharStr[0] = (WCHAR)lpMultiByteStr[0];
        }
        result = 1;
    }
    else if(!(*(char*)((unsigned int)lpMultiByteStr[0] + 4246101) & 0x4)) {
        int v0 = →KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0 ? 1: 0);
        result = !v0 ? -1: 1;
    }
    else if(param2 >= 2) {
        LPWSTR v1 = (LPWSTR)→KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, 2, lpWideCharStr, lpWideCharStr != 0 ? 1: 0);
        result = v1 ? 2: param2 < 2 || !lpMultiByteStr[1] ? -1: 2;
    }
    else {
        result = param2 < 2 || !lpMultiByteStr[1] ? -1: 2;
    }
    return result;
}

int sub_40487C(LPSTR lpMultiByteStr, CHAR param1) {
    int v0;
    if(!lpMultiByteStr) {
        return 0;
    }
    else if(!*(int*)(gvar_40B59C + 8)) {
        int result = →KERNEL32.DLL!WideCharToMultiByte(*gvar_40B59C, 544, &param1, 1, lpMultiByteStr, 2, NULL, &v0);
        if(!result) {
            return -1;
        }
        return result;
    }
    else if(param1 > 0xff) {
        return -1;
    }
    lpMultiByteStr[0] = param1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4048F0(LPWSTR param0, LPCCH param1, int cchWideChar) {
    int result1;
    LPCCH lpMultiByteStr = param1;
    LPWSTR lpWideCharStr = param0;
    int result = 0;
    if(lpWideCharStr && !cchWideChar) {
        result1 = 0;
    }
    else if(lpWideCharStr) {
        if(!*(int*)(gvar_40B59C + 8)) {
            int v0 = →KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, -1, lpWideCharStr, cchWideChar);
            if(v0) {
                result1 = v0 - 1;
            }
            else {
                DWORD v1 = →KERNEL32.DLL!GetLastError();
                if(v1 != 122) {
                    result1 = -1;
                }
                else {
                    int v2 = cchWideChar;
                    LPCCH v3 = lpMultiByteStr;
                    while(1) {
                        int v4 = v2;
                        --v2;
                        if(!v4 || !v3[0]) {
                            break;
                        }
                        else {
                            if((*(char*)((unsigned int)v3[0] + 4246101) & 0x4)) {
                                ++v3;
                            }
                            ++v3;
                        }
                    }
                    int v5 = →KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 1, lpMultiByteStr, (int)v3 - (int)lpMultiByteStr, lpWideCharStr, cchWideChar);
                    result1 = !v5 ? -1: v5;
                }
            }
        }
        else if((unsigned int)cchWideChar > 0) {
            do {
                lpWideCharStr[0] = (WCHAR)lpMultiByteStr[result];
                if(!lpMultiByteStr[result]) {
                    return result;
                }
                ++result;
                ++lpWideCharStr;
                if((unsigned int)result >= (unsigned int)cchWideChar) {
                    goto loc_404947;
                }
            }
            while(1);
        }
        else {
        loc_404947:
            result1 = result;
        }
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        result1 = sub_402250((int)lpMultiByteStr);
    }
    else {
        int v6 = →KERNEL32.DLL!MultiByteToWideChar(*gvar_40B59C, 9, lpMultiByteStr, -1, NULL, 0);
        result1 = !v6 ? -1: v6 - 1;
    }
    return result1;
}

int* sub_404A1C(short* param0, int* param1) {
    int* ptr0 = (int*)((char*)param1 + 1);
    short* ptr1 = param0;
    while(1) {
        ptr0 = (int*)((char*)ptr0 - 1);
        if(ptr0) {
            if(*ptr1) {
                ++ptr1;
                continue;
            }
            else if(!*ptr1) {
                int* ptr2 = (int*)((int)ptr1 - (int)param0);
                int* ptr3 = (int*)((int)ptr2 >> 1);
                if((int)ptr3 < 0) {
                    ptr3 = (int*)((unsigned int)(int*)((int)ptr2 & 0x1) + (int)ptr3);
                }
                return (int*)((char*)ptr3 + 1);
            }
        }
        return param1;
    }
    return param1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404A58(LPSTR lpMultiByteStr, LPCWCH lpWideCharStr, int cbMultiByte) {
    LPCWCH v0;
    int result2;
    char v1;
    int v2 = 0;
    int result1 = 0;
    if(lpMultiByteStr && !cbMultiByte) {
        result2 = 0;
    }
    else if(lpMultiByteStr) {
        if(!*(int*)(gvar_40B59C + 4)) {
            int result = →KERNEL32.DLL!WideCharToMultiByte(*gvar_40B59C, 544, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, NULL, &v2);
            if(result && !v2) {
                result2 = result - 1;
            }
            else if(!v2) {
                DWORD v3 = →KERNEL32.DLL!GetLastError();
                if(v3 != 122) {
                    goto loc_404B1E;
                }
                else if((unsigned int)result < (unsigned int)cbMultiByte) {
                    int v4 = →KERNEL32.DLL!WideCharToMultiByte(*gvar_40B59C, 0, lpWideCharStr, 1, &v1, 2, NULL, &v2);
                    while((v4 && !v2)) {
                        if((unsigned int)(LPCWCH)(result + v4) > (unsigned int)cbMultiByte) {
                            return result;
                        }
                        int v5 = 0;
                        v0 = (short*)&lpMultiByteStr[result];
                        LPSTR v6 = &v1;
                        if(v4 > 0) {
                            do {
                                LPCWCH v7 = (unsigned int)v6[0] | ((unsigned int)(int*)((int)(int*)((int)v7 >>> 8) & 0xffffff) << 8);
                                *(char*)&v0[0] = (unsigned char)v7;
                                if(!(unsigned char)v7) {
                                    return result;
                                }
                                ++v6;
                                ++v5;
                                v0 = (LPCWCH)((char*)v0 + 1);
                                ++result;
                            }
                            while(v5 < v4);
                        }
                        ++lpWideCharStr;
                        if((unsigned int)result >= (unsigned int)cbMultiByte) {
                            goto loc_404BA3;
                        }
                        else {
                            v4 = →KERNEL32.DLL!WideCharToMultiByte(*gvar_40B59C, 0, lpWideCharStr, 1, &v1, 2, NULL, &v2);
                        }
                    }
                    result2 = -1;
                }
                else {
                loc_404BA3:
                    result2 = result;
                }
            }
            else {
            loc_404B1E:
                result2 = -1;
            }
        }
        else if((unsigned int)cbMultiByte > 0) {
            while(lpWideCharStr[0] <= 0xff) {
                lpMultiByteStr[result1] = *(char*)&lpWideCharStr[0];
                v0 = lpWideCharStr;
                ++lpWideCharStr;
                if(!v0[0]) {
                    return result1;
                }
                ++result1;
                if((unsigned int)result1 >= (unsigned int)cbMultiByte) {
                    goto loc_404ACC;
                }
            }
            result2 = -1;
        }
        else {
        loc_404ACC:
            result2 = result1;
        }
    }
    else if(*(int*)(gvar_40B59C + 8)) {
        result2 = sub_4023BC((short*)lpWideCharStr);
    }
    else {
        int v8 = →KERNEL32.DLL!WideCharToMultiByte(*gvar_40B59C, 544, lpWideCharStr, -1, NULL, 0, NULL, &v2);
        result2 = !v8 || v2 ? -1: v8 - 1;
    }
    return result2;
}

int sub_404DFC(int param0) {
    int result;
    int v0 = param0;
    if(v0 >= 0xffffecbc) {
        if(v0 > 0x1344) {
            result = 0x40b776;
        }
        else if(v0) {
            int v1 = v0;
            if(v0 < 0) {
                v1 = 0 - v0;
            }
            unsigned int v2 = *(unsigned int*)((v1 & 0x7) * 10 + (int)&gvar_40B6C0);
            unsigned int v3 = *(unsigned int*)((v1 & 0x7) * 10 + (int)&gvar_40B6C4);
            unsigned short v4 = *(unsigned short*)((v1 & 0x7) * 10 + (int)&gvar_40B6C8);
            if(((unsigned char)(v1 >>> 3) & 0x1)) {
                *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownPF80)0x40B710 * *(__SyntheticTypeUnknownP80)&v2;
                wait();
            }
            result = (v1 >> 3) >> 1;
            if(result) {
                if(((unsigned char)result & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownPF80)0x40B71C * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(result >>> 1) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B726 * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(result >>> 2) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B730 * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(result >>> 3) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B73A * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(result >>> 4) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B744 * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(result >>> 5) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B74E * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                int v5 = (((((result >> 1) >> 1) >> 1) >> 1) >> 1) >> 1;
                if(((unsigned char)v5 & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B758 * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                if(((unsigned char)(v5 >>> 1) & 0x1)) {
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B762 * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
                result = (v5 >> 1) >> 1;
                if(((unsigned char)result & 0x1)) {
                    result = &gvar_40B76C;
                    *(__SyntheticTypeUnknownP80)&v2 = *(__SyntheticTypeUnknownP80)&gvar_40B76C * *(__SyntheticTypeUnknownP80)&v2;
                    wait();
                }
            }
            if(v0 < 0) {
                0x3f800000 = fdivr(0x3f800000);
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404FC8() {
    return sub_406E08("printf : floating point formats not linked");
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_404FCE() {
    return sub_406E08("printf : floating point formats not linked");
}

void sub_404FD4() {
    jump gvar_40B788;
}

void sub_404FDA() {
    jump gvar_40B78C;
}

long long* sub_405028(long long* param0) {
    return param0;
}

void sub_405058() {
    // Decompilation error
}

void sub_40507C() {
    // Decompilation error
}

char* sub_405090(unsigned int param0, int param1, char* param2, int param3, char param4, char param5) {
    char v0;
    int v1;
    int v2;
    unsigned int v3;
    int v4 = param3;
    char* ptr0 = param2;
    if(v4 >= 2 && v4 <= 36) {
        if(!param1) {
            if(param0 < 0) {
                goto loc_4050C5;
            }
        }
        else if(param1 < 0) {
        loc_4050C5:
            if(param4) {
                *ptr0 = 45;
                ++ptr0;
                param1 = 0 - ((unsigned int)(param0 > 0) + param1);
            }
        }
        char* ptr1 = &v0;
        do {
            int v5 = sub_404D5A(v2, param1, v4, v4 < 0 ? -1: 0);
            *ptr1 = (unsigned char)v5;
            ++ptr1;
            v3 = (unsigned int)sub_404C97(v2, param1, v4, v4 < 0 ? -1: 0);
            param0 = v3;
            param1 = v1;
        }
        while(v1 || v3);
        while(ptr1 != &v0) {
            --ptr1;
            v3 = (unsigned int)*ptr1 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
            if((unsigned char)v3 < 10) {
                v3 += 48;
            }
            else {
                v3 = (unsigned int)((unsigned char)v3 + param5 + 246) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
            }
            *ptr0 = (unsigned char)v3;
            ++ptr0;
        }
    }
    *ptr0 = 0;
    return param2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_405144(int param0, short v3, short v4, unsigned short param3, int param4, int param5) {
    unsigned short v0;
    int v1;
    unsigned short v2;
    short v3;
    short v4;
    short v5;
    int v6 = (unsigned int)v2 | ((unsigned int)v5 << 16);
    if(!param0) {
        v0 = 16510;
        v2 = 16234;
    }
    else {
        v0 = 17406;
        v2 = 0x3bcd;
    }
    int result = &v3;
    short v7 = param3 & 0x8000;
    if((param3 & 0x7fff) == 0x7fff) {
        wait();
    }
    else if((param3 & 0x7fff) > v0) {
        result = param5;
        goto loc_40522D;
    }
    else if((param3 & 0x7fff) == v0) {
        unsigned int v8 = (unsigned int)sub_404F98(0, 0);
        sub_404F98(0xc00, 0xc00);
        if(!param0) {
            wait();
            *(long long*)&v1 = *(__SyntheticTypeUnknownP80)&v3;
            wait();
        }
        else {
            *(long long*)&v1 = *(__SyntheticTypeUnknownP80)&v3;
            wait();
        }
        result = sub_404F98(v8, 0xc00);
    }
    else if(!(unsigned short)((param3 & 0x7fff) | v3 | v3 | v4 | v4)) {
        wait();
    }
    else {
        if((param3 & 0x7fff) >= v2) {
            wait();
            return result;
        }
        result = 0;
    loc_40522D:
        gvar_40B9FC = 34;
        if((param3 & 0x8000)) {
            fchs();
            return result;
        }
    }
    return result;
}

int sub_4052EC(int* param0) {
    int* ptr0 = param0;
    switch(*ptr0) {
        case 4: {
            *(ptr0 + 6) = 0;
            *(ptr0 + 7) = 0;
            return 1;
        }
        case 5: {
            return 1;
        }
        default: {
            return 0;
        }
    }
}

int sub_405318(int* param0) {
    int* ptr0 = param0;
    switch(*ptr0) {
        case 4: {
            *(ptr0 + 7) = 0;
            *(ptr0 + 8) = 0;
            *(short*)(ptr0 + 9) = 0;
            return 1;
        }
        case 5: {
            return 1;
        }
        default: {
            return 0;
        }
    }
}

unsigned int sub_405348(unsigned int param0, unsigned int param1) {
    gvar_40B8D8 = param0;
    gvar_40B8DC = param1;
    return param0;
}

int sub_405360(unsigned int* param0) {
    unsigned int* ptr0 = param0;
    unsigned int v0 = 0;
    unsigned int v1 = *(ptr0 + 1);
    if(v1) {
        v0 = v1 % 10;
        *(ptr0 + 1) = v1 / 10;
    }
    int v2 = *ptr0;
    *ptr0 = (unsigned int)((unsigned long long)v2 | ((unsigned long long)v0 << 32)) / 10;
    return (int)((unsigned int)((unsigned long long)v2 | ((unsigned long long)v0 << 32)) % 10);
}

int sub_405388(int* param0, int param1) {
    int* ptr0 = param0;
    int v0 = *ptr0;
    int v1 = (unsigned int)(((unsigned long long)v0 * 10L) >>> 32L) + (unsigned int)__carry__(v0 * 10, param1);
    *ptr0 = v0 * 10 + param1;
    int v2 = *(ptr0 + 1);
    *(ptr0 + 1) = v2 * 10 + v1;
    return (unsigned int)(((unsigned long long)v2 * 10L) >>> 32L) + (unsigned int)__carry__(v2 * 10, v1);
}

unsigned int sub_4053B8(int param0, unsigned int param1, unsigned int param2) {
    unsigned int result;
    unsigned int v0 = param2;
    int v1 = sub_404434(14);
    if((unsigned char)param0 == 71 || (unsigned char)param0 == 103) {
        while(1) {
            if(*(char*)(v0 - 1) != 48) {
                goto loc_4053EF;
            }
            else {
                --v0;
                if(v0 <= param1) {
                    return param1;
                }
            }
        }
    }
    else {
    loc_4053EF:
        if(*(char*)(v0 - 1) == *(char*)v1) {
            --v0;
        }
        result = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
short* sub_4053FC(float* param0, int param1, unsigned int param2, char param3, char param4, int param5) {
    int* ptr0;
    int j;
    int i;
    short* result;
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    int v5 = sub_404434(14);
    char v6 = *(char*)v5;
    if(param1 > 40) {
        param1 = 40;
    }
    int v7 = param1;
    char v8 = param3 & 0xdf;
    if((param3 & 0xdf) == 70) {
        v0 = 0 - v7;
        if(v0 > 0) {
            v0 = 0;
            param1 = 0;
        }
    }
    else {
        v0 = v7;
        if(v0 <= 0) {
            v0 = 1;
        }
        else if(v8 == 69) {
            ++v0;
            ++param1;
        }
    }
    int counter = sub_4063AC(param0, v0, &v1, &v4, param5);
    short* ptr1 = (short*)param2;
    switch(counter) {
        case 32766: {
            char* ptr2 = v1 != 0 ? "-NAN": "+NAN";
            int v9 = -1;
            while(v9 != 0) {
                char v10 = *ptr2 == 0;
                ++ptr2;
                --v9;
                if(!~v10) {
                    break;
                }
            }
            short* ptr3 = ptr1;
            int* ptr4 = (int*)((int)ptr2 - ~v9);
            int v11 = ~v9 >>> 2;
            result = ptr3;
            while(v11 != 0) {
                *(int*)&ptr3[0] = *ptr4;
                ++ptr4;
                ptr3 += 2;
                --v11;
            }
            for(i = ~v9 & 0x3; i != 0; --i) {
                *(char*)&ptr3[0] = *(char*)ptr4;
                ptr4 = (int*)((char*)ptr4 + 1);
                ptr3 = (short*)((char*)ptr3 + 1);
            }
            return result;
        }
        case 32767: {
            char* ptr5 = v1 != 0 ? "-INF": "+INF";
            int v12 = -1;
            while(v12 != 0) {
                char v13 = *ptr5 == 0;
                ++ptr5;
                --v12;
                if(!~v13) {
                    break;
                }
            }
            short* ptr6 = ptr1;
            int* ptr7 = (int*)((int)ptr5 - ~v12);
            int v14 = ~v12 >>> 2;
            result = ptr6;
            while(v14 != 0) {
                *(int*)&ptr6[0] = *ptr7;
                ++ptr7;
                ptr6 += 2;
                --v14;
            }
            for(i = ~v12 & 0x3; i != 0; --i) {
                *(char*)&ptr6[0] = *(char*)ptr7;
                ptr7 = (int*)((char*)ptr7 + 1);
                ptr6 = (short*)((char*)ptr6 + 1);
            }
            return result;
        }
        default: {
            if(v1) {
                *(char*)&ptr1[0] = 45;
                ptr1 = (short*)((char*)ptr1 + 1);
            }
            if((v8 == 70 || (v8 == 71 && counter >= -3 && (!param1 ? 1: param1) >= counter)) && counter <= 40) {
                if(counter <= 0) {
                    *(char*)&ptr1[0] = 48;
                    j = (unsigned int)v6 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                    *((char*)&ptr1[0] + 1) = (unsigned char)j;
                    ++ptr1;
                    if(counter) {
                        do {
                            *(char*)&ptr1[0] = 48;
                            ptr1 = (short*)((char*)ptr1 + 1);
                            ++counter;
                        }
                        while(counter);
                    }
                }
                int v15 = 0;
                result = &v4;
                for(j = (unsigned int)*(char*)&result[0] | ((unsigned int)((j >>> 8) & 0xffffff) << 8); (unsigned char)j; j = (unsigned int)*(char*)&result[0] | ((unsigned int)((j >>> 8) & 0xffffff) << 8)) {
                    *(char*)&ptr1[0] = (unsigned char)j;
                    ptr1 = (short*)((char*)ptr1 + 1);
                    --counter;
                    if(!counter) {
                        j = (unsigned int)v6 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                        *(char*)&ptr1[0] = (unsigned char)j;
                        ptr1 = (short*)((char*)ptr1 + 1);
                        ++v15;
                    }
                    result = (short*)((char*)result + 1);
                }
                int v16 = v15 + v7;
                if(v16 < param1) {
                    int v17 = param1 - v16;
                    result = sub_4021AC(ptr1, '0', v17);
                    ptr1 = (short*)((int)ptr1 + v17);
                }
                else if((counter - 1) && !param4) {
                    result = (short*)sub_4053B8((unsigned int)param3 | ((unsigned int)((j >>> 8) & 0xffffff) << 8), param2, (unsigned int)ptr1);
                    ptr1 = result;
                }
                if(ptr1 == param2) {
                    *(char*)&ptr1[0] = 48;
                    ptr1 = (short*)((char*)ptr1 + 1);
                }
                *(char*)&ptr1[0] = 0;
            }
            else {
                j = (unsigned int)v4 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                *(char*)&ptr1[0] = (unsigned char)j;
                unsigned int v18 = (unsigned int)((char*)ptr1 + 1);
                j = (unsigned int)v3 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                char* ptr8 = &v2;
                if((unsigned char)j) {
                    i = (unsigned int)v6 | ((unsigned int)((i >>> 8) & 0xffffff) << 8);
                    *(char*)v18 = (unsigned char)i;
                    ++v18;
                    if((unsigned char)j) {
                        do {
                            *(char*)v18 = (unsigned char)j;
                            ++v18;
                            j = (unsigned int)*ptr8 | ((unsigned int)((j >>> 8) & 0xffffff) << 8);
                            ++ptr8;
                        }
                        while((unsigned char)j);
                    }
                    if(!param4) {
                        v18 = sub_4053B8((unsigned int)param3 | ((unsigned int)((i >>> 8) & 0xffffff) << 8), param2, v18);
                    }
                }
                else if(param4) {
                    *(char*)v18 = v6;
                    ++v18;
                }
                *(char*)v18 = (param3 & 0x20) | 0x45;
                short* ptr9 = (short*)(counter - 1);
                if((int)ptr9 < 0) {
                    ptr9 = (short*)(0 - (int)ptr9);
                    *(char*)(v18 + 1) = 45;
                    ptr0 = (int*)(v18 + 2);
                }
                else {
                    *(char*)(v18 + 1) = 43;
                    ptr0 = (int*)(v18 + 2);
                }
                int v19 = (int)ptr9 >= 1000 ? 4: (int)ptr9 >= 100 ? 3: 2;
                *(char*)((int)ptr0 + v19) = 0;
                result = (short*)((int)ptr0 + v19);
                short* ptr10 = (short*)((int)ptr0 + v19);
                if(v19) {
                    do {
                        ptr10 = (short*)((char*)ptr10 - 1);
                        *(char*)&ptr10[0] = (unsigned char)ptr9 % 10 + 48;
                        --v19;
                        result = (short*)((int)ptr9 / 10);
                        ptr9 = (short*)((int)ptr9 / 10);
                    }
                    while(v19);
                }
            }
            return result;
        }
    }
}

int sub_405684(int param0, int param1) {
    return param1 != 0 ? param0 + 12: param0 + 8;
}

unsigned int sub_4056B4(int param0, unsigned int param1, unsigned int param2) {
    unsigned int result;
    unsigned int v0 = param2;
    int v1 = sub_404434(14);
    if((unsigned short)param0 == 71 || (unsigned short)param0 == 103) {
        while(1) {
            if(*(short*)(v0 - 2) != 48) {
                goto loc_4056F2;
            }
            else {
                v0 -= 2;
                if(v0 <= param1) {
                    return param1;
                }
            }
        }
    }
    else {
    loc_4056F2:
        if(*(short*)(v0 - 2) == *(short*)v1) {
            v0 -= 2;
        }
        result = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
short* sub_405700(float* param0, int param1, unsigned int param2, short param3, short param4, int param5) {
    int* ptr0;
    int i;
    short* result;
    int v0;
    int v1;
    short v2;
    char v3;
    short v4;
    int v5 = sub_404434(14);
    short v6 = *(short*)v5;
    if(param1 > 40) {
        param1 = 40;
    }
    int v7 = param1;
    short v8 = param3 & 0xdf;
    if((param3 & 0xdf) == 70) {
        v0 = 0 - v7;
        if(v0 > 0) {
            v0 = 0;
            param1 = 0;
        }
    }
    else {
        v0 = v7;
        if(v0 <= 0) {
            v0 = 1;
        }
        else if(v8 == 69) {
            ++v0;
            ++param1;
        }
    }
    int counter = sub_406680(param0, v0, &v1, &v2, param5);
    short* ptr1 = (short*)param2;
    switch(counter) {
        case 32766: {
            return sub_4023D4(ptr1, v1 != 0 ? "-NAN": "+NAN");
        }
        case 32767: {
            return sub_4023D4(ptr1, v1 != 0 ? "-INF": "+INF");
        }
        default: {
            if(v1) {
                ptr1[0] = 45;
                ++ptr1;
            }
            if((v8 == 70 || (v8 == 71 && counter >= -3 && (!param1 ? 1: param1) >= counter)) && counter <= 40) {
                if(counter <= 0) {
                    ptr1[0] = 48;
                    i = (unsigned int)v6 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                    ptr1[1] = (short)i;
                    ptr1 += 2;
                    if(counter) {
                        do {
                            ptr1[0] = 48;
                            ++ptr1;
                            ++counter;
                        }
                        while(counter);
                    }
                }
                int v9 = 0;
                result = &v2;
                for(i = (unsigned int)result[0] | ((unsigned int)(unsigned short)(i >>> 16) << 16); (unsigned short)i; i = (unsigned int)result[0] | ((unsigned int)(unsigned short)(i >>> 16) << 16)) {
                    ptr1[0] = (short)i;
                    ++ptr1;
                    --counter;
                    if(!counter) {
                        i = (unsigned int)v6 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                        ptr1[0] = (short)i;
                        ++ptr1;
                        ++v9;
                    }
                    ++result;
                }
                int v10 = v9 + v7;
                if(v10 < param1) {
                    int v11 = param1 - v10;
                    result = sub_4021AC(ptr1, '0', v11);
                    ptr1 = &ptr1[v11];
                }
                else if((counter - 1) && !param4) {
                    result = (short*)sub_4056B4((unsigned int)param3 | ((unsigned int)(unsigned short)(i >>> 16) << 16), param2, (unsigned int)ptr1);
                    ptr1 = result;
                }
                if(ptr1 == param2) {
                    ptr1[0] = 48;
                    ++ptr1;
                }
                ptr1[0] = 0;
            }
            else {
                i = (unsigned int)v2 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                ptr1[0] = (short)i;
                unsigned int v12 = (unsigned int)(ptr1 + 1);
                i = (unsigned int)v4 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                short* ptr2 = &v3;
                if((unsigned short)i) {
                    int v13 = (unsigned int)v6 | ((unsigned int)(unsigned short)(v13 >>> 16) << 16);
                    *(short*)v12 = (unsigned short)v13;
                    v12 += 2;
                    if((unsigned short)i) {
                        do {
                            *(short*)v12 = (unsigned short)i;
                            v12 += 2;
                            i = (unsigned int)*ptr2 | ((unsigned int)(unsigned short)(i >>> 16) << 16);
                            ++ptr2;
                        }
                        while((unsigned short)i);
                    }
                    if(!param4) {
                        v12 = sub_4056B4((unsigned int)param3 | ((unsigned int)(unsigned short)(v13 >>> 16) << 16), param2, v12);
                    }
                }
                else if(param4) {
                    *(short*)v12 = v6;
                    v12 += 2;
                }
                *(short*)v12 = (param3 & 0x20) | 0x45;
                short* ptr3 = (short*)(counter - 1);
                if((int)ptr3 < 0) {
                    ptr3 = (short*)(0 - (int)ptr3);
                    *(short*)(v12 + 2) = 45;
                    ptr0 = (int*)(v12 + 4);
                }
                else {
                    *(short*)(v12 + 2) = 43;
                    ptr0 = (int*)(v12 + 4);
                }
                int v14 = (int)ptr3 >= 1000 ? 4: (int)ptr3 >= 100 ? 3: 2;
                *(short*)(v14 * 2 + (int)ptr0) = 0;
                result = (short*)(v14 * 2 + (int)ptr0);
                short* ptr4 = (short*)(v14 * 2 + (int)ptr0);
                if(v14) {
                    do {
                        --ptr4;
                        ptr4[0] = (unsigned short)ptr3 % 10 + 48;
                        --v14;
                        result = (short*)((int)ptr3 / 10);
                        ptr3 = (short*)((int)ptr3 / 10);
                    }
                    while(v14);
                }
            }
            return result;
        }
    }
}

int sub_4059B8(int param0, int param1) {
    return param1 != 0 ? param0 + 12: param0 + 8;
}

unsigned short sub_4059E8(int* param0, int param1, int param2, int param3, int param4, int* param5, int* param6) {
    char v0;
    unsigned int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    long long v4;
    int v5 = 0x8000;
    int v6 = 19;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    char v11 = 0;
    int v12 = 0;
    int v13 = -2;
    int v14 = 1;
    int v15 = 0;
    int v16 = 0;
    unsigned short result = 0;
    long long* ptr0 = &v15;
    int v17 = sub_404434(14);
    char v18 = *(char*)v17;
    do {
        ++v12;
        unsigned int v19 = (unsigned int)param1(param3);
        v1 = v19;
        v3 = (int)(v19 + 1);
        if(!v3) {
            v14 = -1;
        loc_405D20:
            if(param4 >= 0) {
                param2((int)v1, param3);
                --v12;
            }
            v15 = 0;
            v16 = 0;
            result = 0;
        loc_405CE1:
            if(v7) {
                v2[v0 - 1] = *(long long*)&v15;
                fchs();
                *(long long*)&v15 = v2[v0 - 1];
                wait();
            }
        }
        else if((unsigned char)v1 & 0x80) {
            break;
        }
        else {
            v3 = sub_406AB0(v1);
        }
        *param5 = *param5 + v12;
        *param6 = v14;
        *param0 = v15;
        *(param0 + 1) = v16;
        *(unsigned short*)(param0 + 2) = result;
        return result;
    }
    while(v3);
    --param4;
    if(param4 < 0) {
    loc_405B8A:
        v1 = 101;
    loc_405B92:
        if(v13 == -2) {
            v14 = 0;
            goto loc_405D20;
        }
        else {
            if(v5 == 0x8000) {
                v5 = v13;
            }
            int v20 = 0;
            if(v1 == 101 || v1 == 69) {
                int v21 = 1;
            loc_405BB7:
                --param4;
                while(param4 >= 0) {
                    ++v12;
                    v3 = param1(param3);
                    v1 = (unsigned int)v3;
                    if(v21) {
                        v3 = 0;
                        v21 = 0;
                        if(v1 == 43) {
                            goto loc_405BB7;
                        }
                        else if(v1 == 45) {
                            v10 = 1;
                            goto loc_405BB7;
                        }
                    }
                    if((int)v1 < 48 || (int)v1 > 57) {
                        goto loc_405C0F;
                    }
                    else {
                        int v22 = v20 * 10 + v1 - 48;
                        v20 = v20 * 10 + v1 - 48;
                        if(v22 <= 0x1344) {
                            goto loc_405BB7;
                        }
                        else {
                            v11 = 1;
                            --param4;
                        }
                    }
                }
            }
            else {
            loc_405C0F:
                v3 = param2((int)v1, param3);
                --v12;
            }
            if(v10) {
                v20 = 0 - v20;
                v11 = 0 - v11;
            }
            if(v13 < 0) {
                v15 = 0;
                v16 = 0;
                result = 0;
            }
            else if(v11) {
                if(v11 == 1) {
                    v3 = (unsigned int)0xFFFF | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
                    ptr0[0] = (unsigned long long)(unsigned short)v3 | ((unsigned long long)(unsigned short)v3 << 16) | ((unsigned long long)(unsigned short)v3 << 32) | ((unsigned long long)(unsigned short)v3 << 48);
                    *(short*)&ptr0[1] = 0x7ffe;
                }
                else {
                    v15 = 0;
                    v16 = 0;
                    result = 0;
                }
                v14 = 2;
            }
            else {
                int v23 = v5 - (v13 > v6 ? v6: v13) + v20;
                sub_405028(&v15);
                *(long long*)&v15 = v4;
                v0 = 0;
                wait();
                if(v23) {
                    sub_404DFC(v23 > 0 ? v23: 0 - v23);
                    long long v24 = v4;
                    wait();
                    if(v23 < 0) {
                        *(long long*)&v15 = *(long long*)&v15 / v24;
                        v0 = 0;
                        wait();
                    }
                    else {
                        *(long long*)&v15 = *(long long*)&v15 * v24;
                        v0 = 0;
                        wait();
                    }
                }
            }
            goto loc_405CE1;
        }
    }
    else if(v1 == 43) {
        v9 = 1;
        goto loc_405A93;
    }
    else {
        if(v1 == 45) {
            v9 = 1;
            v7 = 1;
        loc_405A93:
            --param4;
            if(param4 < 0) {
                goto loc_405B8A;
            }
            else {
                ++v12;
                v1 = (unsigned int)param1(param3);
            }
        }
        if(v8 == 1 && v9) {
            if(v1 == 73) {
                goto loc_405D3E;
            }
            else if(v1 == 78) {
                ++v12;
                v1 = (unsigned int)param1(param3);
                --param4;
                if(param4 < 0 || v1 != 65) {
                    v14 = 0;
                    goto loc_405D20;
                }
                else {
                    ++v12;
                    v1 = (unsigned int)param1(param3);
                    --param4;
                    if(param4 < 0 || v1 != 78) {
                        v14 = 0;
                        goto loc_405D20;
                    }
                    else if(v7) {
                        v15 = *(int*)&gvar_40B93A;
                        v16 = gvar_40B93E;
                        result = gvar_40B942;
                    }
                    else {
                        v15 = *(int*)&gvar_40B930;
                        v16 = gvar_40B934;
                        result = gvar_40B938;
                    }
                }
                *param5 = *param5 + v12;
                *param6 = v14;
                *param0 = v15;
                *(param0 + 1) = v16;
                *(unsigned short*)(param0 + 2) = result;
                return result;
            }
        }
        v8 = 0;
        v3 = (int)v18;
        if(v3 == v1) {
            if(v5 != 0x8000) {
                goto loc_405B92;
            }
            else {
                v5 = v13 > 0 ? v13: 0;
                goto loc_405A93;
            }
        }
        else if((int)v1 < 48 || (int)v1 > 57) {
            goto loc_405B92;
        }
        else {
            int v25 = (int)(v1 - 48);
            ++v13;
            if(v13 <= 0) {
                v3 = (int)ptr0;
                *(short*)v3 = (unsigned short)v25;
                if(v25) {
                    v13 = 1;
                }
                else {
                    v13 = -1;
                    if(v5 != 0x8000) {
                        --v5;
                    }
                }
                goto loc_405A93;
            }
            else if(v13 <= 9) {
                v3 = v15 * 10 + v25;
                v15 = v15 * 10 + v25;
                goto loc_405A93;
            }
            else if(v13 > v6) {
                goto loc_405A93;
            }
            else {
                int v26 = v15;
                int v27 = v16;
                v3 = sub_405388(&v26, v25);
                if(v3) {
                    v6 = v13 - 1;
                    goto loc_405A93;
                }
                else {
                    v15 = v26;
                    v3 = v27;
                    v16 = v27;
                    goto loc_405A93;
                loc_405D3E:
                    ++v12;
                    v1 = (unsigned int)param1(param3);
                    --param4;
                    if(param4 < 0 || v1 != 78) {
                        v14 = 0;
                        goto loc_405D20;
                    }
                    else {
                        ++v12;
                        v1 = (unsigned int)param1(param3);
                        --param4;
                        if(param4 < 0 || v1 != 70) {
                            v14 = 0;
                            goto loc_405D20;
                        }
                    }
                }
            }
        }
    }
    if(v7) {
        v15 = gvar_40B926;
        v16 = gvar_40B92A;
        result = gvar_40B92E;
    }
    else {
        v15 = gvar_40B91C;
        v16 = gvar_40B920;
        result = gvar_40B924;
    }
    *param5 = *param5 + v12;
    *param6 = v14;
    *param0 = v15;
    *(param0 + 1) = v16;
    *(unsigned short*)(param0 + 2) = result;
    return result;
}

int sub_405E34(int* param0, long long* param1, int param2) {
    int v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    int result = param2;
    long long* ptr0 = param1;
    int* ptr1 = param0;
    if(((unsigned char)result & 0x4)) {
        result = sub_405144(1, (short)*ptr1, (short)*(ptr1 + 1), *(unsigned short*)(ptr1 + 2), gvar_40B858, gvar_40B85C);
        *ptr0 = v2;
        wait();
    }
    else if(((unsigned char)result & 0x8)) {
        *(int*)ptr0 = *ptr1;
        *(int*)((char*)ptr0 + 4) = *(ptr1 + 1);
        *(short*)(ptr0 + 1) = *(short*)(ptr1 + 2);
    }
    else {
        v2 = *(__SyntheticTypeUnknownP80)&gvar_40B91C;
        *(long long*)&v0 = v2;
        wait();
        result = sub_405144(0, (short)*ptr1, (short)*(ptr1 + 1), *(unsigned short*)(ptr1 + 2), v0, v1);
        *(int*)ptr0 = v2;
        wait();
    }
    return result;
}

unsigned short sub_405ECC(int* param0, int param1, int param2, int param3, int param4, int* param5, int* param6) {
    char v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    long long v4;
    int v5 = 0x8000;
    int v6 = 19;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    char v11 = 0;
    int v12 = 0;
    int v13 = -2;
    int v14 = 1;
    int v15 = 0;
    int v16 = 0;
    unsigned short result = 0;
    long long* ptr0 = &v15;
    int v17 = sub_404434(14);
    short v18 = *(short*)v17;
    do {
        ++v12;
        int v19 = param1(param3);
        v1 = v19;
        if(v19 + 1) {
            v3 = sub_404650((short)v1);
        }
        else {
            v14 = -1;
        loc_406201:
            if(param4 >= 0) {
                param2(v1, param3);
                --v12;
            }
            v15 = 0;
            v16 = 0;
            result = 0;
        loc_4061C2:
            if(v7) {
                v2[v0 - 1] = *(long long*)&v15;
                fchs();
                *(long long*)&v15 = v2[v0 - 1];
                wait();
            }
        }
        *param5 = *param5 + v12;
        *param6 = v14;
        *param0 = v15;
        *(param0 + 1) = v16;
        *(unsigned short*)(param0 + 2) = result;
        return result;
    }
    while(v3);
    --param4;
    if(param4 < 0) {
    loc_40606B:
        v1 = 101;
    loc_406073:
        if(v13 == -2) {
            v14 = 0;
            goto loc_406201;
        }
        else {
            if(v5 == 0x8000) {
                v5 = v13;
            }
            int v20 = 0;
            if(v1 == 101 || v1 == 69) {
                int v21 = 1;
            loc_406098:
                --param4;
                while(param4 >= 0) {
                    ++v12;
                    v3 = param1(param3);
                    v1 = v3;
                    if(v21) {
                        v3 = 0;
                        v21 = 0;
                        if(v1 == 43) {
                            goto loc_406098;
                        }
                        else if(v1 == 45) {
                            v10 = 1;
                            goto loc_406098;
                        }
                    }
                    if(v1 < 48 || v1 > 57) {
                        goto loc_4060F0;
                    }
                    else {
                        int v22 = v20 * 10 + v1 - 48;
                        v20 = v20 * 10 + v1 - 48;
                        if(v22 <= 0x1344) {
                            goto loc_406098;
                        }
                        else {
                            v11 = 1;
                            --param4;
                        }
                    }
                }
            }
            else {
            loc_4060F0:
                v3 = param2(v1, param3);
                --v12;
            }
            if(v10) {
                v20 = 0 - v20;
                v11 = 0 - v11;
            }
            if(v13 < 0) {
                v15 = 0;
                v16 = 0;
                result = 0;
            }
            else if(v11) {
                if(v11 == 1) {
                    v3 = (unsigned int)0xFFFF | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
                    ptr0[0] = (unsigned long long)(unsigned short)v3 | ((unsigned long long)(unsigned short)v3 << 16) | ((unsigned long long)(unsigned short)v3 << 32) | ((unsigned long long)(unsigned short)v3 << 48);
                    *(short*)&ptr0[1] = 0x7ffe;
                }
                else {
                    v15 = 0;
                    v16 = 0;
                    result = 0;
                }
                v14 = 2;
            }
            else {
                int v23 = v5 - (v13 > v6 ? v6: v13) + v20;
                sub_405028(&v15);
                *(long long*)&v15 = v4;
                v0 = 0;
                wait();
                if(v23) {
                    sub_404DFC(v23 > 0 ? v23: 0 - v23);
                    long long v24 = v4;
                    wait();
                    if(v23 < 0) {
                        *(long long*)&v15 = *(long long*)&v15 / v24;
                        v0 = 0;
                        wait();
                    }
                    else {
                        *(long long*)&v15 = *(long long*)&v15 * v24;
                        v0 = 0;
                        wait();
                    }
                }
            }
            goto loc_4061C2;
        }
    }
    else if(v1 == 43) {
        v9 = 1;
        goto loc_405F74;
    }
    else {
        if(v1 == 45) {
            v9 = 1;
            v7 = 1;
        loc_405F74:
            --param4;
            if(param4 < 0) {
                goto loc_40606B;
            }
            else {
                ++v12;
                v1 = param1(param3);
            }
        }
        if(v8 == 1 && v9) {
            if(v1 == 73) {
                goto loc_40621F;
            }
            else if(v1 == 78) {
                ++v12;
                v1 = param1(param3);
                --param4;
                if(param4 < 0 || v1 != 65) {
                    v14 = 0;
                    goto loc_406201;
                }
                else {
                    ++v12;
                    v1 = param1(param3);
                    --param4;
                    if(param4 < 0 || v1 != 78) {
                        v14 = 0;
                        goto loc_406201;
                    }
                    else if(v7) {
                        v15 = *(int*)&gvar_40B962;
                        v16 = gvar_40B966;
                        result = gvar_40B96A;
                    }
                    else {
                        v15 = *(int*)&gvar_40B958;
                        v16 = gvar_40B95C;
                        result = gvar_40B960;
                    }
                }
                *param5 = *param5 + v12;
                *param6 = v14;
                *param0 = v15;
                *(param0 + 1) = v16;
                *(unsigned short*)(param0 + 2) = result;
                return result;
            }
        }
        v8 = 0;
        v3 = (int)v18;
        if(v3 == v1) {
            if(v5 != 0x8000) {
                goto loc_406073;
            }
            else {
                v5 = v13 > 0 ? v13: 0;
                goto loc_405F74;
            }
        }
        else if(v1 < 48 || v1 > 57) {
            goto loc_406073;
        }
        else {
            int v25 = v1 - 48;
            ++v13;
            if(v13 <= 0) {
                v3 = (int)ptr0;
                *(short*)v3 = (unsigned short)v25;
                if(v25) {
                    v13 = 1;
                }
                else {
                    v13 = -1;
                    if(v5 != 0x8000) {
                        --v5;
                    }
                }
                goto loc_405F74;
            }
            else if(v13 <= 9) {
                v3 = v15 * 10 + v25;
                v15 = v15 * 10 + v25;
                goto loc_405F74;
            }
            else if(v13 > v6) {
                goto loc_405F74;
            }
            else {
                int v26 = v15;
                int v27 = v16;
                v3 = sub_405388(&v26, v25);
                if(v3) {
                    v6 = v13 - 1;
                    goto loc_405F74;
                }
                else {
                    v15 = v26;
                    v3 = v27;
                    v16 = v27;
                    goto loc_405F74;
                loc_40621F:
                    ++v12;
                    v1 = param1(param3);
                    --param4;
                    if(param4 < 0 || v1 != 78) {
                        v14 = 0;
                        goto loc_406201;
                    }
                    else {
                        ++v12;
                        v1 = param1(param3);
                        --param4;
                        if(param4 < 0 || v1 != 70) {
                            v14 = 0;
                            goto loc_406201;
                        }
                    }
                }
            }
        }
    }
    if(v7) {
        v15 = gvar_40B94E;
        v16 = gvar_40B952;
        result = gvar_40B956;
    }
    else {
        v15 = gvar_40B944;
        v16 = gvar_40B948;
        result = gvar_40B94C;
    }
    *param5 = *param5 + v12;
    *param6 = v14;
    *param0 = v15;
    *(param0 + 1) = v16;
    *(unsigned short*)(param0 + 2) = result;
    return result;
}

int sub_406314(int* param0, long long* param1, int param2) {
    int v0;
    int v1;
    __SyntheticTypeUnknownF v2;
    int result = param2;
    long long* ptr0 = param1;
    int* ptr1 = param0;
    if(((unsigned char)result & 0x4)) {
        result = sub_405144(1, (short)*ptr1, (short)*(ptr1 + 1), *(unsigned short*)(ptr1 + 2), gvar_40B858, gvar_40B85C);
        *ptr0 = v2;
        wait();
    }
    else if(((unsigned char)result & 0x8)) {
        *(int*)ptr0 = *ptr1;
        *(int*)((char*)ptr0 + 4) = *(ptr1 + 1);
        *(short*)(ptr0 + 1) = *(short*)(ptr1 + 2);
    }
    else {
        v2 = *(__SyntheticTypeUnknownP80)&gvar_40B944;
        *(long long*)&v0 = v2;
        wait();
        result = sub_405144(0, (short)*ptr1, (short)*(ptr1 + 1), *(unsigned short*)(ptr1 + 2), v0, v1);
        *(int*)ptr0 = v2;
        wait();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4063AC(float* param0, int param1, int* param2, short* param3, int param4) {
    int v0;
    int v1;
    int result;
    short v2;
    int v3;
    int v4;
    int v5;
    int v6;
    short v7;
    int v8;
    short v9;
    int v10;
    int v11 = (unsigned int)v9 | ((unsigned int)v7 << 16);
    short v12 = 10;
    int v13 = param4 - 2;
    if(v13) {
        int v14 = v13 - 4;
        if(!v14) {
            v4 = *(double*)param0;
            *(int*)&v3 = v4;
            wait();
        }
        else if(v14 == 2) {
            float* ptr0 = param0;
            v3 = *ptr0;
            int v15 = *(int*)(ptr0 + 1);
            v2 = *(short*)(ptr0 + 2);
        }
    }
    else {
        v4 = *param0;
        *(int*)&v3 = v4;
        wait();
    }
    int* ptr1 = &v3;
    v9 = v2;
    v2 = v9 & 0x7fff;
    *param2 = ((unsigned int)((unsigned char)(v9 >>> 8) & 0x80 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)&v3 >>> 8) & 0xffffff) << 8)) & 0x1;
    short v16 = /*BAD_CALL!*/ sub_40507C((__SyntheticTypeUnknownP80)&v3);
    short v17 = (unsigned short)v16;
    v17 &= 0x4700;
    switch(v17) {
        case 256: {
            return 0x7ffe;
        }
        case 1280: {
            return 0x7fff;
        }
        case 16384: {
        loc_406435:
            int v18 = param1;
            if(v18 <= 0) {
                v18 = 1 - v18;
            }
            if(v18 > 40) {
                v18 = 40;
            }
            sub_4021AC(param3, '0', v18);
            *(char*)(v18 + (int)param3) = 0;
            return 1;
        }
        default: {
            int v19 = (((unsigned int)v9 & 0x7fff) - 0x3fff) * 19728 + (unsigned int)(((unsigned int)(((unsigned int)0 | ((unsigned int)*((char*)&ptr1[1] + 3) << 1)) & 0xFF) * 77) & 0xFFFF);
            int v20 = v19 >> 16;
            if((unsigned short)v19) {
                ++v20;
            }
            int counter = param1;
            if(counter <= 0) {
                counter = v20 - param1;
                if(counter < 0) {
                    goto loc_406435;
                }
            }
            if(counter > 19) {
                counter = 19;
            }
            int v21 = counter - v20;
            if(v21) {
                do {
                    int v22 = v21;
                    if(v21 < 0) {
                        v22 = 0 - v21;
                    }
                    if(v22 > 0x1344) {
                        v22 = 0x1344;
                    }
                    sub_404DFC(v22);
                    v1 = v4;
                    wait();
                    if(v21 < 0) {
                        v29[v31 + 1] = fdivrp(v1, *(int*)&v3);
                        *(int*)&v3 = v8;
                        wait();
                        v21 += v22;
                    }
                    else {
                        v4 = v1 * *(int*)&v3;
                        *(int*)&v3 = v4;
                        wait();
                        v21 -= v22;
                    }
                }
                while(v21);
            }
            int v23 = sub_404DFC(counter);
            v1 = v4;
            wait();
            v4 = *(int*)&v3;
            fcompp();
            (unsigned short)v30 = fnstsw((unsigned short)v23);
            if(((v6 >>> 8) & 0x1)) {
                ++v20;
                ++counter;
                if(counter <= 19 && param1 > 0) {
                    v0 = (int)v12;
                    v29[v31 + 1] = fdivrp((double)v0, *(int*)&v3);
                    *(int*)&v3 = v10;
                    wait();
                    --counter;
                }
            }
            else {
                int v24 = sub_404DFC(counter - 1);
                v1 = v4;
                wait();
                fcompp();
                (unsigned short)v30 = fnstsw((unsigned short)v24);
                if(!((v5 >>> 8) & 0x1) && !((v5 >>> 14) & 0x1)) {
                    --v20;
                    --counter;
                    if(param1 > 0) {
                        v0 = (int)v12;
                        *(int*)&v3 = (int)((double)v0 * *(int*)&v3);
                        wait();
                        ++counter;
                    }
                }
            }
            if(counter < 0) {
                goto loc_406435;
            }
            else {
                sub_405058(&v3, (__SyntheticTypeUnknownP80)&v3);
                short* ptr2 = (short*)(counter + (int)param3);
                int v25 = 0;
                short* ptr3 = ptr2;
                *(char*)&ptr2[0] = 0;
                char* ptr4 = (char*)((char*)ptr2 - 1);
                if(!counter) {
                    v25 = (unsigned int)*(char*)&ptr1[0] ^ 0x1;
                    if(v25) {
                        goto loc_406435;
                    }
                }
                else {
                    do {
                        int v26 = sub_405360(&v3);
                        v25 |= (int)(unsigned char)v26;
                        *ptr4 = (unsigned char)v26 + 48;
                        --ptr4;
                        --counter;
                    }
                    while(counter);
                }
                if(!v25) {
                    ++v20;
                    if(param1 <= 0) {
                        *(char*)&ptr3[0] = 48;
                    }
                    ptr3 = (short*)((char*)ptr3 + 1);
                    *(ptr4 + 1) = 49;
                }
                int v27 = param1;
                if(v27 <= 0) {
                    v27 = v20 - param1;
                }
                if(v27 > 40) {
                    v27 = 40;
                }
                *(char*)&ptr3[0] = 0;
                int v28 = v27 - (int)(int*)((int)ptr3 - (int)param3);
                if(v28 > 0) {
                    sub_4021AC(ptr3, '0', v28);
                    *(char*)(v28 + (int)ptr3) = 0;
                }
                result = v20;
            }
            return result;
        }
    }
}

int sub_406680(float* param0, int param1, int* param2, short* param3, int param4) {
    int v0;
    int v1;
    int result;
    short v2;
    int v3;
    int v4;
    int v5;
    int v6;
    short v7;
    int v8;
    short v9;
    int v10;
    int v11 = (unsigned int)v9 | ((unsigned int)v7 << 16);
    short v12 = 10;
    int v13 = param4 - 2;
    if(v13) {
        int v14 = v13 - 4;
        if(!v14) {
            v4 = *(double*)param0;
            *(int*)&v3 = v4;
            wait();
        }
        else if(v14 == 2) {
            float* ptr0 = param0;
            v3 = *ptr0;
            int v15 = *(int*)(ptr0 + 1);
            v2 = *(short*)(ptr0 + 2);
        }
    }
    else {
        v4 = *param0;
        *(int*)&v3 = v4;
        wait();
    }
    int* ptr1 = &v3;
    v9 = v2;
    v2 = v9 & 0x7fff;
    *param2 = ((unsigned int)((unsigned char)(v9 >>> 8) & 0x80 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)&v3 >>> 8) & 0xffffff) << 8)) & 0x1;
    short v16 = /*BAD_CALL!*/ sub_40507C((__SyntheticTypeUnknownP80)&v3);
    short v17 = (unsigned short)v16;
    v17 &= 0x4700;
    switch(v17) {
        case 256: {
            return 0x7ffe;
        }
        case 1280: {
            return 0x7fff;
        }
        case 16384: {
        loc_406709:
            int v18 = param1;
            if(v18 <= 0) {
                v18 = 1 - v18;
            }
            if(v18 > 40) {
                v18 = 40;
            }
            sub_402238(param3, 48, v18);
            result = 1;
            param3[v18] = 0;
            return result;
        }
        default: {
            int v19 = (((unsigned int)v9 & 0x7fff) - 0x3fff) * 19728 + (unsigned int)(((unsigned int)(((unsigned int)0 | ((unsigned int)*((char*)&ptr1[1] + 3) << 1)) & 0xFF) * 77) & 0xFFFF);
            int v20 = v19 >> 16;
            if((unsigned short)v19) {
                ++v20;
            }
            int counter = param1;
            if(counter <= 0) {
                counter = v20 - param1;
                if(counter < 0) {
                    goto loc_406709;
                }
            }
            if(counter > 19) {
                counter = 19;
            }
            int v21 = counter - v20;
            if(v21) {
                do {
                    int v22 = v21;
                    if(v21 < 0) {
                        v22 = 0 - v21;
                    }
                    if(v22 > 0x1344) {
                        v22 = 0x1344;
                    }
                    sub_404DFC(v22);
                    v1 = v4;
                    wait();
                    if(v21 < 0) {
                        v31[v32 + 1] = fdivrp(v1, *(int*)&v3);
                        *(int*)&v3 = v8;
                        wait();
                        v21 += v22;
                    }
                    else {
                        v4 = v1 * *(int*)&v3;
                        *(int*)&v3 = v4;
                        wait();
                        v21 -= v22;
                    }
                }
                while(v21);
            }
            int v23 = sub_404DFC(counter);
            v1 = v4;
            wait();
            v4 = *(int*)&v3;
            fcompp();
            (unsigned short)v33 = fnstsw((unsigned short)v23);
            if(((v6 >>> 8) & 0x1)) {
                ++v20;
                ++counter;
                if(counter <= 19 && param1 > 0) {
                    v0 = (int)v12;
                    v31[v32 + 1] = fdivrp((double)v0, *(int*)&v3);
                    *(int*)&v3 = v10;
                    wait();
                    --counter;
                }
            }
            else {
                int v24 = sub_404DFC(counter - 1);
                v1 = v4;
                wait();
                fcompp();
                (unsigned short)v33 = fnstsw((unsigned short)v24);
                if(!((v5 >>> 8) & 0x1) && !((v5 >>> 14) & 0x1)) {
                    --v20;
                    --counter;
                    if(param1 > 0) {
                        v0 = (int)v12;
                        *(int*)&v3 = (int)((double)v0 * *(int*)&v3);
                        wait();
                        ++counter;
                    }
                }
            }
            if(counter < 0) {
                goto loc_406709;
            }
            else {
                sub_405058(&v3, (__SyntheticTypeUnknownP80)&v3);
                int v25 = 0;
                short* ptr2 = &param3[counter];
                short* ptr3 = ptr2;
                ptr2[0] = 0;
                short* ptr4 = ptr2 - 1;
                if(!counter) {
                    v25 = (unsigned int)*(char*)&ptr1[0] ^ 0x1;
                    if(v25) {
                        goto loc_406709;
                    }
                }
                else {
                    do {
                        int v26 = /*BAD_CALL!*/ sub_405360(&v3);
                        char v27 = (unsigned char)v26;
                        v25 |= (int)v27;
                        *ptr4 = (short)v27 + 48;
                        --ptr4;
                        --counter;
                    }
                    while(counter);
                }
                if(!v25) {
                    ++v20;
                    if(param1 <= 0) {
                        ptr3[0] = 48;
                    }
                    ++ptr3;
                    *(ptr4 + 1) = 49;
                }
                int v28 = param1;
                if(v28 <= 0) {
                    v28 = v20 - param1;
                }
                if(v28 > 40) {
                    v28 = 40;
                }
                ptr3[0] = 0;
                int* ptr5 = (int*)((int)ptr3 - (int)param3);
                int* ptr6 = (int*)((int)ptr5 >> 1);
                char v29 = (int*)((int)ptr5 & 0x1);
                if((int)ptr6 < 0) {
                    ptr6 = (int*)((unsigned int)v29 + (int)ptr6);
                }
                int v30 = v28 - (int)ptr6;
                if(v30 > 0) {
                    sub_402238(ptr3, 48, v30);
                    ptr3[v30] = 0;
                }
                result = v20;
            }
            return result;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406974(UINT param0) {
    int result;
    unsigned int v0;
    char v1;
    UINT CodePage = param0;
    switch(CodePage) {
        case -4: {
            CodePage = *gvar_40B59C;
            break;
        }
        case -3: {
            CodePage = →KERNEL32.DLL!GetACP();
            break;
        }
        case -2: {
            CodePage = →KERNEL32.DLL!GetOEMCP();
            break;
        }
    }
    if(CodePage) {
        BOOL v2 = →KERNEL32.DLL!GetCPInfo(CodePage, &v0);
        if(v2) {
            goto loc_4069CC;
        }
        else {
            sub_406CDC("Error: system code page access failure; MBCS table not initialized");
            result = -1;
        }
    }
    else {
    loc_4069CC:
        int i = 0;
        char* counter = (char*)&gvar_40CA54;
        do {
            *counter = 0;
            ++i;
            ++counter;
        }
        while(i < 0x101);
        if(CodePage && v0 > 1) {
            void* ptr0 = &v1;
            for(i = (unsigned int)*(char*)ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8); ((unsigned char)i && *(char*)((int)ptr0 + 1)); i = (unsigned int)*(char*)ptr0 | ((unsigned int)((i >>> 8) & 0xffffff) << 8)) {
                i = (unsigned int)(i & 0xFF);
                for(char* j = (char*)(i + 4246101); (unsigned int)*(char*)((int)ptr0 + 1) >= i; ++j) {
                    *j = 4;
                    ++i;
                }
                ptr0 = (void*)((int)ptr0 + 2);
            }
            int v3 = 1;
            counter = (char*)&gvar_40CA56;
            do {
                *counter = *counter | 0x8;
                ++v3;
                ++counter;
            }
            while(v3 < 0xFF);
            if(CodePage == 932) {
                int v4 = (unsigned int)gvar_40B96C;
                for(char* k = (char*)(v4 + 4246101); (unsigned int)gvar_40B96D >= v4; ++k) {
                    *k = *k | 0x1;
                    ++v4;
                }
                v3 = (unsigned int)gvar_40B96E;
                for(counter = (char*)(v3 + 4246101); (int)(void*)gvar_40B96F >= v3; ++counter) {
                    *counter = *counter | 0x2;
                    ++v3;
                }
            }
            gvar_40CB58 = CodePage;
        }
        else {
            gvar_40CB58 = 0;
        }
        result = 0;
    }
    return result;
}

int sub_406AB0(unsigned int param0) {
    if(param0 > 0xff) {
        return 0;
    }
    return sub_40454C(param0);
}

int sub_406C84(int param0, int* param1) {
    *param1 = 1;
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406DF8(LPCSTR lpText) {
    return sub_406CDC(lpText);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406E08(LPCSTR lpText) {
    sub_406CDC(lpText);
    return sub_406F40(1);
}

int sub_406ED4(int param0, int param1, int param2) {
    int result;
    if(!param0) {
        if(gvar_40BA58) {
            gvar_40BA58();
        }
        sub_407B2C();
        gvar_40BA5C{sub_406ED0}();
    }
    else {
        gvar_40BA58 = 0;
    }
    if(!param1) {
        if(!param0) {
            gvar_40BA60{sub_406ED0}();
            gvar_40BA64{sub_406ED0}();
        }
        /*NO_RETURN*/ sub_407A40(param2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_406F28(int param0) {
    return sub_406ED4(0, 0, param0);
}

unsigned int sub_406F78(unsigned int* param0, unsigned int* param1) {
    gvar_40BB18 = *param0;
    unsigned int result = *param1;
    gvar_40BB1C = *param1;
    return result;
}

int sub_406F94(int param0, int param1) {
    int v0;
    return param1(param0, 0, v0);
}

int sub_406FA8(int param0, int param1) {
    int v0;
    return param1(param0, 0, v0);
}

unsigned int sub_406FBC(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    gvar_40BA68 = param0;
    gvar_40BA6C = param1;
    gvar_40BA70 = param2;
    gvar_40BA74 = param3;
    return param3;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4070A0(int param0, int param1) {
    int v0;
    if(gvar_40CC80 == gvar_40CCB4) {
        gvar_40CC80 += 16;
        unsigned int v1 = (unsigned int)sub_401400((int)gvar_40CC7C, gvar_40CC80 * 4);
        gvar_40CC7C = v1;
        if(!v1) {
            sub_406E08("No space for command line argument vector");
        }
    }
    if(param1) {
        int v2 = sub_402250(param0);
        int v3 = sub_4013E0(v2 + 1);
        v0 = v3;
        if(!v3) {
            sub_406E08("No space for command line argument");
        }
        int v4 = param0;
        int v5 = -1;
        while(v5 != 0) {
            char v6 = *(char*)v4 == 0;
            ++v4;
            --v5;
            if(!~v6) {
                break;
            }
        }
        int v7 = v0;
        int* ptr0 = (int*)(v4 - ~v5);
        for(int i = ~v5 >>> 2; i != 0; --i) {
            *(int*)v7 = *ptr0;
            ++ptr0;
            v7 += 4;
        }
        for(int j = ~v5 & 0x3; j != 0; --j) {
            *(char*)v7 = *(char*)ptr0;
            ptr0 = (int*)((char*)ptr0 + 1);
            ++v7;
        }
    }
    else {
        v0 = param0;
    }
    unsigned int result = gvar_40CC7C;
    *(int*)(gvar_40CCB4 * 4 + result) = v0;
    ++gvar_40CCB4;
    return result;
}

int sub_407150(int param0, char* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = v1;
    int v5 = v2;
    char* ptr0 = param1;
    /*BAD_CALL!*/ param2(param0, 0, v5, v4, v3);
    char i;
    for(i = *ptr0; (i == 32 || i == 9); i = *ptr0) {
        ++ptr0;
    }
    if(*ptr0 == 34) {
        ++ptr0;
        for(i = *ptr0; (i != 34 && i); i = *ptr0) {
            ++ptr0;
        }
        if(*ptr0 == 34) {
            ++ptr0;
        }
    }
    else {
        for(i = *ptr0; (i != 32 && i != 9 && i); i = *ptr0) {
            ++ptr0;
        }
    }
    int v6 = sub_402250((int)ptr0);
    int v7 = sub_4013E0(v6 + 1);
    int v8 = v7;
    gvar_40CC88 = v7;
    if(!v7) {
        sub_406E08("No space for copy of command line");
    }
loc_407296:
    do {
        if(!*ptr0) {
            return 1;
        }
        v2 = 0;
        for(char j = *ptr0; (j == 32 || j == 9); j = *ptr0) {
            ++ptr0;
        }
        if(*ptr0) {
            int v9 = v8;
        loc_407250:
            char v10 = *ptr0;
            while((v10 != 32 && v10 != 9 && v10)) {
                if(v10 == 34) {
                    ++ptr0;
                    for(char k = *ptr0; (k != 34 && k); k = *ptr0) {
                        sub_4072C4(&v8, &ptr0);
                    }
                    if(*ptr0 == 34) {
                        ++ptr0;
                    }
                    goto loc_407250;
                }
                else {
                    v10 = *ptr0;
                    if(v10 == 42 || v10 == 63) {
                        v2 = 1;
                    }
                    sub_4072C4(&v8, &ptr0);
                    v10 = *ptr0;
                }
            }
            *(char*)v8 = 0;
            ++v8;
            if(v2) {
                gvar_40BB18{sub_406F94}(v9, param2);
            }
            else {
                param2(v9, 0);
            }
            if(!*ptr0) {
                return 1;
            }
            ++ptr0;
            goto loc_407296;
        }
    }
    while(*ptr0);
    return 1;
}

unsigned int* sub_4072C4(unsigned int* param0, unsigned int* param1) {
    unsigned int* result = param1;
    unsigned int* ptr0 = param0;
    char* ptr1 = *result;
    if(*ptr1 == 92 && *(ptr1 + 1) == 34) {
        **ptr0 = 34;
        *result = *result + 2;
    }
    else if(gvar_40BACC) {
        ptr1 = *result;
        if(*ptr1 != 92 || *(ptr1 + 1) != 92) {
            goto loc_407306;
        }
        else {
            **ptr0 = 92;
            *result = *result + 2;
        }
    }
    else {
    loc_407306:
        char* ptr2 = *result;
        ptr1 = (unsigned int)*ptr2 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        if((*(char*)((unsigned int)(char*)(ptr1 & 0xFF) + 4246101) & 0x4) && *(ptr2 + 1)) {
            **ptr0 = (unsigned char)ptr1;
            *result = *result + 1;
            *ptr0 = *ptr0 + 1;
        }
        **ptr0 = **result;
        *result = *result + 1;
    }
    *ptr0 = *ptr0 + 1;
    return result;
}

int sub_407338(int param0, short* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = v1;
    int v5 = v2;
    short* ptr0 = param1;
    /*BAD_CALL!*/ param2(param0, 0, v5, v4, v3);
    short i;
    for(i = ptr0[0]; (i == 32 || i == 9); i = ptr0[0]) {
        ++ptr0;
    }
    if(ptr0[0] == 34) {
        ++ptr0;
        for(i = ptr0[0]; (i != 34 && i); i = ptr0[0]) {
            ++ptr0;
        }
        if(ptr0[0] == 34) {
            ++ptr0;
        }
    }
    else {
        for(i = ptr0[0]; (i != 32 && i != 9 && i); i = ptr0[0]) {
            ++ptr0;
        }
    }
    int v6 = sub_4023BC(ptr0);
    int v7 = sub_4013E0(v6 * 2 + 2);
    int v8 = v7;
    gvar_40CC8C = v7;
    if(!v7) {
        sub_406E08("No space for copy of command line");
    }
loc_4074B9:
    do {
        if(!ptr0[0]) {
            return 1;
        }
        v2 = 0;
        for(short j = ptr0[0]; (j == 32 || j == 9); j = ptr0[0]) {
            ++ptr0;
        }
        if(ptr0[0]) {
            int v9 = v8;
        loc_407467:
            short v10 = ptr0[0];
            while((v10 != 32 && v10 != 9 && v10)) {
                if(v10 == 34) {
                    ++ptr0;
                    for(short k = ptr0[0]; (k != 34 && k); k = ptr0[0]) {
                        sub_4074E8(&v8, &ptr0);
                    }
                    if(ptr0[0] == 34) {
                        ++ptr0;
                    }
                    goto loc_407467;
                }
                else {
                    v10 = ptr0[0];
                    if(v10 == 42 || v10 == 63) {
                        v2 = 1;
                    }
                    sub_4074E8(&v8, &ptr0);
                    v10 = ptr0[0];
                }
            }
            *(short*)v8 = 0;
            v8 += 2;
            if(v2) {
                gvar_40BB1C{sub_406FA8}(v9, param2);
            }
            else {
                param2(v9, 0);
            }
            if(!ptr0[0]) {
                return 1;
            }
            ++ptr0;
            goto loc_4074B9;
        }
    }
    while(ptr0[0]);
    return 1;
}

unsigned int* sub_4074E8(unsigned int* param0, unsigned int* param1) {
    unsigned int* result = param1;
    unsigned int* ptr0 = param0;
    short* ptr1 = *result;
    if(*ptr1 == 92 && *(ptr1 + 1) == 34) {
        **ptr0 = 34;
        *result = *result + 4;
    }
    else if(gvar_40BACC) {
        short* ptr2 = *result;
        if(*ptr2 != 92 || *(ptr2 + 1) != 92) {
            **ptr0 = **result;
            *result = *result + 2;
            *ptr0 = *ptr0 + 2;
            return result;
        }
        **ptr0 = 92;
        *result = *result + 4;
    }
    else {
        **ptr0 = **result;
        *result = *result + 2;
    }
    *ptr0 = *ptr0 + 2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407768(int* param0, int param1, int param2) {
    int result;
    int result;
    int v0;
    int v1;
    int result;
    int result;
    int v2 = 0;
    int* ptr0 = param0;
    int v3 = param2;
    int v4 = 0;
    int v5 = *param0;
    if(v5 <= 0xc0000090) {
        if(v5 == 0xc0000090) {
            v0 = 2;
            v1 = 129;
            v2 = 1;
        }
        else if(v5 > 0xc0000005) {
            v5 -= 0xc000001d;
            if(!v5) {
                v1 = 20;
                v0 = 1;
            }
            else if(v5 != 113) {
                return 1;
            }
            else {
                v0 = 2;
                v1 = 131;
                v2 = 4;
            }
        }
        else if(v5 != 0xc0000005) {
            v5 -= 0x80000003;
            if(!v5) {
                v1 = 23;
                v0 = 1;
            }
            else if((v5 - 1)) {
                return 1;
            }
            else {
                v1 = 24;
                v0 = 1;
            }
        }
        else {
            v1 = 12;
            v0 = 3;
        }
    loc_4078BF:
        unsigned int v6 = *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98);
        if(v6 == 1) {
            result = 0;
        }
        else if(!v6) {
            result = 1;
        }
        else {
            *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98) = 0;
            if(v0 >= 1 && v0 <= 3) {
                sub_404F84();
                sub_404F98((int)gvar_40B850, 7999);
                v6(*(int*)(v0 * 4 + (int)&gvar_40BBC0), v1, (int)&ptr0);
                *(int*)(param2 + 32) = ~v2 & *(int*)(param2 + 32);
            }
            else {
                v6(*(int*)(v0 * 4 + (int)&gvar_40BBC0), 0, (int)&ptr0);
            }
            result = v4;
        }
    }
    else if(v5 + 0x3fffff6f == 0) {
        v0 = 2;
        v1 = 132;
        v2 = 8;
        goto loc_4078BF;
    }
    else if(v5 + 0x3fffff6f == 1) {
        v0 = 2;
        v1 = 135;
        v2 = 73;
        goto loc_4078BF;
    }
    else if(v5 + 0x3fffff6f == 2) {
        v0 = 2;
        v1 = 133;
        v2 = 16;
        goto loc_4078BF;
    }
    else if(v5 + 0x3fffff6f == 3) {
        v1 = 127;
        v0 = 2;
        goto loc_4078BF;
    }
    else if(v5 + 0x3fffff6f == 4) {
        result = 1;
    }
    else if(v5 + 0x3fffff6f == 5) {
        v1 = 22;
        v0 = 1;
        goto loc_4078BF;
    }
    else {
        result = 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407948(int param0) {
    sub_4079D0(!param0 ? 2: 21);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_407970(int param0, unsigned int param1) {
    if(!gvar_40BB94) {
        gvar_40C8B8 = &sub_407768;
        →KERNEL32.DLL!SetConsoleCtrlHandler((PHANDLER_ROUTINE)&sub_407948, 1);
        gvar_40BB94 = 1;
    }
    int v0 = sub_407748(param0);
    if(!(v0 + 1)) {
        gvar_40B9FC = 19;
        return 0xffffffff;
    }
    unsigned int result = *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98);
    *(unsigned int*)(v0 * 4 + (int)&gvar_40BB98) = param1;
    return result;
}

int sub_407A50() {
    return 0;
}

int sub_407D1C() {
    char v0;
    char v1;
    short v2;
    →KERNEL32.DLL!GetStartupInfoA(&v0);
    return (v1 & 0x1) != 0 ? (unsigned int)v2: 10;
}

BOOL sub_407D44(DWORD dwTlsIndex) {
    return →KERNEL32.DLL!TlsFree(dwTlsIndex);
}

LPVOID sub_407D54(DWORD dwTlsIndex) {
    return →KERNEL32.DLL!TlsGetValue(dwTlsIndex);
}

BOOL sub_407D64(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    return →KERNEL32.DLL!TlsSetValue(dwTlsIndex, lpTlsValue);
}

void sub_407D78(int param0) {
}

void sub_407D80(int param0) {
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407DBE(unsigned int param0) {
    int result = sub_4013E0((int)param0);
    if(!result) {
        if(param0 <= 128) {
            int v0 = sub_401140();
            if((*(char*)(v0 + 4) & 0x1)) {
                sub_406EC0();
                int v1 = sub_401140();
                *(int*)(v1 + 4) = *(int*)(v1 + 4) | 0x1;
                return sub_401140();
            }
        }
        else {
            sub_406EC0();
        }
        int v1 = sub_401140();
        *(int*)(v1 + 4) = *(int*)(v1 + 4) | 0x1;
        return sub_401140();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_407E08(int param0) {
    int result;
    int v0 = sub_401140();
    if(*(int*)(v0 + 20) == param0) {
        result = sub_401140();
        *(int*)(result + 4) = *(int*)(result + 4) & 0xfffffffe;
    }
    else {
        result = sub_4013F0(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40818C(int* param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int* param11) {
    int result;
    sub_402414();
    int* ptr0 = param0;
    int v0 = sub_401140();
    *(int*)(v0 + 4) = *(int*)(v0 + 4) | 0x2;
    int v1 = sub_401140();
    *(unsigned int*)(v1 + 16) = ptr0 != 0 ? (int*)((unsigned int)*(short*)((char*)ptr0 + 6) + (int)ptr0): NULL;
    int v2 = sub_401140();
    *(int*)(v2 + 12) = param6;
    int v3 = sub_401140();
    *(int*)(v3 + 8) = param7;
    int* ptr1 = ptr0;
    int v4 = (unsigned int)*(short*)(ptr0 + 1);
    int v5 = *ptr0;
    int v6 = (v4 & 0x2) != 0 ? *(ptr0 + 3): 0;
    if((v4 & 0x30)) {
        ptr1 = *(unsigned int*)(ptr1 + 2);
    }
    int* ptr2 = (int*)sub_407DBE(v5 + 82);
    *ptr2 = 0;
    *(unsigned int*)(ptr2 + 1) = ptr0;
    *(ptr2 + 3) = param5;
    *(ptr2 + 4) = v5;
    *(short*)(ptr2 + 6) = (unsigned short)v4;
    *(short*)((char*)ptr2 + 26) = (unsigned short)v6;
    *(unsigned int*)(ptr2 + 5) = ptr1;
    *(ptr2 + 2) = param2;
    *(ptr2 + 10) = 0;
    *(ptr2 + 11) = 0;
    *(ptr2 + 7) = &sub_407E08;
    *(ptr2 + 13) = param6;
    *(ptr2 + 14) = param7;
    *(ptr2 + 8) = param3;
    *(ptr2 + 9) = param4;
    *(char*)((char*)ptr2 + 69) = 0;
    *(char*)(ptr2 + 17) = 1;
    sub_40213C((int)(int*)((char*)ptr2 + 82), param1, v5);
    if(*gvar_40CCE4 == 1 || *gvar_40CCE4 == 2) {
        int v7 = sub_402938((int)ptr0);
        void* ptr3 = *(void**)(param11 + 6);
        int v8 = *(param11 + 5);
        int v9 = *(param11 + 4);
        int v10 = *(param11 + 3);
        int v11 = *(param11 + 2);
        int v12 = *(param11 + 1);
        int v13 = *param11;
        int* ptr4 = *(char*)(ptr2 + 17) != 0 ? (int*)((char*)ptr2 + 82): *(unsigned int*)(ptr2 + 16);
        int v14 = sub_408009(v7);
        int v15 = v7;
        int v16 = param8 - 5;
        sub_408021(1, 11);
    }
    if(((unsigned char)v6 & 0x1)) {
        if(!param3) {
            sub_406B6C("cctrAddr", "xx.cpp", 0x445);
        }
        unsigned int v17 = gvar_40CCE0;
        short v18 = 8;
        sub_407EFB((int)(int*)((char*)ptr2 + 82), param1, param3, param4);
        v18 = 0;
        gvar_40CCE0 = v17;
    }
    int v19 = sub_401140();
    int v20 = *(int*)(v19 + 16);
    int v21 = param8;
    int* ptr5 = ptr2;
    →KERNEL32.DLL!RaiseException(0xeefface, 1, 3, &v20);
    *(int*)0 = result;
    return result;
}

int sub_408411(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = v3;
    int v6 = v2;
    int* ptr0 = &param0;
    int v7 = v3;
    int v8 = v4;
    int v9 = v2;
    int v10 = v1;
    int* ptr1 = &v10;
    int* ptr2 = (int*)sub_401140();
    int v11 = *ptr2;
    if(!v11) {
        sub_402CA4();
    }
    sub_40818C(*(int**)(v11 + 4), *(char*)(v11 + 68) != 0 ? v11 + 82: *(int*)(v11 + 64), *(int*)(v11 + 8), *(int*)(v11 + 32), *(int*)(v11 + 36), *(int*)(v11 + 12), param0, param1, v0, 1, 0, &v10);
    jump v7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4085B8() {
    void* ptr0;
    int v0;
    int v1 = v0;
    int v2 = v0;
    int v3 = sub_401140();
    if(!*(int*)v3) {
        sub_406B6C("__CPPexceptionList", "xx.cpp", 1577);
    }
    int v4 = sub_401140();
    int v5 = *(int*)v4;
    int v6 = sub_401140();
    *(int*)v6 = *(int*)v5;
    int v7 = *(int*)(v5 + 40);
    int v8 = *(int*)0;
    if(!v8) {
        sub_406B6C(&gvar_40BE14, "xx.cpp", 1591);
    }
    if(*(int*)(v5 + 40) != v8) {
        sub_406B6C("xdrPtr->xdERRaddr == xl", "xx.cpp", 1592);
    }
    *(short*)(v7 + 16) = *(short*)((unsigned int)*(short*)(v7 + 16) + *(int*)(v7 + 8));
    sub_408530(v5);
    *(int*)(v5 + 28)(v5);
    if(*gvar_40CCE4 == 2) {
        void* ptr1 = ptr0;
        sub_408021(6, 1);
    }
    unsigned int* ptr2 = (unsigned int*)(*(int*)(v7 + 12) - 4);
    *ptr2 = ptr0;
    jump *ptr2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408AE8(int param0, int param1) {
    return sub_40897D(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408AFB(int param0) {
    sub_40897D(param0, 0);
    int result = *(int*)param0;
    *(int*)0 = *(int*)param0;
    return result;
}

int sub_408B5C(int* param0, int* param1, int param2) {
    int* ptr0;
    int* ptr1;
    void* ptr2;
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr3 = &v2;
    int v4 = v1;
    int v5 = v3;
    int v6 = *(param0 + 7);
    unsigned int* ptr4 = *(unsigned int*)(param1 + 2);
    int* ptr5 = (int*)((int)param1 - *(int*)(ptr4 + 1));
    int* ptr6 = *(unsigned int*)(param1 + 3);
    if(*param0 != 0xeedfae6) {
        sub_405010();
        if((*(char*)(param0 + 1) & 0x6)) {
            sub_40897D((int)param1, 0);
            if(*param0 == 0xeefface) {
                int* ptr7 = *ptr4;
                if(ptr7) {
                    while(*ptr7) {
                        int v7 = sub_407E35(*(int*)(v6 + 4), *(int*)(v6 + 8), *ptr7, *(int*)(v6 + 12));
                        if(v7) {
                            jump v5;
                        }
                        else {
                            ++ptr7;
                        }
                    }
                    int v8 = *(int*)0;
                    *(int*)0 = *param1;
                    sub_402D18();
                    *(int*)0 = v8;
                }
            }
        }
        else {
            void* ptr8 = (void*)*(short*)(param1 + 4);
            if(ptr8) {
            alab1:
                do {
                    *(ptr3 - 2) = (unsigned int)*(short*)((int)ptr8 + (int)ptr4);
                    *(unsigned int*)(ptr3 - 5) = (int*)*(short*)((char*)((int)ptr8 + (int)ptr4) + 2);
                    int* ptr9 = (int*)((int)ptr8 + 4);
                    switch(*(unsigned int*)(ptr3 - 5)) {
                        case 0: 
                        case 4: 
                        case 5: {
                        loc_408EA2:
                            ptr8 = *(void**)(ptr3 - 2);
                        }
                        case 1: {
                            if(**(unsigned int*)(ptr3 + 2) == 0xeefface) {
                                goto loc_408EA2;
                            }
                            else {
                                *(ptr3 - 10) = *(ptr3 + 2);
                                *(ptr3 - 9) = *(ptr3 + 4);
                                *(int*)(*(ptr3 + 3) + 20) = **(unsigned int*)(ptr3 + 2);
                                *(unsigned int*)(*(ptr3 + 3) + 24) = ptr3 - 10;
                                gvar_40CCEC = *(unsigned int*)((int)ptr9 + (int)ptr4);
                                ptr2 = ptr8;
                                ptr1 = ptr3;
                                unsigned int* ptr10 = ptr4;
                                v0 = sub_402FAF(*(ptr3 - 3));
                                ptr4 = ptr10;
                                ptr3 = ptr1;
                                goto loc_408E49;
                            }
                        }
                        case 2: {
                            if(**(unsigned int*)(ptr3 + 2) == 0xeefface) {
                                goto loc_408EA2;
                            }
                            else {
                                *(*(unsigned int*)(ptr3 + 3) + 5) = **(unsigned int*)(ptr3 + 2);
                                v0 = *(int*)((int)ptr9 + (int)ptr4);
                            loc_408E49:
                                if(v0 >= 0) {
                                    if(v0) {
                                        *(int*)(*(ptr3 + 3) + 24) = 0;
                                        void* ptr11 = *(void**)(ptr3 - 2);
                                        *(void**)(ptr3 - 8) = *(void**)(ptr3 - 2);
                                        ptr8 = ptr11;
                                    loc_408D20:
                                        sub_40847C(*(ptr3 + 3), *(ptr3 + 2));
                                        sub_40897D(*(ptr3 + 3), (int)ptr8);
                                        *(short*)(*(ptr3 + 3) + 16) = *(short*)(ptr3 - 8);
                                        if(*(ptr3 - 5) == 3) {
                                            sub_4086A9(*(ptr3 - 6), *(ptr3 + 3), *(ptr3 - 1), *(ptr3 - 7), *(ptr3 - 3));
                                        }
                                        int v9 = sub_401140();
                                        *(int*)(v9 + 4) = *(int*)(v9 + 4) & 0xfffffffd;
                                        if(*gvar_40CCE4 == 2 && *(ptr3 - 5) == 3) {
                                            int* ptr12 = (int*)sub_402938(*(int*)(*(ptr3 - 1) + 4));
                                            ptr2 = *(char*)(*(ptr3 - 1) + 68) != 0 ? (void*)(*(ptr3 - 1) + 82): *(void**)(*(ptr3 - 1) + 64);
                                            ptr1 = (int*)sub_408009((int)ptr12);
                                            ptr0 = ptr12;
                                            sub_408021(3, 5);
                                        }
                                        sub_407DB7(*(ptr3 - 3));
                                    }
                                    goto loc_408EA2;
                                }
                                else {
                                    if((*(char*)(*(unsigned int*)(ptr3 + 2) + 1) & 0x1)) {
                                        *(short*)(*(unsigned int*)(ptr3 + 3) + 4) = *(short*)(ptr3 - 2);
                                    }
                                    break alab1;
                                }
                            }
                        }
                        case 3: {
                            if(**(unsigned int*)(ptr3 + 2) != 0xeefface) {
                                goto loc_408EA2;
                            }
                            else {
                                *(ptr3 - 7) = *(int*)((int)ptr9 + (int)ptr4);
                                int v10 = sub_408B17(*(ptr3 - 7), *(ptr3 - 1));
                                *(ptr3 - 6) = v10;
                                if(!*(ptr3 - 6)) {
                                    goto loc_408EA2;
                                }
                                else {
                                    if((*gvar_40CCE4 == 1 || *gvar_40CCE4 == 2) && (**(unsigned int*)(ptr3 + 2) < 0xeedface || **(unsigned int*)(ptr3 + 2) > 0xeefface)) {
                                        ptr2 = *(void**)(ptr3 + 4);
                                        ptr1 = *(unsigned int*)(ptr3 + 2);
                                        ptr0 = *(unsigned int*)(ptr3 + 3);
                                        sub_408021(2, 3);
                                    }
                                    int* ptr13 = (int*)sub_401140();
                                    **(unsigned int*)(ptr3 - 1) = *ptr13;
                                    int* ptr14 = (int*)sub_401140();
                                    *ptr14 = *(ptr3 - 1);
                                    *(int*)(*(ptr3 - 1) + 40) = *(ptr3 + 3);
                                    *(int*)(*(ptr3 - 1) + 44) = *(ptr3 - 6);
                                    *(unsigned int*)(*(ptr3 - 1) + 48) = ptr9 + 1;
                                    *(unsigned int*)(ptr3 - 8) = ptr9 + 1;
                                    goto loc_408D20;
                                }
                            }
                        }
                        default: {
                            sub_406B6C("!\"bogus context in _ExceptionHandler()\"", "xx.cpp", 0xc00);
                            goto loc_408EA2;
                        }
                    }
                }
                while(ptr8);
            }
        }
    }
    jump v5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_408FFB(int param0, int param1, int param2, unsigned int param3, int param4, int param5, int param6) {
    unsigned int v0;
    int v1;
    int result;
    if(!(*(char*)(param1 + 12) & 0x2)) {
        sub_406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3251);
    }
    unsigned int v2 = param4 != 0 ? *(unsigned int*)(param1 + 32): *(unsigned int*)(param1 + 36);
    if(!param3 || v2 <= param3) {
        result = sub_408EB9(param0, param1, param2, param4, param6);
    }
    else {
        if(v2 <= param3) {
            sub_406B6C("dtorCnt < varCount", "xx.cpp", 3309);
        }
        unsigned int v3 = param3;
        int* ptr0 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
        int* ptr1 = (int*)((unsigned int)*(short*)(param1 + 18) + param1);
        int* ptr2 = ptr0;
        if(param4) {
            while(1) {
                int v4 = *ptr1;
                if(!v4) {
                    goto loc_4090FA;
                }
                else {
                    if(!(*(char*)(v4 + 4) & 0x1)) {
                        sub_406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3352);
                    }
                    if((*(char*)(v4 + 12) & 0x2)) {
                        unsigned int v5 = *(unsigned int*)(v4 + 36);
                        if(v5 >= v3) {
                            return sub_408FB0(param0, param2, (int)(ptr1 + 3), (int)ptr2, (int)v3, 1, param5, param6);
                        }
                        v3 -= v5;
                    }
                    ptr1 += 3;
                }
            }
        }
        else {
        loc_4090FA:
            int* ptr3 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
            int* ptr4 = (int*)((unsigned int)*(short*)(param1 + 16) + param1);
            int* ptr5 = ptr3;
        loc_409106:
            do {
                v1 = *ptr4;
                if(v1) {
                    if(!(*(char*)(v1 + 4) & 0x1)) {
                        sub_406B6C("IS_STRUC(blType->tpMask)", "xx.cpp", 3391);
                    }
                    if(!(*(char*)(v1 + 12) & 0x2)) {
                        ptr4 += 3;
                        goto loc_409106;
                    }
                    else {
                        unsigned int v6 = *(unsigned int*)(v1 + 36);
                        if(v6 < v3) {
                            v3 -= v6;
                            ptr4 += 3;
                            goto loc_409106;
                        }
                        else {
                            result = sub_408FB0(param0, param2, (int)(ptr4 + 3), (int)ptr5, (int)v3, 0, param5, param6);
                        }
                    }
                    if(param4) {
                        result = sub_408FB0(param0, param2, (int)ptr1, (int)ptr2, 0, 1, param5, param6);
                    }
                    return result;
                }
            }
            while(v1);
            int* ptr6 = (int*)((unsigned int)*(short*)(param1 + 46) + param1);
            int* ptr7 = (int*)((unsigned int)*(short*)(param1 + 46) + param1);
            while(1) {
                int v7 = *ptr6;
                if(!v7) {
                    sub_406B6C("memType", "xx.cpp", 3429);
                }
                v0 = 1;
                if((*(char*)(v7 + 5) & 0x4)) {
                    v0 = *(unsigned int*)(v7 + 12);
                    v7 = *(int*)(v7 + 8);
                }
                if(!(*(char*)(v7 + 12) & 0x2)) {
                    sub_406B6C("memType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3443);
                }
                unsigned int v8 = (unsigned int)(*(int*)(v7 + 32) * v0);
                if(v8 >= v3) {
                    break;
                }
                else {
                    v3 -= v8;
                    ptr6 += 2;
                }
            }
            do {
                int v9 = *(ptr6 + 1) + param0;
                int v10 = *ptr6;
                v0 = 1;
                if((*(char*)(v10 + 5) & 0x4)) {
                    v0 = *(unsigned int*)(v10 + 12);
                    v10 = *(int*)(v10 + 8);
                }
                if(v0 > 1) {
                    sub_4092AB(v9, *ptr6, (int)v3, param5, param6);
                }
                else {
                    sub_408FFB(v9, v10, 0, (int)v3, 1, param5, param6);
                }
                v3 = 0;
                ptr6 -= 2;
            }
            while(ptr6 >= ptr7);
            result = sub_408FB0(param0, param2, (int)ptr4, (int)ptr5, 0, 0, param5, param6);
            if(param4) {
                result = sub_408FB0(param0, param2, (int)ptr1, (int)ptr2, 0, 1, param5, param6);
            }
        }
    }
    return result;
}

int sub_4092AB(int param0, int param1, unsigned int param2, int param3, int param4) {
    if(!(*(char*)(param1 + 5) & 0x4)) {
        sub_406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xdcc);
    }
    if(!(*(char*)(*(int*)(param1 + 8) + 12) & 0x2)) {
        sub_406B6C("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xdcd);
    }
    unsigned int v0 = *(unsigned int*)(param1 + 12);
    int v1 = *(int*)(param1 + 8);
    unsigned int v2 = *(unsigned int*)(v1 + 32);
    if(!v2) {
        sub_406B6C("vdtCount", "xx.cpp", 0xdd6);
    }
    if(!param2) {
        param2 = v2 * v0;
    }
    unsigned int v3 = param2 / v2;
    if(v3 > v0 && v0) {
        sub_406B6C("etdCount <= elemCount || elemCount == 0", "xx.cpp", 0xddf);
    }
    int result = (int)(v2 * v3);
    param2 -= result;
    if(v2 < param2) {
        result = sub_406B6C("dtrCount <= vdtCount", "xx.cpp", 3552);
    }
    int v4 = *(int*)v1 * v3 + param0;
    if(param2) {
        result = sub_408FFB(v4, v1, 0, param2, 1, param3, param4);
    }
    while(1) {
        unsigned int v5 = v3;
        --v3;
        if(!v5) {
            return result;
        }
        v4 -= *(int*)v1;
        result = sub_408FFB(v4, v1, 0, v2, 1, param3, param4);
    }
    return result;
}

int sub_409456(unsigned int* param0, int param1, int param2, int param3) {
    int* ptr0;
    int v0;
    unsigned int v1;
    int v2;
    int* ptr1;
    int v3;
    int v4;
    int result;
    int* ptr2;
    int v5 = 0;
    if(!param0) {
        result = 0;
    }
    else {
        unsigned int v6 = (unsigned int)(*(int*)(param2 + 28) - param1);
        if((*(char*)(param0 + 1) & 0x20)) {
            if(!(*(char*)(param0 + 1) & 0x11)) {
                sub_406B6C("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)", "xx.cpp", 3704);
            }
            if(!(*(char*)(*param0 + 4) & 0x10)) {
                sub_406B6C("dttPtr->dttType->tpMask & TM_IS_PTR", "xx.cpp", 3708);
            }
            if(!(*(char*)(*(int*)(*param0 + 8) + 12) & 0x2)) {
                sub_406B6C("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3709);
            }
            v6 = *(unsigned int*)(*(int*)(*param0 + 8) + 32);
        }
        if((*(char*)((char*)param0 + 5) & 0x1)) {
            if(!(*(char*)(*param0 + 4) & 0x2) || !(*(char*)(*param0 + 3) & 0x2)) {
                sub_406B6C("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)", "xx.cpp", 3723);
            }
            result = *(int*)(*param0 + 9);
        }
        else {
            if(((int)v6 > 0 || (*(char*)((char*)param0 + 5) & 0x4))) {
                ptr0 = (int*)param0;
                while(*ptr0) {
                    if((*(char*)((char*)ptr0 + 5) & 0x10)) {
                        if(!(*(char*)(*ptr0 + 5) & 0x4)) {
                            sub_406B6C("dtvtPtr->dttType->tpMask & TM_IS_ARRAY", "xx.cpp", 3799);
                        }
                        v4 = *(int*)(*ptr0 + 8);
                        v3 = *(int*)(*ptr0 + 8);
                    }
                    else {
                        v4 = *ptr0;
                        v3 = *ptr0;
                    }
                    int v7 = 1;
                    if((*(char*)(v3 + 4) & 0x10)) {
                        v4 = *(int*)(v3 + 8);
                        v3 = *(int*)(v3 + 8);
                        if((*(char*)(v3 + 4) & 0x2) && (*(char*)(v3 + 12) & 0x20) && (*(char*)(ptr0 + 1) & 0x8)) {
                            int v8 = 0;
                            if(!(*(char*)(v3 + 12) & 0x2)) {
                                sub_406B6C("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 3831);
                            }
                            unsigned int* ptr3 = (*(char*)(ptr0 + 1) & 0x4) != 0 ? (unsigned int*)(*(ptr0 + 2) + param3): *(unsigned int*)(ptr0 + 2);
                            ptr4 = *ptr3;
                            if((*(char*)((char*)ptr0 + 5) & 0x10)) {
                                v8 = *(int*)(ptr3 + 1);
                            }
                            if((*(char*)(ptr0 + 1) & 0x40)) {
                                ++ptr4;
                            }
                            ptr4 = (unsigned int*)sub_4093CF((int)ptr4, (int)&v3, v8);
                            v4 = v3;
                        }
                    }
                    if((*(char*)(v3 + 5) & 0x4)) {
                        v7 = *(int*)(v4 + 12);
                        v4 = *(int*)(v4 + 8);
                    }
                    if(!(*(char*)(v4 + 12) & 0x2)) {
                        sub_406B6C("elemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xf22);
                    }
                    ptr1 = (int*)(*(int*)(v4 + 32) * v7);
                    if((unsigned int)ptr1 >= v6) {
                        goto loc_409693;
                    }
                    else {
                        v6 -= (int)ptr1;
                        ptr0 += 3;
                    }
                }
                ptr0 -= 3;
            loc_409693:
                do {
                    int v9 = *ptr0;
                    int v10 = *(ptr0 + 1);
                    int v11 = (v10 & 0x4) != 0 ? *(ptr0 + 2) + param3: *(ptr0 + 2);
                    if((v10 & 0x1000)) {
                        if(!(*(char*)(v9 + 5) & 0x4)) {
                            sub_406B6C("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 3922);
                        }
                        v9 = *(int*)(v9 + 8);
                    }
                    if((v10 & 0x11)) {
                        ptr1 = NULL;
                        if(!(*(char*)(v9 + 4) & 0x10)) {
                            sub_406B6C("varType->tpMask & TM_IS_PTR", "xx.cpp", 3932);
                        }
                        v9 = *(int*)(v9 + 8);
                        int v12 = v11;
                        v11 = *(int*)v12;
                        if((v10 & 0x1000)) {
                            ptr1 = *(unsigned int*)(v12 + 4);
                        }
                        v2 = v11;
                        if((v10 & 0x48) == 64) {
                            v11 += 4;
                        }
                        if((*(char*)(v9 + 4) & 0x2) && (*(char*)(v9 + 12) & 0x20) && (v10 & 0x8)) {
                            v11 = sub_4093CF(v11, (int)&v9, (int)ptr1);
                            v2 = v11;
                        }
                    }
                    if(!v5) {
                        if((v10 & 0x400)) {
                            if(*(short*)(v9 + 16)) {
                                ptr1 = (int*)((unsigned int)*(short*)(v9 + 16) + v9);
                                if(!ptr1) {
                                    sub_406B6C(&gvar_40C475, "xx.cpp", 3986);
                                }
                                v1 = *(unsigned int*)(*ptr1 + 32);
                            }
                            else {
                                v1 = 0;
                            }
                            v0 = v1 <= v6 ? 1: 2;
                        }
                        else {
                            v0 = 0;
                        }
                        if((*(char*)(v9 + 5) & 0x4)) {
                            sub_4092AB(v11, v9, v6, param3, param2);
                        }
                        else {
                            sub_408FFB(v11, v9, v0, v6, 1, param3, param2);
                        }
                        if((v10 & 0x400) && (*(char*)(param2 + 32) & 0x1) && *(char*)(param2 + 32) != 0xFF) {
                            *(unsigned int*)(*(int*)v11 - 8)();
                        }
                    }
                    if((v10 & 0x3) == 3) {
                        if((v10 & 0x48) == 72) {
                            v2 -= 4;
                        }
                        if((*(char*)(v9 + 5) & 0x4)) {
                            v9 = *(int*)(v9 + 8);
                            if(*(int*)(v9 + 28)) {
                                sub_40810E(v2, *(int*)(v9 + 28), (unsigned int)*(short*)(v9 + 26));
                            }
                            else {
                                sub_40121C(v2);
                            }
                        }
                        else if(*(int*)(v9 + 20)) {
                            sub_40810E(v2, *(int*)(v9 + 20), (unsigned int)*(short*)(v9 + 24));
                        }
                        else {
                            sub_40120C(v2);
                        }
                    }
                    v6 = 0;
                    ptr2 = ptr0;
                    ptr0 -= 3;
                }
                while((unsigned int)ptr2 > (unsigned int)param0);
            }
            else if((*(int*)(param0 + 1) & 0x3) == 3) {
                ptr0 = (int*)param0;
                v5 = 1;
                goto loc_409693;
            }
            result = 0;
        }
    }
    return result;
}

int sub_4098DA(int param0) {
    if(param0 == -1) {
        return -1;
    }
    char* ptr0 = sub_40231C(**(unsigned int*)(param0 + 4) == 0x25ff ? (char*)(**(unsigned int*)(*(int*)(param0 + 4) + 2) - 8): (char*)(*(int*)(param0 + 4) - 8), "**BCCxh1", 8);
    if(ptr0) {
        return -1;
    }
    return (unsigned int)*(short*)(param0 + 16);
}
