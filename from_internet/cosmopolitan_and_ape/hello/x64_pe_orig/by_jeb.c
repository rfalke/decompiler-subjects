
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned int v4;
    long long v5;
    long long v6;
    long long v7;
    long long* ptr0;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    while(1) {
        unsigned long long* ptr1 = ptr1 - 1;
        *ptr1 = v6;
        unsigned long long* ptr2 = ptr1;
        --ptr1;
        *ptr1 = ptr0;
        --ptr1;
        *ptr1 = v8;
        --ptr1;
        *ptr1 = v5;
        --ptr1;
        *ptr1 = v3;
        --ptr1;
        *ptr1 = v9;
        *(long long*)(ptr2 - 7176) = 0L;
        *(long long*)(ptr2 - 7175) = 0L;
        ptr1 -= 7178;
        *ptr1 = &loc_401896;
        BOOL v12 = /*BAD_CALL!*/ SetDefaultDllDirectories(0x800);
        ptr1 += 4;
        if(!(unsigned int)v12) {
            ptr1 -= 5;
            *ptr1 = &loc_4018AF;
            HANDLE hFile = /*BAD_CALL!*/ GetStdHandle(0xfffffff4);
            ptr1 += 2;
            *ptr1 = 0L;
            ptr1 -= 5;
            *ptr1 = &loc_4018D6;
            /*BAD_CALL!*/ WriteFile(hFile, "nodll\n", 6, (LPDWORD)(ptr2 - 0x1006), *(LPOVERLAPPED*)(ptr1 + 5));
            ++ptr1;
            *ptr1 = 4200675L;
            /*NO_RETURN*/ ExitProcess(1);
        }
        ptr1 -= 5;
        *ptr1 = 4L;
        gvar_404630 = (unsigned int)*ptr1;
        *ptr1 = &loc_4018FA;
        LPWSTR v13 = /*BAD_CALL!*/ GetCommandLineW();
        --ptr1;
        *ptr1 = &loc_401903;
        LPWCH penv = /*BAD_CALL!*/ GetEnvironmentStringsW();
        ptr1 += 3;
        *ptr1 = &loc_40192B;
        long long v14 = /*BAD_CALL!*/ sub_401AFE((long long)v13, (long long)((char*)ptr2 - 49199L), 0x3fffL, (long long)(ptr2 - 6662), 0x200L);
        v3 = v14 & 0xffffffffL;
        long long v15 = 0L;
        while(1) {
            v2 = *(long long*)(ptr2 - 6662) + v15;
            param1 = (unsigned long long)*(char*)v2 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!(unsigned char)param1) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v2 = 47;
                }
                ++v15;
            }
        }
        long long v16 = (unsigned long long)penv[0];
        if(penv[0] <= 55295) {
            *(int*)((char*)ptr2 - 0xe044L) = (unsigned int)v16;
            v1 = 1L;
        }
        else {
            --ptr1;
            *ptr1 = &loc_401974;
            v1 = /*BAD_CALL!*/ sub_40262D((long long)penv, (int*)((char*)ptr2 - 0xe044L), param1, v2);
        }
        long long v17 = (long long)(ptr2 - 0x1006);
        unsigned long long v18 = 0L;
        long long v19 = (v1 & 0xffffffffL) * 2L + (long long)penv;
        long long v20 = v17;
        while(*(int*)((char*)ptr2 - 0xe044L)) {
            ++v18;
            if(v18 <= 0x1ffL) {
                *((long long*)(v18 * 8L + (long long)ptr2) - 7175) = (unsigned long long)(long long*)((char*)ptr2 - 50L) > (unsigned long long)v17 ? v17: 0L;
            }
            do {
                v4 = *(unsigned int*)((char*)ptr2 - 0xe044L);
                long long v21 = (long long)v4;
                if(v4 > 127) {
                    --ptr1;
                    *ptr1 = &loc_4019E1;
                    v21 = /*BAD_CALL!*/ sub_40263C((long long)v4, (long long)((char*)ptr2 - 0xe044L), v19, v17);
                }
                while((unsigned long long)(long long*)((char*)ptr2 - 50L) > (unsigned long long)v17) {
                    ++v17;
                    *(char*)(v17 - 1L) = (unsigned char)v21;
                    v21 >>>= 8;
                    if(!v21) {
                        break;
                    }
                }
                long long v22 = (unsigned long long)*(short*)v19;
                if(*(unsigned short*)v19 <= 55295) {
                    *(int*)((char*)ptr2 - 0xe044L) = (unsigned int)v22;
                    v0 = 1L;
                }
                else {
                    --ptr1;
                    *ptr1 = &loc_401A10;
                    v0 = /*BAD_CALL!*/ sub_40262D(v19, (int*)(long long)((char*)ptr2 - 0xe044L), v19, v17);
                }
                v19 += (v0 & 0xffffffffL) * 2L;
            }
            while(v4);
            long long v23 = v17 - v20;
            *(char*)((long long*)(((unsigned long long)v23 <= 32765L ? v23: 32765L) + (long long)ptr2) - 0x1006) = 0;
        }
        if((unsigned long long)(long long*)((char*)ptr2 - 50L) > (unsigned long long)v17) {
            *(char*)v17 = 0;
            ++v17;
        }
        long long v24 = v17 - v20;
        v8 = (long long)(ptr2 - 7174);
        ptr0 = (long long*)(ptr2 - 7176);
        *(char*)((long long*)(((unsigned long long)v24 <= 0x7ffeL ? v24: 0x7ffeL) + (long long)ptr2) - 0x1006) = 0;
        *((long long*)((v18 <= 0x1ffL ? v18: 0x1ffL) * 8L + (long long)ptr2) - 7174) = 0L;
        v5 = (long long)(ptr2 - 6662);
        ptr1 -= 5;
        *ptr1 = &loc_401A9E;
        /*BAD_CALL!*/ FreeEnvironmentStringsW(penv);
        v6 = 0L;
        v9 = &MZHeader;
        ptr1 = (unsigned long long*)((long long*)((long long)ptr1 & 0xfffffffffffffff0L) - 1);
        *ptr1 = &loc_401534;
        /*BAD_CALL!*/ sub_401297(v10, v11);
        gvar_40783C |= 1;
        long long* ptr3 = (long long*)&gvar_403008;
        long long v25 = 0x403010L;
        while(ptr3 != v25) {
            --ptr1;
            *ptr1 = ptr3;
            --ptr1;
            *ptr1 = v25;
            --ptr1;
            *ptr1 = &loc_40154E;
            /*BAD_CALL!*/ *ptr3{sub_401433}(v25, v11);
            v25 = *ptr1;
            ++ptr1;
            long long v26 = *ptr1;
            ++ptr1;
            ptr3 = (long long*)(v26 + 8L);
        }
        --ptr1;
        *ptr1 = &loc_401565;
        long long v27 = /*BAD_CALL!*/ sub_40141F(v3, v5, v8);
        --ptr1;
        *ptr1 = &sub_40156C;
        /*NO_RETURN*/ sub_4017FD(v27 & 0xffffffffL, v7, v11, (long long*)v10);
    }
}

long long sub_4011A5(long long param0, long long* param1, long long param2, long long param3) {
    long long result;
    unsigned int v0;
    unsigned int v1;
    do {
        long long v2 = *param1;
        long long v3 = *(param1 + 1);
        long long* ptr0 = param1;
        int v4 = *(int*)(param1 + 2);
        int v5 = *(int*)((char*)param1 + 20L);
        result = (unsigned long long)v1;
        do {
            long long v6 = result & 0xffffffffL;
            result = (unsigned long long)((unsigned int)result - 1);
            if(*(ptr0 - 3) != v2) {
                int* ptr1 = (int*)(ptr0 - 3);
                long long* ptr2 = ptr0;
                ptr0 -= 3;
                v6 = 6L;
                while(1) {
                    if(v6 != 0L) {
                        *(int*)ptr2 = *ptr1;
                        ++ptr1;
                        ptr2 = (long long*)((char*)ptr2 + 4L);
                        --v6;
                    }
                }
            }
            else {
                result = v6 & 0xffffffffL;
            }
            break;
        }
        while((unsigned int)result);
        ++v1;
        param1 += 3;
        long long* ptr3 = (long long*)(result * 24L + param3);
        *ptr3 = v2;
        *(ptr3 + 1) = v3;
        *(int*)(ptr3 + 2) = v4;
        *(int*)((char*)ptr3 + 20L) = v5;
    }
    while(v0 > v1);
    return result;
}

void sub_401217() {
    int3();
}

void sub_401225() {
    long long v0;
    char* ptr0 = (char*)((long long)((long long*)((long long)&v0 & 0xffffffffL) - 1) & 0xffffffffL);
    long long v1 = 8L;
    for(long long i = 8L; i != 0L; --i) {
        *ptr0 = 0;
        ++ptr0;
    }
    while(1) {
        *(__SyntheticTypeUnknownP80)((long long*)((long long)&v0 & 0xffffffffL) + -1) = lidt(*(__SyntheticTypeUnknownP80)((long long*)((long long)&v0 & 0xffffffffL) - 1));
        ud2();
    }
}

void sub_401240() {
}

long long sub_401297(long long param0, long long param1) {
    char* ptr0;
    long long v0;
    char* ptr1;
    char* ptr2;
    long long v1;
    long long* ptr3;
    long long v2 = &gvar_404000;
    char* ptr4 = (char*)&gvar_402E68;
    long long v3 = v1;
    long long v4 = 0L;
    long long v5 = 22L;
    long long v6 = 0xffffffff80000007L;
    long long v7 = 0xffffffff80000001L;
    long long v8 = 7L;
    long long v9 = 2L;
    unsigned long long* ptr5 = &v0;
    v0 = 1L;
    int v10 = 0;
    do {
        cpuid();
        *(int*)v2 = v10;
        int v11 = (unsigned int)v1;
        v1 = (unsigned long long)v10;
        *(int*)(v2 + 4L) = v11;
        *(int*)(v2 + 8L) = 0;
        int v12 = (unsigned int)param1;
        param1 = 0L;
        *(int*)(v2 + 12L) = v12;
        v2 += 16L;
    loc_4012CA:
        while(1) {
            v10 = (unsigned int)*ptr5;
            ++ptr5;
            if(!v10) {
                long long v13 = *ptr5;
                ++ptr5;
                long long v14 = (unsigned long long)(unsigned char)v11 | ((unsigned long long)17 << 8) | ((unsigned long long)(((unsigned long long)v11 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    long long v15 = (unsigned long long)*ptr4;
                    char* ptr6 = ptr4 + 1L;
                    v14 = (unsigned long long)(unsigned char)v15 | ((unsigned long long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr4 = ptr6 + 1L;
                    long long v16 = ((unsigned long long)*ptr6 | ((unsigned long long)((v15 >>> 8L) & 0xffffffffffffffL) << 8)) + &gvar_4026E7;
                    do {
                        *(long long*)v2 = v16;
                        v2 += 8L;
                        v14 = (unsigned long long)((unsigned char)v14 + 0xff) | ((unsigned long long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
                    }
                    while((unsigned char)v14);
                    v14 = (unsigned long long)(unsigned char)v14 | ((unsigned long long)((unsigned char)(v14 >>> 8L) + 0xff) << 8) | ((unsigned long long)((v14 >>> 16L) & 0xffffffffffffL) << 16);
                }
                while((unsigned char)(v14 >>> 8L));
                --ptr5;
                *ptr5 = &loc_4012FF;
                /*BAD_CALL!*/ sub_401636(v2, (long long)(ptr4 + 6L));
                --ptr5;
                *ptr5 = &loc_401304;
                /*BAD_CALL!*/ sub_4017EC(ptr1, ptr2);
                --ptr5;
                *ptr5 = 32L;
                long long v17 = *ptr5;
                *ptr5 = &loc_401318;
                /*BAD_CALL!*/ sub_4017BE((long long*)ptr1, ptr2, &gvar_402764, v17);
                --ptr5;
                *ptr5 = 32L;
                long long v18 = *ptr5;
                *ptr5 = &loc_40132C;
                /*BAD_CALL!*/ sub_4017BE((long long*)ptr1, ptr2, &gvar_40288A, v18);
                --ptr5;
                *ptr5 = v13;
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
                char v19 = *ptr5;
                ++ptr5;
                *(long long*)&ptr1[0] = v19;
                long long v20 = *ptr5 + &gvar_4025D0;
                *(long long*)&ptr1[8] = *ptr5 + &gvar_4025D0;
                *ptr5 = (long long*)(ptr1 + 16L);
                for(long long* i = (long long*)&gvar_404648; (unsigned long long)i < 4212368L; ++i) {
                    long long v21 = 0L;
                    long long v22 = 0L;
                    do {
                        v20 = (unsigned long long)*ptr0 | ((unsigned long long)((v20 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long long v23 = (unsigned long long)((unsigned int)v20 & 0x7f) << (v21 & 0x3fL);
                        v21 = (unsigned long long)((unsigned int)v21 + 7);
                        v22 |= v23;
                    }
                    while((unsigned char)v20 < 0);
                    if(((unsigned char)v20 & 0x40)) {
                        v22 |= -1L << (v21 & 0x3fL);
                    }
                    v20 = *i ? *i: v22;
                    *i = *i ? *i: v22;
                }
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
    while((unsigned char)v10 <= *(char*)&gvar_404000);
    v2 += 16L;
    goto loc_4012CA;
}

long long sub_40141F(long long param0, long long param1, long long param2) {
    sub_401E0A("hello world", param1, param2);
    return 0L;
}

long long sub_401433(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    char* ptr0 = gvar_406038;
    if(!(*(char*)&gvar_404630 & 0x4)) {
        long long v4 = sub_40156C((long long)*(int*)(ptr0 + 12L));
        if((unsigned int)v4) {
            goto loc_401458;
        }
    }
    else {
    loc_401458:
        *ptr0 = 1;
    }
    long long v5 = v3;
    char v6 = gvar_406050 ? 0: 1;
    v3 = v2;
    long long v7 = v5;
    long long v8 = v1;
    if(v6) {
        gvar_406050 = &gvar_406058;
        gvar_406048 = 8L;
        sub_40215B(&sub_401FAF, 0L, 0L);
    }
    unsigned long long v9 = gvar_406040;
    unsigned long long v10 = gvar_406050;
    unsigned long long v11 = v9 - 1L;
    while(v11 != -1L) {
        unsigned long long* ptr1 = (unsigned long long*)(v11 * 8L + v10);
        --v11;
        if(!*(long long*)(v11 * 8L + v10 + 8L)) {
            *ptr1 = ptr0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_406048) {
        long long v12 = sub_402286((long long*)&gvar_406050, (unsigned long long*)&gvar_406048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *gvar_406050 = ptr0;
            gvar_406040 = v9 + 1L;
            return v11 & 0xffffffffL;
        }
    }
    else {
        v11 = v9;
        *gvar_406050 = ptr0;
        gvar_406040 = v9 + 1L;
    }
    return v11 & 0xffffffffL;
}

long long sub_40156C(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3 = (unsigned long long)(gvar_404630 & 0x4);
    if(!(gvar_404630 & 0x4)) {
        unsigned int v4 = gvar_407838;
        long long v5 = sub_401609(param0, &v1);
        if(((unsigned int)v5 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            v3 = v0 ? 1L: 0L;
            return v3 & 0xffffffffL;
        }
        gvar_407838 = v4;
    }
    else {
        int v6 = (unsigned int)param0;
        v3 = 0L;
        long long v7 = /*BAD_CALL!*/ sub_40245F(param0, 1L);
        if((unsigned char)v7) {
            DWORD v8 = sub_401DD2(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_4076B0));
            v0 = (unsigned int)v8 == 2;
            v3 = v0 ? 1L: 0L;
        }
    }
    return v3 & 0xffffffffL;
}

long long sub_401609(long long param0, int* param1) {
    long long result = sub_4025B0();
    if((unsigned int)result != -1) {
        int v0 = (unsigned int)result;
        sub_40168D(param1);
        result = (long long)v0;
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

long long sub_4017BE(long long* param0, char* param1, long long param2, int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((unsigned long long)(((v0 ? 0: 1) * 2) | (gvar_404035 & 0x2 ? 1: 0)) + (long long)param1) + param2;
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

long long sub_4017FD(int param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    sub_4021F0(0L, param1, param2, param3);
    /*NO_RETURN*/ sub_402941((long long)param0);
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
    long long v1 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)v1;
    if(*(unsigned short*)v1 <= 55295) {
        *(int*)(param0 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_40262D(v1, (int*)(param0 + 24L), param0, param3);
    }
    *(long long*)param0 = (v0 & 0xffffffffL) * 2L + *(long long*)param0;
    return (v0 & 0xffffffffL) * 2L;
}

long long sub_401ACE(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_40263C(param1 & 0xffffffffL, param1, param0, param3);
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
    long long v6;
    unsigned long long v7 = 0L;
    long long v8 = param3;
    unsigned long long v9 = param4;
    long long v10 = param1;
    long long v11 = param2 + param1;
    sub_401AA3(&v1, param1, param2, param3);
loc_401B49:
    while(v2) {
        while(v2) {
            if(v2 <= 32 && ((0x100002600L >>> ((unsigned long long)v2 % 64L)) & 0x1L)) {
                sub_401AA3(v4, param1, param2, param3);
            }
            else {
                ++v7;
                if(v7 < v9) {
                    long long v12 = v10;
                    if((unsigned long long)v12 >= (unsigned long long)v11) {
                        v12 = 0L;
                    }
                    v0 = v8;
                    *(long long*)(v7 * 8L + v0 - 8L) = v12;
                }
                unsigned long long v13 = 0L;
            loc_401BDD:
                while(v2) {
                    if(!(unsigned char)v13 && v2 <= 32) {
                        if(((0x100002600L >>> ((unsigned long long)(long long)v2 % 64L)) & 0x1L)) {
                            break;
                        }
                    }
                    else if(v2 == 34 || v2 == 92) {
                        unsigned long long v14 = 0L;
                        while(v2 == 92) {
                            ++v14;
                            sub_401AA3(v4, 92L, v0, v5);
                        }
                        unsigned long long i;
                        for(i = 0L; v2 == 34; i = (unsigned long long)(v3 + 1L)) {
                            sub_401AA3(v4, 34L, v0, v5);
                        }
                        unsigned long long v15 = v14;
                        if(!i) {
                            while(1) {
                                --v14;
                                if(v14 == -1L) {
                                    continue loc_401BDD;
                                }
                                else {
                                    sub_401ACE(v4, 92L, v0, v5);
                                }
                            }
                        }
                        while(v15 > 1L) {
                            sub_401ACE(v4, 92L, v0, v5);
                            v15 -= 2L;
                        }
                        if(((unsigned char)v14 & 0x1)) {
                            sub_401ACE(v4, 34L, v0, v5);
                            i = (unsigned long long)(v3 - 1L);
                            if(!i) {
                                continue;
                            }
                        }
                        char v16 = (unsigned char)v13 < 1;
                        v13 = 3L;
                        i -= (unsigned long long)v16;
                        while(i + 1L >= v13) {
                            v13 += 3L;
                            sub_401ACE(v4, 34L, v0, v5);
                        }
                        v5 = 3L;
                        v0 = (long long)(i % 3L);
                        v13 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v13 >>> 8L) & 0xffffffffffffffL) << 8);
                        continue;
                    }
                    sub_401ACE(v4, (long long)v2, v0, v5);
                    sub_401AA3(v4, param1, param2, param3);
                }
                sub_401ACE(v4, 0L, v0, v5);
                continue loc_401B49;
            }
        }
    }
    sub_401ACE(v4, 0L, param2, param3);
    if(v6) {
        long long v17 = v10 - param1;
        *(char*)(((unsigned long long)(v6 - 1L) >= (unsigned long long)v17 ? v17: (unsigned long long)(v6 - 1L)) + param1) = 0;
    }
    if(v9) {
        *(long long*)((v9 - 1L <= v7 ? v9 - 1L: v7) * 8L + v8) = 0L;
    }
    return v7 & 0xffffffffL;
}

long long sub_401D0B(unsigned long long* param0, unsigned long long* param1, long long param2, int* param3) {
    long long result;
    LPCVOID lpBuffer;
    long long v0;
    char v1;
    int v2;
    long long v3;
    long long v4;
    unsigned long long* ptr0;
    long long v5 = v3;
    unsigned long long* ptr1 = param1;
    long long v6 = v4;
    long long i;
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
    LPOVERLAPPED lpOverlapped = (LPOVERLAPPED)ptr2;
    BOOL v7 = WriteFile(hFile, lpBuffer, (DWORD)v0, &v2, lpOverlapped);
    if(!(unsigned int)v7) {
        result = sub_40297A();
    }
    else if(!v2) {
        for(long long j = 0L; j != i; ++j) {
        }
    loc_401D8E:
        FlushFileBuffers(*ptr0);
        result = (long long)v2;
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

long long sub_401E0A(char* param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = gvar_406038;
    long long v3 = v0;
    long long v4 = sub_401EAA(param0, v2, param2);
    if((unsigned int)v4 != -1) {
        long long v5 = sub_401E45(10L, v2, param2, v1);
        if(!((unsigned int)v5 + 1)) {
            return 0xffffffffL;
        }
        result = ((v4 & 0xffffffffL) + 1L) & 0xffffffffL;
    }
    else {
        result = 0xffffffffL;
    }
    return result;
}

long long sub_401E45(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    if((unsigned int)param0 != -1) {
        *(char*)((unsigned long long)*(int*)(param1 + 20L) + *(long long*)(param1 + 24L)) = (unsigned char)param0;
        result = (long long)((*(int*)(param1 + 20L) + 1) & (*(int*)(param1 + 32L) - 1));
        int v0 = *(int*)(param1 + 16L);
        *(int*)(param1 + 20L) = (unsigned int)result;
        if((unsigned int)result != v0) {
            param3 = (unsigned long long)*(char*)param1 | ((unsigned long long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)param3 != 2 && (((unsigned char)param3 + 0xff) || (unsigned char)param0 != 10)) {
                goto loc_401E9A;
            }
        }
        param3 = *(long long*)(param1 + 48L);
        if(param3) {
            jump param3;
        }
        if((unsigned int)result == v0) {
            return sub_401F6E(param1);
        }
    loc_401E9A:
        result = param0 & 0xffL;
    }
    else {
        result = sub_401F6E(param1);
    }
    return result;
}

long long sub_401EAA(char* param0, long long param1, long long param2) {
    long long v0;
    int v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = 0L;
    long long v7 = v3;
    char* ptr0 = param0;
    long long v8 = v5;
    long long v9 = v4;
    long long v10 = param1;
loc_401EBE:
    do {
        param2 = (unsigned long long)*ptr0 | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)param2) {
            ++ptr0;
            *(char*)((unsigned long long)*(int*)(v10 + 20L) + *(long long*)(v10 + 24L)) = (unsigned char)param2;
            param1 = (long long)*(int*)(v10 + 32L);
            int v11 = ((unsigned int)param1 - 1) & (*(int*)(v10 + 20L) + 1);
            long long v12 = (unsigned long long)*(int*)(v10 + 16L);
            *(int*)(v10 + 20L) = v11;
            if((unsigned int)v12 != v11) {
                param1 = (unsigned long long)*(char*)v10 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
                if((unsigned char)param1 != 2 && (((unsigned char)param1 + 0xff) || (unsigned char)param2 != 10)) {
                    v6 = (unsigned long long)((unsigned int)v6 + 1);
                    goto loc_401EBE;
                }
            }
            param2 = *(long long*)(v10 + 48L);
            if(param2) {
                v2 = param2(v12);
                goto loc_401F20;
            }
            if((unsigned int)v12 != v11) {
                v6 = (unsigned long long)((unsigned int)v6 + 1);
                goto loc_401EBE;
            }
            else {
                v2 = sub_401F6E(v10);
            loc_401F20:
                v1 = (unsigned int)v2;
                if((unsigned int)v2 != -1) {
                    v6 = (unsigned long long)((unsigned int)v6 + 1);
                    goto loc_401EBE;
                }
                else {
                    long long v13 = sub_401FA1(v10);
                    if((long long)(unsigned int)v13 == gvar_404650) {
                        goto loc_401EBE;
                    }
                    else {
                        v0 = sub_401F97(v10);
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v14 = (unsigned int)gvar_404678;
                *(unsigned int*)(v10 + 8L) = (unsigned int)gvar_404678;
                gvar_407838 = v14;
            }
            return (unsigned long long)v1;
        }
    }
    while((unsigned char)param2);
    v1 = (unsigned int)v6 + 1;
    return (unsigned long long)v1;
}

long long sub_401F6E(long long param0) {
    return sub_401F76(param0, -1);
}

long long sub_401F76(long long param0, int param1) {
    if(!param1) {
        param1 = -1;
    }
    int v0 = *(int*)(param0 + 8L);
    *(int*)(param0 + 8L) = v0 <= 0 ? param1: v0;
    if(param1 > 0) {
        gvar_407838 = param1;
    }
    return -1L;
}

long long sub_401F97(long long param0) {
    return *(int*)(param0 + 8L) == -1 ? 1L: 0L;
}

long long sub_401FA1(long long param0) {
    return *(int*)(param0 + 8L) < 0 ? 0L: (unsigned long long)*(int*)(param0 + 8L);
}

long long sub_401FAF(long long param0) {
    int v0;
    if(!param0) {
        v0 = 0;
        for(long long i = gvar_406040 - 1L; i != -1L; --i) {
            if(*(long long*)(i * 8L + gvar_406050)) {
                long long v1 = sub_401FAF();
                if((unsigned int)v1 == -1) {
                    goto loc_401FEE;
                }
                else {
                    v0 += (unsigned int)v1;
                }
            }
        }
    }
    else {
        v0 = 0;
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long long)*(int*)(param0 + 4L) & *(long long*)&gvar_404688)) {
            v0 = *(int*)(param0 + 8L);
            if(!v0) {
                while(*(int*)(param0 + 16L) != *(int*)(param0 + 20L)) {
                    long long v2 = param0;
                    long long v3 = sub_402083(param0);
                    if((unsigned int)v3 != -1) {
                        param0 = v2;
                        v0 += (unsigned int)v3;
                    }
                    else {
                    loc_401FEE:
                        v0 = -1;
                        break;
                    }
                }
            }
            else if(v0 != -1) {
                long long v4 = sub_401F76(param0, v0);
                v0 = (int)v4;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long long)v0;
}

long long sub_402083(long long param0) {
    long long result;
    long long v0;
    long long v1 = v0;
    long long v2 = (unsigned long long)*(int*)(param0 + 16L);
    unsigned int v3 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v2 >= v3) {
        v3 = *(unsigned int*)(param0 + 32L);
    }
    int v4 = v3 - (unsigned int)v2;
    long long v5 = sub_40247A((long long)*(int*)(param0 + 12L), (long long*)(*(long long*)(param0 + 24L) + v2), (long long)v4);
    if(v5 == -1L) {
        result = sub_402150(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v5 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (long long)v4;
    }
    return result;
}

long long sub_402150(long long param0) {
    return sub_401F76(param0, gvar_407838);
}

long long sub_40215B(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    int* ptr0 = *(long long*)&gvar_4060A0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_4060A8;
        *(long long*)&gvar_4060A0 = 168;
    }
    if(*ptr0 == -1) {
        result = sub_401836();
    }
    else {
        int v6 = *ptr0;
        unsigned int v7 = (unsigned int)~v6;
        if(v7 != 0) {
            unsigned int i;
            for(i = 31; !(v7 >>> i); --i) {
            }
            v7 = i;
        }
        *ptr0 = (~(1 << (v7 % 32)) & v6) | (1 << (v7 % 32));
        long long* ptr1 = (long long*)((unsigned long long)v7 * 24L + (long long)ptr0);
        result = 0L;
        *(ptr1 + 2) = param0;
        *(ptr1 + 3) = param1;
        *(ptr1 + 4) = param2;
    }
    return result;
}

long long sub_4021F0(long long param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1 = v0;
    long long result = param2;
loc_402204:
    for(int* i = *(long long*)&gvar_4060A0; i; i = *(long long*)&gvar_4060A0) {
        while(1) {
            long long v2 = (unsigned long long)*i;
            while(v2) {
                if((unsigned int)v2 != 0) {
                    int j;
                    for(j = 0; !(((unsigned int)v2 >>> j) & 0x1); ++j) {
                    }
                    param3 = (unsigned long long)j | ((unsigned long long)(unsigned int)(long long*)((long long)param3 >>> 32L) << 32);
                }
                int v3 = 1 << (long long)(long long*)((long long)param3 & 0x1fL);
                param3 = (long long*)((long long)param3 & 0xffffffffL);
                v2 &= (unsigned long long)~v3;
                if(!param0 || *((long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i) + 4) == param0) {
                    *i = ~v3 & *i;
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

long long sub_402286(long long* param0, unsigned long long* param1, long long param2, long long param3) {
    unsigned long long* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    sub_4023CE(param0[0]);
    sub_4023CE(param0[0]);
    unsigned long long v8 = *ptr0;
    unsigned long long v9 = param0[0] != 0L ? (unsigned long long)((v8 >>> 1) + v8): 31L / v4 < 4L ? 4L: 31L / v4;
    if(!v8 || !((v4 | v8) & 0xffffffffffff0000L) || v4 * v8 / v8 == v4) {
        unsigned long long v10 = (unsigned long long)(v0 + v9 + 1L);
        if(v10 && ((v10 | v4) & 0xffffffffffff0000L) && v10 * v4 / v10 != v4) {
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

long long sub_4023CE(long long param0) {
    long long result;
    long long v0;
    long long v1;
    if((unsigned long long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long long v2 = gvar_4063C0;
        long long v3 = v0;
        long long v4 = v1;
        long long v5 = sub_40243F((int)(param0 >>> 16L), 4219848L, v2);
        if(v5) {
            result = (unsigned int)(param0 >>> 16L) == *(int*)(v5 * 8L + (long long)&gvar_4063C0) ? 1L: (unsigned int)(param0 >>> 16L) == *(int*)((v5 - 1L) * 8L + 0x4063ccL) ? 1L: 0L;
        }
        return result;
    }
    return 0L;
}

long long sub_40243F(int param0, long long param1, long long param2) {
    long long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        long long v1 = (unsigned long long)(((unsigned int)v0 + (unsigned int)param2) >> 1);
        if(*(int*)(((unsigned long long)(((unsigned int)v0 + (unsigned int)param2) >> 1) | ((unsigned long long)((v1 >>> 31L) & 0x1L ? -1: 0) << 32)) * 8L + param1) <= param0) {
            v0 = (v1 + 1L) & 0xffffffffL;
        }
        else {
            param2 = v1 & 0xffffffffL;
        }
    }
    return (long long)(unsigned int)v0;
}

long long sub_40245F(int param0, int param1) {
    return !param0 ? 0L: *(int*)((long long)param0 * 24L + gvar_4076B0 + 16L) == param1 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40247A(long long param0, long long* param1, long long param2) {
    long long result;
    long long* ptr0;
    long long v0;
    long long v1;
    if((unsigned int)param0 == -1) {
        long long v2 = sub_401826();
        result = (long long)(unsigned int)v2;
    }
    else {
        long long v3 = sub_40245F((long long)(unsigned int)param0 & 0xffffffffL, 5L);
        if((unsigned char)v3) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_404630 & 0x4)) {
            result = sub_4025C0();
        }
        else {
            long long v4 = sub_40245F((long long)(unsigned int)param0 & 0xffffffffL, 2L);
            if((unsigned char)v4) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long long v5 = sub_40245F((long long)(unsigned int)param0 & 0xffffffffL, 1L);
                if(!(unsigned char)v5) {
                    long long v6 = sub_40245F((long long)(unsigned int)param0 & 0xffffffffL, 4L);
                    if((unsigned char)v6) {
                        long long v7 = (long long)(unsigned int)param0 * 24L + gvar_4076B0;
                        long long v8 = v0;
                        return sub_401D0B(v7, (long long)&ptr0, 1L, -1L, v1);
                    }
                    result = sub_401816();
                }
                else {
                    long long v7 = (long long)(unsigned int)param0 * 24L + gvar_4076B0;
                    long long v8 = v0;
                    result = sub_401D0B(v7, (long long)&ptr0, 1L, -1L, v1);
                }
            }
        }
    }
    return result;
}

long long sub_4025B0() {
    jump gvar_404638;
}

long long sub_4025C0() {
    jump gvar_404638;
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
            long long v3 = v0 & 0xffffffffL;
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
    long long v2;
    long long result = 0L;
    long long v3 = v2;
    long long v4 = param3;
    long long v5 = param2;
    do {
        long long v6 = result & 0xffffffffL;
        v0 = result & 0xffffffffL;
        result = (unsigned long long)((unsigned int)result + 1);
        v1 = (unsigned long long)*(short*)(v6 * 2L + param0);
    }
    while(((unsigned short)v1 & 0xfc00) == 0xdc00);
    if(((unsigned short)v1 & 0xfc00) != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long long v7 = (unsigned long long)*(short*)(result * 2L + param0);
        if((*(short*)(result * 2L + param0) & 0xfc00) != 0xdc00) {
            *param1 = 0xfffd;
            result = 0xffffffffL;
        }
        else {
            *param1 = (unsigned int)v1 * 0x400 + (unsigned int)v7 - 56613888;
            result = (v0 + 2L) & 0xffffffffL;
        }
    }
    return result;
}

void sub_402750(long long param0, unsigned long long param1) {
    long long v0 = param0;
    jump *(long long*)((param1 < 32L ? param1: 32L) * 8L + 4211744L);
}

void sub_402870(long long param0, long long param1, unsigned long long param2, long long param3) {
    long long v0 = param3;
    jump *(long long*)((param2 < 32L ? param2: 32L) * 8L + 4212008L);
}

long long sub_402941(char param0) {
    gvar_40783C |= 4;
    if((*(char*)&gvar_404630 & 0x4)) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x402972 = lidt(*(__SyntheticTypeUnknownP80)0x402972);
    hlt();
}

long long sub_40297A() {
    if((*(char*)&gvar_404630 & 0x4)) {
        DWORD v0 = sub_401DEB();
        gvar_407838 = (unsigned int)v0;
        return -1L;
    }
    return sub_401846();
}
