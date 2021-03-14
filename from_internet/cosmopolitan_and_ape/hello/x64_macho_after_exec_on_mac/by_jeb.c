
long start(long param0, long param1) {
    int v0;
    long* ptr0;
    long v1;
    char v2;
    char v3;
    *(char*)&gvar_404630 = 8;
    long v4 = (long)v0;
    long* ptr1 = (long*)&gvar_403018;
    for(long i = 11L; i != 0L; --i) {
        *ptr1 = &gvar_401214;
        ++ptr1;
    }
    long v5 = 0xffffffffL;
    long v6 = &v2;
    while(v5 != 0L) {
        char v7 = *(long*)v6 == 0L;
        v6 += 8L;
        --v5;
        if(!~v7) {
            break;
        }
    }
    sub_401297(v5, param1);
    gvar_40783C |= 1;
    long* ptr2 = (long*)&gvar_403008;
    long v8 = 0x403010L;
    while(ptr2 != v8) {
        long* ptr3 = ptr2;
        long v9 = v8;
        *ptr2{sub_401433}(v8, param1);
        v8 = v9;
        ++ptr2;
    }
    long v10 = sub_40141F(v4, &v3, &v2);
    /*NO_RETURN*/ sub_4017FD(v10 & 0xffffffffL, v1, param1, ptr0);
}

long sub_4011A5(long param0, long* param1, long param2, long param3) {
    long result;
    unsigned int v0;
    unsigned int v1;
    do {
        long v2 = *param1;
        long v3 = *(param1 + 1);
        long* ptr0 = param1;
        int v4 = *(int*)(param1 + 2);
        int v5 = *(int*)((char*)param1 + 20L);
        result = (unsigned long)v1;
        do {
            long v6 = result & 0xffffffffL;
            result = (unsigned long)((unsigned int)result - 1);
            if(*(ptr0 - 3) != v2) {
                int* ptr1 = (int*)(ptr0 - 3);
                long* ptr2 = ptr0;
                ptr0 -= 3;
                v6 = 6L;
                while(1) {
                    if(v6 != 0L) {
                        *(int*)ptr2 = *ptr1;
                        ++ptr1;
                        ptr2 = (long*)((char*)ptr2 + 4L);
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
        long* ptr3 = (long*)(result * 24L + param3);
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
    long v0;
    char* ptr0 = (char*)((long)((long*)((long)&v0 & 0xffffffffL) - 1) & 0xffffffffL);
    long v1 = 8L;
    for(long i = 8L; i != 0L; --i) {
        *ptr0 = 0;
        ++ptr0;
    }
    while(1) {
        *(__SyntheticTypeUnknownP80)((long*)((long)&v0 & 0xffffffffL) + -1) = lidt(*(__SyntheticTypeUnknownP80)((long*)((long)&v0 & 0xffffffffL) - 1));
        ud2();
    }
}

void sub_401240() {
}

long sub_401297(long param0, long param1) {
    char* ptr0;
    long v0;
    char* ptr1;
    char* ptr2;
    long v1;
    long* ptr3;
    long v2 = &gvar_404000;
    char* ptr4 = (char*)&gvar_402E68;
    long v3 = v1;
    long v4 = 0L;
    long v5 = 22L;
    long v6 = 0xffffffff80000007L;
    long v7 = 0xffffffff80000001L;
    long v8 = 7L;
    long v9 = 2L;
    unsigned long* ptr5 = &v0;
    v0 = 1L;
    int v10 = 0;
    do {
        cpuid();
        *(int*)v2 = v10;
        int v11 = (unsigned int)v1;
        v1 = (unsigned long)v10;
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
                long v13 = *ptr5;
                ++ptr5;
                long v14 = (unsigned long)(unsigned char)v11 | ((unsigned long)17 << 8) | ((unsigned long)(((unsigned long)v11 >>> 16L) & 0xffffffffffffL) << 16);
                do {
                    long v15 = (unsigned long)*ptr4;
                    char* ptr6 = ptr4 + 1L;
                    v14 = (unsigned long)(unsigned char)v15 | ((unsigned long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
                    ptr4 = ptr6 + 1L;
                    long v16 = ((unsigned long)*ptr6 | ((unsigned long)((v15 >>> 8L) & 0xffffffffffffffL) << 8)) + &gvar_4026E7;
                    do {
                        *(long*)v2 = v16;
                        v2 += 8L;
                        v14 = (unsigned long)((unsigned char)v14 + 0xff) | ((unsigned long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
                    }
                    while((unsigned char)v14);
                    v14 = (unsigned long)(unsigned char)v14 | ((unsigned long)((unsigned char)(v14 >>> 8L) + 0xff) << 8) | ((unsigned long)((v14 >>> 16L) & 0xffffffffffffL) << 16);
                }
                while((unsigned char)(v14 >>> 8L));
                --ptr5;
                *ptr5 = &loc_4012FF;
                /*BAD_CALL!*/ sub_401636(v2, (long)(ptr4 + 6L));
                --ptr5;
                *ptr5 = &loc_401304;
                /*BAD_CALL!*/ sub_4017EC(ptr1, ptr2);
                --ptr5;
                *ptr5 = 32L;
                long v17 = *ptr5;
                *ptr5 = &loc_401318;
                /*BAD_CALL!*/ sub_4017BE((long*)ptr1, ptr2, &gvar_402764, v17);
                --ptr5;
                *ptr5 = 32L;
                long v18 = *ptr5;
                *ptr5 = &loc_40132C;
                /*BAD_CALL!*/ sub_4017BE((long*)ptr1, ptr2, &gvar_40288A, v18);
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
                *(long*)&ptr1[0] = v19;
                long v20 = *ptr5 + &gvar_4025D0;
                *(long*)&ptr1[8] = *ptr5 + &gvar_4025D0;
                *ptr5 = (long*)(ptr1 + 16L);
                for(long* i = (long*)&gvar_404648; (unsigned long)i < 4212368L; ++i) {
                    long v21 = 0L;
                    long v22 = 0L;
                    do {
                        v20 = (unsigned long)*ptr0 | ((unsigned long)((v20 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        long v23 = (unsigned long)((unsigned int)v20 & 0x7f) << (v21 & 0x3fL);
                        v21 = (unsigned long)((unsigned int)v21 + 7);
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

long sub_40141F(long param0, long param1, long param2) {
    sub_401E0A("hello world", param1, param2);
    return 0L;
}

long sub_401433(long param0, long param1) {
    long v0;
    long v1;
    long v2;
    long v3 = v0;
    char* ptr0 = gvar_406038;
    if(!(*(char*)&gvar_404630 & 0x4)) {
        long v4 = sub_40156C((long)*(int*)(ptr0 + 12L));
        if((unsigned int)v4) {
            goto loc_401458;
        }
    }
    else {
    loc_401458:
        *ptr0 = 1;
    }
    long v5 = v3;
    char v6 = gvar_406050 ? 0: 1;
    v3 = v2;
    long v7 = v5;
    long v8 = v1;
    if(v6) {
        gvar_406050 = &gvar_406058;
        gvar_406048 = 8L;
        sub_40215B(&sub_401FAF, 0L, 0L);
    }
    unsigned long v9 = gvar_406040;
    unsigned long v10 = gvar_406050;
    unsigned long v11 = v9 - 1L;
    while(v11 != -1L) {
        unsigned long* ptr1 = (unsigned long*)(v11 * 8L + v10);
        --v11;
        if(!*(long*)(v11 * 8L + v10 + 8L)) {
            *ptr1 = ptr0;
            return 0L;
        }
    }
    if(v9 + 1L >= gvar_406048) {
        long v12 = sub_402286((long*)&gvar_406050, (unsigned long*)&gvar_406048, 8L, 1L);
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

long sub_40156C(long param0) {
    char v0;
    char v1;
    int v2;
    long v3 = (unsigned long)(gvar_404630 & 0x4);
    if(!(gvar_404630 & 0x4)) {
        unsigned int v4 = gvar_407838;
        long v5 = sub_401609(param0, &v1);
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
        long v7 = /*BAD_CALL!*/ sub_40245F(param0, 1L);
        if((unsigned char)v7) {
            long v8 = sub_401DD2(*(long*)((long)(unsigned int)param0 * 24L + gvar_4076B0));
            v0 = (unsigned int)v8 == 2;
            v3 = v0 ? 1L: 0L;
        }
    }
    return v3 & 0xffffffffL;
}

long sub_401609(long param0, int* param1) {
    long result = sub_4025B0();
    if((unsigned int)result != -1) {
        int v0 = (unsigned int)result;
        sub_40168D(param1);
        result = (long)v0;
    }
    return result;
}

unsigned long sub_401636(long param0, long param1) {
    unsigned long v0 = gvar_403050;
    *(long*)&gvar_4076A0 = 3;
    gvar_4076B0 = &gvar_4076B8;
    gvar_4076A8 = 16L;
    gvar_4076C8 = 1;
    gvar_4076E0 = 1;
    gvar_4076F8 = 1;
    unsigned long v1 = (unsigned long)v0(-10L);
    gvar_4076B8 = v1;
    unsigned long v2 = (unsigned long)v0(-11L);
    gvar_4076D0 = v2;
    unsigned long result = (unsigned long)v0(-12L);
    gvar_4076E8 = result;
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

long sub_4017BE(long* param0, char* param1, long param2, int param3) {
    char v0;
    do {
        long v1 = (unsigned long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long)*(char*)((unsigned long)(((v0 ? 0: 1) * 2) | (gvar_404035 & 0x2 ? 1: 0)) + (long)param1) + param2;
    return *(long*)param1;
}

char sub_4017EC(char* param0, char* param1) {
    char result;
    long v0 = 0L;
    while(1) {
        v0 = (unsigned long)*param1 | ((unsigned long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        result = *(param1 + 1L);
        param1 += 2L;
        if(!v0) {
            return result;
        }
        do {
            *param0 = result;
            ++param0;
            v0 = (unsigned long)((unsigned int)v0 - 1);
        }
        while((unsigned int)v0);
    }
    return result;
}

long sub_4017FD(int param0, long param1, long param2, long* param3) {
    long v0;
    long v1;
    long v2 = v1;
    long v3 = v0;
    sub_4021F0(0L, param1, param2, param3);
    /*NO_RETURN*/ sub_402941((long)param0);
}

long sub_401816() {
    gvar_407838 = gvar_404648;
    return -1L;
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

long sub_401D0B(long* param0, long* param1, long param2, int* param3) {
    long result;
    long v0;
    long v1;
    char v2;
    int v3;
    long v4;
    long v5;
    long* ptr0;
    long v6 = v4;
    long* ptr1 = param1;
    long v7 = v5;
    long i;
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
    long v8 = *ptr0;
    int* ptr4 = ptr2;
    long v9 = gvar_403060(v8, v0, v1, (long)&v3);
    if(!(unsigned int)v9) {
        result = sub_40297A();
    }
    else if(!v3) {
        for(long j = 0L; j != i; ++j) {
        }
    loc_401D8E:
        gvar_403020(*ptr0);
        result = (long)v3;
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

long sub_401E0A(char* param0, long param1, long param2) {
    long result;
    long v0;
    long v1;
    long v2 = gvar_406038;
    long v3 = v0;
    long v4 = sub_401EAA(param0, v2, param2);
    if((unsigned int)v4 != -1) {
        long v5 = sub_401E45(10L, v2, param2, v1);
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

long sub_401E45(long param0, long param1, long param2, long param3) {
    long result;
    if((unsigned int)param0 != -1) {
        *(char*)((unsigned long)*(int*)(param1 + 20L) + *(long*)(param1 + 24L)) = (unsigned char)param0;
        result = (long)((*(int*)(param1 + 20L) + 1) & (*(int*)(param1 + 32L) - 1));
        int v0 = *(int*)(param1 + 16L);
        *(int*)(param1 + 20L) = (unsigned int)result;
        if((unsigned int)result != v0) {
            param3 = (unsigned long)*(char*)param1 | ((unsigned long)((param3 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)param3 != 2 && (((unsigned char)param3 + 0xff) || (unsigned char)param0 != 10)) {
                goto loc_401E9A;
            }
        }
        param3 = *(long*)(param1 + 48L);
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

long sub_401EAA(char* param0, long param1, long param2) {
    long v0;
    int v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6 = 0L;
    long v7 = v3;
    char* ptr0 = param0;
    long v8 = v5;
    long v9 = v4;
    long v10 = param1;
loc_401EBE:
    do {
        param2 = (unsigned long)*ptr0 | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)param2) {
            ++ptr0;
            *(char*)((unsigned long)*(int*)(v10 + 20L) + *(long*)(v10 + 24L)) = (unsigned char)param2;
            param1 = (long)*(int*)(v10 + 32L);
            int v11 = ((unsigned int)param1 - 1) & (*(int*)(v10 + 20L) + 1);
            long v12 = (unsigned long)*(int*)(v10 + 16L);
            *(int*)(v10 + 20L) = v11;
            if((unsigned int)v12 != v11) {
                param1 = (unsigned long)*(char*)v10 | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
                if((unsigned char)param1 != 2 && (((unsigned char)param1 + 0xff) || (unsigned char)param2 != 10)) {
                    v6 = (unsigned long)((unsigned int)v6 + 1);
                    goto loc_401EBE;
                }
            }
            param2 = *(long*)(v10 + 48L);
            if(param2) {
                v2 = param2(v12);
                goto loc_401F20;
            }
            if((unsigned int)v12 != v11) {
                v6 = (unsigned long)((unsigned int)v6 + 1);
                goto loc_401EBE;
            }
            else {
                v2 = sub_401F6E(v10);
            loc_401F20:
                v1 = (unsigned int)v2;
                if((unsigned int)v2 != -1) {
                    v6 = (unsigned long)((unsigned int)v6 + 1);
                    goto loc_401EBE;
                }
                else {
                    long v13 = sub_401FA1(v10);
                    if((long)(unsigned int)v13 == gvar_404650) {
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
            return (unsigned long)v1;
        }
    }
    while((unsigned char)param2);
    v1 = (unsigned int)v6 + 1;
    return (unsigned long)v1;
}

long sub_401F6E(long param0) {
    return sub_401F76(param0, -1);
}

long sub_401F76(long param0, int param1) {
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

long sub_401F97(long param0) {
    return *(int*)(param0 + 8L) == -1 ? 1L: 0L;
}

long sub_401FA1(long param0) {
    return *(int*)(param0 + 8L) < 0 ? 0L: (unsigned long)*(int*)(param0 + 8L);
}

long sub_401FAF(long param0) {
    int v0;
    if(!param0) {
        v0 = 0;
        for(long i = gvar_406040 - 1L; i != -1L; --i) {
            if(*(long*)(i * 8L + gvar_406050)) {
                long v1 = sub_401FAF();
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
        if(*(int*)(param0 + 12L) != -1 && ((unsigned long)*(int*)(param0 + 4L) & *(long*)&gvar_404688)) {
            v0 = *(int*)(param0 + 8L);
            if(!v0) {
                while(*(int*)(param0 + 16L) != *(int*)(param0 + 20L)) {
                    long v2 = param0;
                    long v3 = sub_402083(param0);
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
                long v4 = sub_401F76(param0, v0);
                v0 = (int)v4;
            }
            else {
                v0 = 0;
            }
        }
    }
    return (unsigned long)v0;
}

long sub_402083(long param0) {
    long result;
    long v0;
    long v1 = v0;
    long v2 = (unsigned long)*(int*)(param0 + 16L);
    unsigned int v3 = *(unsigned int*)(param0 + 20L);
    if((unsigned int)v2 >= v3) {
        v3 = *(unsigned int*)(param0 + 32L);
    }
    int v4 = v3 - (unsigned int)v2;
    long v5 = sub_40247A((long)*(int*)(param0 + 12L), (long*)(*(long*)(param0 + 24L) + v2), (long)v4);
    if(v5 == -1L) {
        result = sub_402150(param0);
    }
    else {
        *(int*)(param0 + 16L) = ((unsigned int)v5 + *(int*)(param0 + 16L)) & (*(int*)(param0 + 32L) - 1);
        result = (long)v4;
    }
    return result;
}

long sub_402150(long param0) {
    return sub_401F76(param0, gvar_407838);
}

long sub_40215B(long param0, long param1, long param2) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    long v5 = v0;
    int* ptr0 = *(long*)&gvar_4060A0;
    if(!ptr0) {
        ptr0 = (int*)&gvar_4060A8;
        *(long*)&gvar_4060A0 = 168;
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
        long* ptr1 = (long*)((unsigned long)v7 * 24L + (long)ptr0);
        result = 0L;
        *(ptr1 + 2) = param0;
        *(ptr1 + 3) = param1;
        *(ptr1 + 4) = param2;
    }
    return result;
}

long sub_4021F0(long param0, long param1, long param2, long* param3) {
    long v0;
    long v1 = v0;
    long result = param2;
loc_402204:
    for(int* i = *(long*)&gvar_4060A0; i; i = *(long*)&gvar_4060A0) {
        while(1) {
            long v2 = (unsigned long)*i;
            while(v2) {
                if((unsigned int)v2 != 0) {
                    int j;
                    for(j = 0; !(((unsigned int)v2 >>> j) & 0x1); ++j) {
                    }
                    param3 = (unsigned long)j | ((unsigned long)(unsigned int)(long*)((long)param3 >>> 32L) << 32);
                }
                int v3 = 1 << (long)(long*)((long)param3 & 0x1fL);
                param3 = (long*)((long)param3 & 0xffffffffL);
                v2 &= (unsigned long)~v3;
                if(!param0 || *((long*)((long)(long*)((long)param3 * 24L) + (long)i) + 4) == param0) {
                    *i = ~v3 & *i;
                    param3 = (long*)((long)(long*)((long)param3 * 24L) + (long)i);
                    param2 = *(param3 + 2);
                    if(param2) {
                        param2((long)param3);
                        goto loc_402204;
                    }
                }
            }
            int* ptr0 = *(unsigned long*)(i + 2);
            if(!param0) {
                *(long*)&gvar_4060A0 = ptr0;
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

long sub_402286(long* param0, unsigned long* param1, long param2, long param3) {
    unsigned long* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    unsigned long v4;
    long v5 = v1;
    long v6 = v2;
    long v7 = v3;
    sub_4023CE(param0[0]);
    sub_4023CE(param0[0]);
    unsigned long v8 = *ptr0;
    unsigned long v9 = param0[0] != 0L ? (unsigned long)((v8 >>> 1) + v8): 31L / v4 < 4L ? 4L: 31L / v4;
    if(!v8 || !((v4 | v8) & 0xffffffffffff0000L) || v4 * v8 / v8 == v4) {
        unsigned long v10 = (unsigned long)(v0 + v9 + 1L);
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

long sub_4023CE(long param0) {
    long result;
    long v0;
    long v1;
    if((unsigned long)(param0 - 0x600000000000L) > 0xfffffffffffL) {
        long v2 = gvar_4063C0;
        long v3 = v0;
        long v4 = v1;
        long v5 = sub_40243F((int)(param0 >>> 16L), 4219848L, v2);
        if(v5) {
            result = (unsigned int)(param0 >>> 16L) == *(int*)(v5 * 8L + (long)&gvar_4063C0) ? 1L: (unsigned int)(param0 >>> 16L) == *(int*)((v5 - 1L) * 8L + 0x4063ccL) ? 1L: 0L;
        }
        return result;
    }
    return 0L;
}

long sub_40243F(int param0, long param1, long param2) {
    long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        long v1 = (unsigned long)(((unsigned int)v0 + (unsigned int)param2) >> 1);
        if(*(int*)(((unsigned long)(((unsigned int)v0 + (unsigned int)param2) >> 1) | ((unsigned long)((v1 >>> 31L) & 0x1L ? -1: 0) << 32)) * 8L + param1) <= param0) {
            v0 = (v1 + 1L) & 0xffffffffL;
        }
        else {
            param2 = v1 & 0xffffffffL;
        }
    }
    return (long)(unsigned int)v0;
}

long sub_40245F(int param0, int param1) {
    return !param0 ? 0L: *(int*)((long)param0 * 24L + gvar_4076B0 + 16L) == param1 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40247A(long param0, long* param1, long param2) {
    long result;
    long* ptr0;
    long v0;
    long v1;
    if((unsigned int)param0 == -1) {
        long v2 = sub_401826();
        result = (long)(unsigned int)v2;
    }
    else {
        long v3 = sub_40245F((long)(unsigned int)param0 & 0xffffffffL, 5L);
        if((unsigned char)v3) {
            result = 0L(-1L, 1L);
        }
        else if(!(*(char*)&gvar_404630 & 0x4)) {
            result = sub_4025C0();
        }
        else {
            long v4 = sub_40245F((long)(unsigned int)param0 & 0xffffffffL, 2L);
            if((unsigned char)v4) {
                result = 0L(0L, 1L, 0L, 0L);
            }
            else {
                long v5 = sub_40245F((long)(unsigned int)param0 & 0xffffffffL, 1L);
                if(!(unsigned char)v5) {
                    long v6 = sub_40245F((long)(unsigned int)param0 & 0xffffffffL, 4L);
                    if((unsigned char)v6) {
                        long v7 = (long)(unsigned int)param0 * 24L + gvar_4076B0;
                        long v8 = v0;
                        return sub_401D0B(v7, (long)&ptr0, 1L, -1L, v1);
                    }
                    result = sub_401816();
                }
                else {
                    long v7 = (long)(unsigned int)param0 * 24L + gvar_4076B0;
                    long v8 = v0;
                    result = sub_401D0B(v7, (long)&ptr0, 1L, -1L, v1);
                }
            }
        }
    }
    return result;
}

long sub_4025B0() {
    jump gvar_404638;
}

long sub_4025C0() {
    jump gvar_404638;
}

long sub_40262D(long param0, int* param1, long param2, long param3) {
    return sub_40266F(param0, param1, param2, param3);
}

long sub_40266F(long param0, int* param1, long param2, long param3) {
    long v0;
    long v1;
    long v2;
    long result = 0L;
    long v3 = v2;
    long v4 = param3;
    long v5 = param2;
    do {
        long v6 = result & 0xffffffffL;
        v0 = result & 0xffffffffL;
        result = (unsigned long)((unsigned int)result + 1);
        v1 = (unsigned long)*(short*)(v6 * 2L + param0);
    }
    while(((unsigned short)v1 & 0xfc00) == 0xdc00);
    if(((unsigned short)v1 & 0xfc00) != 0xd800) {
        *param1 = (unsigned int)v1;
    }
    else {
        long v7 = (unsigned long)*(short*)(result * 2L + param0);
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

void sub_402750(long param0, unsigned long param1) {
    long v0 = param0;
    jump *(long*)((param1 < 32L ? param1: 32L) * 8L + 4211744L);
}

void sub_402870(long param0, long param1, unsigned long param2, long param3) {
    long v0 = param3;
    jump *(long*)((param2 < 32L ? param2: 32L) * 8L + 4212008L);
}

long sub_402941(long param0) {
    gvar_40783C |= 4;
    if((*(char*)&gvar_404630 & 0x4)) {
        while(1) {
            *(long*)&gvar_403018(param0 & 0xffL);
        }
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x402972 = lidt(*(__SyntheticTypeUnknownP80)0x402972);
    hlt();
}

long sub_40297A() {
    if((*(char*)&gvar_404630 & 0x4)) {
        long v0 = sub_401DEB();
        gvar_407838 = (unsigned int)v0;
        return -1L;
    }
    return sub_401846();
}
