
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long* ptr0;
    long long v4;
    unsigned int v5;
    long long v6;
    long long v7;
    unsigned long long* ptr1;
    long long* ptr2;
    long long* ptr3;
    long long v8;
    while(1) {
        unsigned long long* ptr4 = ptr4 - 1;
        *ptr4 = ptr1;
        unsigned long long* ptr5 = ptr4;
        --ptr4;
        *ptr4 = ptr2;
        --ptr4;
        *ptr4 = ptr3;
        --ptr4;
        *ptr4 = v6;
        --ptr4;
        *ptr4 = v7;
        --ptr4;
        *ptr4 = v8;
        *(long long*)(ptr5 - 7176) = 0L;
        *(long long*)(ptr5 - 7175) = 0L;
        ptr4 -= 7178;
        *ptr4 = &loc_4013F4;
        BOOL v9 = /*BAD_CALL!*/ SetDefaultDllDirectories(0x800);
        ptr4 += 4;
        if(!(unsigned int)v9) {
            ptr4 -= 5;
            *ptr4 = &loc_40140D;
            HANDLE hFile = /*BAD_CALL!*/ GetStdHandle(0xfffffff4);
            ptr4 += 2;
            *ptr4 = 0L;
            ptr4 -= 5;
            *ptr4 = &loc_401434;
            /*BAD_CALL!*/ WriteFile(hFile, "nodll\n", 6, (LPDWORD)(ptr5 - 0x1006), *(LPOVERLAPPED*)(ptr4 + 5));
            ++ptr4;
            *ptr4 = 0x401441L;
            /*NO_RETURN*/ ExitProcess(1);
        }
        ptr4 -= 5;
        *ptr4 = 4L;
        gvar_403000 = (unsigned int)*ptr4;
        *ptr4 = &loc_401458;
        LPWSTR v10 = /*BAD_CALL!*/ GetCommandLineW();
        --ptr4;
        *ptr4 = &loc_401461;
        LPWCH penv = /*BAD_CALL!*/ GetEnvironmentStringsW();
        ptr4 += 3;
        *ptr4 = &loc_401489;
        long long v11 = /*BAD_CALL!*/ sub_40165C((long long)v10, (long long)((char*)ptr5 - 49199L), 0x3fffL, (long long)(ptr5 - 6662), 0x200L);
        long long v12 = 0L;
        while(1) {
            v2 = *(long long*)(ptr5 - 6662) + v12;
            param1 = (unsigned long long)*(char*)v2 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!(unsigned char)param1) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v2 = 47;
                }
                ++v12;
            }
        }
        long long v13 = (unsigned long long)penv[0];
        if(penv[0] <= 55295) {
            *(int*)((char*)ptr5 - 0xe044L) = (unsigned int)v13;
            v1 = 1L;
        }
        else {
            --ptr4;
            *ptr4 = &loc_4014D2;
            v1 = /*BAD_CALL!*/ sub_4019FA((long long)penv, (int*)((char*)ptr5 - 0xe044L), param1, v2);
        }
        long long v14 = (long long)(ptr5 - 0x1006);
        unsigned long long v15 = 0L;
        long long v16 = (v1 & 0xffffffffL) * 2L + (long long)penv;
        long long v17 = v14;
        while(*(int*)((char*)ptr5 - 0xe044L)) {
            ++v15;
            if(v15 <= 0x1ffL) {
                *((long long*)(v15 * 8L + (long long)ptr5) - 7175) = (unsigned long long)(long long*)((char*)ptr5 - 50L) > (unsigned long long)v14 ? v14: 0L;
            }
            do {
                v5 = *(unsigned int*)((char*)ptr5 - 0xe044L);
                long long v18 = (long long)v5;
                if(v5 > 127) {
                    --ptr4;
                    *ptr4 = &loc_40153F;
                    v18 = /*BAD_CALL!*/ sub_401A09((long long)v5, (long long)((char*)ptr5 - 0xe044L), v16, v14);
                }
                while((unsigned long long)(long long*)((char*)ptr5 - 50L) > (unsigned long long)v14) {
                    ++v14;
                    *(char*)(v14 - 1L) = (unsigned char)v18;
                    v18 >>>= 8;
                    if(!v18) {
                        break;
                    }
                }
                long long v19 = (unsigned long long)*(short*)v16;
                if(*(unsigned short*)v16 <= 55295) {
                    *(int*)((char*)ptr5 - 0xe044L) = (unsigned int)v19;
                    v0 = 1L;
                }
                else {
                    --ptr4;
                    *ptr4 = &loc_40156E;
                    v0 = /*BAD_CALL!*/ sub_4019FA(v16, (int*)(long long)((char*)ptr5 - 0xe044L), v16, v14);
                }
                v16 += (v0 & 0xffffffffL) * 2L;
            }
            while(v5);
            long long v20 = v14 - v17;
            *(char*)((long long*)(((unsigned long long)v20 <= 32765L ? v20: 32765L) + (long long)ptr5) - 0x1006) = 0;
        }
        if((unsigned long long)(long long*)((char*)ptr5 - 50L) > (unsigned long long)v14) {
            *(char*)v14 = 0;
            ++v14;
        }
        long long v21 = v14 - v17;
        ptr3 = (long long*)(ptr5 - 7174);
        ptr2 = (long long*)(ptr5 - 7176);
        *(char*)((long long*)(((unsigned long long)v21 <= 0x7ffeL ? v21: 0x7ffeL) + (long long)ptr5) - 0x1006) = 0;
        *((long long*)((v15 <= 0x1ffL ? v15: 0x1ffL) * 8L + (long long)ptr5) - 7174) = 0L;
        v6 = (long long)(ptr5 - 6662);
        ptr4 -= 5;
        *ptr4 = &loc_4015FC;
        /*BAD_CALL!*/ FreeEnvironmentStringsW(penv);
        v8 = &MZHeader;
        ptr4 = (unsigned long long*)((long long*)((long long)ptr4 & 0xfffffffffffffff0L) - 1);
        *ptr4 = &loc_401363;
        /*BAD_CALL!*/ sub_401297();
        gvar_40335C |= 1;
        long long* ptr6 = (long long*)&gvar_402008;
        long long v22 = &gvar_402008;
        while(ptr6 != v22) {
            --ptr4;
            *ptr4 = ptr6;
            --ptr4;
            *ptr4 = v22;
            --ptr4;
            *ptr4 = &loc_40137D;
            /*BAD_CALL!*/ *ptr6(v22);
            v22 = *ptr4;
            ++ptr4;
            long long v23 = *ptr4;
            ++ptr4;
            ptr6 = (long long*)(v23 + 8L);
        }
        --ptr4;
        *ptr4 = &loc_401394;
        long long v24 = /*BAD_CALL!*/ sub_40134D();
        --ptr4;
        *ptr4 = &loc_40139B;
        --ptr4;
        *ptr4 = 0L;
        ptr1 = ptr4;
        --ptr4;
        *ptr4 = v11 & 0xffffffffL;
        v7 = v24 & 0xffffffffL;
        --ptr4;
        *ptr4 = v4;
        --ptr4;
        *ptr4 = &loc_4013AC;
        /*BAD_CALL!*/ sub_401907(0L, v6, v3, ptr0);
        --ptr4;
        *ptr4 = &sub_4013B4;
        /*NO_RETURN*/ sub_401AA1(v7 & 0xffffffffL);
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

long long* sub_401297() {
    char* ptr0;
    unsigned int v0;
    long long* ptr1;
    long long* ptr2;
    long long v1 = &gvar_401EE8;
    if((*(char*)&gvar_403000 & 0x8)) {
        ptr1 = (long long*)0x45;
        v0 = 8;
        ptr0 = (char*)&gvar_401EF8;
    }
    else if((*(char*)&gvar_403000 & 0x20)) {
        ptr1 = (long long*)0x30;
        v0 = 32;
        ptr0 = (char*)&gvar_401EE9;
    }
    else if((*(char*)&gvar_403000 & 0x4)) {
        ptr1 = (long long*)0x22;
        v0 = 4;
        ptr0 = (char*)&gvar_401EF5;
    }
    else if(*ptr2) {
        ptr1 = NULL;
        v0 = 1;
        ptr0 = (char*)&gvar_401EED;
    }
    else {
        ptr1 = (long long*)0x2A;
        v0 = 16;
        ptr0 = (char*)&gvar_401EF1;
    }
    *(long long*)&gvar_403000 = v0;
    long long* result = (long long*)((char*)ptr1 + &gvar_40199D);
    gvar_403008 = (long long*)((char*)ptr1 + &gvar_40199D);
    ptr1 = (long long*)0x403010;
    for(unsigned long long* i = (unsigned long long*)&gvar_403018; (unsigned long long)i < 0x403030L; ++i) {
        long long v2 = 0L;
        long long* ptr3 = NULL;
        do {
            result = (unsigned long long)*ptr0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)result >>> 8L) & 0xffffffffffffffL) << 8);
            ++ptr0;
            long long v3 = (unsigned long long)((unsigned int)result & 0x7f) << (v2 & 0x3fL);
            v2 = (unsigned long long)((unsigned int)v2 + 7);
            ptr3 = (long long*)((long long)ptr3 | v3);
        }
        while((unsigned char)result < 0);
        if(((unsigned char)result & 0x40)) {
            ptr3 = (long long*)((-1L << (v2 & 0x3fL)) | (long long)ptr3);
        }
        result = *i ? *i: ptr3;
        *i = *i ? *i: ptr3;
    }
    return result;
}

long long sub_40134D() {
    return 42L;
}

long long sub_4013B4() {
    gvar_403358 = gvar_403018;
    return -1L;
}

long long sub_401601(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)v1;
    if(*(unsigned short*)v1 <= 55295) {
        *(int*)(param0 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_4019FA(v1, (int*)(param0 + 24L), param0, param3);
    }
    *(long long*)param0 = (v0 & 0xffffffffL) * 2L + *(long long*)param0;
    return (v0 & 0xffffffffL) * 2L;
}

long long sub_40162C(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_401A09(param1 & 0xffffffffL, param1, param0, param3);
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

long long sub_40165C(long long param0, long long param1, long long param2, long long param3, unsigned long long param4) {
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
    sub_401601(&v1, param1, param2, param3);
loc_4016A7:
    while(v2) {
        while(v2) {
            if(v2 <= 32 && ((0x100002600L >>> ((unsigned long long)v2 % 64L)) & 0x1L)) {
                sub_401601(v4, param1, param2, param3);
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
            loc_40173B:
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
                            sub_401601(v4, 92L, v0, v5);
                        }
                        unsigned long long i;
                        for(i = 0L; v2 == 34; i = (unsigned long long)(v3 + 1L)) {
                            sub_401601(v4, 34L, v0, v5);
                        }
                        unsigned long long v15 = v14;
                        if(!i) {
                            while(1) {
                                --v14;
                                if(v14 == -1L) {
                                    continue loc_40173B;
                                }
                                else {
                                    sub_40162C(v4, 92L, v0, v5);
                                }
                            }
                        }
                        while(v15 > 1L) {
                            sub_40162C(v4, 92L, v0, v5);
                            v15 -= 2L;
                        }
                        if(((unsigned char)v14 & 0x1)) {
                            sub_40162C(v4, 34L, v0, v5);
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
                            sub_40162C(v4, 34L, v0, v5);
                        }
                        v5 = 3L;
                        v0 = (long long)(i % 3L);
                        v13 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v13 >>> 8L) & 0xffffffffffffffL) << 8);
                        continue;
                    }
                    sub_40162C(v4, (long long)v2, v0, v5);
                    sub_401601(v4, param1, param2, param3);
                }
                sub_40162C(v4, 0L, v0, v5);
                continue loc_4016A7;
            }
        }
    }
    sub_40162C(v4, 0L, param2, param3);
    if(v6) {
        long long v17 = v10 - param1;
        *(char*)(((unsigned long long)(v6 - 1L) >= (unsigned long long)v17 ? v17: (unsigned long long)(v6 - 1L)) + param1) = 0;
    }
    if(v9) {
        *(long long*)((v9 - 1L <= v7 ? v9 - 1L: v7) * 8L + v8) = 0L;
    }
    return v7 & 0xffffffffL;
}

long long sub_401872(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    int* ptr0 = *(long long*)&gvar_403040;
    if(!ptr0) {
        ptr0 = (int*)&gvar_403048;
        *(long long*)&gvar_403040 = 72;
    }
    if(*ptr0 == -1) {
        result = sub_4013B4();
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

long long sub_401907(long long param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1 = v0;
    long long result = param2;
loc_40191B:
    for(int* i = *(long long*)&gvar_403040; i; i = *(long long*)&gvar_403040) {
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
                        goto loc_40191B;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                *(long long*)&gvar_403040 = ptr0;
                goto loc_40191B;
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

long long sub_4019FA(long long param0, int* param1, long long param2, long long param3) {
    return sub_401A3C(param0, param1, param2, param3);
}

long long sub_401A09(int param0, long long param1, long long param2, long long param3) {
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

long long sub_401A3C(long long param0, int* param1, long long param2, long long param3) {
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

long long sub_401AA1(char param0) {
    gvar_40335C |= 4;
    if((*(char*)&gvar_403000 & 0x4)) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x401AD2 = lidt(*(__SyntheticTypeUnknownP80)0x401AD2);
    hlt();
}
