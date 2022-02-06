
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    long long* ptr0;
    long long v4;
    long long* ptr1;
    long long v5;
    long long* ptr2;
    char v6;
    long long v7;
    char v8;
    long long v9;
    long long v10;
    void* ptr3;
    char v11;
    unsigned int v12;
    long long v13;
    long long v14;
    long long v15;
    long long v16;
    while(1) {
        long long* ptr4 = ptr2;
        long long v17 = v14;
        long long v18 = v4;
        long long v19 = v15;
        long long v20 = v5;
        long long v21 = 0L;
        long long v22 = 0L;
        BOOL v23 = SetDefaultDllDirectories(0x800);
        if(!(unsigned int)v23) {
            HANDLE v24 = GetStdHandle(0xfffffff4);
            LPOVERLAPPED v25 = NULL;
            HANDLE hFile = v24;
            WriteFile(hFile, "nodll\n", 6, &v8, NULL);
            /*NO_RETURN*/ ExitProcess(1);
        }
        gvar_404630 = 4;
        LPWSTR v26 = GetCommandLineW();
        LPWCH v27 = GetEnvironmentStringsW();
        long long v28 = (long long)v26;
        LPWCH v29 = v27;
        long long v30 = sub_401AFE(v28, &v6, 0x3fffL, &v9, 0x200L);
        v15 = (long long)(unsigned int)v30;
        long long v31 = 0L;
        while(1) {
            v3 = v31 + v9;
            param1 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!*(char*)v3) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v3 = 47;
                }
                ++v31;
            }
        }
        long long v32 = (unsigned long long)v29[0];
        if(v29[0] <= 55295) {
            v2 = (unsigned int)v32;
            v1 = 1L;
        }
        else {
            long long v33 = (long long)v29;
            v1 = sub_40262D(v33, &v2, param1, v3);
        }
        long long v34 = (unsigned long long)(unsigned int)v1;
        long long v35 = (long long)&v8;
        long long v36 = v34 * 2L;
        unsigned long long v37 = 0L;
        long long v38 = v36 + (long long)v29;
        while(v2) {
            ++v37;
            if(v37 <= 0x1ffL) {
                *(long long*)(v37 * 8L + (long long)&v22) = (unsigned long long)v35 < (unsigned long long)&v11 ? v35: 0L;
            }
            do {
                v12 = v2;
                char v39 = v2 == 127;
                char v40 = v12 < 127;
                long long v41 = (long long)v12;
                if(!v40 && !v39) {
                    long long v42 = (long long)v12;
                    v41 = sub_40263C(v42, (long long)&v2, v38, v35);
                }
                while((unsigned long long)v35 < (unsigned long long)&v11) {
                    ++v35;
                    *(char*)(v35 - 1L) = (unsigned char)v41;
                    v41 >>>= 8;
                    if(!v41) {
                        break;
                    }
                }
                long long v43 = (unsigned long long)*(short*)v38;
                if(*(unsigned short*)v38 <= 55295) {
                    v2 = (unsigned int)v43;
                    v0 = 1L;
                }
                else {
                    long long v44 = v38;
                    v0 = sub_40262D(v44, &v2, v38, v35);
                }
                v38 += (unsigned long long)(unsigned int)v0 * 2L;
            }
            while(v12);
            long long* ptr5 = (long long*)(v35 - (long long)&v8);
            char v45 = ptr5 == 32765L;
            *(char*)((long long*)((long long)((unsigned long long)ptr5 < 32765L || v45 ? ptr5: (long long*)0x7FFD) + (long long)&v7) - 0x1006) = 0;
        }
        if((unsigned long long)v35 < (unsigned long long)&v11) {
            *(char*)v35 = 0;
            ++v35;
        }
        long long* ptr6 = (long long*)(v35 - (long long)&v8);
        v14 = &v10;
        char v46 = ptr6 == 0x7ffeL;
        char v47 = (unsigned long long)ptr6 < 0x7ffeL;
        ptr2 = &v21;
        long long* ptr7 = v47 || v46 ? ptr6: (long long*)0x7FFE;
        unsigned long long v48 = v37 <= 0x1ffL ? v37: 0x1ffL;
        *(char*)((long long)ptr7 + (long long)&v8) = 0;
        LPWCH penv = v29;
        *(long long*)(v48 * 8L + &v10) = 0L;
        v4 = &v9;
        FreeEnvironmentStringsW(penv);
        v5 = &MZHeader;
        unsigned long long* ptr8 = (unsigned long long*)((long long*)((long long)&ptr3 & 0xfffffffffffffff0L) - 1);
        sub_401297();
        gvar_40783C |= 1;
        long long* ptr9 = (long long*)&gvar_403008;
        long long v49 = 0x403010L;
        while(ptr9 != v49) {
            --ptr8;
            *ptr8 = ptr9;
            --ptr8;
            *ptr8 = v49;
            --ptr8;
            *ptr8 = &loc_40154E;
            /*BAD_CALL!*/ *ptr9{sub_401433}(v49, v13);
            v49 = *ptr8;
            ++ptr8;
            long long v50 = *ptr8;
            ++ptr8;
            ptr9 = (long long*)(v50 + 8L);
        }
        long long v51 = v15;
        --ptr8;
        *ptr8 = &loc_401565;
        long long v52 = /*BAD_CALL!*/ sub_40141F(v51, &v9, &v10);
        long long v53 = (long long)(unsigned int)v52;
        --ptr8;
        *ptr8 = &sub_40156C;
        /*NO_RETURN*/ sub_4017FD(v53, v16, v13, ptr0, ptr1);
    }
}

unsigned long long* sub_4011A5(long long param0, unsigned long long* param1, long long param2, long long param3) {
    unsigned long long* result;
    long long v0;
    long long v1;
    unsigned int v2;
    unsigned int v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = v0;
    long long v8 = v5;
    long long v9 = v1;
    do {
        unsigned long long v10 = *param1;
        long long v11 = *(long long*)(param1 + 1);
        unsigned long long* ptr0 = param1;
        int v12 = *(int*)(param1 + 2);
        int v13 = *(int*)((char*)param1 + 20L);
        long long v14 = (unsigned long long)v3;
        do {
            long long v15 = (unsigned long long)(unsigned int)v14;
            v14 = (unsigned long long)((unsigned int)v14 - 1);
            if(*(long long*)(ptr0 - 3) != v10) {
                int* ptr1 = (int*)(ptr0 - 3);
                unsigned long long* ptr2 = ptr0;
                ptr0 -= 3;
                v15 = 6L;
                do {
                    *(int*)ptr2 = *ptr1;
                    ++ptr1;
                    ptr2 = (unsigned long long*)((char*)ptr2 + 4L);
                    --v15;
                }
                while(v15 == 0L);
            }
            else {
                v14 = (unsigned long long)(unsigned int)v15;
            }
            break;
        }
        while((unsigned int)v14);
        ++v3;
        param1 += 3;
        result = (unsigned long long*)(v14 * 24L + param3);
        *result = v10;
        *(long long*)(result + 1) = v11;
        *(int*)(result + 2) = v12;
        *(int*)((char*)result + 20L) = v13;
    }
    while(v2 > v3);
    return result;
}

void sub_401217() {
    char v0;
    long long v1;
    int v2;
    int v3;
    long long v4 = (unsigned long long)((unsigned int)&v0 - 8);
    long long v5 = (unsigned long long)v3 | ((unsigned long long)v2 << 32);
    int v6 = v3;
    long long v7 = (unsigned long long)v3;
    long long v8 = (unsigned long long)v6;
    long long v9 = v5;
    long long* ptr0 = &v1;
    interrupt(3);
}

void sub_401225() {
    char v0;
    char* ptr0 = (char*)((unsigned int)&v0 - 16);
    long long v1 = 8L;
    long long v2 = 8L;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v2;
    }
    while(v2 == 0L);
    while(1) {
        lidt(*(void*)((unsigned long long)((unsigned int)&v0 - 8) - 8L));
        ud2();
    }
}

void sub_401240() {
}

long long sub_401297() {
    char* ptr0;
    long long v0;
    long long v1;
    char* ptr1;
    char* ptr2;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long* ptr3;
    long long v6 = &gvar_404000;
    char* ptr4 = (char*)&gvar_402E68;
    long long v7 = v2;
    long long v8 = 0L;
    long long v9 = 22L;
    long long v10 = 0xffffffff80000007L;
    long long v11 = 0xffffffff80000001L;
    long long v12 = 7L;
    long long v13 = 2L;
    unsigned long long* ptr5 = &v0;
    v0 = 1L;
    long long v14 = 0L;
    do {
        (long long v1, long long v3, long long v4, long long v5) = cpuid(v14, 0L);
        *(int*)v6 = (unsigned int)v1;
        *(int*)(v6 + 4L) = (unsigned int)v3;
        *(int*)(v6 + 8L) = (unsigned int)v4;
        *(int*)(v6 + 12L) = (unsigned int)v5;
        v6 += 16L;
    loc_4012CA:
        while(1) {
            v14 = *ptr5;
            ++ptr5;
            if(!(unsigned int)v14) {
                long long v15 = *ptr5;
                ++ptr5;
                long long v16 = (unsigned long long)(unsigned char)v3 | ((unsigned long long)17 << 8) | ((unsigned long long)(((unsigned long long)(unsigned int)v3 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    long long v17 = (unsigned long long)*ptr4;
                    char* ptr6 = ptr4 + 1L;
                    v16 = (unsigned long long)(unsigned char)v17 | ((unsigned long long)((v16 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr4 = ptr6 + 1L;
                    v14 = ((unsigned long long)*ptr6 | ((unsigned long long)((v17 >>> 8L) & 0xffffffffffffffL) << 8)) + &gvar_4026E7;
                    do {
                        *(long long*)v6 = v14;
                        v6 += 8L;
                        v16 = (unsigned long long)((unsigned char)v16 + 0xff) | ((unsigned long long)((v16 >>> 8L) & 0xffffffffffffffL) << 8);
                    }
                    while((unsigned char)v16);
                    v16 = (unsigned long long)(unsigned char)v16 | ((unsigned long long)((unsigned char)(v16 >>> 8L) + 0xff) << 8) | ((unsigned long long)((v16 >>> 16L) & 0xffffffffffffL) << 16);
                }
                while((unsigned char)(v16 >>> 8L));
                --ptr5;
                *ptr5 = &loc_4012FF;
                /*BAD_CALL!*/ sub_401636(v6, (long long)(ptr4 + 6L));
                --ptr5;
                *ptr5 = &loc_401304;
                /*BAD_CALL!*/ sub_4017EC(ptr1, ptr2);
                --ptr5;
                *ptr5 = 32L;
                *ptr5 = &loc_401318;
                /*BAD_CALL!*/ sub_4017BE((long long*)ptr1, ptr2, &gvar_402764, 32);
                --ptr5;
                *ptr5 = 32L;
                *ptr5 = &loc_40132C;
                /*BAD_CALL!*/ sub_4017BE((long long*)ptr1, ptr2, &gvar_40288A, 32);
                --ptr5;
                *ptr5 = v15;
                --ptr5;
                *ptr5 = ptr2;
                --ptr5;
                if((ptr1[0] & 0x8)) {
                    *ptr5 = 69L;
                    --ptr5;
                    *ptr5 = 8L;
                    ptr0 = (char*)&gvar_402F33;
                }
                else if((ptr1[0] & 0x20)) {
                    *ptr5 = 48L;
                    --ptr5;
                    *ptr5 = 32L;
                    ptr0 = (char*)&gvar_402F01;
                }
                else if((ptr1[0] & 0x4)) {
                    *ptr5 = 34L;
                    --ptr5;
                    *ptr5 = 4L;
                    ptr0 = (char*)&gvar_402F22;
                }
                else if(*ptr3) {
                    *ptr5 = 0L;
                    --ptr5;
                    *ptr5 = 1L;
                    ptr0 = (char*)&gvar_402F0C;
                }
                else {
                    *ptr5 = 42L;
                    --ptr5;
                    *ptr5 = 16L;
                    ptr0 = (char*)&gvar_402F17;
                }
                char v18 = *ptr5;
                ++ptr5;
                *(long long*)&ptr1[0] = v18;
                long long v19 = *ptr5 + &gvar_4025D0;
                *(long long*)&ptr1[8] = *ptr5 + &gvar_4025D0;
                *ptr5 = (long long*)(ptr1 + 16L);
                unsigned long long* ptr7 = (unsigned long long*)&gvar_404648;
                do {
                    long long v20 = 0L;
                    long long v21 = 0L;
                    do {
                        v19 = (unsigned long long)*ptr0 | ((unsigned long long)((v19 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long long v22 = (unsigned long long)((unsigned int)v19 & 0x7f) << (v20 & 0x3fL);
                        v20 = (unsigned long long)((unsigned int)v20 + 7);
                        v21 |= v22;
                    }
                    while((unsigned char)v19 < 0);
                    if(((unsigned char)v19 & 0x40)) {
                        v21 |= -1L << (v20 & 0x3fL);
                    }
                    v19 = *ptr7 ? *ptr7: v21;
                    *ptr7 = *ptr7 ? *ptr7: v21;
                    ++ptr7;
                }
                while((unsigned long long)ptr7 >= 4212368L);
                ptr5 += 2;
                *ptr5 = 1L;
                gvar_40600C = *ptr5;
                gvar_406004 = gvar_404688;
                gvar_406018 = &gvar_405000;
                gvar_406020 = 0x1000;
                gvar_406030 = *(char*)&gvar_404630 & 0x2 ? &gvar_402115: &sub_402083;
                gvar_406038 = &gvar_406000;
                return &gvar_406000;
            }
        }
    }
    while((unsigned char)v14 <= *(char*)&gvar_404000);
    v6 += 16L;
    goto loc_4012CA;
}

long long sub_40141F(long long param0, long long param1, long long param2) {
    sub_401E0A("hello world", param1, param2);
    return 0L;
}

long long sub_401433(long long param0, long long param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = param1;
    long long v3 = gvar_406038;
    if(!(*(char*)&gvar_404630 & 0x4)) {
        int v4 = /*BAD_CALL!*/ sub_40156C((long long)*(int*)(v3 + 12L));
        if((unsigned int)v4) {
            *(char*)v3 = 1;
            return sub_401469(v3);
        }
    }
    else {
        *(char*)v3 = 1;
    }
    return sub_401469(v3);
}

long long sub_401469(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    char v4 = gvar_406050 ? 0: 1;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v0;
    long long v8 = v1;
    if(v4) {
        gvar_406050 = &gvar_406058;
        gvar_406048 = 8L;
        sub_40215B(&sub_401FAF, 0L, 0L);
    }
    unsigned long long v9 = gvar_406040;
    unsigned long long v10 = gvar_406050;
    unsigned long long v11 = v9 - 1L;
    while(v11 != -1L) {
        long long* ptr0 = (long long*)(v11 * 8L + v10);
        --v11;
        if(!*(long long*)(v11 * 8L + v10 + 8L)) {
            *ptr0 = param0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_406048) {
        long long v12 = /*BAD_CALL!*/ sub_402286((long long*)&gvar_406050, (unsigned long long*)&gvar_406048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *(long long*)(v9 * 8L + gvar_406050) = param0;
            gvar_406040 = v9 + 1L;
            return (unsigned long long)(unsigned int)v11;
        }
    }
    else {
        v11 = v9;
        *(long long*)(v9 * 8L + gvar_406050) = param0;
        gvar_406040 = v9 + 1L;
    }
    return (unsigned long long)(unsigned int)v11;
}

int sub_40156C(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v3;
    long long v7 = v4;
    long long v8 = v5;
    int result = gvar_404630 & 0x4;
    if(!(gvar_404630 & 0x4)) {
        unsigned int v9 = gvar_407838;
        unsigned int v10 = /*BAD_CALL!*/ sub_401609(param0, &v1);
        if(((unsigned int)v10 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            return v0 ? 1: 0;
        }
        gvar_407838 = v9;
    }
    else {
        int v11 = (unsigned int)param0;
        result = 0;
        long long v12 = /*BAD_CALL!*/ sub_40245F(param0, 1);
        if((unsigned char)v12) {
            DWORD v13 = sub_401DD2(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_4076B0));
            v0 = (unsigned int)v13 == 2;
            result = v0 ? 1: 0;
        }
    }
    return result;
}

unsigned int sub_401609(long long param0, int* param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = /*BAD_CALL!*/ sub_4025B0();
    unsigned int result = (unsigned int)v2;
    if(result != -1) {
        unsigned int v3 = result;
        sub_40168D(param1);
        result = v3;
    }
    return result;
}

HANDLE sub_401636(long long param0, long long param1) {
    *(long long*)&gvar_4076A0 = 3;
    gvar_4076B0 = &gvar_4076B8;
    gvar_4076A8 = 16L;
    gvar_4076C8 = 1;
    gvar_4076E0 = 1;
    gvar_4076F8 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_4076B8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_4076D0 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_4076E8 = result;
    return result;
}

void sub_40168D(int* param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12;
    if(param0) {
        long long v13 = (unsigned long long)gvar_404630;
        long long v14 = v8;
        long long v15 = v9;
        long long v16 = v10;
        long long v17 = v11;
        long long v18 = v12;
        if(((unsigned char)v13 & 0x8)) {
            long long v19 = (unsigned long long)*(short*)((char*)param0 + 6L);
            long long v20 = (unsigned long long)*(short*)(param0 + 1);
            v7 = (long long)*(param0 + 28);
            long long v21 = (long long)*param0;
            long long v22 = *(long long*)(param0 + 4);
            v6 = *(long long*)(param0 + 24);
            v5 = *(long long*)(param0 + 10);
            *(long long*)(param0 + 10) = (long long)*(param0 + 6);
            long long v23 = *(long long*)(param0 + 26);
            v4 = *(long long*)(param0 + 8);
            v3 = *(long long*)(param0 + 12);
            v2 = *(long long*)(param0 + 14);
            v1 = *(long long*)(param0 + 16);
            v13 = *(long long*)(param0 + 18);
            *(long long*)param0 = v21;
            *(long long*)(param0 + 4) = v19;
            *(param0 + 6) = (unsigned int)v20;
            *(long long*)(param0 + 7) = v22;
            *(long long*)(param0 + 12) = v6;
            *(long long*)(param0 + 14) = v7;
            *(long long*)(param0 + 16) = v23;
            goto loc_40179A;
        }
        else {
            if(((unsigned char)v13 & 0x20)) {
                v6 = (long long)*(param0 + 32);
                v0 = *(long long*)(param0 + 28);
                v7 = *(long long*)(param0 + 30);
                v4 = *(long long*)(param0 + 12);
                v5 = *(long long*)(param0 + 14);
                v3 = *(long long*)(param0 + 16);
                v2 = *(long long*)(param0 + 18);
                v1 = *(long long*)(param0 + 20);
                v13 = *(long long*)(param0 + 22);
                *(param0 + 6) = (unsigned int)*(short*)(param0 + 6);
                goto loc_40178E;
            }
            if(((unsigned char)v13 & 0x10)) {
                long long v24 = (long long)*(param0 + 7);
                int v25 = *param0;
                long long v26 = *(long long*)(param0 + 5);
                v6 = (long long)*(param0 + 24);
                v0 = *(long long*)(param0 + 20);
                v7 = *(long long*)(param0 + 22);
                v3 = *(long long*)(param0 + 12);
                *(long long*)param0 = (long long)*(param0 + 1);
                long long v27 = (unsigned long long)*(param0 + 4);
                v2 = *(long long*)(param0 + 14);
                v1 = *(long long*)(param0 + 16);
                v13 = *(long long*)(param0 + 18);
                v4 = *(long long*)(param0 + 8);
                v5 = *(long long*)(param0 + 10);
                *(param0 + 6) = v25;
                *(long long*)(param0 + 4) = v27;
                *(long long*)(param0 + 7) = v26;
                *(long long*)(param0 + 10) = v24;
            loc_40178E:
                *(long long*)(param0 + 12) = v0;
                *(long long*)(param0 + 14) = v6;
                *(long long*)(param0 + 16) = v7;
            loc_40179A:
                *(long long*)(param0 + 18) = v4;
                *(long long*)(param0 + 20) = v5;
                *(long long*)(param0 + 22) = v3;
                *(long long*)(param0 + 24) = v2;
                *(long long*)(param0 + 26) = v1;
                *(long long*)(param0 + 28) = v13;
            }
        }
    }
}

long long sub_4017BE(long long* param0, char* param1, long long param2, unsigned int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((gvar_404035 & 0x2 ? v0 ? 1L: 3L: v0 ? 0L: 2L) + (long long)param1) + param2;
    return *(long long*)param1;
}

char sub_4017EC(char* param0, char* param1) {
    char result;
    long long v0 = 0L;
    while(1) {
        v0 = (unsigned long long)*param1 | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        result = *(param1 + 1L);
        param1 += 2L;
        if(!v0) {
            return result;
        }
        do {
            *param0 = result;
            ++param0;
            v0 = (unsigned long long)((unsigned int)v0 - 1);
        }
        while((unsigned int)v0);
    }
    return result;
}

long long sub_4017FD(long long param0, long long param1, long long param2, long long* param3, long long* param4) {
    long long v0;
    void* ptr0;
    long long v1;
    long long v2;
    long long* ptr1 = &v0;
    long long v3 = v2;
    int v4 = (unsigned int)param0;
    int v5 = 0;
    long long v6 = 0L;
    char v7 = 1;
    char v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 0;
    long long v12 = v1;
    long long v13 = sub_4021F0(0L, param1, param2, param3, param4);
    long long v14 = (unsigned long long)v4;
    long long* ptr2 = &ptr0;
    /*NO_RETURN*/ sub_402941();
}

long long sub_401816() {
    gvar_407838 = gvar_404648;
    return -1L;
}

long long sub_401826() {
    gvar_407838 = gvar_404658;
    return -1L;
}

long long sub_401836() {
    gvar_407838 = gvar_404660;
    return -1L;
}

long long sub_401846() {
    gvar_407838 = gvar_404668;
    return -1L;
}

long long sub_401856() {
    gvar_407838 = gvar_404670;
    return -1L;
}

long long sub_401AA3(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = param0;
    param0 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)param0;
    if(*(unsigned short*)param0 <= 55295) {
        *(int*)(v1 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_40262D(param0, (int*)(v1 + 24L), v1, param3);
    }
    *(long long*)v1 = (unsigned long long)(unsigned int)v0 * 2L + *(long long*)v1;
    return (unsigned long long)(unsigned int)v0 * 2L;
}

long long sub_401ACE(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_40263C((long long)(unsigned int)param1, param1, param0, param3);
    }
    do {
        char* ptr0 = *(unsigned long long*)(param0 + 8L);
        if((unsigned long long)ptr0 >= v0) {
            return result;
        }
        *(long long*)(param0 + 8L) = (long long)(ptr0 + 1L);
        *ptr0 = (unsigned char)result;
        result >>>= 8;
    }
    while(result);
    return result;
}

long long sub_401AFE(long long param0, long long param1, long long param2, long long param3, unsigned long long param4) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long v6;
    long long v7;
    unsigned long long v8;
    long long v9;
    unsigned long long v10;
    long long v11;
    long long v12 = v7;
    unsigned long long v13 = v8;
    long long v14 = v3;
    long long v15 = param1;
    unsigned long long v16 = v6;
    long long v17 = v4;
    unsigned long long v18 = 0L;
    long long v19 = param3;
    unsigned long long v20 = param4;
    long long v21 = param1;
    long long v22 = param2 + param1;
    sub_401AA3(&v1, param1, param2, param3);
loc_401B49:
    while(v2) {
    loc_401B4B:
        do {
            unsigned long long v23 = (unsigned long long)v2;
            if(v2) {
                if((unsigned int)v23 <= 32 && ((0x100002600L >>> (v23 % 64L)) & 0x1L)) {
                    sub_401AA3(v9, param1, param2, param3);
                    goto loc_401B4B;
                }
                else {
                    ++v18;
                    if(v18 < v20) {
                        long long v24 = v21;
                        if((unsigned long long)v24 >= (unsigned long long)v22) {
                            v24 = 0L;
                        }
                        v0 = v19;
                        *(long long*)(v18 * 8L + v0 - 8L) = v24;
                    }
                    v8 = 0L;
                loc_401BD8:
                    for(long long i = (long long)v2; v2; i = (long long)v2) {
                        if(!(unsigned char)v8 && (unsigned int)i <= 32) {
                            if(((0x100002600L >>> ((unsigned long long)i % 64L)) & 0x1L)) {
                                break;
                            }
                        }
                        else if((unsigned int)i == 34 || (unsigned int)i == 92) {
                            v6 = 0L;
                            while(v2 == 92) {
                                ++v6;
                                sub_401AA3(v9, i, v0, v11);
                            }
                            unsigned long long j;
                            for(j = 0L; v2 == 34; j = (unsigned long long)(v5 + 1L)) {
                                sub_401AA3(v9, i, v0, v11);
                            }
                            unsigned long long v25 = v6;
                            if(!j) {
                                while(1) {
                                    --v6;
                                    if(v6 == -1L) {
                                        goto loc_401BD8;
                                    }
                                    else {
                                        sub_401ACE(v9, 92L, v0, v11);
                                    }
                                }
                            }
                            while(v25 > 1L) {
                                sub_401ACE(v9, 92L, v0, v11);
                                v25 -= 2L;
                            }
                            if(((unsigned char)v6 & 0x1)) {
                                sub_401ACE(v9, 34L, v0, v11);
                                j = (unsigned long long)(v5 - 1L);
                                if(!j) {
                                    goto loc_401BD8;
                                }
                            }
                            char v26 = (unsigned char)v8 < 1;
                            v8 = 3L;
                            j -= (unsigned long long)v26;
                            v6 = j + 1L;
                            while(v6 >= v8) {
                                v8 += 3L;
                                sub_401ACE(v9, 34L, v0, v11);
                            }
                            v11 = 3L;
                            v0 = (long long)(j % 3L);
                            v8 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v8 >>> 8L) & 0xffffffffffffffL) << 8);
                            goto loc_401BD8;
                        }
                        sub_401ACE(v9, i, v0, v11);
                        sub_401AA3(v9, param1, param2, param3);
                    }
                    sub_401ACE(v9, 0L, v0, v11);
                    continue loc_401B49;
                }
            }
        }
        while(v2);
    }
    sub_401ACE(v9, 0L, param2, param3);
    if(v10) {
        --v10;
        long long v27 = v21 - v15;
        *(char*)(((unsigned long long)v27 <= v10 ? v27: v10) + v15) = 0;
    }
    if(v20) {
        unsigned long long v28 = v20 - 1L;
        *(long long*)((v18 < v28 ? v18: v28) * 8L + v19) = 0L;
    }
    return (unsigned long long)(unsigned int)v18;
}

long long sub_401D0B(unsigned long long* param0, unsigned long long* param1, unsigned long long param2, int* param3) {
    long long result;
    LPCVOID lpBuffer;
    long long v0;
    char v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long* ptr0;
    long long v6 = v5;
    long long v7 = v3;
    unsigned long long* ptr1 = param1;
    long long v8 = v4;
    unsigned long long i;
    for(i = param2; i && !*(long long*)(ptr1 + 1); --i) {
        ptr1 += 2;
    }
    int* ptr2 = sub_401DAD(param3, &v1);
    if(i) {
        v0 = (unsigned long long)*(int*)(ptr1 + 1);
        lpBuffer = *ptr1;
    }
    else {
        v0 = 0L;
        lpBuffer = NULL;
    }
    void* ptr3 = param3;
    HANDLE hFile = *ptr0;
    LPOVERLAPPED v9 = (LPOVERLAPPED)ptr2;
    BOOL v10 = /*BAD_CALL!*/ WriteFile(hFile, lpBuffer, (DWORD)v0, &v2, (LPOVERLAPPED)ptr2);
    if(!(unsigned int)v10) {
        sub_40297A();
    }
    else if(!v2) {
        for(unsigned long long j = 0L; j != i; ++j) {
        }
    loc_401D8E:
        FlushFileBuffers(*ptr0);
        result = (unsigned long long)v2;
    }
    else {
        goto loc_401D8E;
    }
    return result;
}

int* sub_401DAD(int* param0, int* param1) {
    int* ptr0 = param0;
    int* result = param1;
    if(param0 != -1L) {
        long long v0 = 8L;
        param0 = param1;
        while(v0 != 0L) {
            *param0 = 0;
            ++param0;
            --v0;
        }
        *(unsigned long long*)(param1 + 4) = ptr0;
    }
    else {
        result = NULL;
    }
    return result;
}

DWORD sub_401DD2(HANDLE hFile) {
    return GetFileType(hFile);
}

DWORD sub_401DEB() {
    return GetLastError();
}

long long sub_401E0A(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1 = gvar_406038;
    long long v2 = /*BAD_CALL!*/ sub_401EAA(param0, v1, param2);
    if((unsigned int)v2 != -1) {
        int v3 = /*BAD_CALL!*/ sub_401E45(10L, v1, param2, v0);
        if(!((unsigned int)v3 + 1)) {
            return 0xffffffffL;
        }
        result = (unsigned long long)((unsigned int)v2 + 1);
    }
    else {
        result = 0xffffffffL;
    }
    return result;
}

int sub_401E45(long long param0, long long param1, long long param2, long long param3) {
    int result;
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = param1;
    long long* ptr0 = &v2;
    if((unsigned int)param0 != -1) {
        long long v4 = (unsigned long long)*(int*)(param1 + 20L);
        long long v5 = *(long long*)(param1 + 24L);
        *(char*)(v4 + v5) = (unsigned char)param0;
        int v6 = *(int*)(param1 + 20L);
        int v7 = 0;
        param1 = (long long)*(int*)(param1 + 32L);
        int v8 = v6;
        int v9 = v6 + 1;
        int v10 = 0;
        char v11 = v6 + 1 ? 0: 1;
        char v12 = v9 < 0;
        char v13 = __parity__((unsigned char)v9);
        char v14 = (((v8 ^ 0x1) ^ v9) >>> 4) & 0x1;
        char v15 = ((v9 ^ v8) & ~(v8 ^ 0x1)) < 0;
        long long v16 = (unsigned long long)((unsigned int)param1 - 1);
        int v17 = ((unsigned int)param1 - 1) & v9;
        int v18 = 0;
        char v19 = ((unsigned int)param1 - 1) & v9 ? 0: 1;
        char v20 = v17 < 0;
        char v21 = __parity__((unsigned char)v17);
        char v22 = 0;
        char v23 = 0;
        int v24 = *(int*)(v3 + 16L);
        int v25 = 0;
        *(int*)(v3 + 20L) = v17;
        char v26 = v17 == v24;
        char v27 = v17 < v24;
        char v28 = __parity__((unsigned char)v17 - (unsigned char)v24);
        char v29 = (unsigned int)v17 < (unsigned int)v24;
        char v30 = (((v17 - v24) ^ v17) & (v17 ^ v24)) < 0;
        char v31 = (((v17 - v24) ^ (v17 ^ v24)) >>> 4) & 0x1;
        if(!v26) {
            param3 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
            char v32 = *(char*)v3 == 2;
            char v33 = (unsigned char)param3 < 2;
            char v34 = __parity__((unsigned char)param3 - 2);
            char v35 = ((((unsigned char)param3 - 2) ^ (unsigned char)param3) & ((unsigned char)param3 ^ 0x2)) < 0;
            v31 = ((((unsigned char)param3 - 2) ^ ((unsigned char)param3 ^ 0x2)) >>> 4) & 0x1;
            if(!v32) {
                char v36 = (unsigned char)param3;
                if((unsigned char)param3 + 0xff) {
                    goto loc_401E9A;
                }
                else {
                    v31 = ((((unsigned char)param0 - 10) ^ ((unsigned char)param0 ^ 0xa)) >>> 4) & 0x1;
                    if((unsigned char)param0 != 10) {
                        goto loc_401E9A;
                    }
                }
            }
        }
        param3 = *(long long*)(v3 + 48L);
        char v37 = param3 ? 0: 1;
        char v38 = param3 < 0L;
        char v39 = __parity__((unsigned char)param3);
        char v40 = 0;
        char v41 = 0;
        if(!v37) {
            long long v42 = v2;
            long long* ptr1 = &v0;
            param0 = v3;
            jump param3;
        }
        if(v17 == v24) {
            return sub_401F6E(v3);
        }
    loc_401E9A:
        result = (int)(unsigned char)param0;
    }
    else {
        result = sub_401F6E(v3);
    }
    return result;
}

long long sub_401EAA(long long param0, long long param1, long long param2) {
    long long v0;
    unsigned int v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v4;
    int v8 = 0;
    long long v9 = v3;
    long long v10 = param0;
    long long v11 = v5;
    long long v12 = v6;
loc_401EBE:
    do {
        param2 = (unsigned long long)*(char*)v10 | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if(*(char*)v10) {
            ++v10;
            *(char*)((unsigned long long)*(int*)(param1 + 20L) + *(long long*)(param1 + 24L)) = (unsigned char)param2;
            unsigned int v13 = (unsigned int)((*(int*)(param1 + 32L) - 1) & (*(int*)(param1 + 20L) + 1));
            long long v14 = (unsigned long long)*(int*)(param1 + 16L);
            *(unsigned int*)(param1 + 20L) = v13;
            if((unsigned int)v14 != v13 && *(char*)param1 != 2 && ((*(char*)param1 + 0xff) || (unsigned char)param2 != 10)) {
                ++v8;
                goto loc_401EBE;
            }
            else {
                param2 = *(long long*)(param1 + 48L);
                if(param2) {
                    long long v15 = /*BAD_CALL!*/ param2(v14);
                    v2 = (unsigned int)v15;
                    goto loc_401F20;
                }
                if((unsigned int)v14 != v13) {
                    ++v8;
                    goto loc_401EBE;
                }
                else {
                    int v16 = /*BAD_CALL!*/ sub_401F6E(param1);
                    v2 = (unsigned int)v16;
                loc_401F20:
                    v1 = v2;
                    if(v2 != -1) {
                        ++v8;
                        goto loc_401EBE;
                    }
                    else {
                        long long v17 = sub_401FA1(param1);
                        if((unsigned long long)(unsigned int)v17 == gvar_404650) {
                            goto loc_401EBE;
                        }
                        else {
                            v0 = /*BAD_CALL!*/ sub_401F97(param1);
                        }
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v18 = (unsigned int)gvar_404678;
                *(unsigned int*)(param1 + 8L) = (unsigned int)gvar_404678;
                gvar_407838 = v18;
            }
            return (unsigned long long)v1;
        }
    }
    while(*(char*)v10);
    v1 = (unsigned int)(v8 + 1);
    return (unsigned long long)v1;
}

int sub_401F6E(long long param0) {
    return sub_401F76(param0, 0xffffffff);
}

int sub_401F76(long long param0, unsigned int param1) {
    if(!param1) {
        param1 = 0xffffffff;
    }
    unsigned int v0 = *(unsigned int*)(param0 + 8L);
    *(unsigned int*)(param0 + 8L) = (*(int*)(param0 + 8L) ? 0: 1) || v0 >= 0x80000000 ? param1: v0;
    if((int)param1 > 0) {
        gvar_407838 = param1;
    }
    return -1;
}

long long sub_401F97(long long param0) {
    return *(int*)(param0 + 8L) != -1 ? 0L: 1L;
}

long long sub_401FA1(long long param0) {
    return *(int*)(param0 + 8L) >= 0 ? (unsigned long long)*(int*)(param0 + 8L): 0L;
}

long long sub_401FAF(long long param0) {
    unsigned int v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    if(!param0) {
        v0 = 0;
        for(unsigned long long i = gvar_406040 - 1L; i != -1L; --i) {
            if(*(long long*)(i * 8L + gvar_406050)) {
                long long v5 = /*BAD_CALL!*/ sub_401FAF();
                if((unsigned int)v5 == -1) {
                    goto loc_401FEE;
                }
                else {
                    v0 += (unsigned int)v5;
                }
            }
        }
    }
    else {
        v0 = 0;
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long long)*(int*)(param0 + 4L) & *(long long*)&gvar_404688)) {
            v0 = *(unsigned int*)(param0 + 8L);
            if(!*(int*)(param0 + 8L)) {
                while(*(int*)(param0 + 20L) != *(int*)(param0 + 16L)) {
                    long long v6 = param0;
                    int v7 = /*BAD_CALL!*/ sub_402083(param0);
                    if((unsigned int)v7 != -1) {
                        param0 = v6;
                        v0 += (unsigned int)v7;
                    }
                    else {
                    loc_401FEE:
                        v0 = 0xffffffff;
                        break;
                    }
                }
            }
            else if(v0 != -1) {
                int v8 = sub_401F76(param0, v0);
                v0 = (unsigned int)v8;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long long)v0;
}

int sub_402083(long long param0) {
    int result;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long v4 = (unsigned long long)*(int*)(param0 + 16L);
    unsigned int v5 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v4 >= v5) {
        v5 = *(unsigned int*)(param0 + 32L);
    }
    int v6 = v5 - (unsigned int)v4;
    long long v7 = sub_40247A((long long)*(int*)(param0 + 12L), (long long*)(*(long long*)(param0 + 24L) + v4), (long long)v6);
    if(v7 == -1L) {
        result = sub_402150(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v7 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (int)v6;
    }
    return result;
}

int sub_402150(long long param0) {
    return sub_401F76(param0, gvar_407838);
}

long long sub_40215B(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = param2;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v1;
    unsigned int* ptr0 = *(long long*)&gvar_4060A0;
    if(!ptr0) {
        ptr0 = (unsigned int*)&gvar_4060A8;
        *(long long*)&gvar_4060A0 = 168;
    }
    if(*ptr0 == -1) {
        result = sub_401836();
    }
    else {
        param2 = (unsigned long long)*ptr0;
        unsigned int v9 = (unsigned int)~*ptr0;
        if(~*ptr0 != 0) {
            unsigned int i;
            for(i = 31; !(v9 >>> i); --i) {
            }
            v9 = i;
        }
        *ptr0 = (~(1 << (v9 % 32)) & (unsigned int)param2) | (1 << (v9 % 32));
        long long* ptr1 = (long long*)((unsigned long long)v9 * 24L + (long long)ptr0);
        result = 0L;
        *(ptr1 + 2) = param0;
        *(ptr1 + 3) = param1;
        *(ptr1 + 4) = v5;
    }
    return result;
}

long long sub_4021F0(unsigned long long param0, long long param1, long long param2, long long* param3, long long* param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = v2;
    long long result = param2;
loc_402204:
    for(int* i = *(long long*)&gvar_4060A0; i; i = *(long long*)&gvar_4060A0) {
        while(1) {
            long long v6 = (unsigned long long)*i;
            while(v6) {
                if((unsigned int)v6 != 0) {
                    int j;
                    for(j = 0; !(((unsigned int)v6 >>> j) & 0x1); ++j) {
                    }
                    param3 = (unsigned long long)j | ((unsigned long long)(unsigned int)(long long*)((long long)param3 >>> 32L) << 32);
                }
                int v7 = 1 << (long long)(long long*)((long long)param3 & 0x1fL);
                param3 = (long long*)(unsigned int)param3;
                v6 &= (unsigned long long)~v7;
                if(!param0 || *((long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i) + 4) == param0) {
                    *i = ~v7 & *i;
                    param3 = (long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i);
                    param2 = *(param3 + 2);
                    if(param2) {
                        param2((long long)param3);
                        goto loc_402204;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                *(long long*)&gvar_4060A0 = ptr0;
                goto loc_402204;
            }
            else if(!ptr0) {
                return result;
            }
            else {
                i = ptr0;
            }
        }
    }
    return result;
}

long long sub_402286(long long* param0, unsigned long long* param1, unsigned long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    unsigned long long* ptr0;
    unsigned long long v6;
    long long v7 = v3;
    long long v8 = v4;
    long long v9 = v0;
    long long* ptr1 = param0;
    long long v10 = v2;
    long long v11 = v5;
    sub_4023CE(*param0);
    long long v12 = /*BAD_CALL!*/ sub_4023CE(*ptr1);
    param0 = *ptr0;
    ptr0 = *ptr1 ? (unsigned long long*)((long long)(long long*)((long long)param0 >>> 1) + (long long)param0): (unsigned long long)(unsigned long long*)(31L / v6) >= 4L ? (unsigned long long*)(31L / v6): (unsigned long long*)0x4;
    if(!param0 || !(long long*)((long long)(long long*)(v6 | (long long)param0) & 0xffffffffffff0000L) || (long long*)((long long)(unsigned long long)(long long*)(v6 * (long long)param0) / (long long)(unsigned long long)param0) == v6) {
        long long* ptr2 = (long long*)((char*)(v1 + (long long)ptr0) + 1L);
        if(ptr2 && (long long*)((long long)(long long*)((long long)ptr2 | v6) & 0xffffffffffff0000L) && (long long*)((long long)(unsigned long long)(long long*)((long long)ptr2 * v6) / (long long)(unsigned long long)ptr2) != v6) {
            sub_401856();
            return 0L;
        }
        sub_401836();
    }
    else {
        sub_401856();
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4023CE(long long param0) {
    long long v0;
    long long v1;
    if((unsigned long long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        unsigned long long v2 = gvar_4063C0;
        long long v3 = v0;
        long long v4 = v1;
        long long v5 = sub_40243F((unsigned long long)(unsigned int)(param0 >>> 16L), 4219848L, (long long)v2);
        long long result = 0L;
        if(v5) {
            long long v6 = 1L;
            if((unsigned int)(param0 >>> 16L) != *(int*)(v5 * 8L + (long long)&gvar_4063C0)) {
                v6 = (unsigned int)(param0 >>> 16L) != *(int*)((v5 - 1L) * 8L + 0x4063ccL) ? 0L: 1L;
            }
            result = (unsigned long long)((unsigned int)v6 & 0x1);
        }
        return result;
    }
    return 0L;
}

long long sub_40243F(long long param0, long long param1, long long param2) {
    long long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        int v1 = ((unsigned int)v0 + (unsigned int)param2) >> 1;
        if((unsigned int)param0 >= *(int*)((long long)v1 * 8L + param1)) {
            v0 = (unsigned long long)(v1 + 1);
        }
        else {
            param2 = (unsigned long long)v1;
        }
    }
    return (long long)(unsigned int)v0;
}

long long sub_40245F(long long param0, unsigned int param1) {
    long long result = 0L;
    if((unsigned int)param0) {
        result = *(int*)((long long)(unsigned int)param0 * 24L + gvar_4076B0 + 16L) != param1 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40247A(long long param0, long long* param1, long long param2) {
    long long result;
    long long* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    if((unsigned int)param0 == -1) {
        long long v8 = sub_401826();
        result = (long long)(unsigned int)v8;
    }
    else {
        long long v9 = /*BAD_CALL!*/ sub_40245F((long long)(unsigned int)param0, 5);
        if((unsigned char)v9) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_404630 & 0x4)) {
            result = sub_4025C0();
        }
        else {
            long long v10 = /*BAD_CALL!*/ sub_40245F((long long)(unsigned int)param0, 2);
            if((unsigned char)v10) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long long v11 = /*BAD_CALL!*/ sub_40245F((long long)(unsigned int)param0, 1);
                if(!(unsigned char)v11) {
                    long long v12 = /*BAD_CALL!*/ sub_40245F((long long)(unsigned int)param0, 4);
                    if((unsigned char)v12) {
                        long long v13 = (long long)(unsigned int)param0 * 24L + gvar_4076B0;
                        long long v14 = v3;
                        return sub_401D0B(v13, (long long)&ptr0, 1L, -1L, v4);
                    }
                    result = sub_401816();
                }
                else {
                    long long v13 = (long long)(unsigned int)param0 * 24L + gvar_4076B0;
                    long long v14 = v3;
                    result = sub_401D0B(v13, (long long)&ptr0, 1L, -1L, v4);
                }
            }
        }
    }
    return result;
}

long long sub_4025B0() {
    return gvar_404638();
}

long long sub_4025C0() {
    return gvar_404638();
}

long long sub_40262D(long long param0, int* param1, long long param2, long long param3) {
    return sub_40266F(param0, param1, param2, param3);
}

long long sub_40263C(int param0, long long param1, long long param2, long long param3) {
    long long v0 = (unsigned long long)param0;
    long long v1 = 0L;
    if((unsigned int)v0 > 127) {
        if((unsigned int)v0 != 0) {
            int i;
            for(i = 31; !((unsigned int)v0 >>> i); --i) {
            }
            param3 = (unsigned long long)i | ((unsigned long long)(unsigned int)(param3 >>> 32L) << 32);
        }
        long long v2 = (unsigned long long)*(int*)&aKernelBase_dll[param3 * 2L + 1L];
        do {
            long long v3 = (unsigned long long)(unsigned int)v0;
            v0 = (unsigned long long)((unsigned int)v0 >>> 6);
            v1 = ((unsigned long long)(((unsigned char)v3 & 0x3f) | (unsigned char)v1 | 0x80) | ((unsigned long long)((v1 >>> 8L) & 0xffffffffffffffL) << 8)) * 0x100L;
            v2 = (unsigned long long)((unsigned char)v2 + 0xff) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
        }
        while((unsigned char)v2);
        v1 = (unsigned long long)((unsigned char)(v2 >>> 8L) | (unsigned char)v1) | ((unsigned long long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    return v1 | v0;
}

long long sub_40266F(long long param0, int* param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    int v2;
    long long v3;
    long long v4;
    long long result = 0L;
    long long v5 = v3;
    long long v6 = param3;
    long long v7 = param2;
    do {
        v4 = (unsigned long long)(unsigned int)result;
        v2 = (unsigned int)result;
        result = (unsigned long long)((unsigned int)result + 1);
        v1 = (unsigned long long)*(short*)(v4 * 2L + param0);
        v0 = (unsigned long long)(*(short*)(v4 * 2L + param0) & 0xfc00) | ((unsigned long long)(((unsigned long long)(unsigned int)v1 >>> 16L) & 0xffffffffffffL) << 16);
    }
    while((*(short*)(v4 * 2L + param0) & 0xfc00) == 0xdc00);
    if((unsigned short)v0 != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long long v8 = (unsigned long long)*(short*)(result * 2L + param0);
        if((*(short*)(result * 2L + param0) & 0xfc00) != 0xdc00) {
            *param1 = 0xfffd;
            result = 0xffffffffL;
        }
        else {
            *param1 = (unsigned int)v1 * 0x400 + (unsigned int)v8 - 56613888;
            result = (unsigned long long)(v2 + 2);
        }
    }
    return result;
}

void sub_402750(long long param0, unsigned long long param1) {
    long long v0;
    long long* ptr0 = &v0;
    v0 = param0;
    long long v1 = 32L;
    char v2 = param1 == 32L;
    char v3 = (long long)param1 < 32L;
    char v4 = __parity__((unsigned char)param1 - 32);
    char v5 = param1 < 32L;
    char v6 = (((param1 - 32L) ^ param1) & (param1 ^ 0x20L)) < 0L;
    char v7 = (((param1 - 32L) ^ (param1 ^ 0x20L)) >>> 4L) & 0x1L;
    unsigned long long v8 = v5 ? param1: 32L;
    jump *(long long*)(v8 * 8L + 4211744L);
}

void sub_402870(long long $rdi$1, int $esi, unsigned long long $rdx, long long $rcx$2) {
    // Decompilation error
}

void sub_402941() {
    gvar_40783C |= 4;
    char v0 = *(char*)&gvar_404630 & 0x4 ? 0: 1;
    char v1 = (*(char*)&gvar_404630 & 0x4) < 0;
    char v2 = __parity__(*(char*)&gvar_404630 & 0x4);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_40295E: &sub_402951;
}

void sub_402951(char param0) {
    while(1) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
}

long long sub_40295E() {
    long long v0 = (unsigned long long)gvar_404680;
    syscall();
    char v1 = 0;
    lidt(*(void*)0x402972);
    hlt();
}

void sub_40297A() {
    char v0 = *(char*)&gvar_404630 & 0x4 ? 0: 1;
    char v1 = (*(char*)&gvar_404630 & 0x4) < 0;
    char v2 = __parity__(*(char*)&gvar_404630 & 0x4);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_402998: &sub_402983;
}

long long sub_402983() {
    DWORD v0 = sub_401DEB();
    gvar_407838 = (unsigned int)v0;
    return -1L;
}

long long sub_402998() {
    return sub_401846();
}
