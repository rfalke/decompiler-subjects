
long start() {
    *(char*)&gvar_404630 = 8;
    /*NO_RETURN*/ sub_40125E();
}

unsigned long* sub_4011A5(long param0, unsigned long* param1, long param2, long param3) {
    unsigned long* result;
    long v0;
    long v1;
    unsigned int v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6 = v4;
    long v7 = v0;
    long v8 = v5;
    long v9 = v1;
    do {
        unsigned long v10 = *param1;
        long v11 = *(long*)(param1 + 1);
        unsigned long* ptr0 = param1;
        int v12 = *(int*)(param1 + 2);
        int v13 = *(int*)((char*)param1 + 20L);
        long v14 = (unsigned long)v3;
        do {
            long v15 = (unsigned long)(unsigned int)v14;
            v14 = (unsigned long)((unsigned int)v14 - 1);
            if(*(long*)(ptr0 - 3) != v10) {
                int* ptr1 = (int*)(ptr0 - 3);
                unsigned long* ptr2 = ptr0;
                ptr0 -= 3;
                v15 = 6L;
                do {
                    *(int*)ptr2 = *ptr1;
                    ++ptr1;
                    ptr2 = (unsigned long*)((char*)ptr2 + 4L);
                    --v15;
                }
                while(v15 == 0L);
            }
            else {
                v14 = (unsigned long)(unsigned int)v15;
            }
            break;
        }
        while((unsigned int)v14);
        ++v3;
        param1 += 3;
        result = (unsigned long*)(v14 * 24L + param3);
        *result = v10;
        *(long*)(result + 1) = v11;
        *(int*)(result + 2) = v12;
        *(int*)((char*)result + 20L) = v13;
    }
    while(v2 > v3);
    return result;
}

void sub_401217() {
    char v0;
    long v1;
    int v2;
    int v3;
    long v4 = (unsigned long)((unsigned int)&v0 - 8);
    long v5 = (unsigned long)v3 | ((unsigned long)v2 << 32);
    int v6 = v3;
    long v7 = (unsigned long)v3;
    long v8 = (unsigned long)v6;
    long v9 = v5;
    long* ptr0 = &v1;
    interrupt(3);
}

void sub_401225() {
    char v0;
    char* ptr0 = (char*)((unsigned int)&v0 - 16);
    long v1 = 8L;
    long v2 = 8L;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v2;
    }
    while(v2 == 0L);
    while(1) {
        lidt(*(void*)((unsigned long)((unsigned int)&v0 - 8) - 8L));
        ud2();
    }
}

void sub_401240() {
}

long sub_40125E() {
    int v0;
    char v1;
    char v2;
    long v3 = (long)v0;
    long* ptr0 = &v1;
    unsigned long* ptr1 = (unsigned long*)(v3 * 8L + (long)&v2);
    long v4 = &gvar_401214;
    long* ptr2 = (long*)&gvar_403018;
    long v5 = 0x403070L;
    long v6 = 0x403070L;
    long v7 = 88L;
    char v8 = 0;
    char v9 = 0;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    int v14 = 88;
    long v15 = 11L;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    while(v15 != 0L) {
        *ptr2 = &gvar_401214;
        ++ptr2;
        --v15;
    }
    long v21 = 0L;
    long v22 = 0xffffffffL;
    char v23 = 0;
    char v24 = 1;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    unsigned long* ptr3 = ptr1;
    while(v22 != 0L) {
        v23 = *ptr3 == 0L;
        v24 = *ptr3 > 0L;
        v25 = __parity__(0 - (unsigned char)*ptr3);
        v27 = *ptr3 > 0L;
        v26 = ((0L - *ptr3) & *ptr3) < 0L;
        v11 = (((0L - *ptr3) ^ *ptr3) >>> 4L) & 0x1L;
        ++ptr3;
        --v22;
        if(!~v23) {
            break;
        }
    }
    /*NO_RETURN*/ sub_401524();
}

long sub_401433(long param0, long param1) {
    long v0;
    long v1 = v0;
    long v2 = param1;
    long v3 = gvar_406038;
    if(!(*(char*)&gvar_404630 & 0x4)) {
        int v4 = /*BAD_CALL!*/ sub_40156C((long)*(int*)(v3 + 12L));
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

long sub_401469(long param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    char v4 = gvar_406050 ? 0: 1;
    long v5 = v2;
    long v6 = v3;
    long v7 = v0;
    long v8 = v1;
    if(v4) {
        gvar_406050 = &gvar_406058;
        gvar_406048 = 8L;
        sub_40215B(&sub_401FAF, 0L, 0L);
    }
    unsigned long v9 = gvar_406040;
    unsigned long v10 = gvar_406050;
    unsigned long v11 = v9 - 1L;
    while(v11 != -1L) {
        long* ptr0 = (long*)(v11 * 8L + v10);
        --v11;
        if(!*(long*)(v11 * 8L + v10 + 8L)) {
            *ptr0 = param0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_406048) {
        long v12 = /*BAD_CALL!*/ sub_402286((long*)&gvar_406050, (unsigned long*)&gvar_406048, 8L, 1L);
        if((unsigned char)v12) {
            v11 = v9;
            *(long*)(v9 * 8L + gvar_406050) = param0;
            gvar_406040 = v9 + 1L;
            return (unsigned long)(unsigned int)v11;
        }
    }
    else {
        v11 = v9;
        *(long*)(v9 * 8L + gvar_406050) = param0;
        gvar_406040 = v9 + 1L;
    }
    return (unsigned long)(unsigned int)v11;
}

int sub_40156C(long param0) {
    char v0;
    char v1;
    int v2;
    long v3;
    long v4;
    long v5;
    long v6 = v3;
    long v7 = v4;
    long v8 = v5;
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
        long v12 = /*BAD_CALL!*/ sub_40245F(param0, 1);
        if((unsigned char)v12) {
            long v13 = sub_401DD2(*(long*)((long)(unsigned int)param0 * 24L + gvar_4076B0));
            v0 = (unsigned int)v13 == 2;
            result = v0 ? 1: 0;
        }
    }
    return result;
}

unsigned int sub_401609(long param0, int* param1) {
    long v0;
    long v1 = v0;
    long v2 = /*BAD_CALL!*/ sub_4025B0();
    unsigned int result = (unsigned int)v2;
    if(result != -1) {
        unsigned int v3 = result;
        sub_40168D(param1);
        result = v3;
    }
    return result;
}

void sub_40168D(int* param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    long v10;
    long v11;
    long v12;
    if(param0) {
        long v13 = (unsigned long)gvar_404630;
        long v14 = v8;
        long v15 = v9;
        long v16 = v10;
        long v17 = v11;
        long v18 = v12;
        if(((unsigned char)v13 & 0x8)) {
            long v19 = (unsigned long)*(short*)((char*)param0 + 6L);
            long v20 = (unsigned long)*(short*)(param0 + 1);
            v7 = (long)*(param0 + 28);
            long v21 = (long)*param0;
            long v22 = *(long*)(param0 + 4);
            v6 = *(long*)(param0 + 24);
            v5 = *(long*)(param0 + 10);
            *(long*)(param0 + 10) = (long)*(param0 + 6);
            long v23 = *(long*)(param0 + 26);
            v4 = *(long*)(param0 + 8);
            v3 = *(long*)(param0 + 12);
            v2 = *(long*)(param0 + 14);
            v1 = *(long*)(param0 + 16);
            v13 = *(long*)(param0 + 18);
            *(long*)param0 = v21;
            *(long*)(param0 + 4) = v19;
            *(param0 + 6) = (unsigned int)v20;
            *(long*)(param0 + 7) = v22;
            *(long*)(param0 + 12) = v6;
            *(long*)(param0 + 14) = v7;
            *(long*)(param0 + 16) = v23;
            goto loc_40179A;
        }
        else {
            if(((unsigned char)v13 & 0x20)) {
                v6 = (long)*(param0 + 32);
                v0 = *(long*)(param0 + 28);
                v7 = *(long*)(param0 + 30);
                v4 = *(long*)(param0 + 12);
                v5 = *(long*)(param0 + 14);
                v3 = *(long*)(param0 + 16);
                v2 = *(long*)(param0 + 18);
                v1 = *(long*)(param0 + 20);
                v13 = *(long*)(param0 + 22);
                *(param0 + 6) = (unsigned int)*(short*)(param0 + 6);
                goto loc_40178E;
            }
            if(((unsigned char)v13 & 0x10)) {
                long v24 = (long)*(param0 + 7);
                int v25 = *param0;
                long v26 = *(long*)(param0 + 5);
                v6 = (long)*(param0 + 24);
                v0 = *(long*)(param0 + 20);
                v7 = *(long*)(param0 + 22);
                v3 = *(long*)(param0 + 12);
                *(long*)param0 = (long)*(param0 + 1);
                long v27 = (unsigned long)*(param0 + 4);
                v2 = *(long*)(param0 + 14);
                v1 = *(long*)(param0 + 16);
                v13 = *(long*)(param0 + 18);
                v4 = *(long*)(param0 + 8);
                v5 = *(long*)(param0 + 10);
                *(param0 + 6) = v25;
                *(long*)(param0 + 4) = v27;
                *(long*)(param0 + 7) = v26;
                *(long*)(param0 + 10) = v24;
            loc_40178E:
                *(long*)(param0 + 12) = v0;
                *(long*)(param0 + 14) = v6;
                *(long*)(param0 + 16) = v7;
            loc_40179A:
                *(long*)(param0 + 18) = v4;
                *(long*)(param0 + 20) = v5;
                *(long*)(param0 + 22) = v3;
                *(long*)(param0 + 24) = v2;
                *(long*)(param0 + 26) = v1;
                *(long*)(param0 + 28) = v13;
            }
        }
    }
}

long sub_401826() {
    gvar_407838 = gvar_404658;
    return -1L;
}

long sub_401836() {
    gvar_407838 = gvar_404660;
    return -1L;
}

long sub_401846() {
    gvar_407838 = gvar_404668;
    return -1L;
}

long sub_401856() {
    gvar_407838 = gvar_404670;
    return -1L;
}

long sub_401D0B(long* param0, long* param1, unsigned long param2, int* param3) {
    long result;
    long v0;
    long v1;
    char v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6;
    long* ptr0;
    long v7 = v6;
    long v8 = v4;
    long* ptr1 = param1;
    long v9 = v5;
    unsigned long i;
    for(i = param2; i && !*(ptr1 + 1); --i) {
        ptr1 += 2;
    }
    int* ptr2 = sub_401DAD(param3, &v2);
    if(i) {
        v1 = (unsigned long)*(int*)(ptr1 + 1);
        v0 = *ptr1;
    }
    else {
        v1 = 0L;
        v0 = 0L;
    }
    void* ptr3 = param3;
    long v10 = *ptr0;
    int* ptr4 = ptr2;
    long v11 = /*BAD_CALL!*/ gvar_403060(v10, v0, v1, (long)&v3);
    if(!(unsigned int)v11) {
        sub_40297A();
    }
    else if(!v3) {
        for(unsigned long j = 0L; j != i; ++j) {
        }
    loc_401D8E:
        gvar_403020(*ptr0);
        result = (unsigned long)v3;
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
        long v0 = 8L;
        param0 = param1;
        while(v0 != 0L) {
            *param0 = 0;
            ++param0;
            --v0;
        }
        *(unsigned long*)(param1 + 4) = ptr0;
    }
    else {
        result = NULL;
    }
    return result;
}

long sub_401DD2(long param0) {
    return gvar_403040(param0);
}

long sub_401DEB() {
    return gvar_403048();
}

long sub_401FAF(long param0) {
    unsigned int v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    if(!param0) {
        v0 = 0;
        for(unsigned long i = gvar_406040 - 1L; i != -1L; --i) {
            if(*(long*)(i * 8L + gvar_406050)) {
                long v5 = /*BAD_CALL!*/ sub_401FAF();
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
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long)*(int*)(param0 + 4L) & *(long*)&gvar_404688)) {
            v0 = *(unsigned int*)(param0 + 8L);
            if(!*(int*)(param0 + 8L)) {
                while(*(int*)(param0 + 20L) != *(int*)(param0 + 16L)) {
                    long v6 = param0;
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
                long v8 = sub_401F76(param0, (unsigned long)v0);
                v0 = (unsigned int)v8;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long)v0;
}

int sub_402083(long param0) {
    int result;
    long v0;
    long v1;
    long v2 = v0;
    long v3 = v1;
    long v4 = (unsigned long)*(int*)(param0 + 16L);
    unsigned int v5 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v4 >= v5) {
        v5 = *(unsigned int*)(param0 + 32L);
    }
    int v6 = v5 - (unsigned int)v4;
    long v7 = sub_40247A((long)*(int*)(param0 + 12L), (long*)(*(long*)(param0 + 24L) + v4), (long)v6);
    if(v7 == -1L) {
        result = sub_402150(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v7 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (int)v6;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_402150(long param0) {
    return sub_401F76(param0, gvar_407838);
}

long sub_40215B(long param0, long param1, long param2) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4 = v0;
    long v5 = param2;
    long v6 = v2;
    long v7 = v3;
    long v8 = v1;
    unsigned int* ptr0 = *(long*)&gvar_4060A0;
    if(!ptr0) {
        ptr0 = (unsigned int*)&gvar_4060A8;
        *(long*)&gvar_4060A0 = 168;
    }
    if(*ptr0 == -1) {
        result = sub_401836();
    }
    else {
        param2 = (unsigned long)*ptr0;
        unsigned int v9 = (unsigned int)~*ptr0;
        if(~*ptr0 != 0) {
            unsigned int i;
            for(i = 31; !(v9 >>> i); --i) {
            }
            v9 = i;
        }
        *ptr0 = (~(1 << (v9 % 32)) & (unsigned int)param2) | (1 << (v9 % 32));
        long* ptr1 = (long*)((unsigned long)v9 * 24L + (long)ptr0);
        result = 0L;
        *(ptr1 + 2) = param0;
        *(ptr1 + 3) = param1;
        *(ptr1 + 4) = v5;
    }
    return result;
}

long sub_402286(long* param0, unsigned long* param1, unsigned long param2, long param3) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    unsigned long* ptr0;
    unsigned long v6;
    long v7 = v3;
    long v8 = v4;
    long v9 = v0;
    long* ptr1 = param0;
    long v10 = v2;
    long v11 = v5;
    sub_4023CE(*param0);
    long v12 = /*BAD_CALL!*/ sub_4023CE(*ptr1);
    param0 = *ptr0;
    ptr0 = *ptr1 ? (unsigned long*)((long)(long*)((long)param0 >>> 1) + (long)param0): (unsigned long)(unsigned long*)(31L / v6) >= 4L ? (unsigned long*)(31L / v6): (unsigned long*)0x4;
    if(!param0 || !(long*)((long)(long*)(v6 | (long)param0) & 0xffffffffffff0000L) || (long*)((long)(unsigned long)(long*)(v6 * (long)param0) / (long)(unsigned long)param0) == v6) {
        long* ptr2 = (long*)((char*)(v1 + (long)ptr0) + 1L);
        if(ptr2 && (long*)((long)(long*)((long)ptr2 | v6) & 0xffffffffffff0000L) && (long*)((long)(unsigned long)(long*)((long)ptr2 * v6) / (long)(unsigned long)ptr2) != v6) {
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
long sub_4023CE(long param0) {
    long v0;
    long v1;
    if((unsigned long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        unsigned long v2 = gvar_4063C0;
        long v3 = v0;
        long v4 = v1;
        long v5 = sub_40243F((unsigned long)(unsigned int)(param0 >>> 16L), 4219848L, (long)v2);
        long result = 0L;
        if(v5) {
            long v6 = 1L;
            if((unsigned int)(param0 >>> 16L) != *(int*)(v5 * 8L + (long)&gvar_4063C0)) {
                v6 = (unsigned int)(param0 >>> 16L) != *(int*)((v5 - 1L) * 8L + 0x4063ccL) ? 0L: 1L;
            }
            result = (unsigned long)((unsigned int)v6 & 0x1);
        }
        return result;
    }
    return 0L;
}

long sub_40243F(long param0, long param1, long param2) {
    long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        int v1 = ((unsigned int)v0 + (unsigned int)param2) >> 1;
        if((unsigned int)param0 >= *(int*)((long)v1 * 8L + param1)) {
            v0 = (unsigned long)(v1 + 1);
        }
        else {
            param2 = (unsigned long)v1;
        }
    }
    return (long)(unsigned int)v0;
}

long sub_40245F(long param0, unsigned int param1) {
    long result = 0L;
    if((unsigned int)param0) {
        result = *(int*)((long)(unsigned int)param0 * 24L + gvar_4076B0 + 16L) != param1 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40247A(long param0, long* param1, long param2) {
    long result;
    long* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5 = v0;
    long v6 = v1;
    long v7 = v2;
    if((unsigned int)param0 == -1) {
        long v8 = sub_401826();
        result = (long)(unsigned int)v8;
    }
    else {
        long v9 = /*BAD_CALL!*/ sub_40245F((long)(unsigned int)param0, 5);
        if((unsigned char)v9) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_404630 & 0x4)) {
            result = sub_4025C0();
        }
        else {
            long v10 = /*BAD_CALL!*/ sub_40245F((long)(unsigned int)param0, 2);
            if((unsigned char)v10) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long v11 = /*BAD_CALL!*/ sub_40245F((long)(unsigned int)param0, 1);
                if(!(unsigned char)v11) {
                    long v12 = /*BAD_CALL!*/ sub_40245F((long)(unsigned int)param0, 4);
                    if((unsigned char)v12) {
                        long v13 = (long)(unsigned int)param0 * 24L + gvar_4076B0;
                        long v14 = v3;
                        return sub_401D0B(v13, (long)&ptr0, 1L, -1L, v4);
                    }
                    result = sub_401816();
                }
                else {
                    long v13 = (long)(unsigned int)param0 * 24L + gvar_4076B0;
                    long v14 = v3;
                    result = sub_401D0B(v13, (long)&ptr0, 1L, -1L, v4);
                }
            }
        }
    }
    return result;
}

long sub_4025B0() {
    return gvar_404638();
}

long sub_4025C0() {
    return gvar_404638();
}

long sub_40262D(long param0, int* param1, long param2, long param3) {
    return sub_40266F(param0, param1, param2, param3);
}

long sub_40266F(long param0, int* param1, long param2, long param3) {
    long v0;
    long v1;
    int v2;
    long v3;
    long v4;
    long result = 0L;
    long v5 = v3;
    long v6 = param3;
    long v7 = param2;
    do {
        v4 = (unsigned long)(unsigned int)result;
        v2 = (unsigned int)result;
        result = (unsigned long)((unsigned int)result + 1);
        v1 = (unsigned long)*(short*)(v4 * 2L + param0);
        v0 = (unsigned long)(*(short*)(v4 * 2L + param0) & 0xfc00) | ((unsigned long)(((unsigned long)(unsigned int)v1 >>> 16L) & 0xffffffffffffL) << 16);
    }
    while((*(short*)(v4 * 2L + param0) & 0xfc00) == 0xdc00);
    if((unsigned short)v0 != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long v8 = (unsigned long)*(short*)(result * 2L + param0);
        if((*(short*)(result * 2L + param0) & 0xfc00) != 0xdc00) {
            *param1 = 0xfffd;
            result = 0xffffffffL;
        }
        else {
            *param1 = (unsigned int)v1 * 0x400 + (unsigned int)v8 - 56613888;
            result = (unsigned long)(v2 + 2);
        }
    }
    return result;
}

void sub_402750(long param0, unsigned long param1) {
    long v0;
    long* ptr0 = &v0;
    v0 = param0;
    long v1 = 32L;
    char v2 = param1 == 32L;
    char v3 = (long)param1 < 32L;
    char v4 = __parity__((unsigned char)param1 - 32);
    char v5 = param1 < 32L;
    char v6 = (((param1 - 32L) ^ param1) & (param1 ^ 0x20L)) < 0L;
    char v7 = (((param1 - 32L) ^ (param1 ^ 0x20L)) >>> 4L) & 0x1L;
    unsigned long v8 = v5 ? param1: 32L;
    jump *(long*)(v8 * 8L + 4211744L);
}

void sub_402870(long $rdi$1, int $esi, unsigned long $rdx, long $rcx$2) {
    // Decompilation error
}

void sub_40297A() {
    char v0 = *(char*)&gvar_404630 & 0x4 ? 0: 1;
    char v1 = (*(char*)&gvar_404630 & 0x4) < 0;
    char v2 = __parity__(*(char*)&gvar_404630 & 0x4);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_402998: &sub_402983;
}

long sub_402983() {
    long v0 = sub_401DEB();
    gvar_407838 = (unsigned int)v0;
    return -1L;
}

long sub_402998() {
    return sub_401846();
}
