
void start() {
    // Decompilation error
}

long long sub_401000() {
    gvar_4540B8 |= 2;
    if(!(*(char*)&gvar_44EB70 & 0x4)) {
        syscall();
        syscall();
        syscall();
    }
    /*NO_RETURN*/ sub_43B001(134L);
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
            long long v6 = result & 0xFFFFFFFFL;
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
                result = v6 & 0xFFFFFFFFL;
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

void sub_401299() {
}

void sub_4012F0() {
    // Decompilation error
}

void sub_4015A2() {
    // Decompilation error
}

long long sub_401780() {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long v4 = gvar_450038;
    char v5 = gvar_452090 ? 0: 1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v0;
    long long v9 = v1;
    if(v5) {
        gvar_452090 = 4530328L;
        gvar_452088 = 8L;
        sub_437286(&sub_431ABE, 0L, 0L);
    }
    unsigned long long v10 = gvar_452080;
    unsigned long long v11 = gvar_452090;
    unsigned long long v12 = v10 - 1L;
    while(v12 != -1L) {
        unsigned long long* ptr0 = (unsigned long long*)(v12 * 8L + v11);
        --v12;
        if(!*(long long*)(v12 * 8L + v11 + 8L)) {
            *ptr0 = v4;
            return 0L;
        }
    }
    if(v10 + 1L >= gvar_452088) {
        char v13 = sub_437453((long long*)&gvar_452090, &gvar_452088, 8L, 1L);
        if((unsigned char)v13) {
            v12 = v10;
            *gvar_452090 = v4;
            gvar_452080 = v10 + 1L;
            return v12 & 0xFFFFFFFFL;
        }
    }
    else {
        v12 = v10;
        *gvar_452090 = v4;
        gvar_452080 = v10 + 1L;
    }
    return v12 & 0xFFFFFFFFL;
}

long long sub_40178C(long long param0, unsigned long long* param1) {
    long long v0;
    long long v1;
    long long v2;
    unsigned long long* ptr0;
    long long v3 = v0;
    unsigned long long* ptr1 = param1;
    char* ptr2 = gvar_452038;
    if(!(*(char*)&gvar_44EB70 & 0x4)) {
        long long v4 = sub_4018BB((long long)*(int*)(ptr2 + 12L));
        if((unsigned int)v4) {
            goto loc_4017B1;
        }
    }
    else {
    loc_4017B1:
        *ptr2 = 1;
    }
    long long v5 = v3;
    char v6 = gvar_452090 ? 0: 1;
    v3 = v2;
    ptr1 = ptr0;
    long long v7 = v5;
    long long v8 = v1;
    if(v6) {
        gvar_452090 = 4530328L;
        gvar_452088 = 8L;
        sub_437286(&sub_431ABE, 0L, 0L);
    }
    unsigned long long v9 = gvar_452080;
    unsigned long long v10 = gvar_452090;
    unsigned long long v11 = v9 - 1L;
    while(v11 != -1L) {
        param1 = (unsigned long long*)(v11 * 8L + v10);
        --v11;
        if(!*(long long*)(v11 * 8L + v10 + 8L)) {
            *param1 = ptr2;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_452088) {
        char v12 = sub_437453((long long*)&gvar_452090, &gvar_452088, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *gvar_452090 = ptr2;
            gvar_452080 = v9 + 1L;
            return v11 & 0xFFFFFFFFL;
        }
    }
    else {
        v11 = v9;
        *gvar_452090 = ptr2;
        gvar_452080 = v9 + 1L;
    }
    return v11 & 0xFFFFFFFFL;
}

int sub_4017C2() {
    gvar_454080 = &gvar_4540B4;
    gvar_454088 = &gvar_4540B4;
    gvar_4540B4 = 0x202020;
    return 0x202020;
}

long long sub_4017E5(long long param0, long long param1) {
    long long result;
    sub_4371B9();
    return result;
}

long long sub_401839(long long param0, int* param1) {
    long long result = sub_438390();
    if((unsigned int)result != -1) {
        int v0 = (unsigned int)result;
        sub_401958(param1);
        result = (long long)v0;
    }
    return result;
}

HANDLE sub_401866(long long param0, long long param1) {
    gvar_453AE0 = 3L;
    gvar_453AF0 = &gvar_453AF8;
    gvar_453AE8 = 16L;
    gvar_453B08 = 1;
    gvar_453B20 = 1;
    gvar_453B38 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_453AF8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_453B10 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_453B28 = result;
    return result;
}

long long sub_4018BB(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3 = (unsigned long long)(gvar_44EB70 & 0x4);
    if(!(gvar_44EB70 & 0x4)) {
        unsigned int v4 = gvar_453D68;
        long long v5 = sub_401839(param0, &v1);
        if(((unsigned int)v5 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            v3 = v0 ? 1L: 0L;
            return v3 & 0xFFFFFFFFL;
        }
        gvar_453D68 = v4;
    }
    else {
        int v6 = (unsigned int)param0;
        v3 = 0L;
        long long v7 = /*BAD_CALL!*/ sub_437DB6(param0, 1L);
        if((unsigned char)v7) {
            DWORD v8 = sub_402E71(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_453AF0));
            v0 = (unsigned int)v8 == 2;
            v3 = v0 ? 1L: 0L;
        }
    }
    return v3 & 0xFFFFFFFFL;
}

void sub_401958(int* param0) {
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
        long long v13 = (unsigned long long)gvar_44EB70;
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
            goto loc_401A65;
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
                goto loc_401A59;
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
            loc_401A59:
                *(long long*)(param0 + 12) = v0;
                *(long long*)(param0 + 14) = v6;
                *(long long*)(param0 + 16) = v7;
            loc_401A65:
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

long long sub_401A89(long long* param0, char* param1, long long param2, int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((unsigned long long)(((v0 ? 0: 1) * 2) | (gvar_44E03D & 0x2 ? 1: 0)) + (long long)param1) + param2;
    return *(long long*)param1;
}

char sub_401AB7(char* param0, char* param1) {
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

long long sub_401AC8(long long* param0) {
    int counter = 32;
    long long result = 0x706050403020100L;
    do {
        *param0 = result;
        ++param0;
        result += 0x808080808080808L;
        --counter;
    }
    while(counter);
    return result;
}

void sub_401AEB() {
    // Decompilation error
}

void sub_401B04() {
    // Decompilation error
}

long long sub_401B75(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_401CED(long long param0, long long param1, int param2, long long param3, long long param4, long long param5) {
    return sub_401B75(param0, param1, (unsigned long long)(param2 | 0x3000000), "invalid stack index %ld", (long long)(unsigned int)param3, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401D22(long long param0, long long param1, int param2) {
    return sub_401C42(param0, param1, (long long)(param2 | 0x6000000), "invalid state");
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401D32(long long param0, long long param1, int param2) {
    return sub_401C42(param0, param1, (long long)(param2 | 0x6000000), "invalid trap result");
}

long long sub_401D42() {
    /*NO_RETURN*/ sub_401000();
}

void sub_401D4B() {
    // Decompilation error
}

void sub_401EA7() {
    // Decompilation error
}

void sub_401F78() {
    // Decompilation error
}

void sub_401F82() {
    // Decompilation error
}

void sub_401F8C() {
    // Decompilation error
}

void sub_40200C() {
    // Decompilation error
}

long long sub_4020AC() {
    gvar_453D68 = gvar_44EBB8;
    return -1L;
}

long long sub_4020BC() {
    gvar_453D68 = gvar_44EBC0;
    return -1L;
}

long long sub_4020CC() {
    gvar_453D68 = gvar_44EBD0;
    return -1L;
}

long long sub_4020DC() {
    gvar_453D68 = gvar_44EBD8;
    return -1L;
}

long long sub_4020EC() {
    gvar_453D68 = gvar_44EBE0;
    return -1L;
}

long long sub_4020FC() {
    gvar_453D68 = gvar_44EBE8;
    return -1L;
}

long long sub_40210C() {
    gvar_453D68 = gvar_44EBF0;
    return -1L;
}

long long sub_40211C() {
    gvar_453D68 = gvar_44EBF8;
    return -1L;
}

long long sub_40212C() {
    gvar_453D68 = gvar_44EC00;
    return -1L;
}

long long sub_40213C() {
    gvar_453D68 = gvar_44EC08;
    return -1L;
}

long long sub_40214C() {
    gvar_453D68 = gvar_44EC10;
    return -1L;
}

long long sub_40215C() {
    gvar_453D68 = gvar_44EC18;
    return -1L;
}

long long sub_40216C() {
    gvar_453D68 = gvar_44EC28;
    return -1L;
}

void sub_402185() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40241F(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = *(long long*)param0;
    long long v2 = (unsigned long long)*(short*)v1;
    if(*(unsigned short*)v1 <= 55295) {
        *(int*)(param0 + 24L) = (unsigned int)v2;
        v0 = 1L;
    }
    else {
        v0 = sub_439F54(v1, (int*)(param0 + 24L), param0, param3);
    }
    *(long long*)param0 = (v0 & 0xFFFFFFFFL) * 2L + *(long long*)param0;
    return (v0 & 0xFFFFFFFFL) * 2L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40244A(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_439F81(param1 & 0xFFFFFFFFL, param1, param0, param3);
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

long long sub_40247A(long long param0, long long param1, long long param2, long long param3) {
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
    sub_40241F(&v1, param1, param2, param3);
loc_4024C1:
    while(v2) {
        while(v2) {
            if(v2 <= 32 && ((0x100002600L >>> ((unsigned long long)v2 % 64L)) & 0x1L)) {
                sub_40241F(&v1, param1, param2, param3);
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
            loc_402550:
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
                            sub_40241F(&v1, 92L, v0, v5);
                        }
                        unsigned long long i;
                        for(i = 0L; v2 == 34; i = (unsigned long long)(v3 + 1L)) {
                            sub_40241F(&v1, 34L, v0, v5);
                        }
                        unsigned long long v14 = v13;
                        if(!i) {
                            while(1) {
                                --v13;
                                if(v13 == -1L) {
                                    continue loc_402550;
                                }
                                else {
                                    sub_40244A(&v1, 92L, v0, v5);
                                }
                            }
                        }
                        while(v14 > 1L) {
                            sub_40244A(&v1, 92L, v0, v5);
                            v14 -= 2L;
                        }
                        if(((unsigned char)v13 & 0x1)) {
                            sub_40244A(&v1, 34L, v0, v5);
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
                            sub_40244A(&v1, 34L, v0, v5);
                        }
                        v5 = 3L;
                        v0 = (long long)(i % 3L);
                        v12 = (unsigned long long)(v0 ? 0: 1) | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8);
                        continue;
                    }
                    sub_40244A(&v1, (long long)v2, v0, v5);
                    sub_40241F(&v1, param1, param2, param3);
                }
                sub_40244A(&v1, 0L, v0, v5);
                continue loc_4024C1;
            }
        }
    }
    sub_40244A(&v1, 0L, param2, param3);
    if(v6) {
        long long v16 = v9 - param1;
        *(char*)(((unsigned long long)(v6 - 1L) >= (unsigned long long)v16 ? v16: (unsigned long long)(v6 - 1L)) + param1) = 0;
    }
    if(v4) {
        *(long long*)((v4 - 1L <= v7 ? v4 - 1L: v7) * 8L + v8) = 0L;
    }
    return v7 & 0xFFFFFFFFL;
}

void sub_402687() {
    // Decompilation error
}

HANDLE sub_40287E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    HANDLE hDevice;
    char v0;
    char v1;
    int v2;
    int v3;
    LPCWSTR lpFileName;
    long long v4 = sub_402C35(param0, param1, &v0, param3, param4, param5);
    if((unsigned int)v4 + 1) {
        unsigned long long v5 = (unsigned long long)((unsigned long long)v3 & gvar_44EC90);
        HANDLE v6 = sub_402DD7(lpFileName, (long long)((unsigned int)param1 & 0xf000000f), (long long)((v5 < 1L ? -1: 0) & 0x7), (unsigned long long)v3 & gvar_44EC80 ? (LPSECURITY_ATTRIBUTES)&gvar_446EC0: NULL, ((unsigned long long)v3 & gvar_44EC88) != 0L ? v5 ? 1L: (long long)((((unsigned long long)((unsigned long long)v3 & gvar_44ECB0) < 1L ? -1: 0) & 0x2) + 2): (long long)((((unsigned long long)((unsigned long long)v3 & gvar_44ECB0) < 1L ? -1: 0) & 0xfffffffe) + 5), (long long)(((v2 * 0x100) & 0xf0000000) | (v2 & 0xf000100) | 0x2080), NULL, param0);
        hDevice = v6;
        if(v6 == -1L) {
            return (HANDLE)0xFFFFFFFFFFFFFFFF;
        }
        else if(((unsigned long long)v3 & gvar_44ECA8)) {
            sub_402DED(hDevice, 590020L, NULL, 0L, NULL, 0L, &v1, NULL);
        }
    }
    else {
        hDevice = (HANDLE)0xFFFFFFFFFFFFFFFF;
    }
    return hDevice;
}

void sub_402993() {
    // Decompilation error
}

void sub_402B09() {
    // Decompilation error
}

void sub_402B93() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_402C35(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int v0;
    int v1;
    int* ptr0;
    long long v2;
    long long v3;
    unsigned long long v4;
    long long v5 = param3;
    long long v6 = param2;
    long long v7 = sub_402D2E(param0, param1, param2, 0L);
    while(1) {
        char* ptr1 = (char*)(v7 + param5);
        long long v8 = (unsigned long long)(int)ptr1[0];
        if(ptr1[0] >= 0) {
            v1 = (unsigned int)v8;
            v0 = 1;
        }
        else {
            v0 = sub_439F72(ptr1, ptr0, v2, v3, v7, param5);
            if((unsigned int)v0 == -1) {
                break;
            }
        }
        if(!v1) {
            *(short*)(v3 * 2L + param2) = 0;
            return v3 & 0xFFFFFFFFL;
        }
        param5 += (long long)(unsigned int)v0;
        if(v1 == 47) {
            v1 = 92;
        }
        if((unsigned long long)(v3 + 3L) > 231L) {
            *(short*)param2 = 0;
            return sub_40210C();
        }
        v2 = (long long)v1;
        short* ptr2 = (short*)(v3 * 2L + param2);
        if((unsigned int)v2 <= 55295) {
            ptr2[0] = (short)v2;
            v0 = 1;
            goto loc_402CDF;
        }
        else {
            v0 = (int)sub_439F63(ptr2, v4, v2, v3);
        }
        if((unsigned int)v0 == -1) {
            break;
        }
        else {
        loc_402CDF:
            v3 += (long long)(unsigned int)v0;
        }
    }
    *(short*)param2 = 0;
    return 0xFFFFFFFFL;
}

int* sub_402D09(int* param0, int* param1) {
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

long long sub_402D2E(long long param0, long long param1, long long param2, int param3) {
    long long v0;
    long long v1;
    long long v2;
    if(*(char*)param0 == 47) {
        long long v3 = sub_43AE48(param0, "/dev/tty", "/dev/tty", param1 & 0xFFFFFFFFL);
        if(!(unsigned int)v3) {
            long long v4 = (unsigned long long)(*(int*)&gvar_44EC78 & param3);
            if(*(long long*)&gvar_44EC98 == v4) {
                goto loc_402D88;
            }
            else if(*(long long*)&gvar_44ECB8 == v4) {
                return v1 + 53L;
            }
            else {
                goto loc_402D6C;
            }
        }
        else {
        loc_402D6C:
            long long v5 = sub_43AE48(v0, v1 + 9L, v1, v2);
            if(!(unsigned int)v5) {
                param0 = v1 + 42L;
            }
            else {
                long long v6 = sub_43AE48(v0, v1 + 19L, v1, v2);
                if(!(unsigned int)v6) {
                loc_402D88:
                    param0 = v1 + 46L;
                }
                else {
                    long long v7 = sub_43AE48(v0, v1 + 30L, v1, v2);
                    if(!(unsigned int)v7) {
                        param0 = v1 + 53L;
                    }
                }
            }
        }
    }
    return param0;
}

void sub_402DA8() {
    // Decompilation error
}

HANDLE sub_402DC1(HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, long long param2, long long param3, long long param4, LPCWSTR lpName, long long param6, long long param7) {
    long long v0 = param7;
    return CreateFileMappingNumaW(hFile, lpFileMappingAttributes, (DWORD)param2, (DWORD)param3, (DWORD)param4, lpName, (DWORD)param6);
}

HANDLE sub_402DD7(LPCWSTR lpFileName, long long param1, long long param2, LPSECURITY_ATTRIBUTES lpSecurityAttributes, long long param4, long long param5, HANDLE hTemplateFile, long long param7) {
    long long v0 = param7;
    return CreateFileW(lpFileName, (DWORD)param1, (DWORD)param2, lpSecurityAttributes, (DWORD)param4, (DWORD)param5, hTemplateFile);
}

BOOL sub_402DED(HANDLE hDevice, long long param1, LPVOID lpInBuffer, long long param3, LPVOID lpOutBuffer, long long param5, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped) {
    return DeviceIoControl(hDevice, (DWORD)param1, lpInBuffer, (DWORD)param3, lpOutBuffer, (DWORD)param5, lpBytesReturned, lpOverlapped);
}

void sub_402E19() {
    // Decompilation error
}

void sub_402E2F() {
    // Decompilation error
}

BOOL sub_402E45(HANDLE hFile, long long param1, LPVOID lpFileInformation, long long param3) {
    return GetFileInformationByHandleEx(hFile, (FILE_INFO_BY_HANDLE_CLASS)param1, lpFileInformation, (DWORD)param3);
}

BOOL sub_402E5B(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation) {
    return GetFileInformationByHandle(hFile, lpFileInformation);
}

DWORD sub_402E71(HANDLE hFile) {
    return GetFileType(hFile);
}

long long sub_402E8A() {
    // Decompilation error
}

void sub_402EA0() {
    // Decompilation error
}

LPVOID sub_402EB9(HANDLE hFileMappingObject, long long param1, long long param2, long long param3, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress, long long param6, long long param7) {
    long long v0 = param7;
    return MapViewOfFileExNuma(hFileMappingObject, (DWORD)param1, (DWORD)param2, (DWORD)param3, dwNumberOfBytesToMap, lpBaseAddress, (DWORD)param6);
}

void sub_402ECF() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_402FA0(long long param0, long long param1, long long param2, long long param3) {
    long long result = sub_402F19(*(long long*)(param0 + 64L), param1, param2, param3);
    if(!result && param1) {
        sub_401CC7(param3, 143L);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_402FE5(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0 = sub_402F19(*(long long*)(param0 + 64L), param1, param2, param3);
    if(v0) {
        sub_43ABE2(v0, 0L, param1, param3);
    }
    else if(param1) {
        sub_401CC7(param3, 162L);
    }
    return result;
}

void sub_40303B() {
    // Decompilation error
}

void sub_4030A6() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403189(long long param0) {
    long long v0;
    double v1;
    int v2 = 0;
    long long v3 = sub_404AE7(param0);
    for(double i = (double)0.0; (unsigned int)v3 > v2; i += v1) {
        sub_405C43(param0, (long long)v2);
        v0 = movlpd(v0, i);
        ++v2;
    }
    sub_406A1B(param0);
    return 1L;
}

void sub_40323B() {
    // Decompilation error
}

void sub_403319() {
    // Decompilation error
}

void sub_40338B() {
    // Decompilation error
}

void sub_4033EA() {
    // Decompilation error
}

void sub_403420() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_40342F(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = *(long long*)(param0 + 64L);
    long long v5 = param0;
    sub_406883(param0, v4 + 144L);
    sub_406883(v5, v4 + 160L);
    sub_43AAA0(v1, 48L);
    *(int*)(v2 + 48L) = *(int*)(v4 + 116L);
    *(long long*)(v2 + 56L) = *(long long*)(v4 + 184L);
    int result = *(int*)(v4 + 200L);
    *(int*)(v2 + 64L) = *(int*)(v4 + 200L);
    *(long long*)(v4 + 128L) = 0L;
    *(int*)(v4 + 0x88L) = 0;
    *(int*)(v4 + 144L) = 2;
    *(int*)(v4 + 160L) = 2;
    *(int*)(v4 + 116L) = 0;
    *(long long*)(v4 + 184L) = 0L;
    *(int*)(v4 + 200L) = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40365C(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_406D71(param0, v3);
    return sub_403616(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403690(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406B69(param0, v3, v4, v4);
    return sub_403616(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4036CF(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406EC3(param0, v3, v4);
    return sub_403616(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403745(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_4076F0(param0, v3);
    return sub_403616(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4037C1(long long param0, long long param1, long long param2, int* param3) {
    int* ptr0;
    long long v0 = param0;
    long long v1 = sub_40377C(param0, param1, param2);
    if(ptr0) {
        *ptr0 = (unsigned int)v1;
    }
    return sub_405C10(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403883(long long param0, int param1) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    void* ptr0;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v1;
    long long v8 = v2;
    void* ptr1 = ptr0;
    long long v9 = v0;
    sub_40480A(param0, (long long)(param1 >> 16));
    sub_407808(param0, *(long long*)(((unsigned long long)(unsigned short)param1 & 0xFFFFFFFFL) * 8L + *(long long*)(param0 + 568L)));
    sub_405823();
    if(v0) {
        sub_40574F(param0, 0xFFFFFFFFL, v3, v4, v5, v6);
        long long v10 = sub_40E5DF(*(long long*)(param0 + 64L), v0);
        if(!v10) {
            return 0L;
        }
        sub_406883(param0, v10);
        sub_405181(param0);
        result = 1L;
    }
    else {
        result = 0L;
    }
    return result;
}

long long sub_40388B(long long par0) {
    // Decompilation error
}

void sub_403895() {
    // Decompilation error
}

void sub_4038CF() {
    // Decompilation error
}

void sub_403911() {
    // Decompilation error
}

long long sub_403953(long long par0, long long par1, long long par2) {
    // Decompilation error
}

void sub_40398D() {
    // Decompilation error
}

void sub_4039C7() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403A0F(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2 = sub_404A12(param0, param1);
    long long v3 = sub_404A12(param0, 0xFFFFFFFFL);
    long long v4 = sub_41DCBE(param0);
    long long v5 = sub_41018F(param0, v2, v3, v4 & 0xFFFFFFFFL, v0, v1);
    sub_407D7E(param0);
    return (unsigned long long)(unsigned int)v5;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403A68(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_406D71(param0, v3);
    return sub_403A0F(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403A9F(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406B69(param0, v3, v4, v4);
    return sub_403A0F(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403ADE(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406EC3(param0, v3, v4);
    return sub_403A0F(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403B1D(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    long long v6 = sub_40480A(param0, param1);
    sub_406AAF(param0, (unsigned long long)param2);
    return sub_403A0F(param0, (unsigned long long)(unsigned int)v6);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403B54(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_4076F0(param0, v3);
    return sub_403A0F(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403B8B(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    long long v4 = sub_40480A(param0, param1);
    sub_407808(param0, *(long long*)((unsigned long long)param2 * 8L + *(long long*)(param0 + 568L)));
    return sub_403A0F(param0, (long long)(unsigned int)v4);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403BC8(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = sub_404A12(param0, param1);
    long long v5 = sub_404A12(param0, 0xFFFFFFFFL);
    long long v6 = sub_40F1DF(param0, v4, v5, v1, v2, v3);
    (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v6;
    sub_407D7E(param0);
    return v0 >>> 32L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C0E(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_406D71(param0, v3);
    return sub_403BC8(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C42(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406B69(param0, v3, v4, v4);
    return sub_403BC8(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C81(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = sub_40480A(param0, param1);
    sub_406EC3(param0, v3, v4);
    return sub_403BC8(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403CC0(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    long long v6 = sub_40480A(param0, param1);
    sub_406AAF(param0, (unsigned long long)param2);
    return sub_403BC8(param0, (long long)(unsigned int)v6);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403CF7(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v0;
    long long v7 = sub_40480A(param0, param1);
    sub_4076F0(param0, v3);
    return sub_403BC8(param0, (long long)(unsigned int)v7);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403D2E(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    long long v4 = sub_40480A(param0, param1);
    sub_407808(param0, *(long long*)((unsigned long long)param2 * 8L + *(long long*)(param0 + 568L)));
    return sub_403BC8(param0, (long long)(unsigned int)v4);
}

long long sub_403D6B(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v2;
    long long v7 = v1;
    long long v8 = sub_40582D(param0, param1);
    long long v9 = sub_4089B9(param0, 0xfffffffeL);
    sub_4103F9(param0, v8, v9, (unsigned long long)param2, v3, v4);
    return sub_407D7E(param0);
}

long long sub_403DB2(long long par0, long long par1, long long par2, long long par3, long long par4) {
    // Decompilation error
}

long long sub_403E29(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_403F77(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v0;
    long long v10 = sub_40480A(param0, param1);
    sub_407826(param0, (unsigned long long)param2);
    sub_407CED(param0, 33L);
    sub_404F67(param0, param1, v3, v4);
    return sub_403E29(param0, (unsigned long long)(unsigned int)v10, 896L, v9, v5, v6);
}

long long sub_403FC8(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    sub_405823();
    if(v0) {
        result = sub_40E4C4(param0, v0, v1, v2, v3);
    }
    return result;
}

long long sub_403FED(long long param0) {
    return sub_403FC8(param0);
}

void sub_403FF2() {
    // Decompilation error
}

long long sub_404025(long long param0, long long param1, int param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = v3;
    long long v10 = v4;
    (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)param1;
    sub_40582D(param0, param1);
    sub_404F0A(param0, v0 >>> 32L);
    long long v11 = v10;
    long long v12 = v9;
    v9 = v5;
    v10 = v12;
    v0 = v6;
    long long v13 = v11;
    long long v14 = v1;
    int v15 = param2;
    long long v16 = sub_40582D(param0, 0xFFFFFFFFL);
    sub_4037B9(param0, 0xffff0061L);
    long long v17 = sub_4054AF(param0, 0xFFFFFFFFL, v2, v7, v8);
    unsigned int v18 = (unsigned int)v17;
    sub_407D7E(param0);
    sub_403883(param0, 0xffff0060L);
    int* ptr0 = (int*)sub_40582D(param0, 0xFFFFFFFFL);
    int v19 = ptr0[0] & 0x2000000;
    sub_407D7E(param0);
    while(*(unsigned int*)(v16 + 44L) > v18) {
        long long v20 = (unsigned long long)v18;
        ++v18;
        v5 = *(long long*)(v20 * 8L + (unsigned long long)*(int*)(v16 + 40L) * 16L + *(long long*)(v16 + 24L));
        if(v19) {
            goto loc_40DBA6;
        }
        else {
            long long v21 = sub_40F3D3(param0, ptr0, v5);
            if((unsigned int)v21) {
                goto loc_40DBA6;
            }
        }
    }
    v5 = 0L;
loc_40DBA6:
    sub_406AAF(param0, (unsigned long long)v18);
    sub_403A07(param0, 0xfffe0061L);
    if(v5) {
        sub_407808(param0, v5);
        if(v15) {
            sub_407C45(param0, (long long)ptr0);
            sub_404FF1();
            sub_403616(param0, 0xfffffffeL);
            sub_405181();
            sub_40511F(param0, 0xfffffffdL);
        }
        else {
            sub_405181();
        }
        result = 1L;
    }
    else {
        sub_407D7E(param0);
        result = 0L;
    }
    return result;
}

long long sub_40405C(long long param0, long long param1, int param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = param5;
    unsigned long long* ptr0 = &v0;
    int* ptr1 = (int*)sub_404A12(param0, param1);
    int v7 = *ptr1;
    if(v7 == 9) {
        long long v8 = *(long long*)(ptr1 + 2);
        if(!param2 || !((*(int*)v8 >>> 13) & 0x1)) {
            sub_41168F(param0, v8, (long long)param2, v1, v3);
            return sub_40E4C4(param0, v8, v4, v1, v6);
        }
    loc_4040B8:
        long long v9 = *ptr0;
        ptr0 += 5;
        /*BAD_CALL!*/ sub_401D12(v9, 708L);
    }
    else if(v7 == 10 && param2) {
        goto loc_4040B8;
    }
    jump *(long long*)(ptr0 + 5);
}

void sub_4040EC() {
    // Decompilation error
}

void sub_40413B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404197(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v4 = sub_40365C(param0, 0xFFFFFFFFL, v2);
    (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v4;
    sub_405181();
    return v0 >>> 32L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4041D9(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v6 = sub_403690(param0, 0xFFFFFFFFL, v2, v3);
    sub_405181();
    return (unsigned long long)(unsigned int)v6;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404227(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v6 = sub_4036CF(param0, 0xFFFFFFFFL, v2, v3);
    sub_405181();
    return (unsigned long long)(unsigned int)v6;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404275(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v4 = sub_403745(param0, 0xFFFFFFFFL, v2);
    (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v4;
    sub_405181();
    return v0 >>> 32L;
}

void sub_4042B7() {
    // Decompilation error
}

void sub_404308() {
    // Decompilation error
}

void sub_404365() {
    // Decompilation error
}

void sub_4043C2() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404413(long long param0, long long param1, long long param2) {
    long long result;
    sub_40377C(param0, param1, param2);
    long long v0 = sub_406103(param0, 0xFFFFFFFFL);
    if(((unsigned char)v0 & 0x6)) {
        sub_407DA6(param0);
        result = 0L;
    }
    else {
        long long v1 = sub_4065F2(param0, 0xFFFFFFFFL);
        if(!(unsigned int)v1) {
            sub_401C42(param0, "third_party/duktape/duk_api_object.c", 0x6000383L, 0x4411ddL);
            result = (unsigned long long)(unsigned int)v1;
        }
        else {
            result = 1L;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40447B(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = param0;
    long long v1 = sub_40582D(param0, param1, param2, param3, param4, param5);
    long long v2 = *(long long*)(v1 + 32L);
    return v2 ? sub_407C45(v0, v2): sub_4068D1(v0, 0L, param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4044A5(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = sub_40582D(param0, param1);
    sub_406117(param0, 0xFFFFFFFFL, 0x442L, v1, v2);
    sub_405823();
    sub_40DCFB(param0, v3, v0, v1);
    return sub_407D7E(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40450E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = sub_40582D(param0, param1, param2, param3, param4, param5);
    return *(long long*)(v0 + 32L) ? 0L: 1L;
}

void sub_40452E() {
    // Decompilation error
}

long long sub_4047ED(long long param0, unsigned int param1) {
    long long v0 = (*(long long*)(param0 + 112L) - *(long long*)(param0 + 104L)) >> 4;
    if(param1 >= 0x80000000) {
        param1 = (unsigned int)((unsigned int)v0 + param1);
    }
    return (unsigned int)v0 > param1 ? (unsigned long long)param1: 0x80000000L;
}

void sub_404A4F() {
    // Decompilation error
}

long long sub_404AB6(long long param0, long long param1) {
    long long v0 = sub_4047ED(param0, (unsigned int)param1);
    return (unsigned long long)(~(unsigned int)v0 >>> 31);
}

long long sub_404AC6(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long result = sub_4047ED(param0, (unsigned int)param1);
    if((unsigned int)result < 0) {
        result = sub_401CED(param0, "third_party/duktape/duk_api_stack.c", 394L, v0, v1, v2);
    }
    return result;
}

long long sub_404B20(long long param0, int param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v3;
    long long v5 = v2;
    unsigned long long* ptr0 = &v0;
    int* ptr1 = *(unsigned long long*)(param0 + 112L);
    long long v6 = *(long long*)(param0 + 104L);
    long long v7 = (long long)((long long)(long long*)((long long)ptr1 - v6) >> 4);
    long long v8 = (*(long long*)(param0 + 88L) - v6) >> 4;
    long long v9 = ((long long)param1 + v7) & 0xFFFFFFFFL;
    if(param1 >= 0) {
        v9 = (long long)param1;
    }
    if((unsigned int)v9 > (unsigned int)v8) {
        return sub_401CED(param0, "third_party/duktape/duk_api_stack.c", 464L, (long long)param1, v0, v1);
    }
    if((unsigned int)v7 <= (unsigned int)v9) {
        *(long long*)(param0 + 112L) = v9 * 16L + v6;
        jump *(long long*)(ptr0 + 5);
    }
    long long* ptr2 = (long long*)((long long)ptr1 - (unsigned long long)((unsigned int)v7 - (unsigned int)v9) * 16L);
    do {
        long long v10 = (unsigned long long)*(ptr1 - 4);
        ptr1 -= 4;
        long long v11 = *(long long*)(ptr1 + 2);
        *ptr1 = 2;
        if(((unsigned char)v10 & 0x8)) {
            *(int*)(v11 + 4L) = *(int*)(v11 + 4L) - 1;
            if(!*(int*)(v11 + 4L)) {
                v1 = param0;
                --ptr0;
                *ptr0 = &loc_404BB4;
                /*BAD_CALL!*/ sub_40CFD5(param0, v11, v9, (long long)param1);
                param0 = v1;
            }
        }
    }
    while(ptr1 != ptr2);
    *(unsigned long long*)(param0 + 112L) = ptr2;
    /*BAD_CALL!*/ →sub_40CA54(param0);
}

long long sub_404BCC(long long param0, unsigned int param1, long long param2, long long param3) {
    long long result1;
    int* ptr0 = *(unsigned long long*)(param0 + 112L);
    long long v0 = *(long long*)(param0 + 104L);
    long long result = (long long)((long long)(long long*)((long long)ptr0 - v0) >> 4);
    if((unsigned int)result <= param1) {
        *(long long*)(param0 + 112L) = (unsigned long long)param1 * 16L + v0;
        return result;
    }
    long long* ptr1 = (long long*)((long long)ptr0 - (unsigned long long)((unsigned int)result - param1) * 16L);
    do {
        long long v1 = (unsigned long long)*(ptr0 - 4);
        ptr0 -= 4;
        long long v2 = *(long long*)(ptr0 + 2);
        *ptr0 = 2;
        if(((unsigned char)v1 & 0x8)) {
            *(int*)(v2 + 4L) = *(int*)(v2 + 4L) - 1;
            if(!*(int*)(v2 + 4L)) {
                long long v3 = param0;
                result1 = sub_40CFD5(param0, v2, v0, param3);
                param0 = v3;
            }
        }
    }
    while(ptr0 != ptr1);
    *(unsigned long long*)(param0 + 112L) = ptr1;
    →sub_40CA54(param0);
    return result1;
}

long long sub_404C48(long long param0, unsigned int param1, long long param2, long long param3) {
    sub_404BCC(param0, (unsigned int)param2, param2, param3);
    return sub_404BCC(param0, param1, param2, param3);
}

long long sub_404C73(long long param0) {
    long long result = (unsigned long long)((unsigned int)((*(long long*)(param0 + 112L) - *(long long*)(param0 + 104L)) >>> 4L) - 1);
    if(((result >>> 31L) & 0x1L)) {
        result = 0x80000000L;
    }
    return result;
}

void sub_404C98(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    if((unsigned int)((*(long long*)(param0 + 112L) - *(long long*)(param0 + 104L)) >>> 4L) - 1 < 0) {
        sub_401CED(param0, "third_party/duktape/duk_api_stack.c", 647L, 0xFFFFFFFFL, param4, param5);
    }
}

void sub_404CC3() {
    // Decompilation error
}

void sub_404DC3() {
    // Decompilation error
}

void sub_404E0C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404F05(long long param0, long long param1) {
    return sub_404EC4(param0, param1, 0xFFFFFFFFL);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_405005(long long param0, long long param1, long long param2, long long param3) {
    return sub_404F0A(param0, 0xfffffffcL, param2, param3);
}

long long sub_4050B6(long long param0, long long param1, int param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v2;
    long long v4 = v1;
    long long v5 = param3;
    char* ptr0 = (char*)sub_404A12(param0, param1);
    char* ptr1 = (char*)sub_404A12(param0, (unsigned long long)param2);
    if((*ptr0 & 0x8)) {
        long long v6 = *(long long*)(ptr0 + 8L);
        *(int*)(v6 + 4L) = *(int*)(v6 + 4L) + 1;
    }
    long long v7 = *(long long*)ptr0;
    long long v8 = *(long long*)(ptr0 + 8L);
    if((*ptr1 & 0x8)) {
        long long v9 = *(long long*)(ptr1 + 8L);
        *(long long*)ptr1 = v7;
        *(long long*)(ptr1 + 8L) = v8;
        *(int*)(v9 + 4L) = *(int*)(v9 + 4L) - 1;
        if(!*(int*)(v9 + 4L)) {
            return sub_40CFCD(param0, v9, v5, v7);
        }
    }
    else {
        *(long long*)ptr1 = v7;
        *(long long*)(ptr1 + 8L) = v8;
    }
    jump *(&v0 + 5);
}

void sub_405188() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405439() {
    long long v0;
    int* result = (int*)sub_404863();
    if(!*result) {
        v0 = movlpd(v0, *(long long*)(result + 2));
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40548C(long long param0, long long param1, long long param2, long long param3, int param4) {
    long long v0;
    long long v1;
    long long v2;
    int v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    int* ptr0 = (int*)sub_404863();
    int v9 = *ptr0;
    if(!v9) {
        v4 = movlpd(v4, *(long long*)(ptr0 + 2));
        long long v10 = v0;
        long long v11 = sub_42FB3D(v5, v6, v7);
        if((unsigned int)v11) {
            v1 = movlpd(v1, v10);
            __SyntheticTypeUnknown v12 = comisd(0x0X, v2);
        }
    }
    else {
        v9 = v3;
        if(param4) {
            v9 = 0;
            sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 225L, v8 & 0xFFFFFFFFL, "number");
        }
    }
    return (unsigned long long)v9;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4054AF(long long param0, long long param1, long long param2, long long param3, int param4) {
    long long v0;
    long long v1;
    long long v2;
    int v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    int* ptr0 = (int*)sub_404863();
    int v9 = *ptr0;
    if(!v9) {
        v4 = movlpd(v4, *(long long*)(ptr0 + 2));
        long long v10 = v0;
        long long v11 = sub_42FB3D(v5, v6, v7);
        if((unsigned int)v11) {
            v1 = movlpd(v1, v10);
            __SyntheticTypeUnknown v12 = comisd(0x0X, v2);
        }
    }
    else {
        v9 = v3;
        if(param4) {
            v9 = 0;
            sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 225L, v8 & 0xFFFFFFFFL, "number");
        }
    }
    return (unsigned long long)v9;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4054BB(long long param0, long long param1, long long param2, long long param3, long long param4, int param5) {
    void* ptr0;
    long long v0 = sub_404863();
    if(*(int*)v0 != 9) {
        return sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 1824L, (long long)param5, "object");
    }
    jump *(&ptr0 + 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4054E7() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 != 5 ? 0L: *(long long*)(ptr0 + 2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_40554E(long long param0, int param1, long long* param2, long long param3, long long param4, int param5) {
    long long* result;
    long long v0;
    long long* ptr0;
    long long v1 = v0;
    if(param2) {
        *param2 = 0L;
    }
    int* ptr1 = (int*)sub_404863();
    if(*ptr1 == 10) {
        char* ptr2 = *(unsigned long long*)(ptr1 + 2);
        param4 = *(long long*)(ptr2 + 24L);
        result = (long long*)(ptr2 + 32L);
        if((*ptr2 & 0x80)) {
            result = *(unsigned long long*)(ptr2 + 32L);
        }
        goto loc_4049E8;
    }
    else if(param5) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 1924L, (long long)param1, "buffer");
        result = NULL;
    }
    else {
    loc_4049E8:
        if(ptr0) {
            *ptr0 = param4;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_40564B(long long param0, long long param1, long long* param2) {
    return sub_405573(param0, param1, param2, 0L, 0L, 0L, NULL);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405695() {
    long long result;
    long long v0;
    long long* ptr0;
    sub_40568B();
    long long v1 = 0L;
    if(v0) {
        v1 = (unsigned long long)*(int*)(v0 + 24L);
        result = v0 + 32L;
    }
    if(ptr0) {
        *ptr0 = v1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4056B9() {
    long long result;
    long long v0;
    sub_40568B();
    if(v0) {
        result = v0 + 32L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405717(long long param0, long long param1, long long param2, long long param3) {
    int* result = (int*)sub_4049F5(param0, 8L, param2, param3);
    if(result) {
        result = *result & 0x200 ? NULL: result;
    }
    return result;
}

int* sub_40573B(long long param0, long long param1, long long param2, long long param3) {
    int* result = sub_405717(param0, param1, param2, param3);
    if(result) {
        result += 8;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40578B(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = param3;
    long long v1 = sub_40574F(param0, param1, param2, param3, param4, param5);
    if(param2) {
        *(long long*)param2 = (unsigned long long)*(int*)(v1 + 24L);
    }
    return v1 + 32L;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4057BB(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    int* result = (int*)sub_4049F5(param3, 8L, param4, param5);
    if(!result || ((*result >>> 9) & 0x1)) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2121L, v0 & 0xFFFFFFFFL, "string");
        result = NULL;
    }
    return result;
}

long long* sub_4057F3(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = param3;
    int* ptr0 = sub_4057BB(param0, param1, param2, param3, param4, param5);
    if(param2) {
        *(long long*)param2 = (unsigned long long)ptr0[6];
    }
    return (long long*)(ptr0 + 8);
}

long long* sub_405814(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int* ptr0 = sub_4057BB(param0, param1, param2, param3, param4, param5);
    return (long long*)(ptr0 + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405869(long long param0, long long param1, long long param2, long long param3) {
    return sub_4049F5(param0, 10L, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405991(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    int* result = (int*)sub_4049F5(param3, 9L, param4, param5);
    if(!result || !((*result >>> 12) & 0x1)) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2232L, v0 & 0xFFFFFFFFL, "nativefunction");
        result = NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4059C9() {
    int* ptr0 = (int*)sub_404863();
    long long result = 0L;
    if(*ptr0 == 9) {
        int* ptr1 = *(unsigned long long*)(ptr0 + 2);
        if(((*ptr1 >>> 12) & 0x1)) {
            result = *(long long*)(ptr1 + 14);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405A5E() {
    char* ptr0 = (char*)sub_404863();
    return !(*ptr0 & 0x8) ? 0L: *(long long*)(ptr0 + 8L);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405AC3(long long param0, long long param1, long long param2, long long param3) {
    int v0;
    int* result = (int*)sub_4049F5(param0, 9L, param2, param3);
    if(result) {
        result = *result >>> 27 == v0 ? result: NULL;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405AEC(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int v0;
    long long v1;
    long long v2;
    int* result = (int*)sub_4049F5(param3, 9L, param4, param5);
    if(!result || *result >>> 27 != v0) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2495L, v1 & 0xFFFFFFFFL, *(long long*)((unsigned long long)*(char*)(v2 + 0x448000L) * 8L + *(long long*)(param0 + 568L)) + 32L);
        result = NULL;
    }
    return result;
}

long long sub_405B3C(long long param0, int param1) {
    return *(long long*)((param1 < 0 ? (long long)param1 * 16L + *(long long*)(param0 + 112L): (long long)param1 * 16L + *(long long*)(param0 + 104L)) + 8L);
}

long long sub_405B41(long long param0, int param1) {
    return *(long long*)((param1 < 0 ? (long long)param1 * 16L + *(long long*)(param0 + 112L): (long long)param1 * 16L + *(long long*)(param0 + 104L)) + 8L);
}

long long sub_405B50(long long param0, int param1) {
    return *(long long*)((param1 < 0 ? (long long)param1 * 16L + *(long long*)(param0 + 112L): (long long)param1 * 16L + *(long long*)(param0 + 104L)) + 8L);
}

int* sub_405B55(long long param0, long long param1) {
    long long v0;
    long long v1 = param0;
    int* result = (int*)sub_404A12(param0, param1);
    long long v2 = (unsigned long long)*result;
    long long v3 = *(long long*)(result + 2);
    *result = 2;
    v2 = (unsigned long long)((unsigned char)v2 & 0x8) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v2) {
        *(int*)(v3 + 4L) = *(int*)(v3 + 4L) - 1;
        if(!*(int*)(v3 + 4L)) {
            return (int*)sub_40CFCD(v1, v3, v2, v0);
        }
    }
    return result;
}

int* sub_405B88(long long param0, long long param1) {
    long long v0;
    long long v1 = param0;
    int* result = (int*)sub_404A12(param0, param1);
    long long v2 = (unsigned long long)*result;
    long long v3 = *(long long*)(result + 2);
    *result = 3;
    v2 = (unsigned long long)((unsigned char)v2 & 0x8) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v2) {
        *(int*)(v3 + 4L) = *(int*)(v3 + 4L) - 1;
        if(!*(int*)(v3 + 4L)) {
            return (int*)sub_40CFCD(v1, v3, v2, v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405C10(long long param0) {
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
    int* ptr0 = (int*)sub_404A12(param0, 0xFFFFFFFFL);
    long long v10 = sub_4178C9(ptr0, v3, v4, v5, v6, v7, v0, v1, v2, v8, v9);
    (v1 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v10;
    sub_40460F(param0, v3, v4, v5);
    return v1 >>> 32L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405CAB(long long param0) {
    return sub_405C43(param0, 0xFFFFFFFFL);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405CB0(long long param0, long long param1) {
    void* ptr0;
    __SyntheticTypeUnknown v0;
    long long v1;
    long long v2;
    double v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v5;
    int v8 = (unsigned int)param1;
    unsigned long long* ptr1 = &ptr0;
    int* ptr2 = (int*)sub_404863();
    long long v9 = (unsigned long long)*ptr2;
    if((unsigned int)v9 != 9) {
        if((unsigned int)v9 < 9) {
            param1 = (unsigned long long)v8;
            if((unsigned int)v9 == 6) {
                --ptr1;
                *ptr1 = &loc_405D10;
                /*BAD_CALL!*/ sub_40377C(param0, param1, 87L);
                --ptr1;
                *ptr1 = &loc_405D18;
                /*BAD_CALL!*/ sub_405CAB(param0);
                v4 = movlpd(v4, 0x43e0000000000000L);
                __SyntheticTypeUnknown v11 = comisd(v0, v3);
                --ptr1;
                *ptr1 = &loc_405D41;
                /*BAD_CALL!*/ sub_40460F(param0, v1, v2, v6);
            }
            else if((unsigned int)v9 == 8) {
                param0 = *(long long*)(ptr2 + 2);
                if(!((*(int*)param0 >>> 9) & 0x1)) {
                    return sub_40314F(param0, param1, v9, v6);
                }
            }
        }
        jump *(long long*)(ptr1 + 5);
    }
    return sub_4106A4(param0, *(long long*)(ptr2 + 2));
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405D63(long long param0) {
    return sub_405C43(param0, 0xfffffffeL);
}

long long sub_405D6D(long long param0, long long* param1, long long param2) {
    long long result = param2;
    long long* ptr0 = *(unsigned long long*)(param0 + 112L);
    *(unsigned long long*)(param0 + 112L) = ptr0 + 2;
    long long v0 = *param1;
    long long v1 = *(param1 + 1);
    *ptr0 = v0;
    *(ptr0 + 1) = v1;
    if(((unsigned char)v0 & 0x8)) {
        *(int*)(v1 + 4L) = *(int*)(v1 + 4L) + 1;
    }
    sub_405CAB(param0);
    long long v2 = *(long long*)(param0 + 112L);
    *(long long*)(param0 + 112L) = v2 - 16L;
    *(int*)(v2 - 16L) = 2;
    return result;
}

void sub_405DDC() {
    // Decompilation error
}

void sub_405E01() {
    // Decompilation error
}

long long sub_405E64(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long v4 = param3;
    sub_404A12(param0, param1);
    long long v5 = sub_417AB3();
    int* ptr0 = (int*)sub_404A12(param0, (unsigned long long)(unsigned int)param1);
    long long v6 = (unsigned long long)*ptr0;
    long long v7 = *(long long*)(ptr0 + 2);
    *ptr0 = 0;
    v6 = (unsigned long long)((unsigned char)v6 & 0x8) | ((unsigned long long)((v6 >>> 8L) & 0xffffffffffffffL) << 8);
    *(double*)(ptr0 + 2) = (double)(unsigned long long)(unsigned int)v5;
    if((unsigned char)v6) {
        *(int*)(v7 + 4L) = *(int*)(v7 + 4L) - 1;
        if(!*(int*)(v7 + 4L)) {
            sub_40CFCD(param0, v7, (unsigned long long)(unsigned int)v5, v6);
        }
    }
    return (unsigned long long)(unsigned int)v5;
}

void sub_405ECA() {
    // Decompilation error
}

long long sub_405FB5(long long par0, long long par1, long long par2, long long par3, long long par4) {
    // Decompilation error
}

long long sub_406077(long long param0, long long param1, long long param2, long long param3) {
    char v0;
    return sub_405FB5(param0, param1, param2, param3, (long long)&v0);
}

long long sub_40608A(long long param0, long long param1, long long param2, long long param3) {
    return sub_405FB5(param0, param1, param2, param3, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40609C() {
    int* ptr0 = (int*)sub_404863();
    return (unsigned long long)*(unsigned int*)((unsigned long long)*ptr0 * 4L + (long long)&gvar_43C3C0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_4060B0() {
    return (int*)sub_404863();
}

long long sub_4060E2(long long param0, long long param1, int param2) {
    long long v0 = sub_40609C();
    return (unsigned int)v0 == param2 ? 1L: 0L;
}

long long sub_4060F9(int* param0) {
    return (unsigned long long)*(unsigned int*)((unsigned long long)*param0 * 4L + (long long)&gvar_43C380);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406103(long long param0, long long param1) {
    long long v0 = sub_404863(param0, param1);
    return (unsigned long long)*(unsigned int*)((unsigned long long)*(int*)v0 * 4L + (long long)&gvar_43C380);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406117(long long param0, long long param1, long long param2, long long param3, int param4) {
    int v0;
    long long v1 = sub_406103(param0, param1);
    long long result = 1L;
    if(!((unsigned int)v1 & param4)) {
        result = (unsigned long long)(v0 & 0x400);
        if((v0 & 0x400)) {
            sub_401C42(param0, "third_party/duktape/duk_api_stack.c", 100667231L, "unexpected type");
            result = 0L;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406152(long long param0, long long param1, int param2, long long param3, long long param4) {
    long long result;
    void* ptr0;
    long long v0;
    void* ptr1 = ptr0;
    int v1 = (unsigned int)param1;
    long long v2 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v2) {
        return (unsigned long long)param2;
    }
    int* ptr2 = (int*)sub_404863();
    if(*ptr2 == 4) {
        result = (unsigned long long)*(ptr2 + 2);
    }
    else {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 1530L, v0 & 0xFFFFFFFFL, "boolean");
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4061C8(long long param0, long long param1, int param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    int v5;
    long long v6;
    long long v7;
    long long v8;
    __SyntheticTypeUnknown v9;
    long long v10;
    long long v11 = v7;
    int v12 = (unsigned int)param1;
    void* ptr0 = (void*)param0;
    long long v13 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v13) {
        return (unsigned long long)param2;
    }
    int* ptr1 = (int*)sub_404863();
    if(!*ptr1) {
        v6 = movlpd(v6, *(long long*)(ptr1 + 2));
        v11 = v1;
        long long v14 = sub_42FB3D(param3, v8, param4);
        v0 = v14 & 0xFFFFFFFFL;
        if((unsigned int)v14) {
            v2 = movlpd(v2, 0xc1e0000000000000L);
            v0 = 0x80000000L;
            v3 = movlpd(v3, v11);
            __SyntheticTypeUnknown v15 = comisd(v9, v4);
        }
    }
    else if(v5) {
        sub_401C60((long long)ptr0, "third_party/duktape/duk_api_stack.c", 174L, v10 & 0xFFFFFFFFL, "number");
        v0 = 0L;
    }
    return v0 & 0xFFFFFFFFL;
}

long long sub_406208(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    int v2 = (unsigned int)param1;
    long long v3 = sub_406117(param0, param1, 3L, param3, param4);
    if(!(unsigned int)v3) {
        return sub_4054AF(param0, (long long)(unsigned int)param1, v1, param3, param4);
    }
    jump *(&v0 + 5);
}

long long sub_406248(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    long long result = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)result) {
        if(v0) {
            *(long long*)v0 = param4;
        }
        return result;
    }
    return sub_40578B(param0, (long long)(unsigned int)param1, v0, param3, param4, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4062A5(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long result;
    long long v0;
    long long v1 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v1) {
        return result;
    }
    long long v2 = sub_40574F(param0, (long long)(unsigned int)param1, result, param3, param4, v0);
    return v2 + 32L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4062E5(long long param0, long long param1, long long param2, long long param3, long long param4, int param5) {
    long long result1;
    void* ptr0;
    long long result;
    void* ptr1 = ptr0;
    int v0 = (unsigned int)param1;
    long long v1 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v1) {
        return result;
    }
    int* ptr2 = (int*)sub_404863();
    if(*ptr2 != 5) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 1876L, (long long)param5, "pointer");
        result1 = 0L;
    }
    else {
        result1 = *(long long*)(ptr2 + 2);
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406325(long long param0, long long param1, long long* param2, long long param3, long long param4) {
    long long* ptr0;
    long long v0;
    long long result = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)result) {
        if(ptr0) {
            ptr0[0] = param4;
        }
        return result;
    }
    long long* ptr1 = sub_405563(param0, (long long)(unsigned int)param1, ptr0, param3, param4, v0);
    return (long long)ptr1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406382(long long param0, long long param1, long long* param2, long long param3, long long param4) {
    long long* ptr0;
    long long result = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)result) {
        if(ptr0) {
            ptr0[0] = param4;
        }
        return result;
    }
    long long* ptr1 = sub_405672(param0, (long long)(unsigned int)param1, ptr0);
    return (long long)ptr1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4063DF(long long param0, long long param1, long long param2, long long param3, long long param4, int param5) {
    long long result1;
    long long result;
    long long v0 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v0) {
        return result;
    }
    long long v1 = sub_4059C9();
    if(!v1) {
        result1 = sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2291L, (long long)param5, "nativefunction");
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_40641F(long long param0, long long param1, int* param2, long long param3, long long param4) {
    int* result;
    long long v0;
    long long v1;
    int v2 = (unsigned int)param1;
    long long v3 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v3) {
        return result;
    }
    int* result1 = (int*)sub_4049F5(param3, 9L, param4, v0);
    if(!result1 || *result1 >>> 27 != 18) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 0x886L, v1 & 0xFFFFFFFFL, "thread");
        result1 = NULL;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40645F(long long param0, long long param1, long long param2, long long param3, long long param4, int param5) {
    long long result1;
    void* ptr0;
    long long result;
    void* ptr1 = ptr0;
    int v0 = (unsigned int)param1;
    long long v1 = sub_406117(param0, param1, 3L, param3, param4);
    if((unsigned int)v1) {
        return result;
    }
    char* ptr2 = (char*)sub_404863();
    if(!(*ptr2 & 0x8)) {
        sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2400L, (long long)param5, &gvar_43C142);
        result1 = 0L;
    }
    else {
        result1 = *(long long*)(ptr2 + 8L);
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40649F(long long param0, long long param1) {
    long long v0 = sub_404863(param0, param1);
    return *(int*)v0 == 2 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064B3() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 3 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064C7() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 4 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064DB() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064EF() {
    double v0;
    long long v1;
    int* ptr0 = (int*)sub_404863();
    long long v2 = 0L;
    if(!*ptr0) {
        v1 = movlpd(v1, *(long long*)(ptr0 + 2));
        v2 = v0 == v0 ? 0: v0 > v0 ? 0: v0 >= v0 ? 1L: 0L;
    }
    return v2 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406515(long long param0, long long param1) {
    long long v0 = sub_404863(param0, param1);
    return *(int*)v0 == 8 ? 1L: 0L;
}

long long sub_406529(long long param0, long long param1, long long param2, long long param3) {
    int* ptr0 = sub_405717(param0, param1, param2, param3);
    return ptr0 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40653D() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 9 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406551() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 10 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406565() {
    int* ptr0 = (int*)sub_404863();
    int v0 = *ptr0;
    return v0 == 10 ? 1L: v0 != 9 ? 0L: (unsigned long long)((**(unsigned long long*)(ptr0 + 2) >>> 13) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406592() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 5 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4065A6() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 == 6 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4065D7(long long param0, long long param1) {
    int* ptr0 = (int*)sub_40483D(param0, param1);
    if(ptr0) {
        return sub_417FDB(ptr0);
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406646(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = sub_40377C(param0, param1, param2);
    if((unsigned int)v4) {
        long long v5 = sub_4065F2(param0, 0xFFFFFFFFL);
        if(!(unsigned int)v5) {
            sub_40460F(param0, param1, param2, v1);
            return 0L;
        }
        sub_404F0A(param0, (unsigned long long)(unsigned int)param1);
        sub_41DA64(param0);
        long long v6 = sub_406117(param0, 0xFFFFFFFFL, 318L, v1, v2);
        if(!(unsigned int)v6) {
            sub_40460F(param0, param1, param2, v1);
            return 0L;
        }
        sub_405057(param0, (unsigned long long)(unsigned int)param1, param2, v1);
        result = 1L;
    }
    else {
        sub_40460F(param0, param1, param2, v1);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4066D3() {
    int* ptr0 = (int*)sub_404863();
    int v0 = *ptr0;
    return v0 == 9 ? (unsigned long long)((unsigned int)((unsigned long long)**(unsigned long long*)(ptr0 + 2) >>> 8L) & 0x1): v0 == 6 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4066FC() {
    int* ptr0;
    sub_405823();
    return !ptr0 ? 0L: (unsigned long long)((*ptr0 >>> 12) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406719() {
    int* ptr0;
    sub_405823();
    return !ptr0 ? 0L: (unsigned long long)((*ptr0 >>> 11) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406736() {
    int* ptr0;
    sub_405823();
    return !ptr0 ? 0L: (unsigned long long)((*ptr0 >>> 10) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406753() {
    int* ptr0;
    sub_405823();
    return (!ptr0 ? 0L: *ptr0 >>> 27 == 18 ? 1L: 0L) & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406778() {
    int* ptr0 = (int*)sub_404863();
    return *ptr0 != 10 ? 0L: (unsigned long long)(((**(unsigned long long*)(ptr0 + 2) >>> 7) ^ 0x1) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40679C() {
    int* ptr0 = (int*)sub_404863();
    return (*ptr0 != 10 ? 0L: (**(unsigned long long*)(ptr0 + 2) & 0x180) - 128 ? 0L: 1L) & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4067C7() {
    int* ptr0 = (int*)sub_404863();
    return (*ptr0 != 10 ? 0L: (**(unsigned long long*)(ptr0 + 2) & 0x180) == 384 ? 1L: 0L) & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4067F4(long long param0) {
    long long result;
    long long v0;
    sub_405823();
    int v1 = 10000;
    while(v0) {
        if(*(long long*)(param0 + 336L) == v0) {
            result = 2L;
        }
        else if(*(long long*)(param0 + 352L) == v0) {
            result = 3L;
        }
        else if(*(long long*)(param0 + 368L) == v0) {
            result = 4L;
        }
        else if(*(long long*)(param0 + 384L) == v0) {
            result = 5L;
        }
        else if(*(long long*)(param0 + 400L) == v0) {
            result = 6L;
        }
        else if(*(long long*)(param0 + 416L) == v0) {
            result = 7L;
        }
        else if(*(long long*)(param0 + 320L) != v0) {
            --v1;
            v0 = *(long long*)(v0 + 32L);
            if(v1) {
                continue;
            }
            else {
                break;
            }
        }
        else {
            result = 1L;
        }
        return result;
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4068FC(long long param0, long long param1, long long param2) {
    int v0 = (unsigned int)param1;
    long long v1 = param0;
    sub_4068D1(param0, param1, param2);
    return sub_40500F(v1, (long long)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406955(long long param0, int param1) {
    long long v0;
    long long v1;
    char v2 = *(unsigned long long*)(param0 + 112L) < *(unsigned long long*)(param0 + 88L);
    long long v3 = v0;
    long long v4 = v1;
    if(!v2) {
        sub_401D02(param0, "third_party/duktape/duk_api_stack.c", 4296L);
    }
    int* result = *(unsigned long long*)(param0 + 112L);
    *(unsigned long long*)(param0 + 112L) = (long long*)(result + 4);
    *result = 4;
    *(result + 2) = param1 ? 1: 0;
    return result;
}

void sub_406AF7() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406C45(long long param0, long long param1, int param2, long long param3, long long param4, long long param5) {
    short* ptr0;
    long long v0;
    char v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    short* ptr1 = &v1;
    long long v7 = v5;
    long long v8 = v3;
    long long v9 = 0L;
    long long v10 = v6;
    long long v11 = v4;
    long long v12 = (unsigned long long)*(int*)(param1 + 24L);
    unsigned long long v13 = (unsigned long long)(param1 + 32L);
    char v14 = 39;
    long long v15 = (unsigned long long)param2;
    unsigned long long v16 = (unsigned long long)(v12 + param1 + 32L);
    while(v16 > v13) {
        if(v9 == v15) {
            *ptr1 = 0x2e2e;
            *(char*)(ptr1 + 1) = 46;
            ptr1 = (short*)((char*)ptr1 + 3L);
            break;
        }
        else {
            long long v17 = sub_41C7A1(param0, (long long)&v13, (long long)(unsigned long long)(param1 + 32L), (long long)v16, (long long)&v2, param5);
            if((unsigned int)v17) {
                long long v18 = (unsigned long long)(v2 == 127 ? 1: 0) | ((unsigned long long)((v18 >>> 8L) & 0xffffffffffffffL) << 8);
                long long v19 = (unsigned long long)((unsigned int)((unsigned long long)(v2 <= 31 ? 1: 0) | ((unsigned long long)((v17 >>> 8L) & 0xffffffffffffffL) << 8)) | (unsigned int)v18);
                v18 = (unsigned long long)(v2 == 39 ? 1: 0) | ((unsigned long long)((v18 >>> 8L) & 0xffffffffffffffL) << 8);
                if(((unsigned char)v19 | (unsigned char)v18) || v2 == 92) {
                    *ptr1 = 30812;
                    v18 = (unsigned long long)a0123456789abcde2[(unsigned long long)(v2 & 0xF)] | ((unsigned long long)((v18 >>> 8L) & 0xffffffffffffffL) << 8);
                    long long v20 = (unsigned long long)a0123456789abcde2[(unsigned long long)(v2 >>> 4)] | ((unsigned long long)(((unsigned long long)(v2 >>> 4) >>> 8L) & 0xffffffffffffffL) << 8);
                    *(char*)((char*)ptr1 + 3L) = (unsigned char)v18;
                    *(char*)(ptr1 + 1) = (unsigned char)v20;
                    ptr0 = ptr1 + 2;
                }
                else {
                    long long v21 = sub_41C531((unsigned long long)v2, (long long)ptr1);
                    ptr0 = (short*)((long long)(unsigned int)v21 + (long long)ptr1);
                }
            }
            else {
                ++v13;
                ptr0 = (short*)((char*)ptr1 + 1L);
                *(char*)ptr1 = 63;
            }
            ++v9;
            ptr1 = ptr0;
        }
    }
    *(char*)ptr1 = 39;
    return sub_406B69(param0, &v14, (unsigned long long)((long long)(long long*)(ptr1 + 367) - (long long)&v0), param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406EBC(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = sub_40480A(param0, param1);
    unsigned long long* ptr0 = &v0;
    long long v6 = sub_406117(param0, v5 & 0xFFFFFFFFL, 704L, v2, v3);
    if((unsigned int)v6) {
        while(1) {
            --ptr0;
            *ptr0 = &loc_406E93;
            v6 = /*BAD_CALL!*/ sub_406646(param0, (long long)(unsigned int)v5, param2 - 1 ? 40L: 82L);
            if((unsigned int)v6) {
                break;
            }
            else {
                --ptr0;
                *ptr0 = &loc_406EA5;
                v6 = /*BAD_CALL!*/ sub_406646(param0, (long long)(unsigned int)v5, (param2 - 1 ? 82L: 40L) & 0xFFFFFFFFL);
                if((unsigned int)v6) {
                    break;
                }
                else {
                    ptr0 += 5;
                    /*BAD_CALL!*/ sub_401C42(param0, "third_party/duktape/duk_api_stack.c", 100666068L, "coercion to primitive failed");
                }
            }
        }
    }
    jump *(long long*)(ptr0 + 5);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406F18(long long param0, long long param1) {
    long long v0;
    long long v1;
    char v2 = *(unsigned long long*)(param0 + 112L) < *(unsigned long long*)(param0 + 88L);
    long long v3 = v0;
    long long v4 = v1;
    if(!v2) {
        sub_401D02(param0, "third_party/duktape/duk_api_stack.c", 0x1189L);
    }
    int* result = *(unsigned long long*)(param0 + 112L);
    *(unsigned long long*)(param0 + 112L) = (long long*)(result + 4);
    *result = 5;
    *(long long*)(result + 2) = param1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406F59(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1 = param3;
    long long v2 = /*BAD_CALL!*/ sub_40480A(param0, param1);
    int* ptr0 = (int*)((long long)(unsigned int)v2 * 16L + *(long long*)(param0 + 104L));
    int v3 = *ptr0;
    if(v3 != 5) {
        result = 0L;
        if((unsigned int)(v3 - 8) <= 2) {
            result = *(long long*)(ptr0 + 2);
            sub_406F18(param0, result);
            sub_405057(param0, (long long)(unsigned int)v2, v0, param3);
            return result;
        }
    }
    else {
        result = *(long long*)(ptr0 + 2);
    }
    sub_406F18(param0, result);
    sub_405057(param0, (long long)(unsigned int)v2, v0, param3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406FB9(long long param0) {
    return sub_40469E(param0, 1L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_407108(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_40D662(param0, 0x1040c080L, param2, param3);
    int* ptr0 = *(unsigned long long*)(param0 + 112L);
    *(long long*)(ptr0 + 2) = v2;
    *ptr0 = 9;
    *(int*)(v2 + 4L) = *(int*)(v2 + 4L) + 1;
    long long* ptr1 = (long long*)((long long)ptr0 - *(long long*)(param0 + 104L));
    *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
    return (long long*)((long long)ptr1 >> 4);
}

void sub_40715D() {
    // Decompilation error
}

void sub_407199() {
    // Decompilation error
}

void sub_4071BC() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407292(long long param0, long long param1, long long param2, long long param3) {
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        sub_401D02(param3, 5002L);
    }
    long long result = sub_40D558(param0, 0x18000a80L, param2, param3);
    if(!result) {
        sub_401CC7(param3, 5015L);
    }
    else {
        int* ptr0 = *(unsigned long long*)(param0 + 112L);
        *ptr0 = 9;
        *(long long*)(ptr0 + 2) = result;
        *(int*)(result + 4L) = *(int*)(result + 4L) + 1;
        *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
        long long v0 = *(long long*)(param0 + 200L);
        *(long long*)(result + 32L) = *(long long*)(param0 + 200L);
        if(v0) {
            *(int*)(v0 + 4L) = *(int*)(v0 + 4L) + 1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407318(long long param0, long long param1, long long param2, long long param3) {
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        sub_401D02(param3, 5039L);
    }
    long long result = sub_40D56C(*(long long*)(param0 + 64L), 0x18000780L, param2, param3);
    if(!result) {
        sub_401CC7(param3, 5047L);
    }
    else {
        int* ptr0 = *(unsigned long long*)(param0 + 112L);
        *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
        *ptr0 = 9;
        *(long long*)(ptr0 + 2) = result;
        *(int*)(result + 4L) = *(int*)(result + 4L) + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40738C(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, param2, 403133312L, 6L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40739C(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, param2, 403133312L, 5L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4073AC(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, param2, 403133056L, 5L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_4073BC(long long param0, long long param1, unsigned int param2, long long param3, int param4) {
    long long* result;
    long long v0;
    long long v1;
    long long v2;
    unsigned int v3 = (unsigned int)param3;
    long long v4 = v2;
    unsigned int v5 = param2;
    long long v6 = v1;
    long long v7 = param1;
    long long v8 = v0;
    long long v9 = (unsigned long long)param4;
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        long long v10 = param0;
        sub_401D02(param3, 0x1434L);
        param0 = v10;
    }
    if(v5 <= 14) {
    loc_40740D:
        if(v3 <= 15 && (unsigned int)((unsigned int)v9 + 128) <= 0xff) {
            int* ptr0 = *(unsigned long long*)(param0 + 112L);
            *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
            *ptr0 = 6;
            *(long long*)(ptr0 + 2) = v7;
            *(ptr0 + 1) = (v3 * 16) | (unsigned int)(((unsigned int)0 | ((unsigned int)(v9 & 0xffffffL) << 8)) & 0xFFFF) | v5;
            result = (long long*)((long long)(long long*)((long long)ptr0 - *(long long*)(param0 + 104L)) >> 4);
        }
        else {
        loc_407459:
            sub_401D12(param3, 0x144cL);
            result = NULL;
        }
    }
    else if(v5 + 1) {
        goto loc_407459;
    }
    else {
        v5 = 15;
        goto loc_40740D;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4076DF(long long param0, unsigned long long param1, long long param2, long long param3) {
    return sub_40762B(param0, param1, 4L, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4076E9(long long param0, unsigned long long param1, long long param2, long long param3) {
    return sub_40762B(param0, param1, 0L, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4076F0(long long param0, long long param1) {
    long long v0;
    long long v1 = v0;
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        sub_401D02(param0, "third_party/duktape/duk_api_stack.c", 5719L);
    }
    int* ptr0 = *(unsigned long long*)(param0 + 112L);
    long long* ptr1 = (long long*)((long long)ptr0 - *(long long*)(param0 + 104L));
    *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
    if(param1) {
        int v2 = *(int*)param1;
        if(((unsigned char)v2 & 0x10)) {
            *(int*)(param1 + 4L) = *(int*)(param1 + 4L) - 1;
            long long v3 = *(long long*)(param0 + 64L);
            *(int*)param1 = v2 & 0xffffffcf;
            sub_40CA34(v3, param1);
            sub_40C9D7(*(long long*)(param0 + 64L), param1);
        }
        int v4 = *(int*)param1 & 0x3;
        *ptr0 = v4 != 0 ? !(v4 - 1) ? 9: 10: 8;
        *(long long*)(ptr0 + 2) = param1;
        *(int*)(param1 + 4L) = *(int*)(param1 + 4L) + 1;
    }
    return (long long)(long long*)((long long)(long long*)((long long)ptr1 >> 4) & 0xFFFFFFFFL);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40779C(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = param0;
    sub_407003(param0, 134234240L, 0xFFFFFFFFL, param3);
    return (unsigned long long)((unsigned int)((*(long long*)(v0 + 112L) - *(long long*)(v0 + 104L)) >>> 4L) - 1);
}

void sub_407835() {
    // Decompilation error
}

void sub_4078DA() {
    // Decompilation error
}

void sub_407973() {
    // Decompilation error
}

void sub_407B29() {
    // Decompilation error
}

void sub_407BD4() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407C63(long long param0, long long param1, long long param2) {
    long long v0 = *(long long*)(*(long long*)(param0 + 64L) + 184L);
    return v0 ? (long long)sub_407C45(param0, v0): sub_4068D1(param0, 0L, param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407C7A(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = *(long long*)(param0 + 64L);
    long long v4 = param0;
    sub_407C45(param0, *(long long*)(v3 + 192L));
    long long v5 = sub_403883(v4, 0xffff006aL);
    if(!(unsigned int)v5) {
        sub_40460F(v4, v0, v1, v2);
        sub_40779C(v4, v0, v1, v2);
        sub_404F67(v4, v0, v1, v2);
        sub_403E13(v4, 4244662788L);
    }
    sub_405181();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407CB4(long long param0, long long param1) {
    long long result;
    long long v0;
    long long v1;
    sub_407C45(param0, param1);
    long long v2 = sub_403883(param0, 0xffff006aL);
    if(!(unsigned int)v2) {
        sub_40460F(param0, param1, v0, v1);
        sub_40779C(param0, param1, v0, v1);
        sub_404F67(param0, param1, v0, v1);
        sub_403E13(param0, 4244662788L);
    }
    sub_405181();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_407CED() {
}

void sub_407CFD() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407D01(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    sub_407CFD(param0);
    long long v3 = sub_403883(param0, 0xffff006aL);
    if(!(unsigned int)v3) {
        sub_40460F(param0, v0, v1, v2);
        sub_40779C(param0, v0, v1, v2);
        sub_404F67(param0, v0, v1, v2);
        sub_403E13(param0, 4244662788L);
    }
    sub_405181();
    return result;
}

long long sub_407D1C(long long param0, unsigned int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    while((unsigned int)((*(long long*)(param0 + 112L) - *(long long*)(param0 + 104L)) >>> 4L) >= param1) {
        unsigned long long* ptr0 = ptr0 - 1;
        *ptr0 = v1;
        unsigned long long* ptr1 = ptr0;
        --ptr0;
        *ptr0 = v0;
        --ptr0;
        *ptr0 = v2;
        --ptr0;
        *ptr0 = v3;
        --ptr0;
        *ptr0 = v4;
        ptr0 -= 2;
        int* ptr2 = *(unsigned long long*)(param0 + 112L);
        int* ptr3 = *(unsigned long long*)(param0 + 112L);
        long long* ptr4 = (long long*)((long long)ptr2 - (long long)param1 * 16L);
        while(ptr3 != ptr4) {
            long long v5 = (unsigned long long)*(ptr3 - 4);
            ptr3 -= 4;
            long long v6 = *(long long*)(ptr3 + 2);
            *ptr3 = 2;
            if(((unsigned char)v5 & 0x8)) {
                *(int*)(v6 + 4L) = *(int*)(v6 + 4L) - 1;
                if(!*(int*)(v6 + 4L)) {
                    *(long long*)(ptr1 - 5) = param0;
                    --ptr0;
                    *ptr0 = &loc_4045EB;
                    /*BAD_CALL!*/ sub_40CFD5(param0, v6, param2, param3);
                    param0 = *(long long*)(ptr1 - 5);
                }
            }
        }
        *(unsigned long long*)(param0 + 112L) = (long long*)((unsigned long long)((long long)param1 & 0xfffffffffffffffL) * -16L + (long long)ptr2);
        ptr0 += 7;
        /*BAD_CALL!*/ →sub_40CA54(param0);
    }
    /*BAD_CALL!*/ sub_401CE2("invalid count", 5897L);
}

long long sub_407D45(long long param0, int param1, long long param2, long long param3) {
    int* ptr0 = *(unsigned long long*)(param0 + 112L);
    int* ptr1 = *(unsigned long long*)(param0 + 112L);
    long long* ptr2 = (long long*)((long long)ptr0 - (long long)param1 * 16L);
    while(ptr1 != ptr2) {
        long long v0 = (unsigned long long)*(ptr1 - 4);
        ptr1 -= 4;
        long long v1 = *(long long*)(ptr1 + 2);
        *ptr1 = 2;
        if(((unsigned char)v0 & 0x8)) {
            *(int*)(v1 + 4L) = *(int*)(v1 + 4L) - 1;
            if(!*(int*)(v1 + 4L)) {
                long long v2 = param0;
                sub_40CFD5(param0, v1, param2, param3);
                param0 = v2;
            }
        }
    }
    *(unsigned long long*)(param0 + 112L) = (long long*)((unsigned long long)((long long)param1 & 0xfffffffffffffffL) * -16L + (long long)ptr0);
    return →sub_40CA54(param0);
}

long long sub_407DA6(long long param0) {
    long long result = *(long long*)(param0 + 112L);
    *(long long*)(param0 + 112L) = result - 16L;
    *(int*)(result - 16L) = 2;
    return result;
}

long long sub_407DC0(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    if((unsigned long long)(*(long long*)(param0 + 112L) - 32L) < *(unsigned long long*)(param0 + 104L)) {
        sub_401CE2("invalid count", 6074L);
        return result;
    }
    long long v0 = *(long long*)(param0 + 112L);
    long long v1 = *(long long*)(v0 - 8L);
    *(long long*)(param0 + 112L) = v0 - 16L;
    long long v2 = (unsigned long long)*(int*)(v0 - 16L);
    *(int*)(v0 - 16L) = 2;
    v2 = (unsigned long long)((unsigned char)v2 & 0x8) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v2) {
        *(int*)(v1 + 4L) = *(int*)(v1 + 4L) - 1;
        if(!*(int*)(v1 + 4L)) {
            long long v3 = param0;
            sub_40CFCD(param0, v1, v2, param3);
            param0 = v3;
        }
    }
    long long result1 = *(long long*)(param0 + 112L);
    long long v4 = *(long long*)(result1 - 8L);
    *(long long*)(param0 + 112L) = result1 - 16L;
    long long v5 = (unsigned long long)*(int*)(result1 - 16L);
    *(int*)(result1 - 16L) = 2;
    v5 = (unsigned long long)((unsigned char)v5 & 0x8) | ((unsigned long long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v5) {
        *(int*)(v4 + 4L) = *(int*)(v4 + 4L) - 1;
        if(!*(int*)(v4 + 4L)) {
            return sub_40CFCD(param0, v4, v5, param3);
        }
    }
    return result1;
}

long long sub_407DE7(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = *(long long*)(param0 + 112L);
    long long v1 = *(long long*)(v0 - 8L);
    *(long long*)(param0 + 112L) = v0 - 16L;
    long long v2 = (unsigned long long)*(int*)(v0 - 16L);
    *(int*)(v0 - 16L) = 2;
    v2 = (unsigned long long)((unsigned char)v2 & 0x8) | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v2) {
        *(int*)(v1 + 4L) = *(int*)(v1 + 4L) - 1;
        if(!*(int*)(v1 + 4L)) {
            long long v3 = param0;
            sub_40CFCD(param0, v1, v2, param3);
            param0 = v3;
        }
    }
    long long result = *(long long*)(param0 + 112L);
    long long v4 = *(long long*)(result - 8L);
    *(long long*)(param0 + 112L) = result - 16L;
    long long v5 = (unsigned long long)*(int*)(result - 16L);
    *(int*)(result - 16L) = 2;
    v5 = (unsigned long long)((unsigned char)v5 & 0x8) | ((unsigned long long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v5) {
        *(int*)(v4 + 4L) = *(int*)(v4 + 4L) - 1;
        if(!*(int*)(v4 + 4L)) {
            return sub_40CFCD(param0, v4, v5, param3);
        }
    }
    return result;
}

void sub_407DF2() {
    // Decompilation error
}

long long sub_407DFC(long long param0, long long param1, long long param2, long long param3) {
    int* ptr0 = *(unsigned long long*)(param0 + 112L);
    int* ptr1 = *(unsigned long long*)(param0 + 112L);
    while((long long*)(ptr0 - 12) != ptr1) {
        long long v0 = (unsigned long long)*(ptr1 - 4);
        ptr1 -= 4;
        long long v1 = *(long long*)(ptr1 + 2);
        *ptr1 = 2;
        if(((unsigned char)v0 & 0x8)) {
            *(int*)(v1 + 4L) = *(int*)(v1 + 4L) - 1;
            if(!*(int*)(v1 + 4L)) {
                long long v2 = param0;
                sub_40CFD5(param0, v1, param2, param3);
                param0 = v2;
            }
        }
    }
    *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 - 12);
    return →sub_40CA54(param0);
}

void sub_407E10() {
    // Decompilation error
}

long long sub_407E9B(long long param0, long long param1, long long param2, long long param3) {
    int v0;
    unsigned int v1;
    int v2;
    long long v3;
    long long v4;
    unsigned int v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = (unsigned long long)v5 | ((unsigned long long)v2 << 32);
    long long v10 = v6;
    long long v11 = v7;
    long long v12 = v8;
    long long v13 = v4;
    long long v14 = param3;
    int* ptr0 = (int*)sub_404A12(param0, param1);
    int v15 = *ptr0;
    if(v15 == 9) {
        int* ptr1 = *(unsigned long long*)(ptr0 + 2);
        if(((*ptr1 >>> 22) & 0x1)) {
            v5 = *(unsigned int*)(ptr1 + 14);
            if(*(unsigned int*)(ptr1 + 12) < v5) {
                goto loc_407F64;
            }
            else if(v5 >= 0x80000000) {
            loc_407FEA:
                v1 = 0;
                sub_401CE2("invalid length", 0x1882L);
            }
            else {
                sub_404E3A(param0, (unsigned long long)v5);
                v1 = *(unsigned int*)(ptr1 + 14);
                if(v1 != v5 || *(unsigned int*)(ptr1 + 12) < v1) {
                    goto loc_407F64;
                }
                else {
                    long long v16 = *(long long*)(param0 + 112L);
                    long long v17 = (unsigned long long)*(ptr1 + 10) * 25L + (unsigned long long)((0 - *(ptr1 + 10)) & 0x7) + *(long long*)(ptr1 + 6);
                    for(long long i = 0L; i != (unsigned long long)v1 * 16L; i += 16L) {
                        if(*(int*)(i + v17) != 7) {
                            long long v18 = *(long long*)(i + v17);
                            long long v19 = *(long long*)(i + v17 + 8L);
                            *(long long*)(i + v16) = v18;
                            *(long long*)(i + v16 + 8L) = v19;
                            if(((unsigned char)v18 & 0x8)) {
                                *(int*)(v19 + 4L) = *(int*)(v19 + 4L) + 1;
                            }
                        }
                    }
                    *(long long*)(param0 + 112L) = (unsigned long long)v1 * 16L + v16;
                }
            }
        }
        else {
        loc_407F64:
            long long v20 = sub_4047ED(param0, (unsigned int)param1);
            sub_40377C(param0, v20 & 0xFFFFFFFFL, 87L);
            long long v21 = /*BAD_CALL!*/ sub_405E64(param0, 0xFFFFFFFFL, v3, param3);
            v1 = (unsigned int)v21;
            if((unsigned int)v21 >= 0x80000000) {
                goto loc_407FEA;
            }
            else {
                v0 = 0;
                sub_40460F(param0);
                sub_404E3A(param0, (unsigned long long)(unsigned int)v21);
            }
            while((unsigned int)v21 != v0) {
                long long v22 = (unsigned long long)v0;
                ++v0;
                sub_40370E(param0, (unsigned long long)(unsigned int)v20, v22);
            }
        }
    }
    else {
        v1 = 0;
        if((unsigned int)(v15 - 2) > 1) {
            sub_401D12(param3, 6270L);
        }
    }
    return (unsigned long long)v1;
}

void sub_408001() {
    // Decompilation error
}

void sub_408064() {
    // Decompilation error
}

void sub_40807C() {
    // Decompilation error
}

void sub_408133() {
    // Decompilation error
}

void sub_4081A3() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408432(long long param0, long long param1, long long param2, long long param3, long long param4) {
    void* ptr0;
    long long v0;
    int v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = param4;
    unsigned long long* ptr1 = &ptr0;
    sub_405823();
    if(!v0) {
        ptr1 = &ptr0;
        long long v8 = sub_406103(param0, v3 & 0xFFFFFFFFL);
        if(((unsigned int)v8 & v2)) {
            if(((v4 >>> 11L) & 0x1L)) {
                return sub_408411(param0, (long long)v1, v5, v7, param4, v6);
            }
        }
        else if(((v4 >>> 10L) & 0x1L)) {
            --ptr1;
            *ptr1 = &loc_408489;
            /*BAD_CALL!*/ sub_401C60(param0, "third_party/duktape/duk_api_stack.c", 2434L, v3 & 0xFFFFFFFFL, "object");
        }
    }
    jump *(long long*)(ptr1 + 3);
}

long long sub_408491(long long param0, long long param1, long long param2, long long param3, long long param4) {
    return sub_408432(param0, param1, (unsigned long long)(unsigned char)param2 | ((unsigned long long)((unsigned char)(param2 >>> 8L) | 0x8) << 8) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16), param3, param4);
}

long long sub_408496(long long param0, long long param1, long long param2, long long param3, long long param4) {
    return sub_408432(param0, param1, (unsigned long long)(unsigned char)param2 | ((unsigned long long)((unsigned char)(param2 >>> 8L) | 0xc) << 8) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16), param3, param4);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40849B(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long result;
    long long v0;
    long long v1 = v0;
    long long v2 = param3;
    long long v3 = sub_408432(param0, 0xfffffffeL, 3712L, param3, param4);
    if(!((*(int*)v3 >>> 25) & 0x1)) {
        long long v4 = sub_408432(param0, 0xFFFFFFFFL, 3712L, param3, param4);
        if((*(int*)v4 >>> 25) & 0x1) {
            sub_401D12(param3, 5592L);
            return 0L;
        }
        int v5 = *(int*)v3 & 0x300;
        long long v6 = sub_40D680(param0, !((*(int*)v3 >>> 9) & 0x1) ? (long long)(v5 | 0xa000080): (long long)(v5 | 0x1e000080), (long long)*(int*)v3, param3);
        long long v7 = *(long long*)(param0 + 112L);
        *(long long*)(v6 + 56L) = v3;
        *(long long*)(v6 + 64L) = v4;
        *(long long*)(v7 - 24L) = v6;
        *(int*)(v7 - 32L) = 9;
        *(int*)(v6 + 4L) = *(int*)(v6 + 4L) + 1;
        *(int*)(v7 - 16L) = 2;
        *(long long*)(param0 + 112L) = v7 - 16L;
        result = (unsigned long long)((unsigned int)((v7 - 16L - *(long long*)(param0 + 104L)) >>> 4L) - 1);
    }
    else {
        sub_401D12(param3, 5592L);
        result = 0L;
    }
    return result;
}

long long sub_408553(long long param0, long long param1, long long param2, long long param3, long long param4) {
    return sub_408432(param0, param1, (unsigned long long)(unsigned char)param2 | ((unsigned long long)((unsigned char)(param2 >>> 8L) | 0x4) << 8) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16), param3, param4);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4085AE(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v2;
    long long v9 = v3;
    __SyntheticTypeUnknown v10 = *(__SyntheticTypeUnknownP128)param1;
    sub_406EC3(param0, "[object ", 8L);
    if((unsigned int)v10 != 3) {
        if((unsigned int)v10 == 7 || (unsigned int)v10 == 2) {
            v1 = 0L;
        }
        else {
            sub_406883(param0, (long long)&v10);
            long long v11 = sub_408411(param0, 0xFFFFFFFFL, v4, v5, v6, v7);
            long long v12 = sub_417FC2((int*)v11);
            if(!(unsigned int)v12) {
                if(!param2) {
                    sub_40377C(param0, 0xFFFFFFFFL, 78L);
                    long long v13 = sub_406529(v5, v4, v6, v7);
                    if((unsigned int)v13) {
                        sub_405181();
                        sub_406EC3(param0, 4440648L, 1L);
                        return sub_408E52(param0, 3L);
                    }
                    sub_40460F(param0, 0xFFFFFFFFL, v4, v5);
                }
                v0 = (unsigned long long)*(char*)((unsigned long long)(*(int*)v11 >>> 27) + 0x448000L);
            }
            else {
                v0 = 6L;
            }
            sub_40460F(param0, param1, v4, v5);
            v1 = v0 & 0xFFFFFFFFL;
        }
        sub_407826(param0, v1);
        sub_406EC3(param0, 4440648L, 1L);
        return sub_408E52(param0, 3L);
    }
    v1 = 1L;
    sub_407826(param0, v1);
    sub_406EC3(param0, 4440648L, 1L);
    return sub_408E52(param0, 3L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4086BF(long long param0, long long param1) {
    return sub_408233(param0, *(long long*)(param1 + 8L), (long long)*(int*)(param1 + 4L));
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408821(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    sub_408725(param0, param1);
    return sub_40578B(param0, (long long)(unsigned int)param1, v0, v1, v2, v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40884A(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0;
    long long result;
    long long v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10 = v6;
    long long v11 = v7;
    long long v12 = v3;
    long long v13 = v8;
    long long v14 = sub_40480A(param0, param1);
    long long v15 = sub_405869(v4, v1, v5, v9);
    if(v15) {
        long long v16 = (long long)*(int*)v15;
        result = v15 + 32L;
        param3 = v16;
        if(((unsigned char)v16 & 0x80)) {
            result = *(long long*)(v15 + 32L);
        }
        v0 = *(unsigned long long*)(v15 + 24L);
        if(((unsigned int)(v16 >>> 7L) & 0x1) == v2) {
            if((param3 >>> 8L) & 0x1L) {
                goto loc_4088CE;
            }
        }
        else if(v2 != 2) {
            goto loc_4088CE;
        }
    }
    else {
        sub_408821(param0, (long long)(unsigned int)v14, &v0);
    loc_4088CE:
        long long v17 = sub_40762B(param0, v0, v2 - 1 ? 0L: 1L, param3);
        if(v0) {
            sub_43AAA0(v4, (long long)v0);
        }
        result = v17;
        sub_405057(param0, (unsigned long long)(unsigned int)v14, (long long)v0, v4);
    }
    if(v1) {
        *(unsigned long long*)v1 = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408929(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2 = sub_40480A(param0, param1);
    long long v3 = sub_40653D();
    if((unsigned int)v3) {
        sub_40365C(param0, (long long)(unsigned int)v2, 4441894L);
        long long v4 = sub_406515(param0, 0xFFFFFFFFL);
        if((unsigned int)v4) {
            sub_405057(param0, (unsigned long long)(unsigned int)v2, v0, v1);
        }
        else {
            sub_407D7E(param0);
        }
    }
    return sub_408725(param0, (unsigned long long)(unsigned int)v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408A0E(long long param0) {
    sub_40469E(param0, 1L);
    return sub_4089F1(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408A2B(long long param0, int param1) {
    long long result;
    int* ptr0;
    sub_40568B();
    if(!ptr0 || !((*ptr0 >>> 9) & 0x1)) {
        result = sub_408998(param0, (long long)param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408C36(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    sub_406EC3(param0, "Symbol(", 7L);
    char* ptr0 = (char*)(v1 + 33L);
    unsigned long long v4 = (unsigned long long)((unsigned long long)*(int*)(v1 + 24L) + v1 + 32L);
    while((v4 > (unsigned long long)ptr0 && *ptr0 != 0xFF)) {
        ++ptr0;
    }
    sub_406B69(param0, (long long)(char*)(v1 + 33L), (long long)(long long*)((long long)ptr0 - (long long)(char*)(v1 + 33L)), v2);
    long long result = sub_406EC3(param0, 4447044L, 1L);
    sub_408E52(param0, 3L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408C9E(long long param0, char* param1, long long param2, long long param3) {
    long long result;
    char* ptr0 = param1;
    if((param3 * 16L)) {
        sub_43AAA0(param3, param3 * 16L);
    }
    --param3;
    while(param3 != -1L) {
        if((*ptr0 & 0x8)) {
            long long v0 = *(long long*)(ptr0 + 8L);
            *(int*)(v0 + 4L) = *(int*)(v0 + 4L) + 1;
        }
        ptr0 += 16L;
        --param3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408E59(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = param5;
    long long v5 = sub_408998(param0, 0xfffffffeL);
    long long v6 = sub_408998(param0, 0xFFFFFFFFL);
    long long v7 = (unsigned long long)*(int*)(v5 + 24L);
    long long v8 = (unsigned long long)*(int*)(v6 + 24L);
    unsigned long long v9 = (unsigned long long)(v7 + v8);
    if(v9 > 0x7fffffffL) {
        sub_401CE2("result too long", 156L);
        return result;
    }
    sub_4076DF(param0, v9, v1, v2);
    sub_43AAA0(v2, v7);
    sub_43AAA0(v2, v8);
    sub_406BF4(param0, 0xFFFFFFFFL);
    sub_405057(param0, 0xfffffffdL, v1, v2);
    return →sub_40460F();
}

void sub_408F0F() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408F19(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long result = sub_40574F(param0, param1, param2, param3, param4, param5);
    long long v4 = (unsigned long long)*(int*)(result + 24L);
    unsigned long long v5 = (unsigned long long)(result + 32L);
    unsigned long long v6 = (unsigned long long)(result + v4 + 32L);
    while(v6 > v5) {
        sub_41C85D(param0);
        result = param2();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408F78(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = param2;
    long long v6 = sub_4047ED(param0, (unsigned int)param1);
    long long v7 = sub_40574F(param0, v6 & 0xFFFFFFFFL);
    sub_41CF97(param0, &v0, (unsigned long long)*(int*)(v7 + 24L), v3);
    long long v8 = (unsigned long long)*(int*)(v7 + 24L);
    unsigned long long v9 = (unsigned long long)(v7 + 32L);
    unsigned long long v10 = (unsigned long long)(v7 + v8 + 32L);
    while(v10 > v9) {
        sub_41C85D(param0);
        long long v11 = v5();
        int v12 = (unsigned int)v11;
        if((unsigned long long)(v1 - v0) <= 6L) {
            int v13 = v12;
            sub_41CFE2(param0, &v0, 7L, v3);
            v12 = v13;
        }
        long long v14 = sub_41C531((unsigned long long)v12, v0);
        v0 += (long long)(unsigned int)v14;
    }
    sub_41D054(param0, &v0, param2, v3);
    sub_406BF4(param0, 0xFFFFFFFFL);
    return sub_405057(param0, (unsigned long long)(unsigned int)v6, param2, v3);
}

long long sub_409057(long long param0, long long param1, unsigned long long param2, unsigned long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned long long v4;
    unsigned long long v5;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v1;
    long long v9 = v0;
    long long v10 = sub_40480A(param0, param1);
    long long v11 = sub_40574F(param0, v10 & 0xFFFFFFFFL);
    unsigned long long v12 = (unsigned long long)sub_40314F(v11, param1, (long long)v4, (long long)v5);
    unsigned long long v13 = v12 <= v5 ? v12: v5;
    sub_40D015(param0, v11, (long long)(v4 >= v13 ? v13: v4));
    sub_40D015(param0, v11, v13 & 0xFFFFFFFFL);
    long long v14 = sub_40D33F(param0);
    sub_407808(param0, v14);
    return sub_405057(param0, (unsigned long long)(unsigned int)v10, v9, (long long)v5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4090EA(long long param0, long long param1) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v1;
    long long v8 = v3;
    long long v9 = sub_40480A(param0, param1);
    int v10 = (unsigned int)v9;
    long long v11 = sub_40574F(param0, v9 & 0xFFFFFFFFL, v2, v4, v5, v6);
    long long v12 = v11 + 32L;
    long long v13 = v11 + 32L;
    long long v14 = (unsigned long long)*(int*)(v11 + 24L) + v12;
    char i;
    for(i = v14 == v13; (unsigned long long)v14 > (unsigned long long)v13; i = v14 == v13) {
        v0 = v13;
        long long v15 = sub_41C85D(param0);
        v11 = sub_41CA19(v15 & 0xFFFFFFFFL, param1, v2);
        if(!(unsigned int)v11) {
            v11 = sub_41CA82((unsigned long long)(unsigned int)v15);
            if(!(unsigned int)v11) {
                goto loc_409158;
            }
        }
        v13 = v0;
    }
    long long v16 = v13;
    if(!i) {
    loc_409158:
        v16 = v14;
    loc_4091A1:
        do {
            if((unsigned long long)v12 >= (unsigned long long)v16) {
                goto loc_4091BC;
            }
            else {
                v0 = v16;
                do {
                    v11 = (unsigned long long)*(char*)(v16 - 1L) | ((unsigned long long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
                    --v16;
                    v11 = (long long)((unsigned int)v11 & 0xffffffc0);
                }
                while((unsigned char)v11 == 128 && (unsigned long long)v12 >= (unsigned long long)v16);
                long long v17 = v16;
                long long v18 = sub_41C85D(param0);
                int v19 = (unsigned int)v18;
                v11 = sub_41CA19(v18 & 0xFFFFFFFFL, param1, v2);
                long long v20 = (unsigned long long)v19;
                if((unsigned int)v11) {
                    goto loc_4091A1;
                }
                else {
                    v11 = sub_41CA82(v20);
                }
            }
        }
        while((unsigned int)v11);
        v16 = v0;
    }
loc_4091BC:
    long long v21 = (unsigned long long)v13 < (unsigned long long)v16 ? v16: v13;
    if(v13 != v12 || v21 != v14) {
        result = sub_406B69(param0, v13, (unsigned long long)(v21 - v13), v4);
        sub_405057(param0, (long long)v10, v2, v4);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4091F2(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = sub_40574F(param0, param1, param2, param3, param4, param5);
    unsigned long long v1 = (unsigned long long)sub_40314F(v0, param1, param2, param3);
    if(v1 > (unsigned long long)param2) {
        return sub_41176B(param0, (int*)v0, param2 & 0xFFFFFFFFL, 0L);
    }
    return 0L;
}

long long sub_409239(long long param0) {
    long long v0;
    long long v0;
    long long result;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v3;
    long long v9 = /*BAD_CALL!*/ sub_40609C();
    if((unsigned int)v9 == 6) {
        long long v10 = sub_405B41(param0, 0L);
        if(*(int*)v10 >>> 27 == 19) {
            result = *(long long*)(v10 + 56L);
            if(!result) {
                sub_401D12(v4, 0x224L);
            }
            else if(*(int*)(v10 + 72L) || (unsigned long long)*(int*)(v10 + 76L) != *(long long*)(result + 24L)) {
                v0 = 0x22dL;
            loc_409329:
                result = 0L;
                sub_401D12(v4, v0);
            }
            else {
                sub_407CCF(param0, result);
                result = *(long long*)(v10 + 56L);
            }
        }
        else {
        loc_40934B:
            long long v11 = 0L;
            sub_4037B9(param0, 87L);
            long long v12 = sub_406077(param0, 0xFFFFFFFFL, 0L, 0x7fffffffL);
            sub_407D7E(param0);
            long long v13 = sub_4076DF(param0, (unsigned long long)(unsigned int)v12, v2, v4);
            while((unsigned int)v12 > (unsigned int)v11) {
                sub_40370E(param0, 0L, v11 & 0xFFFFFFFFL);
                long long v14 = sub_405E64(param0, 0xFFFFFFFFL, v2, v4);
                *(char*)(v11 + v13) = (unsigned char)v14;
                ++v11;
                sub_407D7E(param0);
            }
        loc_409339:
            result = sub_405B46(param0, 0xFFFFFFFFL);
        }
    }
    else if((unsigned int)v9 < 6) {
        if((unsigned int)v9 == 4) {
            long long v15 = sub_406077(param0, 0L, 0L, 0x7fffffffL);
            sub_4076E9(param0, (unsigned long long)(unsigned int)v15, v2, v4);
            goto loc_409339;
        }
        else if((unsigned int)v9 != 5) {
            v0 = 573L;
            goto loc_409329;
        }
        else {
            sub_4057BB(param0, 0L, v2, v4, v5, v6);
            sub_404FD6(param0, v7);
            sub_40884A(param0, 0xFFFFFFFFL, &v1, 2L);
            goto loc_409339;
        }
    }
    else if((unsigned int)v9 == 7) {
        goto loc_40934B;
    }
    else {
        v0 = 573L;
        goto loc_409329;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4093B8(long long param0, long long param1) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    int v3 = (unsigned int)param1;
    long long v4 = param0;
    int* ptr0 = (int*)sub_404A12(param0, param1);
    long long v5 = (long long)*ptr0;
    switch((unsigned int)v5) {
        case 9: {
            result = *(long long*)(ptr0 + 2);
            if(!((*(int*)result >>> 13) & 0x1)) {
                sub_401C42(v4, "third_party/duktape/duk_bi_buffer.c", 0x60000c8L, &gvar_43C4B1);
                return 0L;
            }
            break;
        }
        case 10: {
            return sub_408411(v4, (long long)v3, v5, v0, v1, v2);
        }
        default: {
            sub_401C42(v4, "third_party/duktape/duk_bi_buffer.c", 0x60000c8L, &gvar_43C4B1);
            return 0L;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_4094C5(long long param0, unsigned int* param1, long long param2, long long param3, long long param4) {
    unsigned int result;
    long long result1;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    unsigned int* ptr0;
    long long v4 = v0;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = param3;
    long long v9 = /*BAD_CALL!*/ sub_405DB7(param0, 1L, param2, param3, param4);
    if((unsigned int)v9 < 0x80000000 && (unsigned int)v9 <= *ptr0) {
        long long v10 = sub_40649F(param0, 2L);
        if((unsigned int)v10) {
            result = (unsigned int)(*ptr0 - (unsigned int)v9);
            *(unsigned int*)param2 = (unsigned int)v9;
            *(unsigned int*)param3 = result;
            return result;
        }
        long long v11 = /*BAD_CALL!*/ sub_405DB7(param0, 2L, param2, param3, param4);
        result = (unsigned int)v11;
        if(result < 0x80000000) {
            unsigned int v12 = (unsigned int)(*ptr0 - (unsigned int)v9);
            if(result > v12) {
                if((unsigned int)param4) {
                    sub_401CE2("invalid args", 0x111L);
                    return result1;
                }
                result = v12;
            }
            *(unsigned int*)param2 = (unsigned int)v9;
            *(unsigned int*)param3 = result;
            return result;
        }
    }
    sub_401CE2("invalid args", 0x111L);
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_409572(long long param0, int param1, long long param2, long long param3, long long param4) {
    int v0;
    int v1;
    char v2;
    long long v3;
    int v4 = param1 >> (param2 & 0x1fL);
    *(int*)&v2 = (unsigned int)(unsigned char)param2;
    long long v5 = sub_405DB7(param0, 0L, param2, param2 & 0xFFFFFFFFL, param4);
    int v6 = (unsigned int)v5;
    if((unsigned int)v5 < 0) {
        v6 += v4;
    }
    long long v7 = sub_40649F(param0, 1L);
    int result = v4;
    if(!(unsigned int)v7) {
        long long v8 = /*BAD_CALL!*/ sub_405DB7(param0, 1L, param2, v3, v7 & 0xFFFFFFFFL);
        result = (unsigned int)v8;
        if(result < 0) {
            result += v4;
            goto loc_4095D3;
        }
        else if(v6 >= 0) {
            goto loc_4095E0;
        }
        else {
            v1 = 0;
            goto loc_4095F4;
        }
    }
    else {
    loc_4095D3:
        v1 = 0;
        if(v6 >= 0) {
        loc_4095E0:
            v1 = v4 <= v6 ? v4: v6;
        }
        v0 = v1;
        if(result >= v1) {
        loc_4095F4:
            v0 = v1;
            result = result >= v4 ? v4: result;
            v1 = result;
        }
    }
    param3 = (unsigned long long)v2 | ((unsigned long long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
    *(int*)v3 = v0 << (param3 & 0x1fL);
    *(int*)param4 = v1 << (param3 & 0x1fL);
    return result;
}

long long sub_409619(long long param0, long long param1, int* param2, int* param3, long long param4) {
    int* ptr0;
    int* ptr1;
    int v0 = (unsigned int)param1;
    long long result = param4;
    long long v1 = sub_406077(param0, 1L, 0L, param1 & 0xFFFFFFFFL);
    long long v2 = sub_40649F(param0, 2L);
    if(!(unsigned int)v2) {
        long long v3 = sub_406077(param0, 2L, (long long)(unsigned int)v1, (long long)v0);
        v0 = (unsigned int)v3;
    }
    *ptr0 = (unsigned int)v1;
    *ptr1 = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40967D(long long param0, int param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long result = sub_406551();
    if((unsigned int)result) {
        result = sub_408290(param0, (long long)param1, v0, v1, v2, v3);
    }
    return result;
}

long long sub_409749(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    jump *(long long*)((unsigned long long)*(char*)(param1 + 81L) * 8L + 4441384L);
}

long long sub_4097E4(long long param0) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_409239(param0);
    sub_4074D7(param0, 0xFFFFFFFFL, 0L, *(long long*)(v2 + 24L), 4L);
    sub_407CED(param0, 50L);
    sub_4044A5(param0, 0xfffffffeL);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40982E(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    sub_41DC9A(param0);
    long long v5 = /*BAD_CALL!*/ sub_405DB7(param0, 0L, v1, v2, v3);
    if((unsigned int)v5 < 0) {
        sub_401CE2("invalid length", 661L);
        result = 0L;
    }
    else {
        sub_4076E9(param0, (unsigned long long)(unsigned int)v5, v1, v2);
        long long v6 = sub_405B46(param0, 0xFFFFFFFFL);
        long long v7 = sub_40746B(param0, 2550145152L, 39L, v2);
        long long v8 = *(long long*)(v6 + 24L);
        *(long long*)(v7 + 56L) = v6;
        *(int*)(v6 + 4L) = *(int*)(v6 + 4L) + 1;
        *(int*)(v7 + 76L) = (unsigned int)v8;
        result = 1L;
    }
    return result;
}

void sub_4098A9() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_409C71(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    (v0 >>> 32L) & 0xFFFFFFFFL = 0;
    v0 & 0xFFFFFFFFL = 0;
    sub_41DC9A(param0);
    long long v4 = sub_4093B8(param0, 0L);
    long long v5 = 0x432L;
    if(*(int*)v4 >>> 27 == 19) {
        sub_4094C5(param0, (unsigned int*)(v4 + 76L), &v0, &v0 + 4L, 1L);
        long long v6 = sub_40746B(param0, 0xa0002080L, 40L, v2);
        long long v7 = *(long long*)(v4 + 56L);
        if(!v7) {
            v5 = 0x442L;
            sub_401D12(v2, v5);
            return 0L;
        }
        *(long long*)(v6 + 56L) = v7;
        *(int*)(v7 + 4L) = *(int*)(v7 + 4L) + 1;
        int v8 = (unsigned int)v0 + *(int*)(v4 + 72L);
        *(long long*)(v6 + 64L) = v4;
        *(int*)(v6 + 72L) = v8;
        *(int*)(v6 + 76L) = (unsigned int)(v0 >>> 32L);
        *(int*)(v4 + 4L) = *(int*)(v4 + 4L) + 1;
        result = 1L;
    }
    else {
        sub_401D12(v2, v5);
        result = 0L;
    }
    return result;
}

long long sub_409D8D(long long param0) {
    sub_409239(param0);
    return 1L;
}

void sub_409EC5() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_409F74(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v4;
    long long v6 = param3;
    long long v7 = sub_41DCD3(param0);
    if(((unsigned char)v7 & 0x2)) {
        long long v8 = sub_4093B8(param0, 0L);
        v1 = 1L;
        v0 = v8;
    }
    else {
        long long v9 = sub_4094BB(param0, v2, v3, param3);
        v1 = 0L;
        v0 = v9;
    }
    long long v10 = sub_4093B8(param0, v1);
    long long v11 = (long long)*(int*)(v0 + 76L);
    long long v12 = 0xFFFFFFFFL;
    if((unsigned long long)(((unsigned long long)*(int*)(v0 + 72L) + v11) & 0xFFFFFFFFL) <= *(unsigned long long*)(*(long long*)(v0 + 56L) + 24L)) {
        long long v13 = (long long)*(int*)(v10 + 76L);
        if((unsigned long long)(((unsigned long long)*(int*)(v10 + 72L) + v13) & 0xFFFFFFFFL) <= *(unsigned long long*)(*(long long*)(v10 + 56L) + 24L)) {
            long long v14 = sub_417D71(v13, v11);
            v12 = v14 & 0xFFFFFFFFL;
        }
    }
    if(((unsigned char)v7 & 0x1)) {
        sub_406A68(param0, v12);
    }
    else {
        sub_406955(param0, (unsigned int)v12 ? 0L: 1L);
    }
    return 1L;
}

long long sub_40A038(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0;
    unsigned long long v1;
    long long v2;
    long long result;
    int v3;
    int v4;
    char v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = v6;
    long long v10 = sub_4094BB(param0, param1, param2, param3);
    if(!*(long long*)(v10 + 56L)) {
        sub_401D12(param3, 1359L);
        result = 0L;
    }
    else {
        long long v11 = sub_406529(param3, param2, v7, v8);
        if((unsigned int)v11) {
            v2 = sub_405695();
        }
        else {
            v2 = &v5;
            long long v12 = sub_405E64(param0, 0L, param2, param3);
            v1 = 1L;
            v5 = (unsigned char)v12;
        }
        sub_409619(param0, (long long)*(int*)(v10 + 76L), &v3, &v4, v7);
        char* ptr0 = *(unsigned long long*)(v10 + 56L);
        long long* ptr1 = (long long*)(ptr0 + 32L);
        if((*ptr0 & 0x80)) {
            ptr1 = *(unsigned long long*)(ptr0 + 32L);
        }
        long long* ptr2 = (long long*)((unsigned long long)*(int*)(v10 + 72L) + (long long)v3 + (long long)ptr1);
        unsigned long long v13 = (unsigned long long)(v4 - v3);
        if(v1 == 1L) {
            v0 = (unsigned long long)*(char*)v2;
            if(v13) {
                sub_43ABE2((long long)ptr2, (long long)v0, (long long)v13, (long long)v3);
            }
        }
        else if(v1 >= 1L) {
            unsigned long long v14 = 0L;
            unsigned long long v15 = 0L;
            while(v15 < v13) {
                v0 = v14 + 1L;
                *(char*)(v15 + (long long)ptr2) = *(char*)(v14 + v2);
                if(v0 >= v1) {
                    v0 = 0L;
                }
                ++v15;
                v14 = v0;
            }
        }
        sub_406FB2(param0, (long long)v0);
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40A13A(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    int v5 = 0;
    int v6 = 0;
    long long v7 = sub_4094BB(param0, param1, param2, param3);
    sub_4057F3(param0, 0L, &v0, param3, v2, v3);
    sub_4094C5(param0, (unsigned int*)(v7 + 76L), &v6, &v5, 0L);
    if((unsigned long long)v5 > v0) {
        v5 = (unsigned int)v0;
    }
    unsigned long long v8 = (unsigned long long)(*(int*)(v7 + 72L) + *(int*)(v7 + 76L));
    if(*(unsigned long long*)(*(long long*)(v7 + 56L) + 24L) >= v8 && v5) {
        sub_43AAA0((long long)v8, (unsigned long long)v5);
    }
    sub_406AAF(param0, (unsigned long long)v5);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40A1EA(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long result;
    unsigned int v1;
    long long v2;
    long long v3;
    long long v4 = v3;
    long long v5 = sub_4094BB(param0, param1, param2, param3);
    long long v6 = sub_4093B8(param0, 0L);
    unsigned int v7 = *(unsigned int*)(v5 + 76L);
    unsigned int v8 = *(unsigned int*)(v6 + 76L);
    long long v9 = sub_405DB7(param0, 1L, param2, param3, v2);
    long long v10 = sub_405DB7(param0, 2L, param2, param3, v2);
    long long v11 = sub_40649F(param0, 3L);
    if((unsigned int)v11) {
        v1 = v7;
    }
    else {
        long long v12 = /*BAD_CALL!*/ sub_405DB7(param0, 3L, param2, param3, v2);
        v1 = (unsigned int)v12;
    }
    if(((unsigned char)((unsigned int)v9 >>> 31) | (unsigned char)((unsigned int)v10 >>> 31)) || v1 >= 0x80000000) {
        sub_401CE2("invalid args", 0x626L);
        result = 0L;
    }
    else {
        unsigned int v13 = v1 <= v7 ? v1: v7;
        if((unsigned int)v10 < v13 && (unsigned int)v9 < v8) {
            v0 = (unsigned long long)(v13 - (unsigned int)v10);
            if((unsigned int)((unsigned int)(v9 & 0xFFFFFFFFL) + (unsigned int)v0) > v8) {
                v0 = (unsigned long long)(v8 - (unsigned int)v9);
            }
            long long v14 = (unsigned long long)*(int*)(v6 + 72L);
            char* ptr0 = *(unsigned long long*)(v6 + 56L);
            if((unsigned long long)((unsigned int)(v9 & 0xFFFFFFFFL) + (unsigned int)v14 + (unsigned int)v0) <= *(unsigned long long*)(ptr0 + 24L)) {
                long long v15 = (unsigned long long)*(int*)(v5 + 72L);
                char* ptr1 = *(unsigned long long*)(v5 + 56L);
                if((unsigned long long)((unsigned int)(v10 & 0xFFFFFFFFL) + (unsigned int)v15 + (unsigned int)v0) <= *(unsigned long long*)(ptr1 + 24L)) {
                    long long* ptr2 = (long long*)(ptr0 + 32L);
                    if((*ptr0 & 0x80)) {
                        ptr2 = *(unsigned long long*)(ptr0 + 32L);
                    }
                    long long* ptr3 = (long long*)(ptr1 + 32L);
                    long long* ptr4 = (long long*)((v9 & 0xFFFFFFFFL) + v14 + (long long)ptr2);
                    if((*ptr1 & 0x80)) {
                        ptr3 = *(unsigned long long*)(ptr1 + 32L);
                    }
                    long long* ptr5 = (long long*)((v10 & 0xFFFFFFFFL) + v15 + (long long)ptr3);
                    long long v16 = v0 & 0xFFFFFFFFL;
                    if(!v16) {
                        v0 = 0L;
                        sub_406AAF(param0, v0 & 0xFFFFFFFFL);
                        return 1L;
                    }
                    sub_43ABC2((long long)ptr4, (long long)ptr5, v16, v15);
                }
            }
        }
        else {
            v0 = 0L;
        }
        sub_406AAF(param0, v0 & 0xFFFFFFFFL);
        result = 1L;
    }
    return result;
}

void sub_40A345() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40A5EC(long long param0) {
    long long result;
    int v0;
    int v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = sub_41DCD3(param0);
    long long v8 = sub_406FC3(param0);
    if(*(int*)v8 == 10 && ((unsigned char)v7 & 0x2)) {
        sub_409572(param0, (long long)*(int*)(*(unsigned long long*)(v8 + 8L) + 24L), 0L, &v0, &v1);
        int v9 = v1 - v0;
        sub_4076DF(param0, (unsigned long long)v9, v2, v3);
        if(v9) {
            sub_43AAA0(v3, (long long)(unsigned long long)v9);
        }
        goto loc_40A778;
    }
    else {
        long long v10 = sub_4094BB(param0, v5, v2, v3);
        sub_409572(param0, (long long)*(int*)(v10 + 76L), (long long)*(char*)(v10 + 80L), &v0, &v1);
        int v11 = *(int*)v10;
        unsigned int v12 = (unsigned int)(v1 - v0);
        long long v13 = sub_40746B(param0, (long long)((v11 & 0xf8000000) | 0x2080), (unsigned char)v7 & 0x4 ? 50L: (long long)a_________01[(unsigned long long)((v11 >>> 27) - 19)], v3);
        *(char*)(v13 + 80L) = *(char*)(v10 + 80L);
        *(char*)(v13 + 81L) = *(char*)(v10 + 81L);
        *(char*)(v13 + 82L) = (unsigned char)((unsigned int)v7 & 0x1);
        long long v14 = *(long long*)(v10 + 56L);
        if(!v14) {
            sub_401D12(v3, 2037L);
            result = 0L;
        }
        else if(((unsigned char)v7 & 0x2)) {
            sub_4076E9(param0, (unsigned long long)v12, v2, v3);
            long long v15 = sub_40BC95(v10, v12);
            long long v16 = (unsigned long long)*(int*)(v10 + 72L) + (long long)v0;
            if((unsigned int)v15) {
                sub_43AAA0(v16, v15 & 0xFFFFFFFFL);
            }
            long long v17 = sub_405B46(param0, 0xFFFFFFFFL);
            *(long long*)(v13 + 56L) = v17;
            *(int*)(v17 + 4L) = *(int*)(v17 + 4L) + 1;
            *(unsigned int*)(v13 + 76L) = v12;
            sub_407D7E(param0);
        loc_40A778:
            result = 1L;
        }
        else {
            *(long long*)(v13 + 56L) = v14;
            *(int*)(v14 + 4L) = *(int*)(v14 + 4L) + 1;
            long long v18 = *(long long*)(v10 + 64L);
            *(unsigned int*)(v13 + 76L) = v12;
            int v19 = *(int*)(v10 + 72L) + v0;
            *(long long*)(v13 + 64L) = v18;
            *(int*)(v13 + 72L) = v19;
            result = 1L;
            if(v18) {
                *(int*)(v18 + 4L) = *(int*)(v18 + 4L) + 1;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40AA0B(long long param0, long long* param1, long long param2) {
    unsigned int v0;
    int v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = v2;
    long long v10 = v6;
    long long v11 = v7;
    long long v12 = /*BAD_CALL!*/ sub_41DCD3(param0);
    unsigned int v13 = (unsigned int)((unsigned int)v12 & 0x7);
    unsigned int v14 = (unsigned int)((unsigned int)v12 & 0x8);
    long long v15 = /*BAD_CALL!*/ sub_4094BB(param0, v5, v3, v4);
    int v16 = *(int*)(v15 + 76L);
    if(((unsigned char)v12 & 0x20)) {
        long long v17 = sub_405BBB(param0, 1L, v3, v4);
        v1 = 0;
        v0 = (unsigned int)v17 ? 0: 1;
    }
    else {
        long long v18 = sub_405BBB(param0, (unsigned long long)((v13 == 5 ? 1: 0) + 1), v3, v4);
        v0 = v14;
        v1 = (unsigned int)v18;
    }
    long long v19 = sub_405DB7(param0, 0L);
    unsigned int v20 = (unsigned int)v19;
    if((unsigned int)v19 >= 0) {
        long long v21 = /*BAD_CALL!*/ sub_40BC95(v15, (unsigned long long)v16, v3, v4, v8);
        char* ptr0 = *(unsigned long long*)(v15 + 56L);
        if(!ptr0) {
            goto loc_40AC60;
        }
        else {
            param2 = (long long)v20;
            param1 = (long long*)(ptr0 + 32L);
            if((*ptr0 & 0x80)) {
                param1 = *(unsigned long long*)(ptr0 + 32L);
            }
            long long* ptr1 = (long long*)((unsigned long long)*(int*)(v15 + 72L) + (long long)param1);
            switch(v13) {
                case 0: {
                    break;
                }
                case 1: {
                    if((unsigned int)((unsigned int)param2 + 2) > (unsigned int)v21) {
                        goto loc_40AC60;
                    }
                    else {
                        long long v22 = (unsigned long long)(int)*(short*)(param2 + (long long)ptr1);
                        if(v0) {
                            v22 = (unsigned long long)(int)(unsigned short)((unsigned long long)(unsigned char)(v22 >>> 8L) | ((unsigned long long)(unsigned char)v22 << 8) | ((unsigned long long)(((v22 & 0xFFFFFFFFL) >>> 16L) & 0xffffffffffffL) << 16));
                        }
                        if(((unsigned int)v12 & 0x10)) {
                            sub_406A68(param0, v22);
                        }
                        else {
                            sub_406AAF(param0, v22 & 0xffffL);
                        }
                        return (unsigned long long)v13;
                    }
                }
                case 2: {
                    goto loc_40AB46;
                }
                case 3: {
                    if((unsigned int)((unsigned int)param2 + 4) > (unsigned int)v21) {
                        goto loc_40AC60;
                    }
                    else {
                        long long v23 = (unsigned long long)*(int*)(param2 + (long long)ptr1);
                        if(v0) {
                            v23 = (unsigned long long)(unsigned char)((unsigned int)v23 >>> 24) | ((unsigned long long)(unsigned char)((unsigned int)v23 >>> 16) << 8) | ((unsigned long long)(unsigned char)((unsigned int)v23 >>> 8) << 16) | ((unsigned long long)(unsigned char)v23 << 24) | ((unsigned long long)0 << 32);
                        }
                        v14 = (unsigned int)v23;
                        sub_406A1B(param0);
                        goto loc_40AC6A;
                    }
                }
                case 4: {
                    if((unsigned int)((unsigned int)param2 + 8) > (unsigned int)v21) {
                        goto loc_40AC60;
                    }
                    else {
                        sub_406A1B(param0);
                        goto loc_40AC6A;
                    }
                }
                case 5: {
                    v20 = (unsigned int)v21;
                    v16 = (unsigned int)param2;
                    long long v24 = /*BAD_CALL!*/ sub_405483(param0, 1L, param2, v4);
                    if((unsigned int)((unsigned int)v24 - 1) <= 5) {
                        param2 = (long long)v16;
                        param1 = (long long*)((v24 + param2) & 0xFFFFFFFFL);
                        if((unsigned int)param1 <= v20) {
                            int v25 = v14 ? (unsigned int)v24: -1;
                            long long v26 = v14 ? 0L: (long long)(unsigned int)((unsigned int)v24 - 1);
                            long long* ptr2 = (long long*)(param2 + (long long)ptr1);
                            long long v27 = 0L;
                            do {
                                long long v28 = (unsigned long long)*(char*)(v26 + (long long)ptr2);
                                v26 += (long long)((v14 < 1 ? -1: 0) | 0x1);
                                v27 = v27 * 0x100L + v28;
                            }
                            while((unsigned int)v26 != v25);
                            sub_406A1B(param0);
                            goto loc_40AC6A;
                        }
                    }
                }
                default: {
                    goto loc_40AC60;
                }
            }
            if((unsigned int)((unsigned int)param2 + 1) > (unsigned int)v21) {
                goto loc_40AC60;
            }
            else {
                long long v29 = (unsigned long long)(int)*(char*)(param2 + (long long)ptr1);
                long long v30 = param0;
                if(!((unsigned int)v12 & 0x10)) {
                    v29 &= 0xFFL;
                    sub_406AAF(v30, v29);
                    goto loc_40AC6A;
                loc_40AB46:
                    if((unsigned int)((unsigned int)param2 + 4) > (unsigned int)v21) {
                        goto loc_40AC60;
                    }
                    else {
                        v29 = (unsigned long long)*(int*)(param2 + (long long)ptr1);
                        if(v0) {
                            v29 = (unsigned long long)(unsigned char)((unsigned int)v29 >>> 24) | ((unsigned long long)(unsigned char)((unsigned int)v29 >>> 16) << 8) | ((unsigned long long)(unsigned char)((unsigned int)v29 >>> 8) << 16) | ((unsigned long long)(unsigned char)v29 << 24) | ((unsigned long long)0 << 32);
                        }
                        v30 = param0;
                        if(!((unsigned int)v12 & 0x10)) {
                            sub_406AAF(v30, v29);
                            goto loc_40AC6A;
                        }
                    }
                }
                sub_406A68(v30, v29);
                goto loc_40AC6A;
            }
        }
    }
    else {
    loc_40AC60:
        if(v1) {
            sub_406B26(param0, (long long)param1, param2);
        loc_40AC6A:
            v13 = 1;
        }
        else {
            v13 = 0;
            sub_401CE2("invalid args", 2561L);
        }
    }
    return (unsigned long long)v13;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40AC9E(long long param0) {
    long long result;
    int v0;
    long long v1;
    long long v2;
    long long v3;
    int v4;
    int v5;
    long long v6;
    long long v7;
    double v8;
    double v9;
    long long* ptr0;
    int v10;
    long long v11;
    long long v12;
    long long v13;
    long long v14 = v12;
    long long v15 = sub_41DCD3(param0);
    unsigned int v16 = (unsigned int)((unsigned int)v15 & 0x7);
    int v17 = (unsigned int)v15 & 0x20;
    int v18 = (unsigned int)v15 & 0x8;
    long long v19 = /*BAD_CALL!*/ sub_4094BB(param0, v13, v6, (unsigned long long)((unsigned int)v15 & 0x8));
    int v20 = *(int*)(v19 + 76L);
    if(v17) {
        long long v21 = sub_405BBB(param0, 2L, v6, v11);
        v5 = (unsigned int)v21 ? 0: 1;
        sub_404EC4(param0, 0L, 1L);
        v4 = 0;
    }
    else {
        long long v22 = sub_405BBB(param0, (unsigned long long)((v16 == 5 ? 1: 0) + 2), v6, v11);
        v5 = v18;
        v4 = (unsigned int)v22;
    }
    long long v23 = /*BAD_CALL!*/ sub_405DB7(param0, 1L);
    if(v16 != 5) {
        v3 = (unsigned long long)*(char*)((long long)v16 + 4441297L);
        goto loc_40AD6F;
    }
    else {
        long long v24 = sub_405483(param0, 2L, v6, v11);
        v3 = v24 & 0xFFFFFFFFL;
        if((unsigned int)((unsigned int)v24 - 1) <= 5) {
        loc_40AD6F:
            if((unsigned int)(v23 & 0xFFFFFFFFL) >= 0) {
                sub_405C43(param0);
                long long* ptr1 = (long long*)sub_40BC95(v19, (unsigned long long)v20, v6, v11, v7);
                char* ptr2 = *(unsigned long long*)(v19 + 56L);
                if(ptr2) {
                    long long* ptr3 = (long long*)(ptr2 + 32L);
                    if((*ptr2 & 0x80)) {
                        ptr3 = *(unsigned long long*)(ptr2 + 32L);
                    }
                    long long* ptr4 = (long long*)((unsigned long long)*(int*)(v19 + 72L) + (long long)ptr3);
                    switch(v16) {
                        case 0: {
                            break;
                        }
                        case 1: {
                            if((unsigned int)(char*)(((v23 & 0xFFFFFFFFL) + 2L) & 0xFFFFFFFFL) <= (unsigned int)ptr1) {
                                long long v25 = sub_405E64(param0, 0L, (long long)(char*)(((v23 & 0xFFFFFFFFL) + 2L) & 0xFFFFFFFFL), (long long)ptr3);
                                *(short*)((v23 & 0xFFFFFFFFL) + (long long)ptr4) = !v5 ? (unsigned short)v25: (unsigned short)((unsigned long long)(unsigned char)(v25 >>> 8L) | ((unsigned long long)(unsigned char)v25 << 8) | ((unsigned long long)((v25 >>> 16L) & 0xffffffffffffL) << 16));
                                goto loc_40AF0F;
                            }
                            else {
                                goto loc_40AF09;
                            }
                        }
                        case 2: {
                            if((unsigned int)(char*)(((v23 & 0xFFFFFFFFL) + 4L) & 0xFFFFFFFFL) <= (unsigned int)ptr1) {
                                ptr1 = (long long*)sub_405E64(param0, 0L, (long long)(char*)(((v23 & 0xFFFFFFFFL) + 4L) & 0xFFFFFFFFL), (long long)ptr3);
                                if(v5) {
                                    ptr1 = (unsigned long long)(unsigned char)((unsigned int)ptr1 >>> 24) | ((unsigned long long)(unsigned char)((unsigned int)ptr1 >>> 16) << 8) | ((unsigned long long)(unsigned char)((unsigned int)ptr1 >>> 8) << 16) | ((unsigned long long)(unsigned char)ptr1 << 24) | ((unsigned long long)0 << 32);
                                }
                                *(int*)((v23 & 0xFFFFFFFFL) + (long long)ptr4) = (unsigned int)ptr1;
                                goto loc_40AF0F;
                            }
                            else {
                                goto loc_40AF09;
                            }
                        }
                        case 3: {
                            if((unsigned int)((unsigned int)(v23 & 0xFFFFFFFFL) + 4) > (unsigned int)ptr1) {
                                goto loc_40AF09;
                            }
                            else {
                                ptr1 = (long long*)/*BAD_CALL!*/ sub_405C43(param0);
                                v16 = v9;
                                ptr1 = !v5 ? (unsigned long long)v9 | ((unsigned long long)(unsigned int)(long long*)((long long)ptr1 >>> 32L) << 32): (unsigned long long)(unsigned char)(v16 >>> 24) | ((unsigned long long)(unsigned char)(v16 >>> 16) << 8) | ((unsigned long long)(unsigned char)(v16 >>> 8) << 16) | ((unsigned long long)(unsigned char)v16 << 24) | ((unsigned long long)0 << 32);
                            }
                            *(int*)((v23 & 0xFFFFFFFFL) + (long long)ptr4) = (unsigned int)ptr1;
                            goto loc_40AF0F;
                        }
                        case 4: {
                            if((unsigned int)((unsigned int)(v23 & 0xFFFFFFFFL) + 8) <= (unsigned int)ptr1) {
                                sub_405C43(param0);
                                ptr1 = ptr0;
                                if(v5) {
                                    ptr1 = (long long*)((long long)(long long*)(((unsigned long long)(unsigned char)(v10 >>> 24) | ((unsigned long long)(unsigned char)(v10 >>> 16) << 8) | ((unsigned long long)(unsigned char)(v10 >>> 8) << 16) | ((unsigned long long)(unsigned char)v10 << 24) | ((unsigned long long)0 << 32)) * 0x100000000L) | (unsigned long long)(unsigned char)((unsigned int)(long long*)((long long)ptr1 >>> 32L) >>> 24) | ((unsigned long long)(unsigned char)((unsigned int)(long long*)((long long)ptr1 >>> 32L) >>> 16) << 8) | ((unsigned long long)(unsigned char)((unsigned int)(long long*)((long long)ptr1 >>> 32L) >>> 8) << 16) | ((unsigned long long)(unsigned char)(long long*)((long long)ptr1 >>> 32L) << 24) | ((unsigned long long)0 << 32));
                                }
                                *(unsigned long long*)((v23 & 0xFFFFFFFFL) + (long long)ptr4) = ptr1;
                                goto loc_40AF0F;
                            }
                            else {
                                goto loc_40AF09;
                            }
                        }
                        case 5: {
                            if((unsigned int)((unsigned int)(v23 & 0xFFFFFFFFL) + (unsigned int)v3) <= (unsigned int)ptr1) {
                                if(!v18) {
                                    v2 = (v3 - 1L) & 0xFFFFFFFFL;
                                    v1 = 1L;
                                    v0 = -1;
                                }
                                else {
                                    v0 = (unsigned int)v3;
                                    v2 = 0L;
                                    v1 = 0xFFFFFFFFL;
                                }
                                v4 = (unsigned int)v1;
                                v16 = (unsigned int)v2;
                                sub_405C43(param0);
                                ptr3 = (long long)v8;
                                ptr1 = (long long*)v0;
                                long long* ptr5 = (long long*)((long long)(long long*)((v23 & 0xFFFFFFFFL) + (long long)(char*)v4) + (long long)ptr4);
                                do {
                                    *(char*)((long long)ptr1 + (long long)ptr5) = (unsigned char)ptr3;
                                    ptr1 = (long long*)((long long)(char*)v4 + (long long)ptr1);
                                    ptr3 = (long long*)((long long)ptr3 >> 8);
                                }
                                while((unsigned int)ptr1 != v16);
                                goto loc_40AF0F;
                            }
                        }
                        default: {
                            goto loc_40AF09;
                        }
                    }
                    if((unsigned int)(char*)(((v23 & 0xFFFFFFFFL) + 1L) & 0xFFFFFFFFL) <= (unsigned int)ptr1) {
                        long long v26 = sub_405E64(param0, 0L, (long long)(char*)(((v23 & 0xFFFFFFFFL) + 1L) & 0xFFFFFFFFL), (long long)ptr3);
                        *(char*)((v23 & 0xFFFFFFFFL) + (long long)ptr4) = (unsigned char)v26;
                        goto loc_40AF0F;
                    }
                }
            }
        }
    loc_40AF09:
        if(v4) {
        loc_40AF0F:
            if(!v17) {
                sub_406AAF(param0, ((v23 & 0xFFFFFFFFL) + v3) & 0xFFFFFFFFL);
                return 1L;
            }
        }
        else {
            sub_401CE2("invalid args", 0xb1bL);
        }
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_40B11C(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_406FB2(param0);
    sub_4036CF(param0, 0xFFFFFFFFL, &gvar_43C614, 8L);
    return sub_405563(param0, 0xFFFFFFFFL, NULL, v0, v1, v2);
}

long long sub_40B3E1(long long param0) {
    sub_41DC9A(param0);
    return 0L;
}

void sub_40B4EE() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40B5D1(long long param0) {
    long long* ptr0 = sub_40B11C(param0);
    long long v0 = sub_41DCD3(param0);
    long long v1 = param0;
    if((unsigned int)v0) {
        long long v2 = !((unsigned int)v0 - 1) ? (long long)*(char*)&ptr0[1]: (long long)*((char*)&ptr0[1] + 1);
        sub_406955(param0, v2);
    }
    else {
        sub_406EC3(param0, "utf-8", 5L);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40B627(long long param0, long long param1, long long param2, long long* param3, long long param4) {
    long long result;
    int v0;
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
    long long* ptr0 = sub_40B11C(param0);
    long long v13 = v5;
    long long v14 = v6;
    long long v15 = v7;
    long long v16 = v11;
    long long v17 = v12;
    unsigned long long v18 = 0L;
    long long v19 = sub_40649F(param0, 0L);
    if((unsigned int)v19) {
        sub_4076DF(param0, 0L, v10, v8);
        sub_405057(param0, 0L, v10, v8);
    }
    sub_405672(param0, 0L, &v18);
    long long v20 = sub_406117(param0, 1L, 7L, v8, v9);
    if(!(unsigned int)v20) {
        sub_406117(param0, 1L, 0x6c6L, v8, v9);
        long long v21 = sub_4036CF(param0, 1L, "stream", 6L);
        if(!(unsigned int)v21) {
            goto loc_40B1B3;
        }
        else {
            long long v22 = sub_405BBB(param0, 0xFFFFFFFFL, v10, v8);
            v3 = v22 & 0xFFFFFFFFL;
        }
    }
    else {
    loc_40B1B3:
        v3 = 0L;
    }
    if(v18 > 0x2aaaaaa6L) {
        v2 = "result too long";
        v1 = 0x6000100L;
        sub_401C42(param0, "third_party/duktape/duk_bi_encoding.c", v1, v2);
        result = 0L;
    }
    else {
        long long v23 = sub_4076DF(param0, (unsigned long long)((v18 + 1L) * 3L), v10, v8);
        long long* ptr1 = sub_40564B(param0, 0L, &v4);
        if(v18 == v4) {
            char* ptr2 = (char*)v23;
            long long* ptr3 = ptr1;
            while((long long*)((long long)ptr1 + v18) > ptr3) {
                param4 = (unsigned long long)*((char*)&ptr0[0] + 6) | ((unsigned long long)((param4 >>> 8L) & 0xffffffffffffffL) << 8);
                long long v24 = (unsigned long long)*(char*)&ptr3[0];
                param3 = (long long*)((char*)ptr3 + 1L);
                if((unsigned char)param4) {
                    if((unsigned char)v24 >= *((char*)&ptr0[0] + 5) && (unsigned char)v24 <= *((char*)&ptr0[0] + 4)) {
                        int v25 = *(int*)&ptr0[0];
                        *(short*)((char*)&ptr0[0] + 4) = 32959;
                        v24 = (unsigned long long)((v25 * 64) | ((unsigned int)v24 & 0x3f));
                        *(int*)&ptr0[0] = (unsigned int)v24;
                        *((char*)&ptr0[0] + 6) = (unsigned char)param4 + 0xFF;
                        if((unsigned char)param4 + 0xFF) {
                            goto loc_40B36A;
                        }
                        else {
                            *(int*)&ptr0[0] = 0;
                            if((unsigned int)v24 >= 0) {
                                goto loc_40B337;
                            }
                            else if((unsigned int)v24 == -1) {
                                goto loc_40B36A;
                            }
                            else if((unsigned int)v24 != -3) {
                                goto loc_40B328;
                            }
                        }
                    }
                    else {
                        *(int*)&ptr0[0] = 0;
                        *(short*)((char*)&ptr0[0] + 4) = 32959;
                        *((char*)&ptr0[0] + 6) = 0;
                    }
                    param3 = ptr3;
                }
                else if((unsigned char)v24 >= 0) {
                    goto loc_40B337;
                }
                else if((unsigned char)((unsigned char)v24 + 62) <= 29) {
                    *((char*)&ptr0[0] + 6) = 1;
                    v0 = (unsigned int)v24 & 0x1f;
                    *(int*)&ptr0[0] = v0;
                    goto loc_40B36A;
                }
                else if((unsigned char)((unsigned char)v24 + 32) <= 15) {
                    if((unsigned char)v24 == 224) {
                        *((char*)&ptr0[0] + 5) = 160;
                    }
                    else if((unsigned char)v24 == 237) {
                        *((char*)&ptr0[0] + 4) = 159;
                    }
                    *((char*)&ptr0[0] + 6) = 2;
                    v0 = (unsigned int)v24 & 0xF;
                    *(int*)&ptr0[0] = v0;
                    goto loc_40B36A;
                }
                else if((unsigned char)((unsigned char)v24 + 16) <= 4) {
                    if((unsigned char)v24 == 240) {
                        *((char*)&ptr0[0] + 5) = 144;
                    }
                    else if((unsigned char)v24 == 244) {
                        *((char*)&ptr0[0] + 4) = 143;
                    }
                    *((char*)&ptr0[0] + 6) = 3;
                    v0 = (unsigned int)v24 & 0x7;
                    *(int*)&ptr0[0] = v0;
                    goto loc_40B36A;
                }
            loc_40B328:
                if(*(char*)&ptr0[1]) {
                    v2 = "utf-8 decode failed";
                    v1 = 0x600014eL;
                    sub_401C42(param0, "third_party/duktape/duk_bi_encoding.c", v1, v2);
                    return 0L;
                }
                v24 = 0xfffdL;
            loc_40B337:
                if(!*((char*)&ptr0[0] + 7)) {
                    *((char*)&ptr0[0] + 7) = 1;
                    if((unsigned int)v24 != 0xfeff || *((char*)&ptr0[1] + 1)) {
                        goto loc_40B33C;
                    }
                }
                else {
                loc_40B33C:
                    long long* ptr4 = param3;
                    long long* ptr5 = ptr1;
                    long long v26 = sub_41C6FA((unsigned int)v24, ptr2);
                    ptr1 = ptr5;
                    param3 = ptr4;
                    ptr2 = &ptr2[(long long)(unsigned int)v26];
                }
            loc_40B36A:
                ptr3 = param3;
            }
            if(!(unsigned int)v3) {
                if(*((char*)&ptr0[0] + 6)) {
                    if(*(char*)&ptr0[1]) {
                        v2 = "utf-8 decode failed";
                        v1 = 0x600014eL;
                        sub_401C42(param0, "third_party/duktape/duk_bi_encoding.c", v1, v2);
                        return 0L;
                    }
                    long long v27 = sub_41C6FA(0xfffd, ptr2);
                    ptr2 = &ptr2[(long long)(unsigned int)v27];
                }
                ptr0[0] = 0x80bf00000000L;
            }
            sub_406B69(param0, v23, (long long)(long long*)((long long)ptr2 - v23), (long long)param3);
            result = 1L;
        }
        else {
            v2 = "utf-8 decode failed";
            v1 = 0x600014eL;
            sub_401C42(param0, "third_party/duktape/duk_bi_encoding.c", v1, v2);
            result = 0L;
        }
    }
    return result;
}

void sub_40B6EA() {
    // Decompilation error
}

void sub_40B994() {
    // Decompilation error
}

long long sub_40B99E(long long param0, long long param1, long long param2, long long param3) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = *(long long*)(param0 + 64L);
    long long v6 = *(long long*)(v5 + 128L);
    *(int*)(v5 + 108L) = *(int*)(v5 + 108L) + 1;
    if(!v6) {
        long long v7 = sub_408C2C(param0, v5 + 144L, param2, param3);
        sub_438FFB(&v0, 128L, &gvar_43C6A0, v7, v2, v3);
        char v8 = 0;
        /*NO_RETURN*/ sub_408053(param0);
    }
    /*BAD_CALL!*/ sub_43B0EA(v6, 1L);
}

void sub_40BA70() {
    // Decompilation error
}

void sub_40BB4A() {
    // Decompilation error
}

void sub_40BDF0() {
    // Decompilation error
}

void sub_40BF33() {
    // Decompilation error
}

void sub_40C214() {
    // Decompilation error
}

void sub_40C30F() {
    // Decompilation error
}

void sub_40C5FE() {
    // Decompilation error
}

void sub_40C646() {
    // Decompilation error
}

void sub_40C6B4() {
    // Decompilation error
}

long long sub_40CA34(long long param0, long long param1) {
    long long result = *(long long*)(param1 + 8L);
    long long v0 = *(long long*)(param1 + 16L);
    if(result) {
        *(long long*)(result + 16L) = v0;
    }
    if(!v0) {
        *(long long*)(param0 + 64L) = result;
    }
    else {
        *(long long*)(v0 + 8L) = result;
    }
    return result;
}

void sub_40CA54(long long par0) {
    // Decompilation error
}

void sub_40CAE2() {
    // Decompilation error
}

void sub_40CAF7() {
    // Decompilation error
}

void sub_40CEAE() {
    // Decompilation error
}

long long sub_40CFCD(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

long long sub_40CFD5(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

void sub_40CFE0() {
    // Decompilation error
}

void sub_40D1BA() {
    // Decompilation error
}

void sub_40D302() {
    // Decompilation error
}

long long sub_40D33F(long long par0) {
    // Decompilation error
}

int* sub_40D37C(long long param0, long long param1, long long param2) {
    int* result;
    long long v0;
    long long v1;
    long long v2 = *(long long*)(param0 + 64L);
    long long v3 = v0;
    long long* ptr0 = (long long*)((((param2 & 0xFFFFFFFFL) ^ param1) & 0xFFL) * 16L + v2 + 328L);
    long long v4 = v1;
    if(*ptr0 == param1) {
        result = *(unsigned long long*)(ptr0 + 1);
    }
    else {
        result = (int*)sub_40D33F(param0);
        param2 = (unsigned long long)*result;
        *ptr0 = param1;
        *(unsigned long long*)(ptr0 + 1) = result;
        if(!((param2 >>> 15L) & 0x1L)) {
            *(result + 1) = *(result + 1) + 1;
            *result = (unsigned int)((unsigned long long)(unsigned char)param2 | ((unsigned long long)((unsigned char)(param2 >>> 8L) | 0x80) << 8) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16));
        }
    }
    return result;
}

void sub_40D3CE() {
    // Decompilation error
}

void sub_40D473() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D483(long long param0) {
    long long v0 = *(long long*)(param0 + 240L);
    long long v1 = (unsigned long long)*(int*)(param0 + 252L) * 8L + v0;
loc_40D4A4:
    while(v0 != v1) {
        long long v2 = *(long long*)(v1 - 8L);
        v1 -= 8L;
        while(1) {
            if(!v2) {
                continue loc_40D4A4;
            }
            else {
                long long v3 = *(long long*)(v2 + 8L);
                long long v4 = param0;
                sub_403142(param0);
                param0 = v4;
                v2 = v3;
            }
        }
    }
    return sub_403142(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D513(long long param0, int param1, long long param2, long long param3) {
    long long result = sub_402F7A(param0, 56L, param2, param3);
    if(result) {
        *(int*)result = param1 | 0x1;
        sub_40C9D7(param0, result);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D558(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_402FE5(param0, 104L, 104L, param3);
    long long v3 = *(long long*)(param0 + 64L);
    *(int*)v2 = param1 | 0x1;
    long long result = v2;
    sub_40C9D7(v3, v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D56C(long long param0, int param1, long long param2, long long param3) {
    int* ptr0;
    long long v0;
    long long v1 = v0;
    long long result = sub_402F19(param0, 104L, param2, param3);
    if(result) {
        long long v2 = result;
        sub_43ABE2(result, 0L, 104L, param3);
        *ptr0 = param1 | 0x1;
        sub_40C9D7(param0, (long long)ptr0);
        result = v2;
        *(int*)(result + 56L) = 2;
        *(int*)(result + 72L) = 2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D5D1(long long param0, int param1, long long param2, long long param3) {
    int* ptr0;
    long long v0;
    long long v1 = v0;
    long long result = sub_402F19(param0, 576L, param2, param3);
    if(result) {
        long long v2 = result;
        sub_43ABE2(result, 0L, 576L, param3);
        *ptr0 = param1 | 0x1;
        sub_40C9D7(param0, (long long)ptr0);
        result = v2;
        *(long long*)(result + 64L) = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D625(long long param0, long long param1, long long param2, long long param3) {
    long long result = sub_40D5D1(*(long long*)(param0 + 64L), param1, param2, param3);
    if(!result) {
        sub_401CC7(param3, 216L);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D66C(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_402FE5(param0, 80L, 80L, param3);
    long long v3 = *(long long*)(param0 + 64L);
    *(int*)v2 = param1 | 0x1;
    long long result = v2;
    sub_40C9D7(v3, v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D676(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_402FE5(param0, 72L, 72L, param3);
    long long v3 = *(long long*)(param0 + 64L);
    *(int*)v2 = param1 | 0x1;
    long long result = v2;
    sub_40C9D7(v3, v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D680(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_402FE5(param0, 72L, 72L, param3);
    long long v3 = *(long long*)(param0 + 64L);
    *(int*)v2 = param1 | 0x1;
    long long result = v2;
    sub_40C9D7(v3, v2);
    return result;
}

long long sub_40D68A(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2 = v0;
    sub_407808(param0, param1);
    sub_40699D(param0, param1, v1);
    return sub_40388B(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D6B2(long long param0, unsigned long long param1, int param2) {
    int v0;
    long long* ptr0;
    long long v1;
    long long v2;
    long long v3;
    long long result;
    long long v4;
    int* ptr1;
    if((unsigned int)param1 + 1 < param2) {
        int v5 = (unsigned int)param1;
        int v6 = param2;
        long long v7 = (unsigned long long)((unsigned int)param1 + 1) | ((unsigned long long)((((param1 + 1L) & 0xFFFFFFFFL) >>> 31L) & 0x1L ? -1: 0) << 32);
        long long v8 = v4;
        long long v9 = v1;
        long long v10 = v2;
        long long v11 = (unsigned long long)*(int*)(param0 + 40L) * 16L + *(long long*)(param0 + 24L);
        do {
            int* ptr2 = *(unsigned long long*)(v7 * 8L + v11);
            long long v12 = v7 - 1L;
            param2 = (unsigned int)v7;
            param1 = (unsigned long long)((unsigned long long)(*ptr2 & 0x200) + (unsigned long long)*(ptr2 + 5));
            do {
                v0 = (unsigned int)v12;
                if((unsigned int)v12 < v5) {
                    break;
                }
                else {
                    ptr1 = *(unsigned long long*)(v12 * 8L + v11);
                    --v12;
                }
            }
            while((unsigned long long)((unsigned long long)(*ptr1 & 0x200) + (unsigned long long)*(ptr1 + 5)) > param1);
            if(v0 + 1 != (unsigned int)v7) {
                long long v13 = (long long)(v0 + 1) * 8L + 8L;
                sub_43ABC2(v11 + ((long long)(v0 + 1) * 8L + 8L), v11 + ((long long)(v0 + 1) * 8L + 8L) - 8L, (long long)(param2 - (v0 + 1)) * 8L, v11);
                *ptr0 = v3;
            }
            ++v7;
        }
        while((unsigned int)v7 < v6);
        return result;
    }
    return (param1 + 1L) & 0xFFFFFFFFL;
}

void sub_40D757() {
    // Decompilation error
}

void sub_40DC2D() {
    // Decompilation error
}

long long sub_40DE9A(int* param0, long long* param1, long long* param2) {
    long long result;
    if((*param0 & 0x2000000)) {
        *param2 = *(long long*)(param0 + 16);
        result = *(long long*)(param0 + 14);
        *param1 = *(long long*)(param0 + 14);
    }
    return result;
}

void sub_40DEB7() {
    // Decompilation error
}

int* sub_40DF43(int* param0) {
    int* i;
    for(i = param0; ((*i >>> 25) & 0x1); i = *(unsigned long long*)(i + 14)) {
    }
    return i;
}

long long sub_40DF53(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_40E25B(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long result;
    int v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    sub_40DD3B(param1, param1, param2, param3, param4);
    sub_40DD65(v3, (long long)&v0, (long long)(long long*)((char*)&v0 + 4L), param3, param4);
    long long v5 = (unsigned long long)((unsigned int)v0 + v1);
    long long v6 = (unsigned long long)((((unsigned int)v5 + 16) >>> 3) + (unsigned int)v5);
    long long v7 = __carry__(((unsigned int)v5 + 16) >>> 3, (unsigned int)v5) ? 1L: 0L;
    long long v8 = 0L;
    if((unsigned int)(unsigned long long)((((unsigned int)v5 + 16) >>> 3) + (unsigned int)v5) > 7) {
        long long v9 = sub_40DD1E((unsigned long long)((((unsigned int)v5 + 16) >>> 3) + (unsigned int)v5) & 0xFFFFFFFFL);
        v8 = v9 & 0xFFFFFFFFL;
    }
    if((unsigned int)(__carry__(((unsigned int)v5 + 16) >>> 3, (unsigned int)v5) ? 1L: 0L)) {
        sub_401CC7(__carry__(((unsigned int)v5 + 16) >>> 3, (unsigned int)v5) ? 1L: 0L, 1229L);
    }
    else {
        sub_40DF53(v3, param1, (unsigned long long)((((unsigned int)v5 + 16) >>> 3) + (unsigned int)v5), 0L, v8, 1L);
    }
    return result;
}

long long sub_40E2DD(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    unsigned int v2;
    char v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    unsigned int v7 = *(unsigned int*)(param2 + 48L);
    if((unsigned int)param1 < v7) {
        long long v8 = (unsigned long long)*(int*)(param2 + 40L);
        v1 = v8 * 25L + (param1 & 0xFFFFFFFFL) * 16L;
        v0 = v8 & 0xFFFFFFFFL;
    }
    else {
        if(((unsigned int)((unsigned int)(param1 & 0xFFFFFFFFL) + 1) > 0x100 && (unsigned int)(((v7 + 7) >>> 3) * 9) < (unsigned int)param1)) {
            sub_40DD65(param2, (long long)&v2, (long long)&v3, param3, param4);
            if((unsigned int)(((unsigned int)param1 >>> 3) * 2) > v2) {
                sub_40E25B(v5, param2, param2, param3, param4);
                return 0L;
            }
        }
        long long v9 = (unsigned long long)((((unsigned int)(param1 & 0xFFFFFFFFL) + 16) >>> 3) + (unsigned int)param1);
        if((unsigned int)((((unsigned int)(param1 & 0xFFFFFFFFL) + 16) >>> 3) + (unsigned int)param1) < (unsigned int)((unsigned int)(param1 & 0xFFFFFFFFL) + 1)) {
            sub_401CC7((unsigned long long)((((unsigned int)(param1 & 0xFFFFFFFFL) + 16) >>> 3) + (unsigned int)param1), 1174L);
        }
        else {
            sub_40DF53(param0, param2, (unsigned long long)*(int*)(param2 + 40L), (unsigned long long)((((unsigned int)(param1 & 0xFFFFFFFFL) + 16) >>> 3) + (unsigned int)param1), (unsigned long long)*(int*)(param2 + 52L), 0L);
        }
        v0 = (unsigned long long)*(int*)(param2 + 40L);
        v1 = (unsigned long long)*(int*)(param2 + 40L) * 25L + (param1 & 0xFFFFFFFFL) * 16L;
    }
    return (unsigned long long)((0 - (unsigned int)v0) & 0x7) + *(long long*)(param2 + 24L) + v1;
}

long long sub_40E3BE(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    long long v2 = v0;
    if(*(unsigned int*)(param1 + 40L) <= *(unsigned int*)(param1 + 44L)) {
        long long v3 = sub_40DD3B(param1, param1, param2, param3, param4);
        long long v4 = 0L;
        long long v5 = (unsigned long long)((((unsigned int)v3 + 16) >>> 3) + (unsigned int)v3);
        if((unsigned int)((((unsigned int)v3 + 16) >>> 3) + (unsigned int)v3) > 7) {
            long long v6 = sub_40DD1E((unsigned long long)((((unsigned int)v3 + 16) >>> 3) + (unsigned int)v3) & 0xFFFFFFFFL);
            v4 = v6 & 0xFFFFFFFFL;
        }
        if((unsigned int)((unsigned int)v3 + 1) > (unsigned int)(unsigned long long)((((unsigned int)v3 + 16) >>> 3) + (unsigned int)v3)) {
            sub_401CC7((v3 + 1L) & 0xFFFFFFFFL, 1137L);
        }
        else {
            sub_40DF53(v1, param1, (unsigned long long)((((unsigned int)v3 + 16) >>> 3) + (unsigned int)v3), (unsigned long long)*(int*)(param1 + 48L), v4, 0L);
        }
    }
    unsigned int* i = (unsigned int*)*(int*)(param1 + 40L);
    long long v7 = (unsigned long long)*(int*)(param1 + 44L);
    long long v8 = *(long long*)(param1 + 24L);
    int v9 = *(int*)(param1 + 52L);
    *(int*)(param1 + 44L) = (unsigned int)v7 + 1;
    *(long long*)((long long)(long long*)(v7 * 8L + (long long)(long long*)((long long)i * 16L)) + v8) = param2;
    *(int*)(param2 + 4L) = *(int*)(param2 + 4L) + 1;
    if(v9) {
        --v9;
        long long* ptr0 = (long long*)((long long)(long long*)((long long)(long long*)((long long)i * 25L) + (unsigned long long)*(int*)(param1 + 48L) * 16L) + (unsigned long long)((0 - (unsigned int)i) & 0x7));
        long long* ptr1 = (long long*)(*(int*)(param2 + 16L) & v9);
        for(i = (unsigned int*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr1 & 0xFFFFFFFFL) * 4L) + (long long)ptr0) + v8); *i <= 0xfffffffd; i = (unsigned int*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr1 & 0xFFFFFFFFL) * 4L) + (long long)ptr0) + v8)) {
            ptr1 = (long long*)(((unsigned int)ptr1 + 1) & v9);
        }
        *i = (unsigned int)v7;
    }
    return v7 & 0xFFFFFFFFL;
}

long long sub_40E4C4(long long param0, long long param1, long long param2, long long param3, long long param4) {
    unsigned int v0;
    long long v1;
    long long result;
    int v2;
    long long v3;
    long long v4;
    long long v5 = v3;
    sub_40DD3B(param1, param1, param2, param3, param4);
    sub_40DD65(v4, (long long)(long long*)((char*)&v1 + 4L), (long long)&v1, param3, param4);
    long long v6 = 0L;
    if((unsigned int)(((unsigned int)v1 >>> 3) * 2) > (unsigned int)(v1 >>> 32L)) {
        v0 = (unsigned int)(v1 >>> 32L) + v2;
        v1 & 0xFFFFFFFFL = 0;
        v6 = 1L;
    }
    long long v7 = 0L;
    if(v0 > 7) {
        long long v8 = sub_40DD1E((unsigned long long)v0);
        v7 = v8 & 0xFFFFFFFFL;
    }
    sub_40DF53(v4, param1, (unsigned long long)v0, v1 & 0xFFFFFFFFL, v7, v6);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E635(long long param0, long long param1, long long param2, int* param3) {
    long long v0;
    int* ptr0;
    long long v1;
    long long v2 = v1;
    long long v3 = sub_40E53D(param0, param1, param2, (long long)&v0, (long long)(long long*)((char*)&v0 + 4L));
    long long result = 0L;
    if((unsigned int)v3) {
        long long v4 = *(long long*)(param1 + 24L);
        long long v5 = (unsigned long long)*(char*)((unsigned long long)*(int*)(param1 + 40L) * 24L + (long long)(unsigned int)v0 + v4);
        if(!(*(char*)((unsigned long long)*(int*)(param1 + 40L) * 24L + (long long)(unsigned int)v0 + v4) & 0x8)) {
            *ptr0 = (unsigned int)v5;
            result = (long long)(unsigned int)v0 * 16L + v4;
        }
    }
    return result;
}

long long sub_40E68B(long long param0, int* param1, long long param2) {
    return !((*param1 >>> 0xF) & 0x1) || (unsigned int)param2 >= *(unsigned int*)(param1 + 12) ? 0L: (unsigned long long)*(param1 + 10) * 25L + (param2 & 0xFFFFFFFFL) * 16L + ((unsigned long long)((0 - *(param1 + 10)) & 0x7) + *(long long*)(param1 + 6));
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E6C2() {
    long long result;
    long long v0;
    sub_40E6B8();
    if(v0) {
        result = *(long long*)(v0 + 8L);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E6D6(long long param0, long long param1) {
    long long result;
    int* ptr0;
    sub_40E629(*(long long*)(param0 + 64L), param1, 99L);
    if(ptr0) {
        result = *ptr0 == 9 ? *(long long*)(ptr0 + 2): 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40E6FC(long long param0, long long param1) {
    long long result;
    int* ptr0;
    sub_40E629(*(long long*)(param0 + 64L), param1, 100L);
    if(ptr0) {
        result = *ptr0 == 9 ? *(long long*)(ptr0 + 2): 0L;
    }
    return result;
}

long long sub_40E804(long long par0, long long par1) {
    // Decompilation error
}

long long sub_40E863(long long param0, int* param1, long long param2, unsigned int param3, int* param4, int param5) {
    long long v0;
    long long v1;
    long long v2;
    long long* ptr0;
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
    long long v13 = v10;
    long long v14 = v9;
    long long v15 = v8;
    long long v16 = v11;
    long long v17 = *(long long*)(param0 + 64L);
    (v4 >>> 32L) & 0xFFFFFFFFL = param5;
    long long v18 = sub_40E53D(v17, (long long)param1, param2, (long long)(long long*)(param4 + 6), (long long)(long long*)(param4 + 7));
    v4 & 0xFFL = param3 == -1 ? 0: 1;
    if((unsigned int)v18) {
        long long v19 = (unsigned long long)*(param1 + 10);
        long long v20 = *(long long*)(param1 + 6);
        long long v21 = (long long)*(param4 + 6);
        *(param4 + 8) = -1;
        v3 = (unsigned long long)*(char*)(v19 * 24L + v20 + v21);
        *(long long*)(param4 + 2) = 0L;
        ptr0 = (long long*)(v21 * 16L + v20);
        *(long long*)(param4 + 4) = 0L;
        *param4 = (unsigned int)v3;
        if(((unsigned char)v3 & 0x8)) {
            *(long long*)(param4 + 2) = *ptr0;
            long long v22 = *(ptr0 + 1);
            *(long long*)(param4 + 4) = *(ptr0 + 1);
            if(((unsigned int)(v4 >>> 32L) & 0x1)) {
                sub_4068D1(param0, (long long)ptr0, v22);
            }
        }
        else if(((unsigned int)(v4 >>> 32L) & 0x1)) {
            sub_406883(param0, (long long)ptr0);
        }
        goto loc_40EBB4;
    }
    else {
        v3 = (unsigned long long)*param1;
        v2 = v18 & 0xFFFFFFFFL;
        if(!((v3 >>> 15L) & 0x1L) || !(unsigned char)v4 || *(unsigned int*)(param1 + 12) <= param3) {
        loc_40E99D:
            if(!((unsigned int)v3 & 0xc02000)) {
                return v2 & 0xFFFFFFFFL;
            }
            if(((v3 >>> 22L) & 0x1L)) {
                if(*(long long*)(*(long long*)(param0 + 568L) + 696L) == param2) {
                    if(((unsigned char)(v4 >>> 32L) & 0x1)) {
                        sub_406AAF(param0, (unsigned long long)*(param1 + 14));
                    }
                    *param4 = !(*(param1 + 0xF) ? 0: 1) ? 16: 17;
                    *(long long*)(param4 + 2) = 0L;
                    *(long long*)(param4 + 4) = 0L;
                    *(long long*)(param4 + 6) = -1L;
                    *(param4 + 8) = -1;
                    v2 = 1L;
                }
                return v2 & 0xFFFFFFFFL;
            }
            else if(((v3 >>> 23L) & 0x1L)) {
                if(param3 != -1) {
                    v4 & 0xFFFFFFFFL = (unsigned int)v2;
                    sub_40E6B8();
                    long long v23 = v7;
                    if(v7) {
                        v23 = *(long long*)(v7 + 8L);
                    }
                    unsigned long long v24 = (unsigned long long)sub_40314F(v23, (long long)param1, param2, v6);
                    v2 = v4 & 0xFFFFFFFFL;
                    if((unsigned long long)param3 < v24) {
                        if(((unsigned char)(v4 >>> 32L) & 0x1)) {
                            sub_407808(param0, v23);
                            sub_409057(param0, 0xFFFFFFFFL, (unsigned long long)param3, (unsigned long long)(((unsigned long long)param3 + 1L) & 0xFFFFFFFFL));
                        }
                        *param4 = 18;
                        *(long long*)(param4 + 2) = 0L;
                        *(long long*)(param4 + 4) = 0L;
                        *(long long*)(param4 + 6) = -1L;
                        *(param4 + 8) = -1;
                        v2 = 1L;
                    }
                    return v2 & 0xFFFFFFFFL;
                }
                else if(*(long long*)(*(long long*)(param0 + 568L) + 696L) != param2) {
                    return v2 & 0xFFFFFFFFL;
                }
                sub_40E6B8();
                long long v25 = v7;
                if(v7) {
                    v25 = *(long long*)(v7 + 8L);
                }
                if(!((unsigned char)(v4 >>> 32L) & 0x1)) {
                    goto loc_40EACE;
                }
                else {
                    v1 = sub_40314F(v25, (long long)param1, param2, v6);
                    goto loc_40EAC9;
                }
            }
            if(!((v3 >>> 13L) & 0x1L)) {
                return v2 & 0xFFFFFFFFL;
            }
            else if(param3 != -1 && *(char*)((char*)param1 + 82L)) {
                v3 = (unsigned long long)*(char*)(param1 + 20);
                if((unsigned int)(*(param1 + 19) >>> (v3 & 0x1fL)) <= param3) {
                    return v2 & 0xFFFFFFFFL;
                }
                if(((unsigned char)(v4 >>> 32L) & 0x1)) {
                    char* ptr1 = *(unsigned long long*)(param1 + 14);
                    if(ptr1) {
                        long long v26 = (unsigned long long)(param3 << (v3 & 0x1fL));
                        long long v27 = (unsigned long long)*(param1 + 18);
                        if((unsigned long long)((1 << (v3 & 0x1fL)) + (unsigned int)v26 + *(param1 + 18)) > *(unsigned long long*)(ptr1 + 24L)) {
                            sub_406AAF(param0, 0L);
                            *param4 = *param1 >>> 27 == 19 ? 17: 19;
                            *(long long*)(param4 + 2) = 0L;
                            *(long long*)(param4 + 4) = 0L;
                            *(long long*)(param4 + 6) = -1L;
                            *(param4 + 8) = -1;
                            v2 = 1L;
                            return v2 & 0xFFFFFFFFL;
                        }
                        long long* ptr2 = (long long*)(ptr1 + 32L);
                        if((*ptr1 & 0x80)) {
                            ptr2 = *(unsigned long long*)(ptr1 + 32L);
                        }
                        sub_4096D9(param0, (long long)param1, (long long)(long long*)((long long)(long long*)(v27 + (long long)ptr2) + v26), (unsigned long long)(1 << (v3 & 0x1fL)), v2, v12, v5, v4);
                    }
                    else {
                        sub_406AAF(param0, 0L);
                    }
                }
                *param4 = *param1 >>> 27 == 19 ? 17: 19;
                *(long long*)(param4 + 2) = 0L;
                *(long long*)(param4 + 4) = 0L;
                *(long long*)(param4 + 6) = -1L;
                *(param4 + 8) = -1;
                v2 = 1L;
                return v2 & 0xFFFFFFFFL;
            }
            else if(*(long long*)(*(long long*)(param0 + 568L) + 696L) != param2 || !*(char*)((char*)param1 + 82L)) {
                return v2 & 0xFFFFFFFFL;
            }
            if(((unsigned char)(v4 >>> 32L) & 0x1)) {
                v1 = (unsigned long long)(*(param1 + 19) >>> ((unsigned long long)*(char*)(param1 + 20) & 0x1fL));
            loc_40EAC9:
                sub_406AAF(param0, v1);
            }
        loc_40EACE:
            *param4 = 16;
            *(long long*)(param4 + 2) = 0L;
            *(long long*)(param4 + 4) = 0L;
            *(long long*)(param4 + 6) = -1L;
            *(param4 + 8) = -1;
            v2 = 1L;
            return v2 & 0xFFFFFFFFL;
        }
        ptr0 = (long long*)((unsigned long long)*(param1 + 10) * 25L + (unsigned long long)param3 * 16L + ((unsigned long long)((0 - *(param1 + 10)) & 0x7) + *(long long*)(param1 + 6)));
        if(*(int*)ptr0 == 7) {
            goto loc_40E99D;
        }
        else {
            if(((unsigned char)(v4 >>> 32L) & 0x1)) {
                sub_406883(param0, (long long)ptr0);
            }
            *param4 = 7;
            *(long long*)(param4 + 2) = 0L;
            *(long long*)(param4 + 4) = 0L;
            *(long long*)(param4 + 6) = -1L;
            *(unsigned int*)(param4 + 8) = param3;
        loc_40EBB4:
            v2 = 1L;
            if(!((*param1 >>> 24) & 0x1) || !(unsigned char)v4 || !((unsigned char)(v4 >>> 32L) & 0x1)) {
                return v2 & 0xFFFFFFFFL;
            }
            v0 = sub_40E804(param0, (long long)param1);
        }
        if((unsigned int)v0) {
            sub_405181();
        }
        v2 = 1L;
    }
    return v2 & 0xFFFFFFFFL;
}

void sub_40EC01() {
    // Decompilation error
}

long long sub_40F1DF(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_40F3D3(long long param0, int* param1, long long param2) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    int v6 = 10001;
    long long v7 = v1;
    int* ptr0 = param1;
    int v8 = *(int*)(param2 + 20L);
    do {
        long long v9 = sub_40E863(param0, ptr0, param2, (long long)v8, &v0, 2L);
        if(!(unsigned int)v9) {
            --v6;
            if(v6) {
                ptr0 = *(long long*)&ptr0[8];
            }
        }
        else {
            v6 = 1;
        }
        return (unsigned long long)v6;
    }
    while(ptr0);
    v6 = 0;
    return (unsigned long long)v6;
}

void sub_40F441() {
    // Decompilation error
}

void sub_40F669() {
    // Decompilation error
}

void sub_40F7B6() {
    // Decompilation error
}

long long sub_41018F(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_4103F9(long long par0, long long par1, long long par2, long long par3, long long par4, long long par5) {
    // Decompilation error
}

long long sub_4106A4(long long par0, long long par1) {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_410761(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    char v1;
    long long v2;
    long long v3;
    long long result;
    long long v4;
    long long v5 = sub_408496(param0, param1, 640L, param3, param4);
    long long v6 = sub_4089B9(param0, 0xFFFFFFFFL);
    long long v7 = sub_40E722(param0, v5, v6, &v1, 1L);
    if(!(unsigned int)v7) {
        sub_4068D1(param0, param1, v4);
        sub_405181();
    }
    else {
        sub_407095(param0);
        if((v1 & 0x8)) {
            if(v2) {
                sub_407C45(param0, v2);
            }
            else {
                sub_4068D1(param0, 0L, v4);
            }
            sub_403A07(param0, 0xfffe0049L);
            if(v3) {
                sub_407C45(param0, v3);
            }
            else {
                sub_4068D1(param0, 0L, v4);
            }
            v0 = 0xfffe0058L;
        }
        else {
            sub_404FF1();
            sub_403A07(param0, 0xfffe0022L);
            sub_406955(param0, (long long)(*(int*)&v1 & 0x1));
            v0 = 0xfffe0023L;
        }
        sub_403A07(param0, v0);
        sub_406955(param0, (long long)((*(int*)&v1 >>> 1) & 0x1));
        sub_403A07(param0, 0xfffe0025L);
        sub_406955(param0, (long long)((*(int*)&v1 >>> 2) & 0x1));
        sub_403A07(param0, 0xfffe0024L);
        sub_405057(param0, 0xfffffffdL, v4, param3);
        sub_40460F(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_410892(long long param0, long long param1, int* param2, long long param3, long long param4, long long* param5) {
    long long v0;
    long long v1;
    int v2;
    long long v3;
    long long result;
    long long v4;
    long long v5 = v4;
    int* ptr0 = param2;
    long long v6 = param3;
    long long v7 = param4;
    long long* result1 = param5;
    long long v8 = sub_40480A(param0, param1);
    sub_40582D(param0, v8 & 0xFFFFFFFFL);
    long long v9 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 34L);
    int v10 = (unsigned int)v9;
    if((unsigned int)v9) {
        v3 = 64L;
        long long v11 = sub_404C73(param0);
        v10 = 1;
        v2 = (unsigned int)v11;
    }
    else {
        v3 = 0L;
        v2 = -1;
    }
    long long v12 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 35L);
    if((unsigned int)v12) {
        long long v13 = sub_405C10(param0);
        v3 = (unsigned int)v13 != 0 ? (unsigned long long)((unsigned int)v3 | 0x9): (unsigned long long)((unsigned int)v3 | 0x8);
        v10 = 1;
    }
    long long v14 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 73L);
    int v15 = (unsigned int)v14;
    if((unsigned int)v14) {
        v1 = 0L;
        int* ptr1 = (int*)sub_404A12(param0, 0xFFFFFFFFL);
        if(*ptr1 != 2) {
            long long v16 = sub_408491(param0, 0xFFFFFFFFL, 0x200L, param3, param4);
            v1 = v16;
            if(!v16 || !((*(int*)v16 >>> 9) & 0x1)) {
                sub_401C42(param0, "third_party/duktape/duk_hobject_props.c", 0x600141fL, "invalid descriptor");
                return result;
            }
        }
        v3 = (unsigned long long)((unsigned char)v3 | 0x80) | ((unsigned long long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        v15 = 1;
        goto loc_41099A;
    }
    else {
        v1 = 0L;
    loc_41099A:
        long long v17 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 88L);
        if((unsigned int)v17) {
            v0 = 0L;
            int* ptr2 = (int*)sub_404A12(param0, 0xFFFFFFFFL);
            if(*ptr2 != 2) {
                long long v18 = sub_408491(param0, 0xFFFFFFFFL, 0x200L, param3, param4);
                v0 = v18;
                if(!v18 || !((*(int*)v18 >>> 9) & 0x1)) {
                    sub_401C42(param0, "third_party/duktape/duk_hobject_props.c", 0x600141fL, "invalid descriptor");
                    return result;
                }
            }
            v3 = (unsigned long long)(unsigned char)v3 | ((unsigned long long)((unsigned char)(v3 >>> 8L) | 0x1) << 8) | ((unsigned long long)((v3 >>> 16L) & 0xffffffffffffL) << 16);
            v15 = 1;
            goto loc_4109F6;
        }
        else {
            v0 = 0L;
        loc_4109F6:
            long long v19 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 37L);
            if((unsigned int)v19) {
                long long v20 = sub_405C10(param0);
                v3 = (unsigned int)v20 != 0 ? (unsigned long long)((unsigned int)v3 | 0x12): (unsigned long long)((unsigned int)v3 | 0x10);
            }
            long long v21 = sub_40377C(param0, (unsigned long long)(unsigned int)v8, 36L);
            if((unsigned int)v21) {
                long long v22 = sub_405C10(param0);
                v3 = (unsigned int)v22 != 0 ? (unsigned long long)((unsigned int)v3 | 0x24): (unsigned long long)((unsigned int)v3 | 0x20);
            }
            if(!(v15 & v10)) {
                *ptr0 = (unsigned int)v3;
                *(int*)v6 = v2;
                *(long long*)v7 = v1;
                *result1 = v0;
                return result1;
            }
        }
    }
    sub_401C42(param0, "third_party/duktape/duk_hobject_props.c", 0x600141fL, "invalid descriptor");
    return result;
}

void sub_410A94() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41162B(long long param0, int param1) {
    int v0;
    long long v1 = sub_408A2B(param0, 0L);
    long long v2 = sub_40869C(param0);
    long long v3 = sub_40E722(param0, v2, v1, &v0, 0L);
    sub_406955(param0, !(unsigned int)v3 ? 0L: (param1 & v0) == param1 ? 1L: 0L);
    return 1L;
}

long long sub_41168F(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1 = v0;
    long long result = sub_40E25B(param0, param1, param2, param3, param4);
    for(unsigned int i = 0; i < *(unsigned int*)(param1 + 44L); ++i) {
        result = (unsigned long long)*(int*)(param1 + 40L) * 24L + (unsigned long long)i + *(long long*)(param1 + 24L);
        long long v2 = (unsigned int)param2 && !(*(char*)result & 0x8) ? (unsigned long long)((unsigned int)((unsigned long long)*(char*)result | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8)) & 0xfffffffa): (unsigned long long)((unsigned int)((unsigned long long)*(char*)result | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8)) & 0xfffffffb);
        *(char*)result = (unsigned char)v2;
    }
    *(int*)param1 = *(int*)param1 & 0xffffff7f;
    return result;
}

long long sub_4116DD(long long param0, int* param1, long long param2) {
    long long v0 = (unsigned long long)(*param1 & 0x80);
    if(!(*param1 & 0x80)) {
        long long v1 = (unsigned long long)*(param1 + 11);
        for(long long i = 0L; (unsigned int)i < (unsigned int)v1; ++i) {
            long long v2 = (unsigned long long)*(param1 + 10);
            long long v3 = *(long long*)(param1 + 6);
            if(*(long long*)(i * 8L + v2 * 16L + v3)) {
                v3 += v2 * 24L;
                if((*(char*)(i + v3) & 0x4) || ((unsigned int)param2 && !((unsigned char)((unsigned int)((unsigned long long)*(char*)(i + v3) | ((unsigned long long)((v3 >>> 8L) & 0xffffffffffffffL) << 8)) & 0x9) + 0xFF))) {
                    return v0 & 0xFFFFFFFFL;
                }
            }
        }
        long long v4 = (unsigned long long)*(param1 + 12);
        param2 = 0L;
        while((unsigned int)param2 < (unsigned int)v4) {
            long long v5 = param2;
            ++param2;
            if(*(int*)((unsigned long long)*(param1 + 10) * 25L + v5 * 16L + ((unsigned long long)((0 - *(param1 + 10)) & 0x7) + *(long long*)(param1 + 6))) != 7) {
                return v0 & 0xFFFFFFFFL;
            }
        }
        v0 = 1L;
    }
    else {
        v0 = 0L;
    }
    return v0 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41176B(long long param0, int* param1, long long param2, long long param3) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = sub_40D015(param0, param1, param2, param3);
    long long v11 = (unsigned long long)param1[6];
    long long* ptr0 = (long long*)((v10 & 0xFFFFFFFFL) + (long long)param1) + 4;
    long long* ptr1 = (long long*)((long long)param1 + v11) + 4;
    long long v12 = sub_41C7A1(param0, (long long)&ptr0, (long long)(long long*)(param1 + 8), (long long)ptr1, (long long)&v0, v5);
    if(!(unsigned int)v12) {
        v0 = 0xfffd;
    }
    else if((unsigned int)param3 && (unsigned int)(v0 - 0xd800) <= 0x3ff) {
        int v13 = 0;
        sub_41C7A1(param0, (long long)&ptr0, (long long)(long long*)(param1 + 8), (long long)ptr1, (long long)&v13, v5);
        if((unsigned int)(v13 - 0xdc00) <= 0x3ff) {
            v0 = (v0 - 0xd800) * 0x400 + v13 + 0x2400;
        }
    }
    return (unsigned long long)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411829(long long param0, long long param1) {
    long long v0;
    int v1;
    long long v2;
    sub_43AD53(param1, param1);
    long long result = 0L;
    if((unsigned long long)*(int*)(v2 + 24L) == v0) {
        sub_43AA7D();
        result = v1 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411864(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = sub_402F19(param0, 0x600L, param2, param3);
    *(long long*)(v1 + 80L) = v3;
    if(!v3) {
        sub_403142(param0);
        *(long long*)(v1 + 80L) = 0L;
        result = 0L;
    }
    else {
        sub_43ABE2(v3, 0L, 0x600L, param3);
        int* ptr0 = *(unsigned long long*)(v1 + 80L);
        *(unsigned long long*)(v1 + 104L) = *(unsigned long long*)(v1 + 80L);
        *(unsigned long long*)(v1 + 112L) = ptr0;
        *(unsigned long long*)(v1 + 88L) = (long long*)(ptr0 + 0x100);
        long long* ptr1 = (long long*)(ptr0 + 384);
        *(unsigned long long*)(v1 + 96L) = (long long*)(ptr0 + 384);
        do {
            *ptr0 = 2;
            ptr0 += 4;
        }
        while(ptr0 != ptr1);
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4118E9(long long param0, long long* param1) {
    long long result;
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = sub_41CE24(param1);
    if(!(unsigned int)v6) {
        long long v7 = sub_41CE93(param1, &v0, v2, v3);
        result = sub_406B69(v4, &v0, (unsigned long long)(v7 & 0xFFFFFFFFL), v3);
    }
    else {
        result = sub_407826(v4, (v6 - 1L) & 0xFFFFFFFFL);
    }
    return result;
}

void sub_411944() {
    // Decompilation error
}

long long sub_411F9C(long long param0, long long param1) {
    long long v0 = 160L;
    do {
        long long v1 = *(long long*)(v0 + param0);
        *(long long*)(v0 + param1) = *(long long*)(v0 + param0);
        if(v1) {
            *(int*)(v1 + 4L) = *(int*)(v1 + 4L) + 1;
        }
        v0 += 8L;
    }
    while(v0 != 568L);
    return 568L;
}

void sub_411FBE() {
    // Decompilation error
}

void sub_412059() {
    // Decompilation error
}

void sub_4120AE() {
    // Decompilation error
}

long long sub_412195(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = *(long long*)(param0 + 64L);
    long long result = *(long long*)(v0 + 72L);
    if(result) {
        *(long long*)(v0 + 72L) = *(long long*)(result + 24L);
    }
    else {
        result = sub_402FA0(param0, 96L, v0, param3);
    }
    return result;
}

long long sub_412200(long long param0, int param1) {
    long long result = 0L;
    if(param1 < 0) {
        result = *(long long*)(param0 + 120L);
        while(result && param1 != -1) {
            result = *(long long*)(result + 24L);
            ++param1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_412251(long long* param0) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v1;
    long long v9 = v3;
    long long v10 = *param0;
    sub_404AE7(v10);
    sub_43ABE2((long long)(param0 + 226), 0L, 216L, v4);
    sub_404E3A(v10, 16L);
    sub_41CF97(v10, param0 + 226, 0x800L, v4);
    sub_407108(v10, v5, v6, v4);
    long long v11 = ((long long)v0 + 1L) * 16L;
    *(int*)(param0 + 0xee) = v0 + 1;
    *(param0 + 231) = *(long long*)(*(long long*)(v10 + 104L) + ((long long)v0 + 1L) * 16L + 8L);
    sub_407108(v10, v5, v6, v4);
    *(int*)((char*)param0 + 0x774L) = v0 + 2;
    *(param0 + 232) = *(long long*)(*(long long*)(v10 + 104L) + ((long long)v0 + 1L) * 16L + 24L);
    sub_407108(v10, v5, v6, v4);
    *(int*)(param0 + 239) = v0 + 3;
    *(param0 + 233) = *(long long*)(*(long long*)(v10 + 104L) + ((long long)v0 + 1L) * 16L + 40L);
    sub_407108(v10, v5, v6, v4);
    *(int*)((char*)param0 + 0x77cL) = v0 + 4;
    *(param0 + 234) = *(long long*)(*(long long*)(v10 + 104L) + ((long long)v0 + 1L) * 16L + 56L);
    sub_40762B(v10, 0L, 1L);
    *(int*)(param0 + 240) = v0 + 5;
    long long v12 = sub_405B46(v10, ((unsigned long long)v0 + 5L) & 0xFFFFFFFFL);
    *(param0 + 235) = v12;
    sub_407108(v10, v5, v6, v4);
    *(int*)((char*)param0 + 1924L) = v0 + 6;
    *(param0 + 236) = *(long long*)(*(long long*)(v10 + 104L) + ((long long)v0 + 1L) * 16L + 88L);
    sub_40779C(v10, v5, v6, v4);
    long long v13 = *(long long*)(v10 + 104L);
    *(int*)(param0 + 241) = v0 + 7;
    long long result = *(long long*)(v13 + ((long long)v0 + 1L) * 16L + 104L);
    *(param0 + 237) = *(long long*)(v13 + ((long long)v0 + 1L) * 16L + 104L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4123AE(long long* param0, long long param1, int param2, int* param3, int* param4, int* param5, int* param6) {
    long long v0;
    char* ptr0;
    long long v1;
    long long result;
    int* ptr1 = param6;
    long long v2 = v1;
    long long v3 = *(param0 + 235);
    long long v4 = *param0;
    unsigned long long v5 = *(unsigned long long*)(v3 + 32L);
    char* ptr2 = (char*)(*(long long*)(v3 + 24L) + v5);
    for(char* i = (char*)(*(long long*)(v3 + 24L) + v5); (unsigned long long)i > v5; i = ptr0) {
        ptr0 = i - 24L;
        if(*(long long*)(i - 16L) == param1) {
            if((param2 || (*ptr0 & 0x2))) {
                *param3 = *(int*)(i - 20L);
                *param4 = *(int*)(i - 8L);
                *param5 = *(int*)(i - 4L);
                *ptr1 = (long long*)(ptr2 - 24L) == ptr0 ? 1: 0;
                jump *(&v2 + 3);
            }
            if(*(long long*)(*(long long*)(v4 + 568L) + 120L) != param1) {
                v0 = 0x5000c43L;
                sub_401C42(v4, "third_party/duktape/duk_js_compiler.c", v0, "invalid label");
                return result;
            }
        }
    }
    v0 = 0x5000c4eL;
    sub_401C42(v4, "third_party/duktape/duk_js_compiler.c", v0, "invalid label");
    return result;
}

long long sub_412449(long long par0, long long par1) {
    // Decompilation error
}

long long sub_412529(long long param0) {
    return sub_412449(param0, 0xFFFFFFFFL);
}

void sub_412531() {
    // Decompilation error
}

void sub_412615() {
    // Decompilation error
}

void sub_412717() {
    // Decompilation error
}

void sub_41282E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_412889(long long* param0) {
    long long* ptr0;
    int v0 = *(int*)(param0 + 224);
    if(*(int*)((char*)param0 + 1796L) <= v0) {
        return sub_401CE2(*param0, "third_party/duktape/duk_js_compiler.c", 560L, "compiler recursion limit");
    }
    *(int*)(param0 + 224) = v0 + 1;
    jump *ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_4128B7(long long* param0, int param1) {
    int v0 = *(int*)(param0 + 242) + param1;
    *(int*)(param0 + 242) = *(int*)(param0 + 242) + param1;
    if(v0 > 0xFFFF) {
        sub_401CE2(*param0, "third_party/duktape/duk_js_compiler.c", 2241L, "temp limit");
    }
    else if(*(int*)((char*)param0 + 1940L) < v0) {
        *(int*)((char*)param0 + 1940L) = v0;
        return;
    }
}

long long sub_4128FC(long long* param0) {
    long long result;
    sub_4128B7(param0, 1L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_412903(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long result;
    long long v2;
    long long* ptr0 = &v0;
    v0 = v2;
    long long v3 = param0[226];
    if((unsigned long long)(param0[228] - v3) <= 7L) {
        ptr0 = &v1;
        v3 = sub_41CFE2(param0[0], param0 + 226, 8L, param3);
    }
    int v4 = *(int*)&param0[213];
    long long v5 = param0[226] + 8L;
    param0[226] += 8L;
    if(!v4) {
        v4 = *(int*)&param0[220];
    }
    unsigned long long v6 = (unsigned long long)(v5 - param0[227]);
    *(int*)v3 = (unsigned int)param1;
    *(int*)(v3 + 4L) = v4;
    if(v6 > 0x7fff0000L || v4 > 0x7fff0000) {
        sub_401CE2("bytecode limit", 1379L);
        return result;
    }
    jump *(ptr0 + 3);
}

long long sub_4129C3(long long* param0, long long param1, long long param2, long long param3) {
    return sub_412903(param0, 206L, param2, param3);
}

void sub_4129CD() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_412DAE(long long* param0, int param1, long long param2, long long param3) {
    long long* ptr0;
    long long v0;
    long long v1;
    char v2;
    long long v3;
    unsigned long long* ptr1 = &v2;
    if(!((unsigned int)param3 & 0x7fff0000)) {
        long long v4 = (unsigned long long)param1;
        int v5 = (unsigned int)param3 & 0x7fffffff;
        if((unsigned int)param2 <= 0xFF) {
            v1 = v4 & 0xFFL;
            v0 = (long long)(((unsigned int)param2 * 0x100) | (v5 * 0x10000) | (unsigned int)v1);
            goto loc_412E44;
        }
        else if(!((param1 >>> 8) & 0x1)) {
            if((param1 & 0xf0) == 176) {
                int v6 = *(int*)&param0[243];
                *((char*)&param0[252] + 3) = 1;
                ptr0 = param0;
                ptr1 = &v3;
                sub_412F21((long long)param0, (unsigned long long)v6, param2);
                v0 = (long long)((v5 * 0x10000) | (v6 * 0x100) | (unsigned int)(v4 & 0xFFL) | 0x8);
            loc_412E35:
                param0 = ptr0;
            loc_412E44:
                ptr1 += 7;
                /*BAD_CALL!*/ sub_412903(param0, v0, v1, param3);
            }
            if((unsigned int)param2 <= 0xFFFF) {
                int v7 = *(int*)&param0[243];
                long long v8 = (long long)((unsigned int)param2 * 0x10000);
                *((char*)&param0[252] + 3) = 1;
                int v9 = v7 * 0x100;
                int v10 = (unsigned int)v8 | v9;
                int v11 = (v5 * 0x10000) | (unsigned int)(param1 & 0xFF) | v9;
                ptr0 = param0;
                --ptr1;
                if(((param1 >>> 11) & 0x1)) {
                    *ptr1 = &loc_412E89;
                    /*BAD_CALL!*/ sub_412903(param0, (long long)v10, v8, param3);
                    v0 = (long long)v11;
                }
                else {
                    *ptr1 = &loc_412E9A;
                    /*BAD_CALL!*/ sub_412903(param0, (long long)v11, v8, param3);
                    v0 = (long long)(v10 | 0x1);
                }
                goto loc_412E35;
            }
        }
    }
    /*BAD_CALL!*/ sub_401CE2("register limit", 1794L);
}

long long sub_412EC4(long long* param0, long long param1, long long param2) {
    return sub_412DAE(param0, param1, 0L, param2 & 0xFFFFFFFFL);
}

long long sub_412ED7(long long* param0, int param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = (unsigned long long)param1;
    if(param1 < 0) {
        v3 = (unsigned long long)*(int*)((char*)&param0[247] + 4);
        *(int*)((char*)&param0[247] + 4) = (unsigned int)v3 + 1;
        sub_412EC4(param0, 161L, v3 & 0xFFFFFFFFL);
        sub_4129C3(param0, v0, v1, v2);
        sub_4129C3(param0, v0, v1, v2);
    }
    return v3 & 0xFFFFFFFFL;
}

long long sub_412F21(long long* param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = (param2 + 0x8000L) & 0xFFFFFFFFL;
    long long v5 = v2;
    long long v6 = v3;
    if((unsigned int)v4 <= 0xffff) {
        v1 = param1 & 0xFFFFFFFFL;
        v0 = 4L;
    }
    else {
        long long* ptr0 = param0;
        sub_412DAE(param0, 4L, param1 & 0xFFFFFFFFL, (long long)(((unsigned int)param2 >> 16) + 0x8000));
        param0 = ptr0;
        v4 = param2 & 0xffffL;
        v1 = (long long)(unsigned int)param1;
        v0 = 5L;
    }
    return sub_412DAE(param0, v0, v1, v4);
}

void sub_412F7E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41315A(long long* param0, int param1, int param2, long long param3, int param4) {
    int v0;
    long long v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12;
    long long* ptr0 = param0;
    long long v13 = v10;
    long long v14 = v11;
    int v15 = param1;
    long long v16 = v9;
    long long v17 = (unsigned long long)param2;
    long long v18 = param3 & 0xFFFFFFFFL;
    long long v19 = v12;
    int v20 = param4;
    unsigned long long* ptr1 = &v7;
    int v21 = (unsigned int)(param1 & 0xFF);
    if((unsigned int)v17 > 0xFF) {
        if(!((param1 >>> 8) & 0x1) && (unsigned int)v17 <= 0xFFFF) {
            int v22 = *(int*)&param0[243];
            *((char*)&param0[252] + 3) = 1;
            v6 = v22;
            if(((param1 >>> 11) & 0x1)) {
                int v23 = (unsigned int)v17 * 0x10000;
                v5 = (unsigned int)param3;
                v17 = 0xFFFFFFFFL;
                ptr1 = &v8;
                sub_412903(param0, (long long)((v22 * 0x100) | v23), v18, param3);
                v18 = (long long)v5;
                goto loc_4131F4;
            }
            else if(v21 != 172 || (unsigned int)v17 != 0xFFFF) {
                goto loc_4131F4;
            }
        }
    loc_413485:
        ptr1 += 11;
        /*BAD_CALL!*/ sub_401CE2("register limit", 0x699L);
        long long v24 = (long long)((unsigned int)v18 * 0x10000);
        long long v25 = (long long)((v5 * 0x100) | (unsigned int)v24);
        --ptr1;
        *ptr1 = &loc_41349E;
        /*BAD_CALL!*/ sub_412903(ptr0, v25, v24, param3);
        goto loc_4132AF;
    }
    else {
        v6 = (unsigned int)v17;
        v17 = 0xFFFFFFFFL;
    loc_4131F4:
        if((unsigned int)v18 < 0) {
            int v26 = (unsigned int)v18 & 0x7fffffff;
            if(!((unsigned int)v18 & 0x7fffff00)) {
                v5 = v26;
                v4 = (v15 >>> 14) & 0x1;
            loc_4132AF:
                v18 = 0xFFFFFFFFL;
            loc_4132C3:
                if(v20 >= 0) {
                    if(v20 <= 0xFF) {
                        v3 = v20;
                        v20 = -1;
                    }
                    else if(((v15 >>> 10) & 0x1) || v20 > 0xFFFF) {
                        goto loc_413485;
                    }
                    else {
                        v3 = *(int*)&ptr0[244];
                        *((char*)&ptr0[252] + 3) = 1;
                        if(!((v15 >>> 13) & 0x1)) {
                            v2 = (unsigned int)v18;
                            --ptr1;
                            *ptr1 = &loc_413377;
                            /*BAD_CALL!*/ sub_412903(ptr0, (long long)((v20 * 0x10000) | (v3 * 0x100)), v18, param3);
                            v18 = (long long)v2;
                            v20 = -1;
                        }
                    }
                    goto loc_413385;
                }
                else {
                    v3 = v20 & 0x7fffffff;
                    if(v20 & 0x7fffff00) {
                        v2 = (unsigned int)v18;
                        if(v20 & 0x7fff0000) {
                            goto loc_413485;
                        }
                        else {
                            int v27 = *(int*)&ptr0[244];
                            *((char*)&ptr0[252] + 3) = 1;
                            int v28 = (v27 * 0x100) | (v3 * 0x10000);
                            v3 = v27;
                            --ptr1;
                            *ptr1 = &loc_41332A;
                            /*BAD_CALL!*/ sub_412903(ptr0, (long long)(v28 | 0x3), v18, param3);
                            v18 = (long long)v2;
                            v20 = -1;
                            goto loc_413385;
                        }
                    }
                    else {
                        v20 = -1;
                    }
                }
                if(((v15 >>> 14) & 0x1)) {
                    v4 |= 2;
                }
                goto loc_413385;
            }
            else {
                long long v29 = (long long)((unsigned int)v18 & 0x7fff0000);
                if((unsigned int)v29) {
                    goto loc_413485;
                }
                else {
                    long long v30 = (long long)*(int*)((char*)&ptr0[243] + 4);
                    *((char*)&ptr0[252] + 3) = 1;
                    v5 = (unsigned int)v30;
                    ptr1 = &v8;
                    sub_412903(ptr0, (long long)(((unsigned int)v30 * 0x100) | (v26 * 0x10000) | 0x3), v29, v30);
                }
            }
        }
        else if((unsigned int)v18 <= 0xFF) {
            v5 = (unsigned int)v18;
        }
        else if(((v15 >>> 9) & 0x1) || (unsigned int)v18 > 0xFFFF) {
            goto loc_413485;
        }
        else {
            int v31 = *(int*)((char*)&ptr0[243] + 4);
            *((char*)&ptr0[252] + 3) = 1;
            v5 = v31;
            int v32 = v15 & 0x1000;
            v4 = v32;
            if(v32) {
                v4 = 0;
                goto loc_4132C3;
            }
            else if((v15 & 0xfb) != 194) {
                long long v24 = (long long)((unsigned int)v18 * 0x10000);
                long long v25 = (long long)((v5 * 0x100) | (unsigned int)v24);
                --ptr1;
                *ptr1 = &loc_41349E;
                /*BAD_CALL!*/ sub_412903(ptr0, v25, v24, param3);
                goto loc_4132AF;
            }
            else {
                ++v15;
                ptr1 = &v8;
                sub_412F21(ptr0, (long long)v5, v18);
                goto loc_4132AF;
            }
        }
        v18 = 0xFFFFFFFFL;
        v4 = 0;
        goto loc_4132C3;
    loc_413385:
        int v33 = v6;
        int v34 = (unsigned int)v18;
        int v35 = v33 * 0x100;
        v2 = v35;
        long long v36 = (long long)((v3 * 0x1000000) | (v5 * 0x10000) | (unsigned int)(v15 & 0xFF) | v35 | v4);
        --ptr1;
        *ptr1 = &loc_4133B2;
        /*BAD_CALL!*/ sub_412903(ptr0, v36, v18, param3);
        v1 = (long long)v34;
        if(((v15 >>> 0xF) & 0x1)) {
            long long v37 = ptr0[226] - ptr0[227];
            v4 = (unsigned int)v1;
            *(int*)&ptr0[225] = (unsigned int)(v37 >>> 3L);
            --ptr1;
            *ptr1 = &loc_4133E5;
            /*BAD_CALL!*/ sub_412903(ptr0, 2L, v1, param3);
            v1 = (long long)v4;
        }
    }
    if((unsigned int)v17 != -1) {
        long long v38 = (long long)(((unsigned int)v17 * 0x10000) | v2 | 0x1);
        --ptr1;
        *ptr1 = &loc_413402;
        /*BAD_CALL!*/ sub_412903(ptr0, v38, v1, param3);
        if(v21 != 172) {
            jump *(long long*)(ptr1 + 11);
        }
        else {
            v0 = (((unsigned int)v17 + 1) * 0x10000) | ((v6 + 1) * 0x100);
        }
    }
    else {
        if((unsigned int)v1 != -1) {
            v1 = (long long)((unsigned int)v1 * 0x10000);
            v0 = (v5 * 0x100) | (unsigned int)v1;
        loc_41344C:
            ptr1 += 11;
            /*BAD_CALL!*/ sub_412903(ptr0, (long long)(v0 | 0x1), v1, param3);
        }
        if(v20 == -1) {
            jump *(long long*)(ptr1 + 11);
        }
        else {
            v0 = (v20 * 0x10000) | (v3 * 0x100);
        }
    }
    goto loc_41344C;
}

int sub_4134B2(long long* param0, int* param1) {
    long long v0;
    long long v1 = v0;
    int v2 = *(param1 + 2);
    if(v2) {
        sub_41315A(param0, 0xcc2L, (long long)*param1, (long long)*(param1 + 1), v2 * 2);
        *(param1 + 3) = *(param1 + 2) + *(param1 + 3);
        *(param1 + 2) = 0;
    }
    int result = *(param1 + 1);
    *(int*)&param0[242] = *(param1 + 1);
    return result;
}

void sub_4134F7() {
    // Decompilation error
}

void sub_413793() {
    // Decompilation error
}

long long sub_4137B8(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

long long sub_4137FD(long long param0, long long param1, long long param2) {
    return sub_4137B8(param0, param1, param2, 0L);
}

long long sub_413801(long long param0, long long param1, int* param2, int param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = v3;
    int v7 = *(param2 + 1);
    if(v7 == 1 || v7 == 100) {
        sub_407808(*(long long*)param0, *(long long*)(param2 + 4));
        goto loc_413847;
    }
    else if(*param2 == 99) {
        v0 = movlpd(v0, *(long long*)(param2 + 2));
        sub_406A1B(*(long long*)param0);
    loc_413847:
        long long v8 = *(long long*)param0;
        long long v9 = (unsigned long long)*(int*)(v1 + 16L);
        *(int*)v1 = 1;
        *(int*)(v1 + 8L) = 1;
        sub_405057(v8, v9, (long long)param2, v4);
        *(int*)(param0 + 1936L) = param3 + 1;
        result = sub_4137FD(param0, v1, (long long)param3);
        *(int*)(param0 + 1936L) = param3 + 1;
    }
    return result;
}

void sub_413890() {
    // Decompilation error
}

void sub_415091() {
    // Decompilation error
}

void sub_415116() {
    // Decompilation error
}

void sub_415286() {
    // Decompilation error
}

void sub_4152FE() {
    // Decompilation error
}

void sub_416732() {
    // Decompilation error
}

void sub_4167EA() {
    // Decompilation error
}

void sub_416F22() {
    // Decompilation error
}

void sub_4170A8() {
    // Decompilation error
}

void sub_4172FA() {
    // Decompilation error
}

void sub_4174F4() {
    // Decompilation error
}

void sub_417525() {
    // Decompilation error
}

void sub_4175A2() {
    // Decompilation error
}

void sub_4175F8() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_417B0B(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_417AB3(param0, param1, param2, param3, param4, param5);
}

void sub_417B16() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_417D71(long long param0, long long param1) {
    long long v0 = sub_41D69F(param0, (unsigned long long)param0 >= (unsigned long long)param1 ? param1: param0);
    long long result = 0xFFFFFFFFL;
    if((unsigned int)v0 >= 0) {
        result = 1L;
        if(!(unsigned int)v0) {
            result = 0xFFFFFFFFL;
            char v1 = param0 == param1;
            if((unsigned long long)param0 <= (unsigned long long)param1) {
                result = v1 != 0 ? 0L: 1L;
            }
        }
    }
    return result;
}

long long sub_417DB2(long long param0, long long param1) {
    return sub_417D71((long long)*(int*)(param1 + 24L), (long long)*(int*)(param0 + 24L));
}

void sub_417DC2() {
    // Decompilation error
}

void sub_417EE5() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_417EF6(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    sub_406883(param0, param1);
    sub_406883(param0, v2);
    sub_406117(param0, 0xFFFFFFFFL, 1728L, v3, v4);
    sub_4089B9(param0, 0xfffffffeL);
    long long v7 = *(long long*)(param0 + 112L);
    long long v8 = sub_40F1DF(param0, v7 - 16L, v7 - 32L, v3, v4, v5);
    (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v8;
    sub_407DE7(param0);
    return v0 >>> 32L;
}

long long sub_417FC2(int* param0) {
    int* ptr0 = sub_40DF43(param0);
    return ptr0[0] >>> 27 == 2 ? 1L: 0L;
}

long long sub_417FDB(int* param0) {
    if(*param0 == 9) {
        return sub_417FC2(*(int**)(param0 + 2));
    }
    return 0L;
}

void sub_418032() {
    // Decompilation error
}

void sub_41843F() {
    // Decompilation error
}

void sub_4186B8() {
    // Decompilation error
}

void sub_418785() {
    // Decompilation error
}

void sub_4187BD() {
    // Decompilation error
}

void sub_418885() {
    // Decompilation error
}

void sub_418892() {
    // Decompilation error
}

void sub_4188A7() {
    // Decompilation error
}

void sub_4188B7() {
    // Decompilation error
}

void sub_418926() {
    // Decompilation error
}

long long sub_418CEF(unsigned long long* param0, long long param1, long long param2) {
    long long result = param2;
    long long v0 = (unsigned long long)**param0;
    while(**param0 >= 0) {
        long long v1 = sub_41CA82(v0);
        if((unsigned int)v1) {
            return result;
        }
        sub_418CB4((long long)param0, 24L);
        v0 = (unsigned long long)**param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418D1D(long long param0, unsigned int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(*(long long*)(param0 + 1616L) - *(long long*)(param0 + 1600L)) <= 5L) {
        sub_41CFE2(*(long long*)(param0 + 1544L), (long long*)(param0 + 1600L), 6L, param3);
    }
    long long v2 = sub_41C6FA(param1, *(char**)(param0 + 1600L));
    *(long long*)(param0 + 1600L) = (long long)(unsigned int)v2 + *(long long*)(param0 + 1600L);
    return (long long)(unsigned int)v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418D73(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = *(long long*)(param0 + 1608L);
    sub_406B69(*(long long*)(param0 + 1544L), v3, (unsigned long long)(*(long long*)(param0 + 1600L) - v3), param3);
    sub_405057(*(long long*)(param0 + 1544L), (long long)param1, v1, param3);
    return sub_405B3C(*(long long*)(param0 + 1544L), (long long)param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418DBF(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = param2;
    long long v1 = *(long long*)(param0 + 1592L);
    if(*(unsigned long long*)(v1 + 24L) > 0xffL) {
        sub_4200FB(*(long long*)(param0 + 1544L), v1, 0x100L, param3);
    }
    long long v2 = *(long long*)(param0 + 1592L);
    long long v3 = *(long long*)(v2 + 24L);
    long long v4 = *(long long*)(v2 + 32L);
    *(long long*)(param0 + 1624L) = v2;
    *(long long*)(param0 + 1600L) = v4;
    *(long long*)(param0 + 1608L) = v4;
    *(long long*)(param0 + 1616L) = v4 + v3;
    return v4 + v3;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418FA3(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    sub_43ABE2(param0, 0L, 1648L, param3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41A06B(unsigned long long* param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long result;
    long long v5;
    int v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12 = v9;
    long long v13 = v10;
    long long v14 = v11;
    int v15 = 0;
    while(1) {
        long long v16 = 0L;
    loc_41A08F:
        while(1) {
            v6 = -1;
        loc_41A09A:
            while(1) {
                sub_418CB4((long long)param0, (unsigned long long)(v15 * 24));
                int* ptr0 = *param0;
                v15 = 1;
                v5 = (unsigned long long)*ptr0;
                if(*ptr0 < 0) {
                    v2 = *(long long*)(param0 + 193);
                    v1 = "unterminated character class";
                    v0 = 83888515L;
                loc_41A32E:
                    sub_401C42(v2, "third_party/duktape/duk_lexer.c", v0, v1);
                    return result;
                }
                else if((unsigned int)v5 == 93) {
                    if(v6 != -1) {
                        param1(0L, (unsigned long long)v6, v5);
                    }
                    return sub_418CB4((long long)param0, 24L);
                }
                else if((unsigned int)v5 == 45) {
                    if(v6 < 0 || (unsigned int)v16) {
                        goto loc_41A2BF;
                    }
                    else {
                        v16 = 1L;
                        if(*(ptr0 + 6) == 93) {
                        loc_41A2E5:
                            int v17 = (unsigned int)v5;
                            v16 = 0L;
                            param1(0L, (unsigned long long)v6, v5);
                            v6 = v17;
                        }
                    }
                }
                else if((unsigned int)v5 != 92) {
                    goto loc_41A2BF;
                }
                else {
                    v5 = (unsigned long long)*(ptr0 + 6);
                    v15 = 2;
                    if((unsigned int)v5 == 98) {
                        v5 = 8L;
                        goto loc_41A2BF;
                    }
                    else if((unsigned int)v5 == 102) {
                        v5 = 12L;
                        goto loc_41A2BF;
                    }
                    else if((unsigned int)v5 == 110) {
                        v5 = 10L;
                        goto loc_41A2BF;
                    }
                    else if((unsigned int)v5 == 116) {
                        v5 = 9L;
                        goto loc_41A2BF;
                    }
                    else if((unsigned int)v5 == 114) {
                        v5 = 13L;
                        goto loc_41A2BF;
                    }
                    else if((unsigned int)v5 == 118) {
                        v5 = 11L;
                        goto loc_41A2BF;
                    }
                    else {
                        switch((unsigned int)v5) {
                            case 99: {
                                int v18 = *(ptr0 + 12);
                                v15 = 3;
                                if((unsigned int)((v18 & 0xffffffdf) - 65) > 25) {
                                    goto loc_41A305;
                                }
                                else {
                                    v5 = ((long long)v18 % 32L) & 0xFFFFFFFFL;
                                    goto loc_41A266;
                                }
                            }
                            case 117: 
                            case 120: {
                                long long v19 = sub_418EB9((long long)param0, 0L);
                                v15 = 0;
                                v5 = v19 & 0xFFFFFFFFL;
                                goto loc_41A266;
                            }
                            default: {
                                switch((unsigned int)v5) {
                                    case 68: {
                                        v4 = 4L;
                                        v3 = &gvar_43DDC0;
                                        goto loc_41A236;
                                    }
                                    case 83: {
                                        v4 = 24L;
                                        v3 = &gvar_43DCC0;
                                        goto loc_41A236;
                                    }
                                    case 100: {
                                        v4 = 2L;
                                        v3 = &gvar_43DD2C;
                                        goto loc_41A236;
                                    }
                                    case 115: {
                                        v4 = 22L;
                                        v3 = &gvar_43DD00;
                                        goto loc_41A236;
                                    }
                                    case 119: {
                                        v4 = 8L;
                                        v3 = &gvar_43DDD0;
                                        goto loc_41A236;
                                    }
                                }
                                if((unsigned int)v5 == 87) {
                                    v4 = 10L;
                                    v3 = &gvar_43DCA0;
                                loc_41A236:
                                    sub_418E75(param1, v7, v3, v4);
                                    goto loc_41A26C;
                                }
                                else {
                                    break;
                                }
                            }
                        }
                        if((unsigned int)((unsigned int)v5 - 48) > 9) {
                            goto loc_41A25C;
                        }
                        else {
                            long long v20 = sub_418E07((long long)param0, (long long)&v15, 0L, v8, v5);
                            v5 = v20 & 0xFFFFFFFFL;
                        loc_41A266:
                            if((unsigned int)v5 >= 0) {
                                goto loc_41A2BF;
                            }
                            else {
                            loc_41A26C:
                                if(v6 != -1) {
                                    if((unsigned int)v16) {
                                        goto loc_41A318;
                                    }
                                    else {
                                        param1(0L, (unsigned long long)v6, v5);
                                        goto loc_41A08F;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    loc_41A25C:
        if((unsigned int)v5 < 0) {
        loc_41A305:
            v2 = *(long long*)(param0 + 193);
            v1 = "invalid regexp escape";
            v0 = 0x500097bL;
            goto loc_41A32E;
        }
        else {
        loc_41A2BF:
            if(v6 == -1) {
                v6 = (unsigned int)v5;
                goto loc_41A09A;
            }
            else if(!(unsigned int)v16) {
                goto loc_41A2E5;
            }
            else if((unsigned int)v5 < v6) {
                goto loc_41A318;
            }
            else {
                param1(0L, v5 & 0xFFFFFFFFL, v5);
            }
        }
    }
loc_41A318:
    v2 = *(long long*)(param0 + 193);
    v1 = "invalid range";
    v0 = 83888511L;
    goto loc_41A32E;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B6EB(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    __SyntheticTypeUnknown v3;
    long long v4;
    long long v5;
    int v6;
    long long v7;
    char v8;
    char* ptr0;
    int v9;
    int v9;
    char* ptr1;
    long long v10;
    long long v11;
    long long v12;
    char v13;
    int v14;
    long long v15;
    long long v16;
    long long v17;
    long long v18;
    long long v19;
    char v20;
    int v21;
    int v22;
    int v23;
    long long v24;
    long long v25;
    long long v26;
    long long v27;
    long long v28;
    long long v29 = (unsigned long long)(unsigned int)param1 | ((unsigned long long)(unsigned int)param2 << 32);
    sub_4205E1();
    long long v30 = v29 >>> 32L;
    int v31 = (unsigned int)v29;
    long long v32 = v25;
    v29 = v12;
    long long v33 = v30 & 0xFFFFFFFFL;
    long long v34 = v18;
    long long v35 = v27;
    long long v36 = v26;
    long long v37 = (unsigned long long)v31;
    v30 = (unsigned long long)((unsigned char)v30 & 0x1) | ((unsigned long long)((v30 >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)v30) {
        sub_4090EA(param0, 0xFFFFFFFFL);
    }
    long long v38 = sub_40574F(param0, 0xFFFFFFFFL, v30, v11, v17, v28);
    long long v39 = (unsigned long long)*(char*)(v38 + 32L);
    if((unsigned int)v39 == 43) {
        ptr1 = (char*)(v38 + 33L);
        if((unsigned char)v33 & 0x8) {
            v9 = 0;
            goto loc_41ACD5;
        }
        else {
            sub_407D7E(param0);
            return sub_406B26(param0, param1, param2);
        }
    }
    else {
        if((unsigned int)v39 != 45) {
            ptr1 = (char*)(v38 + 32L);
            v9 = 0;
            goto loc_41ACD5;
        }
        if(((unsigned char)v33 & 0x10)) {
            ptr1 = (char*)(v38 + 33L);
            v9 = 1;
        loc_41ACD5:
            if(((unsigned char)v33 & 0x20)) {
                ptr0 = ptr1;
                sub_43AD1A();
                ptr1 = ptr0;
                if(!v14) {
                    if(((unsigned char)v33 & 0x4)) {
                        goto loc_41ACFE;
                    }
                    else if(*(ptr1 + 8L)) {
                        sub_407D7E(param0);
                        return sub_406B26(param0, param1, param2);
                    }
                    else {
                        goto loc_41ACFE;
                    }
                }
            }
            if(*ptr1 == 48) {
                v39 = (unsigned long long)((unsigned int)((unsigned long long)*(ptr1 + 1L) | ((unsigned long long)((v39 >>> 8L) & 0xffffffffffffffL) << 8)) | 0x20);
                if((((v33 >>> 11L) & 0x1L) && (unsigned char)v39 == 120)) {
                    v37 = 16L;
                loc_41AD59:
                    ptr1 += 2L;
                    v33 = ((unsigned long long)(unsigned char)((unsigned int)v33 & 0xfffffc3d) | ((unsigned long long)((unsigned char)(((unsigned int)v33 & 0xfffffc3d) >>> 8) | 0x4) << 8) | ((unsigned long long)(((unsigned long long)((unsigned int)v33 & 0xfffffc3d) >>> 16L) & 0xffffffffffffL) << 16)) & 0xFFFFFFFFL;
                }
                else if((((v33 >>> 13L) & 0x1L) && (unsigned char)v39 == 111)) {
                    v37 = 8L;
                    goto loc_41AD59;
                }
                else if(((v33 >>> 14L) & 0x1L) && (unsigned char)v39 == 98) {
                    v37 = 2L;
                    goto loc_41AD59;
                }
            }
            int v40 = 0;
            (char*)(ptr0 & 0xFFFFFFFFL) = 0;
            int v41 = -1;
            int v42 = -1;
            int v43 = 0;
            int v44 = 0;
            int v45 = 0;
            v10 & 0xFFFFFFFFL = 0;
            int v46 = 0;
            *(int*)&v13 = (unsigned int)v33 >>> 1;
            while(1) {
                long long v47 = (unsigned long long)*ptr1;
                char* ptr2 = ptr1 + 1L;
                long long v48 = (v47 - 48L) & 0xFFFFFFFFL;
                if((unsigned int)v48 <= 9) {
                loc_41AE91:
                    if((unsigned int)v37 <= (unsigned int)v48) {
                    loc_41AE97:
                        if(!((unsigned char)v33 & 0x4)) {
                            sub_407D7E(param0);
                            return sub_406B26(param0, param1, param2);
                        }
                    loc_41AFE1:
                        if(v43 > 0 && v44 > 1) {
                            if(!((v33 >>> 10L) & 0x1L)) {
                                sub_407D7E(param0);
                                return sub_406B26(param0, param1, param2);
                            }
                        }
                        else if(!v44) {
                            if(v42) {
                                if(v42 >= 0) {
                                    v8 = (unsigned char)v33 & 0x80 ? 0: 1;
                                    goto loc_41B035;
                                }
                                else if(((v33 >>> 9L) & 0x1L) && !*(int*)(v38 + 24L)) {
                                    goto loc_41B044;
                                }
                            }
                            sub_407D7E(param0);
                            return sub_406B26(param0, param1, param2);
                        }
                        v8 = ((unsigned int)v33 & 0x100) | v42 ? 0: 1;
                    loc_41B035:
                        if(v8) {
                            sub_407D7E(param0);
                            return sub_406B26(param0, param1, param2);
                        }
                    loc_41B044:
                        if(!(((unsigned int)v33 & 0x4) | v41)) {
                            sub_407D7E(param0);
                            return sub_406B26(param0, param1, param2);
                        }
                        if(v46) {
                            v45 = 0 - v45;
                        }
                        v7 = (unsigned long long)((unsigned int)v10 + v45);
                        v6 = (unsigned int)v10 + v45;
                        v33 = (unsigned long long)((v40 <= 1 ? 1: 0) & ((unsigned int)v7 ? 0: 1)) | ((unsigned long long)((v33 >>> 8L) & 0xffffffffffffffL) << 8);
                        if(!(unsigned char)v33) {
                            v5 = (long long)((unsigned int)v37 - 2);
                            v4 = (unsigned long long)*(char*)(v5 + 4446720L);
                            break;
                        }
                        else if((v40 - 1)) {
                            goto loc_41B089;
                        }
                        else {
                            v3 = (__SyntheticTypeUnknownU)(double)(unsigned long long)v21 | ((__SyntheticTypeUnknownU)(unsigned long long)(v3 >>> 0x40X) << 64);
                            goto loc_41B286;
                        }
                    }
                    else if(v41 != -1) {
                        v45 = (unsigned int)v37 * v45 + (unsigned int)v48;
                        if(v45 > 10000000) {
                            sub_401CE2("exponent too large", 2273L);
                            return result;
                        }
                        ++v41;
                    }
                    else if((unsigned int)*(char*)((long long)((unsigned int)v37 - 2) + 4446720L) > (unsigned int)ptr0) {
                        long long v49 = (unsigned long long)((unsigned int)v48 | v40);
                        if(((unsigned int)v48 | v40)) {
                            int v50 = v42;
                            int v51 = (unsigned int)v48;
                            int v52 = v45;
                            sub_41A54B(v49, v37 & 0xFFFFFFFFL);
                            int v53 = v51;
                            if(!v53) {
                                v19 & 0xFFFFFFFFL = 0;
                            }
                            else {
                                v19 = (unsigned long long)1 | ((unsigned long long)v53 << 32);
                            }
                            v51 = v50;
                            sub_41A3A1((long long)&v40, (long long)&v20, (long long)&v19, v11, v17);
                            (char*)(ptr0 & 0xFFFFFFFFL) = (unsigned int)ptr0 + 1;
                            v45 = v52;
                            v42 = v51;
                            goto loc_41AF8A;
                        }
                        else if(v42 != -1) {
                            goto loc_41AF8C;
                        }
                        else {
                            ++v43;
                            ++v44;
                            v42 = -1;
                        }
                    }
                    else {
                        v10 & 0xFFFFFFFFL = (unsigned int)v10 + 1;
                    loc_41AF8A:
                        if(v42 != -1) {
                        loc_41AF8C:
                            v10 & 0xFFFFFFFFL = (unsigned int)v10 - 1;
                            ++v42;
                        }
                        else {
                            ++v44;
                            v42 = -1;
                        }
                    }
                    goto loc_41ADFC;
                }
                else if((unsigned int)v47 == 46) {
                    if(v42 >= 0 || v41 >= 0) {
                        goto loc_41AE97;
                    }
                    else {
                        v41 = -1;
                        if(!((unsigned char)v33 & 0x40) && ((unsigned char)v33 & 0x4)) {
                            v42 = -1;
                            goto loc_41AFE1;
                        }
                        else {
                            v42 = 0;
                            goto loc_41ADFC;
                        }
                    }
                }
                else if(!(unsigned int)v47) {
                    goto loc_41AFE1;
                }
                else if(!(v13 & 0x1) || v41 != -1 || (unsigned char)((unsigned int)v47 & 0xffffffdf) != 69) {
                    v48 = (v47 - 87L) & 0xFFFFFFFFL;
                    if((unsigned int)((unsigned int)v47 - 97) > 25) {
                        v48 = (unsigned int)((unsigned int)v47 - 65) > 25 ? 0xFFL: (v47 - 55L) & 0xFFFFFFFFL;
                    }
                    goto loc_41AE91;
                }
                else {
                    v2 = (unsigned long long)*(ptr1 + 1L);
                }
                v41 = 0;
                if((unsigned int)v2 == 45) {
                    v46 = 1;
                    ptr2 = ptr1 + 2L;
                }
                else if((unsigned int)v2 == 43) {
                    ptr2 = ptr1 + 2L;
                }
            loc_41ADFC:
                ptr1 = ptr2;
            }
            while((unsigned int)(long long*)((long long)ptr0 & 0xFFFFFFFFL) + (unsigned int)v7 - v6 < (unsigned int)v4) {
                v10 = v5;
                v44 = (unsigned int)v7;
                --v6;
                sub_41A584((long long)&v40, v37 & 0xFFFFFFFFL, (long long)&v20);
                v5 = v10;
                v7 = (unsigned long long)v44;
            }
            if(!v40) {
            loc_41B089:
                v3 = 0x0X;
            }
            else if((int)*(unsigned short*)(v5 * 4L + (long long)&gvar_43D960) < v6) {
            loc_41ACFE:
                v24 = movlpd(v24, 0x7ff0000000000000L);
            }
            else if((int)*(unsigned short*)(v5 * 4L + (long long)&gvar_43D962) > v6) {
                goto loc_41B089;
            }
            else {
                int v54 = v6;
                long long v55 = 0x100000001L;
                int v56 = (unsigned int)v37;
                int v57 = 2;
                long long v58 = 54L;
                sub_41AA14((long long)&v40);
                sub_41A5AF((long long)&v40);
                sub_41A6F9((long long)&v40);
                v19 = 0L;
                if(v22 - 1 <= 0x3ff) {
                    v1 = (unsigned long long)(v22 + 1022);
                    v0 = 0L;
                    if(v22 - 1 >= -1022) {
                        v0 = v1 & 0xFFFFFFFFL;
                        v1 = 1L;
                    }
                }
                else {
                    v1 = 0xffffff01L;
                    v0 = 0x7ffL;
                }
                if((unsigned int)v1 + 52 < v23 && (unsigned int)v1 + 52 >= 0) {
                    long long v59 = /*BAD_CALL!*/ sub_41A4C6((long long)&v40, (v1 + 52L) & 0xFFFFFFFFL, param2, v11, v17);
                    if((unsigned int)v59) {
                        if(v22 - 1 <= 0x3ff) {
                            v1 = (unsigned long long)(v22 + 1022);
                            v0 = 0L;
                            if(v22 - 1 >= -1022) {
                                v0 = v1 & 0xFFFFFFFFL;
                                v1 = 1L;
                            }
                        }
                        else {
                            v1 = 0xffffff01L;
                            v0 = 0x7ffL;
                        }
                    }
                }
                int v60 = (unsigned int)v1 + 51;
                long long v61 = 0L;
                long long v62 = 0L;
                int v63 = 0;
                long long* ptr3 = (long long*)((long long)(unsigned int)v1 + (long long)&v40);
                do {
                    v63 += (v60 >= 0 && v60 < v23 ? (unsigned int)*(char*)(1159L - v61 + (long long)ptr3): 0) << (v61 & 0x1fL);
                    if(v61 == 31L) {
                        v62 = (unsigned long long)v63;
                        v33 = (unsigned long long)1 | ((unsigned long long)((v33 >>> 8L) & 0xffffffffffffffL) << 8);
                        v63 = 0;
                    }
                    ++v61;
                    --v60;
                }
                while(v61 != 52L);
                if((unsigned char)v33) {
                    v19 & 0xFFFFFFFFL = (unsigned int)v62;
                }
                (v19 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v0 * 0x100000 + v63;
                v15 = movlpd(v15, v19);
            }
        loc_41B286:
            if(v9) {
                __SyntheticTypeUnknown v64 = (__SyntheticTypeUnknownU)((unsigned int)*(__SyntheticTypeUnknownP128)0x43D2F0 ^ (unsigned int)v3) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x20X) ^ (unsigned int)(v3 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v3 >>> 0x40X) << 64);
                v3 = (__SyntheticTypeUnknownU)(unsigned long long)v64 | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x40X) ^ (unsigned int)(v64 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x60X) ^ (unsigned int)(v64 >>> 0x60X)) << 96);
            }
            sub_407D7E(param0);
            v16 = movlpd(v16, (char*)v3);
            result = sub_406A1B(param0);
        }
        else {
            sub_407D7E(param0);
            result = sub_406B26(param0, param1, param2);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B712(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    if(param0[213] == param0[211]) {
        sub_41CFE2(param0[0], param0 + 211, 1L, param3);
    }
    long long result = param0[211];
    param0[211] = result + 1L;
    *(char*)result = (unsigned char)param1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B75D(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(param0[213] - param0[211]) <= 6L) {
        sub_41CFE2(param0[0], param0 + 211, 7L, param3);
    }
    long long v2 = sub_41C531((unsigned long long)(unsigned int)param1, param0[211]);
    param0[211] += (long long)(unsigned int)v2;
    return (long long)(unsigned int)v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B7AF(long long* param0, long long param1, long long param2) {
    char v0;
    long long* ptr0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = sub_41C531(param2 & 0xFFFFFFFFL, &v0);
    long long v5 = *ptr0;
    int v6 = (unsigned int)v4;
    sub_41D130(v5, ptr0 + 211, (long long)(unsigned int)v2, &v0, (long long)(unsigned int)v4);
    return (unsigned long long)v6;
}

long long sub_41B84B(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    if((unsigned int)param3 || !(*(char*)&param0[1] & 0x2)) {
        sub_41B75D(param0, param1, param2, param3);
        v1 = (long long)(unsigned int)param2;
    }
    else {
        long long v6 = param0[0];
        int v7 = (unsigned int)param1;
        long long v8 = sub_41CD28(v6, param1);
        int v9 = (unsigned int)v8;
        int v10 = (unsigned int)v8;
        unsigned int v11 = (unsigned int)((unsigned int)param2 >> 5);
        for(int i = v7 + 1; i <= (unsigned int)param2; i = (unsigned int)v0 + 1) {
            unsigned int v12 = (unsigned int)(i >> 5);
            unsigned int v13 = (unsigned int)(i >> 5);
            while(v13 <= v11) {
                long long v14 = (unsigned long long)(v13 >>> 3);
                long long v15 = (unsigned long long)(1 << ((unsigned long long)(v13 & 0x7) & 0x1fL));
                if(v13 > 0x7ff) {
                    break;
                }
                else if(!((unsigned char)v15 & *(char*)(v14 + 4447712L))) {
                    v0 = v13 <= v12 ? (unsigned long long)i: (unsigned long long)(int)(v13 * 32);
                    goto loc_41B8E9;
                }
                else {
                    ++v13;
                }
            }
            v0 = (unsigned long long)(unsigned int)param2;
        loc_41B8E9:
            long long v16 = param0[0];
            v7 = (unsigned int)v0 - i + v9;
            long long v17 = sub_41CD28(v16, v0 & 0xFFFFFFFFL);
            v9 = (unsigned int)v17;
            if(v7 + 1 != v9) {
                long long v18 = (long long)v10;
                v10 = v9;
                sub_41B75D(param0, v18, param2, param3);
                sub_41B75D(param0, (long long)v7, param2, param3);
                *(int*)&param0[217] = *(int*)&param0[217] + 1;
            }
        }
        sub_41B75D(param0, (long long)v10, param2, param3);
        v1 = (long long)v9;
    }
    long long result = sub_41B75D(param0, v1, param2, param3);
    *(int*)&param0[217] = *(int*)&param0[217] + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41B95F(unsigned long long* param0, int param1, int* param2) {
    long long v0;
    long long v1;
    long long* ptr0;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long* ptr1;
    long long v6;
    long long v7;
    long long* ptr2;
    long long v8;
    long long v9;
    int v10 = *(int*)(param0 + 215);
    int v11 = param1;
    int* ptr3 = param2;
    (long long*)(ptr2 & 0xFFFFFFFFL) = v10;
    int v12 = (unsigned int)*(long long*)(param0 + 211) - *(int*)(param0 + 212);
    sub_4205E1();
    unsigned int result = *(unsigned int*)(param0 + 216);
    if(*(unsigned int*)((char*)param0 + 1732L) <= result) {
        v7 = &gvar_43DA30;
        v6 = 527L;
    loc_41BBAB:
        sub_401CE2(v7, v6);
    }
    else {
        int v13 = 0;
        int v14 = -1;
        *(int*)(param0 + 216) = result + 1;
        int v15 = -1;
        int v16 = 0;
        int v17 = -1;
        long long* ptr4 = (long long*)(param0 + 2);
        while(1) {
            sub_419B9C((long long)ptr4, (long long)(long long*)(param0 + 208));
            long long v18 = (unsigned long long)*(int*)(param0 + 208);
            int v19 = *(int*)(param0 + 215);
            if((unsigned int)v18 > 22) {
                break;
            }
            else if(v18 == 0) {
                goto loc_41C00C;
            }
            else if(v18 == 1) {
                goto loc_41BA15;
            }
            else if(v18 == 2) {
                if(v17 < 0) {
                    v1 = "quantifier without preceding atom";
                    v0 = 0x5000259L;
                    sub_401C42(*param0, "third_party/duktape/duk_regexp_compiler.c", v0, v1);
                    return result;
                }
                ptr0 = (long long*)*(int*)((char*)param0 + 1676L);
                unsigned int v20 = *(unsigned int*)(param0 + 210);
                if((unsigned int)ptr0 > v20) {
                    v1 = "quantifier values invalid (qmin > qmax)";
                    v0 = 0x500025dL;
                    sub_401C42(*param0, "third_party/duktape/duk_regexp_compiler.c", v0, v1);
                    return result;
                }
                char v21 = v16 ? 0: 1;
                if(v16 >= 0) {
                    if(v21) {
                        ptr0 = (unsigned int)ptr0 ? (long long*)0x1: (long long*)(unsigned int)ptr0;
                        v20 = v20 ? 1: v20;
                    }
                    (long long*)(ptr2 & 0xFFFFFFFFL) = v20;
                    sub_41B712((long long)param0, 1L);
                    int v22 = (unsigned int)ptr2;
                    int v23 = (unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - v17;
                    if(*(int*)((char*)param0 + 1668L)) {
                        long long v24 = sub_41B7AF((long long)param0, (unsigned long long)v17, 10L);
                        int v25 = (unsigned int)v24 + v17;
                        long long v26 = sub_41B7AF((long long)param0, (unsigned long long)v25, (long long)(long long*)((long long)ptr0 & 0xFFFFFFFFL));
                        int v27 = (unsigned int)v26 + v25;
                        long long v28 = sub_41B7AF((long long)param0, (unsigned long long)v27, (long long)(long long*)((long long)ptr2 & 0xFFFFFFFFL));
                        ptr1 = (long long*)v16;
                        v5 = (unsigned long long)((unsigned int)v28 + v27);
                    }
                    else {
                        (long long*)(ptr2 & 0xFFFFFFFFL) = v22;
                        long long v29 = sub_41B7AF((long long)param0, (unsigned long long)v17, 9L);
                        int v30 = (unsigned int)v29 + v17;
                        long long v31 = sub_41B7AF((long long)param0, (unsigned long long)v30, (long long)(long long*)((long long)ptr0 & 0xFFFFFFFFL));
                        v5 = (unsigned long long)((unsigned int)v31 + v30);
                        ptr1 = (long long*)((long long)ptr2 & 0xFFFFFFFFL);
                    }
                    sub_41B7AF((long long)param0, v5 & 0xFFFFFFFFL, (long long)ptr1);
                    v2 = (unsigned long long)v23;
                loc_41BDDF:
                    sub_41B7F2(v9, v2);
                }
                else if((v20 == -1 ? (unsigned int)ptr0: v20) > 1000) {
                    v7 = "quantifier requires too many atom copies";
                    v6 = 0x2a2L;
                    goto loc_41BBAB;
                }
                else {
                    int v32 = (unsigned int)ptr2;
                    if(v32 != v19) {
                        sub_41B7AF((long long)param0, (unsigned long long)v17, (unsigned long long)((v19 - v32) * 2));
                        sub_41B7AF((long long)param0, (unsigned long long)v17, (long long)(long long*)((long long)(long long*)((char*)((long long)(long long*)((long long)ptr2 & 0xFFFFFFFFL) * 2L) + 2L) & 0xFFFFFFFFL));
                        sub_41B7AF((long long)param0, (unsigned long long)v17, 12L);
                    }
                    int v33 = *(int*)((char*)param0 + 1676L);
                    ptr0 = (long long*)*(int*)(param0 + 210);
                    int v34 = (unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - v17;
                    v5 = (long long)v17;
                loc_41BC1E:
                    ptr2 = (long long*)(param0 + 211);
                    while(v33) {
                        long long v35 = *param0;
                        v8 & 0xFFFFFFFFL = v33;
                        sub_41D0AD(v35, (long long)ptr2, v5, (unsigned long long)v34);
                        v33 = (unsigned int)v8 - 1;
                        if((unsigned int)ptr0 == -1) {
                            goto loc_41BC1E;
                        }
                        else {
                            ptr0 = (long long*)((unsigned int)ptr0 - 1);
                            ptr2 = (long long*)(param0 + 211);
                        }
                    }
                    if((unsigned int)ptr0 == -1) {
                        if(!*(int*)((char*)param0 + 1676L)) {
                            sub_41B712((long long)param0, 6L);
                            sub_41B7F2(v9, (unsigned long long)v34);
                            sub_41D0AD(*param0, (long long)(long long*)(param0 + 211), v5, (unsigned long long)v34);
                        }
                        sub_41B712((long long)param0, *(int*)((char*)param0 + 1668L) ? 8L: 7L);
                        sub_41B7F2(v9, (unsigned long long)~v34);
                    }
                    else {
                        v8 = *(long long*)(param0 + 211) - *(long long*)(param0 + 212);
                        v3 = v8 & 0xFFFFFFFFL;
                        int v36 = (unsigned int)v3 + 1;
                        for(long long i = *param0; (unsigned int)ptr0; i = *param0) {
                            sub_41D1C8(i, (long long)ptr2, v8 & 0xFFFFFFFFL, v5, (unsigned long long)v34);
                            ptr0 = (long long*)((unsigned int)ptr0 - 1);
                            sub_41B7AF((long long)param0, v3 & 0xFFFFFFFFL, *(int*)((char*)param0 + 1668L) ? 7L: 8L);
                            sub_41B7F2(v9, (unsigned long long)((unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - 1 - (unsigned int)v3));
                        }
                    }
                    sub_41D282(*param0, (long long)ptr2, v5, (unsigned long long)v34);
                }
                v13 = -1;
                v16 = -1;
                v17 = -1;
                goto loc_41BDF3;
            }
            else if(v18 == 3) {
                v4 = 16L;
            loc_41BD78:
                sub_41B712((long long)param0, v4);
                v16 = -1;
                v17 = -1;
                goto loc_41BDF3;
            }
            else if(v18 == 4) {
                v4 = 17L;
                goto loc_41BD78;
            }
            else if(v18 == 5) {
                v4 = 18L;
                goto loc_41BD78;
            }
            else if(v18 == 6) {
                v4 = 19L;
                goto loc_41BD78;
            }
            else if(v18 == 7 || v18 == 8) {
                v3 = *(long long*)(param0 + 211) - *(long long*)(param0 + 212);
                sub_41B95F();
                sub_41B712((long long)param0, 1L);
                sub_41B7AF((long long)param0, v3 & 0xFFFFFFFFL, (long long)(long long*)(((unsigned int)v18 == 7 ? 0: 1) + 13));
                v2 = (unsigned long long)((unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - 1 - (unsigned int)v3);
                goto loc_41BDDF;
            }
            else if(v18 == 9) {
                v17 = (unsigned int)*(long long*)(param0 + 211) - *(int*)(param0 + 212);
                sub_41B712((long long)param0, 3L);
                goto loc_41C044;
            }
            else if(v18 == 10) {
                v17 = (unsigned int)*(long long*)(param0 + 211) - *(int*)(param0 + 212);
                sub_41B712((long long)param0, 2L);
                long long v37 = (unsigned long long)*(int*)(param0 + 209);
                if((*(char*)(param0 + 1) & 0x2)) {
                    long long v38 = sub_41CD28(*param0, v37);
                    v37 = v38 & 0xFFFFFFFFL;
                }
                sub_41B75D((long long)param0, v37);
                goto loc_41C044;
            }
            else if(v18 >= 11 && v18 <= 0xF) {
                v17 = (unsigned int)*(long long*)(param0 + 211) - *(int*)(param0 + 212);
                long long v39 = (unsigned long long)*(char*)((unsigned long long)(((unsigned int)v18 - 11) >>> 1) + 4447092L);
                short* ptr5 = *(unsigned long long*)((unsigned long long)(((unsigned int)v18 - 11) >>> 1) * 8L + (long long)&ptr_gvar_43DD2C);
                sub_41B712((long long)param0, (unsigned long long)(5 - ((unsigned int)v18 & 0x1)));
                ptr0 = (long long*)((unsigned long long)((unsigned int)v39 * 2) * 2L + (long long)ptr5);
                sub_41B712((long long)param0, v39 & 0xFFFFFFFFL);
                while(ptr0 != ptr5) {
                    long long v40 = (unsigned long long)*ptr5;
                    ++ptr5;
                    sub_41B75D((long long)param0, v40);
                }
            loc_41C044:
                v16 = 1;
                if(v17 >= 0 && v13 != -1) {
                    ++v13;
                }
                goto loc_41BDF3;
            }
            else {
                throw 0;
            loc_41BA15:
                if(v14 >= 0) {
                    long long v41 = sub_41B7F2(v9, (unsigned long long)((unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - v14));
                    sub_41B7F2((unsigned long long)v14, (unsigned long long)((unsigned int)v41 + v14 - v15));
                }
                sub_41B7AF((long long)param0, (unsigned long long)v12, 7L);
                v15 = v12 + 1;
                sub_41B712((long long)param0, 6L);
                v14 = (unsigned int)*(long long*)(param0 + 211) - *(int*)(param0 + 212);
                v13 = -1;
                v16 = -1;
                v17 = -1;
                goto loc_41BDF3;
            loc_41C00C:
                if(!v11) {
                    v1 = "unexpected end of pattern";
                    v0 = 0x50003b1L;
                    sub_401C42(*param0, "third_party/duktape/duk_regexp_compiler.c", v0, v1);
                    return result;
                }
                if(v14 >= 0) {
                    long long v42 = sub_41B7F2(v9, (unsigned long long)((unsigned int)*(long long*)(param0 + 211) - (unsigned int)*(long long*)(param0 + 212) - v14));
                    sub_41B7F2((unsigned long long)v14, (unsigned long long)((unsigned int)v42 + v14 - v15));
                }
                *ptr3 = v13;
                *(int*)(param0 + 216) = *(int*)(param0 + 216) - 1;
                return result;
            loc_41BDF3:
                (long long*)(ptr2 & 0xFFFFFFFFL) = v19;
            }
        }
        v1 = "unexpected token in regexp";
        v0 = 0x50003b7L;
        sub_401C42(*param0, "third_party/duktape/duk_regexp_compiler.c", v0, v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41C0B4(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1;
    unsigned int v2;
    long long v3;
    char v4;
    char v5;
    char v6;
    unsigned int v7;
    long long v8;
    long long v9;
    long long v10 = v8;
    int* ptr0 = sub_4057BB(param0, 0xfffffffeL, param2, param3, param4, param5);
    int* ptr1 = sub_4057BB(param0, 0xFFFFFFFFL, param2, param3, param4, param5);
    long long v11 = sub_405B3C(param0, 0xfffffffeL);
    unsigned long long v12 = (unsigned long long)*(int*)(v11 + 24L);
    if(!v12) {
        sub_406EC3(param0, "(?:)", 4L);
    }
    else {
        long long v13 = v11;
        unsigned long long v14 = v12;
        sub_41CF97(param0, &v1, v12, param3);
        long long v15 = v1;
        char v16 = 0;
        long long v17 = v13 + v14;
        v14 = (unsigned long long)(v13 + v14);
        do {
            char v18 = v16;
            v16 = *(char*)(v13 + 32L);
            if((unsigned long long)(v3 - v15) <= 1L) {
                char v19 = v16;
                v1 = v15;
                v15 = sub_41CFE2(param0, &v1, 2L, v17);
                v16 = v19;
            }
            if(v16 == 47 && v18 != 92) {
                v0 = v15 + 1L;
                *(char*)v15 = 92;
            }
            else {
                v0 = v15;
            }
            ++v13;
            v5 = v13 == v14;
            v15 = v0 + 1L;
            *(char*)v0 = v16;
        }
        while(!v5);
        v1 = v15;
        sub_41D054(param0, &v1, v0, v17);
        sub_406BF4(param0, 0xFFFFFFFFL);
    }
    sub_43ABE2((long long)&v1, 0L, 1744L, param3);
    sub_418FA3(&v3, v9, param2, param3);
    long long v20 = (unsigned long long)ptr1[6];
    char* ptr2 = (char*)(ptr1 + 8);
    long long* ptr3 = (long long*)(ptr0 + 8);
    long long v21 = (unsigned long long)ptr0[6];
    int v22 = 100000000;
    int v23 = 10000;
    long long v24 = v20 + (long long)ptr2;
    long long v25 = v21;
    int v26 = 0;
    while((unsigned long long)v24 > (unsigned long long)ptr2) {
        char v27 = *ptr2;
        if(v27 != 105) {
            if(v27 != 109) {
                if(v27 != 103 || ((unsigned char)v26 & 0x1)) {
                    goto loc_41C27B;
                }
                else {
                    v26 |= 1;
                    goto loc_41C264;
                }
            }
            else if((unsigned char)v26 & 0x4) {
                goto loc_41C27B;
            }
            else {
                v26 |= 4;
                goto loc_41C264;
            }
        }
        if(!((unsigned char)v26 & 0x2)) {
            v26 |= 2;
        loc_41C264:
            ++ptr2;
        }
        else {
        loc_41C27B:
            sub_401C42(param0, "third_party/duktape/duk_regexp_compiler.c", 0x5000416L, "invalid regexp flags");
            v26 = 0;
            break;
        }
    }
    int v28 = v26;
    sub_41CF97(param0, &v4, 64L, v24);
    long long v29 = 0L;
    int v30 = 1;
    sub_418FC1(&v3, (long long)&v29);
    sub_41B712(&v1, 11L, param2, param3);
    sub_41B712(&v1, 0L, param2, param3);
    sub_41B95F((unsigned long long*)&v1, 1L, &v6);
    sub_41B712(&v1, 11L, param2, param3);
    sub_41B712(&v1, 1L, param2, param3);
    sub_41B712(&v1, 1L, param2, param3);
    if(v2 < v7) {
        sub_401C42(param0, "third_party/duktape/duk_regexp_compiler.c", 0x50004baL, "invalid backreference(s)");
    }
    else {
        sub_41B7AF(&v1, 0L, ((unsigned long long)v2 * 2L + 2L) & 0xFFFFFFFFL);
        sub_41B7AF(&v1, 0L, (long long)v28);
        sub_41D054(param0, &v4, param2, param3);
        sub_406BF4(param0, 0xFFFFFFFFL);
        sub_40511F(param0, 0xfffffffcL, param2, param3);
        sub_40511F(param0, 0xfffffffdL, param2, param3);
    }
    return (unsigned long long)v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41C395(long long param0) {
    long long v0;
    sub_407095(param0);
    long long v1 = sub_405B41(param0, 0xFFFFFFFFL);
    sub_40500F(param0, 0xfffffffdL);
    long long v2 = *(long long*)(param0 + 304L);
    *(int*)v1 = (*(int*)v1 & 0x7ffffff) | 0x58000000;
    sub_40DCFB(param0, v1, v2, v0);
    sub_403E13(param0, 4244660736L);
    sub_403E13(param0, 0xfe006500L);
    long long result = sub_406A68(param0, 0L);
    sub_403E13(param0, 0xfe002f01L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41C41B(long long* param0, long long param1, long long param2, long long param3) {
    long long v0 = param3;
    long long result = sub_41CDA5(param0, 4L);
    if((unsigned int)result > 14) {
        long long v1 = /*BAD_CALL!*/ sub_41CDA5(param0, 8L);
        if((unsigned int)v1 <= 253) {
            result = (long long)((unsigned int)v1 + 0xF);
        }
        else if((unsigned int)v1 == 254) {
            long long v2 = sub_41CDA5(param0, 12L);
            result = (long long)((unsigned int)v2 + 269);
        }
        else {
            long long v3 = sub_41CDA5(param0, 24L);
            result = (long long)((unsigned int)v3 + 0x110d);
        }
    }
    return result;
}

long long sub_41C47F(long long param0, long long param1, int param2) {
    int v0;
    char v1;
    long long v2;
    long long v3;
    int v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = 6L;
    long long v10 = v5;
    int v11 = 0;
    long long v12 = v6;
    long long v13 = v7;
    long long v14 = &v1;
    while(v9 != 0L) {
        *(int*)v14 = 0;
        v14 += 4L;
        --v9;
    }
    do {
        long long v15 = sub_41C41B(&v2, param1, &v1, 0L);
        v0 = (unsigned int)v15;
        if(!(unsigned int)v15) {
            return (unsigned long long)v0;
        }
        v4 = v0 + v11;
        long long v16 = sub_41C41B(&v2, param1, v8, v3);
        v11 = (unsigned int)v16;
    }
    while(param2 < v4 || param2 > v11);
    v0 = 1;
    return (unsigned long long)v0;
}

long long sub_41C6FA(unsigned int param0, char* param1) {
    if(param0 <= 127) {
        *param1 = (unsigned char)param0;
        return 1L;
    }
    else if(param0 <= 0x7ff) {
        *(param1 + 1L) = (unsigned char)(param0 & 0x3f) + 128;
        *param1 = (unsigned char)(param0 >>> 6) - 64;
        return 2L;
    }
    else if(param0 <= 0xffff) {
        *param1 = (unsigned char)(param0 >>> 12) - 32;
        *(param1 + 2L) = (unsigned char)(param0 & 0x3f) + 128;
        *(param1 + 1L) = (unsigned char)((param0 >>> 6) & 0x3f) + 128;
        return 3L;
    }
    *param1 = 237;
    *(param1 + 3L) = 237;
    *(param1 + 1L) = (unsigned char)(((param0 - 0x10000) >>> 16) & 0xF) - 96;
    *(param1 + 2L) = (unsigned char)(((param0 - 0x10000) >>> 10) & 0x3f) + 128;
    *(param1 + 5L) = (unsigned char)((param0 - 0x10000) & 0x3f) + 128;
    *(param1 + 4L) = (unsigned char)(((param0 - 0x10000) >>> 6) & 0xF) - 80;
    return 6L;
}

long long sub_41CAA1(int param0) {
    if(param0 > 127) {
        long long v0 = sub_41C47F(&gvar_43E9E0, 1116L, param0);
        return (unsigned int)v0 ? 1L: 0L;
    }
    else if(param0 >= 0) {
        return (*(char*)((long long)param0 + 4447552L) ? 0: 1) || *(char*)((long long)param0 + 4447552L) < 0 ? 0L: 1L;
    }
    return 0L;
}

long long sub_41CADA(int param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0 = param3;
    if(param0 <= 127) {
        result = 0L;
        if(param0 >= 0 && *(char*)((long long)param0 + 4447552L)) {
            return 1L;
        }
    }
    else {
        long long v1 = sub_41C47F(&gvar_43E9E0, 1116L, param0);
        if(!(unsigned int)v1) {
            long long v2 = sub_41C47F(&gvar_43E760, 576L, param0);
            result = (unsigned int)v2 ? 1L: 0L;
        }
        else {
            result = 1L;
        }
    }
    return result;
}

long long sub_41CB38(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    if((unsigned int)param0 <= 127) {
        v0 = (unsigned long long)((unsigned int)(((int)param0 & 0xffffffdf) - 65) <= 25 ? 1: 0) | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        result = v0 & 0xFFL;
    }
    else {
        result = sub_41C47F(&gvar_43E9E0, 1116L, (int)param0);
        if((unsigned int)result) {
            v0 = sub_41C47F(&gvar_43E9A0, 42L, (int)param0);
            v0 = (unsigned long long)((unsigned int)v0 ? 0: 1) | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
            result = v0 & 0xFFL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CB8C(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long result;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10 = v7;
    long long v11 = v8;
    long long v12 = v4;
    long long v13 = sub_40574F(param0, 0xFFFFFFFFL);
    sub_41CF97(param0, &v2, (unsigned long long)*(int*)(v13 + 24L), v6);
    long long v14 = (unsigned long long)*(int*)(v13 + 24L);
    unsigned long long v15 = (unsigned long long)(v13 + 32L);
    long long v16 = 0xFFFFFFFFL;
    int v17 = -1;
    unsigned long long v18 = (unsigned long long)(v13 + v14 + 32L);
    while(1) {
        if(v18 > v15) {
            long long v19 = sub_41C85D(param0);
            v7 = v19 & 0xFFFFFFFFL;
            if((unsigned int)v16 >= 0) {
                goto loc_41CC28;
            }
            else {
                goto loc_41CC05;
            }
        }
        if((unsigned int)v16 < 0) {
            break;
        }
        else {
            v7 = 0xFFFFFFFFL;
        loc_41CC28:
            if((unsigned long long)(v3 - v2) <= 55L) {
                sub_41CFE2(param0, &v2, 56L, param3);
            }
            if((unsigned int)v16 <= 127) {
                param2 = v2;
                param3 = param2 + 1L;
                v2 = param2 + 1L;
                *(char*)param2 = param1 != 0 ? (unsigned int)((unsigned int)v16 - 97) > 25 ? (unsigned char)v16: (unsigned char)v16 + 224: (unsigned int)((unsigned int)v16 - 65) > 25 ? (unsigned char)v16: (unsigned char)v16 + 32;
            }
            else if(!param1 && (unsigned int)v16 == 0x3a3) {
                long long v20 = sub_41CB38((long long)v17, v9, param2, param3);
                if(!(unsigned int)v20) {
                    goto loc_41CCB2;
                }
                else {
                    v20 = sub_41CB38(v7 & 0xFFFFFFFFL, v9, v5, v6);
                    if((unsigned int)v20) {
                        goto loc_41CCB2;
                    }
                    else {
                        long long v21 = sub_41C531(962L, v2);
                        v2 += (long long)(unsigned int)v21;
                    }
                }
            }
            else {
            loc_41CCB2:
                long long* ptr0 = &v1;
                for(long long i = 8L; i != 0L; --i) {
                    *(int*)ptr0 = 0;
                    ptr0 = (long long*)((char*)ptr0 + 4L);
                }
                if(param1) {
                    v1 = &gvar_43E1C0;
                    v0 = 1411L;
                }
                else {
                    v1 = &gvar_43DEE0;
                    v0 = 0x2c2L;
                }
                sub_41C56C((long long)&v2, v16 & 0xFFFFFFFFL, (long long)&v1);
            }
        loc_41CC05:
            v17 = (unsigned int)v16;
            v16 = v7 & 0xFFFFFFFFL;
        }
    }
    sub_41D054(param0, &v2, param2, param3);
    sub_406BF4(param0, 0xFFFFFFFFL);
    sub_405181();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CDF1(long long* param0) {
    return sub_41CDA5(param0, 1L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CDF8(long long* param0, int param1) {
    int v0;
    int v1 = param1;
    long long* ptr0 = param0;
    long long v2 = sub_41CDF1(param0);
    if((unsigned int)v2) {
        return sub_41CDA5(ptr0, (unsigned long long)v1);
    }
    return (long long)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CE24(long long* param0) {
    long long* ptr0 = param0;
    long long result1 = sub_41CDA5(param0, 2L);
    long long* ptr1 = ptr0;
    if((unsigned int)result1 == 1) {
        long long v0 = sub_41CDA5(ptr1, 2L);
        result1 = (long long)((unsigned int)v0 + 1);
    }
    else if((unsigned int)result1 == 2) {
        long long v1 = sub_41CDA5(ptr1, 5L);
        result1 = (long long)((unsigned int)v1 + 5);
    }
    else if((unsigned int)result1) {
        ptr0 = ptr1;
        long long result = sub_41CDA5(ptr1, 7L);
        result1 = (result + 36L) & 0xFFFFFFFFL;
        if(!(unsigned int)result) {
            sub_41CDA5(ptr0, 20L);
            return result;
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CE93(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    char* ptr0;
    long long* ptr1;
    long long* ptr2;
    long long v1 = sub_41CDA5(param0, 5L);
    if((unsigned int)v1 == 31) {
        v1 = sub_41CDA5(ptr1, 8L);
    }
    long long v2 = 32L;
    long long* ptr3 = (long long*)((v1 & 0xFFFFFFFFL) + (long long)ptr0);
    while(ptr2 != ptr3) {
        long long v3 = sub_41CDA5(ptr1, 5L);
        if((unsigned int)v3 > 25) {
            if((unsigned int)v3 == 26) {
                long long v4 = sub_41CDA5(ptr1, 3L);
                v0 = v4 & 0xFFFFFFFFL;
                goto loc_41CF13;
            }
            switch((unsigned int)v3) {
                case 27: {
                    long long v5 = sub_41CDA5(ptr1, 3L);
                    v0 = (unsigned long long)((unsigned int)v5 + 8);
                loc_41CF13:
                    v3 = (long long)*(char*)(v0 + 4451904L);
                    break;
                }
                case 28: {
                    long long v6 = sub_41CDA5(ptr1, 5L);
                    v3 = ((unsigned long long)((unsigned int)v2 ^ 0x20) + v6 + 65L) & 0xFFFFFFFFL;
                    break;
                }
                case 29: {
                    v2 = (unsigned long long)((unsigned int)v2 ^ 0x20);
                    v3 = sub_41CDA5(ptr1, 5L);
                    goto loc_41CF4E;
                }
                case 31: {
                    v3 = sub_41CDA5(ptr1, 8L);
                    break;
                }
            }
        }
        else {
        loc_41CF4E:
            v3 = (v3 + v2 + 65L) & 0xFFFFFFFFL;
        }
        *ptr0 = (unsigned char)v3;
        ptr2 = (long long*)(ptr0 + 1L);
    }
    return (unsigned long long)(unsigned int)v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D0AD(long long param0, long long* param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(param1[2] - param1[0]) < (unsigned long long)param3) {
        long long v2 = param3;
        long long* ptr0 = param1;
        sub_41CFE2(param0, param1, param3, param3);
        param3 = v2;
        param1 = ptr0;
    }
    if(param3) {
        sub_43AAA0(param3, param3);
    }
    param1[0] += param3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D130(long long param0, long long* param1, long long param2, long long param3, long long param4) {
    long long result;
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(param1[2] - param1[0]) < (unsigned long long)param4) {
        long long v2 = param3;
        long long v3 = param4;
        long long* ptr0 = param1;
        sub_41CFE2(param0, param1, param4, param3);
        param3 = v2;
        param4 = v3;
        param1 = ptr0;
    }
    long long v4 = param1[1];
    long long v5 = v4 + param2 + param4;
    long long v6 = v4 + param2;
    long long v7 = param1[0] - v4 - param2;
    if(v7) {
        sub_43ABC2(v5, v6, v7, param3);
    }
    if(param4) {
        sub_43AAA0(param3, param4);
    }
    param1[0] += param4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D1C8(long long param0, long long* param1, unsigned long long param2, long long param3, long long param4) {
    long long result;
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(param1[2] - param1[0]) < (unsigned long long)param4) {
        long long v2 = param3;
        long long v3 = param4;
        long long* ptr0 = param1;
        sub_41CFE2(param0, param1, param4, param3);
        param3 = v2;
        param4 = v3;
        param1 = ptr0;
    }
    long long v4 = param1[1];
    if((unsigned long long)param3 >= param2) {
        param3 += param4;
    }
    long long v5 = v4 + param2;
    long long v6 = v4 + param2 + param4;
    long long v7 = param1[0] - v4 - param2;
    if(v7) {
        sub_43ABC2(v6, v5, v7, param3);
    }
    if(param4) {
        sub_43AAA0(param3, param4);
    }
    param1[0] += param4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D23D(long long param0, long long* param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1 = v0;
    if((unsigned long long)(param1[2] - param1[0]) < (unsigned long long)param3) {
        long long v2 = param3;
        long long* ptr0 = param1;
        sub_41CFE2(param0, param1, param3, param3);
        param3 = v2;
        param1 = ptr0;
    }
    long long v3 = param1[1];
    long long v4 = v3 + param3 + param2;
    long long v5 = v3 + param2;
    long long v6 = param1[0] - v3 - param2;
    if(v6) {
        sub_43ABC2(v4, v5, v6, param3);
    }
    return result;
}

long long sub_41D2A1() {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknown v2;
    char v3;
    __SyntheticTypeUnknown v4;
    __SyntheticTypeUnknown v2 = comisd(v0, 0xc1e0000000000000L);
    if(!v3) {
        (unsigned long long)v5 = movlpd((unsigned long long)v1, 0x41dfffffffc00000L);
        v1 = comisd(v4, (unsigned long long)v2);
        return (unsigned long long)(int)(double)v2;
    }
    return 0x80000000L;
}

long long sub_41D385() {
    long long v0;
    return v0 == 0x7ff0000000000000L ? 1L: 0L;
}

long long sub_41D3A4() {
    long long v0;
    return v0 == 0xfff0000000000000L ? 1L: 0L;
}

long long sub_41D484() {
    long long v0;
    return v0 >>> 63;
}

void sub_41D4DE() {
    long long v0;
    long long v1;
    v1 = maxsd(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D508() {
    char v0;
    char v1;
    long long v2;
    double v3;
    double v4;
    double v5;
    double v6;
    long long v7;
    long long v8 = 0L;
    if((v7 & 0x7ff0000000000000L) != 0x7ff0000000000000L) {
        sub_417A0C();
        v2 = movlpd(v2, v7);
        if(v3 == v4) {
            v1 = 1;
            v0 = 0;
        }
        else if(v3 > v5) {
            v1 = 0;
            v0 = 0;
        }
        else if(v3 < v6) {
            v1 = 0;
            v0 = 0;
        }
        else {
            v1 = 1;
            v0 = 1;
        }
        v8 = v1 ? v0 ? 0L: 1L: 0L;
    }
    return v8 & 0xFFFFFFFFL;
}

long long sub_41D552() {
    long long v0;
    long long v1;
    long long v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    long long v5 = sub_41D508();
    long long result = 0L;
    if((unsigned int)v5) {
        v0 = movlpd(v0, v2);
        v1 = movlpd(v1, 0x433fffffffffffffL);
        __SyntheticTypeUnknown v6 = comisd(v3, (unsigned long long)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v4) | ((unsigned long long)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v4 >>> 0x20X)) << 32));
        result = 1L;
    }
    return result;
}

long long sub_41D58D(int* param0) {
    long long v0;
    char v1;
    char v2;
    double v3;
    long long v4 = /*BAD_CALL!*/ sub_41D2A1();
    if((double)(unsigned int)v4 == v3) {
        v2 = 1;
        v1 = 0;
    }
    else if((double)(unsigned int)v4 > v3) {
        v2 = 0;
        v1 = 0;
    }
    else if((double)(unsigned int)v4 < v3) {
        v2 = 0;
        v1 = 0;
    }
    else {
        v2 = 1;
        v1 = 1;
    }
    if((v1 || !v2)) {
        v0 = 0L;
    }
    else if(!(unsigned int)v4) {
        v0 = 0L;
        if((long long)v3 >= 0L) {
            *param0 = (unsigned int)v4;
            v0 = 1L;
            return v0 & 0xFFFFFFFFL;
        }
    }
    else {
        *param0 = (unsigned int)v4;
        v0 = 1L;
    }
    return v0 & 0xFFFFFFFFL;
}

long long sub_41D5D5(int* param0) {
    long long result;
    char v0;
    char v1;
    long long v2;
    double v3;
    long long v4;
    long long v5 = sub_41D2A1();
    v2 = movlpd(v2, v4);
    if((double)(unsigned int)v5 == v3) {
        v1 = 1;
        v0 = 0;
    }
    else if((double)(unsigned int)v5 > v3) {
        v1 = 0;
        v0 = 0;
    }
    else if((double)(unsigned int)v5 < v3) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    if(!v0 && v1) {
        *param0 = (unsigned int)v5;
        result = 1L;
    }
    else {
        result = 0L;
    }
    return result;
}

long long sub_41D60E() {
    char v0;
    char v1;
    char v2;
    int v3;
    __SyntheticTypeUnknown v4;
    __SyntheticTypeUnknown v5;
    __SyntheticTypeUnknown v6;
    long long result;
    if((double)v5 == 0.0) {
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    else if((double)v5 > 0.0) {
        v2 = 0;
        v1 = 0;
        v0 = 0;
    }
    else {
        if((double)v5 < 0.0) {
            v2 = 0;
            v1 = 0;
        }
        else {
            v2 = 1;
            v1 = 1;
        }
        v0 = 1;
    }
    if(!v1 && v2) {
        __SyntheticTypeUnknown v6 = comisd(v4, 0L);
        if(!v0 && !v2) {
            (unsigned int)result = movmskpd(v3, v5);
            (unsigned long long)v7 = movlpd((unsigned long long)v6, 0x7ff0000000000000L);
            if(((unsigned char)v3 & 0x1)) {
                (unsigned long long)v7 = movlpd((unsigned long long)v4, 0xfff0000000000000L);
                return result;
            }
        }
        else {
            __SyntheticTypeUnknown v8 = comisd(0x0X, (unsigned long long)v6);
            if(!v0 && !v2) {
                (unsigned int)result = movmskpd(v3, v5);
                (unsigned long long)v7 = movlpd((unsigned long long)v6, 0xfff0000000000000L);
                if(((unsigned char)v3 & 0x1)) {
                    (unsigned long long)v7 = movlpd((unsigned long long)v4, 0x7ff0000000000000L);
                    return result;
                }
            }
            else {
                (unsigned long long)v7 = movlpd((unsigned long long)v6, 0x7ff8000000000000L);
            }
        }
    }
    return result;
}

long long sub_41D6B1(long long param0) {
    long long v0;
    long long v1 = *(long long*)(param0 + 64L);
    int v2 = 0;
    long long v3 = *(long long*)(v1 + 216L);
    do {
        v3 -= 7046029254386353131L;
        int v4 = v2;
        ++v2;
        v0 = ((((v3 >>> 30) ^ v3) * -4658895280553007687L) ^ ((((v3 >>> 30) ^ v3) * -4658895280553007687L) >>> 27)) * -7723592293110705685L;
        *(long long*)(((unsigned long long)(v4 & 0x1) + 26L) * 8L + v1 + 8L) = (v0 >>> 31) ^ v0;
    }
    while(v2 != 64);
    return (v0 >>> 31) ^ v0;
}

long long sub_41D71B(long long param0) {
    long long v0;
    long long v1 = *(long long*)(param0 + 64L);
    long long v2 = *(long long*)(v1 + 216L);
    long long v3 = *(long long*)(v1 + 224L);
    long long v4 = v2 ^ v3;
    *(long long*)(v1 + 224L) = __ror__(v4, 28);
    long long result = ((v2 + v3) >>> 12) | 0x3ff0000000000000L;
    *(long long*)(v1 + 216L) = (v4 * 0x4000L) ^ ((__ror__(v2, 9)) ^ v4);
    v0 = movlpd(v0, result);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D7F7(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result;
    long long v0 = param0;
    long long v1 = sub_405873(param0, param1, param2, param3, param4, param5);
    if(((*(int*)v1 & 0x180) - 128)) {
        sub_401C42(v0, "third_party/duktape/duk_api_buffer.c", 100663333L, "wrong buffer type");
        result = 0L;
    }
    else {
        result = *(long long*)(v1 + 32L);
        if(param2) {
            *(long long*)param2 = *(long long*)(v1 + 24L);
        }
        *(long long*)(v1 + 32L) = 0L;
        *(long long*)(v1 + 24L) = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D860(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result1;
    long long result;
    long long v0;
    long long v1 = v0;
    long long v2 = /*BAD_CALL!*/ sub_405873(param0, param1, param2, param3, param4, param5);
    if(!((*(int*)v2 >>> 8) & 0x1)) {
        sub_401C42(param0, "third_party/duktape/duk_api_buffer.c", 0x6000042L, "wrong buffer type");
        return result;
    }
    *(long long*)(v2 + 32L) = param2;
    *(long long*)(v2 + 24L) = param3;
    return result1;
}

void sub_41D8AF() {
    // Decompilation error
}

void sub_41D8F0() {
    // Decompilation error
}

void sub_41D928() {
    // Decompilation error
}

void sub_41D9B8() {
    // Decompilation error
}

void sub_41DA2F() {
    // Decompilation error
}

void sub_41DA88() {
    // Decompilation error
}

void sub_41DAD1() {
    // Decompilation error
}

void sub_41DB21() {
    // Decompilation error
}

void sub_41DBA7() {
    // Decompilation error
}

void sub_41DBAB() {
    // Decompilation error
}

void sub_41DBF3() {
    // Decompilation error
}

void sub_41DC46() {
    // Decompilation error
}

long long sub_41DC85(long long param0) {
    long long result;
    long long v0 = *(long long*)(param0 + 120L);
    if(v0) {
        result = (unsigned long long)(*(int*)(v0 + 88L) >>> 2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DC9A(long long param0) {
    long long result = sub_41DC85(param0);
    if(!(unsigned int)result) {
        result = sub_401C42(param0, "third_party/duktape/duk_api_call.c", 0x6000182L, "constructor requires \'new\'");
    }
    return result;
}

long long sub_41DCBE(long long param0) {
    long long result;
    long long v0 = *(long long*)(param0 + 120L);
    if(v0) {
        result = (unsigned long long)*(int*)(v0 + 88L);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DCF9(long long param0, long long param1) {
    long long result;
    long long v0 = param0;
    long long v1 = sub_404A12(param0, param1);
    int v2 = *(int*)v1;
    switch(v2) {
        case 6: {
            return (unsigned long long)(int)*(char*)(v1 + 5L);
        }
        case 9: {
            int* ptr0 = *(unsigned long long*)(v1 + 8L);
            if(!((*ptr0 >>> 12) & 0x1)) {
                sub_401C42(v0, "third_party/duktape/duk_api_call.c", 0x60001d0L, "unexpected type");
                result = 0L;
            }
            else {
                result = (unsigned long long)(int)*(short*)((char*)ptr0 + 66L);
            }
            return result;
        }
        default: {
            sub_401C42(v0, "third_party/duktape/duk_api_call.c", 0x60001d0L, "unexpected type");
            return 0L;
        }
    }
}

int* sub_41DD48(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int* result = sub_405991(param0, param1, param2, param3, param4, param5);
    *(short*)((char*)&result[16] + 2) = (unsigned short)param2;
    return result;
}

void sub_41DD9B() {
    // Decompilation error
}

long long sub_41DE30(long long param0, long long* param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    v6 = movlpd(v6, *param1);
    long long v7 = 0L;
    long long v8 = v0;
    long long v17 = movlpd(v0, *(param1 + 1));
    long long v9 = v1;
    long long v16 = movlpd(v1, *(param1 + 2));
    double v10 = v10 - 1.0;
    double v11 = v10;
    long long v18 = movlpd(v10, *(param1 + 3));
    long long v12 = v2;
    long long v19 = movlpd(v2, *(param1 + 4));
    long long v13 = v3;
    long long v20 = movlpd(v3, *(param1 + 5));
    long long v14 = v4;
    long long v21 = movlpd(v4, *(param1 + 6));
    long long v15 = v5;
    return sub_41E321(&v8, 0L, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DE9A(long long param0, int param1) {
    __SyntheticTypeUnknown v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    __SyntheticTypeUnknown v5;
    __SyntheticTypeUnknown v6;
    long long v7 = v1;
    sub_405C43(param0);
    long long result1 = sub_4064EF();
    if(!(unsigned int)result1) {
        sub_404F0A(param0, (unsigned long long)param1);
        sub_405DB7(param0, 0xFFFFFFFFL, v2, v3, v4);
        sub_40541C(param0, 0xFFFFFFFFL);
        __SyntheticTypeUnknown v5 = comisd(v0, 0L);
        long long v9 = movlpd(0L, 0x4058c00000000000L);
        __SyntheticTypeUnknown v8 = comisd(v6, (unsigned long long)v5);
        sub_406A1B(param0);
        long long result = sub_405057(param0, (unsigned long long)param1, v2, v3);
        sub_407D7E(param0);
        return result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DF22(long long param0, long long param1, int param2) {
    long long v0;
    long long v1 = 0L;
    long long result = sub_41DE9A(param0, 0L);
    do {
        __SyntheticTypeUnknown v2 = 0x0X;
        if((unsigned int)v1 < param2) {
            result = sub_405C43(param0);
            if(v1 == 2L) {
                v2 = 0xBFF0000000000000X;
            }
        }
        *(long long*)(v1 * 8L + v0) = (unsigned long long)v2;
        ++v1;
    }
    while(v1 != 8L);
    return result;
}

void sub_41DF78() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41E05A() {
    double v0;
    long long v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    long long* ptr0;
    v1 = movlpd(v1, 0x7fefffffffffffffL);
    __SyntheticTypeUnknown v4 = (__SyntheticTypeUnknownU)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v3) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v3 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v3 >>> 0x40X) << 64);
    __SyntheticTypeUnknown v5 = (__SyntheticTypeUnknownU)(unsigned long long)v4 | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x40X) & (unsigned int)(v4 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x60X) & (unsigned int)(v4 >>> 0x60X)) << 96);
    if(!(v0 == (double)v4 ? 0: v0 <= (double)v4)) {
        v3 = comisd(v3, 0xc33eb208c2dc0000L);
        long long v6 = movlpd((unsigned long long)v5, 0x433eb208c2dc0000L);
        v5 = comisd(v2, (unsigned long long)v3);
        return sub_417A0C();
    }
    long long v7 = movlpd((unsigned long long)v3, 0x7ff8000000000000L);
    jump *ptr0;
}

long long sub_41E098(long long param0) {
    int v0 = (unsigned int)param0 - 1901;
    if(v0 < 0) {
        v0 = (unsigned int)param0 - 2000;
    }
    int v1 = ((unsigned int)param0 - 1970) * 365 + (unsigned int)((unsigned int)param0 >= 1969 ? (unsigned long long)(((unsigned int)param0 - 1969) >> 2): (unsigned long long)(((unsigned int)param0 - 1972) / 4)) - v0 / 100;
    int v2 = (unsigned int)param0 - 1601;
    if(v2 < 0) {
        v2 = (unsigned int)param0 - 2000;
    }
    return (unsigned long long)(v2 / 400 + v1);
}

long long sub_41E0FB(int param0) {
    return (unsigned char)param0 & 0x3 ? 0L: param0 % 100 ? 1L: param0 % 400 ? 0L: 1L;
}

long long sub_41E147(long long param0, long long param1) {
    __SyntheticTypeUnknown v0;
    long long v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    char v4;
    __SyntheticTypeUnknown v2 = comisd(v0, -4377866036972463104L);
    v1 = movlpd(v1, 4845505999882312704L);
    __SyntheticTypeUnknown v5 = comisd(v3, (unsigned long long)v2);
    return (unsigned long long)((unsigned int)((unsigned long long)(v4 ? 0: 1) | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8)) & 0x1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41E185(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int v0;
    int v1;
    long long v2;
    long long v3;
    double v4;
    long long v5;
    long long v6;
    long long v7;
    double v8;
    int v9;
    int v10;
    int v11;
    int v12;
    long long v13;
    __SyntheticTypeUnknown v14;
    long long v15;
    long long v16;
    long long v17 = v15;
    long long v18 = v16;
    sub_42F94A(param0, param1, param2, param3);
    v13 = movlpd(v13, 0x4194997000000000L);
    sub_42F9DE();
    __SyntheticTypeUnknown v19 = v14;
    v5 = movlpd(v5, v6);
    __SyntheticTypeUnknown v28 = comisd(0x0X, (unsigned long long)v19);
    if((unsigned long long)&v18 >= 24L && &v3 != 56L) {
        v19 = (__SyntheticTypeUnknownU)((double)v19 + 8.64E7) | ((__SyntheticTypeUnknownU)(unsigned long long)(v19 >>> 0x40X) << 64);
    }
    long long v20 = (unsigned long long)v19;
    sub_42F94A(param0, param1, param2, param3);
    v7 = movlpd(v7, v20);
    param5 = (unsigned long long)(int)v4 | ((unsigned long long)(unsigned int)(param5 >>> 32L) << 32);
    int v21 = (int)v8 / 1000;
    *(int*)(param0 + 24L) = (int)v8 % 1000;
    *(int*)(param0 + 20L) = (int)v8 / 1000 % 60;
    int v22 = (int)v8 / 1000 / 60 < 0 ? -1: 0;
    *(int*)(param0 + 12L) = (unsigned int)((unsigned long long)((int)v8 / 1000 / 60) | ((unsigned long long)((int)v8 / 1000 / 60 < 0 ? -1: 0) << 32)) / 60;
    *(int*)(param0 + 16L) = (unsigned int)((unsigned long long)((int)v8 / 1000 / 60) | ((unsigned long long)((int)v8 / 1000 / 60 < 0 ? -1: 0) << 32)) % 60;
    long long v23 = 365L;
    *(int*)(param0 + 28L) = ((unsigned int)param5 + 140000004) % 7;
    if((unsigned int)param5 < 0) {
        v23 = 366L;
    }
    long long v24 = ((((long long)(unsigned int)param5 / (long long)(unsigned int)v23) & 0xFFFFFFFFL) + 1970L) & 0xFFFFFFFFL;
    while(1) {
        long long v25 = sub_41E098(v24);
        int v26 = (unsigned int)v25 - v12;
        if(v26 <= 0) {
            break;
        }
        else {
            v24 = (long long)(v9 - ((v26 - 1) / v10 + 1));
        }
    }
    long long v27 = sub_41E0FB(param0);
    long long result = 0L;
    do {
        v2 = (unsigned long long)*(unsigned char*)((long long)&gvar_43F4B0 + result);
        v1 = (unsigned int)result;
        if((unsigned int)result == 1) {
            v2 = (unsigned long long)((unsigned int)v2 - ((unsigned int)(((unsigned int)v27 ? 1: 0) < 1) - 1));
        }
        if((unsigned int)v2 > v11) {
            goto loc_41E2A8;
        }
        else {
            ++result;
            v11 -= (unsigned int)v2;
        }
    }
    while(result != 12L);
    v1 = 12;
loc_41E2A8:
    if(((unsigned char)param2 & 0x8)) {
        result = (param0 - 1971L) & 0xFFFFFFFFL;
        if((unsigned int)result > 66) {
            v2 = ((long long)((unsigned int)param1 + 140000004) % 7L) & 0xFFFFFFFFL;
            if((unsigned int)v27) {
                v2 = (unsigned long long)((unsigned int)v2 + 7);
            }
            result = (long long)(unsigned int)v2;
            v0 = (unsigned int)a5A1__9__6_2___[result] + 1970;
        }
    }
    *(int*)param0 = v0;
    *(int*)(param0 + 4L) = v1;
    *(int*)(param0 + 8L) = v11;
    if(((unsigned char)param2 & 0x4)) {
        *(int*)(param0 + 4L) = v1 + 1;
        *(int*)(param0 + 8L) = v11 + 1;
    }
    if(param1) {
        result = 0L;
        do {
            *(double*)(result * 8L + param1) = (double)*(int*)(result * 4L + param0);
            ++result;
        }
        while(result != 8L);
    }
    return result;
}

long long sub_41E321(long long* param0, long long param1, long long param2, long long param3) {
    double v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    long long v4;
    double v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    __SyntheticTypeUnknown v11;
    __SyntheticTypeUnknown v12;
    long long v13;
    double v14;
    long long v15;
    long long v16;
    double v17;
    long long v18;
    long long v19;
    double v20;
    long long v21;
    long long v22;
    double v23;
    long long v24;
    long long v25;
    __SyntheticTypeUnknown v26;
    __SyntheticTypeUnknown v27;
    __SyntheticTypeUnknown v28;
    unsigned long long v29 = 0L;
    long long v30 = v7;
    long long v31 = param1 & 0xFFFFFFFFL;
    long long v32 = v10;
    char v33 = (unsigned long long)&v32 < 40L;
    __SyntheticTypeUnknown v34 = (__SyntheticTypeUnknownU)0x7fffffffffffffffL | ((__SyntheticTypeUnknownU)(unsigned long long)(v34 >>> 0x40X) << 64);
    do {
        (unsigned long long)v48 = movlpd((unsigned long long)v26, *(long long*)(v29 * 8L + (long long)param0));
        (unsigned long long)v49 = movlpd((unsigned long long)v2, 0x7fefffffffffffffL);
        v1 = (__SyntheticTypeUnknownU)((unsigned int)v26 & (unsigned int)v34) | ((__SyntheticTypeUnknownU)((unsigned int)(v26 >>> 0x20X) & (unsigned int)(v34 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)((unsigned int)(v26 >>> 0x40X) & (unsigned int)(v34 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(v26 >>> 0x60X) & (unsigned int)(v34 >>> 0x60X)) << 96);
        v2 = comisd(v27, (unsigned long long)((unsigned int)v26 & (unsigned int)v34) | ((unsigned long long)((unsigned int)(v26 >>> 0x20X) & (unsigned int)(v34 >>> 0x20X)) << 32));
        if(!v33) {
            sub_417A0C();
            *(long long*)(v29 * 8L + (long long)param0) = v25;
            v34 = (__SyntheticTypeUnknownU)0x7fffffffffffffffL | ((__SyntheticTypeUnknownU)(unsigned long long)(v34 >>> 0x40X) << 64);
            v2 = (__SyntheticTypeUnknownU)0x7fefffffffffffffL | ((__SyntheticTypeUnknownU)(unsigned long long)(v2 >>> 0x40X) << 64);
        }
        ++v29;
        v33 = v29 < 7L;
    }
    while(v29 != 7L);
    long long v51 = movlpd((unsigned long long)v1, 0x414b774000000000L);
    (unsigned long long)v48 = movlpd((unsigned long long)v26, 0x40ed4c0000000000L);
    double v35 = v35 * *(double*)(param0 + 3);
    v13 = movlpd(v13, *param0);
    double v36 = v36 * *(double*)(param0 + 4);
    double v37 = (double)v28;
    v35 = v35 + 0.0 + v36;
    (unsigned long long)v48 = movlpd(v36, 0x408f400000000000L);
    long long v52 = movlpd(v35, 0x7ff8000000000000L);
    double v38 = v14 * *(double*)(param0 + 5) + v35 + *(double*)(param0 + 6);
    __SyntheticTypeUnknown v39 = (__SyntheticTypeUnknownU)((unsigned int)v28 & (unsigned int)v34) | ((__SyntheticTypeUnknownU)((unsigned int)(v28 >>> 0x20X) & (unsigned int)(v34 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v28 >>> 0x40X) << 64);
    if(!((double)v2 == (double)v39 ? 0: (double)v2 <= (double)v39)) {
        v15 = movlpd(v15, *(param0 + 1));
        __SyntheticTypeUnknown v40 = (__SyntheticTypeUnknownU)((unsigned int)v34 & (unsigned int)v4) | ((__SyntheticTypeUnknownU)((unsigned int)(v34 >>> 0x20X) & (unsigned int)(v4 >>> 32L)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v34 >>> 0x40X) << 64);
        if(!((double)v2 == (double)v40 ? 0: (double)v2 <= (double)v40)) {
            long long v41 = v4;
            sub_42F94A((long long)param0, param1, param2, param3);
            v24 = movlpd(v24, v37);
            v22 = movlpd(v22, v41);
            v37 = v23 + v20;
            sub_42F9DE();
            v21 = movlpd(v21, v37);
            __SyntheticTypeUnknown v53 = comisd(0x0X, v18);
            __SyntheticTypeUnknown v12 = comisd(v11, 0xc110973400000000L);
            v19 = movlpd(v19, 0x4110d4c000000000L);
            __SyntheticTypeUnknown v47 = comisd(v3, (unsigned long long)v12);
            v16 = movlpd(v16, *(param0 + 2));
            sub_41E098((unsigned long long)(int)(double)v12 | ((unsigned long long)(unsigned int)(v9 >>> 32L) << 32));
            long long v42 = sub_41E0FB(v8);
            for(long long i = 0L; (unsigned int)i < (int)v17; ++i) {
                param1 = (unsigned long long)((unsigned int)*(unsigned char*)((long long)&gvar_43F4B0 + i) + (unsigned int)param1);
                if((unsigned int)i == 1) {
                    param1 = (unsigned long long)((unsigned int)param1 - ((unsigned int)(((unsigned int)v42 ? 1: 0) < 1) - 1));
                }
            }
            v0 = (double)(unsigned int)param1 + v5;
        }
    }
    v0 = v0 * 8.64E7 + v38;
    if(((unsigned char)v31 & 0x10)) {
        int v43 = 4;
        long long v44 = 999999999L;
        long long v45 = 0L;
        do {
            long long v46 = /*BAD_CALL!*/ sub_41EEA7();
            v6 = movlpd(v6, v0);
            if((unsigned int)v46 == (unsigned int)v45 || (unsigned int)v46 == (unsigned int)v44) {
                break;
            }
            else {
                --v43;
                v44 = (long long)(unsigned int)v45;
                v45 = (long long)(unsigned int)v46;
            }
        }
        while(v43);
    }
    return sub_41E05A();
}

long long sub_41E537(long long param0, long long param1, long long param2, long long param3, char* param4) {
    long long result;
    int v0;
    long long v1;
    long long v2;
    int v3;
    int v4;
    long long v5;
    long long v6;
    char* ptr0;
    int v7;
    int v8;
    int v9;
    char* ptr1;
    long long v10;
    long long v11 = v6;
    sub_43ABE2((long long)&v7, 0L, 36L, param3);
    char v12 = *ptr1;
    long long v13 = 0x100000001L;
    long long v14 = 0L;
    if(v12 != 43) {
        v14 = v12 == 45 ? 1L: 0L;
        param4 = v12 == 45 ? ptr0: ptr1;
    }
    int v15 = 0;
    long long v16 = 0L;
    long long v17 = 0L;
    int v18 = 0;
loc_41E58E:
    while(1) {
        v2 = (unsigned long long)*param4;
        ++param4;
        if((unsigned char)((unsigned char)v2 + 208) > 9) {
            break;
        }
        else if((unsigned int)v16 > 8) {
            return 0L;
        }
        else if(v18 != 6 || (unsigned int)v16 <= 2) {
            v16 = (unsigned long long)((unsigned int)v16 + 1);
            v17 = ((unsigned long long)((unsigned int)v17 * 10) + v2 - 48L) & 0xFFFFFFFFL;
        }
    }
    if((unsigned int)v16) {
        if(v18 == 6) {
            while((unsigned int)v16 <= 2) {
                v17 = (unsigned long long)((unsigned int)v17 * 10);
                v16 = (unsigned long long)((unsigned int)v16 + 1);
            }
        }
        *(int*)((unsigned long long)v18 * 4L + (long long)&v7) = (unsigned int)v17;
        v16 = 0L;
        do {
            int v19 = (unsigned int)v16;
            if((unsigned char)v2 == a__T___Z[v16]) {
                v17 = 0L;
                v19 = (unsigned int)(1L << ((unsigned long long)(v19 + 9) & 0x3fL)) + (unsigned int)(1L << ((unsigned long long)v18 & 0x3fL));
                do {
                    v16 = (unsigned long long)*(unsigned int*)(v17 * 4L + (long long)&gvar_43F480);
                    if((*(unsigned int*)(v17 * 4L + (long long)&gvar_43F480) & v19) == v19) {
                        v18 = ((unsigned int)v16 >>> 17) & 0xF;
                        v15 = ((unsigned int)v16 >>> 21) & 0x1 ? ((unsigned int)v16 >>> 21) & 0x1: v15;
                        if(!((unsigned char)(v16 >>> 21L) & 0x2)) {
                            v16 = (unsigned long long)(((unsigned int)v16 >>> 21) & 0x4);
                            if((unsigned int)v16) {
                                if(*param4) {
                                    break;
                                }
                                else {
                                    goto loc_41E651;
                                }
                            }
                            else if(!(unsigned char)v2) {
                                break;
                            }
                            else {
                                v17 = 0L;
                                goto loc_41E58E;
                            }
                        }
                        else {
                        loc_41E651:
                            if((unsigned int)v14) {
                                v7 = 0 - v7;
                            }
                            int v20 = v3;
                            int v21 = v8;
                            if(v15) {
                                v1 = (long long)(v20 + v4);
                                v0 = v21 + v9;
                            }
                            else {
                                v1 = (long long)(v20 - v4);
                                v0 = v21 - v9;
                            }
                            v3 = (unsigned int)v1;
                            v13 = (unsigned long long)((unsigned int)v13 - 1) | ((unsigned long long)((unsigned int)(v13 >>> 32L) - 1) << 32);
                            v8 = v0;
                            long long v22 = 0L;
                            do {
                                *(long long*)(v22 * 8L + (long long)&v5) = (double)*(int*)(v22 * 4L + v10);
                                ++v22;
                            }
                            while(v22 != 8L);
                            sub_41E321(&v5, 0L, v1, (long long)v4);
                            sub_406A1B(v10);
                            result = 1L;
                        }
                        return result;
                    }
                    ++v17;
                }
                while(v17 != 11L);
                break;
            }
            else {
                ++v16;
            }
        }
        while(v16 != 8L);
    }
    return 0L;
}

void sub_41E6C9() {
    // Decompilation error
}

long long sub_41E852(long long param0) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = sub_404AE7(param0);
    if((unsigned int)v4 <= 1) {
        sub_406B26(param0, v1, v2);
    }
    else {
        sub_41DF22(param0, &v0, (int)v4);
        sub_41E321((long long*)&v0, 0L, v2, v3);
        sub_406A1B(param0);
    }
    return 1L;
}

void sub_41E8A1() {
    // Decompilation error
}

void sub_41E8C2() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41EABC(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5, long long param6, void* param7) {
    long long v0;
    double v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    __SyntheticTypeUnknown v10;
    sub_406FB2(param0);
    sub_408290(param0, 0xFFFFFFFFL, v3, v4, v5, v6);
    sub_404F67(param0, v7, v3, v4);
    sub_406EB2(param0, 0xFFFFFFFFL, 2L, v4, v5, v6, v4, v8, v9, v0, param6, param7);
    long long v11 = sub_4064DB();
    if((unsigned int)v11) {
        sub_40541C(param0, 0xFFFFFFFFL);
        __SyntheticTypeUnknown v12 = (__SyntheticTypeUnknownU)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v10) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v10 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v10 >>> 0x40X) << 64);
        __SyntheticTypeUnknown v13 = (__SyntheticTypeUnknownU)(unsigned long long)v12 | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x40X) & (unsigned int)(v12 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x60X) & (unsigned int)(v12 >>> 0x60X)) << 96);
        v2 = movlpd(v2, 0x7fefffffffffffffL);
        if(!(v1 == (double)v13 ? 0: v1 <= (double)v13)) {
            sub_407D7E(param0);
            sub_4037B9(param0, 0xffff002aL);
            sub_404FF1(param0, v7, v3, v4);
            sub_41DA64(param0);
            return 1L;
        }
        sub_40691D(param0, v7, v3);
    }
    else {
        sub_407D7E(param0);
        sub_4037B9(param0, 0xffff002aL);
        sub_404FF1(param0, v7, v3, v4);
        sub_41DA64(param0);
    }
    return 1L;
}

void sub_41EB58() {
    // Decompilation error
}

void sub_41EC20() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41EDBF(long long param0) {
    long long result;
    long long result;
    long long v0;
    long long result;
    long long v1;
    long long v2;
    int v3;
    int v4;
    int v5;
    long long v6;
    long long v7;
    long long v8;
    sub_406FB2(param0);
    sub_4054BB(param0, 0xFFFFFFFFL, v2, v6, v7, v8);
    long long v9 = sub_40578B(param0, 0L, &v1, v6, v7, v8);
    switch(v1) {
        case 6: {
            sub_43AD14();
            if(!v5) {
                v0 = 1L;
                sub_406EBC(param0, 0xFFFFFFFFL, v0);
                result = 1L;
            }
            else {
                sub_43AD14();
                v0 = 2L;
                if(!v3) {
                    sub_406EBC(param0, 0xFFFFFFFFL, v0);
                    result = 1L;
                }
                else {
                    sub_401D12(v6, 1763L);
                    result = 0L;
                }
            }
            return result;
        }
        case 7: {
            sub_43AD14();
            if(v4) {
                sub_401D12(v6, 1763L);
                result = 0L;
            }
            else {
                v0 = 1L;
                sub_406EBC(param0, 0xFFFFFFFFL, v0);
                result = 1L;
            }
            return result;
        }
        default: {
            sub_401D12(v6, 1763L);
            return 0L;
        }
    }
}

void sub_41EE6B() {
    // Decompilation error
}

long long sub_41EEA7() {
    // Decompilation error
}

void sub_41EFAF() {
    // Decompilation error
}

void sub_41F058() {
    // Decompilation error
}

void sub_41F123() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F274(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = param0;
    /*BAD_CALL!*/ sub_406FB2(param0);
    long long v5 = *(long long*)(param0 + 112L);
    int v6 = *(int*)(v5 - 16L);
    switch(v6) {
        case 6: {
            sub_4086CB(param0, v5 - 16L);
            return 1L;
        }
        case 9: {
            int* ptr0 = *(unsigned long long*)(v5 - 8L);
            sub_4037B9(param0, 0xffff005dL);
            long long v7 = sub_40649F(v4, 0xFFFFFFFFL);
            long long v8 = v4;
            long long v9 = &gvar_43DB77;
            if(!(unsigned int)v7) {
                long long v10 = sub_408725(v8, 0xFFFFFFFFL);
                v8 = v4;
                v9 = v10;
            }
            long long v11 = (unsigned long long)*ptr0;
            long long v12 = "function %s() { [ecmascript code] }";
            if(!((v11 >>> 11L) & 0x1L)) {
                v12 = "function %s() { [native code] }";
                if(!((v11 >>> 12L) & 0x1L)) {
                    if(!((v11 >>> 10L) & 0x1L)) {
                        sub_401D12(v1, 162L);
                        return 0L;
                    }
                    v12 = "function %s() { [bound code] }";
                }
            }
            sub_407AA3(v8, v12, v9, v1, v2, v3);
            return 1L;
        }
        default: {
            sub_401D12(v1, 162L);
            return 0L;
        }
    }
}

long long sub_41F33D(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = v4;
    long long v10 = sub_404AE7(param0);
    long long v11 = (unsigned long long)((unsigned int)v10 - 1);
    if(((v11 >>> 31L) & 0x1L)) {
        v11 = v10 & 0xFFFFFFFFL;
        sub_4068D1(param0, v6, v5);
    }
    if((unsigned int)v11 > 0x20000000) {
        v2 = 227L;
        goto loc_41F457;
    }
    else {
        sub_406FB2(param0, v6);
        sub_40661B(param0, 0xFFFFFFFFL);
        long long v12 = sub_407318(param0, v6, v5, v3);
        long long v13 = *(long long*)(param0 + 112L);
        *(__SyntheticTypeUnknownP128)(v12 + 72L) = **(unsigned long long*)(param0 + 104L);
        *(__SyntheticTypeUnknownP128)(v12 + 56L) = *(__SyntheticTypeUnknownP128)(v13 - 32L);
        if(*(int*)(v13 - 32L) == 9) {
            int* ptr0 = *(unsigned long long*)(v13 - 24L);
            long long v14 = *(long long*)(ptr0 + 8);
            *(long long*)(v12 + 32L) = *(long long*)(ptr0 + 8);
            if(v14) {
                *(int*)(v14 + 4L) = *(int*)(v14 + 4L) + 1;
            }
            if(((*ptr0 >>> 16) & 0x1)) {
                *(int*)v12 = *(int*)v12 | 0x10000;
            }
            if(!((*ptr0 >>> 10) & 0x1)) {
                goto loc_41F41A;
            }
            else {
                v1 = (long long)*(ptr0 + 24);
                v0 = *(long long*)(ptr0 + 22);
                __SyntheticTypeUnknown v15 = *(__SyntheticTypeUnknownP128)(ptr0 + 18);
                *(__SyntheticTypeUnknownP128)(v12 + 56L) = *(__SyntheticTypeUnknownP128)(ptr0 + 14);
                *(__SyntheticTypeUnknownP128)(v12 + 72L) = v15;
            }
        }
        else {
            long long v16 = *(long long*)(param0 + 200L);
            *(int*)v12 = *(int*)v12 | 0x10000;
            *(long long*)(v12 + 32L) = v16;
            if(v16) {
                *(int*)(v16 + 4L) = *(int*)(v16 + 4L) + 1;
            }
        loc_41F41A:
            v1 = 0L;
            v0 = 0L;
        }
        if((*(char*)(v12 + 56L) & 0x8)) {
            long long v17 = *(long long*)(v12 + 64L);
            *(int*)(v17 + 4L) = *(int*)(v17 + 4L) + 1;
        }
        if((*(char*)(v12 + 72L) & 0x8)) {
            long long v18 = *(long long*)(v12 + 80L);
            *(int*)(v18 + 4L) = *(int*)(v18 + 4L) + 1;
        }
        long long v19 = (v1 + v11) & 0xFFFFFFFFL;
        if((unsigned int)v19 > 0x20000000) {
            v2 = 316L;
        loc_41F457:
            sub_401CE2("invalid count", v2);
            result = 0L;
        }
        else {
            long long v20 = v0;
            int v21 = (unsigned int)v19;
            long long v22 = sub_402FA0(param0, (long long)(unsigned int)v19 * 16L, v0, v19);
            int v23 = v21;
            long long v24 = v20;
            *(long long*)(v12 + 88L) = v22;
            *(int*)(v12 + 96L) = v23;
            sub_408C9E(param0, (char*)v22, v24, v1);
            long long v25 = 0L;
            sub_408C9E(param0, (char*)(v1 * 16L + v22), *(long long*)(param0 + 104L) + 16L, (long long)(unsigned int)v11);
            sub_4037B9(param0, 0xfffe0057L);
            long long v26 = sub_405483(param0, 0xFFFFFFFFL, v5, v3);
            if((unsigned int)v26 >= (unsigned int)v11) {
                v25 = (unsigned long long)((unsigned int)v26 - (unsigned int)v11);
            }
            sub_407D7E(param0);
            int* ptr1 = *(unsigned long long*)(param0 + 112L);
            *(unsigned long long*)(param0 + 112L) = (long long*)(ptr1 + 4);
            *ptr1 = 0;
            *(double*)(ptr1 + 2) = (double)(unsigned int)v25;
            sub_403E13(param0, 4261435140L);
            sub_403F77(param0, 0xFFFFFFFFL, 69L);
            sub_403F77(param0, 0xFFFFFFFFL, 67L);
            sub_406EC3(param0, "bound ", 6L);
            sub_40377C(param0, 0xfffffffdL, 93L);
            long long v27 = sub_406529(v3, v5, v7, v8);
            if(!(unsigned int)v27) {
                sub_407D7E(param0);
                sub_407963(param0);
            }
            sub_408E52(param0, 2L, v5);
            sub_403E13(param0, 4261436676L);
            sub_4037B9(param0, 0xfffe005eL);
            sub_403E13(param0, 4261436932L);
            result = 1L;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F5B5(long long param0) {
    long long result;
    long long result;
    long long v0;
    long long v1 = param0;
    long long v2 = sub_406FC3(param0);
    int v3 = *(int*)v2;
    switch(v3) {
        case 6: {
            sub_406AAF(v1, (unsigned long long)((*(int*)(v2 + 4L) >>> 4) & 0xF));
            return 1L;
        }
        case 9: {
            int* ptr0 = *(unsigned long long*)(v2 + 8L);
            if(((*ptr0 >>> 12) & 0x1)) {
                long long v4 = (unsigned long long)(int)*(short*)(ptr0 + 16);
                if(*(short*)(ptr0 + 16) == 0xFFFF) {
                    v4 = 0L;
                }
                sub_406A68(v1, v4);
                result = 1L;
            }
            return result;
        }
        default: {
            sub_401D12(v0, 412L);
            return 0L;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F61B(long long param0) {
    long long result;
    long long v0;
    long long v1 = param0;
    long long v2 = sub_406FC3(param0);
    int v3 = *(int*)v2;
    if(v3 == 6) {
        sub_4086BF(v1, v2);
    loc_41F657:
        result = 1L;
    }
    else if(v3 != 9 || !((**(unsigned long long*)(v2 + 8L) >>> 12) & 0x1)) {
        sub_401D12(v0, 441L);
        result = 0L;
    }
    else {
        sub_407963(v1);
        goto loc_41F657;
    }
    return result;
}

void sub_41F671() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F69C(long long* param0, long long param1, int param2, long long param3, long long param4, long long param5, long long param6, long long param7, long long param8, long long param9) {
    char* ptr0;
    long long v0;
    long long v1;
    long long result;
    long long v2;
    long long* ptr1 = &v0;
    v0 = v2;
    if((unsigned long long)(*(param0 + 4) - *(param0 + 2)) <= 5L) {
        ptr1 = &v1;
        sub_41CFE2(*param0, param0 + 2, 6L, param3);
    }
    if(param2 >= 0 && param2 <= 127) {
        if(!(((unsigned int)*(char*)((long long)(param2 >> 3) + 4453936L) >>> ((unsigned int)(param2 & 0x7) % 32)) & 0x1)) {
            goto loc_41F70B;
        }
        else {
            ptr0 = *(unsigned long long*)(param0 + 2);
            *(unsigned long long*)(param0 + 2) = (long long*)(ptr0 + 1L);
            *ptr0 = (unsigned char)param2;
            jump *(ptr1 + 3);
        }
    }
    else if(param2 >= 0 && param2 <= 0xFF) {
    loc_41F70B:
        char* ptr2 = *(unsigned long long*)(param0 + 2);
        long long* ptr3 = (unsigned long long)a0123456789ABCDE2[(long long)(param2 >> 4)] | ((unsigned long long)(((long long)(param2 >> 4) >>> 8L) & 0xffffffffffffffL) << 8);
        *ptr2 = 37;
        ptr0 = ptr2 + 3L;
        *(ptr0 - 2L) = (unsigned char)ptr3;
        *(ptr0 - 1L) = a0123456789ABCDE2[(unsigned long long)(param2 & 0xF)];
        *(unsigned long long*)(param0 + 2) = ptr0;
        jump *(ptr1 + 3);
    }
    else if(param2 >= 0 && param2 <= 0xFFFF) {
        short* ptr4 = *(unsigned long long*)(param0 + 2);
        long long v3 = (unsigned long long)a0123456789ABCDE2[(long long)(param2 >> 12)] | ((unsigned long long)(((long long)(param2 >> 12) >>> 8L) & 0xffffffffffffffL) << 8);
        *ptr4 = 29989;
        ptr0 = (char*)(ptr4 + 3);
        *(ptr0 - 4L) = (unsigned char)v3;
        *(ptr0 - 3L) = a0123456789ABCDE2[(unsigned long long)((param2 >> 8) & 0xF)];
        *(ptr0 - 2L) = a0123456789ABCDE2[(unsigned long long)((param2 >> 4) & 0xF)];
        *(ptr0 - 1L) = a0123456789ABCDE2[(unsigned long long)(param2 & 0xF)];
        *(unsigned long long*)(param0 + 2) = ptr0;
        jump *(ptr1 + 3);
    }
    sub_401C42(*param0, "third_party/duktape/duk_bi_global.c", 0x60001afL, "invalid input");
    return result;
}

int sub_41F7B1(long long param0, int param1) {
    int result;
    long long v0 = 0L;
    long long v1 = 0L;
    do {
        result = (unsigned int)v1 * 16;
        long long v2 = (unsigned long long)(int)*(char*)((unsigned long long)*(char*)(v0 + param0) + 4514600L);
        if((unsigned int)v2 < 0) {
            return result;
        }
        v1 = (unsigned long long)((unsigned int)v2 + result);
        ++v0;
    }
    while((unsigned int)v0 < param1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F872(long long param0, long long param1) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = sub_408998(param0, 0L);
    unsigned long long v6 = (unsigned long long)*(int*)(v5 + 24L);
    long long v7 = v5;
    sub_41CF97(param0, &v0, v6, v2);
    long long v8 = (unsigned long long)*(int*)(v7 + 24L);
    unsigned long long v9 = (unsigned long long)(v7 + 32L);
    unsigned long long v10 = (unsigned long long)(v7 + 32L);
    long long v11 = v8 + v7 + 32L;
    long long v12 = v8 + v7 + 32L;
    while((unsigned long long)(v7 + 32L) < (unsigned long long)v11) {
        sub_41C85D(param0);
        v3();
    }
    sub_41D054(param0, &v0, v11, v11);
    sub_406BF4(param0, 0xFFFFFFFFL);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F90E(long long* param0, long long param1, int param2, long long param3, long long param4, long long param5) {
    long long result;
    int v0;
    long long v1;
    long long v2;
    char v3;
    long long v4 = v1;
    long long v5 = (unsigned long long)param2;
    long long v6 = v2;
    long long* ptr0 = param0;
    if((unsigned long long)(param0[4] - param0[2]) <= 20L) {
        sub_41CFE2(param0[0], param0 + 2, 21L, param3);
    }
    if((unsigned int)v5 < 0) {
    loc_41FA47:
        sub_401C42(ptr0[0], "third_party/duktape/duk_bi_global.c", 0x70000faL, "invalid input");
    }
    else if((unsigned int)v5 <= 127 && (((unsigned int)*(char*)((long long)((unsigned int)v5 >> 3) + param1) >>> ((unsigned int)((unsigned int)v5 & 0x7) % 32)) & 0x1)) {
        result = ptr0[2];
        ptr0[2] = result + 1L;
        *(char*)result = (unsigned char)v5;
    }
    else if((unsigned int)((unsigned int)v5 - 0xdc00) <= 0x3ff) {
        goto loc_41FA47;
    }
    else {
        if((unsigned int)((unsigned int)v5 - 0xd800) <= 0x3ff) {
            long long v7 = sub_41C7A1(ptr0[0], (long long)(ptr0 + 6), ptr0[7], ptr0[8], (long long)&v0, param5);
            if(!(unsigned int)v7 || (unsigned int)(v0 - 0xdc00) > 0x3ff) {
                goto loc_41FA47;
            }
            else {
                v5 = ((unsigned long long)((unsigned int)((unsigned int)v5 - 0xd800) * 0x400) + (unsigned long long)v0 + 0x2400L) & 0xFFFFFFFFL;
                goto loc_41F9EE;
            }
        }
        if((unsigned int)v5 > 0x10ffff) {
            goto loc_41FA47;
        }
        else {
        loc_41F9EE:
            result = sub_41C531(v5 & 0xFFFFFFFFL, (long long)&v3);
            param3 = 0L;
            while((unsigned int)result > (unsigned int)param3) {
                param1 = (unsigned long long)*(char*)(param3 + (long long)&v3) | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
                long long v8 = ptr0[2];
                ++param3;
                long long v9 = param1;
                param1 = (unsigned long long)((unsigned int)param1 & 0xF);
                *(char*)v8 = 37;
                param1 = (unsigned long long)a0123456789ABCDE2[param1] | ((unsigned long long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
                param0 = (unsigned long long)a0123456789ABCDE2[(unsigned long long)((unsigned int)(v9 >>> 4L) & 0xF)] | ((unsigned long long)(((unsigned long long)((unsigned int)(v9 >>> 4L) & 0xF) >>> 8L) & 0xffffffffffffffL) << 8);
                *(char*)(v8 + 2L) = (unsigned char)param1;
                *(char*)(v8 + 1L) = (unsigned char)param0;
                ptr0[2] = v8 + 3L;
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41FA57(long long* param0, long long param1, int param2, long long param3, long long param4, unsigned long long param5) {
    long long v0;
    long long v1;
    int v2;
    long long v3;
    long long v4;
    unsigned long long v5;
    long long v6;
    long long v7;
    long long v8;
    int v9;
    long long result;
    long long v10;
    long long v11;
    long long v12 = v10;
    long long v13 = v11;
    unsigned long long* ptr0 = &v5;
    v5 = param5;
    if((unsigned long long)(param0[4] - param0[2]) <= 6L) {
        ptr0 = &v6;
        sub_41CFE2(param0[0], param0 + 2, 7L, param3);
    }
    if(param2 == 37) {
        long long v14 = param0[6];
        if((unsigned long long)(param0[8] - v14) > 1L) {
            ptr0 = &v6;
            int v15 = /*BAD_CALL!*/ sub_41F7B1(v14, 2L);
            if((unsigned int)v15 >= 0) {
                if((unsigned int)v15 <= 127) {
                    long long v16 = param0[2];
                    if((((unsigned int)*(char*)((long long)((unsigned int)v15 >> 3) + v7) >>> ((unsigned int)((unsigned int)v15 & 0x7) % 32)) & 0x1)) {
                        *(char*)v16 = 37;
                        v16 += 3L;
                        *(char*)(v16 - 2L) = *(char*)&param0[0];
                        *(char*)(v16 - 1L) = *((char*)&param0[0] + 1);
                        param0[2] = v16;
                    }
                    else {
                        param0[2] = (long long*)(v16 + 1L);
                        *(char*)v16 = (unsigned char)v15;
                    }
                    param0[6] += 2L;
                    jump *(long long*)(ptr0 + 5);
                }
                else if((unsigned int)v15 > 191) {
                    if((unsigned int)v15 <= 223) {
                        v4 = (unsigned long long)((unsigned int)v15 & 0x1f);
                        v3 = 2L;
                        goto loc_41FB6A;
                    }
                    else if((unsigned int)v15 <= 239) {
                        v4 = (unsigned long long)((unsigned int)v15 & 0xF);
                        v3 = 3L;
                        goto loc_41FB6A;
                    }
                    if((unsigned int)v15 <= 247) {
                        v4 = (unsigned long long)((unsigned int)v15 & 0x7);
                        v3 = 4L;
                    loc_41FB6A:
                        if((unsigned long long)((unsigned int)v3 * 3 - 1) <= param5) {
                            long long v17 = (long long)((char*)param0 + 3L);
                        loc_41FB86:
                            do {
                                ptr0 = &v6;
                                v2 = /*BAD_CALL!*/ sub_41F7B1(v17, 2L);
                                if((unsigned int)v2 >= 0 && !(((unsigned int)v2 & 0xc0) - 128)) {
                                    v4 = ((unsigned long long)((unsigned int)v4 * 64) + (unsigned long long)((unsigned int)v2 & 0x3f)) & 0xFFFFFFFFL;
                                    if(v8 + 3L != param5) {
                                        v17 = v8 + 3L;
                                        goto loc_41FB86;
                                    }
                                    else {
                                        param0[6] = v8 + 2L;
                                        if((unsigned int)v4 < v9 || (unsigned int)v4 > 0x10ffff || (unsigned int)((unsigned int)v4 - 0xd800) <= 0x7ff) {
                                            break;
                                        }
                                        else {
                                            v1 = param0[2];
                                            v0 = v4 & 0xFFFFFFFFL;
                                            if((unsigned int)v4 > 0xFFFF) {
                                                ptr0 = &v6;
                                                long long v18 = sub_41C531((unsigned long long)((((unsigned int)v4 - 0x10000) >> 10) + 0xd800), v1);
                                                v1 = (long long)(unsigned int)v18 + param0[2];
                                                v0 = ((unsigned long long)(((unsigned int)v4 - 0x10000) & 0x3ff) + 0xdc00L) & 0xFFFFFFFFL;
                                                param0[2] = v1;
                                            }
                                            --ptr0;
                                            *ptr0 = &loc_41FC54;
                                            long long v19 = /*BAD_CALL!*/ sub_41C531(v0, v1);
                                            param0[2] += (long long)(unsigned int)v19;
                                            jump *(long long*)(ptr0 + 5);
                                        }
                                    }
                                }
                            }
                            while((unsigned int)v2 >= 0 && !(((unsigned int)v2 & 0xc0) - 128));
                        }
                    }
                }
            }
        }
        sub_401C42(param0[0], "third_party/duktape/duk_bi_global.c", 0x7000186L, "invalid input");
        return result;
    }
    v1 = param0[2];
    v0 = (unsigned long long)param2;
    --ptr0;
    *ptr0 = &loc_41FC54;
    long long v19 = /*BAD_CALL!*/ sub_41C531(v0, v1);
    param0[2] += (long long)(unsigned int)v19;
    jump *(long long*)(ptr0 + 5);
}

void sub_41FF48() {
    // Decompilation error
}

long long sub_42005E(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_41DC9A(param0);
    sub_40849B(param0, 0L, v0, v1, v2);
    return 1L;
}

void sub_42011D() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42014B(long long param0, long long param1, unsigned int param2, long long param3, long long param4, int param5) {
    long long v0;
    long long v1;
    long long v2;
    int v3;
    long long v4;
    long long v5;
    long long v6 = v5;
    unsigned int v7 = 0;
    long long v8 = param1;
    long long v9 = ((unsigned long long)((param2 + 63) >>> 6) * 8L + 4L) & 0xFFFFFFFFL;
    unsigned int v10 = param2;
    long long v11 = ((unsigned long long)((param2 + 63) >>> 6) * 8L + 4L) & 0xFFFFFFFFL;
    sub_40762B(param0, ((unsigned long long)((param2 + 63) >>> 6) * 8L + 4L) & 0xFFFFFFFFL, 1L);
    long long v12 = sub_405B46(param0, 0xFFFFFFFFL);
    **(unsigned long long*)(v12 + 32L) = v10;
    unsigned long long i;
    for(i = (unsigned long long)(v11 & 0xFFFFFFFFL); v7 < v10; i = (unsigned long long)(v11 & 0xFFFFFFFFL)) {
        unsigned long long v13 = i;
        sub_4200FB(param0, v12, (unsigned long long)((v11 + 0x114L) & 0xFFFFFFFFL), (long long)v10);
        long long v14 = *(long long*)(v12 + 32L);
        *(int*)((((unsigned long long)((v7 >>> 6) * 2) + 1L) & 0xFFFFFFFFL) * 4L + v14) = *(int*)((unsigned long long)v7 * 8L + v8 + 4L);
        *(int*)((unsigned long long)((v7 >>> 6) * 2 + 2) * 4L + v14) = (unsigned int)v11;
        sub_43ABE2((long long)&v2, 0L, 40L, v14);
        long long v15 = 0x114L;
        v2 = v4 + v13;
        ++v7;
        while(((unsigned char)v7 & 0x3f) && v7 < v10) {
            int v16 = *(int*)((unsigned long long)v7 * 8L + v8 + 4L);
            (unsigned long long)(v13 & 0xFFFFFFFFL) = *(int*)((unsigned long long)v7 * 8L + v8 + 4L);
            long long v17 = (unsigned long long)(v16 - param5);
            if(v16 == param5) {
                v1 = 1L;
                v0 = 0L;
            }
            else if((unsigned int)((unsigned int)v17 - 1) <= 3) {
                v0 = (long long)((unsigned int)v17 + 7);
                v1 = 4L;
            }
            else if((unsigned int)((unsigned int)v17 + 128) <= 0xff) {
                v0 = (long long)((unsigned int)v17 + 1664);
                v1 = 11L;
            }
            else {
                sub_4261E0(&v2, (long long)(((unsigned int)v13 >>> 16) + 0x70000), 19L);
                v0 = (long long)(v13 & 0xffffL);
                v1 = 16L;
            }
            sub_4261E0(&v2, v0, v1);
            param5 = (unsigned int)v13;
            ++v7;
        }
        sub_426227(&v2);
        v11 = (unsigned long long)((unsigned int)v11 + v3);
    }
    sub_4200FB(param0, v12, i, (long long)v10);
    return sub_40884A(param0, 0xFFFFFFFFL, 0L, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4202D0(long long param0, long long param1, unsigned int param2) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v3;
    long long v8 = 0L;
    long long v9 = v5;
    sub_403883(param0, (long long)((unsigned int)param1 * 0x10000 + 102));
    long long v10 = sub_405869(v1, v4, v2, v6);
    if(v10) {
        unsigned long long v11 = *(unsigned long long*)(v10 + 24L);
        if(v11 > 4L && *(unsigned int*)(v10 + 32L) > param2) {
            unsigned long long v12 = (unsigned long long)*(int*)((((unsigned long long)(param2 >>> 6) * 2L + 2L) & 0xFFFFFFFFL) * 4L + v10 + 32L);
            if(v11 >= v12) {
                long long v13 = 6L;
                int v14 = param2 & 0x3f;
                v8 = (unsigned long long)*(int*)((((((unsigned long long)(param2 >>> 6) * 2L + 2L) & 0xFFFFFFFFL) - 1L) & 0xFFFFFFFFL) * 4L + v10 + 32L);
                int* ptr0 = &v0;
                long long v15 = v10 + v12 + 32L;
                while(v13 != 0L) {
                    *ptr0 = 0;
                    ++ptr0;
                    --v13;
                }
                long long v16 = v15;
                while(v14) {
                    long long v17 = sub_41CDF1(&v16);
                    if((unsigned int)v17) {
                        long long v18 = sub_41CDF1(&v16);
                        if((unsigned int)v18) {
                            long long v19 = sub_41CDF1(&v16);
                            if((unsigned int)v19) {
                                long long v20 = sub_41CDA5((long long)&v16, 16L);
                                long long v21 = sub_41CDA5((long long)&v16, 16L);
                                v8 = (unsigned long long)((unsigned int)v20 * 0x10000 + (unsigned int)v21);
                            }
                            else {
                                long long v22 = sub_41CDA5((long long)&v16, 8L);
                                v8 = (v22 + v8 - 128L) & 0xFFFFFFFFL;
                            }
                        }
                        else {
                            long long v23 = sub_41CDA5((long long)&v16, 2L);
                            v8 = (v23 + v8 + 1L) & 0xFFFFFFFFL;
                        }
                    }
                    --v14;
                }
            }
        }
    }
    sub_407D7E(param0);
    return v8 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4203F7(long long param0, long long param1, long long param2) {
    __SyntheticTypeUnknown v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknown v2;
    long long v3;
    long long result1;
    unsigned long long v4;
    __SyntheticTypeUnknown v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    int v10;
    double v11;
    long long v12;
    __SyntheticTypeUnknown v13;
    long long v14;
    long long v15;
    long long v16;
    long long v17;
    int v18;
    double v19;
    double v20;
    double v21;
    long long v22;
    double v23;
    long long v24;
    long long v25;
    long long v26;
    long long v27;
    long long v28;
    long long v29;
    double v30;
    __SyntheticTypeUnknown v31;
    __SyntheticTypeUnknown v32;
    double v33 = v11;
    double v34 = v30;
    long long v35 = v15;
    long long result = sub_42FB3D(param0, param1, param2);
    if((unsigned int)result) {
        v16 = movlpd(v16, v34);
        int v36 = (unsigned int)result;
        v17 = movlpd(v17, 0x3ff0000000000000L);
        result = sub_41D67C();
        if((v36 - 1) || !(unsigned int)result) {
            v7 = movlpd(v7, v35);
            v6 = movlpd(v6, v34);
            void* ptr0 = (void*)v31;
            long long v37 = ((unsigned long long)v31 >>> 52) & 0xFFFFFFFFL;
            if((unsigned int)((unsigned int)((unsigned long long)v31 >>> 52) - 1) <= 2045) {
                v4 = 0L;
                if((unsigned int)(((unsigned int)(v8 >>> 52) & 0x7ff) - 958) <= 127) {
                    goto loc_43059F;
                }
            }
            result = v8 * 2L;
            if((unsigned long long)(result - 1L) <= 0xffdffffffffffffeL) {
                if((unsigned long long)(long long*)((char*)((long long)ptr0 * 2L) - 1L) <= 0xffdffffffffffffeL) {
                    v4 = 0L;
                    if((long long)ptr0 < 0L) {
                        result = sub_430355(v8);
                        if((unsigned int)result) {
                            v4 = (unsigned int)result - 1 ? (unsigned long long)v10: 0x40000L;
                            ptr0 = (void*)(v12 & 0x7fffffffffffffffL);
                            v37 = (unsigned long long)(v18 & 0x7ff);
                            goto loc_430515;
                        }
                        else {
                            return (long long)(long long*)((long long)ptr0 * 2L);
                        }
                    }
                    else {
                    loc_430515:
                        if((unsigned int)(((unsigned int)(v8 >>> 52) & 0x7ff) - 958) > 127) {
                            result1 = 0x3ffL;
                            if(ptr0 == 0x3ff0000000000000L) {
                                long long v56 = movlpd((unsigned long long)v31, 0x3ff0000000000000L);
                                return result;
                            }
                            else if((unsigned int)((unsigned int)(v8 >>> 52) & 0x7ff) <= 957) {
                                long long v55 = movlpd((unsigned long long)v31, 0x3ff0000000000000L);
                                return result;
                            }
                            v3 = 0L;
                            if(((unsigned int)(v8 >>> 52) <= 0x7ff ? 1: 0) != ((unsigned long long)ptr0 <= 0x3ff0000000000000L ? 1: 0)) {
                                goto loc_430315;
                            }
                            else {
                                goto loc_430322;
                            }
                        }
                        else {
                            if(!(unsigned int)v37) {
                                v31 = (__SyntheticTypeUnknownU)((double)v31 * 4.503599627370496E15) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                                ptr0 = (void*)(((unsigned long long)v31 & 0x7fffffffffffffffL) - 0x340000000000000L);
                            }
                        loc_43059F:
                            v29 = movlpd(v29, 0x3ff0000000000000L);
                            v27 = movlpd(v27, 4604418534313441280L);
                            v28 = movlpd(v28, 0x3ff0002b8b263fc3L);
                            v31 = (__SyntheticTypeUnknownU)(double)(unsigned int)(long long*)((long long)(long long*)((long long)ptr0 - 0x3fe6955500000000L) >> 52) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                            long long v38 = (unsigned long long)((unsigned int)(long long*)((long long)(long long*)((long long)ptr0 - 0x3fe6955500000000L) >>> 45) & 0x7f);
                            ptr0 = (void*)((long long)ptr0 - (long long)(long long*)((long long)(long long*)((long long)ptr0 - 0x3fe6955500000000L) & 0xfff0000000000000L));
                            v26 = movlpd(v26, ptr0);
                            v14 = movlpd(v14, *(long long*)(v38 * 32L + 0x444c88L));
                            void* ptr1 = (void*)(v8 & 0xfffffffff8000000L);
                            v24 = movlpd(v24, 0xbfe0000000000000L);
                            v25 = movlpd(v25, 0xbfe555555529a47aL);
                            long long* ptr2 = (long long*)((long long)(long long*)((long long)ptr0 + 0x80000000L) & 0xffffffff00000000L);
                            v22 = movlpd(v22, (long long*)((long long)(long long*)((long long)ptr0 + 0x80000000L) & 0xffffffff00000000L));
                            __SyntheticTypeUnknown v39 = (__SyntheticTypeUnknownU)((double)v39 * v23 - (double)v32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v39 >>> 0x40X) << 64);
                            long long* ptr3 = (long long*)((long long)(long long*)((long long)ptr3 - (long long)(long long*)((long long)(long long*)((long long)ptr0 + 0x80000000L) & 0xffffffff00000000L)) * v23);
                            double v40 = v40 * (double)v31 + *(double*)(v38 * 32L + 0x444c98L);
                            __SyntheticTypeUnknown v41 = (__SyntheticTypeUnknownU)(long long*)((double)v39 + (long long)ptr3) | ((__SyntheticTypeUnknownU)(unsigned long long)(v39 >>> 0x40X) << 64);
                            __SyntheticTypeUnknown v42 = (__SyntheticTypeUnknownU)(long long*)((long long)(long long*)((double)v39 + (long long)ptr3) * v21) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64);
                            v21 *= (double)v39;
                            double v43 = v43 * (double)v41 + 0.7999999995323976;
                            __SyntheticTypeUnknown v44 = (__SyntheticTypeUnknownU)((double)v41 * (double)v42) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64);
                            v39 = (__SyntheticTypeUnknownU)((double)v39 * v21) | ((__SyntheticTypeUnknownU)(unsigned long long)(v39 >>> 0x40X) << 64);
                            long long v69 = movlpd(v43, 0x3fe0000000000006L);
                            v31 = (__SyntheticTypeUnknownU)(long long*)((long long)(long long*)((double)v31 * 5.497923018708371E-14 + *(double*)(v38 * 32L + 0x444ca0L) + ((double)v41 + (v40 - ((double)v41 + v40))) + (long long)(long long*)((long long)ptr3 * ((double)v42 + v21))) + ((double)v39 + ((double)v41 + v40 - (double)((__SyntheticTypeUnknownU)((double)v41 + v40 + (double)v39) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64))))) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                            __SyntheticTypeUnknown v45 = (__SyntheticTypeUnknownU)(((((double)v45 * (double)v41 + -1.142909628459501) * (double)v44 + v43) * (double)v44 + (v20 * (double)v41 + -0.6666666666666679)) * ((double)v44 * (double)v41) + (double)v31) | ((__SyntheticTypeUnknownU)(unsigned long long)(v45 >>> 0x40X) << 64);
                            long long v66 = movlpd((unsigned long long)v31, ptr1);
                            v2 = (__SyntheticTypeUnknownU)((double)((__SyntheticTypeUnknownU)((double)v41 + v40 + (double)v39) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64)) + (double)v45) | ((__SyntheticTypeUnknownU)(unsigned long long)(((__SyntheticTypeUnknownU)((double)v41 + v40 + (double)v39) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64)) >>> 0x40X) << 64);
                            v1 = v45;
                            v0 = (__SyntheticTypeUnknownU)((double)((__SyntheticTypeUnknownU)((double)v41 + v40 + (double)v39) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64)) - (double)v2) | ((__SyntheticTypeUnknownU)(unsigned long long)(((__SyntheticTypeUnknownU)((double)v41 + v40 + (double)v39) | ((__SyntheticTypeUnknownU)(unsigned long long)(v41 >>> 0x40X) << 64)) >>> 0x40X) << 64);
                            v45 = (__SyntheticTypeUnknownU)((unsigned long long)v2 & 0xfffffffff8000000L) | ((__SyntheticTypeUnknownU)(unsigned long long)(v45 >>> 0x40X) << 64);
                            v2 = (__SyntheticTypeUnknownU)((double)v2 - (double)v45) | ((__SyntheticTypeUnknownU)(unsigned long long)(v2 >>> 0x40X) << 64);
                            v31 = (__SyntheticTypeUnknownU)((double)v31 * (double)v45) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                            result = (long long)v31;
                            v37 = (unsigned long long)((unsigned int)((unsigned long long)v31 >>> 52) & 0x7ff);
                            v1 = (__SyntheticTypeUnknownU)(((double)v1 + (double)v0 + (double)v2) * v8) | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                            v8 = (long long)((long long)(long long*)(v8 - (long long)(void*)(v8 & 0xfffffffff8000000L)) * (double)v45);
                            v1 = (__SyntheticTypeUnknownU)((double)v1 + v8) | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                        }
                        if((unsigned int)((unsigned int)v37 - 969) > 62) {
                            if((unsigned int)v37 - 969 < 0) {
                                return result;
                            }
                            else if((unsigned int)v37 > 1032) {
                                v3 = (long long)(v4 & 0xFFFFFFFFL);
                                if(result < 0L) {
                                loc_430322:
                                    long long v68 = movlpd((unsigned long long)v31, 0x1000000000000000L);
                                }
                                else {
                                loc_430315:
                                    long long v67 = movlpd((unsigned long long)v31, 0x7000000000000000L);
                                }
                                __SyntheticTypeUnknown v46 = v31;
                                if((unsigned int)v3) {
                                    __SyntheticTypeUnknown v47 = (__SyntheticTypeUnknownU)((unsigned int)*(__SyntheticTypeUnknownP128)0x43D2F0 ^ (unsigned int)v46) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x20X) ^ (unsigned int)(v46 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v46 >>> 0x40X) << 64);
                                    v46 = (__SyntheticTypeUnknownU)(unsigned long long)v47 | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x40X) ^ (unsigned int)(v47 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x60X) ^ (unsigned int)(v47 >>> 0x60X)) << 96);
                                }
                                long long v52 = movlpd((unsigned long long)v46, (double)v46);
                                return result1;
                            }
                            v37 = 0L;
                        }
                        long long v64 = movlpd((unsigned long long)v0, 0x40671547652b82feL);
                        long long v65 = movlpd(v8, 0x4338000000000000L);
                        void* ptr4 = (void*)((long long)(long long*)((long long)ptr4 * (double)v31) + v19);
                        ptr0 = ptr4;
                        ptr4 = (void*)((long long)ptr4 - v19);
                        long long v63 = movlpd(v19, 0xbf762e42fefa0000L);
                        long long* ptr5 = (long long*)((long long)ptr5 * (long long)ptr4);
                        result = (long long)((long long)(long long*)((long long)(long long*)((long long)ptr0 + v4) * 0x200000000000L) + *(unsigned long long*)((unsigned long long)((unsigned int)ptr0 & 0x7f) * 16L + (long long)&gvar_442A98));
                        v31 = (__SyntheticTypeUnknownU)(long long*)((double)v31 + (long long)ptr5) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                        long long v61 = movlpd(ptr5, 0x3fc555555555543cL);
                        long long v62 = movlpd((unsigned long long)v31, *(unsigned long long*)((unsigned long long)((unsigned int)ptr0 & 0x7f) * 16L + (long long)&gvar_442A90));
                        v1 = (__SyntheticTypeUnknownU)(long long*)((double)v1 + (long long)(long long*)((long long)(long long*)((long long)ptr4 * -1.2864023111638346E-14) + (double)v31)) | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                        v31 = (__SyntheticTypeUnknownU)((double)v31 + (double)v1) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                        v0 = (__SyntheticTypeUnknownU)((double)v1 * (double)v1 * ((double)v1 * (double)v1)) | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64);
                        v8 = (long long)((double)((long long)(((double)(v8 * (double)v1) + 0.49999999999996786) * ((double)v1 * (double)v1)) + (double)v31) + ((double)v1 * 0.008333335853059549 + 0.0416666808410674) * ((double)v1 * (double)v1 * ((double)v1 * (double)v1)));
                        if(!(unsigned int)v37 && (long long*)((long long)(long long*)((long long)ptr0 >>> 31L) & 0x1L)) {
                            long long v59 = movlpd((unsigned long long)v2, 0x10000000000000L);
                            long long v48 = result;
                            result += 0x3fe0000000000000L;
                            v0 = (__SyntheticTypeUnknownU)result | ((__SyntheticTypeUnknownU)(unsigned long long)(((__SyntheticTypeUnknownU)((double)v1 * (double)v1 * ((double)v1 * (double)v1)) | ((__SyntheticTypeUnknownU)(unsigned long long)(v1 >>> 0x40X) << 64)) >>> 0x40X) << 64);
                            v8 *= (double)v0;
                            v31 = (__SyntheticTypeUnknownU)(double)(result + v8) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                            v1 = (__SyntheticTypeUnknownU)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v31) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v31 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x40X) & (unsigned int)(v31 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x60X) & (unsigned int)(v31 >>> 0x60X)) << 96);
                            v32 = comisd(v32, (unsigned long long)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v31) | ((unsigned long long)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v31 >>> 0x20X)) << 32));
                            if((unsigned long long)v48 < 0xc020000000000000L && !(result ? 0: 1)) {
                                long long v60 = movlpd((unsigned long long)v1, 0xbff0000000000000L);
                                long long v57 = cmpltsd((unsigned long long)v31, 0L);
                                v45 = andnps(v13, v32);
                                long long v58 = movlpd(v8 + ((double)v0 - (double)v31), (unsigned long long)v2);
                            }
                        }
                    }
                    return result;
                }
                v31 = (__SyntheticTypeUnknownU)((double)v31 * (double)v31) | ((__SyntheticTypeUnknownU)(unsigned long long)(v31 >>> 0x40X) << 64);
                if((long long)ptr0 < 0L) {
                    long long v49 = sub_430355(v8);
                    if(!((unsigned int)v49 - 1)) {
                        __SyntheticTypeUnknown v50 = (__SyntheticTypeUnknownU)((unsigned int)*(__SyntheticTypeUnknownP128)0x43D2F0 ^ (unsigned int)v5) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x20X) ^ (unsigned int)(v5 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v5 >>> 0x40X) << 64);
                        v31 = (__SyntheticTypeUnknownU)(unsigned long long)v50 | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x40X) ^ (unsigned int)(v50 >>> 0x40X)) << 64) | ((__SyntheticTypeUnknownU)((unsigned int)(*(__SyntheticTypeUnknownP128)0x43D2F0 >>> 0x60X) ^ (unsigned int)(v50 >>> 0x60X)) << 96);
                    }
                }
                if(v8 < 0L) {
                    long long v53 = movlpd(v8, 0x3ff0000000000000L);
                    long long v54 = movlpd((unsigned long long)v31, (double)(v8 / (double)v31));
                }
                return result;
            }
            else if(ptr0 == 0x3ff0000000000000L || !result) {
                long long v56 = movlpd((unsigned long long)v31, 0x3ff0000000000000L);
                return result;
            }
            ptr0 = (void*)((long long)ptr0 * 2L);
            if((unsigned long long)ptr0 <= 0xffe0000000000000L && result == 0xffe0000000000000L) {
                long long v51 = movlpd((unsigned long long)v31, 0x3ff0000000000000L);
                result = ptr0 == 0x7fe0000000000000L ? 0x7fe0000000000000L: 0x7fdfffffffffffffL;
            }
            return result;
        }
    }
    v9 = movlpd(v9, 0x7ff8000000000000L);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42048D(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result = (long long)(unsigned int)param1 * 16L + *(long long*)(param0 + 104L);
    long long v0 = (long long)*(int*)result;
    if(*(unsigned int*)result <= 3) {
        if((unsigned int)v0 <= 1) {
            result = sub_408290(param0, param1, v0, param3, param4, param5);
        }
        else {
            v0 = *(long long*)(param0 + 160L);
            if(v0) {
                *(int*)result = 9;
                *(long long*)(result + 8L) = v0;
                *(int*)(v0 + 4L) = *(int*)(v0 + 4L) + 1;
            }
            else {
                *(int*)result = 2;
            }
        }
    }
    else if((unsigned int)v0 != 9) {
        result = sub_408290(param0, param1, v0, param3, param4, param5);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4204D4(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = param2;
    sub_4037B9(param0, (unsigned long long)((unsigned int)param1 * 0x10000 + 50));
    sub_405823();
    if(v0) {
        long long v5 = sub_405B41(param0, ((param1 & 0xFFFFFFFFL) + 1L) & 0xFFFFFFFFL);
        sub_40DCFB(param0, v5, v0, v2);
    }
    return sub_407D7E(param0);
}

long long sub_420529(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result = *(long long*)(param0 + 64L);
    long long v0 = (unsigned long long)*(char*)(param0 + 73L);
    if(*(long long*)(result + 184L) == param0) {
        if((unsigned char)v0 != 2) {
            return sub_401B75(param0, "third_party/duktape/duk_js_call.c", 100665218L, "invalid thread state (%ld)", v0, param5);
        }
    }
    else if((unsigned char)v0 == 1) {
        *(long long*)(result + 184L) = param0;
        *(char*)(param0 + 73L) = 2;
    }
    else {
        result = sub_401B75(param0, "third_party/duktape/duk_js_call.c", 100665218L, "invalid thread state (%ld)", v0, param5);
    }
    return result;
}

void sub_42056C() {
    // Decompilation error
}

void sub_4205E2() {
    // Decompilation error
}

void sub_421382() {
    // Decompilation error
}

void sub_4213B2() {
    // Decompilation error
}

void sub_42165E() {
    // Decompilation error
}

void sub_4217B1() {
    // Decompilation error
}

long long sub_4219BF(long long param0, int* param1, int* param2, long long param3) {
    __SyntheticTypeUnknown v0;
    long long v1;
    long long v2;
    long long v3;
    double v4;
    long long v5;
    double v6;
    double v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12;
    long long v13;
    long long v14;
    __SyntheticTypeUnknown v15;
    long long v16 = v11;
    long long v17 = v12;
    long long v18 = v13;
    long long v19 = v14;
    long long* ptr0 = &v1;
    v10 = movlpd(v10, 0x3ff0000000000000L);
    if(!*param2) {
        v3 = movlpd(v3, *(long long*)(param2 + 2));
        v0 = (__SyntheticTypeUnknownU)(!((unsigned int)param3 & 0x1) ? (double)v15 + v4: (double)v15 - v4) | ((__SyntheticTypeUnknownU)(unsigned long long)(v15 >>> 0x40X) << 64);
        *(double*)(param2 + 2) = !((unsigned int)param3 & 0x1) ? (double)v15 + v4: (double)v15 - v4;
    }
    else {
        long long v20 = *(long long*)(param0 + 104L);
        sub_405C43(param0);
        v1 = v5;
        double v21 = !((unsigned int)param3 & 0x1) ? v6 + 1.0: v7 - 1.0;
        sub_406A1B(param0);
        ptr0 = &v2;
        sub_405057(param0, (long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)param2 - v20) >> 4) & 0xFFFFFFFFL), (long long)param2, param3);
        v8 = movlpd(v8, v1);
        v9 = movlpd(v9, v21);
        param1 = (int*)((long long)(long long*)((long long)param1 - v20) + *(long long*)(param0 + 104L));
    }
    if(!((unsigned char)param3 & 0x2)) {
        v15 = v0;
    }
    long long v22 = (unsigned long long)*param1;
    long long v23 = *(long long*)(param1 + 2);
    *(long long*)(param1 + 2) = (unsigned long long)v15;
    *param1 = 0;
    if(((unsigned char)v22 & 0x8)) {
        *(int*)(v23 + 4L) = *(int*)(v23 + 4L) - 1;
        if(!*(int*)(v23 + 4L)) {
            return sub_40CFCD(param0, v23, (long long)param2, param3);
        }
    }
    jump *(ptr0 + 9);
}

long long sub_421ABC(long long param0, long long param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = *(long long*)(param1 + 64L);
    long long v3 = *(long long*)(param1 + 16L);
    long long v4 = *(long long*)(*(long long*)(param1 + 48L) + 24L);
    *(long long*)(param0 + 104L) = *(long long*)(param0 + 80L) + v2;
    sub_404C48(param0, (unsigned int)*(short*)(v3 + 96L), (long long)((unsigned int)v4 + 2 - (unsigned int)(v2 >>> 4L)), v3);
    long long result = *(long long*)(param1 + 80L) + *(long long*)(param0 + 80L);
    *(long long*)(param0 + 88L) = *(long long*)(param1 + 80L) + *(long long*)(param0 + 80L);
    return result;
}

long long sub_421B08(long long param0) {
    long long v0;
    long long v1;
    long long v2 = *(long long*)(param0 + 80L);
    long long v3 = v0;
    long long v4 = *(long long*)(param0 + 120L);
    long long v5 = v1;
    long long v6 = *(long long*)(v4 + 64L);
    long long v7 = *(long long*)(v4 + 16L);
    long long v8 = *(long long*)(v4 + 72L);
    *(long long*)(param0 + 104L) = v6 + v2;
    sub_404C48(param0, (unsigned int)*(short*)(v7 + 96L), (v8 + 16L - v6) >>> 4, v7);
    long long result = *(long long*)(param0 + 80L) + *(long long*)(v4 + 80L);
    *(long long*)(param0 + 88L) = *(long long*)(param0 + 80L) + *(long long*)(v4 + 80L);
    return result;
}

void sub_421B56() {
    // Decompilation error
}

void sub_421BAE() {
    // Decompilation error
}

long long sub_421CC1(long long param0, long long param1, long long* param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v2;
    long long v4 = v1;
    char* ptr0 = (char*)(param1 * 16L + *(long long*)(param0 + 80L));
    if((*ptr0 & 0x8)) {
        v0 = *(long long*)(ptr0 + 8L);
        *(int*)(v0 + 4L) = *(int*)(v0 + 4L) - 1;
        if(!*(int*)(v0 + 4L)) {
            long long v5 = param0;
            sub_40CFD5(param0, v0, (long long)param2, param3);
            param0 = v5;
        }
    }
    long long result = *param2;
    long long v6 = *(param2 + 1);
    *(long long*)ptr0 = result;
    *(long long*)(ptr0 + 8L) = v6;
    if(((unsigned char)result & 0x8)) {
        *(int*)(v6 + 4L) = *(int*)(v6 + 4L) + 1;
    }
    if((*(ptr0 + 16L) & 0x8)) {
        v0 = *(long long*)(ptr0 + 24L);
        *(int*)(v0 + 4L) = *(int*)(v0 + 4L) - 1;
        if(!*(int*)(v0 + 4L)) {
            result = sub_40CFD5(param0, v0, (unsigned long long)((unsigned char)result & 0x8) | ((unsigned long long)(((result & 0xFFFFFFFFL) >>> 8L) & 0xffffffffffffffL) << 8), v6);
        }
    }
    *(int*)(ptr0 + 16L) = 0;
    *(double*)(ptr0 + 24L) = (double)(param3 & 0xFFFFFFFFL);
    return result;
}

void sub_421D43() {
    // Decompilation error
}

void sub_421D90() {
    // Decompilation error
}

void sub_421EFA() {
    // Decompilation error
}

void sub_421FA0() {
    // Decompilation error
}

void sub_422318() {
    // Decompilation error
}

unsigned long long sub_4261E0(long long* param0, int param1, int param2) {
    int v0 = *(int*)(param0 + 3);
    *(int*)((char*)param0 + 28L) = *(int*)((char*)param0 + 28L) + param2;
    unsigned long long result = (unsigned long long)(v0 << ((unsigned long long)param2 & 0x1fL));
    *(int*)(param0 + 3) = (v0 << ((unsigned long long)param2 & 0x1fL)) | param1;
    for(int i = *(int*)((char*)param0 + 28L); i > 7; i = *(int*)((char*)param0 + 28L)) {
        result = *(unsigned long long*)(param0 + 1);
        if(*(unsigned long long*)(param0 + 2) > result) {
            int v1 = *(int*)(param0 + 3);
            *(param0 + 1) = result + 1L;
            *(char*)(*param0 + result) = (unsigned char)(v1 >>> ((unsigned long long)(i - 8) & 0x1fL));
        }
        else {
            *(int*)(param0 + 4) = 1;
        }
        *(int*)((char*)param0 + 28L) = *(int*)((char*)param0 + 28L) - 8;
    }
    return result;
}

void sub_426227(long long* param0) {
    long long v0 = (long long)(8 - *(int*)((char*)&param0[3] + 4));
    if(*(int*)((char*)&param0[3] + 4) < 8) {
        sub_4261E0(param0, 0L, v0);
    }
}

int* sub_426263(long long param0) {
    int* result = NULL;
    if(*(int*)(param0 - 16L) == 9) {
        result = *(unsigned long long*)(param0 - 8L);
        if((*result & 0x408040) != &loc_408000 || *(unsigned int*)(result + 14) > *(unsigned int*)(result + 12)) {
            result = NULL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42628A(long long param0) {
    long long result = sub_426238(param0);
    if((unsigned int)result < 0) {
        sub_401CE2("invalid length", 79L);
        result = 0L;
    }
    return result;
}

long long sub_4262BB(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = sub_40370E(param0, 1L, param1 & 0xFFFFFFFFL);
    long long v8 = sub_40370E(param0, 1L, (unsigned long long)param2);
    if((unsigned int)v8) {
        sub_403953(param0, 1L, (long long)(unsigned int)param1);
    }
    else {
        sub_403B1D(param0, 1L, (long long)(unsigned int)param1);
        sub_407DBA(param0);
    }
    if((unsigned int)v7) {
        return sub_403953(param0, 1L, (long long)param2);
    }
    *(&v0 - 1) = &loc_426331;
    /*BAD_CALL!*/ sub_403B1D(param0, 1L, (long long)param2);
    /*BAD_CALL!*/ sub_407DBA(param0);
}

void sub_426341() {
    // Decompilation error
}

void sub_426454() {
    // Decompilation error
}

void sub_42653A() {
    // Decompilation error
}

long long sub_4265E7(long long param0) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_417FDB(*(int**)(param0 + 104L));
    sub_406955(param0, v2 & 0xFFFFFFFFL);
    return 1L;
}

long long sub_42660E(long long param0, long long param1) {
    long long v0;
    long long v1 = v0;
    sub_40869C(param0);
    sub_4037B9(param0, 0xffff0026L);
    long long v2 = sub_4065F2();
    if(!(unsigned int)v2) {
        sub_404B20(param0, 0L);
        sub_4085AE(param0, *(long long*)(param0 + 104L) - 16L, 0L);
    }
    else {
        sub_40500F(param0, 0xfffffffeL);
        sub_41DA64(param0);
    }
    return 1L;
}

void sub_426670() {
    // Decompilation error
}

void sub_426820() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42696F(long long param0) {
    long long result;
    int* ptr0 = sub_426263(*(long long*)(param0 + 104L));
    if(ptr0) {
        __SyntheticTypeUnknownP128 v0 = (__SyntheticTypeUnknownP128)ptr0[14];
        result = 0L;
        if((unsigned int)v0) {
            long long v1 = (unsigned long long)ptr0[10];
            ptr0[14] = (unsigned int)v0 - 1;
            int* ptr1 = (int*)(v1 * 25L + (unsigned long long)((unsigned int)v0 - 1) * 16L + (long long)(long long*)((long long)(__SyntheticTypeUnknownP128)((0 - (unsigned int)v1) & 0x7) + *(long long*)&ptr0[6]));
            if(*ptr1 != 7) {
                **(unsigned long long*)(param0 + 112L) = *(__SyntheticTypeUnknownP128)ptr1;
                *ptr1 = 7;
            }
            *(long long*)(param0 + 112L) = *(long long*)(param0 + 112L) + 16L;
            return 1L;
        }
    }
    else {
        long long v2 = sub_426238(param0);
        if(!(unsigned int)v2) {
            sub_406A68(param0, 0L);
            sub_403A07(param0, 87L);
            result = 0L;
        }
        else {
            sub_40370E(param0, 0L, (long long)((unsigned int)v2 - 1));
            sub_403B1D(param0, 0L, (long long)((unsigned int)v2 - 1));
            sub_406AAF(param0, (unsigned long long)((unsigned int)v2 - 1));
            sub_403A07(param0, 87L);
            result = 1L;
        }
    }
    return result;
}

long long sub_426A44(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = param3;
    int* ptr0 = sub_426263(*(long long*)(param0 + 104L));
    if(ptr0) {
        long long v6 = (unsigned long long)ptr0[14];
        long long v7 = (*(long long*)(param0 + 112L) - v2) >> 4;
        int v8 = (unsigned int)v6 + (unsigned int)v7;
        if(__carry__((unsigned int)v6, (unsigned int)v7)) {
            sub_401CE2("invalid length", 538L);
            goto loc_426AFE;
        }
        else if((unsigned int)ptr0[12] < (unsigned int)v8) {
            goto loc_426AFE;
        }
        else {
            int v9 = 0;
            long long v10 = 0L;
            long long v11 = (unsigned long long)ptr0[10] * 25L + v6 * 16L + ((unsigned long long)((0 - ptr0[10]) & 0x7) + *(long long*)&ptr0[6]);
            while((unsigned int)v7 > v9) {
                ++v9;
                *(__SyntheticTypeUnknownP128)(v10 + v11) = *(__SyntheticTypeUnknownP128)(v10 + v2);
                *(int*)(v10 + v2) = 2;
                v10 += 16L;
            }
            *(long long*)(param0 + 112L) = v2;
            ptr0[14] = v8;
            sub_406AAF(param0, (unsigned long long)v8);
            goto loc_426B7F;
        }
    }
    else {
    loc_426AFE:
        long long v12 = sub_404AE7(param0);
        long long v13 = sub_426238(param0);
        int v14 = (unsigned int)v13 + (unsigned int)v12;
        if(!__carry__((unsigned int)v13, (unsigned int)v12)) {
            long long v15 = 0L;
            while((unsigned int)v12 > (unsigned int)v15) {
                sub_404F0A(param0, v15 & 0xFFFFFFFFL);
                long long v16 = ((unsigned long long)(unsigned int)v13 + v15) & 0xFFFFFFFFL;
                v15 = (unsigned long long)((unsigned int)v15 + 1);
                sub_403953(param0, 0xfffffffdL, v16);
            }
            sub_406AAF(param0, (unsigned long long)v14);
            sub_404F67(param0, v3, v0, param3);
            sub_403A07(param0, 0xfffc0057L);
        loc_426B7F:
            result = 1L;
        }
        else {
            sub_401CE2("invalid length", 612L);
            result = 0L;
        }
    }
    return result;
}

void sub_426B90() {
    // Decompilation error
}

void sub_426BC2() {
    // Decompilation error
}

long long sub_426E2B(long long param0) {
    long long v0;
    long long v1 = v0;
    int v2 = 0;
    long long v3 = sub_426238(param0);
    int v4 = (unsigned int)v3 >>> 1;
    while(v2 != v4) {
        int v5 = (unsigned int)v3 - 1 - v2;
        long long v6 = sub_40370E(param0, 0xfffffffeL, (unsigned long long)v2);
        long long v7 = sub_40370E(param0, 0xfffffffdL, (unsigned long long)v5);
        long long v8 = (long long)v2;
        if((unsigned int)v7) {
            sub_403953(param0, 0xfffffffcL, v8);
        }
        else {
            sub_403B1D(param0, 0xfffffffcL, v8);
            sub_407DBA(param0);
        }
        if((unsigned int)v6) {
            sub_403953(param0, 0xfffffffdL, (long long)v5);
        }
        else {
            sub_403B1D(param0, 0xfffffffdL, (long long)v5);
            sub_407DBA(param0);
        }
        ++v2;
    }
    sub_40460F(param0);
    return 1L;
}

void sub_426EE4() {
    // Decompilation error
}

long long sub_426FD0(long long param0) {
    long long result;
    long long v0;
    long long v1 = v0;
    long long v2 = sub_426238(param0);
    if(!(unsigned int)v2) {
        sub_406A68(param0, 0L);
        sub_403A07(param0, 87L);
        result = 0L;
    }
    else {
        long long v3 = 1L;
        sub_40370E(param0, 0L, 0L);
        int i;
        for(i = (unsigned int)v3 - 1; (unsigned int)v2 != (unsigned int)v3; i = (unsigned int)v3 - 1) {
            long long v4 = sub_40370E(param0, 0L, v3 & 0xFFFFFFFFL);
            if((unsigned int)v4) {
                sub_403953(param0, 0L, (long long)i);
            }
            else {
                sub_403B1D(param0, 0L, (long long)i);
                sub_407DBA(param0);
            }
            v3 = (unsigned long long)((unsigned int)v3 + 1);
        }
        sub_403B1D(param0, 0L, (long long)i);
        sub_406AAF(param0, (unsigned long long)i);
        sub_403A07(param0, 87L);
        result = 1L;
    }
    return result;
}

long long sub_427082(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = sub_404AE7(param0);
    long long v7 = sub_426238(param0);
    int v8 = (unsigned int)v7 + (unsigned int)v6;
    long long v9 = (unsigned long long)(unsigned int)v7;
    if(__carry__((unsigned int)v7, (unsigned int)v6)) {
        sub_401CE2("invalid length", 1298L);
        result = 0L;
    }
    else {
        while((unsigned int)v9) {
            v9 = (unsigned long long)((unsigned int)v9 - 1);
            long long v10 = sub_40370E(param0, 0xfffffffeL, v9 & 0xFFFFFFFFL);
            long long v11 = ((v6 & 0xFFFFFFFFL) + v9) & 0xFFFFFFFFL;
            if((unsigned int)v10) {
                sub_403953(param0, 0xfffffffdL, v11);
            }
            else {
                (v0 >>> 32L) & 0xFFFFFFFFL = (unsigned int)v11;
                sub_407DBA(param0);
                sub_403B1D(param0, 0xfffffffeL, v0 >>> 32L);
            }
        }
        while((unsigned int)v6 != (unsigned int)v9) {
            sub_404F0A(param0, v9 & 0xFFFFFFFFL);
            long long v12 = v9 & 0xFFFFFFFFL;
            v9 = (unsigned long long)((unsigned int)v9 + 1);
            sub_403953(param0, 0xfffffffdL, v12);
        }
        sub_406AAF(param0, (unsigned long long)v8);
        sub_404F67(param0, v3, v1, v4);
        sub_403A07(param0, 0xfffc0057L);
        result = 1L;
    }
    return result;
}

void sub_427168() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_427245(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = sub_41DCD3(param0);
    long long v7 = sub_426238(param0);
    int v8 = (unsigned int)v7;
    sub_40661B(param0, 0L);
    if((unsigned int)((unsigned int)(v6 & 0xFFFFFFFFL) - 3) <= 1) {
        sub_4070BA(param0, v2, v1, v3);
    }
    else {
        sub_4068D1(param0, v2, v1);
    }
    long long v9 = 0L;
    int v10 = 0;
    long long v11 = 0L;
    long long v12 = v6 & 0xFFFFFFFFL;
    while((unsigned int)v11 != v8) {
        long long v13 = sub_40370E(param0, 2L, v11 & 0xFFFFFFFFL);
        if(!(unsigned int)v13) {
            if((unsigned int)v6 == 3) {
                v9 = (v11 + 1L) & 0xFFFFFFFFL;
            }
            sub_407DBA(param0);
        }
        else {
            sub_404FD6(param0, v2);
            sub_404FDD();
            sub_404FFB();
            sub_406AAF(param0, v11 & 0xFFFFFFFFL);
            sub_404FE7();
            sub_41DA64(param0);
            switch(v12) {
                case 0: {
                    break;
                }
                case 1: {
                    long long v14 = sub_405BBB(param0, 0xFFFFFFFFL, v1, v3);
                    if((unsigned int)v14) {
                        return 1L;
                    }
                }
                case 2: {
                    goto loc_427391;
                }
                case 3: {
                    v9 = (v11 + 1L) & 0xFFFFFFFFL;
                    sub_404F67(param0, v2, v1, v3);
                    sub_403DB2(param0, 4L, v11 & 0xFFFFFFFFL, 7L, v4);
                    goto loc_427391;
                }
                case 4: {
                    long long v15 = sub_405BBB(param0, 0xFFFFFFFFL, v1, v3);
                    if((unsigned int)v15) {
                        sub_404FF1();
                        long long v16 = (unsigned long long)v10;
                        ++v10;
                        v9 = (unsigned long long)v10;
                        sub_403DB2(param0, 4L, v16, 7L, v4);
                    }
                    goto loc_427391;
                }
                default: {
                    throw 0;
                }
            }
            long long v17 = sub_405BBB(param0, 0xFFFFFFFFL, v1, v3);
            if(!(unsigned int)v17) {
                return 1L;
            }
        loc_427391:
            sub_407DE7(param0);
        }
        v11 = (unsigned long long)((unsigned int)v11 + 1);
    }
    if((unsigned int)v6 == 2) {
        sub_4068D1(param0, v2, v1);
    }
    else if((unsigned int)v6 >= 2) {
        sub_406AAF(param0, v9 & 0xFFFFFFFFL);
        sub_403E13(param0, 4261435137L);
    }
    else if(!(unsigned int)v6) {
        sub_40699D(param0, v2, v1);
    }
    else {
        sub_4069DC(param0, v2, v1);
    }
    return 1L;
}

void sub_4273EF() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_427511(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = param3;
    long long v4 = sub_41DCD3(param0);
    sub_406FB2(param0);
    int* ptr0 = (int*)sub_40483D(param0, 0xFFFFFFFFL);
    int v5 = *ptr0;
    if(v5 == 4) {
    loc_42757A:
        v0 = 1L;
        if((unsigned int)v4) {
            sub_408725(param0, 0xFFFFFFFFL);
        }
    }
    else if(v5 == 9 && **(unsigned long long*)(ptr0 + 2) >>> 27 == 5) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42757A;
    }
    else {
        v0 = 0L;
        sub_401D12(param3, 39L);
    }
    return v0 & 0xFFFFFFFFL;
}

void sub_42766D() {
    // Decompilation error
}

void sub_427689() {
    // Decompilation error
}

long long sub_4279F8(long long par0, long long par1) {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_427AF5(long long* param0, long long param1, long long param2, long long param3) {
    char* ptr0;
    char* ptr1;
    long long v0;
    long long v1;
    char* ptr2;
    int v2;
    int v3;
    long long result;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    char* ptr3;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    char* ptr4;
    long long v12;
    __SyntheticTypeUnknown v13;
    __SyntheticTypeUnknown v14;
    __SyntheticTypeUnknown v15;
    long long v16;
    long long v17;
    char v18;
    long long v19;
    long long v20;
    long long v21;
    char v22;
    long long v23;
    long long v24;
    __SyntheticTypeUnknown v25;
    __SyntheticTypeUnknown v26;
    char* ptr5 = ptr3;
loc_427B0C:
    do {
        v7 = sub_427721((long long)param0, param1, param2, param3);
        v6 = (unsigned long long)((unsigned int)((unsigned long long)((unsigned char)v7 >>> 5) | ((unsigned long long)((v7 >>> 8L) & 0xffffffffffffffL) << 8)) - 1);
        if((unsigned char)v6 <= 6) {
            switch(v6) {
                case 0: {
                    v5 = v7 & 0xFFL;
                    v4 = 1L;
                    sub_427833((long long)param0, v5, v4, param3, v24);
                    return result;
                }
                case 1: {
                    if((unsigned char)((unsigned int)v7 & 0x1f) == 31) {
                        result = sub_4279F8((long long)param0, 64L);
                    }
                    else {
                        *(param0 + 2) = *(param0 + 2) - 1L;
                        result = sub_427990((long long)param0, 64L, param2);
                    }
                    return result;
                }
                case 2: {
                    if((unsigned char)((unsigned int)v7 & 0x1f) == 31) {
                        sub_4279F8((long long)param0, 96L);
                        long long v27 = sub_405563(*param0, 0xFFFFFFFFL, (long long)&v12, param3, v24);
                        sub_406B69(*param0, v27, v12, param3);
                        sub_40511F(*param0, 0xfffffffeL);
                    }
                    else {
                        long long v28 = sub_427927((long long)param0, v7 & 0xFFL);
                        long long v29 = sub_427793((long long)param0, v28 & 0xFFFFFFFFL, param2, param3, v24);
                        sub_406B69(*param0, v29, v28 & 0xFFFFFFFFL, param3);
                    }
                    result = sub_4065BA();
                    if((unsigned int)result) {
                        result = sub_427705();
                    }
                    return result;
                }
                case 3: {
                    sub_404E3A(*param0, 4L);
                    if((unsigned char)((unsigned int)v7 & 0x1f) != 31) {
                        long long v30 = sub_427927((long long)param0, v7 & 0xFFL);
                        v3 = (unsigned int)v30;
                        if((unsigned int)v30 == -1) {
                            return sub_427705();
                        }
                    }
                    else {
                        v3 = -1;
                    }
                    long long v31 = 0L;
                    result = sub_4070BA(*param0, param1, param2, param3);
                    do {
                        int v32 = (unsigned int)v31;
                        int v33 = (unsigned int)v31;
                        if(v3 == -1) {
                            result = sub_427753((long long)param0, param1, param2, param3, v24);
                            if((unsigned int)result) {
                                return result;
                            }
                        }
                        if(v3 != v32) {
                            ++v31;
                            sub_427AF5();
                            sub_403953(*param0, 0xfffffffeL, (unsigned long long)v33);
                            result = 0x100000000L;
                        }
                        else if((unsigned char)((unsigned int)v7 & 0x1f) != 31) {
                            return result;
                        }
                        else {
                            break;
                        }
                    }
                    while(v31 != 0x100000000L);
                    return sub_427705();
                }
                case 4: {
                    sub_404E3A(*param0, 4L);
                    if((unsigned char)((unsigned int)v7 & 0x1f) != 31) {
                        long long v34 = sub_427927((long long)param0, v7 & 0xFFL);
                        v2 = (unsigned int)v34;
                        if((unsigned int)v34 == -1) {
                            return sub_427705();
                        }
                    }
                    else {
                        v2 = -1;
                    }
                    result = sub_407095(*param0);
                    while(1) {
                        if(v2 == -1) {
                            result = sub_427753((long long)param0, param1, param2, param3, v24);
                            if(!(unsigned int)result) {
                                goto loc_427CF5;
                            }
                            else {
                                return result;
                            }
                        }
                        if(!v2) {
                            return result;
                        }
                        --v2;
                    loc_427CF5:
                        sub_427AF5();
                        sub_427AF5();
                        result = sub_40388B(*param0);
                    }
                loc_427D4D:
                    if((unsigned char)((unsigned char)((unsigned int)v7 & 0x1f) - 20) <= 7) {
                        switch((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL)) {
                            case 0: {
                                break;
                            }
                            case 1: {
                                return sub_40699D(*param0, param1, param2);
                            }
                            case 2: {
                                return sub_40691D(*param0, param1, param2);
                            }
                            case 3: {
                                return sub_4068D1(*param0, param1, param2);
                            }
                            case 4: {
                                return sub_427705();
                            }
                            case 5: {
                                goto loc_427D9D;
                            }
                            case 6: {
                                int* ptr6 = (int*)sub_427793((long long)param0, 4L, param2, param3, v24);
                                v12 & 0xFFFFFFFFL = *ptr6;
                                sub_41D673((long long)&v12);
                                return sub_406A1B(*param0);
                            }
                            case 7: {
                                long long* ptr7 = (long long*)sub_427793((long long)param0, 8L, param2, param3, v24);
                                v12 = *ptr7;
                                sub_41D667((long long)&v12);
                                goto loc_427EC7;
                            }
                            case 8: {
                                ptr2 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                *ptr2 = 247;
                                ptr0 = ptr2 + 1L;
                                *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1) = ptr0;
                                sub_407D7E(*(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL));
                                jump ptr4;
                            }
                            case 9: {
                                ptr2 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                *ptr2 = 246;
                                ptr0 = ptr2 + 1L;
                                *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1) = ptr0;
                                sub_407D7E(*(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL));
                                jump ptr4;
                            }
                            case 10: {
                                long long v35 = sub_4053B6(param3, param2, v24);
                                ptr2 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                *ptr2 = (unsigned char)((unsigned long long)((unsigned int)v35 ? 1: 0) | ((unsigned long long)((v23 >>> 8L) & 0xffffffffffffffL) << 8)) - 12;
                                ptr0 = ptr2 + 1L;
                                *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1) = ptr0;
                                sub_407D7E(*(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL));
                                jump ptr4;
                            }
                            case 11: {
                                long long v36 = *(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL);
                                sub_40541C();
                                long long v37 = v17;
                                sub_42F94A(v36, 0xFFFFFFFFL, param2, param3);
                                v21 = movlpd(v21, v37);
                                long long v38 = sub_41D67C();
                                v16 = movlpd(v16, v37);
                                if((unsigned int)v38) {
                                    (unsigned int)v54 = movmskpd((unsigned int)v38, v25);
                                    if((v22 & 0x1)) {
                                        v25 = comisd(v25, 0xc1f0000000000000L);
                                        v9 = movlpd(v9, 0xbff0000000000000L);
                                        __SyntheticTypeUnknown v13 = comisd((__SyntheticTypeUnknownU)((double)v26 - (double)v25) | ((__SyntheticTypeUnknownU)(unsigned long long)(v26 >>> 0x40X) << 64), 0L);
                                        v1 = (long long)(double)v13;
                                        v0 = 32L;
                                    }
                                    else {
                                        v8 = movlpd(v8, 0x41efffffffe00000L);
                                        __SyntheticTypeUnknown v53 = comisd(v14, (unsigned long long)v25);
                                        v1 = (long long)(double)v25;
                                        v0 = 0L;
                                    }
                                    sub_4275F7((long long)(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL), v1, v0);
                                }
                                else {
                                    long long v39 = (unsigned long long)v25;
                                    v37 = (unsigned long long)v25;
                                    sub_41D665();
                                    v10 = movlpd(v10, v37);
                                    int v40 = (unsigned int)(v39 >>> 56L) * 0x100;
                                    int v41 = (unsigned int)(unsigned char)(v39 >>> 48L);
                                    long long v42 = (unsigned long long)((unsigned short)((unsigned int)0 | ((unsigned int)(((unsigned int)(unsigned char)(v39 >>> 48L) | v40) & 0x7fffffff) << 1)) >>> 5) | ((unsigned long long)(((unsigned long long)(((unsigned int)(unsigned char)(v39 >>> 48L) | v40) * 2) >>> 16L) & 0xffffffffffffL) << 16);
                                    if((unsigned short)((unsigned short)v42 + 0xfc0f) > 29) {
                                        if((unsigned short)((unsigned short)v42 + 0xfc7f) <= 253) {
                                        loc_4281D4:
                                            (v12 >>> 32L) & 0xFFFFFFFFL = (double)v15;
                                            v37 = (unsigned long long)v15;
                                            long long v43 = sub_41D67C();
                                            v11 = movlpd(v11, v37);
                                            if((unsigned int)v43) {
                                                char* ptr8 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                                ptr1 = ptr8 + 1L;
                                                *ptr8 = 250;
                                                sub_42E404((long long)&ptr1);
                                                goto loc_428261;
                                            }
                                        }
                                        else if((unsigned short)v42 == 0x7ff) {
                                            char* ptr9 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                            ptr1 = ptr9 + 1L;
                                            *ptr9 = 249;
                                            char* ptr10 = ptr1;
                                            if(((double)v15 == (double)v15 ? 0: (double)v15 > (double)v15 ? 0: (double)v15 >= (double)v15)) {
                                                ptr1 = ptr10 + 1L;
                                                *ptr10 = 126;
                                            }
                                            else {
                                                int v52 = movmskpd((unsigned int)ptr9, v15);
                                                ptr1 = ptr10 + 1L;
                                                *ptr10 = (v18 & 0x1) != 0 ? 252: 124;
                                            }
                                            char* ptr11 = ptr1;
                                            ptr1 = ptr11 + 1L;
                                            *ptr11 = 0;
                                            goto loc_428261;
                                        }
                                        char* ptr12 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                        ptr1 = ptr12 + 1L;
                                        *ptr12 = 251;
                                        sub_42E41D((long long)&ptr1);
                                    }
                                    else if(v39 & 0xffffffffffL) {
                                        goto loc_4281D4;
                                    }
                                    else {
                                        long long v44 = (unsigned long long)(unsigned char)(v39 >>> 40L) | ((unsigned long long)0xFFFFFFFFL << 8);
                                        if((unsigned char)(v39 >>> 40L) & 0x3) {
                                            goto loc_4281D4;
                                        }
                                        else {
                                            char* ptr13 = *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1);
                                            ptr1 = ptr13 + 1L;
                                            *ptr13 = 249;
                                            sub_42E3D7((long long)&ptr1, (unsigned long long)((unsigned int)((unsigned short)v42 - 1008) * 0x400 + (((v41 * 64) & 0x3c0) | (v40 & 0x8000)) + (unsigned int)((unsigned char)v44 >>> 2)));
                                        }
                                    }
                                loc_428261:
                                    ptr0 = ptr1;
                                    *(unsigned long long*)((long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL) + 1) = ptr0;
                                }
                                sub_407D7E(*(long long*)((unsigned long long)(((unsigned int)v7 & 0x1f) - 20) & 0xFFL));
                                jump ptr4;
                            }
                            default: {
                                throw 0;
                            }
                        }
                        result = sub_4069DC(*param0, param1, param2);
                    }
                    else {
                        result = sub_427705();
                    }
                    return result;
                }
                case 5: {
                    long long* ptr14 = &v12;
                    int* ptr15 = (int*)&gvar_441B70;
                    for(long long i = 8L; i != 0L; --i) {
                        *(int*)ptr14 = *ptr15;
                        ++ptr15;
                        ptr14 = (long long*)((char*)ptr14 + 4L);
                    }
                    long long v45 = (unsigned long long)*(char*)((unsigned long long)((unsigned int)v7 & 0x1f) + (long long)&v12) | ((unsigned long long)(((unsigned long long)((unsigned int)v7 & 0x1f) >>> 8L) & 0xffffffffffffffL) << 8);
                    if(*(char*)((unsigned long long)((unsigned int)v7 & 0x1f) + (long long)&v12) < 0) {
                        sub_427705();
                    }
                    sub_427793((long long)param0, (long long)(unsigned char)v45, param2, 0L, v24);
                    goto loc_427B0C;
                }
                case 6: {
                    goto loc_427D4D;
                }
                case 7: {
                    return sub_4069DC(*param0, param1, param2);
                }
                case 8: {
                    return sub_40699D(*param0, param1, param2);
                }
                case 9: {
                    return sub_40691D(*param0, param1, param2);
                }
                case 10: {
                    return sub_4068D1(*param0, param1, param2);
                }
                case 11: {
                    return sub_427705();
                }
                case 12: {
                loc_427D9D:
                    char* ptr16 = (char*)sub_427793((long long)param0, 2L, param2, param3, v24);
                    long long v46 = (unsigned long long)*ptr16;
                    long long v47 = (unsigned long long)*(ptr16 + 1L);
                    v12 = 0L;
                    long long v48 = ((unsigned long long)((unsigned int)v46 * 0x100) + v47) & 0xFFFFFFFFL;
                    long long v49 = (unsigned long long)((unsigned int)((v46 >>> 2L) & 0x3fffffL) & 0x1f);
                    if((unsigned int)(unsigned long long)((unsigned int)((v46 >>> 2L) & 0x3fffffL) & 0x1f)) {
                        long long v50 = (unsigned long long)(int)*ptr16;
                        if((unsigned int)(unsigned long long)((unsigned int)((v46 >>> 2L) & 0x3fffffL) & 0x1f) - 0xF == 16) {
                            (v12 >>> 56L) & 0xFFL = (unsigned char)((unsigned int)v50 | 0x7f);
                            (v12 >>> 48L) & 0xFFL = !((unsigned int)v48 & 0x3ff) ? 240: 248;
                        }
                        else {
                            long long v51 = (unsigned long long)(((unsigned int)(unsigned long long)((unsigned int)((v46 >>> 2L) & 0x3fffffL) & 0x1f) + 1008) * 0x100000 + (unsigned int)*(ptr16 + 1L) * 0x400 + ((((unsigned int)v50 * 0x40000) & 0xc0000) | ((unsigned int)v50 & 0x80000000)));
                            (v12 >>> 40L) & 0xFFL = (unsigned char)(v51 >>> 8L);
                            (v12 >>> 56L) & 0xFFL = (unsigned char)(v51 >>> 24L);
                            (v12 >>> 48L) & 0xFFL = (unsigned char)(v51 >>> 16L);
                        }
                    loc_427E81:
                        sub_41D666();
                    loc_427EC7:
                        v20 = movlpd(v20, v12);
                        return sub_406A1B(*param0);
                    }
                    else if(!((unsigned int)v48 & 0x3ff)) {
                        (v12 >>> 56L) & 0xFFL = (unsigned char)((unsigned int)((unsigned long long)*ptr16 | ((unsigned long long)(((((unsigned long long)((unsigned int)((v46 >>> 2L) & 0x3fffffL) & 0x1f) - 15L) & 0xFFFFFFFFL) >>> 8L) & 0xffffffffffffffL) << 8)) & 0xffffff80);
                        goto loc_427E81;
                    }
                    else {
                        (v12 >>> 56L) & 0xFFL = 63;
                        (v12 >>> 48L) & 0xFFL = (unsigned char)(((unsigned int)v48 >>> 6) & 0xF) + 16;
                        (v12 >>> 40L) & 0xFFL = (unsigned char)((unsigned long long)0 | ((unsigned long long)(v48 & 0x3fffffffffffffffL) << 2));
                        sub_41D666();
                        v19 = movlpd(v19, v12);
                    }
                    return sub_406A1B(*param0);
                }
                case 13: {
                    int* ptr6 = (int*)sub_427793((long long)param0, 4L, param2, param3, v24);
                    v12 & 0xFFFFFFFFL = *ptr6;
                    sub_41D673((long long)&v12);
                    return sub_406A1B(*param0);
                }
                case 14: {
                    long long* ptr7 = (long long*)sub_427793((long long)param0, 8L, param2, param3, v24);
                    v12 = *ptr7;
                    sub_41D667((long long)&v12);
                    goto loc_427EC7;
                }
                default: {
                    throw 0;
                }
            }
            break;
        }
    }
    while((unsigned char)v6 <= 6);
    v5 = v7 & 0xFFL;
    v4 = 0L;
    sub_427833((long long)param0, v5, v4, param3, v24);
    return result;
}

void sub_427EEF() {
    // Decompilation error
}

void sub_428018() {
    // Decompilation error
}

void sub_428481() {
    // Decompilation error
}

void sub_4287AB() {
    // Decompilation error
}

long long sub_428B6D(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    int v3 = (unsigned int)param1;
    sub_406FB2(param0, param1);
    sub_407826(param0, (unsigned long long)v3);
    sub_404FD6(param0, param1);
    sub_403E29(param0, 0xfffffffdL, 125L, v0, v1, v2);
    return 0L;
}

void sub_428BB1() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428C27(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    sub_406FB2(param0);
    sub_408496(param0, 0xFFFFFFFFL, 640L, v0, v1);
    sub_4037B9(param0, 0xffff005dL);
    long long v2 = sub_40649F(param0, 0xFFFFFFFFL);
    if((unsigned int)v2) {
        sub_407D7E(param0);
        sub_406EC3(param0, "Error", 5L);
    }
    else {
        sub_408725(param0, 0xFFFFFFFFL);
    }
    sub_4037B9(param0, 0xfffe0034L);
    long long v3 = sub_40649F(param0, 0xFFFFFFFFL);
    if((unsigned int)v3) {
        sub_407D7E(param0);
        sub_407963(param0);
    }
    else {
        sub_408725(param0, 0xFFFFFFFFL);
    }
    long long v4 = sub_405CB0(param0, 0xfffffffeL);
    if(v4) {
        long long v5 = sub_405CB0(param0, 0xFFFFFFFFL);
        if(!v5) {
            sub_407D7E(param0);
        }
        else {
            sub_406EC3(param0, 0x446965L, 2L);
            sub_40500F(param0, 0xfffffffeL);
            sub_408E52(param0, 3L);
        }
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428D5B(long long param0, unsigned long long param1, long long param2) {
    long long v0 = param2;
    long long v1 = param2 - ((unsigned long long)((unsigned int)((unsigned int)param2 & 0x1) < 1) - 1L);
    unsigned long long v2 = 0L;
    while((unsigned long long)((unsigned int)param1 & 0xfffffffc) > v2) {
        v1 += 8L;
        *(short*)(v1 - 8L) = *(short*)((unsigned long long)*(char*)(v2 + param0) * 2L + 4452032L);
        *(short*)(v1 - 6L) = *(short*)((unsigned long long)*(char*)(v2 + param0 + 1L) * 2L + 4452032L);
        *(short*)(v1 - 4L) = *(short*)((unsigned long long)*(char*)(v2 + param0 + 2L) * 2L + 4452032L);
        long long v3 = (unsigned long long)*(char*)(v2 + param0 + 3L);
        v2 += 4L;
        *(short*)(v1 - 2L) = *(short*)(v3 * 2L + 4452032L);
    }
    if((unsigned int)((unsigned int)param2 & 0x1)) {
        sub_43ABC2(v0, v0 + 1L, (unsigned long long)((unsigned int)param1 & 0xfffffffc) * 2L, (long long)v2);
    }
    unsigned long long v4 = v2;
    long long v5 = v1;
    while(v4 < param1) {
        v0 = (unsigned long long)*(char*)(v4 + param0) | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        v5 += 2L;
        ++v4;
        long long v6 = v0;
        v0 = (unsigned long long)((unsigned int)v0 & 0xF);
        v0 = (unsigned long long)a0123456789abcde2[v0] | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        *(char*)(v5 - 2L) = a0123456789abcde2[(unsigned long long)((unsigned int)(v6 >>> 4L) & 0xF)];
        *(char*)(v5 - 1L) = (unsigned char)v0;
    }
    return (v2 <= param1 ? (param1 - v2) * 2L: 0L) + v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_428E41(long long* param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    if(*(param0 + 3) == *(param0 + 1)) {
        sub_41CFE2(*param0, param0 + 1, 1L, param3);
    }
    char* result = *(unsigned long long*)(param0 + 1);
    *(unsigned long long*)(param0 + 1) = (long long*)(result + 1L);
    *result = (unsigned char)param1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428E7D(long long* param0, long long param1, unsigned long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long result = param3;
    long long v5 = param0[1];
    if((unsigned long long)(param2 * 2L + 11L) > (unsigned long long)(param0[3] - v5)) {
        v5 = sub_41CFE2(param0[0], param0 + 1, param2 * 2L + 11L, param3);
    }
    if(*(int*)((char*)&param0[9] + 4)) {
        *(char*)v5 = 124;
        long long v6 = sub_428D5B(param1, param2, v5 + 1L);
        v0 = v6 + 1L;
        *(char*)v6 = 124;
    }
    else {
        sub_43AAA0(param3, 9L);
        long long v7 = sub_428D5B(param1, param2, v5 + 9L);
        v0 = v7 + 2L;
        *(short*)v7 = 0x7d22;
    }
    param0[1] = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428F0A(long long* param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v3;
    long long v6 = v2;
    long long result = param2;
    sub_428E41(param0, 10L, param2, param3);
    if(param1) {
        unsigned long long v7 = (unsigned long long)*(int*)(param0[6] + 24L);
        long long v8 = (unsigned long long)param1 * v7;
        if((unsigned long long)(param0[3] - param0[1]) < (unsigned long long)v8) {
            sub_41CFE2(param0[0], param0 + 1, v8, v8);
        }
        sub_43AAA0(v8, (long long)v7);
        long long v9 = v1 + v7;
        long long v10 = v8 - v7;
        while((unsigned long long)v10 >= v7) {
            v10 -= v7;
            sub_43AAA0(param3, (long long)v7);
            v9 += v7;
            v7 *= 2L;
        }
        sub_43AAA0(param3, v10);
        param0[1] = v10 + v9;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428FAA(long long* param0, long long param1, long long param2, long long param3) {
    long long result = param2;
    long long v0 = (long long)*(int*)(param1 + 24L);
    if((unsigned long long)(param0[3] - param0[1]) < (unsigned long long)v0) {
        sub_41CFE2(param0[0], param0 + 1, v0, param3);
    }
    if(v0) {
        sub_43AAA0(param3, v0);
    }
    param0[1] += v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428FFB(long long* param0, int param1, long long param2, long long param3) {
    long long result = param2;
    long long v0 = *param0;
    long long v1 = (long long)*(int*)(*(long long*)((unsigned long long)param1 * 8L + *(long long*)(v0 + 568L)) + 24L);
    if((unsigned long long)(*(param0 + 3) - *(param0 + 1)) < (unsigned long long)v1) {
        sub_41CFE2(v0, param0 + 1, v1, param3);
    }
    if(v1) {
        sub_43AAA0(param3, v1);
    }
    *(param0 + 1) = *(param0 + 1) + v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_429056(long long* param0) {
    long long v0;
    long long result;
    sub_404E3A(*param0, 32);
    int v1 = *(int*)((char*)param0 + 52L);
    if(*(int*)(param0 + 7) <= v1) {
        sub_401CE2("json decode recursion limit", 723L);
        return result;
    }
    *(int*)((char*)param0 + 52L) = v1 + 1;
    jump *(&v0 + 3);
}

char* sub_4290F1(long long* param0, int param1, long long param2, char* param3) {
    long long v0;
    long long* ptr0;
    char v1;
    long long* ptr0;
    char* ptr1;
    long long v2;
    char* ptr2;
    char* ptr3;
    char* ptr4;
    long long v3;
    long long v4;
    long long* ptr5;
    long long v5;
    long long* ptr6;
    long long* ptr7 = ptr6;
    long long v6 = v5;
    long long v7 = *param0;
    sub_41CF97(v7, (long long)&ptr4, 128L);
    char* ptr8 = ptr4;
    while(1) {
        char* ptr9 = ptr8;
        if((unsigned long long)(long long*)(v3 - (long long)ptr9) <= 70L) {
            long long v8 = *param0;
            ptr4 = ptr9;
            ptr9 = (char*)sub_41CFE2(v8, (long long)&ptr4, 71L, (long long)param3);
        }
        ptr8 = ptr9;
        ptr3 = *(unsigned long long*)(param0 + 1);
        long long* ptr10 = (long long*)(ptr3 + 64L);
        do {
            ptr2 = ptr3;
            v2 = (unsigned long long)*ptr3;
            ++ptr3;
            if(!*(char*)(v2 + 4464800L)) {
                goto loc_429181;
            }
            else {
                param3 = ptr8;
                ptr8 = param3 + 1L;
                *param3 = (unsigned char)v2;
            }
        }
        while(ptr3 != ptr10);
        *(unsigned long long*)(param0 + 1) = ptr10;
        continue;
    loc_429181:
        if((unsigned char)v2 == 34) {
            long long v9 = *param0;
            *(unsigned long long*)(param0 + 1) = ptr3;
            ptr4 = ptr8;
            sub_41D054(v9, (long long)&ptr4);
            return (char*)sub_406BF4(v7);
        }
        else if((unsigned char)v2 != 92) {
            break;
        }
        else {
            *(unsigned long long*)(param0 + 1) = (long long*)(ptr2 + 2L);
            ptr10 = (unsigned long long)*ptr3 | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr10 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)ptr10 > 120) {
                goto loc_42927D;
            }
            else {
                if((unsigned char)ptr10 <= 109) {
                    if((unsigned char)ptr10 == 98) {
                        ptr0 = (long long*)0x8;
                        goto loc_42926C;
                    }
                    else if((unsigned char)ptr10 < 98) {
                        if((unsigned char)ptr10 != 85) {
                            if((unsigned char)ptr10 >= 85) {
                                v1 = (unsigned char)ptr10 == 92;
                            }
                            else if((unsigned char)ptr10 == 34) {
                                ptr0 = (long long*)((long long)ptr10 & 0xFFL);
                                goto loc_42926C;
                            }
                            else {
                                v1 = (unsigned char)ptr10 == 47;
                            }
                            if(!v1) {
                                goto loc_42927D;
                            }
                            else {
                                ptr0 = (long long*)((long long)ptr10 & 0xFFL);
                                goto loc_42926C;
                            }
                        }
                        else if(!*(int*)(param0 + 5)) {
                            goto loc_42927D;
                        }
                        else {
                            v0 = 8L;
                            goto loc_429253;
                        }
                    }
                    else if((unsigned char)ptr10 != 102) {
                        goto loc_42927D;
                    }
                    else {
                        ptr0 = (long long*)0xC;
                        goto loc_42926C;
                    }
                }
                if((unsigned char)((unsigned char)ptr10 - 110) > 10) {
                    goto loc_42927D;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 0) {
                    ptr0 = (long long*)0xA;
                    goto loc_42926C;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 1 || (unsigned long long)((unsigned int)ptr10 - 110) == 2 || (unsigned long long)((unsigned int)ptr10 - 110) == 3 || (unsigned long long)((unsigned int)ptr10 - 110) == 5 || (unsigned long long)((unsigned int)ptr10 - 110) == 8 || (unsigned long long)((unsigned int)ptr10 - 110) == 9) {
                    goto loc_42927D;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 4) {
                    ptr0 = (long long*)0xD;
                    goto loc_42926C;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 6) {
                    ptr0 = (long long*)0x9;
                    goto loc_42926C;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 7) {
                    v0 = 4L;
                    goto loc_429253;
                }
                else if((unsigned long long)((unsigned int)ptr10 - 110) == 10) {
                    goto loc_429249;
                }
                else {
                    throw 0;
                    ptr0 = (long long*)0x9;
                    goto loc_42926C;
                loc_429249:
                    if(!*(int*)(param0 + 5)) {
                        goto loc_42927D;
                    }
                    else {
                        v0 = 2L;
                    loc_429253:
                        ptr0 = (long long*)sub_4290BE((long long)param0, v0, (long long)(long long*)(ptr2 + 2L), (long long)ptr2);
                    loc_42926C:
                        sub_42E436((long long)&ptr8, (long long)(long long*)((long long)ptr0 & 0xFFFFFFFFL));
                    }
                }
            }
        }
    }
    *(unsigned long long*)(param0 + 1) = ptr3;
loc_42927D:
    unsigned long long* ptr11 = &v4;
    sub_42909D((long long)param0);
    ptr1 = (char*)(*(long long*)((unsigned long long)param1 * 8L + *(long long*)(*param0 + 568L)) + 33L);
    for(char i = *ptr1; i; i = *ptr1) {
        char* ptr12 = *(unsigned long long*)(param0 + 1);
        *(unsigned long long*)(param0 + 1) = (long long*)(ptr12 + 1L);
        if(*ptr12 != i) {
            --ptr11;
            *ptr11 = &ptr5;
            --ptr11;
            *ptr11 = &loc_4292B5;
            ptr1 = (char*)/*BAD_CALL!*/ sub_42909D((long long)param0);
        }
        ++ptr1;
    }
    jump *ptr11;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_429282(long long* param0, int param1, long long param2, long long i, long long param4, long long param5) {
    unsigned long long* ptr0;
    unsigned long long* ptr1;
    long long v0 = *(long long*)((unsigned long long)param1 * 8L + *(long long*)(param0[0] + 568L)) + 33L;
    for(i = (unsigned long long)*(char*)v0 | ((unsigned long long)((i >>> 8L) & 0xffffffffffffffL) << 8); (unsigned char)i; i = (unsigned long long)*(char*)v0 | ((unsigned long long)((i >>> 8L) & 0xffffffffffffffL) << 8)) {
        long long v1 = param0[1];
        param0[1] = v1 + 1L;
        if((unsigned char)i != *(char*)v1) {
            ptr0 = ptr0 - 1;
            *ptr0 = ptr1;
            ptr1 = ptr0;
            --ptr0;
            *ptr0 = &loc_4292B5;
            v0 = /*BAD_CALL!*/ sub_42909D(param0, v1 + 1L, v1, i, param4, param5);
        }
        ++v0;
    }
    jump *ptr0;
}

void sub_4292BB() {
    // Decompilation error
}

long long sub_429412(long long* param0, int* param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = param2;
    *(int*)(param0 + 11) = *(int*)(param0 + 11) - 1;
    long long v8 = *param0;
    long long v9 = sub_405B41(v8, ((unsigned long long)*param1 - 1L) & 0xFFFFFFFFL);
    if(*(unsigned int*)(param0 + 11) > 63) {
        sub_407AA3(v2, v9, v3, v4);
        sub_403A0F(v8, (long long)*(int*)((char*)param0 + 60L));
    }
    return sub_404B20(v8, (long long)*param1);
}

void sub_42946B() {
    // Decompilation error
}

long long* sub_429568(unsigned int* param0, unsigned int param1, short* param2) {
    long long v0 = param1 <= 0xff ? (unsigned long long)(((*param0 < 1 ? -1: 0) & 0x1fffd) + 154744): param1 <= 0xffff ? 0x45c75L: (unsigned long long)(((*param0 < 1 ? -1: 0) & 0xfffff8d6) + 0x85c55);
    long long* ptr0 = (long long*)(param2 + 1);
    *param2 = (unsigned short)(unsigned char)(v0 >>> 8L) | ((unsigned short)(unsigned char)v0 << 8);
    long long v1 = (unsigned long long)((unsigned int)v0 >>> 16);
    do {
        v1 = (unsigned long long)((unsigned int)v1 - 1);
        ptr0 = (long long*)((char*)ptr0 + 1L);
        *((char*)ptr0 - 1L) = a0123456789abcde2[(unsigned long long)((param1 >>> (((unsigned long long)0 | ((unsigned long long)(v1 & 0x3fffffffffffffffL) << 2)) & 0x1fL)) & 0xF)];
    }
    while((unsigned int)v1);
    return (long long*)((char*)((unsigned long long)(((unsigned int)v0 >>> 16) - 1) + (long long)param2) + 3L);
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_42974E(long long* param0, long long param1, long long param2, long long param3) {
    int v0;
    long long result;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9 = v6;
    long long v10 = v3;
    long long v11 = v4;
    long long v12 = v5;
    if(*(int*)&param0[9]) {
        unsigned long long v13 = (unsigned long long)((unsigned long long)*(int*)(param1 + 24L) + param1 + 32L);
        if(param1 + 32L != v13) {
            char* ptr0 = (char*)(param1 + 33L);
            long long v14 = sub_41CAA1((long long)(int)*(char*)(param1 + 32L));
            while((unsigned int)v14) {
                if(v13 > (unsigned long long)ptr0) {
                    long long v15 = (long long)(int)*ptr0;
                    ++ptr0;
                    v14 = sub_41CADA(v15, param1, param2, param3);
                }
                else {
                    return (char*)sub_428FAA(param0, param1, param2, param3);
                }
            }
        }
    }
    long long v16 = v12;
    long long v17 = v11;
    long long v18 = v3;
    long long v19 = v9;
    v9 = v7;
    v10 = v19;
    v11 = v18;
    v12 = v17;
    long long v20 = v16;
    long long v21 = (unsigned long long)*(int*)(param1 + 24L);
    long long v22 = param0[0];
    char* ptr1 = (char*)(param1 + 32L);
    long long* ptr2 = (long long*)(param1 + v21 + 32L);
    sub_428E41(param0, 34L, param2, param3);
    while((unsigned long long)ptr2 > (unsigned long long)ptr1) {
        long long* ptr3 = (long long*)((long long)ptr2 - (long long)ptr1);
        long long v23 = param0[1];
        v2 = (long long)(((unsigned long long)ptr3 <= 64L ? ptr3: 64L) * 6L);
        v1 = param0[3] - v23;
        if((unsigned long long)v1 < (unsigned long long)v2) {
            v23 = sub_41CFE2(v22, param0 + 1, v2, v1);
        }
        long long* ptr4 = (long long*)(((unsigned long long)ptr3 <= 64L ? ptr3: 64L) + (long long)ptr1);
        short* ptr5 = (short*)v23;
        long long* ptr6 = ptr4;
    loc_429659:
        char* ptr7 = ptr1;
        while((unsigned long long)ptr7 < (unsigned long long)ptr6) {
            ptr1 = ptr7 + 1L;
            long long v24 = (long long)*ptr7;
            result = (unsigned long long)*(char*)((unsigned long long)*ptr7 + 4465088L);
            if(*(char*)((unsigned long long)*ptr7 + 4465088L) >= 0) {
                v2 = (long long)ptr5;
                v1 = v2 + 1L;
                ptr5 = (short*)(v2 + 1L);
                *(char*)v2 = (unsigned char)result;
                goto loc_429659;
            }
            else if((unsigned char)result > 159) {
                short* ptr8 = ptr5;
                result = (unsigned long long)((unsigned int)result - 128);
                ptr5 = (short*)((char*)ptr8 + 1L);
                *(char*)&ptr8[0] = 92;
                v2 = (long long)ptr5;
                v1 = v2 + 1L;
                ptr5 = (short*)(v2 + 1L);
                *(char*)v2 = (unsigned char)result;
                goto loc_429659;
            }
            else {
                if((unsigned char)result == 128) {
                    v0 = (unsigned int)v24;
                    ptr5 = (short*)sub_429568((unsigned int*)((char*)param0 + 76L), (unsigned int)v24, ptr5);
                    goto loc_429659;
                }
                else {
                    char* ptr9 = ptr7 + 1L;
                    ptr1 = ptr7;
                    long long v25 = sub_41C7A1(v22, (long long)&ptr1, (long long)(char*)(param1 + 32L), (long long)ptr2, (long long)&v0, v8);
                    if(!(unsigned int)v25) {
                        long long v26 = (unsigned long long)*ptr7;
                        ptr1 = ptr9;
                        v0 = (unsigned int)v26;
                    }
                    v24 = (long long)v0;
                }
                if(*(int*)((char*)&param0[8] + 4) || (unsigned int)((unsigned int)v24 - 8232) <= 1) {
                    ptr5 = (short*)sub_429568((unsigned int*)((char*)param0 + 76L), (unsigned int)v24, ptr5);
                    goto loc_429659;
                }
                else {
                    sub_42E436(&ptr5, v24, param2, param3);
                    ptr7 = ptr1;
                }
            }
        }
        param0[1] = (long long)ptr5;
    }
    sub_428E41(param0, 34L, v2, v1);
    return result;
}

void sub_4297BE() {
    // Decompilation error
}

void sub_429962() {
    // Decompilation error
}

char* sub_429DD9(long long param0) {
    char* ptr0;
    long long v0;
    char* ptr1 = *(unsigned long long*)(param0 + 8L);
    do {
        v0 = (unsigned long long)*ptr1;
        ptr0 = ptr1;
        ++ptr1;
    }
    while(*(char*)(v0 + 4464544L));
    *(unsigned long long*)(param0 + 8L) = ptr1;
    return (unsigned long long)*ptr0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr1 >>> 8L) & 0xffffffffffffffL) << 8);
}

void sub_429DF6() {
    // Decompilation error
}

void sub_42A197() {
    // Decompilation error
}

void sub_42A276() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A678(long long param0, long long param1) {
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
    __SyntheticTypeUnknown v11;
    __SyntheticTypeUnknown v12;
    long long v13;
    long long v14;
    long long v15;
    long long v16;
    long long v17 = v9;
    long long v18 = v8;
    long long v19 = v10;
    int v20 = 0;
    long long v21 = sub_404AE7(param0);
    v0 = movlpd(v0, v7);
    while((unsigned int)v21 > v20) {
        long long v22 = (unsigned long long)v11;
        sub_405C43(param0, (long long)v20);
        long long v23 = v1;
        long long v24 = sub_42FB3D(v13, v14, v15);
        v2 = movlpd(v2, v23);
        v3 = movlpd(v3, v22);
        if((unsigned int)v24) {
            v22 = v4;
            v23 = (unsigned long long)v11;
            long long v25 = sub_42FB3D(v13, v14, v15);
            if(!(unsigned int)v25) {
                goto loc_42A6D4;
            }
            else {
                v5 = movlpd(v5, v23);
                v6 = movlpd(v6, v22);
                v16();
                v11 = v12;
            }
        }
        else {
        loc_42A6D4:
            v11 = (__SyntheticTypeUnknownU)0x7ff8000000000000L | ((__SyntheticTypeUnknownU)(unsigned long long)(v11 >>> 0x40X) << 64);
        }
        ++v20;
    }
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A86D(long long param0) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_41DCD3(param0);
    sub_405C43(param0, 0L);
    *(long long*)((long long)(unsigned int)v2 * 8L + 4465408L)();
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A8A2(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v2;
    long long v4 = sub_41DCD3(param0);
    sub_405C43(param0, 0L);
    long long v5 = v1;
    sub_405C43(param0, 1L);
    v0 = movlpd(v0, v1);
    *(long long*)((long long)(unsigned int)v4 * 8L + 0x4422e0L)();
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A91E(long long param0) {
    sub_41D71B(param0);
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A93F(long long param0) {
    __SyntheticTypeUnknown v0;
    double v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    double v9;
    long long v10;
    long long v11;
    long long v12;
    __SyntheticTypeUnknown v13;
    long long v14;
    long long v15;
    long long v16;
    long long v17 = 0L;
    long long v18 = v10;
    int v19 = 0;
    long long v20 = v11;
    long long v21 = v12;
    long long v22 = sub_404AE7(param0);
    double v23 = (double)0.0;
    while((unsigned int)v22 > v19) {
        sub_405C43(param0, (long long)v19);
        long long v24 = (unsigned long long)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v13) | ((unsigned long long)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v13 >>> 0x20X)) << 32);
        long long v25 = sub_42FB3D(v14, v15, v16);
        v2 = movlpd(v2, v24);
        if((unsigned int)v25) {
            v3 = movlpd(v3, v23);
            sub_41D4DE();
            v23 = v1;
        }
        else {
            v17 = 1L;
        }
        ++v19;
    }
    v4 = movlpd(v4, v23);
    long long v33 = movlpd(v5, 0x7ff0000000000000L);
    long long v26 = sub_41D67C();
    if(!(unsigned int)v26) {
        long long v34 = movlpd(0x7ff0000000000000L, 0x7ff8000000000000L);
        if(!(unsigned int)v17) {
            long long v35 = movlpd(v6, v23);
            long long v27 = sub_41D67C();
            double v28 = (double)0.0;
            if(!(unsigned int)v27) {
                __SyntheticTypeUnknown v29 = 0x0X;
                int v30 = 0;
                __SyntheticTypeUnknown v31 = 0x0X;
                while((unsigned int)v22 > v30) {
                    long long v32 = (long long)v30;
                    ++v30;
                    sub_40541C(param0, v32);
                    v28 /= v23;
                    v7 = movlpd(v7, (unsigned long long)v29);
                    v8 = movlpd(v8, (unsigned long long)v31);
                    v28 = v28 * v28 - v9;
                    v31 = (__SyntheticTypeUnknownU)((double)v0 + v28) | ((__SyntheticTypeUnknownU)(unsigned long long)(v0 >>> 0x40X) << 64);
                    v29 = (__SyntheticTypeUnknownU)((double)v0 + v28 - (double)v0 - v28) | ((__SyntheticTypeUnknownU)(unsigned long long)(v0 >>> 0x40X) << 64);
                }
                long long v36 = sqrtsd(v28, (unsigned long long)v31);
            }
        }
    }
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42AB6D(long long param0, long long param1, long long param2, long long param3) {
    int* ptr0;
    long long v0 = param3;
    sub_406FB2(param0);
    long long v1 = sub_4064DB();
    if(!(unsigned int)v1) {
        sub_405823();
        if(ptr0 && *ptr0 >>> 27 == 10) {
            sub_403883(param0, 0xffff006aL);
            sub_405181(param0);
            return sub_40541C(param0, 0xFFFFFFFFL);
        }
        sub_401C42(param0, "third_party/duktape/duk_bi_number.c", 0x6000019L, "number expected");
        return (long long)ptr0;
    }
    return sub_40541C(param0, 0xFFFFFFFFL);
}

long long sub_42ABE8(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = param3;
    long long v2 = sub_404AE7(param0);
    if(!(unsigned int)v2) {
        sub_406A68(param0, 0L);
    }
    sub_405C43(param0);
    sub_404B20(param0, 1L);
    long long v3 = sub_41DC85(param0);
    long long result = 1L;
    if((unsigned int)v3) {
        sub_406FB2(param0, v0);
        long long v4 = sub_405B41(param0, 0xFFFFFFFFL);
        *(int*)v4 = (*(int*)v4 & 0x7ffffff) | 0x50000000;
        sub_404FD6(param0, v0);
        sub_403E13(param0, 4261440000L);
        result = 0L;
    }
    return result;
}

long long sub_42AC70(long long param0, long long param1, long long param2, long long param3) {
    sub_42AB6D(param0, param1, param2, param3);
    return 1L;
}

void sub_42AC80() {
    // Decompilation error
}

void sub_42ACD0() {
    // Decompilation error
}

void sub_42AD58() {
    // Decompilation error
}

void sub_42ADD9() {
    // Decompilation error
}

void sub_42B0CF() {
    // Decompilation error
}

long long sub_42B130(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = sub_41DCD3(param0);
    sub_40405C(param0, 0L, v3 & 0xFFFFFFFFL, v0, v1, v2);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B155(long long param0) {
    long long v0;
    int* ptr0;
    long long v1 = sub_41DCD3(param0);
    long long v2 = sub_406103(param0, 0L);
    if(((unsigned int)v2 & 0x280)) {
        v0 = (v2 >>> 9L) & 0x1L ? 1L: (long long)((unsigned int)v1 ^ 0x1);
    }
    else {
        sub_405823();
        long long v3 = 1L;
        if(ptr0) {
            long long v4 = sub_4116DD(param0, ptr0, (long long)(unsigned int)v1);
            v3 = (unsigned int)v4 ? 1L: 0L;
        }
        v0 = v3 & 0xFFFFFFFFL;
    }
    sub_406955(param0, v0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B1CE(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_40869C(param0);
    sub_4037B9(param0, 82L);
    sub_404FD6(param0, v0, v1, v2);
    sub_41DA64(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B206(long long param0) {
    sub_40869C(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B277(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = param3;
    long long v5 = /*BAD_CALL!*/ sub_41DCD3(param0);
    if(!(unsigned int)v5) {
        sub_40869C(param0);
        goto loc_42B29D;
    }
    else if((((unsigned int)v5 - 1 ? 0: 1) || (unsigned int)v5 - 1 < 0 != ((((unsigned int)v5 - 1) ^ (unsigned int)v5) & (unsigned int)v5) < 0)) {
    loc_42B29D:
        sub_408290(param0, 0L, v1, param3, v2, v3);
    }
    int* ptr0 = *(unsigned long long*)(param0 + 104L);
    int v6 = *ptr0;
    switch(v6) {
        case 6: {
            v0 = *(long long*)(param0 + 200L);
            goto loc_42B2F2;
        }
        case 9: {
            v0 = *(long long*)(*(long long*)(ptr0 + 2) + 32L);
        loc_42B2F2:
            if(v0) {
                sub_407C45(param0, v0);
            }
            else {
                sub_40691D(param0, 0L, (long long)ptr0);
            }
            return 1L;
        }
        case 10: {
            v0 = *(long long*)(param0 + 496L);
            goto loc_42B2F2;
        }
        default: {
            sub_401D12(param3, 362L);
            return 0L;
        }
    }
}

long long sub_42B30A(long long param0, char* param1) {
    long long v0;
    char* ptr0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v2;
    long long v7 = /*BAD_CALL!*/ sub_41DCD3(param0);
    if(!(unsigned int)v7) {
        v0 = 0L;
        sub_406FB9(param0);
        sub_40500F(param0, 0L);
        long long v8 = sub_406117(param0, 1L, 68L, v3, v4);
        if((unsigned int)v8) {
            goto loc_42B398;
        }
    }
    else {
        if((unsigned int)v7 == 1) {
            sub_406117(param0, 0L, 2040L, v3, v4);
        }
        else {
            sub_408553(param0, 0L, 640L, v3, v4);
        }
        v0 = 1L;
        sub_406117(param0, 1L, 0x444L, v3, v4);
    loc_42B398:
        sub_405823();
        long long v9 = sub_406103(param0, 0L);
        if(!((unsigned int)v9 & 0x280)) {
            sub_405823();
            param1 = ptr0;
            if(!ptr0 || *(long long*)(ptr0 + 32L) == ptr0) {
            loc_42B40D:
                sub_404B20(param0, 1L);
                if((unsigned int)v7 == 2) {
                    sub_40699D(param0, v1, v5);
                }
                return v0 & 0xFFFFFFFFL;
            }
            char* ptr1 = ptr0;
            if((*param1 & 0x80)) {
                while(ptr1) {
                    if(ptr1 == param1) {
                        goto loc_42B424;
                    }
                    else {
                        ptr1 = *(unsigned long long*)(ptr1 + 32L);
                    }
                }
                sub_40DCFB(param0, (long long)param1, (long long)ptr0);
                goto loc_42B40D;
            }
        loc_42B424:
            if((unsigned int)v7 != 2) {
                v0 = 0L;
                sub_401D12(v3, 466L);
            }
            else {
                v0 = 1L;
                sub_4069DC(param0, (long long)param1, v5);
            }
        }
        else if(*(long long*)((unsigned long long)(((unsigned int)((unsigned int)v9 & 0x200) < 1 ? -1: 0) & 0x25) * 8L + param0 + 200L) != ptr0) {
            goto loc_42B424;
        }
        else {
            goto loc_42B40D;
        }
    }
    return v0 & 0xFFFFFFFFL;
}

void sub_42B457() {
    // Decompilation error
}

long long sub_42B50D(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = param3;
    long long v4 = sub_41DCD3(param0);
    if(!(unsigned int)v4) {
        sub_408290(param0, 0L, v0, param3, v1, v2);
    }
    sub_410761(param0, 0xfffffffeL, v0, param3, v1);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B541(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = param3;
    long long v3 = sub_41DCD3(param0);
    if(!(unsigned int)v3) {
        sub_405823();
    }
    else {
        v0 = sub_408553(param0, 0L, 640L, param3, v1);
    }
    sub_406955(param0, !v0 ? 0L: (long long)((*(int*)v0 >>> 7) & 0x1));
    return 1L;
}

void sub_42B590() {
    // Decompilation error
}

long long sub_42B68D(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = sub_41DCD3(param0);
    long long v7 = sub_406117(param0, 0L, (long long)((((unsigned int)v6 < 1 ? -1: 0) & 0x13e) + 640), v1, v2);
    if(!(unsigned int)v7) {
        long long v8 = sub_40582D(param0, 0L);
        *(int*)v8 = *(int*)v8 & 0xffffff7f;
        sub_40E4C4(param0, v8, v3, v1, v2);
    }
    if(!((unsigned int)v6 - 1)) {
        sub_40699D(param0, v4, v3);
    }
    return 1L;
}

long long sub_42B6EE(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    sub_406FB2(param0, param1);
    sub_40500F(param0, 0L);
    sub_408290(param0, 0L, v1, v2, v3, v4);
    sub_40661B(param0, 2L);
    long long v6 = sub_41DCD3(param0);
    sub_403E29(param0, 0L, (unsigned long long)((((unsigned int)v6 < 1 ? -1: 0) & 0xffffff80) + 310), v2, v3, v4);
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B745(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    int v6 = 10001;
    sub_406FB2(param0, param1);
    sub_408290(param0, 0xFFFFFFFFL, v1, v2, v3, v4);
    long long v7 = sub_40649F(param0, 0xFFFFFFFFL);
    while(!(unsigned int)v7) {
        sub_404F0A(param0, 0L);
        sub_410761(param0, 1L, 0L, v2, v3);
        long long v8 = sub_40649F(param0, 0xFFFFFFFFL);
        if(!(unsigned int)v8) {
            long long v9 = sub_41DCD3(param0);
            sub_40377C(param0, 0xFFFFFFFFL, (unsigned long long)((((unsigned int)v9 < 1 ? -1: 0) & 0xfffffff1) + 88));
            break;
        }
        else {
            sub_407D7E(param0);
            --v6;
            if(!v6) {
                sub_401CE2("prototype chain limit", 794L);
                return 0L;
            }
            sub_40447B(param0, 0xFFFFFFFFL, v1, v2, v3, v4);
            sub_40511F(param0, 0xfffffffeL);
            v7 = sub_40649F(param0, 0xFFFFFFFFL);
        }
    }
    return 1L;
}

void sub_42B80A() {
    // Decompilation error
}

long long sub_42B82B(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = param3;
    long long v3 = sub_404AE7(param0);
    if(!(unsigned int)v3) {
        sub_406F18(param0, 0L);
    }
    else {
        sub_406F59(param0, 0L, v0, param3);
    }
    sub_404B20(param0, 1L);
    long long v4 = sub_41DC85(param0);
    if((unsigned int)v4) {
        sub_407003(param0, 2281717888L, 36L, param3);
        sub_404FD6(param0, v1);
        sub_403E13(param0, 4261440000L);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B89E(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = param3;
    long long v4 = sub_41DCD3(param0);
    sub_406FB2(param0);
    int* ptr0 = (int*)sub_404A12(param0, 0xFFFFFFFFL);
    int v5 = *ptr0;
    if(v5 == 5) {
    loc_42B8EE:
        v0 = 1L;
        if((unsigned int)v4) {
            sub_408725(param0, 0xFFFFFFFFL);
        }
    }
    else if(v5 == 9 && **(unsigned long long*)(ptr0 + 2) >>> 27 == 17) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42B8EE;
    }
    else {
        v0 = 0L;
        sub_401D12(param3, 74L);
    }
    return v0 & 0xFFFFFFFFL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BAB2(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_406FB2(param0);
    sub_405AEC(param0, 0xFFFFFFFFL, 11L, v0, v1, v2);
    return sub_40500F(param0, 0L);
}

void sub_42BBFD() {
    // Decompilation error
}

void sub_42BC1E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BC5A(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_406FB2(param0);
    sub_406EC3(param0, &gvar_44246A, 1L);
    sub_40377C(param0, 0L, 44L);
    sub_404FF1(param0, v0, v1, v2);
    sub_40377C(param0, 0L, 48L);
    sub_408E52(param0, 4L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BCB8(long long param0) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long* ptr0 = &v0;
    sub_406FB2(param0);
    sub_40582D(param0, 0xFFFFFFFFL);
    long long v3 = sub_4037C1(param0, 0L, 27L, NULL);
    if((unsigned int)v3) {
        ptr0 = (long long*)((char*)&v0 + 1L);
        v0 & 0xFFL = 103;
    }
    long long v4 = sub_4037C1(param0, 0L, 45L, NULL);
    if((unsigned int)v4) {
        *(char*)ptr0 = 105;
        ptr0 = (long long*)((char*)ptr0 + 1L);
    }
    long long v5 = sub_4037C1(param0, 0L, 46L, NULL);
    if((unsigned int)v5) {
        *(char*)ptr0 = 109;
        ptr0 = (long long*)((char*)ptr0 + 1L);
    }
    *(char*)ptr0 = 0;
    sub_406D71(param0, (long long)&v0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BD48(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = param3;
    sub_406FB2(param0);
    long long v7 = sub_40582D(param0, 0xFFFFFFFFL, v2, param3, v3, v4);
    long long v8 = sub_41DCD3(param0);
    int v9 = (unsigned int)v8;
    if(*(int*)v7 >>> 27 == 11) {
        sub_403883(param0, 101L);
        sub_403883(param0, 98L);
        long long v10 = sub_40574F(param0, 0xFFFFFFFFL, v2, param3, v3, v4);
        v7 = (unsigned long long)*(char*)(v10 + 32L) | ((unsigned long long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
        sub_407D7E(param0);
        if(v9 == 1) {
            sub_406955(param0, (long long)(unsigned char)((unsigned int)v7 & 0x2));
        }
        else if(v9 == 2) {
            v0 = (long long)(unsigned char)((unsigned int)v7 & 0x4);
            sub_406955(param0, v0);
            v9 = 1;
            return (unsigned long long)v9;
        }
        else if(v9) {
            v9 = 1;
        }
        else {
            v0 = (long long)((unsigned int)v7 & 0x1);
            sub_406955(param0, v0);
            v9 = 1;
            return (unsigned long long)v9;
        }
    }
    else {
        if(*(long long*)(param0 + 304L) != v7) {
            sub_401D12(param3, 189L);
        }
        else if(v9 == 16) {
            sub_406EC3(param0, "(?:)", 4L);
            v9 = 1;
            return (unsigned long long)v9;
        }
        v9 = 0;
    }
    return (unsigned long long)v9;
}

long long sub_42BE33(long long param0, int param1) {
    long long v0;
    char* ptr0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v4;
    int v10 = 0;
    long long v11 = sub_404AE7(param0);
    sub_41CF97(param0, (long long)&ptr0, (long long)(unsigned int)v11);
    while((unsigned int)v11 > v10) {
        if(param1) {
            unsigned int v12 = 0;
            sub_405C43(param0);
            long long v13 = sub_41D5D5(&v12);
            if(!(unsigned int)v13 || v12 > 0x10ffff) {
                sub_401CE2("invalid args", 201L);
                return 0L;
            }
            if((unsigned long long)(long long*)(v1 - (long long)ptr0) <= 5L) {
                sub_41CFE2(param0, (long long)&ptr0, 6L, v5);
            }
            v0 = sub_41C6FA(v12, ptr0);
        }
        else {
            long long v14 = sub_405E64(param0, (long long)v10, v6, v5);
            if((unsigned long long)(long long*)(v1 - (long long)ptr0) <= 6L) {
                sub_41CFE2(param0, (long long)&ptr0, 7L, v5);
            }
            v0 = sub_41C531((unsigned long long)(unsigned int)v14, (long long)ptr0);
        }
        ++v10;
        ptr0 = &ptr0[(long long)(unsigned int)v0];
    }
    sub_41D054(param0, (long long)&ptr0);
    sub_406BF4(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BF57(long long param0, int* param1, long long* param2, int param3, int param4) {
    char v0;
    long long v1;
    int v2;
    int v3 = param3;
    long long v4 = v1;
    long long v5 = (long long)*(int*)(param2 + 3);
    int v6 = param4;
    *(int*)&v0 = (unsigned int)v5;
    if(!((unsigned int)v5 ? 0: 1) && (unsigned int)v5 >= 0) {
        long long* ptr0 = param2;
        long long v7 = sub_40D015(param0, param1, (long long)v3, v5);
        char* ptr1 = (char*)((long long*)((long long)(unsigned int)v7 + (long long)param1) + 4);
        param2 = (long long*)((unsigned long long)param1[6] + (long long)param1) + 4;
        unsigned long long v8 = (unsigned long long)*(int*)&v0;
        char v9 = *(char*)(ptr0 + 4);
        long long* ptr2 = param2;
        while((unsigned long long)param2 >= (unsigned long long)ptr1 && (unsigned long long)(long long*)(param1 + 8) <= (unsigned long long)ptr1) {
            v5 = (unsigned long long)*ptr1 | ((unsigned long long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v5 == v9 && (unsigned long long)(long long*)((long long)param2 - (long long)ptr1) >= v8) {
                v0 = (unsigned char)v5;
                sub_43AA7D();
                v5 = (unsigned long long)v0 | ((unsigned long long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                if(!v2) {
                    return (unsigned long long)v3;
                }
            }
            v5 = (long long)((unsigned int)v5 & 0xffffffc0);
            if(!v6) {
                if((unsigned char)v5 != 128) {
                    ++v3;
                }
                ++ptr1;
            }
            else {
                if((unsigned char)v5 != 128) {
                    --v3;
                }
                --ptr1;
            }
        }
        v3 = -1;
    }
    return (unsigned long long)v3;
}

void sub_42C020() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C059(long long param0) {
    long long result;
    long long v0;
    int* ptr0 = sub_4060B0();
    long long v1 = param0;
    if((unsigned int)ptr0 != 11) {
        return sub_408998(param0, 0L);
    }
    sub_401D12(v0, 31L);
    return result;
}

long long sub_42C090(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = sub_404AE7(param0);
    if(!(unsigned int)v3) {
        sub_407963(param0);
    }
    else {
        long long v4 = sub_408A2B(param0, 0L);
        if(((*(int*)v4 >>> 9) & 0x1)) {
            long long v5 = sub_41DC85(param0);
            if(!(unsigned int)v5) {
                sub_408C36(param0, v4);
                sub_405057(param0, 0L, v0, v1);
            }
        }
    }
    sub_408725(param0, 0L);
    sub_404B20(param0, 1L);
    long long v6 = sub_41DC85(param0);
    if((unsigned int)v6) {
        sub_407003(param0, 0x60804080L, 10L, v1);
        sub_404FD6(param0, v2);
        sub_403E13(param0, 4261440000L);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C148(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = param3;
    sub_406FB2(param0);
    int* ptr0 = (int*)sub_404A12(param0, 0xFFFFFFFFL);
    long long v3 = (long long)*ptr0;
    if(*ptr0 == 8) {
    loc_42C18F:
        sub_4057BB(param0, 0xFFFFFFFFL, v3, param3, v0, v1);
        result = 1L;
    }
    else if((unsigned int)v3 == 9 && **(unsigned long long*)(ptr0 + 2) >>> 27 == 12) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42C18F;
    }
    else {
        sub_401D12(param3, 0x112L);
        result = 0L;
    }
    return result;
}

long long sub_42C1B4(long long param0) {
    sub_408A0E(param0);
    long long v0 = sub_405DB7(param0, 0L);
    sub_409057(param0, 0xFFFFFFFFL, (unsigned long long)(unsigned int)v0, (unsigned long long)(unsigned int)v0 + 1L);
    return 1L;
}

long long sub_42C1E9(long long param0) {
    long long result;
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = sub_408A0E(param0);
    long long v5 = sub_40314F(v4, v1, v2, v3);
    long long v6 = sub_405FB5(param0, 0L, 0L, (v5 - 1L) & 0xFFFFFFFFL, (long long)&v0);
    long long v7 = sub_41DCD3(param0);
    if(v0) {
        result = 0L;
        if(!(unsigned int)v7) {
            sub_406B26(param0, v1, v2);
            return 1L;
        }
    }
    else {
        long long v8 = sub_41176B(param0, (int*)v4, (long long)(unsigned int)v6, v7 & 0xFFFFFFFFL);
        sub_406AAF(param0, v8 & 0xFFFFFFFFL);
        result = 1L;
    }
    return result;
}

long long sub_42C269(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = sub_408A0E(param0);
    long long v8 = sub_40314F(v7, v2, v3, v4);
    int v9 = (unsigned int)v8;
    long long v10 = sub_406077(param0, 0L, 0L, v8 & 0xFFFFFFFFL);
    int v11 = (unsigned int)v10;
    long long v12 = sub_40649F(param0, 1L);
    if(!(unsigned int)v12) {
        long long v13 = sub_406077(param0, 1L, 0L, v8 & 0xFFFFFFFFL);
        v9 = (unsigned int)v13;
    }
    if(v9 < v11) {
        int v14 = v11;
        v11 = v9;
        v9 = v14;
    }
    sub_409057(param0, 0xFFFFFFFFL, (unsigned long long)v11, (unsigned long long)v9);
    return 1L;
}

long long sub_42C2EB(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = v0;
    sub_406FB2(param0, param1);
    sub_4089F1(param0, param1);
    long long v7 = sub_40314F(v1, param1, v3, v4);
    int v8 = (unsigned int)v7;
    long long v9 = sub_406077(param0, 0L, (long long)(0 - (unsigned int)v7), v7 & 0xFFFFFFFFL);
    long long v10 = v9 & 0xFFFFFFFFL;
    if((unsigned int)v9 < 0) {
        v10 = (unsigned long long)((unsigned int)v7 + (unsigned int)v10);
    }
    long long v11 = sub_40649F(param0, 1L);
    if(!(unsigned int)v11) {
        long long v12 = sub_406077(param0, 1L, 0L, (long long)((unsigned int)v7 - (unsigned int)v10));
        v8 = (unsigned int)v12 + (unsigned int)v10;
    }
    sub_409057(param0, 0xFFFFFFFFL, (unsigned long long)(unsigned int)v10, (unsigned long long)v8);
    return 1L;
}

long long sub_42C375(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = param3;
    long long v5 = sub_408A0E(param0);
    long long v6 = sub_40314F(v5, v1, v2, param3);
    int v7 = (unsigned int)v6;
    long long v8 = sub_406077(param0, 0L, (long long)(0 - (unsigned int)v6), v6 & 0xFFFFFFFFL);
    int v9 = (unsigned int)v8;
    if((unsigned int)v8 < 0) {
        v9 += (unsigned int)v6;
    }
    long long v10 = sub_40649F(param0, 1L);
    if(!(unsigned int)v10) {
        long long v11 = sub_406077(param0, 1L, (long long)(0 - (unsigned int)v6), v6 & 0xFFFFFFFFL);
        v7 = (unsigned int)v11;
        if((unsigned int)v11 < 0) {
            v7 += (unsigned int)v6;
        }
    }
    sub_409057(param0, 0xFFFFFFFFL, (unsigned long long)v9, v7 > v9 ? (unsigned long long)v7: (unsigned long long)v9);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C40D(long long param0) {
    long long v0;
    long long v1;
    long long v2 = sub_41DCD3(param0);
    sub_408A0E(param0);
    sub_41CB8C(param0, (long long)(unsigned int)v2, v0, v1);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C43E(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = sub_41DCD3(param0);
    long long v6 = sub_408A0E(param0);
    long long v7 = sub_40314F(v6, v1, v2, v3);
    int v8 = (unsigned int)v7;
    long long v9 = v7;
    long long v10 = sub_408998(param0, 0L);
    sub_405C43(param0);
    long long v11 = /*BAD_CALL!*/ sub_4064EF();
    if(!(unsigned int)v5 || !(unsigned int)v11) {
        long long v12 = sub_406077(param0, 1L, 0L, v7);
        v8 = (unsigned int)v12;
    }
    long long v13 = sub_42BF57(param0, (int*)v6, (long long*)v10, (long long)v8, (long long)(unsigned int)v5);
    sub_406A68(param0, v13 & 0xFFFFFFFFL);
    return 1L;
}

void sub_42C4EA() {
    // Decompilation error
}

void sub_42CB67() {
    // Decompilation error
}

void sub_42CEE9() {
    // Decompilation error
}

void sub_42CF4B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D07D(long long param0) {
    sub_408A0E(param0);
    sub_40500F(param0, 0L);
    long long v0 = sub_404AE7(param0);
    sub_408E52(param0, v0 & 0xFFFFFFFFL);
    return 1L;
}

long long sub_42D0B2(long long param0) {
    sub_408A0E(param0);
    sub_4090EA(param0, 0L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D0D5(long long param0, long long param1, long long param2) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = sub_408A0E(param0);
    unsigned long long min = (unsigned long long)*(int*)(v6 + 24L);
    sub_405C43(param0);
    long long v7 = sub_41D385();
    if(!(unsigned int)v7) {
        long long v8 = /*BAD_CALL!*/ sub_405483(param0, 0L, v0, v3, v4);
        if((unsigned int)v8 < 0) {
            sub_401CE2("invalid args", 1480L);
            return 0L;
        }
        unsigned long long v9 = (unsigned long long)((long long)(unsigned int)v8 * min);
        if((unsigned int)v8) {
            param2 = (long long)(v9 % (unsigned long long)(long long)(unsigned int)v8);
            if(v9 / (unsigned long long)(long long)(unsigned int)v8 != min) {
                sub_401CE2("invalid args", 1480L);
                return 0L;
            }
        }
        long long v10 = sub_4076DF(param0, v9, param2, (long long)(unsigned int)v8);
        long long v11 = v10 + v9;
        long long v12 = v10;
        unsigned long long i;
        for(i = (unsigned long long)(v11 - v12); i > min; i = (unsigned long long)(v11 - v12)) {
            sub_43AAA0(v3, (long long)min);
            v12 += min;
            min = (unsigned long long)(v12 - v1);
        }
        sub_43AAA0(v3, (long long)i);
        sub_406BF4(param0, 0xFFFFFFFFL);
        result = 1L;
    }
    else {
        sub_401CE2("invalid args", 1480L);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D19A(long long param0) {
    int v0;
    int v1;
    long long v2;
    long long v3 = v2;
    long long v4 = sub_408A0E(param0);
    long long v5 = sub_408998(param0, 0L);
    unsigned long long v6 = (unsigned long long)*(int*)(v4 + 24L);
    unsigned long long v7 = (unsigned long long)*(int*)(v5 + 24L);
    sub_43AA7D();
    long long v8 = 0xFFFFFFFFL;
    if(v0 >= 0) {
        if(!v1) {
            char v9 = v7 == v6;
            if(v7 <= v6 && !v9) {
                v8 = 1L;
                sub_406A68(param0, v8);
                return 1L;
            }
            v8 = (unsigned long long)(0 - (v9 ? 0: 1));
        }
        else {
            v8 = 1L;
        }
    }
    sub_406A68(param0, v8);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D20E(long long param0) {
    unsigned long long v0;
    long long v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v5;
    long long v8 = sub_408A0E(param0);
    long long v9 = sub_42C059(param0);
    long long v10 = sub_41DCD3(param0);
    long long v11 = (unsigned long long)*(int*)(v9 + 24L);
    long long v12 = sub_40649F(param0, 1L);
    if(!(unsigned int)v12) {
        long long v13 = sub_40314F(v8, v3, v6, v4);
        long long v14 = sub_406077(param0, 1L, 0L, v13);
        unsigned long long v15 = (unsigned long long)(v8 + 32L);
        if((unsigned int)v10) {
            v15 -= v11;
        }
        unsigned long long v16 = v15;
        long long v17 = sub_40D015(param0, v8, v14 & 0xFFFFFFFFL);
        v0 = (unsigned long long)((v17 & 0xFFFFFFFFL) + v16);
    loc_42D2B0:
        if((unsigned long long)(v8 + 32L) <= v0) {
        loc_42D2C8:
            if(v0 - (unsigned long long)(v8 + 32L) + v11 <= (unsigned long long)*(int*)(v8 + 24L)) {
                sub_43AA7D();
                v1 = v2 ? 0L: 1L;
                sub_406955(param0, v1);
                return 1L;
            }
        }
        v1 = 0L;
    }
    else if((unsigned int)v10) {
        v0 = (unsigned long long)((unsigned long long)*(int*)(v8 + 24L) - v11 + v8 + 32L);
        goto loc_42D2B0;
    }
    else {
        v0 = (unsigned long long)(v8 + 32L);
        goto loc_42D2C8;
    }
    sub_406955(param0, v1);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D2FE(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    int* ptr0 = (int*)sub_408A0E(param0);
    long long* ptr1 = (long long*)sub_42C059(param0);
    long long v5 = sub_40314F((long long)ptr0, v1, v2, v3);
    long long v6 = sub_406077(param0, 1L, 0L, v5);
    long long v7 = sub_42BF57(param0, ptr0, ptr1, v6 & 0xFFFFFFFFL, 0L);
    sub_406955(param0, (long long)(~(unsigned int)v7 >>> 31));
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_42D369(long long param0, int* param1) {
    int* result;
    int* ptr0;
    if(*param1 == 9) {
        result = (int*)(**(unsigned long long*)(param1 + 2) >>> 27);
        if(**(unsigned long long*)(param1 + 2) >>> 27 == 14) {
            sub_40E6B8();
            if(ptr0 && *ptr0 == 8) {
                result = *(unsigned long long*)(ptr0 + 2);
                if(!((*result >>> 9) & 0x1)) {
                    return NULL;
                }
            }
            else {
                result = NULL;
            }
            return result;
        }
    }
    else if(*param1 == 8) {
        result = *(unsigned long long*)(param1 + 2);
        if((*result >>> 9) & 0x1) {
            return result;
        }
    }
    return result;
}

void sub_42D3B3() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D4A7(long long param0) {
    int* ptr0 = sub_42D369(param0 + 64L, (int*)(*(long long*)(param0 + 104L) - 16L));
    long long result = 0xfffffffaL;
    int* ptr1 = ptr0;
    if(ptr0) {
        long long v0 = sub_41DCD3(param0);
        if(!(unsigned int)v0) {
            sub_408C36(param0, (long long)ptr0);
        }
        else {
            sub_407808(param0, (long long)ptr0);
        }
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D54A(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = param3;
    int* ptr0 = sub_42D369(param0 + 64L, (int*)(*(long long*)(param0 + 104L) - 16L));
    long long result = 0xfffffffaL;
    if(ptr0) {
        sub_407808(param0, (long long)ptr0);
        result = 1L;
    }
    return result;
}

void sub_42D78B() {
    // Decompilation error
}

long long sub_42D87C(long long param0, long long param1, long long param2) {
    sub_407C63(param0, param1, param2);
    return 1L;
}

long long sub_42D92B(long long* param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0 = param4;
    long long result = sub_41C85D(*param0);
    if((*(char*)(param0 + 1) & 0x2)) {
        result = sub_41CD28(*param0, result & 0xFFFFFFFFL);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long long sub_42D99B(long long* param0, char* param1, unsigned long long param2) {
    unsigned long long v0;
    char v1;
    unsigned long long result1;
    int v2;
    unsigned long long result1;
    unsigned int v3;
    long long v4;
    long long v5;
    char v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    unsigned int v16;
    int v17;
    unsigned int v18;
    unsigned int v19;
    unsigned int v20;
    long long v21;
    long long v22;
    long long v23;
    long long v24;
    long long v25 = (unsigned long long)v8 | ((unsigned long long)v7 << 32);
    long long v26 = v22;
    long long v27 = v23;
    long long v28 = v24;
    char* ptr0 = param1;
    unsigned long long result = param2;
    sub_4205E1();
    unsigned int v29 = *(unsigned int*)((char*)param0 + 60L);
    if(*(unsigned int*)(param0 + 8) <= v29) {
        v5 = "regexp executor recursion limit";
        v4 = 151L;
    loc_42D9F2:
        sub_401CE2(v5, v4);
    loc_42DF83:
        result1 = 0L;
    }
    else {
        *(int*)((char*)param0 + 60L) = v29 + 1;
    loc_42D9D8:
        do {
            do {
                v3 = *(unsigned int*)((char*)param0 + 68L);
                if(*(unsigned int*)(param0 + 9) > v3) {
                    *(int*)((char*)param0 + 68L) = v3 + 1;
                    char* ptr1 = ptr0;
                    ptr0 = ptr1 + 1L;
                    long long v30 = (unsigned long long)*ptr1;
                    if((unsigned char)((unsigned char)v30 + 0xFF) <= 18) {
                        switch((unsigned long long)((unsigned int)v30 - 1)) {
                            case 1: {
                                break;
                            }
                            case 2: {
                                v0 = (unsigned long long)sub_42D922((long long)param0, (long long)&result);
                                if((unsigned int)v0 < 0) {
                                    break loc_42D9D8;
                                }
                                else {
                                    v0 = (unsigned long long)sub_41CA82(v0 & 0xFFFFFFFFL);
                                    v6 = (unsigned int)v0 ? 0: 1;
                                    long long v31 = sub_42D8B3((long long)param0);
                                    ptr0 = (char*)((long long)(unsigned int)v31 + (long long)ptr0);
                                }
                                goto loc_42D9D8;
                            }
                            case 3: 
                            case 4: {
                                sub_42D8A3((long long)param0);
                                v23 = (unsigned long long)v10;
                                v0 = (unsigned long long)sub_42D922((long long)param0, (long long)&result);
                                if((unsigned int)v0 < 0) {
                                    break loc_42D9D8;
                                }
                                else {
                                    v8 = 0;
                                    while((unsigned int)v23) {
                                        sub_42D8A3((long long)param0);
                                        v2 = v11;
                                        sub_42D8A3((long long)param0);
                                        if((unsigned int)v0 >= v2) {
                                            v8 = (unsigned int)v0 <= v12 ? 1: v8;
                                        }
                                        v23 = (unsigned long long)((unsigned int)v23 - 1);
                                    }
                                    if((unsigned int)v30 == 4) {
                                        v1 = v8 ? 0: 1;
                                    }
                                    else {
                                        v6 = v8 ? 0: 1;
                                    }
                                    goto loc_42DB83;
                                }
                            }
                            case 5: {
                                long long v31 = sub_42D8B3((long long)param0);
                                ptr0 = (char*)((long long)(unsigned int)v31 + (long long)ptr0);
                                goto loc_42D9D8;
                            }
                            case 6: {
                                goto loc_42DBBA;
                            }
                            case 7: {
                                sub_42D8B3((long long)param0);
                                v0 = (unsigned long long)sub_42D99B();
                                if(v0) {
                                loc_42DD73:
                                    result = v0;
                                    *(int*)((char*)param0 + 60L) = *(int*)((char*)param0 + 60L) - 1;
                                    return result;
                                }
                                goto loc_42D9D8;
                            }
                            case 8: {
                                unsigned int v32 = 0;
                                sub_42D8A3((long long)param0);
                                sub_42D8A3((long long)param0);
                                sub_42D8B3((long long)param0);
                                do {
                                    if(v19 <= v32) {
                                        v0 = (unsigned long long)sub_42D99B();
                                        if(v0) {
                                            goto loc_42DD73;
                                        }
                                    }
                                    v0 = (unsigned long long)sub_42D99B();
                                    if(!v0) {
                                        break;
                                    }
                                    else {
                                        ++v32;
                                        result = v0;
                                    }
                                }
                                while(v18 >= v32);
                                break loc_42D9D8;
                            }
                            case 9: {
                                unsigned int v33 = 0;
                                sub_42D8A3((long long)param0);
                                sub_42D8A3((long long)param0);
                                v2 = v17;
                                sub_42D8A3((long long)param0);
                                sub_42D8B3((long long)param0);
                                while(v33 != v2) {
                                    v0 = (unsigned long long)sub_42D99B();
                                    if(!v0) {
                                    loc_42DD31:
                                        while(v20 <= v33) {
                                            v0 = (unsigned long long)sub_42D99B();
                                            if(v0) {
                                                goto loc_42DD73;
                                            }
                                            else if(v20 == v33) {
                                                break;
                                            }
                                            else {
                                                --v33;
                                                result = (unsigned long long)sub_42D8DE(*param0, (long long)&result, *(param0 + 2), *(param0 + 3), (unsigned long long)v15);
                                            }
                                        }
                                        break loc_42D9D8;
                                    }
                                    else {
                                        result = v0;
                                        ++v33;
                                    }
                                }
                                goto loc_42DD31;
                            }
                            case 10: {
                                sub_42D8A3((long long)param0);
                                if(*(unsigned int*)(param0 + 7) <= v16) {
                                    sub_401CB7(v21, 670L);
                                    goto loc_42DF83;
                                }
                                else {
                                    unsigned long long* ptr2 = *(unsigned long long*)(param0 + 6);
                                    long long v34 = *ptr2;
                                    *ptr2 = result;
                                    v0 = (unsigned long long)sub_42D99B();
                                    if(v0) {
                                        goto loc_42DD73;
                                    }
                                    else {
                                        **(unsigned long long*)(param0 + 6) = v34;
                                        break loc_42D9D8;
                                    }
                                }
                            }
                            case 11: {
                                sub_42D8A3((long long)param0);
                                sub_42D8A3((long long)param0);
                                if((unsigned int)(v13 + v14) > *(unsigned int*)(param0 + 7) || !v14) {
                                    sub_401CB7(v21, 670L);
                                    goto loc_42DF83;
                                }
                                else {
                                    sub_404E3A(*param0, 1L);
                                    sub_4076DF();
                                    sub_43AAA0(v21, (unsigned long long)v14 * 8L);
                                    sub_43ABE2((unsigned long long)v13 * 8L + *(param0 + 6), 0L, (long long)param2, v21);
                                    unsigned long long v35 = (unsigned long long)sub_42D99B();
                                    if(v35) {
                                        sub_40460F(*param0);
                                        result = v35;
                                        *(int*)((char*)param0 + 60L) = *(int*)((char*)param0 + 60L) - 1;
                                        return result;
                                    }
                                    sub_43AAA0(v21, (unsigned long long)v14 * 8L);
                                    sub_40460F(*param0);
                                    break loc_42D9D8;
                                }
                            }
                            case 15: {
                                unsigned long long v36 = result;
                                if(*(unsigned long long*)(param0 + 2) >= v36) {
                                    goto loc_42D9D8;
                                }
                                else if(!(*(char*)(param0 + 1) & 0x4)) {
                                    break loc_42D9D8;
                                }
                                else {
                                    long long v37 = sub_42D95C((long long)param0, (long long)v36);
                                    v0 = (unsigned long long)sub_41CA82(v37 & 0xFFFFFFFFL);
                                    v1 = (unsigned int)v0 ? 0: 1;
                                    goto loc_42DB83;
                                }
                            }
                            default: {
                                throw 0;
                            }
                        }
                        sub_42D8A3((long long)param0);
                        v0 = (unsigned long long)sub_42D922((long long)param0, (long long)&result);
                        v6 = (unsigned int)v0 == v9;
                    loc_42DBBA:
                        long long v38 = sub_42D8B3((long long)param0);
                        v0 = (unsigned long long)sub_42D99B();
                        if(v0) {
                            goto loc_42DD73;
                        }
                        else {
                            ptr0 = (char*)((long long)(unsigned int)v38 + (long long)ptr0);
                            goto loc_42D9D8;
                        }
                    }
                    else {
                        sub_401CB7(v21, 670L);
                        goto loc_42DF83;
                    }
                }
            }
            while(*(unsigned int*)(param0 + 9) > v3);
            v5 = "regexp step limit";
            v4 = 160L;
            goto loc_42D9F2;
        loc_42DB83:
            if(!v1) {
                goto loc_42D9D8;
            }
        }
        while(!v1 && v6);
        *(int*)((char*)param0 + 60L) = *(int*)((char*)param0 + 60L) - 1;
        goto loc_42DF83;
    }
    return result1;
}

void sub_42E2A2() {
    // Decompilation error
}

void sub_42E2A9() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E2BE(int* param0) {
    int v0 = *param0;
    return sub_41D673(&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E2DB(long long* param0) {
    long long v0;
    long long v1 = *param0;
    long long result = sub_41D667(&v1);
    v0 = movlpd(v0, v1);
    return result;
}

long long sub_42E330(unsigned long long* param0) {
    long long v0;
    long long v1 = v0;
    long long result = sub_42E2BE(*param0);
    *param0 = *param0 + 4L;
    return result;
}

long long sub_42E349(unsigned long long* param0) {
    long long v0;
    long long v1 = v0;
    long long result = sub_42E2DB(*param0);
    *param0 = *param0 + 8L;
    return result;
}

long long sub_42E452(char** param0, unsigned int param1) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_41C6FA(param1, param0[0]);
    param0[0] = &param0[0][(long long)(unsigned int)v2];
    return (long long)(unsigned int)v2;
}

long long sub_42E46E(char* param0, char* param1) {
    int v0 = ((unsigned int)*param0 * 0x100 + (unsigned int)*(param0 + 1L)) * 0x100;
    int v1 = (unsigned int)*(param0 + 2L) + v0;
    long long v2 = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)((v0 >>> 12) & 0x3f)] | ((unsigned long long)(((unsigned long long)((v0 >>> 12) & 0x3f) >>> 8L) & 0xffffffffffffffL) << 8);
    *param1 = aABCDEFGHIJKLMNO[(unsigned long long)(v0 >>> 18)];
    *(param1 + 1L) = (unsigned char)v2;
    long long result = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)((v1 >>> 6) & 0x3f)] | ((unsigned long long)(((unsigned long long)((v1 >>> 6) & 0x3f) >>> 8L) & 0xffffffffffffffL) << 8);
    *(param1 + 2L) = aABCDEFGHIJKLMNO[(unsigned long long)((v1 >>> 6) & 0x3f)];
    result = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)(v1 & 0x3f)] | ((unsigned long long)((result >>> 8L) & 0xffffffffffffffL) << 8);
    *(param1 + 3L) = (unsigned char)result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E4BF(long long param0, long long param1, long long* param2) {
    int v0;
    long long* ptr0 = param2;
    int v1 = (unsigned int)param1;
    long long v2 = param0;
    long long* ptr1 = sub_405573(param0, param1, param2, 0L, 0L, 0L, &v0);
    return v0 ? (long long)(ptr1 ? ptr1: ptr0): sub_408821(v2, (long long)v1, (long long)ptr0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E507(long long param0, long long param1) {
    long long result;
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v2;
    long long v9 = sub_40480A(param0, param1);
    long long v10 = sub_42E4BF(param0, v9 & 0xFFFFFFFFL, &v0);
    if(v0 > 0xbffffffdL) {
        sub_401C42(param0, "third_party/duktape/duk_api_codec.c", 0x6000286L, "base64 encode failed");
        result = 0L;
    }
    else {
        long long v11 = sub_4076DF(param0, (v0 + 2L) / 3L * 4L, (long long)((v0 + 2L) % 3L), 3L);
        unsigned long long v12 = v0;
        char* ptr0 = (char*)v11;
        if(v12 > 15L) {
            char* ptr1 = ptr0;
            char* ptr2 = (char*)v10;
            long long v13 = v12 / 12L * 12L + v10;
            do {
                sub_42E46E(ptr2, ptr1);
                sub_42E46E((char*)(v3 + 3L), ptr1 + 4L);
                sub_42E46E((char*)(v3 + 6L), ptr1 + 8L);
                char* ptr3 = ptr1 + 12L;
                ptr1 += 16L;
                sub_42E46E((char*)(v3 + 9L), ptr3);
                ptr2 = (char*)(v3 + 12L);
            }
            while(ptr2 != v13);
            long long v14 = (((((v7 - 12L) >>> 2) * 0x2aaaaaaaaaaaaaabL) & 0x3fffffffffffffffL) + 1L) * 12L;
            ptr0 = (char*)((((((v7 - 12L) >>> 2) * 0x2aaaaaaaaaaaaaabL) & 0x3fffffffffffffffL) + 1L) * 16L + v4);
            v10 += v14;
            v12 = (unsigned long long)(v5 - v14);
        }
        long long v15 = v10 + v12;
        char* i;
        for(i = (char*)(v15 - v12); v12 > 2L; i = (char*)(v15 - v12)) {
            sub_42E46E(i, ptr0);
            ptr0 = (char*)(v4 + 4L);
            v12 = (unsigned long long)(v5 - 3L);
        }
        if(v12 == 1L) {
            long long v16 = (unsigned long long)i[0];
            *(short*)&ptr0[2] = 15677;
            long long v17 = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)(((unsigned int)v16 * 16) & 0x30)] | ((unsigned long long)(((unsigned long long)(((unsigned int)v16 * 16) & 0x30) >>> 8L) & 0xffffffffffffffL) << 8);
            ptr0[0] = aABCDEFGHIJKLMNO[(unsigned long long)((unsigned int)v16 >>> 2)];
            ptr0[1] = (char)v17;
        }
        else if(v12 == 2L) {
            long long v18 = (unsigned long long)i[0];
            long long v19 = (unsigned long long)i[1];
            ptr0[3] = '=';
            int v20 = (unsigned int)v18 * 0x100 + (unsigned int)v19;
            ptr0[0] = aABCDEFGHIJKLMNO[(unsigned long long)(unsigned int)((v18 >>> 2L) & 0x3fffffL)];
            ptr0[1] = aABCDEFGHIJKLMNO[(unsigned long long)((v20 >>> 4) & 0x3f)];
            ptr0[2] = aABCDEFGHIJKLMNO[(unsigned long long)((v20 * 4) & 0x3c)];
        }
        long long v21 = sub_406BF4(param0, 0xFFFFFFFFL);
        sub_405057(param0, (unsigned long long)(unsigned int)v9, v1, v6);
        result = v21;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E6E3(long long param0, long long param1) {
    long long result;
    long long i;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v6;
    long long v8 = v3;
    long long v9 = sub_40480A(param0, param1);
    long long v10 = sub_42E4BF(param0, v9 & 0xFFFFFFFFL, &v2);
    char* ptr0 = (char*)sub_40762B(param0, (v2 >>> 2) * 3L + 6L, 1L);
    char* ptr1 = ptr0;
    unsigned long long v11 = (unsigned long long)(v10 + v2);
alab1:
    while(1) {
        if(v11 - 8L >= (unsigned long long)v10) {
            int v12 = ((((((int)*(char*)((unsigned long long)*(char*)v10 + 4466304L) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 1L) + 4466304L)) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 2L) + 4466304L)) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 3L) + 4466304L);
            int v13 = ((((((int)*(char*)((unsigned long long)*(char*)(v10 + 4L) + 4466304L) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 5L) + 4466304L)) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 6L) + 4466304L)) * 64) | (int)*(char*)((unsigned long long)*(char*)(v10 + 7L) + 4466304L);
            *ptr1 = (unsigned char)(v12 >>> 16);
            *(short*)(ptr1 + 1L) = __rol__((unsigned short)v12, 8);
            *(ptr1 + 3L) = (unsigned char)(v13 >>> 16);
            *(short*)(ptr1 + 4L) = __rol__((unsigned short)v13, 8);
            if((v13 | v12) >= 0) {
                v1 = v10 + 8L;
                ptr1 += 6L;
                goto loc_42E7F8;
            }
            else if(v12 >= 0) {
                v10 += 4L;
                ptr1 += 3L;
            }
        }
        unsigned int v14 = 1;
        while((unsigned long long)v10 < v11) {
            v1 = v10 + 1L;
            v0 = (long long)(int)*(char*)((unsigned long long)*(char*)v10 + 4466304L);
            if((unsigned int)v0 >= 0) {
                v14 = (unsigned int)(v14 * 64 + (unsigned int)v0);
                if(v14 <= 0xffffff) {
                    goto loc_42E829;
                }
                else {
                    i = 0L;
                    goto loc_42E859;
                }
            }
            else if((unsigned int)v0 == -1) {
            loc_42E829:
                v10 = v1;
            }
            else if((unsigned int)v0 != -2) {
                break alab1;
            }
            else {
                break;
            }
        }
        for(i = 0L; v14 <= 0xffffff; i = (unsigned long long)((unsigned int)i + 1)) {
            v14 *= 64;
        }
        v1 = v10;
    loc_42E859:
        *(short*)(ptr1 + 1L) = (unsigned short)(unsigned char)(v14 >>> 8) | ((unsigned short)(unsigned char)v14 << 8);
        long long v15 = (long long)*(unsigned char*)((long long)&gvar_442660 + i);
        *ptr1 = (unsigned char)(v14 >>> 16);
        if((unsigned char)v15 < 0) {
            break;
        }
        else {
            ptr1 = (char*)(v15 + (long long)ptr1);
            while((unsigned long long)v1 < v11) {
                v0 = v1 + 1L;
                if((unsigned int)((int)*(char*)((unsigned long long)*(char*)v1 + 4466304L) + 2) > 1) {
                    goto loc_42E7F8;
                }
                else {
                    v1 = v0;
                }
            }
            sub_41D79F(param0, 0xFFFFFFFFL, (unsigned long long)((long long)ptr1 - (long long)ptr0));
            return sub_405057(param0, (unsigned long long)(unsigned int)v9, v5, v4);
        loc_42E7F8:
            v10 = v1;
        }
    }
    sub_401C42(param0, "third_party/duktape/duk_api_codec.c", 0x60002acL, "base64 decode failed");
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E8D0(long long param0, long long param1) {
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = sub_40480A(param0, param1);
    long long v6 = sub_42E4BF(param0, v5 & 0xFFFFFFFFL, &v0);
    long long v7 = sub_4076DF(param0, v0 * 2L, v1, v3);
    unsigned long long v8 = 0L;
    while((unsigned long long)((unsigned int)v0 & 0xfffffffc) > v8) {
        v7 += 8L;
        *(short*)(v7 - 8L) = *(short*)((unsigned long long)*(char*)(v8 + v6) * 2L + 4452032L);
        *(short*)(v7 - 6L) = *(short*)((unsigned long long)*(char*)(v8 + v6 + 1L) * 2L + 4452032L);
        *(short*)(v7 - 4L) = *(short*)((unsigned long long)*(char*)(v8 + v6 + 2L) * 2L + 4452032L);
        long long v9 = (unsigned long long)*(char*)(v8 + v6 + 3L);
        v8 += 4L;
        *(short*)(v7 - 2L) = *(short*)(v9 * 2L + 4452032L);
    }
    while(v8 < v0) {
        unsigned long long v10 = (unsigned long long)*(char*)(v8 + v6);
        v7 += 2L;
        ++v8;
        *(short*)(v7 - 2L) = *(short*)(v10 * 2L + 4452032L);
    }
    long long result = sub_406BF4(param0, 0xFFFFFFFFL);
    sub_405057(param0, (unsigned long long)(unsigned int)v5, v1, v3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E9AD(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0;
    long long result;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = v5;
    long long v8 = v3;
    long long v9 = sub_40480A(param0, param1);
    long long v10 = sub_42E4BF(param0, v9 & 0xFFFFFFFFL, &v0);
    unsigned long long v11 = (unsigned long long)((unsigned int)v0 & 0x1);
    if(!((unsigned int)v0 & 0x1)) {
        long long v12 = sub_4076DF(param0, v0 >>> 1, v1, v2);
        while((unsigned long long)((unsigned int)v0 & 0xfffffff8) > v11) {
            v12 += 4L;
            int v13 = (int)*(short*)((unsigned long long)*(char*)(v10 + v11) * 2L + 4452544L) | (int)*(char*)((unsigned long long)*(char*)(v10 + v11 + 1L) + 4514600L);
            *(char*)(v12 - 4L) = (unsigned char)v13;
            int v14 = (int)*(short*)((unsigned long long)*(char*)(v10 + v11 + 2L) * 2L + 4452544L) | (int)*(char*)((unsigned long long)*(char*)(v10 + v11 + 3L) + 4514600L);
            *(char*)(v12 - 3L) = (unsigned char)v14;
            int v15 = (int)*(short*)((unsigned long long)*(char*)(v10 + v11 + 4L) * 2L + 4452544L) | (int)*(char*)((unsigned long long)*(char*)(v10 + v11 + 5L) + 4514600L);
            *(char*)(v12 - 2L) = (unsigned char)v15;
            param3 = (unsigned long long)((int)*(short*)((unsigned long long)*(char*)(v10 + v11 + 6L) * 2L + 4452544L) | (int)*(char*)((unsigned long long)*(char*)(v10 + v11 + 7L) + 4514600L));
            *(char*)(v12 - 1L) = (unsigned char)param3;
            param2 = (unsigned long long)((unsigned int)param3 | v14 | v15 | v13);
            if((param2 >>> 31L) & 0x1L) {
                sub_401C42(param0, "third_party/duktape/duk_api_codec.c", 100664142L, "hex decode failed");
                return result;
            }
            v11 += 8L;
        }
        while(v11 < v0) {
            param3 = (unsigned long long)(int)*(char*)((unsigned long long)*(char*)(v10 + v11 + 1L) + 4514600L);
            param2 = (unsigned long long)(((int)*(char*)((unsigned long long)*(char*)(v10 + v11) + 4514600L) * 16) | (unsigned int)param3);
            if((param2 >>> 31L) & 0x1L) {
                sub_401C42(param0, "third_party/duktape/duk_api_codec.c", 100664142L, "hex decode failed");
                return result;
            }
            *(char*)v12 = (unsigned char)param2;
            v11 += 2L;
            ++v12;
        }
        sub_405057(param0, (unsigned long long)(unsigned int)v9, param2, param3);
    }
    else {
        sub_401C42(param0, "third_party/duktape/duk_api_codec.c", 100664142L, "hex decode failed");
    }
    return result;
}

void sub_42EAF5() {
    // Decompilation error
}

void sub_42EB3A() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42ED6F(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = param3;
    long long v2 = sub_412200(param0, param1);
    if(!v2) {
        return sub_4068D1(param0, param1, v1);
    }
    sub_40779C(param0, param1, v0, param3);
    long long v3 = sub_412000(param0, v2);
    sub_406883(param0, v2);
    sub_406AAF(param0, (unsigned long long)(unsigned int)v3);
    sub_403A07(param0, 0xfffd005aL);
    long long v4 = sub_4202D0(param0, 0xFFFFFFFFL, (unsigned int)v3);
    long long result = sub_406AAF(param0, v4 & 0xFFFFFFFFL);
    sub_403A07(param0, 0xfffd005bL);
    sub_403A07(param0, 0xfffe0085L);
    return result;
}

void sub_4302DD(int param0) {
    long long v0;
    long long v1;
    v1 = movlpd(v1, 0xbff0000000000000L);
    if(!param0) {
        (unsigned long long)v2 = movlpd(v0, 0x3ff0000000000000L);
    }
    (unsigned long long)v2 = movlpd(v0, v0);
}

long long sub_430355(long long param0) {
    long long result = 0L;
    if(((unsigned int)(param0 >>> 52) & 0x7ff) > 1022) {
        result = 2L;
        if(((unsigned int)(param0 >>> 52) & 0x7ff) <= 0x433) {
            result = ~(-1L << ((unsigned long long)(0x433 - ((unsigned int)(param0 >>> 52) & 0x7ff)) & 0x3fL)) & param0 ? 0L: (unsigned long long)(2 - ((unsigned int)(param0 >>> ((unsigned long long)(0x433 - ((unsigned int)(param0 >>> 52) & 0x7ff)) & 0x3fL)) & 0x1));
        }
    }
    return result;
}

void sub_431925() {
    // Decompilation error
}

void sub_431ABE() {
    // Decompilation error
}

void sub_431B90() {
    // Decompilation error
}

long long sub_431C16(char* param0, long long param1, long long param2) {
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
loc_431C2A:
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
                if((unsigned char)param1 != 2 && (((unsigned char)param1 + 0xFF) || (unsigned char)param2 != 10)) {
                    v6 = (unsigned long long)((unsigned int)v6 + 1);
                    goto loc_431C2A;
                }
            }
            param2 = *(long long*)(v10 + 48L);
            if(param2) {
                v2 = param2(v12);
                goto loc_431C8C;
            }
            if((unsigned int)v12 != v11) {
                v6 = (unsigned long long)((unsigned int)v6 + 1);
                goto loc_431C2A;
            }
            else {
                v2 = sub_431CDA(v10);
            loc_431C8C:
                v1 = (unsigned int)v2;
                if((unsigned int)v2 != -1) {
                    v6 = (unsigned long long)((unsigned int)v6 + 1);
                    goto loc_431C2A;
                }
                else {
                    long long v13 = sub_431E0F(v10);
                    if((long long)(unsigned int)v13 == gvar_44EBC8) {
                        goto loc_431C2A;
                    }
                    else {
                        v0 = sub_431E05(v10);
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v14 = (unsigned int)gvar_44EC20;
                *(unsigned int*)(v10 + 8L) = (unsigned int)gvar_44EC20;
                gvar_453D68 = v14;
            }
            return (unsigned long long)v1;
        }
    }
    while((unsigned char)param2);
    v1 = (unsigned int)v6 + 1;
    return (unsigned long long)v1;
}

long long sub_431CDA(long long param0) {
    return sub_431CE2(param0, -1);
}

long long sub_431CE2(long long param0, int param1) {
    if(!param1) {
        param1 = -1;
    }
    int v0 = *(int*)(param0 + 8L);
    *(int*)(param0 + 8L) = v0 <= 0 ? param1: v0;
    if(param1 > 0) {
        gvar_453D68 = param1;
    }
    return -1L;
}

void sub_431D03() {
    // Decompilation error
}

void sub_431DD4() {
    // Decompilation error
}

long long sub_431E05(long long param0) {
    return *(int*)(param0 + 8L) == -1 ? 1L: 0L;
}

long long sub_431E0F(long long param0) {
    return *(int*)(param0 + 8L) < 0 ? 0L: (unsigned long long)*(int*)(param0 + 8L);
}

long long sub_431E1D(long long param0) {
    return sub_431CE2(param0, gvar_453D68);
}

void sub_431EA0(long long param0, long long param1) {
}

void sub_431EA9() {
    // Decompilation error
}

int sub_431EF7(char* param0) {
    int result;
    long long v0 = 0L;
    int v1 = (int)*param0 >> 31;
    do {
        long long v2 = (unsigned long long)*(char*)(v0 + (long long)param0);
        result = v1 * 0x100;
        ++v0;
        v1 = (unsigned int)v2 | result;
    }
    while(v0 != 4L);
    return result;
}

long long sub_431F12(char* param0) {
    long long result;
    long long v0 = 0L;
    long long v1 = (long long)*param0 >> 63;
    do {
        long long v2 = (unsigned long long)*(char*)(v0 + (long long)param0);
        result = v1 * 0x100L;
        ++v0;
        v1 = result + v2;
    }
    while(v0 != 8L);
    return result;
}

char* sub_431F31(char* param0, long long param1, unsigned long long param2) {
    char* result = param0;
    while(1) {
        param2 = (unsigned long long)*result | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)param2 > 57) {
            goto loc_431F45;
        }
        if((0x3ff080000000001L >>> (param2 % 64L)) & 0x1L) {
            return result;
        }
        param2 = (unsigned long long)((unsigned int)param2 - 44);
        if((unsigned char)param2 <= 1) {
            return result;
        }
    loc_431F45:
        ++result;
    }
    return result;
}

char* sub_431F59(char* param0, int* param1, int param2, int param3) {
    char* result = param0;
    if(param0) {
        long long v0 = (unsigned long long)(int)*param0;
        if((unsigned char)((unsigned char)v0 + 208) <= 9) {
            param0 = NULL;
            do {
                param0 = (char*)(((unsigned long long)((unsigned int)param0 * 10) + v0 - 48L) & 0xFFFFFFFFL);
                if((unsigned int)param0 > param3) {
                    return NULL;
                }
                v0 = (unsigned long long)(int)*(result + 1L);
                ++result;
            }
            while((unsigned char)((unsigned char)v0 + 208) <= 9);
            if((unsigned int)param0 >= param2) {
                *param1 = (unsigned int)param0;
                return result;
            }
        }
        result = NULL;
    }
    return result;
}

char* sub_431F99(char* param0) {
    int v0;
    int* ptr0;
    char* result = sub_431F59(param0, &v0, 0, 167);
    if(result) {
        *ptr0 = v0 * 3600;
        if(result[0] == 58) {
            result = sub_431F59(result + 1L, &v0, 0, 59);
            if(!result) {
                return NULL;
            }
            *ptr0 = v0 * 60 + *ptr0;
            if(result[0] == 58) {
                result = sub_431F59(result + 1L, &v0, 0, 60);
                if(result) {
                    *ptr0 = *ptr0 + v0;
                }
            }
        }
    }
    else {
        result = NULL;
    }
    return result;
}

char* sub_432012(char* param0, long long param1, long long param2, long long param3) {
    long long v0;
    int* ptr0;
    char v1 = param0[0];
    if(v1 == 45) {
        ++param0;
        v0 = 1L;
    }
    else {
        v0 = 0L;
        if(v1 == 43) {
            ++param0;
        }
    }
    char* result = sub_431F99(param0);
    if(result && (unsigned int)v0) {
        *ptr0 = 0 - *ptr0;
    }
    return result;
}

long long sub_43204C(char* param0, int* param1) {
    char* ptr0;
    long long v0;
    long long v1;
    int* ptr1;
    long long v2;
    long long result = (unsigned long long)param0[0] | ((unsigned long long)((result >>> 8L) & 0xffffffffffffffL) << 8);
    if((unsigned char)result == 74) {
        *param1 = 0;
        ++param0;
        ptr1 = param1 + 1;
        v1 = 365L;
        v0 = 1L;
        goto loc_4320E8;
    }
    else {
        if((unsigned char)result == 77) {
            *param1 = 2;
            ptr0 = sub_431F59(param0 + 1L, param1 + 3, 1, 12);
            if(!ptr0) {
                ptr0 = NULL;
                return (long long)ptr0;
            }
            else if(ptr0[0] != 46) {
                ptr0 = NULL;
                return (long long)ptr0;
            }
            ptr0 = sub_431F59(ptr0 + 1L, (int*)(v2 + 8L), 1, 5);
            if(!ptr0 || ptr0[0] != 46) {
                ptr0 = NULL;
                return (long long)ptr0;
            }
            param0 = ptr0 + 1L;
            ptr1 = (int*)(v2 + 4L);
            v1 = 6L;
            goto loc_4320E6;
        }
        if((unsigned char)((unsigned char)result - 48) <= 9) {
            *param1 = 1;
            ptr1 = param1 + 1;
            v1 = 365L;
        loc_4320E6:
            v0 = 0L;
        loc_4320E8:
            ptr0 = sub_431F59(param0, ptr1, (int)v0, (int)v1);
            if(ptr0) {
                if(ptr0[0] == 47) {
                    sub_431F99(ptr0 + 1L);
                    return result;
                }
                *(int*)(v2 + 16L) = 7200;
                return (long long)ptr0;
            }
        }
        ptr0 = NULL;
    }
    return (long long)ptr0;
}

long long sub_43210F(long long param0, int param1, int* param2, int param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = 0L;
    int* ptr0 = param2;
    if(!((unsigned char)param1 & 0x3)) {
        v4 = param1 % 100 ? 1L: param1 % 400 ? 0L: 1L;
    }
    int v5 = *ptr0;
    if(v5 == 1) {
        v0 = (long long)(*(ptr0 + 1) * 0x15180) + param0;
    }
    else if(v5 == 2) {
        long long v6 = v4 * 48L;
        long long v7 = 0L;
        long long v8 = v2;
        long long v9 = v3;
        long long v10 = v1;
        long long v11 = (unsigned long long)*(ptr0 + 3);
        while((unsigned int)v11 - 1 > (unsigned int)v7) {
            int v12 = *(unsigned int*)((long long)(long long*)(v7 * 4L + (long long)&gvar_446A20) + v6) * 0x15180;
            ++v7;
            param0 += (long long)v12;
        }
        int v13 = (unsigned int)(((long long)((unsigned int)v11 + 9) % 12L) & 0xFFFFFFFFL) + 1;
        if((unsigned int)v11 <= 2) {
            --param1;
        }
        int v14 = (param1 / 100 * -2 + param1 % 100 / 4 + (param1 / 400 + (unsigned int)(((long long)(((unsigned int)(((long long)((unsigned int)v11 + 9) % 12L) & 0xFFFFFFFFL) + 1) * 26 - 2) / 10L) & 0xFFFFFFFFL)) + ((unsigned int)(((long long)param1 % 100L) & 0xFFFFFFFFL) + 1)) % 7;
        if(v14 < 0) {
            v14 += 7;
        }
        long long v15 = (unsigned long long)(*(ptr0 + 1) - v14);
        if(((v15 >>> 31L) & 0x1L)) {
            v15 = (unsigned long long)((unsigned int)v15 + 7);
        }
        int v16 = *(ptr0 + 2);
        param2 = (int*)0x1;
        v4 = v4 * 12L + (long long)((unsigned int)v11 - 1);
        while(((unsigned int)param2 < v16 && (unsigned int)v15 + 7 < *(int*)(v4 * 4L + (long long)&gvar_446A20))) {
            param2 = (int*)((unsigned int)param2 + 1);
            v15 = (unsigned long long)((unsigned int)v15 + 7);
        }
        return (long long)((unsigned int)v15 * 0x15180) + (long long)*(ptr0 + 4) + ((long long)param3 + param0);
    }
    else if(v5) {
        v0 = 0L;
    }
    else {
        v0 = (long long)((*(ptr0 + 1) - 1) * 0x15180) + param0;
        if(*(ptr0 + 1) > 59 && (unsigned int)v4) {
            v0 += 0x15180L;
        }
    }
    return (long long)*(ptr0 + 4) + (long long)param3 + v0;
}

void sub_4323D8() {
    // Decompilation error
}

void sub_432409() {
    // Decompilation error
}

int sub_4327F2(int* param0, int* param1) {
    int result = *(param0 + 5) - *(param1 + 5);
    if(!result) {
        result = *(param0 + 4) - *(param1 + 4);
        if(!result) {
            result = *(param0 + 3) - *(param1 + 3);
            if(!result) {
                result = *(param0 + 2) - *(param1 + 2);
                if(!result) {
                    result = *(param0 + 1) - *(param1 + 1);
                    if(!result) {
                        result = *param0 - *param1;
                    }
                }
            }
        }
    }
    return result;
}

long long sub_43281F(long long param0, long long param1, long long param2) {
    int v0;
    if(param0 && ((unsigned int)param2 > (unsigned int)param1 ? (unsigned int)param2: (unsigned int)param1) < *(int*)(param0 + 8L)) {
        long long v1 = (long long)(unsigned int)param1 * 24L + param0;
        param2 = (long long)(unsigned int)param2 * 24L + param0;
        if(*(long long*)(v1 + 0x4668L) == *(long long*)(param2 + 0x4668L) && *(int*)(v1 + 18032L) == *(int*)(param2 + 18032L) && *(long long*)(v1 + 0x4678L) == *(long long*)(param2 + 0x4678L)) {
            sub_43AD14();
            return v0 ? 0L: 1L;
        }
    }
    return 0L;
}

long long sub_4328B2(int* param0, int* param1, int param2) {
    int v0 = *param1;
    long long v1 = v0 >= 0 ? (unsigned long long)(v0 / param2): (unsigned long long)~(~v0 / param2);
    *param1 = v0 - (v0 >= 0 ? v0 / param2: ~(~v0 / param2)) * param2;
    long long v2 = (unsigned long long)*param0;
    *param0 = (unsigned int)v1 + (unsigned int)v2;
    return (unsigned long long)(unsigned char)(((unsigned int)v1 >>> 31) ^ (unsigned int)((unsigned long long)((unsigned int)v1 + (unsigned int)v2 >= (unsigned int)v2 ? 0: 1) | ((unsigned long long)((((v1 + v2) & 0xFFFFFFFFL) >>> 8L) & 0xffffffffffffffL) << 8)));
}

long long sub_4328E9(int* param0, long long param1, long long param2, int* param3, int param4) {
    long long v0;
    int v1;
    unsigned long long v2;
    long long result;
    long long v3;
    long long v4;
    long long v5;
    int v6;
    char v7;
    char v8;
    long long v9;
    char v10;
    int v11;
    long long v12;
    int v13;
    unsigned int v14;
    int v15;
    int v16;
    long long v17 = v12;
    int* ptr0 = param0;
    *param3 = 0;
    int* ptr1 = ptr0;
    int* ptr2 = &v14;
    int* ptr3 = param3;
    for(long long i = 14L; i != 0L; --i) {
        ptr2[0] = *ptr1;
        ++ptr1;
        ++ptr2;
    }
    if(param4) {
        v5 = sub_4328B2(&v10, &v14, 60);
        if(!(unsigned int)v5) {
            goto loc_432944;
        }
        else {
            return -1L;
        }
    }
    else {
    loc_432944:
        v5 = sub_4328B2(&v7, &v10, 60);
        if(!(unsigned int)v5) {
            v5 = sub_4328B2(&v16, &v7, 24);
            if(!(unsigned int)v5) {
                int v18 = v11;
                v5 = sub_4328B2(&v18, &v13, 12);
                int v19 = (unsigned int)v5;
                if(!(unsigned int)v5) {
                    long long v20 = (long long)v18;
                    v5 = (v20 + 1900L) & 0xFFFFFFFFL;
                    v18 = (unsigned int)v5;
                    if((unsigned int)v5 >= (unsigned int)v20) {
                        int v21 = v13;
                        long long v22 = (unsigned long long)v16;
                        v20 &= 0xffffffffffffff00L;
                        long long v23 = (unsigned long long)(v21 <= 1 ? 0: 1) | ((unsigned long long)((v23 >>> 8L) & 0xffffffffffffffL) << 8);
                        while((((unsigned int)v22 ? 0: 1) || (unsigned int)v22 < 0)) {
                            if((unsigned int)v5 - 1 >= (unsigned int)v5) {
                                return -1L;
                            }
                            v4 = (((v5 - 1L) & 0xFFFFFFFFL) + (v21 <= 1 ? 0L: 1L)) & 0xFFFFFFFFL;
                            long long v24 = 0L;
                            if(!((unsigned char)v4 & 0x3)) {
                                v4 = (long long)(unsigned int)v4;
                                v24 = 1L;
                                v20 = v4 % 100L;
                                if(!v20) {
                                    v20 = v4 % 400L;
                                    v24 = v20 ? 0L: 1L;
                                }
                            }
                            v20 = (unsigned long long)1 | ((unsigned long long)((v20 >>> 8L) & 0xffffffffffffffL) << 8);
                            v22 = (unsigned long long)((unsigned int)v22 + *(unsigned int*)(v24 * 4L + (long long)&gvar_446A10));
                            v5 = (v5 - 1L) & 0xFFFFFFFFL;
                        }
                        if((unsigned char)v20) {
                            v18 = (unsigned int)v5;
                            v16 = (unsigned int)v22;
                        }
                        long long j = (unsigned long long)v16;
                        v22 = (unsigned long long)v18;
                        v5 = 0L;
                        v23 &= 0xFFL;
                        while((unsigned int)j > 366) {
                            v4 = (v22 + v23) & 0xFFFFFFFFL;
                            long long v25 = 0L;
                            if(!((unsigned char)v4 & 0x3)) {
                                v4 = (long long)(unsigned int)v4;
                                v25 = 1L;
                                v5 = v4 / 100L;
                                if(!(v4 % 100L)) {
                                    v5 = v4 / 400L;
                                    v25 = v4 % 400L ? 0L: 1L;
                                }
                            }
                            j = (unsigned long long)((unsigned int)j - *(unsigned int*)(v25 * 4L + (long long)&gvar_446A10));
                            v5 = (unsigned long long)1 | ((unsigned long long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                            if((unsigned int)v22 + 1 < (unsigned int)v22) {
                                return -1L;
                            }
                            v22 = (v22 + 1L) & 0xFFFFFFFFL;
                        }
                        if((unsigned char)v5) {
                            v18 = (unsigned int)v22;
                            v16 = (unsigned int)j;
                        }
                        v23 = (unsigned long long)v16;
                        v4 = (unsigned long long)v18;
                        v22 = 0L;
                    alab1:
                        while(1) {
                            j = (unsigned long long)((unsigned int)v4 & 0x3);
                            do {
                                int v26 = *(int*)((((unsigned int)j ? 0L: (unsigned int)v4 % 100 ? 1L: (unsigned int)v4 % 400 ? 0L: 1L) * 12L + (long long)v21) * 4L + &gvar_446A20);
                                if((unsigned int)v23 <= v26) {
                                    break alab1;
                                }
                                else {
                                    ++v21;
                                    v23 = (unsigned long long)((unsigned int)v23 - v26);
                                    v22 = (unsigned long long)1 | ((unsigned long long)((v22 >>> 8L) & 0xffffffffffffffL) << 8);
                                }
                            }
                            while(v21 <= 11);
                            if((unsigned int)v4 + 1 < (unsigned int)v4) {
                                return -1L;
                            }
                            v4 = (v4 + 1L) & 0xFFFFFFFFL;
                            v21 = 0;
                        }
                        if((unsigned char)v22) {
                            v13 = v21;
                            v16 = (unsigned int)v23;
                        }
                        v18 = (unsigned int)v4 - 1900;
                        if((unsigned int)v4 - 1900 < (unsigned int)v4) {
                            v11 = (unsigned int)v4 - 1900;
                            v5 = (long long)v14;
                            if(v14 > 59) {
                                if((unsigned int)v4 <= 1969) {
                                    v19 = (unsigned int)v5 - 59;
                                    if((unsigned int)v5 <= v19) {
                                        return -1L;
                                    }
                                    v14 = 59;
                                }
                                else {
                                    v14 = 0;
                                    v19 = (unsigned int)v5;
                                }
                            }
                            int counter = 63;
                            long long v27 = 1L;
                            do {
                                v27 *= 2L;
                                --counter;
                            }
                            while(counter);
                            long long v28 = ~v27;
                            while(1) {
                                long long v29 = v28 / 2L + v27 / 2L;
                                v3 = v29 < v27 ? v27: v29 <= v28 ? v29: v28;
                                long long v30 = v9(2L, (long long)&v8, v23, j);
                                if(!v30) {
                                    v5 = ((v3 <= 0L ? 0L: 1L) * 2L - 1L) & 0xFFFFFFFFL;
                                    goto loc_432C5F;
                                }
                                else {
                                    v5 = (long long)sub_4327F2(&v8, &v14);
                                }
                                if(!(unsigned int)v5) {
                                    break;
                                }
                                else {
                                loc_432C5F:
                                    v20 = v3;
                                    if(v20 == v27) {
                                        v3 = v27 + 1L;
                                        if(v27 + 1L <= v27) {
                                            return -1L;
                                        }
                                        ++v27;
                                    }
                                    else if(v20 == v28) {
                                        v3 = v28 - 1L;
                                        if(v28 - 1L >= v28) {
                                            return -1L;
                                        }
                                        --v28;
                                    }
                                    if(v28 < v27) {
                                        return -1L;
                                    }
                                    long long v31 = v3;
                                    if(!((unsigned int)v5 ? 0: 1) && (unsigned int)v5 >= 0) {
                                        v28 = v31;
                                        v31 = v27;
                                    }
                                    v27 = v31;
                                }
                            }
                            if(v15 < 0 || v15 == v6) {
                            loc_432DE6:
                                v5 = (long long)v19 + v3;
                                if((unsigned char)(v19 >>> 31) != (v5 >= v3 ? 0: 1)) {
                                    result = -1L;
                                }
                                else {
                                    v3 = v5;
                                    long long v32 = v9();
                                    if(v32) {
                                        *ptr3 = 1;
                                    }
                                    result = v3;
                                }
                                return result;
                            }
                            v2 = v9 != &sub_433D49 ? gvar_454090: gvar_454098;
                            if(!v2) {
                                return -1L;
                            }
                            v5 = (long long)(*(int*)(v2 + 8L) - 1);
                            v1 = *(int*)(v2 + 8L) - 1;
                            v0 = (long long)(unsigned int)v5 * 24L;
                            while(v1 >= 0) {
                                if(*(int*)(v2 + v0 + 18032L) == v15) {
                                    v5 = (long long)(*(int*)(v2 + 8L) - 1);
                                    int v33 = *(int*)(v2 + 8L) - 1;
                                    for(j = (long long)(unsigned int)v5 * 24L; v33 >= 0; j -= 24L) {
                                        if(*(int*)(j + v2 + 18032L) != v15) {
                                            long long v34 = v3 - *(long long*)(v2 + v0 + 0x4668L) + *(long long*)(j + v2 + 0x4668L);
                                            long long v35 = j;
                                            long long v36 = v34;
                                            v5 = v9();
                                            j = v35;
                                            if(v5) {
                                                v5 = (long long)sub_4327F2(&v8, &v14);
                                                j = v35;
                                                if(!(unsigned int)v5 && v15 == v6) {
                                                    v3 = v36;
                                                    goto loc_432DE6;
                                                }
                                            }
                                        }
                                        --v33;
                                    }
                                }
                                --v1;
                                v0 -= 24L;
                            }
                        }
                    }
                }
            }
        }
        result = -1L;
    }
    return result;
}

long long sub_432E49(int* param0, long long param1, long long param2, int* param3) {
    int* ptr0 = param3;
    int v0 = (unsigned int)param2;
    long long v1 = param1;
    int* ptr1 = param0;
    long long result = sub_4328E9(param0, param1, param2, param3, 0L);
    if(!ptr0[0]) {
        result = sub_4328E9(ptr1, v1, (long long)v0, ptr0, 1L);
    }
    return result;
}

void sub_43307C() {
    // Decompilation error
}

void sub_433507() {
    // Decompilation error
}

void sub_433C81() {
    // Decompilation error
}

void sub_433CBC() {
    // Decompilation error
}

void sub_433D49() {
    // Decompilation error
}

void sub_433EF5() {
    // Decompilation error
}

void sub_434061() {
    // Decompilation error
}

void sub_43408C() {
    // Decompilation error
}

void sub_434096() {
    // Decompilation error
}

char* sub_4340B8(char* param0, unsigned long long param1, char* param2) {
    char* result = param0;
    while((unsigned long long)result < param1) {
        char v0 = *param2;
        ++param2;
        *result = v0;
        if(!v0) {
            return result;
        }
        ++result;
    }
    return result;
}

char* sub_4340D1(char* param0, unsigned long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1;
    char* ptr0;
    unsigned long long v2;
    long long v3 = v1;
    sub_438FFB((long long)((char*)&v0 + 4L), 12L, param3, param2 & 0xFFFFFFFFL, param2 & 0xFFFFFFFFL, param5);
    return sub_4340B8(ptr0, v2, (char*)&v0 + 4L);
}

void sub_434113() {
    // Decompilation error
}

void sub_434660() {
    // Decompilation error
}

char* sub_43468F(char* param0, long long* param1, long long param2) {
    char* ptr0;
    long long v0;
    long long v1;
    char* ptr1 = (char*)param1;
    long long v2 = v0;
    char* result = param0;
    long long v3 = v1;
    int v4 = 0;
    int v5 = 0;
    while(1) {
        char* i = (unsigned long long)*ptr1 | ((unsigned long long)(long long*)((long long)(long long*)((long long)i >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)i) {
            if((unsigned char)i != 37) {
                param2 = (unsigned long long)*result | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
                if((*(char*)((long long*)((long long)i & 0xFFL) + 564390) & 0x1)) {
                    for(i = (char*)*result; *result && (*(i + 4515120L) & 0x1); i = (char*)*result) {
                        ++result;
                    }
                loc_4346FC:
                    ++ptr1;
                    continue;
                }
                else if((unsigned char)i == (unsigned char)param2) {
                    ++result;
                    goto loc_4346FC;
                }
            }
            else {
                param0 = ptr1 + 2L;
                if(*(ptr1 + 1L) != 43) {
                    param0 = ptr1 + 1L;
                }
                long long v6 = (((unsigned long long)*param0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)i >>> 8L) & 0xffffffffffffffL) << 8)) - 48L) & 0xFFFFFFFFL;
                if((unsigned char)v6 <= 9) {
                    sub_43814E();
                    param0 = ptr0;
                }
                ptr1 = param0 + 1L;
                param2 = (unsigned long long)((unsigned int)((unsigned long long)*param0 | ((unsigned long long)((v6 >>> 8L) & 0xffffffffffffffL) << 8)) - 37);
                if((unsigned char)param2 <= 84) {
                    param2 &= 0xFFL;
                    switch(param2) {
                        case 0: {
                            break;
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
                            return NULL;
                        }
                        default: {
                            throw 0;
                        }
                    }
                    i = result + 1L;
                    if(*result == 37) {
                        result = i;
                        continue;
                    }
                }
            }
            result = NULL;
        }
        return result;
    }
    return result;
}

long long sub_434AF5(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    if(param0) {
        long long v2 = v1;
        long long v3 = v0;
        sub_437254(*(long long*)(param0 + 32L), *(long long*)(param0 + 40L), param2, param3);
        sub_434FBE();
    }
    return 0L;
}

void sub_434B23() {
    // Decompilation error
}

void sub_434B4A() {
    // Decompilation error
}

long long sub_434C48(unsigned long long* param0, char* param1, long long param2) {
    char v0;
    long long v1 = sub_43A438(*param0, *(long long*)(param0 + 1), param1, param2, &v0);
    return !(v1 + 1L) ? sub_4020DC(): 0L;
}

void sub_434C82() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long long sub_434E00(long long param0, long long* param1, long long param2, long long param3) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    long long v6 = param3;
    sub_43AD53(param0, (long long)param1);
    unsigned long long result = 18446744073709551615L;
    if((unsigned long long)(v1 - 4L) <= 243L) {
        sub_43AA7D();
        result = 18446744073709551615L;
        if(!v0) {
            *(unsigned long long*)(param1 + 1) = (unsigned long long)(v1 - 4L);
            result = (unsigned long long)(v1 - 4L);
            *param1 = param0 + 4L;
        }
    }
    return result;
}

void sub_434F19() {
    // Decompilation error
}

void sub_434FB8() {
    jump gvar_44EB80;
}

void sub_434FBE() {
    jump gvar_44EB88;
}

void sub_434FC4() {
    jump gvar_44EB90;
}

void sub_434FCA() {
    jump gvar_44EB98;
}

unsigned long long sub_434FD0(long long param0, long long param1, long long param2) {
    long long v0 = (unsigned long long)((unsigned int)param1 & 0xF);
    if(((unsigned int)param1 & 0xF)) {
        v0 = (unsigned long long)((0 - ((unsigned int)param1 + 16)) & 0xF);
    }
    long long v1 = v0 + param1;
    long long v2 = param2 - v0;
    *(long long*)(param0 + 40L) = v1;
    *(long long*)(param0 + 16L) = v2;
    *(long long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long long result = gvar_4524C0;
    *(long long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long long*)(param0 + 48L) = result;
    return result;
}

long long sub_435017(long long param0) {
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
                long long v10 = (unsigned long long)((unsigned int)param0 & 0xF);
                if(((unsigned int)param0 & 0xF)) {
                    v10 = (unsigned long long)((0 - ((unsigned int)param0 + 16)) & 0xF);
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
                                        goto loc_4350F9;
                                    }
                                }
                                else {
                                loc_4350F9:
                                    v14 = v16;
                                loc_4350FC:
                                    do {
                                        v0 = v13;
                                        v16 = v14;
                                        v13 = v14 + 40L;
                                        v14 = *(long long*)(v14 + 40L);
                                        if(v14) {
                                            goto loc_4350FC;
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
                                        goto loc_435147;
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
                                    loc_435147:
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
                        long long v20 = sub_437254(param0, result, v14, v13);
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
                            loc_435290:
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
                                        goto loc_435290;
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

long long sub_435410(int* param0, long long param1, long long param2, long long param3) {
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
                goto loc_43559C;
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
                            goto loc_4354CD;
                        }
                    }
                    else {
                    loc_4354CD:
                        param3 = result;
                    loc_4354D0:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long long*)(param3 + 40L);
                            param3 = *(long long*)(param3 + 40L);
                            if(param3) {
                                goto loc_4354D0;
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
                            goto loc_435520;
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
                        loc_435520:
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
            goto loc_43559C;
        }
        else {
            v0 = (long long)((long long*)(param2 + (long long)ptr3) + 4);
            result = sub_437254(v1, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long long*)(param0 + 214) = *(long long*)(param0 + 214) - v0;
            return result;
        }
    }
    else {
    loc_43559C:
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
                                    goto loc_43567B;
                                }
                            }
                            else {
                            loc_43567B:
                                param3 = v6;
                            loc_43567E:
                                do {
                                    ptr0 = ptr2;
                                    v6 = param3;
                                    ptr2 = (long long*)(param3 + 40L);
                                    param3 = *(long long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_43567E;
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
                                    goto loc_4356CA;
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
                                loc_4356CA:
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
                        goto loc_435757;
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
        loc_435757:
            if((unsigned long long)param2 <= 0xffL) {
                int v10 = *param0;
                ptr4 = (long long*)(1 << ((param2 >>> 3) & 0x1fL));
                result = (long long)((long long*)((((unsigned long long)0 | ((unsigned long long)((param2 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + (long long)param0) + 9);
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
                loc_435861:
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
                            goto loc_435861;
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

void sub_43588C() {
    // Decompilation error
}

void sub_436810(long long param0, unsigned long long* param1, long long param2, long long param3, long long param4, long long param5) {
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
        loc_4369BF:
            ptr0 = *(ptr6 + 1);
            if(!((unsigned char)ptr0 & 0x2)) {
                v2 = gvar_452100;
                if(gvar_452108 == ptr6) {
                    long long v15 = (long long)(gvar_4520F0 + (long long)ptr5);
                    gvar_452108 = param0;
                    gvar_4520F0 = v15;
                    *(long long*)(param0 + 8L) = v15 | 0x1L;
                    if(param0 == v2) {
                        gvar_452100 = 0L;
                        gvar_4520E8 = 0L;
                    }
                    if(gvar_452110 >= (unsigned long long)v15) {
                        jump *(ptr4 + 3);
                    }
                    else {
                        long long v16 = v13;
                        v13 = v9;
                        ptr3 = ptr2;
                        v6 = v11;
                        long long v17 = v16;
                        v15 = gvar_452108;
                        if(v15) {
                            unsigned long long v18 = gvar_4520F0;
                            if(v18 > 80L) {
                                unsigned long long v19 = &gvar_452458;
                                unsigned long long* ptr7 = (unsigned long long*)&gvar_452458;
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
                                    goto loc_435341;
                                }
                                while(ptr7);
                                ud2();
                            loc_435341:
                                long long v20 = (unsigned long long)*(int*)(ptr7 + 3);
                                if(((unsigned char)v20 & 0x8) || !((unsigned char)v20 & 0x1)) {
                                    goto loc_435308;
                                }
                                else {
                                    unsigned long long v21 = gvar_4524B0;
                                    v16 = ((v18 + v21 - 81L) / v21 - 1L) * v21;
                                    if((unsigned long long)v16 > (unsigned long long)param5) {
                                        goto loc_435308;
                                    }
                                    else {
                                        while(1) {
                                            if(v19 >= v5 && v19 < (unsigned long long)ptr0) {
                                                goto loc_435308;
                                            }
                                            else {
                                                v19 = *(unsigned long long*)(v19 + 16L);
                                                if(!v19) {
                                                    long long v22 = param5 - v16;
                                                    long long v23 = sub_4378A4();
                                                    if(!(v23 + 1L)) {
                                                        long long v24 = sub_437254(*ptr7 + v22, v16, v8, v10);
                                                        if((unsigned int)v24) {
                                                            goto loc_435308;
                                                        }
                                                    }
                                                    if(v16) {
                                                        *(long long*)(ptr7 + 1) = *(long long*)(ptr7 + 1) - v16;
                                                        unsigned long long v25 = gvar_4520F0;
                                                        gvar_452438 -= v16;
                                                        sub_434FD0(&gvar_4520E0, gvar_452108, (long long)(v25 - v16));
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                            loc_435308:
                                v16 = 0L;
                            }
                            v15 = sub_435017(&gvar_4520E0);
                            if(!(v15 + v16) && gvar_4520F0 > gvar_452110) {
                                gvar_452110 = 18446744073709551615L;
                            }
                        }
                        return;
                    }
                }
                else if(ptr6 == v2) {
                    long long* ptr8 = (long long*)(gvar_4520E8 + (long long)ptr5);
                    gvar_452100 = param0;
                    gvar_4520E8 = ptr8;
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
                            gvar_4520E0 = (unsigned int)((__rol__(-2, (long long)((long long)ptr0 >>> 3) & 0x1fL)) & gvar_4520E0);
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
                                    goto loc_436AD6;
                                }
                            }
                            else {
                            loc_436AD6:
                                v14 = v26;
                            loc_436AD9:
                                do {
                                    v4 = param5;
                                    v26 = v14;
                                    param5 = v14 + 40L;
                                    v14 = *(long long*)(v14 + 40L);
                                    if(v14) {
                                        goto loc_436AD9;
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
                            if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_452338) == ptr6) {
                                *(long long*)((param5 + 74L) * 8L + (long long)&gvar_4520E8) = v26;
                                if(v26) {
                                    goto loc_436B27;
                                }
                                else {
                                    gvar_4520E4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4520E4);
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
                                loc_436B27:
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
                        gvar_4520E8 = ptr5;
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
                unsigned int v28 = gvar_4520E0;
                if(!((1 << ((long long)((long long)ptr5 >>> 3) & 0x1fL)) & v28)) {
                    gvar_4520E0 = (unsigned int)((1 << ((long long)((long long)ptr5 >>> 3) & 0x1fL)) | v28);
                    ptr1 = (long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_452128);
                }
                else {
                    ptr1 = *(unsigned long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_452138);
                }
                *(long long*)((((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_452138) = param0;
                *(ptr1 + 3) = param0;
                *(unsigned long long*)(param0 + 16L) = ptr1;
                *(long long*)(param0 + 24L) = (((unsigned long long)0 | ((unsigned long long)((long long)((long long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xFFFFFFFFL) * 8L + &gvar_452128;
            }
            else {
                long long* ptr9 = (long long*)((long long)ptr5 >>> 8);
                ptr1 = (long long*)((long long)ptr9 & 0xFFFFFFFFL);
                if((unsigned int)ptr9) {
                    ptr1 = (long long*)0x1F;
                    if((unsigned int)ptr9 <= 0xffff) {
                        if((unsigned int)ptr9 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr9 >>> i); --i) {
                            }
                            ptr9 = (unsigned long long)i | ((unsigned long long)(unsigned int)(long long*)((long long)ptr9 >>> 32L) << 32);
                        }
                        ptr1 = (long long*)(((unsigned long long)(31 - ((unsigned int)ptr9 ^ 0x1f)) * 2L + (unsigned long long)((unsigned int)(long long*)((long long)ptr5 >>> ((unsigned long long)(38 - ((unsigned int)ptr9 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xFFFFFFFFL);
                    }
                }
                unsigned int v29 = gvar_4520E4;
                *(int*)(param0 + 56L) = (unsigned int)ptr1;
                *(long long*)(param0 + 40L) = 0L;
                *(long long*)(param0 + 32L) = 0L;
                if(!((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) & v29)) {
                    *(long long*)((long long)(long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xFFFFFFFFL) * 8L) + (long long)&gvar_452338) = param0;
                    gvar_4520E4 = (unsigned int)((1 << (long long)(long long*)((long long)ptr1 & 0x1fL)) | v29);
                    *(unsigned long long*)(param0 + 48L) = (long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xFFFFFFFFL) * 8L) + 566375;
                loc_436CD4:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v30 = 0L;
                    ptr6 = *(unsigned long long*)((long long)(long long*)((long long)(unsigned long long*)((long long)ptr1 & 0xFFFFFFFFL) * 8L) + (long long)&gvar_452338);
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
                            goto loc_436CD4;
                        }
                    }
                    long long v32 = *(long long*)(ptr6 + 2);
                    *(long long*)(v32 + 24L) = param0;
                    *(long long*)(ptr6 + 2) = param0;
                    *(long long*)(param0 + 16L) = v32;
                    *(unsigned long long*)(param0 + 24L) = ptr6;
                    *(long long*)(param0 + 48L) = 0L;
                }
                --gvar_452118;
                if(!gvar_452118) {
                    sub_435017(&gvar_4520E0);
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
                if(gvar_452100 == param0) {
                    long long v33 = *(long long*)(ptr6 + 1);
                    if(((unsigned int)v33 & 0x3) == 3) {
                        gvar_4520E8 = ptr5;
                        *(long long*)(ptr6 + 1) = v33 & 0xfffffffffffffffeL;
                        *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr5 | 0x1L);
                        *ptr6 = ptr5;
                        jump *(ptr4 + 3);
                    }
                    else {
                        goto loc_4369BF;
                    }
                }
                else {
                    v3 = *(long long*)(param0 + 24L);
                }
                if((unsigned long long)ptr0 <= 0xffL) {
                    long long v34 = *(long long*)(param0 + 16L);
                    if(v3 == v34) {
                        gvar_4520E0 = (unsigned int)((__rol__(-2, (long long)((long long)ptr0 >>> 3) & 0x1fL)) & gvar_4520E0);
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
                                goto loc_4368E8;
                            }
                        }
                        else {
                        loc_4368E8:
                            v14 = v3;
                        loc_4368EB:
                            do {
                                v2 = param5;
                                v3 = v14;
                                param5 = v14 + 40L;
                                v14 = *(long long*)(v14 + 40L);
                                if(v14) {
                                    goto loc_4368EB;
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
                        if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_452338) == param0) {
                            *(long long*)((long long)(long long*)((param5 + 74L) * 8L) + (long long)&gvar_4520E8) = v3;
                            if(v3) {
                                goto loc_43693D;
                            }
                            else {
                                gvar_4520E4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4520E4);
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
                            loc_43693D:
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
                goto loc_4369BF;
            }
            else {
                v1 = (long long)((long long*)((long long)ptr5 + (long long)ptr0) + 4);
                ptr4 = &v6;
                v0 = sub_437254(param0, v1, v12, v14);
            }
        }
        if(!(unsigned int)v0) {
            gvar_452438 -= v1;
        }
        jump *(ptr4 + 3);
    }
}

void sub_436D15() {
    // Decompilation error
}

long long* sub_436D71(int* param0, long long* param1, long long* param2, long long param3, long long* param4) {
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
                sub_435410(param0, v1, v2, param3);
            }
            return result;
        }
        else if(*(long long*)&param0[10] == ptr2) {
            long long* ptr3 = (long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) + *(long long*)&param0[4]);
            if(param2 >= ptr3) {
            loc_436DA7:
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
                                    goto loc_437007;
                                }
                            }
                            else {
                            loc_437007:
                                long long v13 = v9;
                            loc_43700A:
                                do {
                                    v0 = param3;
                                    v9 = v13;
                                    param3 = v13 + 40L;
                                    v13 = *(long long*)(v13 + 40L);
                                    if(v13) {
                                        goto loc_43700A;
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
                                    goto loc_437056;
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
                                loc_437056:
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
                        sub_435410(param0, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_436DA7;
        }
        else {
            param3 = (long long)((unsigned long long)(v7 & 0xfffffffffffffff8L) + *(long long*)&param0[2]);
            if((unsigned long long)param3 < (unsigned long long)param2) {
                goto loc_436DA7;
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
        goto loc_436DA7;
    }
    else {
        unsigned long long v16 = gvar_4524B0;
        if((unsigned long long)(param2 + 1) > (unsigned long long)(v7 & 0xfffffffffffffff8L) || (unsigned long long)(long long*)((unsigned long long)(v7 & 0xfffffffffffffff8L) - (long long)param2) > v16 * 2L) {
            long long v17 = *result;
            long long* ptr7 = (long long*)((long long)(long long*)((char*)(v16 + (long long)param2) + 62L) & (0L - v16));
            long long v18 = (unsigned long long)(v7 & 0xfffffffffffffff8L) + v17 + 32L;
            long long v19 = sub_4378A4();
            if(v19 == -1L) {
                goto loc_436DA7;
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

void sub_437100() {
    // Decompilation error
}

void sub_4371B9() {
}

void sub_437240() {
    // Decompilation error
}

long long sub_437254(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = v0;
    return sub_4378AA(param0, param1, param2, param3);
}

long long sub_437268() {
    long long result;
    sub_434FBE();
    return result;
}

long long sub_43727D(long long param0) {
    return sub_437286(param0, 0L, 0L);
}

long long sub_437286(long long param0, long long param1, long long param2) {
    long long result;
    int* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = v0;
    int* ptr1 = gvar_4524E0;
    if(!ptr1) {
        gvar_4524E0 = 4531432L;
        ptr1 = (int*)0x4524E8;
    }
    if(*ptr1 == -1) {
        sub_434FB8();
        if(ptr0) {
            *(unsigned long long*)(ptr0 + 2) = ptr1;
            gvar_4524E0 = ptr0;
            ptr1 = ptr0;
            goto loc_4372ED;
        }
        else {
            result = sub_40213C();
        }
    }
    else {
    loc_4372ED:
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

long long sub_43731B(long long param0, long long param1, long long param2, long long* param3) {
    long long v0;
    long long v1 = v0;
    long long result = param2;
loc_43732D:
    for(int* i = gvar_4524E0; i; i = gvar_4524E0) {
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
                param3 = (long long*)((long long)param3 & 0xFFFFFFFFL);
                v2 &= (unsigned long long)~v3;
                if(!param0 || *((long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i) + 4) == param0) {
                    *i = ~v3 & *i;
                    param3 = (long long*)((long long)(long long*)((long long)param3 * 24L) + (long long)i);
                    param2 = *(param3 + 2);
                    if(param2) {
                        param2((long long)param3);
                        goto loc_43732D;
                    }
                }
            }
            int* ptr0 = *(unsigned long long*)(i + 2);
            if(!param0) {
                if(ptr0) {
                    sub_434FBE();
                }
                gvar_4524E0 = ptr0;
                goto loc_43732D;
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

long long sub_4373B0(long long param0, long long* param1, long long param2) {
    long long* ptr0;
    void* ptr1;
    unsigned long long v0;
    unsigned long long v1;
    long long v2;
    if(param2) {
        unsigned long long v3 = v0;
        unsigned long long v4 = v1;
        long long v5 = v2;
        v2 = param0;
        v1 = gvar_453CD0;
        long long v6 = *(long long*)param0;
        long long v7 = param2;
        char v8 = v1 + 1L < gvar_453CD8;
        long long v9 = v6;
        long long v10 = *(long long*)(param0 + 8L);
        if(!v8) {
            char v11 = sub_437453((long long*)&gvar_453CE0, &gvar_453CD8, 32L, 1L);
            if((unsigned char)v11) {
                goto loc_437415;
            }
        }
        else {
        loc_437415:
            long long* ptr2 = &v9;
            long long v12 = 8L;
            long long result = v1 * 32L + gvar_453CE0;
            param0 = v1 * 32L + gvar_453CE0;
            while(v12 != 0L) {
                *(int*)param0 = *(int*)ptr2;
                ptr2 = (long long*)((char*)ptr2 + 4L);
                param0 += 4L;
                --v12;
            }
            gvar_453CD0 = v1 + 1L;
            if((v1 + 1L)) {
                *(long long*)(v2 + 8L) = &gvar_43AA20;
                return result;
            }
        }
        ptr0 = &ptr1;
        /*NO_RETURN*/ sub_401000();
    }
    jump *ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
char sub_437453(long long* param0, long long param1, long long param2, long long param3) {
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
    sub_437599(param0[0], param1, param2, param3);
    long long v12 = sub_437599(param0[0], param1, param2, param3);
    if((unsigned char)v12) {
        v7 = param0[0];
    }
    unsigned long long v13 = *(unsigned long long*)param1;
    unsigned long long v14 = param0[0] != 0L ? (unsigned long long)((v13 >>> 1) + v13): 31L / (unsigned long long)param2 < 4L ? 4L: 31L / (unsigned long long)param2;
    if(v13) {
        v1 = (unsigned long long)(param2 * v13);
        if(((param2 | v13) & 0xffffffffffff0000L) && v1 / v13 != param2) {
            goto loc_437583;
        }
        else {
            goto loc_4374E9;
        }
    }
    else {
        v1 = 0L;
    loc_4374E9:
        unsigned long long v15 = (unsigned long long)(param3 + v14 + 1L);
        if(v15) {
            v0 = v15 * param2;
            if(!((v15 | param2) & 0xffffffffffff0000L) || v0 / v15 == param2) {
                goto loc_437522;
            }
            else {
            loc_437583:
                sub_40215C();
            }
        }
        else {
            v0 = 0L;
        loc_437522:
            unsigned long long v16 = v1;
            unsigned long long v17 = v15;
            sub_434FCA();
            if(v3) {
                if(!v7 && param0[0]) {
                    sub_43AAA0((long long)v17, (long long)v16);
                }
                sub_43ABE2(v3 + v1, 0L, (long long)(v0 - v1), (long long)v15);
                *(long long*)param1 = param3;
                param0[0] = v3;
                return 1;
            }
            sub_40213C();
        }
        result = 0;
    }
    return result;
}

long long sub_437599(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    if((unsigned long long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long long v1 = v0;
        long long v2 = param3;
        long long v3 = sub_4379ED((int)(param0 >>> 16L), &gvar_452808, gvar_452800);
        if(v3) {
            result = (unsigned int)(param0 >>> 16L) == *(int*)(v3 * 8L + (long long)&gvar_452800) ? 1L: (unsigned int)(param0 >>> 16L) == *(unsigned int*)((v3 - 1L) * 8L + (long long)&gvar_45280C) ? 1L: 0L;
        }
        return result;
    }
    return 0L;
}

void sub_437606() {
    // Decompilation error
}

void sub_43762C() {
    // Decompilation error
}

long long sub_4378A4() {
    return sub_40214C();
}

long long sub_4378AA(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

long long sub_4379ED(int param0, long long param1, long long param2) {
    long long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        long long v1 = (unsigned long long)(((unsigned int)v0 + (unsigned int)param2) >> 1);
        if(*(int*)(((unsigned long long)(((unsigned int)v0 + (unsigned int)param2) >> 1) | ((unsigned long long)((v1 >>> 31L) & 0x1L ? -1: 0) << 32)) * 8L + param1) <= param0) {
            v0 = (v1 + 1L) & 0xFFFFFFFFL;
        }
        else {
            param2 = v1 & 0xFFFFFFFFL;
        }
    }
    return (long long)(unsigned int)v0;
}

long long sub_437A0D(long long param0, long long param1, long long param2, long long param3) {
    return sub_4383B0();
}

void sub_437A1A() {
    // Decompilation error
}

unsigned long long sub_437AA9() {
    unsigned long long result;
    long long v0;
    do {
        unsigned long long v1 = gvar_453AE8;
        unsigned long long v2 = gvar_453AF0;
        long long v3 = 0L;
        result = gvar_453AE0;
        while(result < v1) {
            unsigned long long v4 = result + 1L;
            v3 = (unsigned long long)1 | ((unsigned long long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!*(int*)(v4 * 24L + v2 - 8L)) {
                gvar_453AE0 = v4;
                return result;
            }
            result = v4;
        }
        if((unsigned char)v3) {
            gvar_453AE0 = result;
        }
        v0 = sub_437D47(v3);
    }
    while((unsigned int)v0 + 1);
    return 18446744073709551615L;
}

long long sub_437B03(long long param0, int param1) {
    return (unsigned long long)((((unsigned int)param0 * 8) & 0x20) | ((param1 * 32) & 0x80000000) | ((param1 >> 1) & 0x1) | ((param1 >> 2) & 0x20000000) | ((unsigned int)((unsigned long long)0 | ((unsigned long long)(param0 & 0x3fffffffffffffffL) << 2)) & 0x4) | ((unsigned int)param0 & 0x2));
}

void sub_437B3E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long long sub_437BCC(long long param0, long long param1) {
    long long v0;
    long long v1;
    int v2;
    int v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    unsigned long long result = 0L;
    if(param0 != -1L) {
        long long v8 = v5;
        long long v9 = v6;
        long long v10 = v7;
        long long v11 = v0;
        long long v12 = v1;
        long long v13 = (unsigned long long)gvar_44EB70;
        if(!((unsigned char)v13 & 0x4)) {
            unsigned long long* ptr0 = gvar_44E428;
            if(ptr0) {
                if(!((unsigned char)v13 & 0x8)) {
                    goto loc_437C71;
                }
                else if(!param0) {
                    return gvar_44EBB0 != param0 ? 0L: gvar_44EB58;
                }
                else {
                    sub_43AD53(gvar_44EBB0 == param0 ? "executable_path": param0, param1);
                    v13 = (unsigned long long)v3;
                }
                while(1) {
                    long long v14 = *ptr0;
                    if(v14) {
                        long long v15 = v13;
                        sub_43AD1A();
                        v13 = v15;
                        if(!v2 && *(char*)(v13 + v14) == 61) {
                            return (unsigned long long)(((v4 + 1L) & 0xFFFFFFFFL) + v14);
                        }
                        ++ptr0;
                        continue;
                    loc_437C71:
                        result = *ptr0;
                        while(result) {
                            if(result != param0) {
                                ptr0 += 2;
                                goto loc_437C71;
                            }
                            else {
                                result = *(ptr0 + 1);
                                if(result) {
                                    return result;
                                }
                                break;
                            }
                        }
                    }
                    return gvar_44EBB0 != param0 ? 0L: gvar_44EB58;
                }
            }
        }
        else {
            result = gvar_44EBB0 != param0 ? 0L: gvar_44EB58;
        }
        return result;
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_437CA8(long long param0, long long param1) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v3;
    long long v6 = v1;
    long long v7 = v2;
    long long* ptr0 = gvar_453CC8;
    long long v8 = 0L;
    if(!ptr0) {
        ptr0 = &v8;
    }
    sub_43AD53(param0, param1);
    long long result = *ptr0;
    while(result) {
        sub_43AD1A();
        if(!v0 && *(char*)(v4 + result) == 61) {
            return v4 + result + 1L;
        }
        ++ptr0;
        result = *ptr0;
    }
    return result;
}

void sub_437D19() {
    // Decompilation error
}

long long sub_437D47(long long param0) {
    long long result;
    unsigned long long v0;
    unsigned long long v1 = gvar_453AE8;
    sub_434FCA();
    if(v0) {
        unsigned long long v2 = v1 * 2L;
        do {
            ++v1;
            *(int*)(v1 * 24L + v0 - 8L) = 0;
        }
        while(v2 > v1);
        gvar_453AF0 = v0;
        gvar_453AE8 = v2;
        result = 0L;
    }
    else {
        result = sub_40213C();
    }
    return result;
}

long long sub_437DB6(int param0, int param1) {
    return !param0 ? 0L: *(int*)((long long)param0 * 24L + gvar_453AF0 + 16L) == param1 ? 1L: 0L;
}

void sub_437DD1() {
    // Decompilation error
}

void sub_437E75() {
    // Decompilation error
}

long long sub_437F99(unsigned long long param0) {
    long long result;
    if((unsigned int)param0) {
        result = (unsigned long long)(unsigned int)param0 * 24L + gvar_453AF0;
        param0 = (unsigned long long)(unsigned int)param0 >= gvar_453AE0 ? gvar_453AE0: (unsigned long long)(unsigned int)param0;
        *(int*)(result + 16L) = 0;
        gvar_453AE0 = param0;
    }
    return result;
}

long long sub_437FC9() {
    if((*(char*)&gvar_44EB70 & 0x4)) {
        return sub_40214C();
    }
    jump gvar_44EB78;
}

void sub_437FE2() {
    // Decompilation error
}

long long sub_438106(long long param0) {
    return (long long)((unsigned long long)(param0 - 11644473600L) / 10000000L);
}

long long sub_438122(unsigned long long* $rdi, long long $rsi) {
    // Decompilation error
}

long long sub_438380() {
    jump gvar_44EB78;
}

long long sub_438390() {
    jump gvar_44EB78;
}

long long sub_4383A0() {
    jump gvar_44EB78;
}

long long sub_4383B0() {
    jump gvar_44EB78;
}

long long sub_4383C0() {
    jump gvar_44EB78;
}

long long sub_4383D0() {
    jump gvar_44EB78;
}

long long sub_4383E0() {
    jump gvar_44EB78;
}

long long sub_438400() {
    jump gvar_44EB78;
}

void sub_438B80() {
    // Decompilation error
}

long long sub_438FFB(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    __SyntheticTypeUnknown v5;
    __SyntheticTypeUnknown v6;
    __SyntheticTypeUnknown v7;
    __SyntheticTypeUnknown v8;
    __SyntheticTypeUnknown v9;
    char v10;
    if(v1) {
        __SyntheticTypeUnknown v11 = v3;
        __SyntheticTypeUnknown v12 = v2;
        __SyntheticTypeUnknown v13 = v4;
        __SyntheticTypeUnknown v14 = v5;
        __SyntheticTypeUnknown v15 = v6;
        __SyntheticTypeUnknown v16 = v7;
        __SyntheticTypeUnknown v17 = v8;
        __SyntheticTypeUnknown v18 = v9;
    }
    long long* ptr0 = &v10;
    int v19 = 24;
    int v20 = 48;
    long long* ptr1 = &v0;
    return sub_439652(param0, param1);
}

long long sub_4390BD(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    __SyntheticTypeUnknown v5;
    __SyntheticTypeUnknown v6;
    __SyntheticTypeUnknown v7;
    __SyntheticTypeUnknown v8;
    __SyntheticTypeUnknown v9;
    char v10;
    if(v1) {
        __SyntheticTypeUnknown v11 = v2;
        __SyntheticTypeUnknown v12 = v3;
        __SyntheticTypeUnknown v13 = v4;
        __SyntheticTypeUnknown v14 = v5;
        __SyntheticTypeUnknown v15 = v6;
        __SyntheticTypeUnknown v16 = v7;
        __SyntheticTypeUnknown v17 = v8;
        __SyntheticTypeUnknown v18 = v9;
    }
    long long* ptr0 = &v10;
    int v19 = 16;
    int v20 = 48;
    long long* ptr1 = &v0;
    return sub_439652(param0, 0x7fffffffL);
}

long long sub_43914E(long long param0, unsigned long long $rdx$2, long long param2, long long param3, long long $r8$1, long long $r9) {
    char v0;
    char v1;
    __SyntheticTypeUnknown v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknown v4;
    __SyntheticTypeUnknown v5;
    __SyntheticTypeUnknown v6;
    __SyntheticTypeUnknown v7;
    __SyntheticTypeUnknown v8;
    __SyntheticTypeUnknown v9;
    char v10;
    long long v11 = param3;
    long long v12 = $r8$1;
    long long v13 = $r9;
    if(v1) {
        __SyntheticTypeUnknown v14 = v2;
        __SyntheticTypeUnknown v15 = v3;
        __SyntheticTypeUnknown v16 = v4;
        __SyntheticTypeUnknown v17 = v5;
        __SyntheticTypeUnknown v18 = v6;
        __SyntheticTypeUnknown v19 = v7;
        __SyntheticTypeUnknown v20 = v8;
        __SyntheticTypeUnknown v21 = v9;
    }
    long long* ptr0 = &v10;
    int v22 = 16;
    int v23 = 48;
    long long* ptr1 = &v0;
    return sub_4396C3(param0, $rdx$2, &v22, param3, $r8$1, $r9);
}

void sub_439554() {
    // Decompilation error
}

void sub_43956E() {
    // Decompilation error
}

long long sub_439652(long long par0, long long par1) {
    // Decompilation error
}

long long sub_4396C3(long long param0, unsigned long long $rdx$2, unsigned int* $rcx$1, long long param3, long long $r8$1, long long $r9) {
    long long v0;
    long long v1 = 0L;
    return sub_4396ED(&gvar_4396A1, &v0, $rdx$2, $rcx$1, $r8$1, $r9);
}

long long sub_4396ED(long long $rdi$4, unsigned long long $rsi$7, unsigned long long $rdx$2, unsigned int* $rcx$1, long long $r8$1, long long $r9) {
    // Decompilation error
}

long long sub_439F63(short* param0, unsigned long long param1, long long param2, long long param3) {
    return sub_43A03D(param0, param1, param2, param3);
}

long long sub_43A03D(short* param0, unsigned long long param1, long long param2, long long param3) {
    long long result;
    if(param1) {
        if(((unsigned int)param2 > 31 || !(unsigned char)param3)) {
            if((unsigned int)((unsigned int)param2 - 0xe000) <= 0x1fff || (unsigned int)param2 <= 55295) {
            loc_43A080:
                *param0 = (unsigned short)param2;
                result = 1L;
            }
            else {
                param2 = (unsigned long long)((unsigned int)param2 - 0x10000);
                if(param1 > 1L && (unsigned int)param2 <= 0xfffff) {
                    long long v0 = (unsigned long long)((unsigned int)param2 >>> 10);
                    param2 = (unsigned long long)(((unsigned short)param2 & 0x3ff) - 0x2400) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16);
                    *param0 = (unsigned short)v0 - 0x2800;
                loc_43A0B4:
                    *(param0 + 1) = (unsigned short)param2;
                    result = 2L;
                }
                else {
                    *param0 = 0xfffd;
                    result = 0xFFFFFFFFL;
                }
            }
        }
        else if(param1 <= 1L) {
            goto loc_43A080;
        }
        else {
            *param0 = 0xd800;
            param2 = (unsigned long long)((unsigned short)param2 | 0xdc00) | ((unsigned long long)((param2 >>> 16L) & 0xffffffffffffL) << 16);
            goto loc_43A0B4;
        }
        return result;
    }
    return 0L;
}

long long sub_43A0CE(long long param0, long long $rdi1, long long param2, long long param3, long long $r8$3, long long $r9) {
    sub_43A84E(param0, $rdi1, 0L, 18446744073709551615L, $r8$3, $r9);
    return param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_43A117(long long $rdi, long long param1, unsigned long long $rsi1, long long $ecx, long long $r8$2, long long $r9) {
    long long v0;
    long long v1;
    long long v2;
    long long* ptr0;
    long long v3 = v0;
    long long v4 = v1;
    long long* ptr1 = sub_43AD57($rdi, $rsi1, (long long)$rsi1, $ecx, $r8$2, $r9);
    sub_43AD53(v2, v2);
    long long* result = (long long*)((long long)ptr0 + (long long)ptr1);
    if($rsi1) {
        long long* ptr2 = (long long*)($rsi1 - (long long)ptr1);
        sub_43AAA0($ecx, (long long)(ptr0 >= ptr2 ? ptr2: ptr0));
        *(char*)(($rsi1 - 1L <= (unsigned long long)$r8$2 ? $rsi1 - 1L: $r8$2) + $rdi) = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long long sub_43A17B(long long param0, long long param1, unsigned long long param2, long long param3) {
    long long v0;
    unsigned long long v1;
    long long v2;
    unsigned long long result;
    long long v3 = v0;
    long long v4 = param3;
    sub_43AD53(param1, param1);
    if(v1) {
        unsigned long long v5 = result <= v1 ? result: v1;
        sub_43AAA0(param3, (long long)v5);
        *(char*)(v5 + v2) = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_43A1BD(long long param0, long long $rdi1, unsigned long long $rdx, long long param3, long long $r8$3, long long $r9) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = sub_43A84E(param0, $rdi1, 0L, $rdx, $r8$3, $r9);
    if(v3) {
        sub_43ABE2(v3, 0L, $rdx + param0 - v3, v1);
    }
    return param0;
}

long long sub_43A304(long long param0, long long param1, long long param2, unsigned long long param3, int* param4) {
    unsigned long long v0 = 0L;
    unsigned int v1 = (unsigned int)((((unsigned int)*(char*)((unsigned long long)(unsigned char)(param0 >>> 8L) + 4485888L) | ((unsigned int)*(char*)((param0 & 0xFFL) + 4485888L) << 8) | ((unsigned int)0 << 16)) * 0x10000) | 0xFFFF);
    while(param3 > v0) {
        unsigned long long v2 = (param3 + v0) >>> 1;
        if(*(unsigned int*)(v2 * 4L + param2) <= v1) {
            v0 = v2 + 1L;
        }
        else {
            param3 = v2;
        }
    }
    int v3 = *(int*)(v0 * 4L + param2 - 4L);
    *param4 = (v3 >>> 4) & 0xfff;
    return param0 >>> ((unsigned long long)(v3 & 0xF) & 0x3fL);
}

long long sub_43A36F(long long param0, long long param1, long long param2) {
    long long v0;
    short v1;
    short v2;
    short v3;
    short v4;
    long long v5;
    long long v6 = 8L;
    long long v7 = v5;
    short* ptr0 = &v1;
    while(v6 != 0L) {
        *(int*)ptr0 = 0;
        ptr0 += 2;
        --v6;
    }
    long long v8 = 0L;
    do {
        v0 = (unsigned long long)*(char*)(v8 + param1);
        ++v8;
        *(short*)(v0 * 2L + (long long)&v1) = *(short*)(v0 * 2L + (long long)&v1) + 1;
    }
    while(v8 != param2);
    short v9 = 0;
    short v10 = 0;
    long long v11 = 1L;
    v1 = 0;
    do {
        int v12 = (unsigned int)((unsigned long long)*(short*)(v11 * 2L + (long long)&v2) | ((unsigned long long)((v0 >>> 16L) & 0xffffffffffffL) << 16)) + (unsigned int)((unsigned long long)*(short*)(v11 * 2L + (long long)&v3) | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr0 >>> 16L) & 0xffffffffffffL) << 16));
        v0 = (unsigned long long)((unsigned short)((unsigned long long)*(short*)(v11 * 2L + (long long)&v2) | ((unsigned long long)((v0 >>> 16L) & 0xffffffffffffL) << 16)) + *(short*)(v11 * 2L + (long long)&v4)) | ((unsigned long long)((unsigned long long)((v0 >>> 16L) & 0xffffffffffffL) & 0xffffffffffffL) << 16);
        ptr0 = (short*)(v12 * 2);
        *(short*)(v11 * 2L + (long long)&v9) = (unsigned short)ptr0;
        *(short*)(v11 * 2L + (long long)&v10) = (unsigned short)v0;
        ++v11;
    }
    while(v11 != 16L);
    long long v13 = 0L;
    do {
        long long v14 = (unsigned long long)*(char*)(param1 + v13);
        if(v14) {
            long long v15 = (unsigned long long)*(short*)(v14 * 2L + (long long)&v9);
            *(short*)(v14 * 2L + (long long)&v9) = (unsigned short)v15 + 1;
            long long v16 = (unsigned long long)*(short*)(v14 * 2L + (long long)&v10);
            *(short*)(v14 * 2L + (long long)&v10) = (unsigned short)v16 + 1;
            *(int*)(v16 * 4L + param0) = ((unsigned int)v13 * 16) | ((unsigned int)v15 << ((unsigned long long)(32 - (unsigned int)v14) & 0x1fL)) | (unsigned int)v14;
        }
        ++v13;
    }
    while(param2 != v13);
    return (unsigned long long)v2;
}

long long sub_43A438(char* param0, long long param1, char* param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long result;
    long long v7;
    long long i;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    unsigned long long v12;
    long long v13;
    long long v14;
    unsigned int v15;
    char* ptr0 = param2;
    long long v16 = v11;
    long long v17 = v13;
    long long v18 = 0L;
    long long v19 = v10;
    char* ptr1 = param0;
    long long v20 = 0L;
    long long v21 = param4 + 224L;
    while(1) {
        if((unsigned long long)v18 <= 2L) {
            long long v22 = (unsigned long long)*ptr0;
            i = v18 & 0xFFFFFFFFL;
            ++ptr0;
            v18 += 8L;
            v7 = (v22 << (i & 0x3fL)) | v20;
        }
        else {
            v18 -= 3L;
            v7 = v20 >>> 3;
            long long v23 = (unsigned long long)((unsigned int)(v20 >>> 1L) & 0x3);
            if((unsigned char)v23 == 1) {
                v8 = v7;
                sub_401AB7((char*)(param4 + 1376L), (char*)&gvar_4470F3);
                v3 = v8;
                v5 = 32L;
                v6 = 288L;
                goto loc_43A694;
            }
            else {
                if((unsigned char)v23 != 2) {
                    result = -1L;
                    if((unsigned char)v23) {
                        return result;
                    }
                    while(1) {
                    }
                }
                while((unsigned long long)v18 <= 13L) {
                    long long v24 = (unsigned long long)*ptr0;
                    long long v25 = v18 & 0xFFFFFFFFL;
                    ++ptr0;
                    v18 += 8L;
                    v7 |= v24 << (v25 & 0x3fL);
                }
                v18 -= 14L;
                v6 = (unsigned long long)((unsigned int)v7 & 0x1f) + 0x101L;
                long long v26 = v7 >>> 14;
                v5 = (unsigned long long)((unsigned int)(v7 >>> 5L) & 0x1f) + 1L;
                unsigned long long v27 = 0L;
            loc_43A53B:
                do {
                    if((unsigned long long)v18 <= 2L) {
                        long long v28 = (unsigned long long)*ptr0;
                        long long v29 = v18 & 0xFFFFFFFFL;
                        ++ptr0;
                        v18 += 8L;
                        v26 |= v28 << (v29 & 0x3fL);
                        goto loc_43A53B;
                    }
                    else {
                        long long v30 = (unsigned long long)*(unsigned char*)((long long)&gvar_4470E0 + v27);
                        ++v27;
                        long long v31 = (unsigned long long)((unsigned int)v26 & 0x7);
                        v26 >>>= 3;
                        v18 -= 3L;
                        *(char*)(v30 + param4) = (unsigned char)v31;
                    }
                }
                while((unsigned long long)(((unsigned int)(v7 >>> 10L) & 0xF) + 4) > v27);
                while(v27 != 19L) {
                    long long v32 = (unsigned long long)*(unsigned char*)((long long)&gvar_4470E0 + v27);
                    ++v27;
                    *(char*)(v32 + param4) = 0;
                }
                v4 = v26;
                long long v33 = sub_43A36F(param4 + 20L, param4, 19L);
                v3 = v4;
                v8 & 0xFFFFFFFFL = (unsigned int)v33;
                v2 = 0L;
            }
            do {
                while((unsigned long long)v18 <= 15L) {
                    long long v34 = (unsigned long long)*ptr0;
                    long long v35 = v18 & 0xFFFFFFFFL;
                    ++ptr0;
                    v18 += 8L;
                    v3 |= v34 << (v35 & 0x3fL);
                }
                v4 & 0xFFL = (unsigned char)v2;
                v3 = sub_43A304(v3, v18, param4 + 20L, (unsigned long long)(v8 & 0xFFFFFFFFL), &v15);
                long long v36 = (unsigned long long)v15;
                v18 = v14;
                if((unsigned int)v36 == 17) {
                    v36 = (unsigned long long)2 | ((unsigned long long)((v36 >>> 8L) & 0xffffffffffffffL) << 8);
                    v1 = 1L;
                loc_43A61C:
                    v36 = (unsigned long long)((unsigned int)v36 + 1);
                    v2 = 0L;
                loc_43A627:
                    while((unsigned long long)(v36 & 0xFFL) > (unsigned long long)v18) {
                        long long v37 = (unsigned long long)*ptr0;
                        long long v38 = v18 & 0xFFFFFFFFL;
                        ++ptr0;
                        v18 += 8L;
                        v3 |= v37 << (v38 & 0x3fL);
                    }
                    v18 -= (unsigned long long)(v36 & 0xFFL);
                    long long v39 = (unsigned long long)(~(-1 << (v36 & 0x1fL)) & (unsigned int)v3);
                    v3 >>>= v36 & 0x3fL;
                    v0 = (v39 + v1 + 2L) & 0xFFFFFFFFL;
                }
                else if((unsigned int)v36 != 18) {
                    v2 = (unsigned long long)(unsigned char)v4 | ((unsigned long long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
                    if((unsigned int)v36 == 16) {
                        v36 = (unsigned long long)2 | ((unsigned long long)((v36 >>> 8L) & 0xffffffffffffffL) << 8);
                        v1 = 1L;
                        goto loc_43A627;
                    }
                    else {
                        v2 = v36 & 0xFFFFFFFFL;
                        v0 = 1L;
                    }
                }
                else {
                    v1 = 9L;
                    v36 = (unsigned long long)6 | ((unsigned long long)((v36 >>> 8L) & 0xffffffffffffffL) << 8);
                    goto loc_43A61C;
                }
                long long v40 = v0 + v9;
                while(v40 != v12) {
                    ++v12;
                    *(char*)(param4 + v12 + 0x55fL) = (unsigned char)v2;
                }
            }
            while((unsigned long long)(v5 + v6) > v12);
        loc_43A694:
            v4 = v3;
            long long v41 = sub_43A36F(v21, param4 + 1376L, v6);
            v8 & 0xFFFFFFFFL = (unsigned int)v41;
            sub_43A36F(param4 + 96L, param4 + v6 + 1376L, v5);
            v7 = v4;
            do {
                while((unsigned long long)v18 <= 15L) {
                    long long v42 = (unsigned long long)*ptr0;
                    long long v43 = v18 & 0xFFFFFFFFL;
                    ++ptr0;
                    v18 += 8L;
                    v7 |= v42 << (v43 & 0x3fL);
                }
                v7 = sub_43A304(v7, v18, v21, (unsigned long long)(v8 & 0xFFFFFFFFL), &v15);
                unsigned int v44 = v15;
                v18 = v14;
                if(v44 <= 0xff) {
                    *ptr1 = (unsigned char)v44;
                    ++ptr1;
                }
                else if(v44 != 0x100) {
                    unsigned long long v45 = (unsigned long long)*(char*)((unsigned long long)(v44 - 0x101) + 0x4470a0L);
                    v15 = v44 - 0x101;
                    while(v45 > (unsigned long long)v18) {
                        long long v46 = (unsigned long long)*ptr0;
                        long long v47 = v18 & 0xFFFFFFFFL;
                        ++ptr0;
                        v18 += 8L;
                        v7 |= v46 << (v47 & 0x3fL);
                    }
                    long long v48 = v7 >>> (v45 & 0x3fL);
                    long long v49 = v18 - v45;
                    v6 & 0xFFFFFFFFL = (~(-1 << (v45 & 0x1fL)) & (unsigned int)v7) + (unsigned int)*(short*)((unsigned long long)(v44 - 0x101) * 2L + 0x447020L);
                    while((unsigned long long)v49 <= 15L) {
                        long long v50 = (unsigned long long)*ptr0;
                        long long v51 = v49 & 0xFFFFFFFFL;
                        ++ptr0;
                        v49 += 8L;
                        v48 |= v50 << (v51 & 0x3fL);
                    }
                    long long v52 = /*BAD_CALL!*/ sub_43A304(v48, v49, param4 + 96L, (unsigned long long)(v9 & 0xFFFFFFFFL), &v15);
                    long long v53 = v14;
                    unsigned long long v54 = (unsigned long long)*(char*)((unsigned long long)v15 + 0x4470c0L);
                    while(v54 > (unsigned long long)v53) {
                        long long v55 = (unsigned long long)*ptr0;
                        long long v56 = v53 & 0xFFFFFFFFL;
                        ++ptr0;
                        v53 += 8L;
                        v52 |= v55 << (v56 & 0x3fL);
                    }
                    v18 = v53 - v54;
                    param0 = ptr1;
                    v7 = v52 >>> (v54 & 0x3fL);
                    char* ptr2 = (char*)((long long)ptr1 - (long long)(char*)((~(-1 << (v54 & 0x1fL)) & (unsigned int)v52) + (unsigned int)*(short*)((unsigned long long)v15 * 2L + 0x447060L)));
                    for(i = v6 & 0xFFFFFFFFL; i != 0L; --i) {
                        *param0 = *ptr2;
                        ++ptr2;
                        ++param0;
                    }
                    ptr1 = param0;
                }
            }
            while(v15 != 0x100);
            if(((unsigned char)v20 & 0x1)) {
                return 0L;
            }
        }
        v20 = v7;
    }
}

int* sub_43A823(unsigned long long param0, unsigned long long param1) {
    int* result = (int*)(param1 + param0 - 22L);
    if(param1 > 0x10016L) {
        param0 = param1 + param0 - 0x10016L;
    }
    while((unsigned long long)result >= param0) {
        if(*result == 101010256) {
            return result;
        }
        result = (int*)((char*)result - 1L);
    }
    return NULL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_43A84E(long long param0, long long $rdi1, long long param2, unsigned long long $rdx, long long $r8$3, long long $r9) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = $r8$3;
    char* ptr0 = sub_43AD3B($rdi1, param2 & 0xFFFFFFFFL, $rdx, (long long)$rdx, $r8$3, $r9);
    if(ptr0) {
        sub_43AAA0((long long)$rdx, (long long)(long long*)((char*)((long long)ptr0 - $rdi1) + 1L));
        result = param2 + v2;
    }
    else {
        sub_43AAA0((long long)$rdx, (long long)$rdx);
    }
    return result;
}

long long sub_43AA4B(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    param3();
    return result;
}

void sub_43AD14() {
    jump gvar_44EB60;
}

char* sub_43AD27(long long $rdi, char $sil, long long $rdx$2, int $ecx) {
    // Decompilation error
}

char* sub_43AD3B(long long $rdi, long long $rsi$1, unsigned long long $rdx, int $ecx, long long $r8$3, long long $r9) {
    // Decompilation error
}

long long sub_43AE48(long long param0, long long param1, long long param2, long long param3) {
    long long v0 = 0L;
    long long v1 = 0L;
    long long v2 = 0L;
    if(param1 != param0) {
        while(1) {
            v0 = (unsigned long long)*(char*)(v2 + param0);
            v1 = (unsigned long long)*(char*)(v2 + param1);
            if(!(unsigned char)v0 || (unsigned char)v0 != *(char*)(v2 + param1)) {
                break;
            }
            else {
                ++v2;
            }
        }
    }
    return (unsigned long long)((unsigned int)v0 - (unsigned int)v1);
}

long long sub_43B001(long long par0) {
    // Decompilation error
}

long long sub_43B03A(int param0, unsigned long long param1) {
    long long v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64L;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_44EC48;
            v0 = ((long long)v1 & param1) == param1 ? 64L: 128L;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4L;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long long v2 = gvar_44EC48;
            v0 = ((((long long)(unsigned int)param1 & v2) == v2 ? 0L: 1L) * 4L + 4L) & 0xFFFFFFFFL;
        }
    }
    else {
        v0 = (param0 & 0x5) == 5 ? 32L: (unsigned char)param0 & 0x4 ? 16L: (unsigned long long)((param0 & 0x1) + 1);
    }
    return (unsigned long long)(((v1 | param0) & 0xdd000000) | (unsigned int)v0);
}

long long sub_43B0C6() {
    if((*(char*)&gvar_44EB70 & 0x4)) {
        long long v0 = sub_402E8A();
        gvar_453D68 = (unsigned int)v0;
        return -1L;
    }
    return sub_40214C();
}
