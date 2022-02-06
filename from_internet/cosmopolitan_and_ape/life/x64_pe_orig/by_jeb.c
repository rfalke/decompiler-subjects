
void start(long long param0, long long param1) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    unsigned int v4;
    long long* ptr0;
    long long v5;
    char v6;
    long long v7;
    char v8;
    long long* ptr1;
    long long v9;
    long long v10;
    void* ptr2;
    long long v11;
    char v12;
    long long* ptr3;
    long long v13;
    long long v14;
    long long* ptr4;
    while(1) {
        long long* ptr5 = ptr0;
        long long* ptr6 = ptr4;
        long long v15 = v11;
        long long v16 = v14;
        long long v17 = v5;
        long long v18 = 0L;
        long long v19 = 0L;
        BOOL v20 = SetDefaultDllDirectories(0x800);
        if(!(unsigned int)v20) {
            HANDLE v21 = GetStdHandle(0xfffffff4);
            LPOVERLAPPED v22 = NULL;
            HANDLE hFile = v21;
            WriteFile(hFile, "nodll\n", 6, &v8, NULL);
            /*NO_RETURN*/ ExitProcess(1);
        }
        gvar_403000 = 4;
        LPWSTR v23 = GetCommandLineW();
        LPWCH v24 = GetEnvironmentStringsW();
        long long v25 = (long long)v23;
        LPWCH v26 = v24;
        long long v27 = sub_40165C(v25, &v6, 0x3fffL, &v9, 0x200L);
        long long v28 = (unsigned long long)(unsigned int)v27;
        long long v29 = 0L;
        while(1) {
            v3 = v29 + v9;
            param1 = (unsigned long long)*(char*)v3 | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!*(char*)v3) {
                break;
            }
            else {
                if((unsigned char)param1 == 92) {
                    *(char*)v3 = 47;
                }
                ++v29;
            }
        }
        long long v30 = (unsigned long long)v26[0];
        if(v26[0] <= 55295) {
            v2 = (unsigned int)v30;
            v1 = 1L;
        }
        else {
            long long v31 = (long long)v26;
            v1 = sub_4019FA(v31, &v2, param1, v3);
        }
        long long v32 = (unsigned long long)(unsigned int)v1;
        long long v33 = (long long)&v8;
        long long v34 = v32 * 2L;
        unsigned long long v35 = 0L;
        long long v36 = v34 + (long long)v26;
        while(v2) {
            ++v35;
            if(v35 <= 0x1ffL) {
                *(long long*)(v35 * 8L + (long long)&v19) = (unsigned long long)v33 < (unsigned long long)&v12 ? v33: 0L;
            }
            do {
                v4 = v2;
                char v37 = v2 == 127;
                char v38 = v4 < 127;
                long long v39 = (long long)v4;
                if(!v38 && !v37) {
                    long long v40 = (long long)v4;
                    v39 = sub_401A09(v40, (long long)&v2, v36, v33);
                }
                while((unsigned long long)v33 < (unsigned long long)&v12) {
                    ++v33;
                    *(char*)(v33 - 1L) = (unsigned char)v39;
                    v39 >>>= 8;
                    if(!v39) {
                        break;
                    }
                }
                long long v41 = (unsigned long long)*(short*)v36;
                if(*(unsigned short*)v36 <= 55295) {
                    v2 = (unsigned int)v41;
                    v0 = 1L;
                }
                else {
                    long long v42 = v36;
                    v0 = sub_4019FA(v42, &v2, v36, v33);
                }
                v36 += (unsigned long long)(unsigned int)v0 * 2L;
            }
            while(v4);
            long long* ptr7 = (long long*)(v33 - (long long)&v8);
            char v43 = ptr7 == 32765L;
            *(char*)((long long*)((long long)((unsigned long long)ptr7 < 32765L || v43 ? ptr7: (long long*)0x7FFD) + (long long)&v7) - 0x1006) = 0;
        }
        if((unsigned long long)v33 < (unsigned long long)&v12) {
            *(char*)v33 = 0;
            ++v33;
        }
        long long* ptr8 = (long long*)(v33 - (long long)&v8);
        ptr4 = &v10;
        char v44 = ptr8 == 0x7ffeL;
        char v45 = (unsigned long long)ptr8 < 0x7ffeL;
        ptr0 = &v18;
        long long* ptr9 = v45 || v44 ? ptr8: (long long*)0x7FFE;
        unsigned long long v46 = v35 <= 0x1ffL ? v35: 0x1ffL;
        *(char*)((long long)ptr9 + (long long)&v8) = 0;
        LPWCH penv = v26;
        *(long long*)(v46 * 8L + (long long)&v10) = 0L;
        v11 = &v9;
        FreeEnvironmentStringsW(penv);
        v5 = &MZHeader;
        unsigned long long* ptr10 = (unsigned long long*)((long long*)((long long)&ptr2 & 0xfffffffffffffff0L) - 1);
        sub_401297();
        gvar_40335C |= 1;
        long long* ptr11 = (long long*)&gvar_402008;
        long long v47 = &gvar_402008;
        while(ptr11 != v47) {
            --ptr10;
            *ptr10 = ptr11;
            --ptr10;
            *ptr10 = v47;
            --ptr10;
            *ptr10 = &loc_40137D;
            /*BAD_CALL!*/ *ptr11(v47);
            v47 = *ptr10;
            ++ptr10;
            long long v48 = *ptr10;
            ++ptr10;
            ptr11 = (long long*)(v48 + 8L);
        }
        --ptr10;
        *ptr10 = &loc_401394;
        long long v49 = /*BAD_CALL!*/ sub_40134D();
        int v50 = (unsigned int)v49;
        --ptr10;
        *ptr10 = &loc_40139B;
        --ptr10;
        *ptr10 = 0L;
        --ptr10;
        *ptr10 = v28;
        v14 = (unsigned long long)v50;
        --ptr10;
        *ptr10 = v49;
        --ptr10;
        *ptr10 = &loc_4013AC;
        /*BAD_CALL!*/ sub_401907(0L, &v9, v13, ptr1, ptr3);
        --ptr10;
        *ptr10 = &sub_4013B4;
        /*NO_RETURN*/ sub_401AA1();
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

long long* sub_401297() {
    char* ptr0;
    unsigned int v0;
    long long* ptr1;
    long long v1;
    unsigned long long* ptr2;
    long long v2 = v1;
    long long v3 = &gvar_401EE8;
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
    unsigned long long* ptr3 = (unsigned long long*)&gvar_403018;
    do {
        long long v4 = 0L;
        long long* ptr4 = NULL;
        do {
            result = (unsigned long long)*ptr0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)result >>> 8L) & 0xffffffffffffffL) << 8);
            ++ptr0;
            long long v5 = (unsigned long long)((unsigned int)result & 0x7f) << (v4 & 0x3fL);
            v4 = (unsigned long long)((unsigned int)v4 + 7);
            ptr4 = (long long*)((long long)ptr4 | v5);
        }
        while((unsigned char)result < 0);
        if(((unsigned char)result & 0x40)) {
            ptr4 = (long long*)((-1L << (v4 & 0x3fL)) | (long long)ptr4);
        }
        result = *ptr3 ? *ptr3: ptr4;
        *ptr3 = *ptr3 ? *ptr3: ptr4;
        ++ptr3;
    }
    while((unsigned long long)ptr3 >= 0x403030L);
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
    long long v1 = param0;
    param0 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)param0;
    if(*(unsigned short*)param0 <= 55295) {
        *(int*)(v1 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_4019FA(param0, (int*)(v1 + 24L), v1, param3);
    }
    *(long long*)v1 = (unsigned long long)(unsigned int)v0 * 2L + *(long long*)v1;
    return (unsigned long long)(unsigned int)v0 * 2L;
}

long long sub_40162C(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_401A09((long long)(unsigned int)param1, param1, param0, param3);
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
    sub_401601(&v1, param1, param2, param3);
loc_4016A7:
    while(v2) {
    loc_4016A9:
        do {
            unsigned long long v23 = (unsigned long long)v2;
            if(v2) {
                if((unsigned int)v23 <= 32 && ((0x100002600L >>> (v23 % 64L)) & 0x1L)) {
                    sub_401601(v9, param1, param2, param3);
                    goto loc_4016A9;
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
                loc_401736:
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
                                sub_401601(v9, i, v0, v11);
                            }
                            unsigned long long j;
                            for(j = 0L; v2 == 34; j = (unsigned long long)(v5 + 1L)) {
                                sub_401601(v9, i, v0, v11);
                            }
                            unsigned long long v25 = v6;
                            if(!j) {
                                while(1) {
                                    --v6;
                                    if(v6 == -1L) {
                                        goto loc_401736;
                                    }
                                    else {
                                        sub_40162C(v9, 92L, v0, v11);
                                    }
                                }
                            }
                            while(v25 > 1L) {
                                sub_40162C(v9, 92L, v0, v11);
                                v25 -= 2L;
                            }
                            if(((unsigned char)v6 & 0x1)) {
                                sub_40162C(v9, 34L, v0, v11);
                                j = (unsigned long long)(v5 - 1L);
                                if(!j) {
                                    goto loc_401736;
                                }
                            }
                            char v26 = (unsigned char)v8 < 1;
                            v8 = 3L;
                            j -= (unsigned long long)v26;
                            v6 = j + 1L;
                            while(v6 >= v8) {
                                v8 += 3L;
                                sub_40162C(v9, 34L, v0, v11);
                            }
                            v11 = 3L;
                            v0 = (long long)(j % 3L);
                            v8 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v8 >>> 8L) & 0xffffffffffffffL) << 8);
                            goto loc_401736;
                        }
                        sub_40162C(v9, i, v0, v11);
                        sub_401601(v9, param1, param2, param3);
                    }
                    sub_40162C(v9, 0L, v0, v11);
                    continue loc_4016A7;
                }
            }
        }
        while(v2);
    }
    sub_40162C(v9, 0L, param2, param3);
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

long long sub_401872(long long param0, long long param1, long long param2) {
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
    unsigned int* ptr0 = *(long long*)&gvar_403040;
    if(!ptr0) {
        ptr0 = (unsigned int*)&gvar_403048;
        *(long long*)&gvar_403040 = 72;
    }
    if(*ptr0 == -1) {
        result = sub_4013B4();
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

long long sub_401907(unsigned long long param0, long long param1, long long param2, long long* param3, long long* param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = v2;
    long long result = param2;
loc_40191B:
    for(int* i = *(long long*)&gvar_403040; i; i = *(long long*)&gvar_403040) {
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

long long sub_401A3C(long long param0, int* param1, long long param2, long long param3) {
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

void sub_401AA1() {
    gvar_40335C |= 4;
    char v0 = *(char*)&gvar_403000 & 0x4 ? 0: 1;
    char v1 = (*(char*)&gvar_403000 & 0x4) < 0;
    char v2 = __parity__(*(char*)&gvar_403000 & 0x4);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_401ABE: &sub_401AB1;
}

void sub_401AB1(char param0) {
    while(1) {
        /*NO_RETURN*/ ExitProcess((UINT)param0);
    }
}

long long sub_401ABE() {
    long long v0 = (unsigned long long)gvar_403028;
    syscall();
    char v1 = 0;
    lidt(*(void*)0x401AD2);
    hlt();
}
