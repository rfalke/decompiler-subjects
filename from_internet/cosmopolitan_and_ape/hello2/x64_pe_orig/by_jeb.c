
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
        *ptr1 = &loc_401947;
        BOOL v12 = /*BAD_CALL!*/ SetDefaultDllDirectories(0x800);
        ptr1 += 4;
        if(!(unsigned int)v12) {
            ptr1 -= 5;
            *ptr1 = &loc_401960;
            HANDLE hFile = /*BAD_CALL!*/ GetStdHandle(0xfffffff4);
            ptr1 += 2;
            *ptr1 = 0L;
            ptr1 -= 5;
            *ptr1 = &loc_401985;
            /*BAD_CALL!*/ WriteFile(hFile, "nodll\n", 6, (LPDWORD)(ptr2 - 0x1006), *(LPOVERLAPPED*)(ptr1 + 5));
            ++ptr1;
            *ptr1 = 4200850L;
            /*NO_RETURN*/ ExitProcess(1);
        }
        ptr1 -= 5;
        *ptr1 = 4L;
        gvar_440668 = (unsigned int)*ptr1;
        *ptr1 = &loc_4019A9;
        LPWSTR v13 = /*BAD_CALL!*/ GetCommandLineW();
        --ptr1;
        *ptr1 = &loc_4019B2;
        LPWCH penv = /*BAD_CALL!*/ GetEnvironmentStringsW();
        ptr1 += 3;
        *ptr1 = &loc_4019DA;
        long long v14 = /*BAD_CALL!*/ sub_401BAD((long long)v13, (long long)((char*)ptr2 - 49199L), 0x3fffL, (long long)(ptr2 - 6662));
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
            *ptr1 = &loc_401A23;
            v1 = /*BAD_CALL!*/ sub_404E4D((long long)penv, (int*)((char*)ptr2 - 0xe044L), param1, v2);
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
                    *ptr1 = &loc_401A90;
                    v21 = /*BAD_CALL!*/ sub_404E5C((long long)v4, (long long)((char*)ptr2 - 0xe044L), v19, v17);
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
                    *ptr1 = &loc_401ABF;
                    v0 = /*BAD_CALL!*/ sub_404E4D(v19, (int*)(long long)((char*)ptr2 - 0xe044L), v19, v17);
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
        *ptr1 = &loc_401B4D;
        /*BAD_CALL!*/ FreeEnvironmentStringsW(penv);
        v6 = 0L;
        v9 = &MZHeader;
        ptr1 = (unsigned long long*)((long long*)((long long)ptr1 & 0xfffffffffffffff0L) - 1);
        *ptr1 = &loc_4015E7;
        /*BAD_CALL!*/ sub_4012F0(v10, v11);
        gvar_443C74 |= 1;
        long long* ptr3 = (long long*)&gvar_406008;
        long long v25 = 0x406010L;
        while(ptr3 != v25) {
            --ptr1;
            *ptr1 = ptr3;
            --ptr1;
            *ptr1 = v25;
            --ptr1;
            *ptr1 = &loc_401601;
            /*BAD_CALL!*/ *ptr3{sub_4014E0}(v25, v11);
            v25 = *ptr1;
            ++ptr1;
            long long v26 = *ptr1;
            ++ptr1;
            ptr3 = (long long*)(v26 + 8L);
        }
        --ptr1;
        *ptr1 = &loc_401618;
        long long v27 = /*BAD_CALL!*/ sub_4014CE(v3, v5, v8);
        --ptr1;
        *ptr1 = &sub_40161F;
        /*NO_RETURN*/ sub_4018AE(v27 & 0xffffffffL, v7, v11, (long long*)v10);
    }
}

long long sub_401000() {
    gvar_443C74 |= 2;
    if(!(*(char*)&gvar_440668 & 0x4)) {
        syscall();
        syscall();
        syscall();
    }
    /*NO_RETURN*/ sub_405211(134L);
}

long long sub_401158(long long param0, int param1, long long param2, long long* param3) {
    long long v0;
    long long v1 = 39L;
    while(1) {
        --param1;
        v0 = (unsigned long long)((unsigned int)(param0 >>> (v1 & 0x3fL)) & 0x1ff);
        if(param1 == -1) {
            break;
        }
        else {
            long long* ptr0 = (long long*)(v0 * 8L + param2);
            if(!*ptr0) {
                long long v2 = *param3 - 0x1000L;
                *param3 = *param3 - 0x1000L;
                *ptr0 = v2 | 0x3L;
            }
            v1 = (unsigned long long)((unsigned int)v1 - 9);
            param2 = *ptr0 & 0x3fffffffff000L;
        }
    }
    return v0 * 8L + param2;
}

long long sub_4011FE(long long param0, long long* param1, long long param2, long long param3) {
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

void sub_401270() {
    int3();
}

void sub_40127E() {
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

void sub_401299() {
}

long long sub_4012F0(long long param0, int param1) {
    char* ptr0;
    long long v0;
    char* ptr1;
    char* ptr2;
    int v1;
    long long v2;
    long long* ptr3;
    long long* ptr4;
    char* ptr5 = (char*)&gvar_4058F0;
    rdtsc();
    *(int*)&gvar_440000 = v1;
    long long v3 = (unsigned long long)v1;
    *(int*)((char*)&gvar_440000 + 4) = param1;
    unsigned char* ptr6 = (unsigned char*)&gvar_440008;
    long long v4 = v2;
    long long v5 = 0L;
    long long v6 = 22L;
    long long v7 = 0xffffffff80000007L;
    long long v8 = 0xffffffff80000001L;
    long long v9 = 7L;
    long long v10 = 2L;
    unsigned long long* ptr7 = &v0;
    v0 = 1L;
    int v11 = 0;
    do {
        cpuid();
        *(int*)ptr6 = v11;
        int v12 = (unsigned int)v2;
        v2 = (unsigned long long)v11;
        *(int*)(ptr6 + 4L) = v12;
        *(int*)(ptr6 + 8L) = 0;
        int v13 = (unsigned int)v3;
        v3 = 0L;
        *(int*)(ptr6 + 12L) = v13;
        ptr6 += 16L;
    loc_401328:
        while(1) {
            v11 = (unsigned int)*ptr7;
            ++ptr7;
            if(!v11) {
                long long v14 = *ptr7;
                ++ptr7;
                long long v15 = (unsigned long long)(unsigned char)v12 | ((unsigned long long)17 << 8) | ((unsigned long long)(((unsigned long long)v12 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    long long v16 = (unsigned long long)*ptr5;
                    char* ptr8 = ptr5 + 1L;
                    v15 = (unsigned long long)(unsigned char)v16 | ((unsigned long long)((v15 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr5 = ptr8 + 1L;
                    long long v17 = ((unsigned long long)*ptr8 | ((unsigned long long)((v16 >>> 8L) & 0xffffffffffffffL) << 8)) + &gvar_404F07;
                    do {
                        *(long long*)ptr6 = v17;
                        ptr6 += 8L;
                        v15 = (unsigned long long)((unsigned char)v15 + 0xff) | ((unsigned long long)((v15 >>> 8L) & 0xffffffffffffffL) << 8);
                    }
                    while((unsigned char)v15);
                    v15 = (unsigned long long)(unsigned char)v15 | ((unsigned long long)((unsigned char)(v15 >>> 8L) + 0xff) << 8) | ((unsigned long long)((v15 >>> 16L) & 0xffffffffffffL) << 16);
                }
                while((unsigned char)(v15 >>> 8L));
                *(long long**)ptr6 = ptr3;
                --ptr7;
                *ptr7 = &loc_401362;
                /*BAD_CALL!*/ sub_40161F((long long)(ptr6 + 8L), (long long)(ptr5 + 6L));
                --ptr7;
                *ptr7 = &loc_401367;
                /*BAD_CALL!*/ sub_40189D(ptr2, ptr1);
                *(long long*)&ptr2[0] = 0xffff;
                *(long long*)&ptr2[8] = -1L;
                *(long long*)&ptr2[16] = &gvar_40517E;
                --ptr7;
                *ptr7 = 32L;
                long long v18 = *ptr7;
                *ptr7 = &loc_40138A;
                /*BAD_CALL!*/ sub_40186F((long long*)(ptr2 + 24L), ptr1, &gvar_404F84, v18);
                --ptr7;
                *ptr7 = 32L;
                long long v19 = *ptr7;
                *ptr7 = &loc_40139E;
                /*BAD_CALL!*/ sub_40186F((long long*)ptr2, ptr1, &gvar_4050CC, v19);
                *(long long*)&ptr2[0] = *ptr4;
                *(long long*)&ptr2[8] = &gvar_4051E0;
                --ptr7;
                *ptr7 = v14;
                --ptr7;
                *ptr7 = ptr1;
                --ptr7;
                if((ptr2[16] & 0x8)) {
                    *ptr7 = 69L;
                    --ptr7;
                    *ptr7 = 8L;
                    ptr0 = (char*)&gvar_405A52;
                }
                else if((ptr2[16] & 0x20)) {
                    *ptr7 = 48L;
                    --ptr7;
                    *ptr7 = 32L;
                    ptr0 = (char*)&gvar_405989;
                }
                else if((ptr2[16] & 0x4)) {
                    *ptr7 = 34L;
                    --ptr7;
                    *ptr7 = 4L;
                    ptr0 = (char*)&gvar_405A0D;
                }
                else if(*ptr3) {
                    *ptr7 = 0L;
                    --ptr7;
                    *ptr7 = 1L;
                    ptr0 = (char*)&gvar_4059B6;
                }
                else {
                    *ptr7 = 42L;
                    --ptr7;
                    *ptr7 = 16L;
                    ptr0 = (char*)&gvar_4059E1;
                }
                long long v20 = *ptr7;
                ++ptr7;
                *(long long*)&ptr2[16] = v20;
                long long v21 = *ptr7 + &gvar_404DF0;
                *(long long*)&ptr2[24] = *ptr7 + &gvar_404DF0;
                *ptr7 = (long long*)(ptr2 + 32L);
                for(long long* i = (long long*)&gvar_440698; (unsigned long long)i < 4458400L; ++i) {
                    long long v22 = 0L;
                    long long v23 = 0L;
                    do {
                        v21 = (unsigned long long)*ptr0 | ((unsigned long long)((v21 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long long v24 = (unsigned long long)((unsigned int)v21 & 0x7f) << (v22 & 0x3fL);
                        v22 = (unsigned long long)((unsigned int)v22 + 7);
                        v23 |= v24;
                    }
                    while((unsigned char)v21 < 0);
                    if(((unsigned char)v21 & 0x40)) {
                        v23 |= -1L << (v22 & 0x3fL);
                    }
                    v21 = *i ? *i: v23;
                    *i = *i ? *i: v23;
                }
                long long* ptr9 = *ptr7;
                ++ptr7;
                long long v25 = *ptr7;
                ptr7 += 2;
                unsigned long long* ptr10 = ptr7;
                ptr7 -= 5;
                *ptr7 = &loc_401463;
                /*BAD_CALL!*/ GetSystemInfo((LPSYSTEM_INFO)0x443C40);
                ptr7 += 3;
                *ptr7 = 1L;
                gvar_44200C = *ptr7;
                gvar_442004 = gvar_440798;
                gvar_442018 = &gvar_441000;
                gvar_442020 = 0x1000;
                gvar_442030 = *(char*)&gvar_440668 & 0x2 ? &gvar_402250: &sub_4021BE;
                gvar_442038 = &gvar_442000;
                *ptr9 = &sub_403FED;
                *ptr7 = &loc_4014BE;
                /*BAD_CALL!*/ sub_4015CB((long long)(ptr9 + 1), v25);
                *(long long*)&ptr2[0] = 0xffe8;
                *(long long*)&ptr2[8] = &sub_4043D8;
                jump *(long long*)(ptr10 + 1);
            }
        }
    }
    while((unsigned char)v11 <= *(char*)&gvar_440008);
    ptr6 += 16L;
    goto loc_401328;
}

long long sub_4014CE(long long param0, long long param1, long long param2) {
    sub_401F47("hello world", param1, param2);
    return 0L;
}

long long sub_4014E0(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    char* ptr0 = gvar_442038;
    if(!(*(char*)&gvar_440668 & 0x4)) {
        long long v4 = sub_401674((long long)*(int*)(ptr0 + 12L));
        if((unsigned int)v4) {
            goto loc_401505;
        }
    }
    else {
    loc_401505:
        *ptr0 = 1;
    }
    long long v5 = v3;
    char v6 = gvar_442050 ? 0: 1;
    v3 = v2;
    long long v7 = v5;
    long long v8 = v1;
    if(v6) {
        gvar_442050 = 4464728L;
        gvar_442048 = 8L;
        sub_404540(&sub_4020EC, 0L, 0L);
    }
    unsigned long long v9 = gvar_442040;
    unsigned long long v10 = gvar_442050;
    unsigned long long v11 = v9 - 1L;
    while(v11 != -1L) {
        unsigned long long* ptr1 = (unsigned long long*)(v11 * 8L + v10);
        --v11;
        if(!*(long long*)(v11 * 8L + v10 + 8L)) {
            *ptr1 = ptr0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_442048) {
        char v12 = sub_40466A((long long*)&gvar_442050, &gvar_442048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *gvar_442050 = ptr0;
            gvar_442040 = v9 + 1L;
            return v11 & 0xffffffffL;
        }
    }
    else {
        v11 = v9;
        *gvar_442050 = ptr0;
        gvar_442040 = v9 + 1L;
    }
    return v11 & 0xffffffffL;
}

long long sub_4015CB(long long param0, long long param1) {
    long long result;
    sub_404491();
    return result;
}

HANDLE sub_40161F(long long param0, long long param1) {
    gvar_443AA0 = 3L;
    gvar_443AB0 = &gvar_443AB8;
    gvar_443AA8 = 16L;
    gvar_443AC8 = 1;
    gvar_443AE0 = 1;
    gvar_443AF8 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_443AB8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_443AD0 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_443AE8 = result;
    return result;
}

long long sub_401674(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3 = (unsigned long long)(gvar_440668 & 0x4);
    if(!(gvar_440668 & 0x4)) {
        unsigned int v4 = gvar_443C70;
        long long v5 = sub_401711(param0, &v1);
        if(((unsigned int)v5 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            v3 = v0 ? 1L: 0L;
            return v3 & 0xffffffffL;
        }
        gvar_443C70 = v4;
    }
    else {
        int v6 = (unsigned int)param0;
        v3 = 0L;
        long long v7 = /*BAD_CALL!*/ sub_404C6C(param0, 1L);
        if((unsigned char)v7) {
            DWORD v8 = sub_401EB0(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_443AB0));
            v0 = (unsigned int)v8 == 2;
            v3 = v0 ? 1L: 0L;
        }
    }
    return v3 & 0xffffffffL;
}

long long sub_401711(long long param0, int* param1) {
    long long result = sub_404DB0();
    if((unsigned int)result != -1) {
        int v0 = (unsigned int)result;
        sub_40173E(param1);
        result = (long long)v0;
    }
    return result;
}

void sub_40173E(int* param0) {
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
        long long v13 = (unsigned long long)gvar_440668;
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
            goto loc_40184B;
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
                goto loc_40183F;
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
            loc_40183F:
                *(long long*)(param0 + 12) = v0;
                *(long long*)(param0 + 14) = v6;
                *(long long*)(param0 + 16) = v7;
            loc_40184B:
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

long long sub_40186F(long long* param0, char* param1, long long param2, int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((unsigned long long)(((v0 ? 0: 1) * 2) | (gvar_44003D & 0x2 ? 1: 0)) + (long long)param1) + param2;
    return *(long long*)param1;
}

char sub_40189D(char* param0, char* param1) {
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

long long sub_4018AE(int param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    sub_4045D5(0L, param1, param2, param3);
    /*NO_RETURN*/ sub_405211((long long)param0);
}

long long sub_4018C7() {
    gvar_443C70 = gvar_4406A8;
    return -1L;
}

long long sub_4018D7() {
    gvar_443C70 = gvar_4406C0;
    return -1L;
}

long long sub_4018E7() {
    gvar_443C70 = gvar_4406F8;
    return -1L;
}

long long sub_4018F7() {
    gvar_443C70 = gvar_440700;
    return -1L;
}

long long sub_401907() {
    gvar_443C70 = gvar_440708;
    return -1L;
}

long long sub_401B52(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)v1;
    if(*(unsigned short*)v1 <= 55295) {
        *(int*)(param0 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_404E4D(v1, (int*)(param0 + 24L), param0, param3);
    }
    *(long long*)param0 = (v0 & 0xffffffffL) * 2L + *(long long*)param0;
    return (v0 & 0xffffffffL) * 2L;
}

long long sub_401B7D(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_404E5C(param1 & 0xffffffffL, param1, param0, param3);
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

long long sub_401BAD(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    unsigned long long v4;
    long long v5;
    long long v6;
    unsigned long long v7 = 0L;
    long long v8 = param3;
    long long v9 = param1;
    long long v10 = param2 + param1;
    sub_401B52(&v1, param1, param2, param3);
loc_401BF4:
    while(v2) {
        while(v2) {
            if(v2 <= 32 && ((0x100002600L >>> ((unsigned long long)v2 % 64L)) & 0x1L)) {
                sub_401B52(&v1, param1, param2, param3);
            }
            else {
                ++v7;
                if(v7 < v4) {
                    long long v11 = v9;
                    if((unsigned long long)v11 >= (unsigned long long)v10) {
                        v11 = 0L;
                    }
                    v0 = v8;
                    *(long long*)(v7 * 8L + v0 - 8L) = v11;
                }
                unsigned long long v12 = 0L;
            loc_401C83:
                while(v2) {
                    if(!(unsigned char)v12 && v2 <= 32) {
                        if(((0x100002600L >>> ((unsigned long long)(long long)v2 % 64L)) & 0x1L)) {
                            break;
                        }
                    }
                    else if(v2 == 34 || v2 == 92) {
                        unsigned long long v13 = 0L;
                        while(v2 == 92) {
                            ++v13;
                            sub_401B52(&v1, 92L, v0, v5);
                        }
                        unsigned long long i;
                        for(i = 0L; v2 == 34; i = (unsigned long long)(v3 + 1L)) {
                            sub_401B52(&v1, 34L, v0, v5);
                        }
                        unsigned long long v14 = v13;
                        if(!i) {
                            while(1) {
                                --v13;
                                if(v13 == -1L) {
                                    continue loc_401C83;
                                }
                                else {
                                    sub_401B7D(&v1, 92L, v0, v5);
                                }
                            }
                        }
                        while(v14 > 1L) {
                            sub_401B7D(&v1, 92L, v0, v5);
                            v14 -= 2L;
                        }
                        if(((unsigned char)v13 & 0x1)) {
                            sub_401B7D(&v1, 34L, v0, v5);
                            i = (unsigned long long)(v3 - 1L);
                            if(!i) {
                                continue;
                            }
                        }
                        char v15 = (unsigned char)v12 < 1;
                        v12 = 3L;
                        i -= (unsigned long long)v15;
                        while(i + 1L >= v12) {
                            v12 += 3L;
                            sub_401B7D(&v1, 34L, v0, v5);
                        }
                        v5 = 3L;
                        v0 = (long long)(i % 3L);
                        v12 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8);
                        continue;
                    }
                    sub_401B7D(&v1, (long long)v2, v0, v5);
                    sub_401B52(&v1, param1, param2, param3);
                }
                sub_401B7D(&v1, 0L, v0, v5);
                continue loc_401BF4;
            }
        }
    }
    sub_401B7D(&v1, 0L, param2, param3);
    if(v6) {
        long long v16 = v9 - param1;
        *(char*)(((unsigned long long)(v6 - 1L) >= (unsigned long long)v16 ? v16: (unsigned long long)(v6 - 1L)) + param1) = 0;
    }
    if(v4) {
        *(long long*)((v4 - 1L <= v7 ? v4 - 1L: v7) * 8L + v8) = 0L;
    }
    return v7 & 0xffffffffL;
}

long long sub_401DBA(unsigned long long* param0, unsigned long long* param1, long long param2, int* param3) {
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
    int* ptr2 = sub_401E5C(param3, &v1);
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
        result = sub_4052D6();
    }
    else if(!v2) {
        for(long long j = 0L; j != i; ++j) {
        }
    loc_401E3D:
        FlushFileBuffers(*ptr0);
        result = (long long)v2;
    }
    else {
        goto loc_401E3D;
    }
    return result;
}

int* sub_401E5C(int* param0, int* param1) {
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

BOOL sub_401E81(HANDLE hObject) {
    return CloseHandle(hObject);
}

HANDLE sub_401E9A(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, long long param2, long long param3, long long param4, LPCWSTR lpName, long long param6, long long param7) {
    long long v0 = param7;
    return CreateFileMappingNumaW(hFile, lpFileMappingAttributes, (DWORD)param2, (DWORD)param3, (DWORD)param4, lpName, (DWORD)param6);
}

DWORD sub_401EB0(HANDLE hFile) {
    return GetFileType(hFile);
}

DWORD sub_401EC9() {
    return GetLastError();
}

LPVOID sub_401EDF(HANDLE hFileMappingObject, long long param1, long long param2, long long param3, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress, long long param6, long long param7) {
    long long v0 = param7;
    return MapViewOfFileExNuma(hFileMappingObject, (DWORD)param1, (DWORD)param2, (DWORD)param3, dwNumberOfBytesToMap, lpBaseAddress, (DWORD)param6);
}

BOOL sub_401EF5(LPCVOID lpBaseAddress) {
    return UnmapViewOfFile(lpBaseAddress);
}

long long sub_401F47(char* param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = gvar_442038;
    long long v3 = v0;
    long long v4 = sub_401FE7(param0, v2, param2);
    if((unsigned int)v4 != -1) {
        long long v5 = sub_401F82(10L, v2, param2, v1);
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

long long sub_401F82(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    if((unsigned int)param0 != -1) {
        *(char*)((unsigned long long)*(int*)(param1 + 20L) + *(long long*)(param1 + 24L)) = (unsigned char)param0;
        result = (long long)((*(int*)(param1 + 20L) + 1) & (*(int*)(param1 + 32L) - 1));
        int v0 = *(int*)(param1 + 16L);
        *(int*)(param1 + 20L) = (unsigned int)result;
        if((unsigned int)result != v0) {
            param3 = (unsigned long long)*(char*)param1 | ((unsigned long long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)param3 != 2 && (((unsigned char)param3 + 0xff) || (unsigned char)param0 != 10)) {
                goto loc_401FD7;
            }
        }
        param3 = *(long long*)(param1 + 48L);
        if(param3) {
            jump param3;
        }
        if((unsigned int)result == v0) {
            return sub_4020AB(param1);
        }
    loc_401FD7:
        result = param0 & 0xffL;
    }
    else {
        result = sub_4020AB(param1);
    }
    return result;
}

long long sub_401FE7(char* param0, long long param1, long long param2) {
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
loc_401FFB:
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
                    goto loc_401FFB;
                }
            }
            param2 = *(long long*)(v10 + 48L);
            if(param2) {
                v2 = param2(v12);
                goto loc_40205D;
            }
            if((unsigned int)v12 != v11) {
                v6 = (unsigned long long)((unsigned int)v6 + 1);
                goto loc_401FFB;
            }
            else {
                v2 = sub_4020AB(v10);
            loc_40205D:
                v1 = (unsigned int)v2;
                if((unsigned int)v2 != -1) {
                    v6 = (unsigned long long)((unsigned int)v6 + 1);
                    goto loc_401FFB;
                }
                else {
                    long long v13 = sub_4020DE(v10);
                    if((long long)(unsigned int)v13 == gvar_4406B8) {
                        goto loc_401FFB;
                    }
                    else {
                        v0 = sub_4020D4(v10);
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v14 = (unsigned int)gvar_440710;
                *(unsigned int*)(v10 + 8L) = (unsigned int)gvar_440710;
                gvar_443C70 = v14;
            }
            return (unsigned long long)v1;
        }
    }
    while((unsigned char)param2);
    v1 = (unsigned int)v6 + 1;
    return (unsigned long long)v1;
}

long long sub_4020AB(long long param0) {
    return sub_4020B3(param0, -1);
}

long long sub_4020B3(long long param0, int param1) {
    if(!param1) {
        param1 = -1;
    }
    int v0 = *(int*)(param0 + 8L);
    *(int*)(param0 + 8L) = v0 <= 0 ? param1: v0;
    if(param1 > 0) {
        gvar_443C70 = param1;
    }
    return -1L;
}

long long sub_4020D4(long long param0) {
    return *(int*)(param0 + 8L) == -1 ? 1L: 0L;
}

long long sub_4020DE(long long param0) {
    return *(int*)(param0 + 8L) < 0 ? 0L: (unsigned long long)*(int*)(param0 + 8L);
}

long long sub_4020EC(long long param0) {
    int v0;
    if(!param0) {
        v0 = 0;
        for(long long i = gvar_442040 - 1L; i != -1L; --i) {
            if(*(long long*)(i * 8L + gvar_442050)) {
                long long v1 = sub_4020EC();
                if((unsigned int)v1 == -1) {
                    goto loc_40212B;
                }
                else {
                    v0 += (unsigned int)v1;
                }
            }
        }
    }
    else {
        v0 = 0;
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long long)*(int*)(param0 + 4L) & *(long long*)&gvar_440798)) {
            v0 = *(int*)(param0 + 8L);
            if(!v0) {
                while(*(int*)(param0 + 16L) != *(int*)(param0 + 20L)) {
                    long long v2 = param0;
                    long long v3 = sub_4021BE(param0);
                    if((unsigned int)v3 != -1) {
                        param0 = v2;
                        v0 += (unsigned int)v3;
                    }
                    else {
                    loc_40212B:
                        v0 = -1;
                        break;
                    }
                }
            }
            else if(v0 != -1) {
                long long v4 = sub_4020B3(param0, v0);
                v0 = (int)v4;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long long)v0;
}

long long sub_4021BE(long long param0) {
    long long result;
    long long v0;
    long long v1 = v0;
    long long v2 = (unsigned long long)*(int*)(param0 + 16L);
    unsigned int v3 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v2 >= v3) {
        v3 = *(unsigned int*)(param0 + 32L);
    }
    int v4 = v3 - (unsigned int)v2;
    long long v5 = sub_404C87((long long)*(int*)(param0 + 12L), (long long*)(*(long long*)(param0 + 24L) + v2), (long long)v4);
    if(v5 == -1L) {
        result = sub_40228B(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v5 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (long long)v4;
    }
    return result;
}

long long sub_40228B(long long param0) {
    return sub_4020B3(param0, gvar_443C70);
}

void sub_402296() {
    jump gvar_440678;
}

void sub_40229C() {
    jump gvar_440680;
}

void sub_4022A2() {
    jump gvar_440688;
}

unsigned long long sub_4022A8(long long param0, long long param1, long long param2) {
    long long v0 = (unsigned long long)((unsigned int)param1 & 0xf);
    if(((unsigned int)param1 & 0xf)) {
        v0 = (unsigned long long)((0 - ((unsigned int)param1 + 16)) & 0xf);
    }
    long long v1 = v0 + param1;
    long long v2 = param2 - v0;
    *(long long*)(param0 + 40L) = v1;
    *(long long*)(param0 + 16L) = v2;
    *(long long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long long result = gvar_442480;
    *(long long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long long*)(param0 + 48L) = result;
    return result;
}

long long sub_4022EF(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long result = 0L;
    long long v4 = v3;
    long long v5 = v1;
    long long v6 = param0;
    long long v7 = v2;
    long long* ptr0 = *(unsigned long long*)(param0 + 0x388L);
    if(ptr0) {
        int v8 = *(int*)(ptr0 + 3);
        if(((unsigned char)v8 & 0x1)) {
            int v9 = v8 & 0x8;
            if(!v9) {
                param0 = *ptr0;
                long long v10 = (unsigned long long)((unsigned int)param0 & 0xf);
                if(((unsigned int)param0 & 0xf)) {
                    v10 = (unsigned long long)((0 - ((unsigned int)param0 + 16)) & 0xf);
                }
                long long v11 = v10 + param0;
                result = 0L;
                long long v12 = *(long long*)(v11 + 8L);
                if(!((unsigned long long)((unsigned int)v12 & 0x3) - 1L)) {
                    result = *(ptr0 + 1);
                    long long v13 = (v12 & 0xfffffffffffffff8L) + v11;
                    long long v14 = param0 + result - 80L;
                    if((unsigned long long)v13 >= (unsigned long long)v14) {
                        long long v15 = *(ptr0 + 2);
                        if(*(long long*)(v6 + 32L) == v11) {
                            *(long long*)(v6 + 32L) = 0L;
                            *(long long*)(v6 + 8L) = 0L;
                        }
                        else {
                            long long v16 = *(long long*)(v11 + 24L);
                            long long v17 = *(long long*)(v11 + 48L);
                            if(v16 != v11) {
                                v14 = *(long long*)(v11 + 16L);
                                *(long long*)(v14 + 24L) = v16;
                                *(long long*)(v16 + 16L) = v14;
                            }
                            else {
                                v16 = *(long long*)(v16 + 40L);
                                v13 = v11 + 40L;
                                if(!v16) {
                                    v16 = *(long long*)(v11 + 32L);
                                    if(v16) {
                                        v13 = v11 + 32L;
                                        goto loc_4023D1;
                                    }
                                }
                                else {
                                loc_4023D1:
                                    v14 = v16;
                                loc_4023D4:
                                    do {
                                        v0 = v13;
                                        v16 = v14;
                                        v13 = v14 + 40L;
                                        v14 = *(long long*)(v14 + 40L);
                                        if(v14) {
                                            goto loc_4023D4;
                                        }
                                        else {
                                            v14 = *(long long*)(v16 + 32L);
                                            v13 = v16 + 32L;
                                        }
                                    }
                                    while(v14);
                                    *(long long*)v0 = 0L;
                                }
                            }
                            if(v17) {
                                v13 = (long long)*(int*)(v11 + 56L);
                                v14 = (long long)*(int*)(v11 + 56L) * 8L + v6;
                                if(*(long long*)(v14 + 600L) == v11) {
                                    *(long long*)(v14 + 600L) = v16;
                                    if(v16) {
                                        goto loc_40241F;
                                    }
                                    else {
                                        *(int*)(v6 + 4L) = (__rol__(-2, v13 & 0x1fL)) & *(int*)(v6 + 4L);
                                    }
                                }
                                else {
                                    if(*(long long*)(v17 + 32L) == v11) {
                                        *(long long*)(v17 + 32L) = v16;
                                    }
                                    else {
                                        *(long long*)(v17 + 40L) = v16;
                                    }
                                    if(v16) {
                                    loc_40241F:
                                        long long v18 = *(long long*)(v11 + 32L);
                                        *(long long*)(v16 + 48L) = v17;
                                        if(v18) {
                                            *(long long*)(v16 + 32L) = v18;
                                            *(long long*)(v18 + 48L) = v16;
                                        }
                                        v14 = *(long long*)(v11 + 40L);
                                        if(v14) {
                                            *(long long*)(v16 + 40L) = v14;
                                            *(long long*)(v14 + 48L) = v16;
                                        }
                                    }
                                }
                            }
                        }
                        long long v19 = v15;
                        long long v20 = sub_40452C(param0, result, v14, v13);
                        if(!(unsigned int)v20) {
                            long long v21 = v19;
                            *(long long*)(v6 + 856L) = *(long long*)(v6 + 856L) - result;
                            *(long long*)(v6 + 0x388L) = v21;
                        }
                        else {
                            long long v22 = (v12 & 0xfffffffffffffff8L) >>> 8;
                            int v23 = (unsigned int)v22;
                            if((unsigned int)v22) {
                                v23 = 31;
                                if((unsigned int)v22 <= 0xffff) {
                                    if((unsigned int)v22 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)v22 >>> i); --i) {
                                        }
                                        v22 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v22 >>> 32L) << 32);
                                    }
                                    v23 = (31 - ((unsigned int)v22 ^ 0x1f)) * 2 + ((unsigned int)((v12 & 0xfffffffffffffff8L) >>> ((unsigned long long)(38 - ((unsigned int)v22 ^ 0x1f)) & 0x3fL)) & 0x1);
                                }
                            }
                            int v24 = *(int*)(v6 + 4L);
                            *(int*)(v11 + 56L) = v23;
                            *(long long*)(v11 + 40L) = 0L;
                            *(long long*)(v11 + 32L) = 0L;
                            if(!((1 << ((unsigned long long)v23 & 0x1fL)) & v24)) {
                                *(int*)(v6 + 4L) = (1 << ((unsigned long long)v23 & 0x1fL)) | v24;
                                *(long long*)((long long)v23 * 8L + v6 + 600L) = v11;
                                *(long long*)(v11 + 48L) = (long long)v23 * 8L + v6 + 600L;
                            loc_402568:
                                *(long long*)(v11 + 24L) = v11;
                                *(long long*)(v11 + 16L) = v11;
                            }
                            else {
                                v14 = *(long long*)((long long)v23 * 8L + v6 + 600L);
                                if(v23 != 31) {
                                    v9 = 57 - (v23 >>> 1);
                                }
                                v13 = (v12 & 0xfffffffffffffff8L) << ((unsigned long long)v9 & 0x3fL);
                                while((*(long long*)(v14 + 8L) & 0xfffffffffffffff8L) != (v12 & 0xfffffffffffffff8L)) {
                                    long long v25 = v13;
                                    v13 *= 2L;
                                    long long v26 = *(long long*)((4L - (v25 >> 63)) * 8L + v14);
                                    if(v26) {
                                        v14 = v26;
                                    }
                                    else {
                                        *(long long*)((4L - (v25 >> 63)) * 8L + v14) = v11;
                                        *(long long*)(v11 + 48L) = v14;
                                        goto loc_402568;
                                    }
                                }
                                long long v27 = *(long long*)(v14 + 16L);
                                *(long long*)(v27 + 24L) = v11;
                                *(long long*)(v14 + 16L) = v11;
                                *(long long*)(v11 + 16L) = v27;
                                *(long long*)(v11 + 24L) = v14;
                                *(long long*)(v11 + 48L) = 0L;
                            }
                            result = 0L;
                            *(long long*)(v6 + 56L) = 128L;
                            return result;
                        }
                    }
                    else {
                        result = 0L;
                    }
                }
            }
        }
    }
    *(long long*)(v6 + 56L) = 128L;
    return result;
}

long long sub_4026E8(int* param0, long long param1, long long param2, long long param3) {
    long long* ptr0;
    long long v0;
    long long* ptr1;
    long long* ptr2;
    long long* ptr3;
    long long v1 = param1;
    long long result = *(long long*)(v1 + 8L);
    long long* ptr4 = (long long*)(param2 + param1);
    if(!((unsigned char)result & 0x1)) {
        ptr3 = *(long long**)v1;
        v1 -= (long long)ptr3;
        if((unsigned char)result & 0x3) {
            param2 += (long long)ptr3;
            if(*(long long*)(param0 + 8) == v1) {
                result = *(ptr4 + 1);
                if(((unsigned int)result & 0x3) == 3) {
                    *(long long*)(param0 + 2) = param2;
                    *(ptr4 + 1) = result & 0xfffffffffffffffeL;
                    result = param2 | 0x1L;
                    *(long long*)(v1 + 8L) = param2 | 0x1L;
                    *ptr4 = param2;
                    return result;
                }
                goto loc_402874;
            }
            else {
                result = *(long long*)(v1 + 24L);
            }
            if((unsigned long long)ptr3 <= 0xffL) {
                long long v2 = *(long long*)(v1 + 16L);
                if(result == v2) {
                    result = (long long)__rol__(-2, (long long)((long long)ptr3 >>> 3) & 0x1fL);
                    *param0 = (__rol__(-2, (long long)((long long)ptr3 >>> 3) & 0x1fL)) & *param0;
                }
                else {
                    *(long long*)(v2 + 24L) = result;
                    *(long long*)(result + 16L) = v2;
                }
            }
            else {
                long long v3 = *(long long*)(v1 + 48L);
                if(result != v1) {
                    param3 = *(long long*)(v1 + 16L);
                    *(long long*)(param3 + 24L) = result;
                    *(long long*)(result + 16L) = param3;
                }
                else {
                    result = *(long long*)(v1 + 40L);
                    ptr2 = (long long*)(v1 + 40L);
                    if(!result) {
                        result = *(long long*)(v1 + 32L);
                        if(result) {
                            ptr2 = (long long*)(v1 + 32L);
                            goto loc_4027A5;
                        }
                    }
                    else {
                    loc_4027A5:
                        param3 = result;
                    loc_4027A8:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long long*)(param3 + 40L);
                            param3 = *(long long*)(param3 + 40L);
                            if(param3) {
                                goto loc_4027A8;
                            }
                            else {
                                param3 = *(long long*)(result + 32L);
                                ptr2 = (long long*)(result + 32L);
                            }
                        }
                        while(param3);
                        *ptr1 = 0L;
                    }
                }
                if(v3) {
                    long long v4 = (long long)*(int*)(v1 + 56L);
                    ptr2 = (long long*)(v4 * 8L + (long long)param0);
                    if(*(ptr2 + 75) == v1) {
                        *(ptr2 + 75) = result;
                        if(result) {
                            goto loc_4027F8;
                        }
                        else {
                            result = (long long)__rol__(-2, v4 & 0x1fL);
                            *(param0 + 1) = (__rol__(-2, v4 & 0x1fL)) & *(param0 + 1);
                        }
                    }
                    else {
                        if(*(long long*)(v3 + 32L) == v1) {
                            *(long long*)(v3 + 32L) = result;
                        }
                        else {
                            *(long long*)(v3 + 40L) = result;
                        }
                        if(result) {
                        loc_4027F8:
                            long long v5 = *(long long*)(v1 + 32L);
                            *(long long*)(result + 48L) = v3;
                            if(v5) {
                                *(long long*)(result + 32L) = v5;
                                *(long long*)(v5 + 48L) = result;
                            }
                            param3 = *(long long*)(v1 + 40L);
                            if(param3) {
                                *(long long*)(result + 40L) = param3;
                                *(long long*)(param3 + 48L) = result;
                            }
                        }
                    }
                }
            }
            goto loc_402874;
        }
        else {
            v0 = (long long)((long long*)(param2 + (long long)ptr3) + 4);
            result = sub_40452C(v1, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long long*)(param0 + 214) = *(long long*)(param0 + 214) - v0;
            return result;
        }
    }
    else {
    loc_402874:
        ptr3 = *(unsigned long long*)(ptr4 + 1);
        if(!((unsigned char)ptr3 & 0x2)) {
            ptr1 = *(unsigned long long*)(param0 + 8);
            if(*(long long*)(param0 + 10) != ptr4) {
                if(ptr4 == ptr1) {
                    param2 += *(long long*)(param0 + 2);
                    *(long long*)(param0 + 8) = v1;
                    *(long long*)(param0 + 2) = param2;
                    result = param2 | 0x1L;
                    *(long long*)(v1 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + v1) = param2;
                }
                else {
                    ptr3 = (long long*)((long long)ptr3 & 0xfffffffffffffff8L);
                    long long v6 = *(ptr4 + 3);
                    param2 += (long long)ptr3;
                    if((unsigned long long)ptr3 <= 248L) {
                        ptr4 = *(unsigned long long*)(ptr4 + 2);
                        if(v6 == ptr4) {
                            *param0 = (__rol__(-2, (long long)((long long)ptr3 >>> 3) & 0x1fL)) & *param0;
                        }
                        else {
                            *(ptr4 + 3) = v6;
                            *(unsigned long long*)(v6 + 16L) = ptr4;
                        }
                    }
                    else {
                        ptr3 = *(unsigned long long*)(ptr4 + 6);
                        if(v6 != ptr4) {
                            param3 = *(ptr4 + 2);
                            *(long long*)(param3 + 24L) = v6;
                            *(long long*)(v6 + 16L) = param3;
                        }
                        else {
                            v6 = *(ptr4 + 5);
                            ptr2 = ptr4 + 5;
                            if(!v6) {
                                v6 = *(ptr4 + 4);
                                if(v6) {
                                    ptr2 = ptr4 + 4;
                                    goto loc_402953;
                                }
                            }
                            else {
                            loc_402953:
                                param3 = v6;
                            loc_402956:
                                do {
                                    ptr0 = ptr2;
                                    v6 = param3;
                                    ptr2 = (long long*)(param3 + 40L);
                                    param3 = *(long long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402956;
                                    }
                                    else {
                                        param3 = *(long long*)(v6 + 32L);
                                        ptr2 = (long long*)(v6 + 32L);
                                    }
                                }
                                while(param3);
                                *ptr0 = 0L;
                            }
                        }
                        if(ptr3) {
                            long long v7 = (long long)*(int*)(ptr4 + 7);
                            ptr2 = (long long*)(v7 * 8L + (long long)param0);
                            if(*(ptr2 + 75) == ptr4) {
                                *(ptr2 + 75) = v6;
                                if(v6) {
                                    goto loc_4029A2;
                                }
                                else {
                                    *(param0 + 1) = (__rol__(-2, v7 & 0x1fL)) & *(param0 + 1);
                                }
                            }
                            else {
                                if(*(ptr3 + 4) == ptr4) {
                                    *(ptr3 + 4) = v6;
                                }
                                else {
                                    *(ptr3 + 5) = v6;
                                }
                                if(v6) {
                                loc_4029A2:
                                    long long v8 = *(ptr4 + 4);
                                    *(unsigned long long*)(v6 + 48L) = ptr3;
                                    if(v8) {
                                        *(long long*)(v6 + 32L) = v8;
                                        *(long long*)(v8 + 48L) = v6;
                                    }
                                    param3 = *(ptr4 + 5);
                                    if(param3) {
                                        *(long long*)(v6 + 40L) = param3;
                                        *(long long*)(param3 + 48L) = v6;
                                    }
                                }
                            }
                        }
                    }
                    result = param2 | 0x1L;
                    *(long long*)(v1 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + v1) = param2;
                    if(v1 != ptr1) {
                        goto loc_402A2F;
                    }
                    else {
                        *(long long*)(param0 + 2) = param2;
                    }
                }
                return result;
            }
            long long v9 = *(long long*)(param0 + 4) + param2;
            *(long long*)(param0 + 10) = v1;
            *(long long*)(param0 + 4) = v9;
            *(long long*)(v1 + 8L) = v9 | 0x1L;
            if(v1 == ptr1) {
                *(long long*)(param0 + 8) = 0L;
                *(long long*)(param0 + 2) = 0L;
                return result;
            }
        }
        else {
            *(unsigned long long*)(ptr4 + 1) = (long long*)((long long)ptr3 & 0xfffffffffffffffeL);
            *(long long*)(v1 + 8L) = param2 | 0x1L;
            *(long long*)(param2 + v1) = param2;
        loc_402A2F:
            if((unsigned long long)param2 <= 0xffL) {
                int v10 = *param0;
                ptr4 = (long long*)(1 << ((param2 >>> 3) & 0x1fL));
                result = (long long)((long long*)((((unsigned long long)0 | ((unsigned long long)((param2 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)param0) + 9);
                if(!((unsigned int)ptr4 & v10)) {
                    *param0 = (unsigned int)ptr4 | v10;
                    param2 = result;
                }
                else {
                    param2 = *(long long*)(result + 16L);
                }
                *(long long*)(result + 16L) = v1;
                *(long long*)(param2 + 24L) = v1;
                *(long long*)(v1 + 16L) = param2;
                *(long long*)(v1 + 24L) = result;
            }
            else {
                long long v11 = param2 >>> 8;
                int v12 = (unsigned int)v11;
                if((unsigned int)v11) {
                    v12 = 31;
                    if((unsigned int)v11 <= 0xffff) {
                        if((unsigned int)v11 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v11 >>> i); --i) {
                            }
                            v11 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v11 >>> 32L) << 32);
                        }
                        v12 = (31 - ((unsigned int)v11 ^ 0x1f)) * 2 + ((unsigned int)(param2 >>> ((unsigned long long)(38 - ((unsigned int)v11 ^ 0x1f)) & 0x3fL)) & 0x1);
                    }
                }
                int v13 = *(param0 + 1);
                *(int*)(v1 + 56L) = v12;
                *(long long*)(v1 + 40L) = 0L;
                *(long long*)(v1 + 32L) = 0L;
                if(!((1 << ((unsigned long long)v12 & 0x1fL)) & v13)) {
                    result = (long long)((long long*)((long long)(long long*)((long long)(long long*)v12 * 8L) + (long long)param0) + 75);
                    *(param0 + 1) = (1 << ((unsigned long long)v12 & 0x1fL)) | v13;
                    *((long long*)((long long)(long long*)((long long)(long long*)v12 * 8L) + (long long)param0) + 75) = v1;
                    *(long long*)(v1 + 48L) = result;
                loc_402B39:
                    *(long long*)(v1 + 24L) = v1;
                    *(long long*)(v1 + 16L) = v1;
                }
                else {
                    long long v14 = 0L;
                    ptr4 = *(unsigned long long*)((long long*)((long long)(long long*)((long long)(long long*)v12 * 8L) + (long long)param0) + 75);
                    if(v12 != 31) {
                        v14 = (unsigned long long)(57 - (v12 >>> 1));
                    }
                    param3 = param2 << (v14 & 0x3fL);
                    while((*(ptr4 + 1) & 0xfffffffffffffff8L) != param2) {
                        long long v15 = param3;
                        param3 *= 2L;
                        result = 4L - (v15 >> 63);
                        ptr3 = *(unsigned long long*)(result * 8L + (long long)ptr4);
                        if(ptr3) {
                            ptr4 = ptr3;
                        }
                        else {
                            *(long long*)(result * 8L + (long long)ptr4) = v1;
                            *(unsigned long long*)(v1 + 48L) = ptr4;
                            goto loc_402B39;
                        }
                    }
                    result = *(ptr4 + 2);
                    *(long long*)(result + 24L) = v1;
                    *(ptr4 + 2) = v1;
                    *(long long*)(v1 + 16L) = result;
                    *(unsigned long long*)(v1 + 24L) = ptr4;
                    *(long long*)(v1 + 48L) = 0L;
                    return result;
                }
            }
        }
    }
    return result;
}

long long sub_402B64(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long* ptr0;
    long long v0;
    long long v1;
    int counter;
    long long v2;
    long long v3;
    long long v4;
    char v5;
    char v6;
    unsigned long long v7;
    unsigned long long v8;
    unsigned long long v9;
    long long v10;
    unsigned long long v11;
    unsigned long long v12;
    long long v13;
    long long v14;
    unsigned long long v15;
    long long v16;
    long long v17;
    unsigned long long v18;
    unsigned long long v19;
    long long* ptr1;
    unsigned long long v20;
    if((unsigned long long)param0 <= 224L) {
        v18 = (unsigned long long)param0 <= 14L ? 32L: (unsigned long long)((param0 + 31L) & 0xfffffffffffffff0L);
        param1 = (long long)gvar_4420A0;
        int v21 = (unsigned int)param1 >>> ((v18 >>> 3) & 0x1fL);
        if(((unsigned char)v21 & 0x3)) {
            v17 = (long long)((~v21 & 0x1) + (unsigned int)(v18 >>> 3L));
            v16 = *(long long*)((((unsigned long long)0 | ((unsigned long long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8);
            param4 = *(long long*)(v16 + 16L);
            if((((unsigned long long)0 | ((unsigned long long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8 == param4) {
                gvar_4420A0 = (unsigned int)((~(1 << ((unsigned int)v17 % 32)) & (unsigned int)param1) | (0 << ((unsigned int)v17 % 32)));
            }
            else {
                *(long long*)(param4 + 24L) = (((unsigned long long)0 | ((unsigned long long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                *(long long*)((((unsigned long long)0 | ((unsigned long long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8) = param4;
            }
            *(long long*)(v16 + 8L) = (unsigned long long)((unsigned int)((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) | 0x3);
            *(long long*)((((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16 + 8L) = *(long long*)((((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16 + 8L) | 0x1L;
        }
        else {
            param5 = gvar_4420A8;
            if(v18 <= (unsigned long long)param5) {
            loc_403291:
                unsigned long long v22 = gvar_4420A8;
                if(v22 >= v18) {
                    v16 = gvar_4420C0;
                    v17 = (long long)(v22 - v18);
                    param1 = v16 + v22;
                    if((unsigned long long)v17 > 31L) {
                        unsigned long long v23 = (unsigned long long)(v16 + v18);
                        gvar_4420A8 = v17;
                        gvar_4420C0 = v23;
                        *(long long*)(v23 + 8L) = v17 | 0x1L;
                        *(long long*)param1 = v17;
                        *(long long*)(v16 + 8L) = v18 | 0x3L;
                        return v16 + 16L;
                    }
                    gvar_4420A8 = 0L;
                    gvar_4420C0 = 0L;
                    *(long long*)(v16 + 8L) = v22 | 0x3L;
                    *(long long*)(param1 + 8L) = *(long long*)(param1 + 8L) | 0x1L;
                }
                else {
                    long long v24 = gvar_4420B0;
                    if((unsigned long long)v24 > v18) {
                        v15 = (unsigned long long)(v24 - v18);
                        goto loc_403AAA;
                    }
                    else {
                        v17 = gvar_442470;
                        if(!(*(char*)&gvar_442410 & 0x1) || gvar_442478 > v18 || !v24) {
                        loc_4033E4:
                            long long v25 = (v17 + v18 + 95L) & (0L - v17);
                            if(v18 >= (unsigned long long)v25) {
                                return 0L;
                            }
                            long long v26 = gvar_442408;
                            if(v26) {
                                v17 = gvar_4423F8;
                                v24 = v17 + v25;
                                if((unsigned long long)v24 <= (unsigned long long)v17 || (unsigned long long)v24 > (unsigned long long)v26) {
                                    return 0L;
                                }
                            }
                            param5 = sub_404518(v25, param1, v26, v17, param4, param5);
                            unsigned long long v27 = gvar_4423F8 + v25;
                            char v28 = gvar_442400 == v27;
                            char v29 = gvar_442400 > v27;
                            gvar_4423F8 = v27;
                            if(!v29 && !v28) {
                                gvar_442400 = v27;
                            }
                            v1 = gvar_4420C8;
                            if(!v1) {
                                unsigned long long v30 = gvar_4420B8;
                                if(!v30 || v30 > (unsigned long long)param5) {
                                    gvar_4420B8 = param5;
                                }
                                unsigned long long v31 = gvar_442460;
                                gvar_442418 = param5;
                                gvar_442420 = v25;
                                gvar_442430 = 1;
                                gvar_4420D8 = 128L;
                                gvar_4420E0 = v31;
                                long long v32 = &gvar_4420E8;
                                do {
                                    *(long long*)(v32 + 24L) = v32;
                                    *(long long*)(v32 + 16L) = v32;
                                    v32 += 16L;
                                }
                                while(v32 != 0x4422e8L);
                                v14 = v25 - 80L;
                                v13 = param5;
                                sub_4022A8(&gvar_4420A0, v13, v14);
                                goto loc_403A9B;
                            }
                            else {
                                v12 = gvar_442418;
                                v11 = gvar_442420;
                            }
                            if(v12 + v11 == param5) {
                                long long v33 = (unsigned long long)gvar_442430;
                                if(!((unsigned char)v33 & 0x8) && ((unsigned char)v33 & 0x1) && v12 <= (unsigned long long)v1 && (unsigned long long)param5 > (unsigned long long)v1) {
                                    v13 = v1;
                                    gvar_442420 = v11 + v25;
                                    v14 = (long long)(gvar_4420B0 + v25);
                                    sub_4022A8(&gvar_4420A0, v13, v14);
                                    goto loc_403A9B;
                                }
                            }
                            if(gvar_4420B8 > (unsigned long long)param5) {
                                gvar_4420B8 = param5;
                            }
                            unsigned long long* ptr2 = (unsigned long long*)&gvar_442418;
                            if(v12 == param5) {
                                v0 = (long long)(gvar_442430 & 0x8);
                                if(!(gvar_442430 & 0x8) && ((unsigned char)gvar_442430 & 0x1)) {
                                    gvar_442418 = param5;
                                    v17 = (long long)((unsigned int)v12 & 0xf);
                                    gvar_442420 = v11 + v25;
                                    if((unsigned int)v17) {
                                        v17 = (long long)((0 - ((unsigned int)v12 + 16)) & 0xf);
                                    }
                                    long long v34 = v12 + v17;
                                    unsigned long long v35 = v18 + param5;
                                    param4 = v34 - param5 - v18;
                                    *(long long*)(param5 + 8L) = v18 | 0x3L;
                                    if(v34 == v1) {
                                        unsigned long long v36 = gvar_4420B0 + param4;
                                        gvar_4420C8 = v35;
                                        gvar_4420B0 = v36;
                                        *(long long*)(v35 + 8L) = (long long)(v36 | 0x1L);
                                    }
                                    else if(gvar_4420C0 == v34) {
                                        param4 = (long long)(gvar_4420A8 + param4);
                                        gvar_4420C0 = v35;
                                        gvar_4420A8 = param4;
                                        *(long long*)(v35 + 8L) = param4 | 0x1L;
                                        *(long long*)(v35 + param4) = param4;
                                    }
                                    else {
                                        unsigned long long v37 = *(unsigned long long*)(v34 + 8L);
                                        if(!((unsigned long long)((unsigned int)v37 & 0x3) - 1L)) {
                                            unsigned long long v38 = *(unsigned long long*)(v34 + 24L);
                                            if(v37 <= 0xffL) {
                                                long long v39 = *(long long*)(v34 + 16L);
                                                if(v38 == v39) {
                                                    gvar_4420A0 = (unsigned int)((__rol__(-2, (v37 >>> 3) & 0x1fL)) & gvar_4420A0);
                                                }
                                                else {
                                                    *(unsigned long long*)(v39 + 24L) = v38;
                                                    *(long long*)(v38 + 16L) = v39;
                                                }
                                            }
                                            else {
                                                long long v40 = *(long long*)(v34 + 48L);
                                                if(v34 != v38) {
                                                    long long v41 = *(long long*)(v34 + 16L);
                                                    *(unsigned long long*)(v41 + 24L) = v38;
                                                    *(long long*)(v38 + 16L) = v41;
                                                }
                                                else {
                                                    v38 = *(unsigned long long*)(v34 + 40L);
                                                    v1 = v34 + 40L;
                                                    if(!v38) {
                                                        v38 = *(unsigned long long*)(v34 + 32L);
                                                        if(v38) {
                                                            v1 = v34 + 32L;
                                                            goto loc_403674;
                                                        }
                                                    }
                                                    else {
                                                    loc_403674:
                                                        unsigned long long v42 = v38;
                                                    loc_403677:
                                                        do {
                                                            v10 = v1;
                                                            v38 = v42;
                                                            v1 = (long long)(v42 + 40L);
                                                            v42 = *(unsigned long long*)(v42 + 40L);
                                                            if(v42) {
                                                                goto loc_403677;
                                                            }
                                                            else {
                                                                v42 = *(unsigned long long*)(v38 + 32L);
                                                                v1 = (long long)(v38 + 32L);
                                                            }
                                                        }
                                                        while(v42);
                                                        *(long long*)v10 = 0L;
                                                    }
                                                }
                                                if(v40) {
                                                    v1 = (long long)*(int*)(v34 + 56L);
                                                    if(*(unsigned long long*)(v1 * 8L + (long long)&gvar_4422F8) == v34) {
                                                        gvar_4420A8 = v38;
                                                        if(v38) {
                                                            goto loc_4036C6;
                                                        }
                                                        else {
                                                            gvar_4420A4 = (unsigned int)((__rol__(-2, v1 & 0x1fL)) & gvar_4420A4);
                                                        }
                                                    }
                                                    else {
                                                        if(*(long long*)(v40 + 32L) == v34) {
                                                            *(unsigned long long*)(v40 + 32L) = v38;
                                                        }
                                                        else {
                                                            *(unsigned long long*)(v40 + 40L) = v38;
                                                        }
                                                        if(v38) {
                                                        loc_4036C6:
                                                            long long v43 = *(long long*)(v34 + 32L);
                                                            *(long long*)(v38 + 48L) = v40;
                                                            if(v43) {
                                                                *(long long*)(v38 + 32L) = v43;
                                                                *(unsigned long long*)(v43 + 48L) = v38;
                                                            }
                                                            long long v44 = *(long long*)(v34 + 40L);
                                                            if(v44) {
                                                                *(long long*)(v38 + 40L) = v44;
                                                                *(unsigned long long*)(v44 + 48L) = v38;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            v34 += v37 & 0xfffffffffffffff8L;
                                            param4 += v37 & 0xfffffffffffffff8L;
                                        }
                                        *(long long*)(v34 + 8L) = *(long long*)(v34 + 8L) & 0xfffffffffffffffeL;
                                        *(long long*)(v35 + 8L) = param4 | 0x1L;
                                        *(long long*)(v35 + param4) = param4;
                                        if((unsigned long long)param4 <= 0xffL) {
                                            param1 = (long long)gvar_4420A0;
                                            if(!((1 << ((param4 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                                                v17 = (((unsigned long long)0 | ((unsigned long long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                                                gvar_4420A0 = (unsigned int)((1 << ((param4 >>> 3) & 0x1fL)) | (unsigned int)param1);
                                            }
                                            else {
                                                v17 = *(long long*)((((unsigned long long)0 | ((unsigned long long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8);
                                            }
                                            *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8) = v35;
                                            *(unsigned long long*)(v17 + 24L) = v35;
                                            *(long long*)(v35 + 16L) = v17;
                                            *(long long*)(v35 + 24L) = (((unsigned long long)0 | ((unsigned long long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                                        }
                                        else {
                                            long long v45 = param4 >>> 8;
                                            int v46 = (unsigned int)v45;
                                            if((unsigned int)v45) {
                                                v46 = 31;
                                                if((unsigned int)v45 <= 0xffff) {
                                                    if((unsigned int)v45 != 0) {
                                                        int i;
                                                        for(i = 31; !((unsigned int)v45 >>> i); --i) {
                                                        }
                                                        v45 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v45 >>> 32L) << 32);
                                                    }
                                                    v46 = (31 - ((unsigned int)v45 ^ 0x1f)) * 2 + ((unsigned int)(param4 >>> ((unsigned long long)(38 - ((unsigned int)v45 ^ 0x1f)) & 0x3fL)) & 0x1);
                                                }
                                            }
                                            unsigned int v47 = gvar_4420A4;
                                            *(int*)(v35 + 56L) = v46;
                                            *(long long*)(v35 + 40L) = 0L;
                                            *(long long*)(v35 + 32L) = 0L;
                                            if(!((1 << ((unsigned long long)v46 & 0x1fL)) & v47)) {
                                                *(unsigned long long*)((long long)v46 * 8L + (long long)&gvar_4422F8) = v35;
                                                gvar_4420A4 = (unsigned int)((1 << ((unsigned long long)v46 & 0x1fL)) | v47);
                                                *(long long*)(v35 + 48L) = (long long)v46 * 8L + &gvar_4422F8;
                                            loc_403855:
                                                *(unsigned long long*)(v35 + 24L) = v35;
                                                *(unsigned long long*)(v35 + 16L) = v35;
                                            }
                                            else {
                                                param1 = *(long long*)((long long)v46 * 8L + (long long)&gvar_4422F8);
                                                if(v46 != 31) {
                                                    v0 = (long long)(57 - (v46 >>> 1));
                                                }
                                                v17 = param4 << (v0 & 0x3fL);
                                                while((*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != param4) {
                                                    long long v48 = v17;
                                                    v17 *= 2L;
                                                    param0 = *(long long*)((4L - (v48 >> 63)) * 8L + param1);
                                                    if(param0) {
                                                        param1 = param0;
                                                    }
                                                    else {
                                                        *(unsigned long long*)((4L - (v48 >> 63)) * 8L + param1) = v35;
                                                        *(long long*)(v35 + 48L) = param1;
                                                        goto loc_403855;
                                                    }
                                                }
                                                long long v49 = *(long long*)(param1 + 16L);
                                                *(unsigned long long*)(v49 + 24L) = v35;
                                                *(unsigned long long*)(param1 + 16L) = v35;
                                                *(long long*)(v35 + 16L) = v49;
                                                *(long long*)(v35 + 24L) = param1;
                                                *(long long*)(v35 + 48L) = 0L;
                                            }
                                        }
                                    }
                                    return param5 + 16L;
                                }
                            }
                            do {
                                v9 = *ptr2;
                                if((unsigned long long)v1 >= v9) {
                                    v9 = (unsigned long long)(*(long long*)(ptr2 + 1) + v9);
                                    if((unsigned long long)v1 >= v9) {
                                        ptr2 = *(ptr2 + 2);
                                    }
                                }
                                else {
                                    ptr2 = *(ptr2 + 2);
                                }
                                goto loc_4038DA;
                            }
                            while(ptr2);
                            ud2();
                        loc_4038DA:
                            sub_4022A8(&gvar_4420A0, param5, v25 - 80L);
                            *(ptr1 + 1) = 51L;
                            param0 = (long long)(ptr1 + 2);
                            param1 = &gvar_442418;
                            for(long long j = 8L; j != 0L; --j) {
                                *(int*)param0 = *(int*)param1;
                                param1 += 4L;
                                param0 += 4L;
                            }
                            gvar_442428 = ptr1 + 2;
                            long long* ptr3 = ptr1 + 7;
                            gvar_442418 = v20;
                            gvar_442420 = v25;
                            gvar_442430 = 1;
                            do {
                                *ptr3 = 11L;
                                ++ptr3;
                            }
                            while((unsigned long long)ptr3 < v9);
                            if(v19 != ptr1) {
                                *(ptr1 + 1) = *(ptr1 + 1) & 0xfffffffffffffffeL;
                                param1 = (long long)((long long)ptr1 - v19);
                                *(long long*)(v19 + 8L) = param1 | 0x1L;
                                *ptr1 = param1;
                                if((unsigned long long)param1 <= 0xffL) {
                                    unsigned int v50 = gvar_4420A0;
                                    if(!((1 << ((param1 >>> 3) & 0x1fL)) & v50)) {
                                        gvar_4420A0 = (unsigned int)((1 << ((param1 >>> 3) & 0x1fL)) | v50);
                                        v8 = (unsigned long long)((((unsigned long long)0 | ((unsigned long long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8);
                                    }
                                    else {
                                        v8 = *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8);
                                    }
                                    *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8) = v19;
                                    *(unsigned long long*)(v8 + 24L) = v19;
                                    *(unsigned long long*)(v19 + 16L) = v8;
                                    *(long long*)(v19 + 24L) = (((unsigned long long)0 | ((unsigned long long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                                }
                                else {
                                    long long v51 = param1 >>> 8;
                                    int v52 = (unsigned int)v51;
                                    if((unsigned int)v51) {
                                        v52 = 31;
                                        if((unsigned int)v51 <= 0xffff) {
                                            if((unsigned int)v51 != 0) {
                                                int k;
                                                for(k = 31; !((unsigned int)v51 >>> k); --k) {
                                                }
                                                v51 = (unsigned long long)k | ((unsigned long long)(unsigned int)(v51 >>> 32L) << 32);
                                            }
                                            v52 = (31 - ((unsigned int)v51 ^ 0x1f)) * 2 + ((unsigned int)(param1 >>> ((unsigned long long)(38 - ((unsigned int)v51 ^ 0x1f)) & 0x3fL)) & 0x1);
                                        }
                                    }
                                    unsigned int v53 = gvar_4420A4;
                                    *(int*)(v19 + 56L) = v52;
                                    *(long long*)(v19 + 40L) = 0L;
                                    *(long long*)(v19 + 32L) = 0L;
                                    if(!((1 << ((unsigned long long)v52 & 0x1fL)) & v53)) {
                                        *(unsigned long long*)((long long)v52 * 8L + (long long)&gvar_4422F8) = v19;
                                        gvar_4420A4 = (unsigned int)((1 << ((unsigned long long)v52 & 0x1fL)) | v53);
                                        *(long long*)(v19 + 48L) = (long long)v52 * 8L + &gvar_4422F8;
                                    loc_403A75:
                                        *(unsigned long long*)(v19 + 24L) = v19;
                                        *(unsigned long long*)(v19 + 16L) = v19;
                                    }
                                    else {
                                        long long v54 = 0L;
                                        long long v55 = *(long long*)((long long)v52 * 8L + (long long)&gvar_4422F8);
                                        if(v52 != 31) {
                                            v54 = (unsigned long long)(57 - (v52 >>> 1));
                                        }
                                        long long v56 = param1 << (v54 & 0x3fL);
                                        while((*(long long*)(v55 + 8L) & 0xfffffffffffffff8L) != param1) {
                                            long long v57 = v56;
                                            v56 *= 2L;
                                            param0 = *(long long*)((4L - (v57 >> 63)) * 8L + v55);
                                            if(param0) {
                                                v55 = param0;
                                            }
                                            else {
                                                *(unsigned long long*)((4L - (v57 >> 63)) * 8L + v55) = v19;
                                                *(long long*)(v19 + 48L) = v55;
                                                goto loc_403A75;
                                            }
                                        }
                                        long long v58 = *(long long*)(v55 + 16L);
                                        *(unsigned long long*)(v58 + 24L) = v19;
                                        *(unsigned long long*)(v55 + 16L) = v19;
                                        *(long long*)(v19 + 16L) = v58;
                                        *(long long*)(v19 + 24L) = v55;
                                        *(long long*)(v19 + 48L) = 0L;
                                    }
                                }
                            }
                        loc_403A9B:
                            unsigned long long v59 = gvar_4420B0;
                            if(v59 <= v18) {
                                sub_4018E7();
                                return 0L;
                            }
                            v15 = v59 - v18;
                        loc_403AAA:
                            v16 = gvar_4420C8;
                            gvar_4420B0 = v15;
                            gvar_4420C8 = v16 + v18;
                            *(long long*)(v16 + v18 + 8L) = v15 | 0x1L;
                            *(long long*)(v16 + 8L) = v18 | 0x3L;
                            return v16 + 16L;
                        }
                        param1 = gvar_442408;
                        long long v60 = (v17 + v18 + 62L) & (0L - v17);
                        if(param1 || v18 >= (unsigned long long)v60) {
                            goto loc_4033E4;
                        }
                        else {
                            v16 = sub_404518(v60, 0L, 0L - v17, v17, param4, param5);
                            *(long long*)v16 = 0L;
                            *(long long*)(v16 + 8L) = v60 - 32L;
                            unsigned long long v61 = gvar_4420B8;
                            *(long long*)(v16 - 24L) = 11L;
                            *(long long*)(v16 - 16L) = 0L;
                            if(!v61 || (unsigned long long)v16 < v61) {
                                gvar_4420B8 = v16;
                            }
                            v7 = gvar_4423F8 + v60;
                            v6 = gvar_442400 == v7;
                            v5 = gvar_442400 > v7;
                            gvar_4423F8 = v7;
                        }
                    }
                    if(!v5 && !v6) {
                        gvar_442400 = v7;
                    }
                }
            }
            else {
                if(!v21) {
                    param0 = (long long)gvar_4420A4;
                    if(!gvar_4420A4) {
                        goto loc_403291;
                    }
                    else {
                        int v62 = (0 - (unsigned int)param0) & (unsigned int)param0;
                        if(v62 != 0) {
                            for(counter = 0; !((v62 >>> counter) & 0x1); ++counter) {
                            }
                            v62 = counter;
                        }
                        v17 = *(long long*)((unsigned long long)v62 * 8L + (long long)&gvar_4422F8);
                        v16 = *(long long*)((unsigned long long)v62 * 8L + (long long)&gvar_4422F8);
                        param4 = (*(long long*)(v17 + 8L) & 0xfffffffffffffff8L) - v18;
                        while(1) {
                            long long v63 = *(long long*)(v17 + 32L);
                            if(v63) {
                                goto loc_402D51;
                            }
                            else {
                                v63 = *(long long*)(v17 + 40L);
                                if(v63) {
                                    goto loc_402D51;
                                }
                                else {
                                    v4 = *(long long*)(v16 + 24L);
                                    v1 = *(long long*)(v16 + 48L);
                                    v3 = v18 + param4;
                                }
                            }
                            if(v16 != v4) {
                                v17 = *(long long*)(v16 + 16L);
                                *(long long*)(v17 + 24L) = v4;
                                *(long long*)(v4 + 16L) = v17;
                                goto loc_402DD4;
                            }
                            else {
                                v4 = *(long long*)(v16 + 40L);
                                v0 = v16 + 40L;
                                if(!v4) {
                                    v4 = *(long long*)(v16 + 32L);
                                    if(!v4) {
                                        goto loc_402DD4;
                                    }
                                    else {
                                        v0 = v16 + 32L;
                                        goto loc_402DA6;
                                    }
                                }
                                else {
                                loc_402DA6:
                                    v17 = v4;
                                    break;
                                loc_402D51:
                                    long long v64 = (*(long long*)(v63 + 8L) & 0xfffffffffffffff8L) - v18;
                                    if((unsigned long long)v64 < (unsigned long long)param4) {
                                        param4 = v64;
                                        v16 = v63;
                                    }
                                    v17 = v63;
                                }
                            }
                        }
                    loc_402DA9:
                        do {
                            v2 = v0;
                            v4 = v17;
                            v0 = v17 + 40L;
                            v17 = *(long long*)(v17 + 40L);
                            if(v17) {
                                goto loc_402DA9;
                            }
                            else {
                                v17 = *(long long*)(v4 + 32L);
                                v0 = v4 + 32L;
                            }
                        }
                        while(v17);
                        *(long long*)v2 = 0L;
                    loc_402DD4:
                        if(v1) {
                            v0 = (long long)*(int*)(v16 + 56L);
                            if(*(unsigned long long*)(v0 * 8L + (long long)&gvar_4422F8) == v16) {
                                *(long long*)((v0 + 74L) * 8L + (long long)&gvar_4420A8) = v4;
                                if(v4) {
                                    goto loc_402DF5;
                                }
                                else {
                                    gvar_4420A4 = (unsigned int)((~(1 << ((unsigned int)v0 % 32)) & (unsigned int)param0) | (0 << ((unsigned int)v0 % 32)));
                                }
                            }
                            else {
                                if(*(long long*)(v1 + 32L) == v16) {
                                    *(long long*)(v1 + 32L) = v4;
                                }
                                else {
                                    *(long long*)(v1 + 40L) = v4;
                                }
                                if(v4) {
                                loc_402DF5:
                                    long long v65 = *(long long*)(v16 + 32L);
                                    *(long long*)(v4 + 48L) = v1;
                                    if(v65) {
                                        *(long long*)(v4 + 32L) = v65;
                                        *(long long*)(v65 + 48L) = v4;
                                    }
                                    v17 = *(long long*)(v16 + 40L);
                                    if(v17) {
                                        *(long long*)(v4 + 40L) = v17;
                                        *(long long*)(v17 + 48L) = v4;
                                    }
                                }
                            }
                        }
                        if((unsigned long long)param4 <= 31L) {
                            *(long long*)(v16 + 8L) = v3 | 0x3L;
                            *(long long*)(v16 + 8L) = *(long long*)(v16 + 8L) | 0x1L;
                        }
                        else {
                            v1 = v16 + v18;
                            *(long long*)(v16 + 8L) = v18 | 0x3L;
                            *(long long*)(v1 + 8L) = param4 | 0x1L;
                            *(long long*)(param4 + v1) = param4;
                            if(param5) {
                                unsigned long long v66 = gvar_4420C0;
                                if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                                    v17 = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                                    gvar_4420A0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)param1);
                                }
                                else {
                                    v17 = *(long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8);
                                }
                                *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long long)&gvar_4420F8) = v66;
                                *(unsigned long long*)(v17 + 24L) = v66;
                                *(long long*)(v66 + 16L) = v17;
                                *(long long*)(v66 + 24L) = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                            }
                            gvar_4420A8 = param4;
                            gvar_4420C0 = v1;
                        }
                    }
                    return v16 + 16L;
                }
                int v67 = ((0 - (unsigned int)((unsigned long long)0 | ((unsigned long long)(1 << ((v18 >>> 3) & 0x1fL)) << 1))) | (unsigned int)((unsigned long long)0 | ((unsigned long long)(1 << ((v18 >>> 3) & 0x1fL)) << 1))) & (v21 << ((v18 >>> 3) & 0x1fL));
                v17 = (long long)(0 - v67);
                if(((0 - v67) & v67) != 0) {
                    for(counter = 0; !((((0 - v67) & v67) >>> counter) & 0x1); ++counter) {
                    }
                    v17 = (unsigned long long)counter | ((unsigned long long)(unsigned int)(v17 >>> 32L) << 32);
                }
                v1 = (((unsigned long long)0 | ((unsigned long long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                param4 = ((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL;
                v16 = *(long long*)(v1 + 16L);
                v0 = *(long long*)(v16 + 16L);
                if(v1 == v0) {
                    gvar_4420A0 = (unsigned int)(~(1 << (v17 & 0x1fL)) & (unsigned int)param1);
                }
                else {
                    *(long long*)(v0 + 24L) = v1;
                    *(long long*)(v1 + 16L) = v0;
                }
                ptr0 = (long long*)((((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16);
                param1 = (((unsigned long long)0 | ((unsigned long long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) - v18;
                if((unsigned long long)param1 <= 31L) {
                    *(long long*)(v16 + 8L) = (unsigned long long)((unsigned int)param4 | 0x3);
                    *(ptr0 + 1) = *(ptr0 + 1) | 0x1L;
                }
                else {
                    unsigned long long v68 = (unsigned long long)(v16 + v18);
                    *(long long*)(v16 + 8L) = v18 | 0x3L;
                    *(long long*)(v68 + 8L) = param1 | 0x1L;
                    *ptr0 = param1;
                    if(param5) {
                        v1 = (long long)gvar_4420A0;
                        unsigned long long v69 = gvar_4420C0;
                        if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)v1)) {
                            v17 = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                            gvar_4420A0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)v1);
                        }
                        else {
                            v17 = *(long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8);
                        }
                        *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8) = v69;
                        *(unsigned long long*)(v17 + 24L) = v69;
                        *(long long*)(v69 + 16L) = v17;
                        *(long long*)(v69 + 24L) = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                    }
                    gvar_4420A8 = param1;
                    gvar_4420C0 = v68;
                }
            }
        }
    }
    else {
        if((unsigned long long)param0 > 18446744073709551487L) {
            v18 = 18446744073709551615L;
            goto loc_403291;
        }
        else {
            long long v70 = param0 + 31L;
            param0 = (long long)gvar_4420A4;
            v18 = (unsigned long long)(v70 & 0xfffffffffffffff0L);
            if(!(unsigned int)param0) {
                goto loc_403291;
            }
            else {
                long long v71 = v18 >>> 8;
                param5 = 0L - v18;
                param1 = v71 & 0xffffffffL;
                if((unsigned int)v71) {
                    param1 = 31L;
                    if((unsigned int)v71 <= 0xffff) {
                        if((unsigned int)v71 != 0) {
                            int counter1;
                            for(counter1 = 31; !((unsigned int)v71 >>> counter1); --counter1) {
                            }
                            v71 = (unsigned long long)counter1 | ((unsigned long long)(unsigned int)(v71 >>> 32L) << 32);
                        }
                        param1 = ((unsigned long long)(31 - ((unsigned int)v71 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(v18 >>> ((unsigned long long)(38 - ((unsigned int)v71 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xffffffffL;
                    }
                }
                long long v72 = 0L;
                v16 = *(long long*)((param1 & 0xffffffffL) * 8L + (long long)&gvar_4422F8);
                if(v16) {
                    v0 = 0L;
                    v1 = 0L;
                    long long v73 = v18 << (((unsigned int)param1 == 31 ? 0L: (unsigned long long)(57 - ((unsigned int)param1 >>> 1))) & 0x3fL);
                    while(1) {
                        long long v74 = (*(long long*)(v16 + 8L) & 0xfffffffffffffff8L) - v18;
                        if((unsigned long long)v74 >= (unsigned long long)param5) {
                        loc_402F82:
                            v72 = *(long long*)(v16 + 40L);
                            param4 = 4L - (v73 >> 63);
                            v16 = *(long long*)(param4 * 8L + v16);
                            if(!v72 || v16 == v72) {
                                v72 = v0;
                            }
                            if(!v16) {
                                break;
                            }
                            else {
                                v73 *= 2L;
                                v0 = v72;
                            }
                        }
                        else if(v74) {
                            param5 = v74;
                            v1 = v16;
                            goto loc_402F82;
                        }
                        else {
                            v72 = v16;
                            param5 = 0L;
                            goto loc_402FC0;
                        }
                    }
                    v16 = v1;
                }
            loc_402FC0:
                if(!(v16 | v72)) {
                    int v75 = (-2 << (param1 & 0x1fL)) & (unsigned int)param0;
                    if(!v75) {
                        goto loc_403291;
                    }
                    else {
                        int v76 = (0 - v75) & v75;
                        if(v76 != 0) {
                            for(counter = 0; !((v76 >>> counter) & 0x1); ++counter) {
                            }
                            v76 = counter;
                        }
                        v72 = *(long long*)((unsigned long long)v76 * 8L + (long long)&gvar_4422F8);
                        v16 = 0L;
                    }
                }
                while(v72) {
                    long long v77 = (*(long long*)(v72 + 8L) & 0xfffffffffffffff8L) - v18;
                    if((unsigned long long)v77 < (unsigned long long)param5) {
                        param5 = v77;
                        v16 = v72;
                    }
                    v17 = *(long long*)(v72 + 32L);
                    if(!v17) {
                        v17 = *(long long*)(v72 + 40L);
                    }
                    v72 = v17;
                }
                if(!v16 || gvar_4420A8 - v18 <= (unsigned long long)param5) {
                    goto loc_403291;
                }
                else {
                    long long v78 = *(long long*)(v16 + 24L);
                    param1 = *(long long*)(v16 + 48L);
                    v1 = (long long)(v18 + param5);
                    if(v16 != v78) {
                        v17 = *(long long*)(v16 + 16L);
                        *(long long*)(v17 + 24L) = v78;
                        *(long long*)(v78 + 16L) = v17;
                    }
                    else {
                        v78 = *(long long*)(v16 + 40L);
                        param4 = v16 + 40L;
                        if(!v78) {
                            v78 = *(long long*)(v16 + 32L);
                            if(v78) {
                                param4 = v16 + 32L;
                                goto loc_40306A;
                            }
                        }
                        else {
                        loc_40306A:
                            v17 = v78;
                        loc_40306D:
                            do {
                                v0 = param4;
                                v78 = v17;
                                param4 = v17 + 40L;
                                v17 = *(long long*)(v17 + 40L);
                                if(v17) {
                                    goto loc_40306D;
                                }
                                else {
                                    v17 = *(long long*)(v78 + 32L);
                                    param4 = v78 + 32L;
                                }
                            }
                            while(v17);
                            *(long long*)v0 = 0L;
                        }
                    }
                    if(param1) {
                        param4 = (long long)*(int*)(v16 + 56L);
                        if(*(unsigned long long*)(param4 * 8L + (long long)&gvar_4422F8) == v16) {
                            *(long long*)((param4 + 74L) * 8L + (long long)&gvar_4420A8) = v78;
                            if(v78) {
                                goto loc_4030B8;
                            }
                            else {
                                gvar_4420A4 = (unsigned int)((~(1 << ((unsigned int)param4 % 32)) & (unsigned int)param0) | (0 << ((unsigned int)param4 % 32)));
                            }
                        }
                        else {
                            if(*(long long*)(param1 + 32L) == v16) {
                                *(long long*)(param1 + 32L) = v78;
                            }
                            else {
                                *(long long*)(param1 + 40L) = v78;
                            }
                            if(v78) {
                            loc_4030B8:
                                long long v79 = *(long long*)(v16 + 32L);
                                *(long long*)(v78 + 48L) = param1;
                                if(v79) {
                                    *(long long*)(v78 + 32L) = v79;
                                    *(long long*)(v79 + 48L) = v78;
                                }
                                v17 = *(long long*)(v16 + 40L);
                                if(v17) {
                                    *(long long*)(v78 + 40L) = v17;
                                    *(long long*)(v17 + 48L) = v78;
                                }
                            }
                        }
                    }
                }
            }
        }
        if((unsigned long long)param5 <= 31L) {
            *(long long*)(v16 + 8L) = v1 | 0x3L;
            *(long long*)(v16 + v1 + 8L) = *(long long*)(v16 + v1 + 8L) | 0x1L;
        }
        else {
            param4 = v16 + v18;
            *(long long*)(v16 + 8L) = v18 | 0x3L;
            *(long long*)(param4 + 8L) = param5 | 0x1L;
            *(long long*)(param4 + param5) = param5;
            if((unsigned long long)param5 <= 0xffL) {
                param1 = (long long)gvar_4420A0;
                if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                    v17 = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
                    gvar_4420A0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)param1);
                }
                else {
                    v17 = *(long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8);
                }
                *(long long*)((((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8) = param4;
                *(long long*)(v17 + 24L) = param4;
                *(long long*)(param4 + 16L) = v17;
                *(long long*)(param4 + 24L) = (((unsigned long long)0 | ((unsigned long long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
            }
            else {
                long long v80 = param5 >>> 8;
                int v81 = (unsigned int)v80;
                if((unsigned int)v80) {
                    v81 = 31;
                    if((unsigned int)v80 <= 0xffff) {
                        if((unsigned int)v80 != 0) {
                            int counter2;
                            for(counter2 = 31; !((unsigned int)v80 >>> counter2); --counter2) {
                            }
                            v80 = (unsigned long long)counter2 | ((unsigned long long)(unsigned int)(v80 >>> 32L) << 32);
                        }
                        v81 = (31 - ((unsigned int)v80 ^ 0x1f)) * 2 + ((unsigned int)(param5 >>> ((unsigned long long)(38 - ((unsigned int)v80 ^ 0x1f)) & 0x3fL)) & 0x1);
                    }
                }
                unsigned int v82 = gvar_4420A4;
                *(int*)(param4 + 56L) = v81;
                *(long long*)(param4 + 40L) = 0L;
                *(long long*)(param4 + 32L) = 0L;
                if(!((1 << ((unsigned long long)v81 & 0x1fL)) & v82)) {
                    *(long long*)((long long)v81 * 8L + (long long)&gvar_4422F8) = param4;
                    gvar_4420A4 = (unsigned int)((1 << ((unsigned long long)v81 & 0x1fL)) | v82);
                    *(long long*)(param4 + 48L) = (long long)v81 * 8L + &gvar_4422F8;
                loc_40325F:
                    *(long long*)(param4 + 24L) = param4;
                    *(long long*)(param4 + 16L) = param4;
                }
                else {
                    long long v83 = 0L;
                    param1 = *(long long*)((long long)v81 * 8L + (long long)&gvar_4422F8);
                    if(v81 != 31) {
                        v83 = (unsigned long long)(57 - (v81 >>> 1));
                    }
                    v17 = param5 << (v83 & 0x3fL);
                    while((*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != param5) {
                        long long v84 = v17;
                        v17 *= 2L;
                        param0 = *(long long*)((4L - (v84 >> 63)) * 8L + param1);
                        if(param0) {
                            param1 = param0;
                        }
                        else {
                            *(long long*)((4L - (v84 >> 63)) * 8L + param1) = param4;
                            *(long long*)(param4 + 48L) = param1;
                            goto loc_40325F;
                        }
                    }
                    long long v85 = *(long long*)(param1 + 16L);
                    *(long long*)(v85 + 24L) = param4;
                    *(long long*)(param1 + 16L) = param4;
                    *(long long*)(param4 + 16L) = v85;
                    *(long long*)(param4 + 24L) = param1;
                    *(long long*)(param4 + 48L) = 0L;
                }
            }
        }
    }
    return v16 + 16L;
}

void sub_403AE8(long long param0, unsigned long long* param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long* ptr0;
    long long* ptr1;
    long long v4;
    unsigned long long v5;
    long long v6;
    long long v7;
    long long v8;
    unsigned long long* ptr2;
    unsigned long long* ptr3;
    long long v9;
    long long v10;
    long long v11;
    if(param0) {
        long long v12 = param0;
        param0 -= 16L;
        long long v13 = v7;
        long long* ptr4 = &ptr3;
        long long v14 = *(long long*)(v12 - 8L);
        long long* ptr5 = (long long*)(v14 & 0xfffffffffffffff8L);
        unsigned long long* ptr6 = (unsigned long long*)((long long)ptr5 + param0);
        if((unsigned char)v14 & 0x1) {
        loc_403C97:
            ptr0 = *(ptr6 + 1);
            if(!((unsigned char)ptr0 & 0x2)) {
                v2 = gvar_4420C0;
                if(gvar_4420C8 == ptr6) {
                    long long v15 = (long long)(gvar_4420B0 + (long long)ptr5);
                    gvar_4420C8 = param0;
                    gvar_4420B0 = v15;
                    *(long long*)(param0 + 8L) = v15 | 0x1L;
                    if(param0 == v2) {
                        gvar_4420C0 = 0L;
                        gvar_4420A8 = 0L;
                    }
                    if(gvar_4420D0 >= (unsigned long long)v15) {
                        jump *(ptr4 + 3);
                    }
                    else {
                        long long v16 = v13;
                        v13 = v9;
                        ptr3 = ptr2;
                        v6 = v11;
                        long long v17 = v16;
                        v15 = gvar_4420C8;
                        if(v15) {
                            unsigned long long v18 = gvar_4420B0;
                            if(v18 > 80L) {
                                unsigned long long v19 = &gvar_442418;
                                unsigned long long* ptr7 = (unsigned long long*)&gvar_442418;
                                do {
                                    v5 = *ptr7;
                                    if((unsigned long long)v15 >= v5) {
                                        param5 = *(long long*)(ptr7 + 1);
                                        ptr0 = (unsigned long long*)(v5 + param5);
                                        if((unsigned long long)v15 >= (unsigned long long)ptr0) {
                                            ptr7 = *(ptr7 + 2);
                                        }
                                    }
                                    else {
                                        ptr7 = *(ptr7 + 2);
                                    }
                                    goto loc_402619;
                                }
                                while(ptr7);
                                ud2();
                            loc_402619:
                                long long v20 = (unsigned long long)*(int*)(ptr7 + 3);
                                if(((unsigned char)v20 & 0x8) || !((unsigned char)v20 & 0x1)) {
                                    goto loc_4025E0;
                                }
                                else {
                                    unsigned long long v21 = gvar_442470;
                                    v16 = ((v18 + v21 - 81L) / v21 - 1L) * v21;
                                    if((unsigned long long)v16 > (unsigned long long)param5) {
                                        goto loc_4025E0;
                                    }
                                    else {
                                        while(1) {
                                            if(v19 >= v5 && v19 < (unsigned long long)ptr0) {
                                                goto loc_4025E0;
                                            }
                                            else {
                                                v19 = *(unsigned long long*)(v19 + 16L);
                                                if(!v19) {
                                                    long long v22 = param5 - v16;
                                                    long long v23 = sub_404ABB();
                                                    if(!(v23 + 1L)) {
                                                        long long v24 = sub_40452C(*ptr7 + v22, v16, v8, v10);
                                                        if((unsigned int)v24) {
                                                            goto loc_4025E0;
                                                        }
                                                    }
                                                    if(v16) {
                                                        *(long long*)(ptr7 + 1) = *(long long*)(ptr7 + 1) - v16;
                                                        unsigned long long v25 = gvar_4420B0;
                                                        gvar_4423F8 -= v16;
                                                        sub_4022A8(&gvar_4420A0, gvar_4420C8, (long long)(v25 - v16));
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                            loc_4025E0:
                                v16 = 0L;
                            }
                            v15 = sub_4022EF(&gvar_4420A0);
                            if(!(v15 + v16) && gvar_4420B0 > gvar_4420D0) {
                                gvar_4420D0 = 18446744073709551615L;
                            }
                        }
                        return;
                    }
                }
                else if(ptr6 == v2) {
                    long long* ptr8 = (long long*)(gvar_4420A8 + (long long)ptr5);
                    gvar_4420C0 = param0;
                    gvar_4420A8 = ptr8;
                    *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr8 | 0x1L);
                    *(unsigned long long*)((long long)ptr8 + param0) = ptr8;
                    jump *(ptr4 + 3);
                }
                else {
                    ptr0 = (unsigned long long*)((long long)ptr0 & 0xfffffffffffffff8L);
                    long long v26 = *(long long*)(ptr6 + 3);
                    ptr5 = (long long*)((long long)ptr5 + (long long)ptr0);
                    if((unsigned long long)ptr0 <= 248L) {
                        ptr6 = *(ptr6 + 2);
                        if(v26 == ptr6) {
                            gvar_4420A0 = (unsigned int)((__rol__(-2, (long long)((long long)ptr0 >>> 3) & 0x1fL)) & gvar_4420A0);
                        }
                        else {
                            *(long long*)(ptr6 + 3) = v26;
                            *(unsigned long long*)(v26 + 16L) = ptr6;
                        }
                    }
                    else {
                        ptr0 = *(ptr6 + 6);
                        if(v26 != ptr6) {
                            v14 = *(long long*)(ptr6 + 2);
                            *(long long*)(v14 + 24L) = v26;
                            *(long long*)(v26 + 16L) = v14;
                        }
                        else {
                            v26 = *(long long*)(ptr6 + 5);
                            param5 = (long long)(ptr6 + 5);
                            if(!v26) {
                                v26 = *(long long*)(ptr6 + 4);
                                if(v26) {
                                    param5 = (long long)(ptr6 + 4);
                                    goto loc_403DAE;
                                }
                            }
                            else {
                            loc_403DAE:
                                v14 = v26;
                            loc_403DB1:
                                do {
                                    v4 = param5;
                                    v26 = v14;
                                    param5 = v14 + 40L;
                                    v14 = *(long long*)(v14 + 40L);
                                    if(v14) {
                                        goto loc_403DB1;
                                    }
                                    else {
                                        v14 = *(long long*)(v26 + 32L);
                                        param5 = v26 + 32L;
                                    }
                                }
                                while(v14);
                                *(long long*)v4 = 0L;
                            }
                        }
                        if(ptr0) {
                            param5 = (long long)*(int*)(ptr6 + 7);
                            if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_4422F8) == ptr6) {
                                *(long long*)((param5 + 74L) * 8L + (long long)&gvar_4420A8) = v26;
                                if(v26) {
                                    goto loc_403DFF;
                                }
                                else {
                                    gvar_4420A4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4420A4);
                                }
                            }
                            else {
                                if(*(long long*)(ptr0 + 4) == ptr6) {
                                    *(long long*)(ptr0 + 4) = v26;
                                }
                                else {
                                    *(long long*)(ptr0 + 5) = v26;
                                }
                                if(v26) {
                                loc_403DFF:
                                    long long v27 = *(long long*)(ptr6 + 4);
                                    *(unsigned long long*)(v26 + 48L) = ptr0;
                                    if(v27) {
                                        *(long long*)(v26 + 32L) = v27;
                                        *(long long*)(v27 + 48L) = v26;
                                    }
                                    v14 = *(long long*)(ptr6 + 5);
                                    if(v14) {
                                        *(long long*)(v26 + 40L) = v14;
                                        *(long long*)(v14 + 48L) = v26;
                                    }
                                }
                            }
                        }
                    }
                    *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr5 | 0x1L);
                    *(unsigned long long*)((long long)ptr5 + param0) = ptr5;
                    if(param0 == v2) {
                        gvar_4420A8 = ptr5;
                        jump *(ptr4 + 3);
                    }
                }
            }
            else {
                *(ptr6 + 1) = (long long*)((long long)ptr0 & 0xfffffffffffffffeL);
                *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr5 | 0x1L);
                *(unsigned long long*)((long long)ptr5 + param0) = ptr5;
            }
            if((unsigned long long)ptr5 <= 0xffL) {
                unsigned int v28 = gvar_4420A0;
                if(!((1 << ((long long)((long long)ptr5 >>> 3) & 0x1fL)) & v28)) {
                    gvar_4420A0 = (unsigned int)((1 << ((long long)((long long)ptr5 >>> 3) & 0x1fL)) | v28);
                    ptr1 = (long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8);
                }
                else {
                    ptr1 = *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8);
                }
                *(long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420F8) = param0;
                *(ptr1 + 3) = param0;
                *(unsigned long long*)(param0 + 16L) = ptr1;
                *(long long*)(param0 + 24L) = (((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_4420E8;
            }
            else {
                long long* ptr9 = (long long*)((long long)ptr5 >>> 8);
                ptr1 = (long long*)((long long)ptr9 & 0xffffffffL);
                if((unsigned int)ptr9) {
                    ptr1 = (long long*)0x1F;
                    if((unsigned int)ptr9 <= 0xffff) {
                        if((unsigned int)ptr9 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr9 >>> i); --i) {
                            }
                            ptr9 = (unsigned long long)i | ((unsigned long long)(unsigned int)(long long*)((long long)ptr9 >>> 32L) << 32);
                        }
                        ptr1 = (long long*)(((unsigned long long)(31 - ((unsigned int)ptr9 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(long long*)((long long)ptr5 >>> ((unsigned long long)(38 - ((unsigned int)ptr9 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xffffffffL);
                    }
                }
                unsigned int v29 = gvar_4420A4;
                *(int*)(param0 + 56L) = (unsigned int)ptr1;
                *(long long*)(param0 + 40L) = 0L;
                *(long long*)(param0 + 32L) = 0L;
                if(!((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) & v29)) {
                    *(long long*)((long long)(long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xffffffffL) * 8L) + (long long)&gvar_4422F8) = param0;
                    gvar_4420A4 = (unsigned int)((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) | v29);
                    *(unsigned long long*)(param0 + 48L) = (long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xffffffffL) * 8L) + 558175;
                loc_403FAC:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v30 = 0L;
                    ptr6 = *(unsigned long long*)((long long)(long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xffffffffL) * 8L) + (long long)&gvar_4422F8);
                    if((unsigned int)ptr1 != 31) {
                        v30 = (unsigned long long)(57 - ((unsigned int)ptr1 >>> 1));
                    }
                    v14 = (long long)((long long)ptr5 << (v30 & 0x3fL));
                    while((*(long long*)(ptr6 + 1) & 0xfffffffffffffff8L) != ptr5) {
                        long long v31 = v14;
                        v14 *= 2L;
                        ptr0 = *(unsigned long long*)((4L - (v31 >> 63)) * 8L + (long long)ptr6);
                        if(ptr0) {
                            ptr6 = ptr0;
                        }
                        else {
                            *(long long*)((4L - (v31 >> 63)) * 8L + (long long)ptr6) = param0;
                            *(unsigned long long*)(param0 + 48L) = ptr6;
                            goto loc_403FAC;
                        }
                    }
                    long long v32 = *(long long*)(ptr6 + 2);
                    *(long long*)(v32 + 24L) = param0;
                    *(long long*)(ptr6 + 2) = param0;
                    *(long long*)(param0 + 16L) = v32;
                    *(unsigned long long*)(param0 + 24L) = ptr6;
                    *(long long*)(param0 + 48L) = 0L;
                }
                --gvar_4420D8;
                if(!gvar_4420D8) {
                    sub_4022EF(&gvar_4420A0);
                    return;
                }
            }
            jump *(ptr4 + 3);
        }
        else {
            ptr0 = *(unsigned long long*)(v12 - 16L);
            param0 -= (long long)ptr0;
            v14 = (unsigned long long)((unsigned char)v14 & 0x3) | ((unsigned long long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v14) {
                ptr5 = (long long*)((long long)ptr5 + (long long)ptr0);
                if(gvar_4420C0 == param0) {
                    long long v33 = *(long long*)(ptr6 + 1);
                    if(((unsigned int)v33 & 0x3) == 3) {
                        gvar_4420A8 = ptr5;
                        *(long long*)(ptr6 + 1) = v33 & 0xfffffffffffffffeL;
                        *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr5 | 0x1L);
                        *ptr6 = ptr5;
                        jump *(ptr4 + 3);
                    }
                    else {
                        goto loc_403C97;
                    }
                }
                else {
                    v3 = *(long long*)(param0 + 24L);
                }
                if((unsigned long long)ptr0 <= 0xffL) {
                    long long v34 = *(long long*)(param0 + 16L);
                    if(v3 == v34) {
                        gvar_4420A0 = (unsigned int)((__rol__(-2, (long long)((long long)ptr0 >>> 3) & 0x1fL)) & gvar_4420A0);
                    }
                    else {
                        *(long long*)(v34 + 24L) = v3;
                        *(long long*)(v3 + 16L) = v34;
                    }
                }
                else {
                    long long v35 = *(long long*)(param0 + 48L);
                    if(v3 != param0) {
                        v14 = *(long long*)(param0 + 16L);
                        *(long long*)(v14 + 24L) = v3;
                        *(long long*)(v3 + 16L) = v14;
                    }
                    else {
                        v3 = *(long long*)(param0 + 40L);
                        param5 = param0 + 40L;
                        if(!v3) {
                            v3 = *(long long*)(param0 + 32L);
                            if(v3) {
                                param5 = param0 + 32L;
                                goto loc_403BC0;
                            }
                        }
                        else {
                        loc_403BC0:
                            v14 = v3;
                        loc_403BC3:
                            do {
                                v2 = param5;
                                v3 = v14;
                                param5 = v14 + 40L;
                                v14 = *(long long*)(v14 + 40L);
                                if(v14) {
                                    goto loc_403BC3;
                                }
                                else {
                                    v14 = *(long long*)(v3 + 32L);
                                    param5 = v3 + 32L;
                                }
                            }
                            while(v14);
                            *(long long*)v2 = 0L;
                        }
                    }
                    if(v35) {
                        param5 = (long long)*(int*)(param0 + 56L);
                        if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_4422F8) == param0) {
                            *(long long*)((long long)(long long*)((param5 + 74L) * 8L) + (long long)&gvar_4420A8) = v3;
                            if(v3) {
                                goto loc_403C15;
                            }
                            else {
                                gvar_4420A4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4420A4);
                            }
                        }
                        else {
                            if(*(long long*)(v35 + 32L) == param0) {
                                *(long long*)(v35 + 32L) = v3;
                            }
                            else {
                                *(long long*)(v35 + 40L) = v3;
                            }
                            if(v3) {
                            loc_403C15:
                                long long v36 = *(long long*)(param0 + 32L);
                                *(long long*)(v3 + 48L) = v35;
                                if(v36) {
                                    *(long long*)(v3 + 32L) = v36;
                                    *(long long*)(v36 + 48L) = v3;
                                }
                                v14 = *(long long*)(param0 + 40L);
                                if(v14) {
                                    *(long long*)(v3 + 40L) = v14;
                                    *(long long*)(v14 + 48L) = v3;
                                }
                            }
                        }
                    }
                }
                goto loc_403C97;
            }
            else {
                v1 = (long long)((long long*)((long long)ptr5 + (long long)ptr0) + 4);
                ptr4 = &v6;
                v0 = sub_40452C(param0, v1, v12, v14);
            }
        }
        if(!(unsigned int)v0) {
            gvar_4423F8 -= v1;
        }
        jump *(ptr4 + 3);
    }
}

long long sub_403FED(unsigned long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result;
    long long v0 = 0L;
    long long v1 = param3;
    if(param0) {
        v0 = param1 * param0;
        if(((param1 | param0) & 0xffffffffffff0000L)) {
            param2 = (unsigned long long)v0 % param0;
            v0 = (unsigned long long)v0 / param0 == param1 ? v0: -1L;
        }
    }
    long long v2 = sub_402B64(v0, param1, param2, param3, param4, param5);
    if(v2 && (*(char*)(v2 - 8L) & 0x3)) {
        sub_4050B2(v2, 0L, (unsigned long long)v0, param3);
    }
    return result;
}

long long* sub_404049(int* param0, long long* param1, long long* param2, long long param3, long long* param4) {
    unsigned long long* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long* result = param1;
    long long v5 = v4;
    long long v6 = v3;
    long long* ptr1 = param4;
    long long v7 = *(param1 + 1);
    if(((unsigned char)v7 & 0x3)) {
        long long* ptr2 = (long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) + (long long)result);
        if((long long*)((long long)param2 + (long long)result) <= ptr2) {
            v2 = (long long)((unsigned long long)(v7 & 0xfffffffffffffff8L) - (long long)param2);
            if((unsigned long long)v2 > 31L) {
                v1 = (long long)((long long)param2 + (long long)result);
                *(unsigned long long*)(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)v7 & 0x1) | (long long)param2) | 0x2L);
                *(long long*)((long long)((long long)param2 + (long long)result) + 8L) = v2 | 0x3L;
                *(ptr2 + 1) = *(ptr2 + 1) | 0x1L;
                sub_4026E8(param0, v1, v2, param3);
            }
            return result;
        }
        else if(*(long long*)&param0[10] == ptr2) {
            long long* ptr3 = (long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) + *(long long*)&param0[4]);
            if(param2 >= ptr3) {
            loc_40407F:
                result = NULL;
            }
            else {
                ptr2 = (long long*)((long long)ptr3 - (long long)param2);
                long long* ptr4 = (long long*)((long long)param2 + (long long)result);
                *(unsigned long long*)(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)v7 & 0x1) | (long long)param2) | 0x2L);
                *(unsigned long long*)(ptr4 + 1) = (long long*)((long long)ptr2 | 0x1L);
                *(long long*)&param0[10] = ptr4;
                *(long long*)&param0[4] = ptr2;
            }
            return result;
        }
        else if(*(long long*)&param0[8] != ptr2) {
            unsigned long long v8 = *(unsigned long long*)(ptr2 + 1);
            if(!((unsigned char)v8 & 0x2)) {
                v8 &= -8L;
                param4 = (long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) + v8);
                if(param2 <= param4) {
                    long long v9 = *(ptr2 + 3);
                    long long v10 = (long long)((long long)param4 - (long long)param2);
                    param3 = (long long)(v8 >>> 3);
                    if(v8 <= 248L) {
                        long long v11 = *(ptr2 + 2);
                        if(v9 == v11) {
                            param0[0] &= __rol__(-2, param3 & 0x1fL);
                        }
                        else {
                            *(long long*)(v11 + 24L) = v9;
                            *(long long*)(v9 + 16L) = v11;
                        }
                    }
                    else {
                        v8 = *(unsigned long long*)(ptr2 + 6);
                        if(v9 != ptr2) {
                            long long v12 = *(ptr2 + 2);
                            *(long long*)(v12 + 24L) = v9;
                            *(long long*)(v9 + 16L) = v12;
                        }
                        else {
                            v9 = *(ptr2 + 5);
                            param3 = (long long)(ptr2 + 5);
                            if(!v9) {
                                v9 = *(ptr2 + 4);
                                if(v9) {
                                    param3 = (long long)(ptr2 + 4);
                                    goto loc_4042DF;
                                }
                            }
                            else {
                            loc_4042DF:
                                long long v13 = v9;
                            loc_4042E2:
                                do {
                                    v0 = param3;
                                    v9 = v13;
                                    param3 = v13 + 40L;
                                    v13 = *(long long*)(v13 + 40L);
                                    if(v13) {
                                        goto loc_4042E2;
                                    }
                                    else {
                                        v13 = *(long long*)(v9 + 32L);
                                        param3 = v9 + 32L;
                                    }
                                }
                                while(v13);
                                *(long long*)v0 = 0L;
                            }
                        }
                        if(v8) {
                            param3 = (long long)*(int*)(ptr2 + 7);
                            long long* ptr5 = (long long*)((long long)*(int*)(ptr2 + 7) * 8L + (long long)param0);
                            if(*(ptr5 + 75) == ptr2) {
                                *(ptr5 + 75) = v9;
                                if(v9) {
                                    goto loc_40432E;
                                }
                                else {
                                    param0[1] &= __rol__(-2, param3 & 0x1fL);
                                }
                            }
                            else {
                                if(*(long long*)(v8 + 32L) == ptr2) {
                                    *(long long*)(v8 + 32L) = v9;
                                }
                                else {
                                    *(long long*)(v8 + 40L) = v9;
                                }
                                if(v9) {
                                loc_40432E:
                                    long long v14 = *(ptr2 + 4);
                                    *(unsigned long long*)(v9 + 48L) = v8;
                                    if(v14) {
                                        *(long long*)(v9 + 32L) = v14;
                                        *(long long*)(v14 + 48L) = v9;
                                    }
                                    long long v15 = *(ptr2 + 5);
                                    if(v15) {
                                        *(long long*)(v9 + 40L) = v15;
                                        *(long long*)(v15 + 48L) = v9;
                                    }
                                }
                            }
                        }
                    }
                    long long* ptr6 = (long long*)((long long)param4 + (long long)result);
                    if((unsigned long long)v10 <= 31L) {
                        *(unsigned long long*)(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)v7 & 0x1) | (long long)param4) | 0x2L);
                        *(ptr6 + 1) = *(ptr6 + 1) | 0x1L;
                    }
                    else {
                        v1 = (long long)((long long)param2 + (long long)result);
                        *(unsigned long long*)(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)v7 & 0x1) | (long long)param2) | 0x2L);
                        *(unsigned long long*)(v1 + 8L) = (long long*)(v10 | 0x3L);
                        *(ptr6 + 1) = *(ptr6 + 1) | 0x1L;
                        v2 = v10;
                        sub_4026E8(param0, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_40407F;
        }
        else {
            param3 = (long long)((unsigned long long)(v7 & 0xfffffffffffffff8L) + *(long long*)&param0[2]);
            if((unsigned long long)param3 < (unsigned long long)param2) {
                goto loc_40407F;
            }
            else {
                v7 = (unsigned long long)((unsigned int)v7 & 0x1);
                ptr0 = (unsigned long long*)(param3 + (long long)result);
                param4 = (long long*)(param3 - (long long)param2);
            }
        }
        if((unsigned long long)param4 > 31L) {
            param3 = (long long)((long long)param2 + (long long)result);
            *(unsigned long long*)(result + 1) = (long long*)((long long)(long long*)((long long)param2 | v7) | 0x2L);
            *(unsigned long long*)(param3 + 8L) = (long long*)((long long)param4 | 0x1L);
            *ptr0 = param4;
            *(long long*)(ptr0 + 1) = *(long long*)(ptr0 + 1) & 0xfffffffffffffffeL;
            *(long long*)&param0[2] = param4;
            *(long long*)&param0[8] = param3;
        }
        else {
            *(result + 1) = param3 | v7 | 0x2L;
            *(long long*)(ptr0 + 1) = *(long long*)(ptr0 + 1) | 0x1L;
            *(long long*)&param0[2] = 0L;
            *(long long*)&param0[8] = 0L;
            return result;
        }
    }
    else if((unsigned long long)param2 <= 0xffL) {
        goto loc_40407F;
    }
    else {
        unsigned long long v16 = gvar_442470;
        if((unsigned long long)(param2 + 1) > (unsigned long long)(v7 & 0xfffffffffffffff8L) || (unsigned long long)(long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) - (long long)param2) > v16 * 2L) {
            long long v17 = *result;
            long long* ptr7 = (long long*)((long long)(long long*)((char*)(v16 + (long long)param2) + 62L) & (0L - v16));
            long long v18 = (unsigned long long)(v7 & 0xfffffffffffffff8L) + v17 + 32L;
            long long v19 = sub_404ABB();
            if(v19 == -1L) {
                goto loc_40407F;
            }
            else {
                result = (long long*)(v19 + v17);
                long long* ptr8 = (long long*)((long long)ptr7 - v17);
                char v20 = *(long long*)&param0[6] > (unsigned long long)v19;
                *(result + 1) = (long long)(ptr8 - 4);
                *((long long*)((long long)ptr8 + (long long)result) - 3) = 11L;
                *((long long*)((long long)ptr8 + (long long)result) - 2) = 0L;
                if(v20) {
                    *(long long*)&param0[6] = v19;
                }
                long long* ptr9 = (long long*)((long long)(long long*)(*(long long*)&param0[214] + (long long)ptr7) - v18);
                char v21 = *(long long*)&param0[216] == ptr9;
                char v22 = *(long long*)&param0[216] > (unsigned long long)ptr9;
                *(long long*)&param0[214] = ptr9;
                if(!v22 && !v21) {
                    *(long long*)&param0[216] = ptr9;
                }
            }
        }
    }
    return result;
}

long long sub_4043D8(long long param0, unsigned long long* param1, long long param2, long long param3, long long param4, long long param5) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    if(!param0) {
        return sub_402B64((long long)param1, v1, param2, param3, v2, param5);
    }
    if((unsigned long long)param1 > 18446744073709551487L) {
        result = sub_4018E7();
    }
    else if(!param1) {
        sub_403AE8(param0, NULL, param2, param3, param4, param5);
    }
    else {
        long long* ptr0 = sub_404049((int*)&gvar_4420A0, (long long*)(param0 - 16L), (unsigned long long)param1 <= 14L ? (long long*)0x20: (long long*)((long long)(long long*)((char*)param1 + 31L) & 0xfffffffffffffff0L), 1L, (long long*)param4);
        if(!ptr0) {
            v0 = sub_402B64((long long)param1, (long long)param1, param2, param3, param4, param5);
            if(v0) {
                long long v3 = *(long long*)(param0 - 8L);
                sub_404F70(param3, (unsigned long long)((v3 & 0xfffffffffffffff8L) - 16L) <= (unsigned long long)param1 ? (unsigned long long)((v3 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403AE8(param0, (unsigned long long*)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

void sub_404491() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404518(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1 = v0;
    long long v2 = v0;
    return sub_40481D(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40452C(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = v0;
    return sub_404AC1(param0, param1, param2, param3);
}

long long sub_404540(long long param0, long long param1, long long param2) {
    long long result;
    int* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    int* ptr1 = gvar_4424A0;
    if(!ptr1) {
        gvar_4424A0 = 0x4424a8L;
        ptr1 = (int*)0x4424A8;
    }
    if(*ptr1 == -1) {
        sub_402296();
        if(ptr0) {
            *(unsigned long long*)(ptr0 + 2) = ptr1;
            gvar_4424A0 = ptr0;
            ptr1 = ptr0;
            goto loc_4045A7;
        }
        else {
            result = sub_4018E7();
        }
    }
    else {
    loc_4045A7:
        int v6 = *ptr1;
        unsigned int v7 = (unsigned int)~v6;
        if(v7 != 0) {
            unsigned int i;
            for(i = 31; !(v7 >>> i); --i) {
            }
            v7 = i;
        }
        *ptr1 = (~(1 << (v7 % 32)) & v6) | (1 << (v7 % 32));
        long long* ptr2 = (long long*)((unsigned long long)v7 * 24L + (long long)ptr1);
        result = 0L;
        *(ptr2 + 2) = param0;
        *(ptr2 + 3) = param1;
        *(ptr2 + 4) = param2;
    }
    return result;
}

long long sub_4045D5(long long param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1 = v0;
    long long result = param2;
loc_4045E7:
    for(int* i = gvar_4424A0; i; i = gvar_4424A0) {
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
                        goto loc_4045E7;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                if(ptr0) {
                    sub_40229C();
                }
                gvar_4424A0 = ptr0;
                goto loc_4045E7;
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

char sub_40466A(long long* param0, long long param1, long long param2, long long param3) {
    char result;
    unsigned long long v0;
    unsigned long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = 0L;
    long long v8 = v2;
    long long v9 = v4;
    long long v10 = v5;
    long long v11 = v6;
    sub_4047B0(param0[0], param1, param2, param3);
    long long v12 = sub_4047B0(param0[0], param1, param2, param3);
    if((unsigned char)v12) {
        v7 = param0[0];
    }
    unsigned long long v13 = *(unsigned long long*)param1;
    unsigned long long v14 = param0[0] != 0L ? (unsigned long long)((v13 >>> 1) + v13): 31L / (unsigned long long)param2 < 4L ? 4L: 31L / (unsigned long long)param2;
    if(v13) {
        v1 = (unsigned long long)(param2 * v13);
        if(((param2 | v13) & 0xffffffffffff0000L) && v1 / v13 != param2) {
            goto loc_40479A;
        }
        else {
            goto loc_404700;
        }
    }
    else {
        v1 = 0L;
    loc_404700:
        long long v15 = param3 + v14 + 1L;
        if(v15) {
            v0 = (unsigned long long)(v15 * param2);
            if(!((v15 | param2) & 0xffffffffffff0000L) || v0 / (unsigned long long)v15 == param2) {
                goto loc_404739;
            }
            else {
            loc_40479A:
                sub_401907();
            }
        }
        else {
            v0 = 0L;
        loc_404739:
            unsigned long long v16 = v1;
            long long v17 = v15;
            sub_4022A2();
            if(v3) {
                long long v18 = v15;
                unsigned long long v19 = v1;
                if(!v7 && param0[0]) {
                    sub_404F70(v15, v1);
                }
                sub_4050B2(v3 + v1, 0L, v0 - v1, v15);
                *(long long*)param1 = param3;
                param0[0] = v3;
                return 1;
            }
            sub_4018E7();
        }
        result = 0;
    }
    return result;
}

long long sub_4047B0(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    if((unsigned long long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long long v1 = v0;
        long long v2 = param3;
        long long v3 = sub_404C04((int)(param0 >>> 16L), &gvar_4427C8, gvar_4427C0);
        if(v3) {
            result = (unsigned int)(param0 >>> 16L) == *(int*)(v3 * 8L + (long long)&gvar_4427C0) ? 1L: (unsigned int)(param0 >>> 16L) == *(unsigned int*)((v3 - 1L) * 8L + (long long)&gvar_4427CC) ? 1L: 0L;
        }
        return result;
    }
    return 0L;
}

long long sub_40481D(long long param0) {
    HANDLE hFileMappingObject;
    long long v0;
    long long result;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    int v9 = (unsigned int)gvar_440728 | gvar_440730 | 0x2;
    long long v10 = v2;
    long long v11 = 0L;
    long long v12 = v1;
    long long v13 = v5;
    long long v14 = v3;
    long long v15 = v6;
    unsigned int v16 = gvar_440668;
    int v17 = 3;
    long long v18 = 0L;
    long long v19 = gvar_4427C0;
    if(!(v9 & 0x10)) {
        long long v20 = v19;
        v11 = 0x200000000000L;
        if(v19) {
            int v21 = *(int*)((char*)(v19 * 8L + (long long)&gvar_4427C0) + 4L);
            do {
                --v20;
                long long v22 = (long long)(*(unsigned int*)(v20 * 8L + (long long)&gvar_4427CC) + 1);
                if((unsigned long long)((((param0 + 0xffffL) & 0xffffffffffff0000L) >>> 16) + v22) <= 0x30000000L && *(int*)(v20 * 8L + (long long)&gvar_4427CC) > 0x1ffffffe) {
                    v11 = v22 * 0x10000L;
                    goto loc_4048F9;
                }
            }
            while(v20);
            v11 = (long long)(v21 + 1) * 0x10000L;
        }
    loc_4048F9:
        v11 &= 0xffffffffffff0000L;
    }
    if(v19 == 300L) {
        result = sub_4018E7();
    }
    else {
        if((v9 & 0x10)) {
            sub_40452C(v11, (param0 + 0xffffL) & 0xffffffffffff0000L, v19, (long long)(v9 & 0x10));
        }
        else {
            sub_404C04((unsigned int)((((param0 + 0xffffL) & 0xffffffffffff0000L) + 0xffffL) >>> 16) + (unsigned int)(v11 >> 16) - 1, &gvar_4427C8, v19);
        }
        if(!(v16 & 0x4)) {
            v0 = sub_404C24((long long)(v9 | 0x10), 3L, -1L, 0L);
            goto loc_4049FC;
        }
        else {
            int v23 = (unsigned int)((param0 + 0xffffL) & 0xffffffffffff0000L);
            long long v24 = sub_40524A(3L, (unsigned long long)(v9 | 0x10));
            HANDLE v25 = sub_401E9A((HANDLE)0xFFFFFFFFFFFFFFFF, (LPSECURITY_ATTRIBUTES)&gvar_405320, v24 & 0xffffffffL, (((param0 + 0xffffL) & 0xffffffffffff0000L) >>> 32) & 0xffffffffL, (long long)v23, NULL, -1L, v7);
            hFileMappingObject = v25;
            if(v25) {
                long long v26 = sub_404C31((long long)v17, (long long)(v9 | 0x10));
                LPVOID v27 = sub_401EDF(hFileMappingObject, v26 & 0xffffffffL, v18 >> 32, v18 & 0xffffffffL, (SIZE_T)((param0 + 0xffffL) & 0xffffffffffff0000L), (LPVOID)v11, -1L, v26);
                result = (long long)v27;
                if(v27) {
                    goto loc_404A07;
                }
                else {
                    sub_401E81(hFileMappingObject);
                }
            }
            v0 = sub_4052D6();
        loc_4049FC:
            result = v0;
            hFileMappingObject = (HANDLE)0xFFFFFFFFFFFFFFFF;
        }
    loc_404A07:
        if(result != -1L) {
            long long v28 = sub_404C04((int)(result >>> 16L), &gvar_4427C8, gvar_4427C0);
            unsigned long long v29 = gvar_4427C0;
            if((unsigned long long)v28 < v29) {
                sub_405092((char*)((v28 + 2L) * 8L + &gvar_4427C0), (char*)((v28 + 2L) * 8L + 4466616L), (v29 - v28) * 8L, (v28 + 2L) * 8L);
                sub_405092((char*)(v8 + 0x443120L), (char*)(v8 + 0x443118L), (gvar_4427C0 - v4) * 8L, v8);
            }
            ++gvar_4427C0;
            *(unsigned int*)(v28 * 8L + (long long)&gvar_4427C8) = (unsigned int)(result >>> 16L);
            *(HANDLE*)(v28 * 8L + (long long)&gvar_443128) = hFileMappingObject;
            *(unsigned int*)(v28 * 8L + (long long)&gvar_4427CC) = (unsigned int)((unsigned int)((((param0 + 0xffffL) & 0xffffffffffff0000L) + 0xffffL) >>> 16) + (unsigned int)(result >> 16) - 1);
        }
    }
    return result;
}

long long sub_404ABB() {
    return sub_4018F7();
}

long long sub_404AC1(LPCVOID param0, long long param1, long long param2, long long param3) {
    int v0;
    long long v1;
    long long v2;
    if((unsigned long long)(long long*)((long long)param0 - 1L) <= 18446744073709551613L && param1) {
        int v3 = (unsigned int)(long long*)((long long)param0 >>> 16L);
        v0 = 0;
        long long v4 = sub_404C04((unsigned int)((param1 + 0xffffL) >>> 16) + (unsigned int)(long long*)((long long)param0 >> 16) - 1, &gvar_4427C8, gvar_4427C0);
        long long v5 = v4;
        while(v4) {
            long long v6 = v4 - 1L;
            unsigned int v7 = *(unsigned int*)(v6 * 8L + (long long)&gvar_4427C8);
            if(*(int*)(v6 * 8L + (long long)&gvar_4427CC) < (unsigned int)(long long*)((long long)param0 >>> 16L)) {
                break;
            }
            else {
                if(!(*(char*)&gvar_440668 & 0x4)) {
                    long long v8 = sub_404DD0();
                    v0 |= (unsigned int)v8;
                }
                else {
                    BOOL v9 = /*BAD_CALL!*/ sub_401EF5((LPCVOID)((long long)v7 * 0x10000L));
                    BOOL v10 = sub_401E81(*(HANDLE*)(v6 * 8L + (long long)&gvar_443128));
                    v0 = (unsigned int)v10 ? (unsigned int)v9 ? v0: -1: -1;
                }
                v4 = v6;
            }
        }
        if((unsigned long long)v4 < (unsigned long long)v5) {
            unsigned long long v11 = gvar_4427C0;
            if(v11 > (unsigned long long)v5) {
                sub_405092((char*)((v4 + 1L) * 8L + &gvar_4427C0), (char*)((v5 + 1L) * 8L + &gvar_4427C0), (v11 - v5) * 8L, (v4 + 1L) * 8L);
                sub_405092((char*)(v1 + 0x443120L), (char*)(v2 + 0x443120L), (gvar_4427C0 - v5) * 8L, v1);
            }
            gvar_4427C0 = (unsigned long long)(gvar_4427C0 + v4 - v5);
        }
    }
    else {
        v0 = 0;
    }
    return (unsigned long long)v0;
}

long long sub_404C04(int param0, long long param1, long long param2) {
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

long long sub_404C24(long long param0, long long param1, long long param2, long long param3) {
    return sub_404DC0();
}

long long sub_404C31(long long param0, int param1) {
    return (unsigned long long)((((unsigned int)param0 * 8) & 0x20) | ((param1 * 32) & 0x80000000) | ((param1 >> 1) & 0x1) | ((param1 >> 2) & 0x20000000) | ((unsigned int)((unsigned long long)0 | ((unsigned long long)(param0 & 0x3fffffffffffffffL) << 2)) & 0x4) | ((unsigned int)param0 & 0x2));
}

long long sub_404C6C(int param0, int param1) {
    return !param0 ? 0L: *(int*)((long long)param0 * 24L + gvar_443AB0 + 16L) == param1 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404C87(long long param0, long long* param1, long long param2) {
    long long result;
    long long* ptr0;
    long long v0;
    long long v1;
    if((unsigned int)param0 == -1) {
        long long v2 = sub_4018D7();
        result = (long long)(unsigned int)v2;
    }
    else {
        long long v3 = sub_404C6C((long long)(unsigned int)param0 & 0xffffffffL, 5L);
        if((unsigned char)v3) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_440668 & 0x4)) {
            result = sub_404DE0();
        }
        else {
            long long v4 = sub_404C6C((long long)(unsigned int)param0 & 0xffffffffL, 2L);
            if((unsigned char)v4) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long long v5 = sub_404C6C((long long)(unsigned int)param0 & 0xffffffffL, 1L);
                if(!(unsigned char)v5) {
                    long long v6 = sub_404C6C((long long)(unsigned int)param0 & 0xffffffffL, 4L);
                    if((unsigned char)v6) {
                        long long v7 = (long long)(unsigned int)param0 * 24L + gvar_443AB0;
                        long long v8 = v0;
                        return sub_401DBA(v7, (long long)&ptr0, 1L, -1L, v1);
                    }
                    result = sub_4018C7();
                }
                else {
                    long long v7 = (long long)(unsigned int)param0 * 24L + gvar_443AB0;
                    long long v8 = v0;
                    result = sub_401DBA(v7, (long long)&ptr0, 1L, -1L, v1);
                }
            }
        }
    }
    return result;
}

long long sub_404DB0() {
    jump gvar_440670;
}

long long sub_404DC0() {
    jump gvar_440670;
}

long long sub_404DD0() {
    jump gvar_440670;
}

long long sub_404DE0() {
    jump gvar_440670;
}

long long sub_404E4D(long long param0, int* param1, long long param2, long long param3) {
    return sub_404E8F(param0, param1, param2, param3);
}

long long sub_404E5C(int param0, long long param1, long long param2, long long param3) {
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

long long sub_404E8F(long long param0, int* param1, long long param2, long long param3) {
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

void sub_404F70(long long param0, unsigned long long param1) {
    long long v0 = param0;
    jump *(long long*)((param1 < 32L ? param1: 32L) * 8L + 4457544L);
}

void sub_405092(char* param0, char* param1, long long param2, long long param3) {
    long long v0 = param2;
    if(param1 <= param0) {
        param0 = (char*)((char*)(v0 + (long long)param0) - 1L);
        param1 = (char*)((char*)(v0 + (long long)param1) - 1L);
    }
    while(v0 != 0L) {
        *param0 = *param1;
        ++param1;
        ++param0;
        --v0;
    }
}

void sub_4050B2(long long param0, long long param1, unsigned long long param2, long long param3) {
    long long v0 = param3;
    jump *(long long*)((param2 < 32L ? param2: 32L) * 8L + 4457808L);
}

long long sub_405211(char param0) {
    gvar_443C74 |= 4;
    if((*(char*)&gvar_440668 & 0x4)) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x405242 = lidt(*(__SyntheticTypeUnknownP80)0x405242);
    hlt();
}

long long sub_40524A(int param0, unsigned long long param1) {
    long long v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64L;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_440728;
            v0 = ((long long)v1 & param1) == param1 ? 64L: 128L;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4L;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long long v2 = gvar_440728;
            v0 = ((((long long)(unsigned int)param1 & v2) == v2 ? 0L: 1L) * 4L + 4L) & 0xffffffffL;
        }
    }
    else {
        v0 = (param0 & 0x5) == 5 ? 32L: (unsigned char)param0 & 0x4 ? 16L: (unsigned long long)((param0 & 0x1) + 1);
    }
    return (unsigned long long)(((v1 | param0) & 0xdd000000) | (unsigned int)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4052D6() {
    if((*(char*)&gvar_440668 & 0x4)) {
        long long v0 = sub_401EC9();
        gvar_443C70 = (unsigned int)v0;
        return -1L;
    }
    return sub_4018F7();
}
