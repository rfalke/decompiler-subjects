
long start(long param0, long param1, long param2) {
    long* ptr0;
    char v0;
    char v1;
    gvar_4362B8 = 8;
    long* ptr1 = (long*)&gvar_405010;
    for(long i = 20L; i != 0L; --i) {
        *ptr1 = &gvar_40126D;
        ++ptr1;
    }
    long v2 = 0xffffffffL;
    long* ptr2 = &v0;
    while(v2 != 0L) {
        char v3 = *ptr2 == 0L;
        ++ptr2;
        --v2;
        if(!~v3) {
            break;
        }
    }
    sub_4012F0(v2, param1, param2);
    gvar_437FB4 |= 1;
    long* ptr3 = (long*)&gvar_405008;
    long v4 = &gvar_405008;
    while(ptr3 != v4) {
        long* ptr4 = ptr3;
        long v5 = v4;
        *ptr3(v4);
        v4 = v5;
        ptr3 = ptr4 + 1;
    }
    long v6 = sub_401460();
    /*NO_RETURN*/ sub_40153D(v6 & 0xffffffffL, &v1, param1, ptr0);
}

long sub_401000() {
    gvar_437FB4 |= 2;
    if(!(gvar_4362B8 & 0x4)) {
        syscall();
        syscall();
        syscall();
    }
    /*NO_RETURN*/ sub_4046C1(134L);
}

long sub_401158(long param0, int param1, long param2, long* param3) {
    long v0;
    long v1 = 39L;
    while(1) {
        --param1;
        v0 = (unsigned long)((unsigned int)(param0 >>> (v1 & 0x3fL)) & 0x1ff);
        if(param1 == -1) {
            break;
        }
        else {
            long* ptr0 = (long*)(v0 * 8L + param2);
            if(!*ptr0) {
                long v2 = *param3 - 0x1000L;
                *param3 = *param3 - 0x1000L;
                *ptr0 = v2 | 0x3L;
            }
            v1 = (unsigned long)((unsigned int)v1 - 9);
            param2 = *ptr0 & 0x3fffffffff000L;
        }
    }
    return v0 * 8L + param2;
}

long sub_4011FE(long param0, long* param1, long param2, long param3) {
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

void sub_401270() {
    int3();
}

void sub_40127E() {
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

void sub_401299() {
}

long sub_4012F0(long param0, long param1, long param2) {
    long v0;
    char* ptr0;
    long v1;
    long* ptr1;
    char* ptr2;
    int v2;
    long v3;
    long* ptr3;
    long* ptr4;
    rdtsc();
    *(int*)&gvar_436000 = v2;
    long v4 = (unsigned long)v2;
    *(int*)((char*)&gvar_436000 + 4) = (unsigned int)param1;
    unsigned char* ptr5 = (unsigned char*)&gvar_436008;
    long v5 = v3;
    long v6 = 0L;
    long v7 = 22L;
    long v8 = 0xffffffff80000007L;
    long v9 = 0xffffffff80000001L;
    long v10 = 7L;
    long v11 = 2L;
    unsigned long* ptr6 = &v1;
    v1 = 1L;
    int v12 = 0;
    do {
        cpuid();
        *(int*)ptr5 = v12;
        int v13 = (unsigned int)v3;
        v3 = (unsigned long)v12;
        *(int*)(ptr5 + 4L) = v13;
        *(int*)(ptr5 + 8L) = 0;
        int v14 = (unsigned int)v4;
        v4 = 0L;
        *(int*)(ptr5 + 12L) = v14;
        ptr5 += 16L;
    loc_401328:
        while(1) {
            v12 = (unsigned int)*ptr6;
            ++ptr6;
            if(!v12) {
                long v15 = *ptr6;
                *(long**)ptr5 = ptr3;
                *ptr6 = &loc_401344;
                /*BAD_CALL!*/ sub_4014BA((long)(ptr5 + 8L), &gvar_404D28);
                ptr1[0] = -1L;
                ptr1[1] = -1L;
                ptr1[2] = &gvar_40462E;
                --ptr6;
                *ptr6 = 32L;
                long v16 = *ptr6;
                *ptr6 = &loc_401367;
                /*BAD_CALL!*/ sub_40150F(ptr1 + 3, ptr2, &gvar_404434, v16);
                --ptr6;
                *ptr6 = 32L;
                long v17 = *ptr6;
                *ptr6 = &loc_40137B;
                /*BAD_CALL!*/ sub_40150F(ptr1, ptr2, &gvar_40457C, v17);
                ptr1[0] = *ptr4;
                ptr1[1] = &gvar_404690;
                --ptr6;
                *ptr6 = v15;
                --ptr6;
                *ptr6 = ptr2;
                --ptr6;
                if((*(char*)&ptr1[2] & 0x8)) {
                    *ptr6 = 69L;
                    --ptr6;
                    *ptr6 = 8L;
                    ptr0 = (char*)&gvar_404E30;
                }
                else if((*(char*)&ptr1[2] & 0x20)) {
                    *ptr6 = 48L;
                    --ptr6;
                    *ptr6 = 32L;
                    ptr0 = (char*)&gvar_404D79;
                }
                else if((*(char*)&ptr1[2] & 0x4)) {
                    *ptr6 = 34L;
                    --ptr6;
                    *ptr6 = 4L;
                    ptr0 = (char*)&gvar_404DF1;
                }
                else if(*ptr3) {
                    *ptr6 = 0L;
                    --ptr6;
                    *ptr6 = 1L;
                    ptr0 = (char*)&gvar_404DA2;
                }
                else {
                    *ptr6 = 42L;
                    --ptr6;
                    *ptr6 = 16L;
                    ptr0 = (char*)&gvar_404DC9;
                }
                long v18 = *ptr6;
                ++ptr6;
                ptr1[2] = v18;
                long v19 = *ptr6 + &gvar_404310;
                ptr1[3] = *ptr6 + &gvar_404310;
                *ptr6 = ptr1 + 4;
                for(long* i = (long*)&gvar_4362E8; (unsigned long)i < 4416472L; ++i) {
                    long v20 = 0L;
                    v0 = 0L;
                    do {
                        v19 = (unsigned long)*ptr0 | ((unsigned long)((v19 >>> 8L) & 0xffffffffffffffL) << 8);
                        ++ptr0;
                        param2 = (unsigned long)((unsigned int)v19 & 0x7f) << (v20 & 0x3fL);
                        v20 = (unsigned long)((unsigned int)v20 + 7);
                        v0 |= param2;
                    }
                    while((unsigned char)v19 < 0);
                    if(((unsigned char)v19 & 0x40)) {
                        v0 |= -1L << (v20 & 0x3fL);
                    }
                    v19 = *i ? *i: v0;
                    *i = *i ? *i: v0;
                }
                long* ptr7 = *ptr6;
                ++ptr6;
                long v21 = *ptr6;
                ptr6 += 2;
                unsigned long* ptr8 = ptr6;
                ptr6 -= 5;
                *ptr6 = &loc_401440;
                /*BAD_CALL!*/ gvar_405080(4423552L, v0, param2, -1L);
                *ptr7 = &sub_403817;
                ptr6 += 3;
                *ptr6 = &loc_401450;
                /*BAD_CALL!*/ sub_401466((long)(ptr7 + 1), v21);
                ptr1[0] = &sub_403312;
                ptr1[1] = &sub_403C02;
                jump *(long*)(ptr8 + 1);
            }
        }
    }
    while((unsigned char)v12 <= *(char*)&gvar_436008);
    ptr5 += 16L;
    goto loc_401328;
}

long sub_401460() {
    return 42L;
}

long sub_401466(long param0, long param1) {
    long result;
    sub_403CBB();
    return result;
}

unsigned long sub_4014BA(long param0, long param1) {
    unsigned long v0 = gvar_405078;
    gvar_437DE0 = 3L;
    gvar_437DF0 = &gvar_437DF8;
    gvar_437DE8 = 16L;
    gvar_437E08 = 1;
    gvar_437E20 = 1;
    gvar_437E38 = 1;
    unsigned long v1 = (unsigned long)v0(-10L);
    gvar_437DF8 = v1;
    unsigned long v2 = (unsigned long)v0(-11L);
    gvar_437E10 = v2;
    unsigned long result = (unsigned long)v0(-12L);
    gvar_437E28 = result;
    return result;
}

long sub_40150F(long* param0, char* param1, long param2, int param3) {
    char v0;
    do {
        long v1 = (unsigned long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long)*(char*)((unsigned long)(((v0 ? 0: 1) * 2) | (gvar_43603D & 0x2 ? 1: 0)) + (long)param1) + param2;
    return *(long*)param1;
}

long sub_40153D(int param0, long param1, long param2, long* param3) {
    long v0;
    long v1;
    long v2 = v1;
    long v3 = v0;
    sub_4041E6(0L, param1, param2, param3);
    /*NO_RETURN*/ sub_4046C1((long)param0);
}

long sub_401556() {
    gvar_437FB0 = gvar_436340;
    return -1L;
}

long sub_401566() {
    gvar_437FB0 = gvar_436348;
    return -1L;
}

long sub_401A19(long param0) {
    return *(long*)&gvar_405010(param0);
}

long sub_401A32(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    unsigned long v0 = gvar_405018;
    long v1 = param7;
    long v2 = param6;
    long v3 = param5;
    long v4 = param4;
    return v0(param0, param1, param2, param3);
}

long sub_401A48() {
    return gvar_405070();
}

long sub_401A5E(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    unsigned long v0 = gvar_405088;
    long v1 = param7;
    long v2 = param6;
    long v3 = param5;
    long v4 = param4;
    return v0(param0, param1, param2, param3);
}

long sub_401A74(long param0) {
    return gvar_405098(param0);
}

void sub_401AC6() {
    jump gvar_4362C8;
}

void sub_401ACC() {
    jump gvar_4362D0;
}

unsigned long sub_401AD2(long param0, long param1, long param2) {
    long v0 = (unsigned long)((unsigned int)param1 & 0xf);
    if(((unsigned int)param1 & 0xf)) {
        v0 = (unsigned long)((0 - ((unsigned int)param1 + 16)) & 0xf);
    }
    long v1 = v0 + param1;
    long v2 = param2 - v0;
    *(long*)(param0 + 40L) = v1;
    *(long*)(param0 + 16L) = v2;
    *(long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long result = gvar_4367C0;
    *(long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long*)(param0 + 48L) = result;
    return result;
}

long sub_401B19(long param0) {
    long v0;
    long v1;
    long v2;
    long v3;
    long result = 0L;
    long v4 = v3;
    long v5 = v1;
    long v6 = param0;
    long v7 = v2;
    long* ptr0 = *(unsigned long*)(param0 + 0x388L);
    if(ptr0) {
        int v8 = *(int*)(ptr0 + 3);
        if(((unsigned char)v8 & 0x1)) {
            int v9 = v8 & 0x8;
            if(!v9) {
                param0 = *ptr0;
                long v10 = (unsigned long)((unsigned int)param0 & 0xf);
                if(((unsigned int)param0 & 0xf)) {
                    v10 = (unsigned long)((0 - ((unsigned int)param0 + 16)) & 0xf);
                }
                long v11 = v10 + param0;
                result = 0L;
                long v12 = *(long*)(v11 + 8L);
                if(!((unsigned long)((unsigned int)v12 & 0x3) - 1L)) {
                    result = *(ptr0 + 1);
                    long v13 = (v12 & 0xfffffffffffffff8L) + v11;
                    long v14 = param0 + result - 80L;
                    if((unsigned long)v13 >= (unsigned long)v14) {
                        long v15 = *(ptr0 + 2);
                        if(*(long*)(v6 + 32L) == v11) {
                            *(long*)(v6 + 32L) = 0L;
                            *(long*)(v6 + 8L) = 0L;
                        }
                        else {
                            long v16 = *(long*)(v11 + 24L);
                            long v17 = *(long*)(v11 + 48L);
                            if(v16 != v11) {
                                v14 = *(long*)(v11 + 16L);
                                *(long*)(v14 + 24L) = v16;
                                *(long*)(v16 + 16L) = v14;
                            }
                            else {
                                v16 = *(long*)(v16 + 40L);
                                v13 = v11 + 40L;
                                if(!v16) {
                                    v16 = *(long*)(v11 + 32L);
                                    if(v16) {
                                        v13 = v11 + 32L;
                                        goto loc_401BFB;
                                    }
                                }
                                else {
                                loc_401BFB:
                                    v14 = v16;
                                loc_401BFE:
                                    do {
                                        v0 = v13;
                                        v16 = v14;
                                        v13 = v14 + 40L;
                                        v14 = *(long*)(v14 + 40L);
                                        if(v14) {
                                            goto loc_401BFE;
                                        }
                                        else {
                                            v14 = *(long*)(v16 + 32L);
                                            v13 = v16 + 32L;
                                        }
                                    }
                                    while(v14);
                                    *(long*)v0 = 0L;
                                }
                            }
                            if(v17) {
                                v13 = (long)*(int*)(v11 + 56L);
                                v14 = (long)*(int*)(v11 + 56L) * 8L + v6;
                                if(*(long*)(v14 + 600L) == v11) {
                                    *(long*)(v14 + 600L) = v16;
                                    if(v16) {
                                        goto loc_401C49;
                                    }
                                    else {
                                        *(int*)(v6 + 4L) = (__rol__(-2, v13 & 0x1fL)) & *(int*)(v6 + 4L);
                                    }
                                }
                                else {
                                    if(*(long*)(v17 + 32L) == v11) {
                                        *(long*)(v17 + 32L) = v16;
                                    }
                                    else {
                                        *(long*)(v17 + 40L) = v16;
                                    }
                                    if(v16) {
                                    loc_401C49:
                                        long v18 = *(long*)(v11 + 32L);
                                        *(long*)(v16 + 48L) = v17;
                                        if(v18) {
                                            *(long*)(v16 + 32L) = v18;
                                            *(long*)(v18 + 48L) = v16;
                                        }
                                        v14 = *(long*)(v11 + 40L);
                                        if(v14) {
                                            *(long*)(v16 + 40L) = v14;
                                            *(long*)(v14 + 48L) = v16;
                                        }
                                    }
                                }
                            }
                        }
                        long v19 = v15;
                        long v20 = sub_403D56(param0, result, v14, v13);
                        if(!(unsigned int)v20) {
                            long v21 = v19;
                            *(long*)(v6 + 856L) = *(long*)(v6 + 856L) - result;
                            *(long*)(v6 + 0x388L) = v21;
                        }
                        else {
                            long v22 = (v12 & 0xfffffffffffffff8L) >>> 8;
                            int v23 = (unsigned int)v22;
                            if((unsigned int)v22) {
                                v23 = 31;
                                if((unsigned int)v22 <= 0xffff) {
                                    if((unsigned int)v22 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)v22 >>> i); --i) {
                                        }
                                        v22 = (unsigned long)i | ((unsigned long)(unsigned int)(v22 >>> 32L) << 32);
                                    }
                                    v23 = (31 - ((unsigned int)v22 ^ 0x1f)) * 2 + ((unsigned int)((v12 & 0xfffffffffffffff8L) >>> ((unsigned long)(38 - ((unsigned int)v22 ^ 0x1f)) & 0x3fL)) & 0x1);
                                }
                            }
                            int v24 = *(int*)(v6 + 4L);
                            *(int*)(v11 + 56L) = v23;
                            *(long*)(v11 + 40L) = 0L;
                            *(long*)(v11 + 32L) = 0L;
                            if(!((1 << ((unsigned long)v23 & 0x1fL)) & v24)) {
                                *(int*)(v6 + 4L) = (1 << ((unsigned long)v23 & 0x1fL)) | v24;
                                *(long*)((long)v23 * 8L + v6 + 600L) = v11;
                                *(long*)(v11 + 48L) = (long)v23 * 8L + v6 + 600L;
                            loc_401D92:
                                *(long*)(v11 + 24L) = v11;
                                *(long*)(v11 + 16L) = v11;
                            }
                            else {
                                v14 = *(long*)((long)v23 * 8L + v6 + 600L);
                                if(v23 != 31) {
                                    v9 = 57 - (v23 >>> 1);
                                }
                                v13 = (v12 & 0xfffffffffffffff8L) << ((unsigned long)v9 & 0x3fL);
                                while((*(long*)(v14 + 8L) & 0xfffffffffffffff8L) != (v12 & 0xfffffffffffffff8L)) {
                                    long v25 = v13;
                                    v13 *= 2L;
                                    long v26 = *(long*)((4L - (v25 >> 63)) * 8L + v14);
                                    if(v26) {
                                        v14 = v26;
                                    }
                                    else {
                                        *(long*)((4L - (v25 >> 63)) * 8L + v14) = v11;
                                        *(long*)(v11 + 48L) = v14;
                                        goto loc_401D92;
                                    }
                                }
                                long v27 = *(long*)(v14 + 16L);
                                *(long*)(v27 + 24L) = v11;
                                *(long*)(v14 + 16L) = v11;
                                *(long*)(v11 + 16L) = v27;
                                *(long*)(v11 + 24L) = v14;
                                *(long*)(v11 + 48L) = 0L;
                            }
                            result = 0L;
                            *(long*)(v6 + 56L) = 128L;
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
    *(long*)(v6 + 56L) = 128L;
    return result;
}

long sub_401F12(int* param0, long param1, long param2, long param3) {
    long* ptr0;
    long v0;
    long* ptr1;
    long* ptr2;
    long* ptr3;
    long v1 = param1;
    long result = *(long*)(v1 + 8L);
    long* ptr4 = (long*)(param2 + param1);
    if(!((unsigned char)result & 0x1)) {
        ptr3 = *(long**)v1;
        v1 -= (long)ptr3;
        if((unsigned char)result & 0x3) {
            param2 += (long)ptr3;
            if(*(long*)(param0 + 8) == v1) {
                result = *(ptr4 + 1);
                if(((unsigned int)result & 0x3) == 3) {
                    *(long*)(param0 + 2) = param2;
                    *(ptr4 + 1) = result & 0xfffffffffffffffeL;
                    result = param2 | 0x1L;
                    *(long*)(v1 + 8L) = param2 | 0x1L;
                    *ptr4 = param2;
                    return result;
                }
                goto loc_40209E;
            }
            else {
                result = *(long*)(v1 + 24L);
            }
            if((unsigned long)ptr3 <= 0xffL) {
                long v2 = *(long*)(v1 + 16L);
                if(result == v2) {
                    result = (long)__rol__(-2, (long)((long)ptr3 >>> 3) & 0x1fL);
                    *param0 = (__rol__(-2, (long)((long)ptr3 >>> 3) & 0x1fL)) & *param0;
                }
                else {
                    *(long*)(v2 + 24L) = result;
                    *(long*)(result + 16L) = v2;
                }
            }
            else {
                long v3 = *(long*)(v1 + 48L);
                if(result != v1) {
                    param3 = *(long*)(v1 + 16L);
                    *(long*)(param3 + 24L) = result;
                    *(long*)(result + 16L) = param3;
                }
                else {
                    result = *(long*)(v1 + 40L);
                    ptr2 = (long*)(v1 + 40L);
                    if(!result) {
                        result = *(long*)(v1 + 32L);
                        if(result) {
                            ptr2 = (long*)(v1 + 32L);
                            goto loc_401FCF;
                        }
                    }
                    else {
                    loc_401FCF:
                        param3 = result;
                    loc_401FD2:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long*)(param3 + 40L);
                            param3 = *(long*)(param3 + 40L);
                            if(param3) {
                                goto loc_401FD2;
                            }
                            else {
                                param3 = *(long*)(result + 32L);
                                ptr2 = (long*)(result + 32L);
                            }
                        }
                        while(param3);
                        *ptr1 = 0L;
                    }
                }
                if(v3) {
                    long v4 = (long)*(int*)(v1 + 56L);
                    ptr2 = (long*)(v4 * 8L + (long)param0);
                    if(*(ptr2 + 75) == v1) {
                        *(ptr2 + 75) = result;
                        if(result) {
                            goto loc_402022;
                        }
                        else {
                            result = (long)__rol__(-2, v4 & 0x1fL);
                            *(param0 + 1) = (__rol__(-2, v4 & 0x1fL)) & *(param0 + 1);
                        }
                    }
                    else {
                        if(*(long*)(v3 + 32L) == v1) {
                            *(long*)(v3 + 32L) = result;
                        }
                        else {
                            *(long*)(v3 + 40L) = result;
                        }
                        if(result) {
                        loc_402022:
                            long v5 = *(long*)(v1 + 32L);
                            *(long*)(result + 48L) = v3;
                            if(v5) {
                                *(long*)(result + 32L) = v5;
                                *(long*)(v5 + 48L) = result;
                            }
                            param3 = *(long*)(v1 + 40L);
                            if(param3) {
                                *(long*)(result + 40L) = param3;
                                *(long*)(param3 + 48L) = result;
                            }
                        }
                    }
                }
            }
            goto loc_40209E;
        }
        else {
            v0 = (long)((long*)(param2 + (long)ptr3) + 4);
            result = sub_403D56(v1, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long*)(param0 + 214) = *(long*)(param0 + 214) - v0;
            return result;
        }
    }
    else {
    loc_40209E:
        ptr3 = *(unsigned long*)(ptr4 + 1);
        if(!((unsigned char)ptr3 & 0x2)) {
            ptr1 = *(unsigned long*)(param0 + 8);
            if(*(long*)(param0 + 10) != ptr4) {
                if(ptr4 == ptr1) {
                    param2 += *(long*)(param0 + 2);
                    *(long*)(param0 + 8) = v1;
                    *(long*)(param0 + 2) = param2;
                    result = param2 | 0x1L;
                    *(long*)(v1 + 8L) = param2 | 0x1L;
                    *(long*)(param2 + v1) = param2;
                }
                else {
                    ptr3 = (long*)((long)ptr3 & 0xfffffffffffffff8L);
                    long v6 = *(ptr4 + 3);
                    param2 += (long)ptr3;
                    if((unsigned long)ptr3 <= 248L) {
                        ptr4 = *(unsigned long*)(ptr4 + 2);
                        if(v6 == ptr4) {
                            *param0 = (__rol__(-2, (long)((long)ptr3 >>> 3) & 0x1fL)) & *param0;
                        }
                        else {
                            *(ptr4 + 3) = v6;
                            *(unsigned long*)(v6 + 16L) = ptr4;
                        }
                    }
                    else {
                        ptr3 = *(unsigned long*)(ptr4 + 6);
                        if(v6 != ptr4) {
                            param3 = *(ptr4 + 2);
                            *(long*)(param3 + 24L) = v6;
                            *(long*)(v6 + 16L) = param3;
                        }
                        else {
                            v6 = *(ptr4 + 5);
                            ptr2 = ptr4 + 5;
                            if(!v6) {
                                v6 = *(ptr4 + 4);
                                if(v6) {
                                    ptr2 = ptr4 + 4;
                                    goto loc_40217D;
                                }
                            }
                            else {
                            loc_40217D:
                                param3 = v6;
                            loc_402180:
                                do {
                                    ptr0 = ptr2;
                                    v6 = param3;
                                    ptr2 = (long*)(param3 + 40L);
                                    param3 = *(long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_402180;
                                    }
                                    else {
                                        param3 = *(long*)(v6 + 32L);
                                        ptr2 = (long*)(v6 + 32L);
                                    }
                                }
                                while(param3);
                                *ptr0 = 0L;
                            }
                        }
                        if(ptr3) {
                            long v7 = (long)*(int*)(ptr4 + 7);
                            ptr2 = (long*)(v7 * 8L + (long)param0);
                            if(*(ptr2 + 75) == ptr4) {
                                *(ptr2 + 75) = v6;
                                if(v6) {
                                    goto loc_4021CC;
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
                                loc_4021CC:
                                    long v8 = *(ptr4 + 4);
                                    *(unsigned long*)(v6 + 48L) = ptr3;
                                    if(v8) {
                                        *(long*)(v6 + 32L) = v8;
                                        *(long*)(v8 + 48L) = v6;
                                    }
                                    param3 = *(ptr4 + 5);
                                    if(param3) {
                                        *(long*)(v6 + 40L) = param3;
                                        *(long*)(param3 + 48L) = v6;
                                    }
                                }
                            }
                        }
                    }
                    result = param2 | 0x1L;
                    *(long*)(v1 + 8L) = param2 | 0x1L;
                    *(long*)(param2 + v1) = param2;
                    if(v1 != ptr1) {
                        goto loc_402259;
                    }
                    else {
                        *(long*)(param0 + 2) = param2;
                    }
                }
                return result;
            }
            long v9 = *(long*)(param0 + 4) + param2;
            *(long*)(param0 + 10) = v1;
            *(long*)(param0 + 4) = v9;
            *(long*)(v1 + 8L) = v9 | 0x1L;
            if(v1 == ptr1) {
                *(long*)(param0 + 8) = 0L;
                *(long*)(param0 + 2) = 0L;
                return result;
            }
        }
        else {
            *(unsigned long*)(ptr4 + 1) = (long*)((long)ptr3 & 0xfffffffffffffffeL);
            *(long*)(v1 + 8L) = param2 | 0x1L;
            *(long*)(param2 + v1) = param2;
        loc_402259:
            if((unsigned long)param2 <= 0xffL) {
                int v10 = *param0;
                ptr4 = (long*)(1 << ((param2 >>> 3) & 0x1fL));
                result = (long)((long*)((((unsigned long)0 | ((unsigned long)((param2 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)param0) + 9);
                if(!((unsigned int)ptr4 & v10)) {
                    *param0 = (unsigned int)ptr4 | v10;
                    param2 = result;
                }
                else {
                    param2 = *(long*)(result + 16L);
                }
                *(long*)(result + 16L) = v1;
                *(long*)(param2 + 24L) = v1;
                *(long*)(v1 + 16L) = param2;
                *(long*)(v1 + 24L) = result;
            }
            else {
                long v11 = param2 >>> 8;
                int v12 = (unsigned int)v11;
                if((unsigned int)v11) {
                    v12 = 31;
                    if((unsigned int)v11 <= 0xffff) {
                        if((unsigned int)v11 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v11 >>> i); --i) {
                            }
                            v11 = (unsigned long)i | ((unsigned long)(unsigned int)(v11 >>> 32L) << 32);
                        }
                        v12 = (31 - ((unsigned int)v11 ^ 0x1f)) * 2 + ((unsigned int)(param2 >>> ((unsigned long)(38 - ((unsigned int)v11 ^ 0x1f)) & 0x3fL)) & 0x1);
                    }
                }
                int v13 = *(param0 + 1);
                *(int*)(v1 + 56L) = v12;
                *(long*)(v1 + 40L) = 0L;
                *(long*)(v1 + 32L) = 0L;
                if(!((1 << ((unsigned long)v12 & 0x1fL)) & v13)) {
                    result = (long)((long*)((long)(long*)((long)(long*)v12 * 8L) + (long)param0) + 75);
                    *(param0 + 1) = (1 << ((unsigned long)v12 & 0x1fL)) | v13;
                    *((long*)((long)(long*)((long)(long*)v12 * 8L) + (long)param0) + 75) = v1;
                    *(long*)(v1 + 48L) = result;
                loc_402363:
                    *(long*)(v1 + 24L) = v1;
                    *(long*)(v1 + 16L) = v1;
                }
                else {
                    long v14 = 0L;
                    ptr4 = *(unsigned long*)((long*)((long)(long*)((long)(long*)v12 * 8L) + (long)param0) + 75);
                    if(v12 != 31) {
                        v14 = (unsigned long)(57 - (v12 >>> 1));
                    }
                    param3 = param2 << (v14 & 0x3fL);
                    while((*(ptr4 + 1) & 0xfffffffffffffff8L) != param2) {
                        long v15 = param3;
                        param3 *= 2L;
                        result = 4L - (v15 >> 63);
                        ptr3 = *(unsigned long*)(result * 8L + (long)ptr4);
                        if(ptr3) {
                            ptr4 = ptr3;
                        }
                        else {
                            *(long*)(result * 8L + (long)ptr4) = v1;
                            *(unsigned long*)(v1 + 48L) = ptr4;
                            goto loc_402363;
                        }
                    }
                    result = *(ptr4 + 2);
                    *(long*)(result + 24L) = v1;
                    *(ptr4 + 2) = v1;
                    *(long*)(v1 + 16L) = result;
                    *(unsigned long*)(v1 + 24L) = ptr4;
                    *(long*)(v1 + 48L) = 0L;
                    return result;
                }
            }
        }
    }
    return result;
}

long sub_40238E(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    long v0;
    long v1;
    int counter;
    long v2;
    long v3;
    long v4;
    char v5;
    char v6;
    unsigned long v7;
    unsigned long v8;
    unsigned long v9;
    long v10;
    unsigned long v11;
    unsigned long v12;
    long v13;
    long v14;
    unsigned long v15;
    long v16;
    long v17;
    unsigned long v18;
    unsigned long v19;
    long* ptr1;
    unsigned long v20;
    if((unsigned long)param0 <= 224L) {
        v18 = (unsigned long)param0 <= 14L ? 32L: (unsigned long)((param0 + 31L) & 0xfffffffffffffff0L);
        param1 = (long)gvar_4363E0;
        int v21 = (unsigned int)param1 >>> ((v18 >>> 3) & 0x1fL);
        if(((unsigned char)v21 & 0x3)) {
            v17 = (long)((~v21 & 0x1) + (unsigned int)(v18 >>> 3L));
            v16 = *(long*)((((unsigned long)0 | ((unsigned long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438);
            param4 = *(long*)(v16 + 16L);
            if((((unsigned long)0 | ((unsigned long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428 == param4) {
                gvar_4363E0 = (unsigned int)((~(1 << ((unsigned int)v17 % 32)) & (unsigned int)param1) | (0 << ((unsigned int)v17 % 32)));
            }
            else {
                *(long*)(param4 + 24L) = (((unsigned long)0 | ((unsigned long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                *(long*)((((unsigned long)0 | ((unsigned long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438) = param4;
            }
            *(long*)(v16 + 8L) = (unsigned long)((unsigned int)((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) | 0x3);
            *(long*)((((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16 + 8L) = *(long*)((((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16 + 8L) | 0x1L;
        }
        else {
            param5 = gvar_4363E8;
            if(v18 <= (unsigned long)param5) {
            loc_402ABB:
                unsigned long v22 = gvar_4363E8;
                if(v22 >= v18) {
                    v16 = gvar_436400;
                    v17 = (long)(v22 - v18);
                    param1 = v16 + v22;
                    if((unsigned long)v17 > 31L) {
                        unsigned long v23 = (unsigned long)(v16 + v18);
                        gvar_4363E8 = v17;
                        gvar_436400 = v23;
                        *(long*)(v23 + 8L) = v17 | 0x1L;
                        *(long*)param1 = v17;
                        *(long*)(v16 + 8L) = v18 | 0x3L;
                        return v16 + 16L;
                    }
                    gvar_4363E8 = 0L;
                    gvar_436400 = 0L;
                    *(long*)(v16 + 8L) = v22 | 0x3L;
                    *(long*)(param1 + 8L) = *(long*)(param1 + 8L) | 0x1L;
                }
                else {
                    long v24 = gvar_4363F0;
                    if((unsigned long)v24 > v18) {
                        v15 = (unsigned long)(v24 - v18);
                        goto loc_4032D4;
                    }
                    else {
                        v17 = gvar_4367B0;
                        if(!(*(char*)&gvar_436750 & 0x1) || gvar_4367B8 > v18 || !v24) {
                        loc_402C0E:
                            long v25 = (v17 + v18 + 95L) & (0L - v17);
                            if(v18 >= (unsigned long)v25) {
                                return 0L;
                            }
                            long v26 = gvar_436748;
                            if(v26) {
                                v17 = gvar_436738;
                                v24 = v17 + v25;
                                if((unsigned long)v24 <= (unsigned long)v17 || (unsigned long)v24 > (unsigned long)v26) {
                                    return 0L;
                                }
                            }
                            param5 = sub_403D42(v25, param1, v26, v17, param4, param5);
                            unsigned long v27 = gvar_436738 + v25;
                            char v28 = gvar_436740 == v27;
                            char v29 = gvar_436740 > v27;
                            gvar_436738 = v27;
                            if(!v29 && !v28) {
                                gvar_436740 = v27;
                            }
                            v1 = gvar_436408;
                            if(!v1) {
                                unsigned long v30 = gvar_4363F8;
                                if(!v30 || v30 > (unsigned long)param5) {
                                    gvar_4363F8 = param5;
                                }
                                unsigned long v31 = gvar_4367A0;
                                gvar_436758 = param5;
                                gvar_436760 = v25;
                                gvar_436770 = 1;
                                gvar_436418 = 128L;
                                gvar_436420 = v31;
                                long v32 = &gvar_436428;
                                do {
                                    *(long*)(v32 + 24L) = v32;
                                    *(long*)(v32 + 16L) = v32;
                                    v32 += 16L;
                                }
                                while(v32 != 4417064L);
                                v14 = v25 - 80L;
                                v13 = param5;
                                sub_401AD2(&gvar_4363E0, v13, v14);
                                goto loc_4032C5;
                            }
                            else {
                                v12 = gvar_436758;
                                v11 = gvar_436760;
                            }
                            if(v12 + v11 == param5) {
                                long v33 = (unsigned long)gvar_436770;
                                if(!((unsigned char)v33 & 0x8) && ((unsigned char)v33 & 0x1) && v12 <= (unsigned long)v1 && (unsigned long)param5 > (unsigned long)v1) {
                                    v13 = v1;
                                    gvar_436760 = v11 + v25;
                                    v14 = (long)(gvar_4363F0 + v25);
                                    sub_401AD2(&gvar_4363E0, v13, v14);
                                    goto loc_4032C5;
                                }
                            }
                            if(gvar_4363F8 > (unsigned long)param5) {
                                gvar_4363F8 = param5;
                            }
                            unsigned long* ptr2 = (unsigned long*)&gvar_436758;
                            if(v12 == param5) {
                                v0 = (long)(gvar_436770 & 0x8);
                                if(!(gvar_436770 & 0x8) && ((unsigned char)gvar_436770 & 0x1)) {
                                    gvar_436758 = param5;
                                    v17 = (long)((unsigned int)v12 & 0xf);
                                    gvar_436760 = v11 + v25;
                                    if((unsigned int)v17) {
                                        v17 = (long)((0 - ((unsigned int)v12 + 16)) & 0xf);
                                    }
                                    long v34 = v12 + v17;
                                    unsigned long v35 = v18 + param5;
                                    param4 = v34 - param5 - v18;
                                    *(long*)(param5 + 8L) = v18 | 0x3L;
                                    if(v34 == v1) {
                                        unsigned long v36 = gvar_4363F0 + param4;
                                        gvar_436408 = v35;
                                        gvar_4363F0 = v36;
                                        *(long*)(v35 + 8L) = (long)(v36 | 0x1L);
                                    }
                                    else if(gvar_436400 == v34) {
                                        param4 = (long)(gvar_4363E8 + param4);
                                        gvar_436400 = v35;
                                        gvar_4363E8 = param4;
                                        *(long*)(v35 + 8L) = param4 | 0x1L;
                                        *(long*)(v35 + param4) = param4;
                                    }
                                    else {
                                        unsigned long v37 = *(unsigned long*)(v34 + 8L);
                                        if(!((unsigned long)((unsigned int)v37 & 0x3) - 1L)) {
                                            unsigned long v38 = *(unsigned long*)(v34 + 24L);
                                            if(v37 <= 0xffL) {
                                                long v39 = *(long*)(v34 + 16L);
                                                if(v38 == v39) {
                                                    gvar_4363E0 = (unsigned int)((__rol__(-2, (v37 >>> 3) & 0x1fL)) & gvar_4363E0);
                                                }
                                                else {
                                                    *(unsigned long*)(v39 + 24L) = v38;
                                                    *(long*)(v38 + 16L) = v39;
                                                }
                                            }
                                            else {
                                                long v40 = *(long*)(v34 + 48L);
                                                if(v34 != v38) {
                                                    long v41 = *(long*)(v34 + 16L);
                                                    *(unsigned long*)(v41 + 24L) = v38;
                                                    *(long*)(v38 + 16L) = v41;
                                                }
                                                else {
                                                    v38 = *(unsigned long*)(v34 + 40L);
                                                    v1 = v34 + 40L;
                                                    if(!v38) {
                                                        v38 = *(unsigned long*)(v34 + 32L);
                                                        if(v38) {
                                                            v1 = v34 + 32L;
                                                            goto loc_402E9E;
                                                        }
                                                    }
                                                    else {
                                                    loc_402E9E:
                                                        unsigned long v42 = v38;
                                                    loc_402EA1:
                                                        do {
                                                            v10 = v1;
                                                            v38 = v42;
                                                            v1 = (long)(v42 + 40L);
                                                            v42 = *(unsigned long*)(v42 + 40L);
                                                            if(v42) {
                                                                goto loc_402EA1;
                                                            }
                                                            else {
                                                                v42 = *(unsigned long*)(v38 + 32L);
                                                                v1 = (long)(v38 + 32L);
                                                            }
                                                        }
                                                        while(v42);
                                                        *(long*)v10 = 0L;
                                                    }
                                                }
                                                if(v40) {
                                                    v1 = (long)*(int*)(v34 + 56L);
                                                    if(*(unsigned long*)(v1 * 8L + (long)&gvar_436638) == v34) {
                                                        gvar_4363E8 = v38;
                                                        if(v38) {
                                                            goto loc_402EF0;
                                                        }
                                                        else {
                                                            gvar_4363E4 = (unsigned int)((__rol__(-2, v1 & 0x1fL)) & gvar_4363E4);
                                                        }
                                                    }
                                                    else {
                                                        if(*(long*)(v40 + 32L) == v34) {
                                                            *(unsigned long*)(v40 + 32L) = v38;
                                                        }
                                                        else {
                                                            *(unsigned long*)(v40 + 40L) = v38;
                                                        }
                                                        if(v38) {
                                                        loc_402EF0:
                                                            long v43 = *(long*)(v34 + 32L);
                                                            *(long*)(v38 + 48L) = v40;
                                                            if(v43) {
                                                                *(long*)(v38 + 32L) = v43;
                                                                *(unsigned long*)(v43 + 48L) = v38;
                                                            }
                                                            long v44 = *(long*)(v34 + 40L);
                                                            if(v44) {
                                                                *(long*)(v38 + 40L) = v44;
                                                                *(unsigned long*)(v44 + 48L) = v38;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            v34 += v37 & 0xfffffffffffffff8L;
                                            param4 += v37 & 0xfffffffffffffff8L;
                                        }
                                        *(long*)(v34 + 8L) = *(long*)(v34 + 8L) & 0xfffffffffffffffeL;
                                        *(long*)(v35 + 8L) = param4 | 0x1L;
                                        *(long*)(v35 + param4) = param4;
                                        if((unsigned long)param4 <= 0xffL) {
                                            param1 = (long)gvar_4363E0;
                                            if(!((1 << ((param4 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                                                v17 = (((unsigned long)0 | ((unsigned long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                                                gvar_4363E0 = (unsigned int)((1 << ((param4 >>> 3) & 0x1fL)) | (unsigned int)param1);
                                            }
                                            else {
                                                v17 = *(long*)((((unsigned long)0 | ((unsigned long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438);
                                            }
                                            *(unsigned long*)((((unsigned long)0 | ((unsigned long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438) = v35;
                                            *(unsigned long*)(v17 + 24L) = v35;
                                            *(long*)(v35 + 16L) = v17;
                                            *(long*)(v35 + 24L) = (((unsigned long)0 | ((unsigned long)((param4 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                                        }
                                        else {
                                            long v45 = param4 >>> 8;
                                            int v46 = (unsigned int)v45;
                                            if((unsigned int)v45) {
                                                v46 = 31;
                                                if((unsigned int)v45 <= 0xffff) {
                                                    if((unsigned int)v45 != 0) {
                                                        int i;
                                                        for(i = 31; !((unsigned int)v45 >>> i); --i) {
                                                        }
                                                        v45 = (unsigned long)i | ((unsigned long)(unsigned int)(v45 >>> 32L) << 32);
                                                    }
                                                    v46 = (31 - ((unsigned int)v45 ^ 0x1f)) * 2 + ((unsigned int)(param4 >>> ((unsigned long)(38 - ((unsigned int)v45 ^ 0x1f)) & 0x3fL)) & 0x1);
                                                }
                                            }
                                            unsigned int v47 = gvar_4363E4;
                                            *(int*)(v35 + 56L) = v46;
                                            *(long*)(v35 + 40L) = 0L;
                                            *(long*)(v35 + 32L) = 0L;
                                            if(!((1 << ((unsigned long)v46 & 0x1fL)) & v47)) {
                                                *(unsigned long*)((long)v46 * 8L + (long)&gvar_436638) = v35;
                                                gvar_4363E4 = (unsigned int)((1 << ((unsigned long)v46 & 0x1fL)) | v47);
                                                *(long*)(v35 + 48L) = (long)v46 * 8L + &gvar_436638;
                                            loc_40307F:
                                                *(unsigned long*)(v35 + 24L) = v35;
                                                *(unsigned long*)(v35 + 16L) = v35;
                                            }
                                            else {
                                                param1 = *(long*)((long)v46 * 8L + (long)&gvar_436638);
                                                if(v46 != 31) {
                                                    v0 = (long)(57 - (v46 >>> 1));
                                                }
                                                v17 = param4 << (v0 & 0x3fL);
                                                while((*(long*)(param1 + 8L) & 0xfffffffffffffff8L) != param4) {
                                                    long v48 = v17;
                                                    v17 *= 2L;
                                                    param0 = *(long*)((4L - (v48 >> 63)) * 8L + param1);
                                                    if(param0) {
                                                        param1 = param0;
                                                    }
                                                    else {
                                                        *(unsigned long*)((4L - (v48 >> 63)) * 8L + param1) = v35;
                                                        *(long*)(v35 + 48L) = param1;
                                                        goto loc_40307F;
                                                    }
                                                }
                                                long v49 = *(long*)(param1 + 16L);
                                                *(unsigned long*)(v49 + 24L) = v35;
                                                *(unsigned long*)(param1 + 16L) = v35;
                                                *(long*)(v35 + 16L) = v49;
                                                *(long*)(v35 + 24L) = param1;
                                                *(long*)(v35 + 48L) = 0L;
                                            }
                                        }
                                    }
                                    return param5 + 16L;
                                }
                            }
                            do {
                                v9 = *ptr2;
                                if((unsigned long)v1 >= v9) {
                                    v9 = (unsigned long)(*(long*)(ptr2 + 1) + v9);
                                    if((unsigned long)v1 >= v9) {
                                        ptr2 = *(ptr2 + 2);
                                    }
                                }
                                else {
                                    ptr2 = *(ptr2 + 2);
                                }
                                goto loc_403104;
                            }
                            while(ptr2);
                            ud2();
                        loc_403104:
                            sub_401AD2(&gvar_4363E0, param5, v25 - 80L);
                            *(ptr1 + 1) = 51L;
                            param0 = (long)(ptr1 + 2);
                            param1 = &gvar_436758;
                            for(long j = 8L; j != 0L; --j) {
                                *(int*)param0 = *(int*)param1;
                                param1 += 4L;
                                param0 += 4L;
                            }
                            gvar_436768 = ptr1 + 2;
                            long* ptr3 = ptr1 + 7;
                            gvar_436758 = v20;
                            gvar_436760 = v25;
                            gvar_436770 = 1;
                            do {
                                *ptr3 = 11L;
                                ++ptr3;
                            }
                            while((unsigned long)ptr3 < v9);
                            if(v19 != ptr1) {
                                *(ptr1 + 1) = *(ptr1 + 1) & 0xfffffffffffffffeL;
                                param1 = (long)((long)ptr1 - v19);
                                *(long*)(v19 + 8L) = param1 | 0x1L;
                                *ptr1 = param1;
                                if((unsigned long)param1 <= 0xffL) {
                                    unsigned int v50 = gvar_4363E0;
                                    if(!((1 << ((param1 >>> 3) & 0x1fL)) & v50)) {
                                        gvar_4363E0 = (unsigned int)((1 << ((param1 >>> 3) & 0x1fL)) | v50);
                                        v8 = (unsigned long)((((unsigned long)0 | ((unsigned long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428);
                                    }
                                    else {
                                        v8 = *(unsigned long*)((((unsigned long)0 | ((unsigned long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438);
                                    }
                                    *(unsigned long*)((((unsigned long)0 | ((unsigned long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438) = v19;
                                    *(unsigned long*)(v8 + 24L) = v19;
                                    *(unsigned long*)(v19 + 16L) = v8;
                                    *(long*)(v19 + 24L) = (((unsigned long)0 | ((unsigned long)((param1 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                                }
                                else {
                                    long v51 = param1 >>> 8;
                                    int v52 = (unsigned int)v51;
                                    if((unsigned int)v51) {
                                        v52 = 31;
                                        if((unsigned int)v51 <= 0xffff) {
                                            if((unsigned int)v51 != 0) {
                                                int k;
                                                for(k = 31; !((unsigned int)v51 >>> k); --k) {
                                                }
                                                v51 = (unsigned long)k | ((unsigned long)(unsigned int)(v51 >>> 32L) << 32);
                                            }
                                            v52 = (31 - ((unsigned int)v51 ^ 0x1f)) * 2 + ((unsigned int)(param1 >>> ((unsigned long)(38 - ((unsigned int)v51 ^ 0x1f)) & 0x3fL)) & 0x1);
                                        }
                                    }
                                    unsigned int v53 = gvar_4363E4;
                                    *(int*)(v19 + 56L) = v52;
                                    *(long*)(v19 + 40L) = 0L;
                                    *(long*)(v19 + 32L) = 0L;
                                    if(!((1 << ((unsigned long)v52 & 0x1fL)) & v53)) {
                                        *(unsigned long*)((long)v52 * 8L + (long)&gvar_436638) = v19;
                                        gvar_4363E4 = (unsigned int)((1 << ((unsigned long)v52 & 0x1fL)) | v53);
                                        *(long*)(v19 + 48L) = (long)v52 * 8L + &gvar_436638;
                                    loc_40329F:
                                        *(unsigned long*)(v19 + 24L) = v19;
                                        *(unsigned long*)(v19 + 16L) = v19;
                                    }
                                    else {
                                        long v54 = 0L;
                                        long v55 = *(long*)((long)v52 * 8L + (long)&gvar_436638);
                                        if(v52 != 31) {
                                            v54 = (unsigned long)(57 - (v52 >>> 1));
                                        }
                                        long v56 = param1 << (v54 & 0x3fL);
                                        while((*(long*)(v55 + 8L) & 0xfffffffffffffff8L) != param1) {
                                            long v57 = v56;
                                            v56 *= 2L;
                                            param0 = *(long*)((4L - (v57 >> 63)) * 8L + v55);
                                            if(param0) {
                                                v55 = param0;
                                            }
                                            else {
                                                *(unsigned long*)((4L - (v57 >> 63)) * 8L + v55) = v19;
                                                *(long*)(v19 + 48L) = v55;
                                                goto loc_40329F;
                                            }
                                        }
                                        long v58 = *(long*)(v55 + 16L);
                                        *(unsigned long*)(v58 + 24L) = v19;
                                        *(unsigned long*)(v55 + 16L) = v19;
                                        *(long*)(v19 + 16L) = v58;
                                        *(long*)(v19 + 24L) = v55;
                                        *(long*)(v19 + 48L) = 0L;
                                    }
                                }
                            }
                        loc_4032C5:
                            unsigned long v59 = gvar_4363F0;
                            if(v59 <= v18) {
                                sub_401556();
                                return 0L;
                            }
                            v15 = v59 - v18;
                        loc_4032D4:
                            v16 = gvar_436408;
                            gvar_4363F0 = v15;
                            gvar_436408 = v16 + v18;
                            *(long*)(v16 + v18 + 8L) = v15 | 0x1L;
                            *(long*)(v16 + 8L) = v18 | 0x3L;
                            return v16 + 16L;
                        }
                        param1 = gvar_436748;
                        long v60 = (v17 + v18 + 62L) & (0L - v17);
                        if(param1 || v18 >= (unsigned long)v60) {
                            goto loc_402C0E;
                        }
                        else {
                            v16 = sub_403D42(v60, 0L, 0L - v17, v17, param4, param5);
                            *(long*)v16 = 0L;
                            *(long*)(v16 + 8L) = v60 - 32L;
                            unsigned long v61 = gvar_4363F8;
                            *(long*)(v16 - 24L) = 11L;
                            *(long*)(v16 - 16L) = 0L;
                            if(!v61 || (unsigned long)v16 < v61) {
                                gvar_4363F8 = v16;
                            }
                            v7 = gvar_436738 + v60;
                            v6 = gvar_436740 == v7;
                            v5 = gvar_436740 > v7;
                            gvar_436738 = v7;
                        }
                    }
                    if(!v5 && !v6) {
                        gvar_436740 = v7;
                    }
                }
            }
            else {
                if(!v21) {
                    param0 = (long)gvar_4363E4;
                    if(!gvar_4363E4) {
                        goto loc_402ABB;
                    }
                    else {
                        int v62 = (0 - (unsigned int)param0) & (unsigned int)param0;
                        if(v62 != 0) {
                            for(counter = 0; !((v62 >>> counter) & 0x1); ++counter) {
                            }
                            v62 = counter;
                        }
                        v17 = *(long*)((unsigned long)v62 * 8L + (long)&gvar_436638);
                        v16 = *(long*)((unsigned long)v62 * 8L + (long)&gvar_436638);
                        param4 = (*(long*)(v17 + 8L) & 0xfffffffffffffff8L) - v18;
                        while(1) {
                            long v63 = *(long*)(v17 + 32L);
                            if(v63) {
                                goto loc_40257B;
                            }
                            else {
                                v63 = *(long*)(v17 + 40L);
                                if(v63) {
                                    goto loc_40257B;
                                }
                                else {
                                    v4 = *(long*)(v16 + 24L);
                                    v1 = *(long*)(v16 + 48L);
                                    v3 = v18 + param4;
                                }
                            }
                            if(v16 != v4) {
                                v17 = *(long*)(v16 + 16L);
                                *(long*)(v17 + 24L) = v4;
                                *(long*)(v4 + 16L) = v17;
                                goto loc_4025FE;
                            }
                            else {
                                v4 = *(long*)(v16 + 40L);
                                v0 = v16 + 40L;
                                if(!v4) {
                                    v4 = *(long*)(v16 + 32L);
                                    if(!v4) {
                                        goto loc_4025FE;
                                    }
                                    else {
                                        v0 = v16 + 32L;
                                        goto loc_4025D0;
                                    }
                                }
                                else {
                                loc_4025D0:
                                    v17 = v4;
                                    break;
                                loc_40257B:
                                    long v64 = (*(long*)(v63 + 8L) & 0xfffffffffffffff8L) - v18;
                                    if((unsigned long)v64 < (unsigned long)param4) {
                                        param4 = v64;
                                        v16 = v63;
                                    }
                                    v17 = v63;
                                }
                            }
                        }
                    loc_4025D3:
                        do {
                            v2 = v0;
                            v4 = v17;
                            v0 = v17 + 40L;
                            v17 = *(long*)(v17 + 40L);
                            if(v17) {
                                goto loc_4025D3;
                            }
                            else {
                                v17 = *(long*)(v4 + 32L);
                                v0 = v4 + 32L;
                            }
                        }
                        while(v17);
                        *(long*)v2 = 0L;
                    loc_4025FE:
                        if(v1) {
                            v0 = (long)*(int*)(v16 + 56L);
                            if(*(unsigned long*)(v0 * 8L + (long)&gvar_436638) == v16) {
                                *(long*)((v0 + 74L) * 8L + (long)&gvar_4363E8) = v4;
                                if(v4) {
                                    goto loc_40261F;
                                }
                                else {
                                    gvar_4363E4 = (unsigned int)((~(1 << ((unsigned int)v0 % 32)) & (unsigned int)param0) | (0 << ((unsigned int)v0 % 32)));
                                }
                            }
                            else {
                                if(*(long*)(v1 + 32L) == v16) {
                                    *(long*)(v1 + 32L) = v4;
                                }
                                else {
                                    *(long*)(v1 + 40L) = v4;
                                }
                                if(v4) {
                                loc_40261F:
                                    long v65 = *(long*)(v16 + 32L);
                                    *(long*)(v4 + 48L) = v1;
                                    if(v65) {
                                        *(long*)(v4 + 32L) = v65;
                                        *(long*)(v65 + 48L) = v4;
                                    }
                                    v17 = *(long*)(v16 + 40L);
                                    if(v17) {
                                        *(long*)(v4 + 40L) = v17;
                                        *(long*)(v17 + 48L) = v4;
                                    }
                                }
                            }
                        }
                        if((unsigned long)param4 <= 31L) {
                            *(long*)(v16 + 8L) = v3 | 0x3L;
                            *(long*)(v16 + 8L) = *(long*)(v16 + 8L) | 0x1L;
                        }
                        else {
                            v1 = v16 + v18;
                            *(long*)(v16 + 8L) = v18 | 0x3L;
                            *(long*)(v1 + 8L) = param4 | 0x1L;
                            *(long*)(param4 + v1) = param4;
                            if(param5) {
                                unsigned long v66 = gvar_436400;
                                if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                                    v17 = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                                    gvar_4363E0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)param1);
                                }
                                else {
                                    v17 = *(long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438);
                                }
                                *(unsigned long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + (long)&gvar_436438) = v66;
                                *(unsigned long*)(v17 + 24L) = v66;
                                *(long*)(v66 + 16L) = v17;
                                *(long*)(v66 + 24L) = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                            }
                            gvar_4363E8 = param4;
                            gvar_436400 = v1;
                        }
                    }
                    return v16 + 16L;
                }
                int v67 = ((0 - (unsigned int)((unsigned long)0 | ((unsigned long)(1 << ((v18 >>> 3) & 0x1fL)) << 1))) | (unsigned int)((unsigned long)0 | ((unsigned long)(1 << ((v18 >>> 3) & 0x1fL)) << 1))) & (v21 << ((v18 >>> 3) & 0x1fL));
                v17 = (long)(0 - v67);
                if(((0 - v67) & v67) != 0) {
                    for(counter = 0; !((((0 - v67) & v67) >>> counter) & 0x1); ++counter) {
                    }
                    v17 = (unsigned long)counter | ((unsigned long)(unsigned int)(v17 >>> 32L) << 32);
                }
                v1 = (((unsigned long)0 | ((unsigned long)(v17 & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                param4 = ((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL;
                v16 = *(long*)(v1 + 16L);
                v0 = *(long*)(v16 + 16L);
                if(v1 == v0) {
                    gvar_4363E0 = (unsigned int)(~(1 << (v17 & 0x1fL)) & (unsigned int)param1);
                }
                else {
                    *(long*)(v0 + 24L) = v1;
                    *(long*)(v1 + 16L) = v0;
                }
                ptr0 = (long*)((((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) + v16);
                param1 = (((unsigned long)0 | ((unsigned long)(v17 & 0x1fffffffffffffffL) << 3)) & 0xffffffffL) - v18;
                if((unsigned long)param1 <= 31L) {
                    *(long*)(v16 + 8L) = (unsigned long)((unsigned int)param4 | 0x3);
                    *(ptr0 + 1) = *(ptr0 + 1) | 0x1L;
                }
                else {
                    unsigned long v68 = (unsigned long)(v16 + v18);
                    *(long*)(v16 + 8L) = v18 | 0x3L;
                    *(long*)(v68 + 8L) = param1 | 0x1L;
                    *ptr0 = param1;
                    if(param5) {
                        v1 = (long)gvar_4363E0;
                        unsigned long v69 = gvar_436400;
                        if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)v1)) {
                            v17 = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                            gvar_4363E0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)v1);
                        }
                        else {
                            v17 = *(long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438);
                        }
                        *(unsigned long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438) = v69;
                        *(unsigned long*)(v17 + 24L) = v69;
                        *(long*)(v69 + 16L) = v17;
                        *(long*)(v69 + 24L) = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                    }
                    gvar_4363E8 = param1;
                    gvar_436400 = v68;
                }
            }
        }
    }
    else {
        if((unsigned long)param0 > 18446744073709551487L) {
            v18 = 18446744073709551615L;
            goto loc_402ABB;
        }
        else {
            long v70 = param0 + 31L;
            param0 = (long)gvar_4363E4;
            v18 = (unsigned long)(v70 & 0xfffffffffffffff0L);
            if(!(unsigned int)param0) {
                goto loc_402ABB;
            }
            else {
                long v71 = v18 >>> 8;
                param5 = 0L - v18;
                param1 = v71 & 0xffffffffL;
                if((unsigned int)v71) {
                    param1 = 31L;
                    if((unsigned int)v71 <= 0xffff) {
                        if((unsigned int)v71 != 0) {
                            int counter1;
                            for(counter1 = 31; !((unsigned int)v71 >>> counter1); --counter1) {
                            }
                            v71 = (unsigned long)counter1 | ((unsigned long)(unsigned int)(v71 >>> 32L) << 32);
                        }
                        param1 = ((unsigned long)(31 - ((unsigned int)v71 ^ 0x1f)) * 2L + (unsigned long)((unsigned int)(v18 >>> ((unsigned long)(38 - ((unsigned int)v71 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xffffffffL;
                    }
                }
                long v72 = 0L;
                v16 = *(long*)((param1 & 0xffffffffL) * 8L + (long)&gvar_436638);
                if(v16) {
                    v0 = 0L;
                    v1 = 0L;
                    long v73 = v18 << (((unsigned int)param1 == 31 ? 0L: (unsigned long)(57 - ((unsigned int)param1 >>> 1))) & 0x3fL);
                    while(1) {
                        long v74 = (*(long*)(v16 + 8L) & 0xfffffffffffffff8L) - v18;
                        if((unsigned long)v74 >= (unsigned long)param5) {
                        loc_4027AC:
                            v72 = *(long*)(v16 + 40L);
                            param4 = 4L - (v73 >> 63);
                            v16 = *(long*)(param4 * 8L + v16);
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
                            goto loc_4027AC;
                        }
                        else {
                            v72 = v16;
                            param5 = 0L;
                            goto loc_4027EA;
                        }
                    }
                    v16 = v1;
                }
            loc_4027EA:
                if(!(v16 | v72)) {
                    int v75 = (-2 << (param1 & 0x1fL)) & (unsigned int)param0;
                    if(!v75) {
                        goto loc_402ABB;
                    }
                    else {
                        int v76 = (0 - v75) & v75;
                        if(v76 != 0) {
                            for(counter = 0; !((v76 >>> counter) & 0x1); ++counter) {
                            }
                            v76 = counter;
                        }
                        v72 = *(long*)((unsigned long)v76 * 8L + (long)&gvar_436638);
                        v16 = 0L;
                    }
                }
                while(v72) {
                    long v77 = (*(long*)(v72 + 8L) & 0xfffffffffffffff8L) - v18;
                    if((unsigned long)v77 < (unsigned long)param5) {
                        param5 = v77;
                        v16 = v72;
                    }
                    v17 = *(long*)(v72 + 32L);
                    if(!v17) {
                        v17 = *(long*)(v72 + 40L);
                    }
                    v72 = v17;
                }
                if(!v16 || gvar_4363E8 - v18 <= (unsigned long)param5) {
                    goto loc_402ABB;
                }
                else {
                    long v78 = *(long*)(v16 + 24L);
                    param1 = *(long*)(v16 + 48L);
                    v1 = (long)(v18 + param5);
                    if(v16 != v78) {
                        v17 = *(long*)(v16 + 16L);
                        *(long*)(v17 + 24L) = v78;
                        *(long*)(v78 + 16L) = v17;
                    }
                    else {
                        v78 = *(long*)(v16 + 40L);
                        param4 = v16 + 40L;
                        if(!v78) {
                            v78 = *(long*)(v16 + 32L);
                            if(v78) {
                                param4 = v16 + 32L;
                                goto loc_402894;
                            }
                        }
                        else {
                        loc_402894:
                            v17 = v78;
                        loc_402897:
                            do {
                                v0 = param4;
                                v78 = v17;
                                param4 = v17 + 40L;
                                v17 = *(long*)(v17 + 40L);
                                if(v17) {
                                    goto loc_402897;
                                }
                                else {
                                    v17 = *(long*)(v78 + 32L);
                                    param4 = v78 + 32L;
                                }
                            }
                            while(v17);
                            *(long*)v0 = 0L;
                        }
                    }
                    if(param1) {
                        param4 = (long)*(int*)(v16 + 56L);
                        if(*(unsigned long*)(param4 * 8L + (long)&gvar_436638) == v16) {
                            *(long*)((param4 + 74L) * 8L + (long)&gvar_4363E8) = v78;
                            if(v78) {
                                goto loc_4028E2;
                            }
                            else {
                                gvar_4363E4 = (unsigned int)((~(1 << ((unsigned int)param4 % 32)) & (unsigned int)param0) | (0 << ((unsigned int)param4 % 32)));
                            }
                        }
                        else {
                            if(*(long*)(param1 + 32L) == v16) {
                                *(long*)(param1 + 32L) = v78;
                            }
                            else {
                                *(long*)(param1 + 40L) = v78;
                            }
                            if(v78) {
                            loc_4028E2:
                                long v79 = *(long*)(v16 + 32L);
                                *(long*)(v78 + 48L) = param1;
                                if(v79) {
                                    *(long*)(v78 + 32L) = v79;
                                    *(long*)(v79 + 48L) = v78;
                                }
                                v17 = *(long*)(v16 + 40L);
                                if(v17) {
                                    *(long*)(v78 + 40L) = v17;
                                    *(long*)(v17 + 48L) = v78;
                                }
                            }
                        }
                    }
                }
            }
        }
        if((unsigned long)param5 <= 31L) {
            *(long*)(v16 + 8L) = v1 | 0x3L;
            *(long*)(v16 + v1 + 8L) = *(long*)(v16 + v1 + 8L) | 0x1L;
        }
        else {
            param4 = v16 + v18;
            *(long*)(v16 + 8L) = v18 | 0x3L;
            *(long*)(param4 + 8L) = param5 | 0x1L;
            *(long*)(param4 + param5) = param5;
            if((unsigned long)param5 <= 0xffL) {
                param1 = (long)gvar_4363E0;
                if(!((1 << ((param5 >>> 3) & 0x1fL)) & (unsigned int)param1)) {
                    v17 = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
                    gvar_4363E0 = (unsigned int)((1 << ((param5 >>> 3) & 0x1fL)) | (unsigned int)param1);
                }
                else {
                    v17 = *(long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438);
                }
                *(long*)((((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438) = param4;
                *(long*)(v17 + 24L) = param4;
                *(long*)(param4 + 16L) = v17;
                *(long*)(param4 + 24L) = (((unsigned long)0 | ((unsigned long)((param5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
            }
            else {
                long v80 = param5 >>> 8;
                int v81 = (unsigned int)v80;
                if((unsigned int)v80) {
                    v81 = 31;
                    if((unsigned int)v80 <= 0xffff) {
                        if((unsigned int)v80 != 0) {
                            int counter2;
                            for(counter2 = 31; !((unsigned int)v80 >>> counter2); --counter2) {
                            }
                            v80 = (unsigned long)counter2 | ((unsigned long)(unsigned int)(v80 >>> 32L) << 32);
                        }
                        v81 = (31 - ((unsigned int)v80 ^ 0x1f)) * 2 + ((unsigned int)(param5 >>> ((unsigned long)(38 - ((unsigned int)v80 ^ 0x1f)) & 0x3fL)) & 0x1);
                    }
                }
                unsigned int v82 = gvar_4363E4;
                *(int*)(param4 + 56L) = v81;
                *(long*)(param4 + 40L) = 0L;
                *(long*)(param4 + 32L) = 0L;
                if(!((1 << ((unsigned long)v81 & 0x1fL)) & v82)) {
                    *(long*)((long)v81 * 8L + (long)&gvar_436638) = param4;
                    gvar_4363E4 = (unsigned int)((1 << ((unsigned long)v81 & 0x1fL)) | v82);
                    *(long*)(param4 + 48L) = (long)v81 * 8L + &gvar_436638;
                loc_402A89:
                    *(long*)(param4 + 24L) = param4;
                    *(long*)(param4 + 16L) = param4;
                }
                else {
                    long v83 = 0L;
                    param1 = *(long*)((long)v81 * 8L + (long)&gvar_436638);
                    if(v81 != 31) {
                        v83 = (unsigned long)(57 - (v81 >>> 1));
                    }
                    v17 = param5 << (v83 & 0x3fL);
                    while((*(long*)(param1 + 8L) & 0xfffffffffffffff8L) != param5) {
                        long v84 = v17;
                        v17 *= 2L;
                        param0 = *(long*)((4L - (v84 >> 63)) * 8L + param1);
                        if(param0) {
                            param1 = param0;
                        }
                        else {
                            *(long*)((4L - (v84 >> 63)) * 8L + param1) = param4;
                            *(long*)(param4 + 48L) = param1;
                            goto loc_402A89;
                        }
                    }
                    long v85 = *(long*)(param1 + 16L);
                    *(long*)(v85 + 24L) = param4;
                    *(long*)(param1 + 16L) = param4;
                    *(long*)(param4 + 16L) = v85;
                    *(long*)(param4 + 24L) = param1;
                    *(long*)(param4 + 48L) = 0L;
                }
            }
        }
    }
    return v16 + 16L;
}

void sub_403312(long param0, unsigned long* param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long v2;
    long v3;
    unsigned long* ptr0;
    long* ptr1;
    long v4;
    unsigned long v5;
    long v6;
    long v7;
    long v8;
    unsigned long* ptr2;
    unsigned long* ptr3;
    long v9;
    long v10;
    long v11;
    if(param0) {
        long v12 = param0;
        param0 -= 16L;
        long v13 = v7;
        long* ptr4 = &ptr3;
        long v14 = *(long*)(v12 - 8L);
        long* ptr5 = (long*)(v14 & 0xfffffffffffffff8L);
        unsigned long* ptr6 = (unsigned long*)((long)ptr5 + param0);
        if((unsigned char)v14 & 0x1) {
        loc_4034C1:
            ptr0 = *(ptr6 + 1);
            if(!((unsigned char)ptr0 & 0x2)) {
                v2 = gvar_436400;
                if(gvar_436408 == ptr6) {
                    long v15 = (long)(gvar_4363F0 + (long)ptr5);
                    gvar_436408 = param0;
                    gvar_4363F0 = v15;
                    *(long*)(param0 + 8L) = v15 | 0x1L;
                    if(param0 == v2) {
                        gvar_436400 = 0L;
                        gvar_4363E8 = 0L;
                    }
                    if(gvar_436410 >= (unsigned long)v15) {
                        jump *(ptr4 + 3);
                    }
                    else {
                        long v16 = v13;
                        v13 = v9;
                        ptr3 = ptr2;
                        v6 = v11;
                        long v17 = v16;
                        v15 = gvar_436408;
                        if(v15) {
                            unsigned long v18 = gvar_4363F0;
                            if(v18 > 80L) {
                                unsigned long v19 = &gvar_436758;
                                unsigned long* ptr7 = (unsigned long*)&gvar_436758;
                                do {
                                    v5 = *ptr7;
                                    if((unsigned long)v15 >= v5) {
                                        param5 = *(long*)(ptr7 + 1);
                                        ptr0 = (unsigned long*)(v5 + param5);
                                        if((unsigned long)v15 >= (unsigned long)ptr0) {
                                            ptr7 = *(ptr7 + 2);
                                        }
                                    }
                                    else {
                                        ptr7 = *(ptr7 + 2);
                                    }
                                    goto loc_401E43;
                                }
                                while(ptr7);
                                ud2();
                            loc_401E43:
                                long v20 = (unsigned long)*(int*)(ptr7 + 3);
                                if(((unsigned char)v20 & 0x8) || !((unsigned char)v20 & 0x1)) {
                                    goto loc_401E0A;
                                }
                                else {
                                    unsigned long v21 = gvar_4367B0;
                                    v16 = ((v18 + v21 - 81L) / v21 - 1L) * v21;
                                    if((unsigned long)v16 > (unsigned long)param5) {
                                        goto loc_401E0A;
                                    }
                                    else {
                                        while(1) {
                                            if(v19 >= v5 && v19 < (unsigned long)ptr0) {
                                                goto loc_401E0A;
                                            }
                                            else {
                                                v19 = *(unsigned long*)(v19 + 16L);
                                                if(!v19) {
                                                    long v22 = param5 - v16;
                                                    long v23 = sub_404008();
                                                    if(!(v23 + 1L)) {
                                                        long v24 = sub_403D56(*ptr7 + v22, v16, v8, v10);
                                                        if((unsigned int)v24) {
                                                            goto loc_401E0A;
                                                        }
                                                    }
                                                    if(v16) {
                                                        *(long*)(ptr7 + 1) = *(long*)(ptr7 + 1) - v16;
                                                        unsigned long v25 = gvar_4363F0;
                                                        gvar_436738 -= v16;
                                                        sub_401AD2(&gvar_4363E0, gvar_436408, (long)(v25 - v16));
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                            loc_401E0A:
                                v16 = 0L;
                            }
                            v15 = sub_401B19(&gvar_4363E0);
                            if(!(v15 + v16) && gvar_4363F0 > gvar_436410) {
                                gvar_436410 = 18446744073709551615L;
                            }
                        }
                        return;
                    }
                }
                else if(ptr6 == v2) {
                    long* ptr8 = (long*)(gvar_4363E8 + (long)ptr5);
                    gvar_436400 = param0;
                    gvar_4363E8 = ptr8;
                    *(unsigned long*)(param0 + 8L) = (long*)((long)ptr8 | 0x1L);
                    *(unsigned long*)((long)ptr8 + param0) = ptr8;
                    jump *(ptr4 + 3);
                }
                else {
                    ptr0 = (unsigned long*)((long)ptr0 & 0xfffffffffffffff8L);
                    long v26 = *(long*)(ptr6 + 3);
                    ptr5 = (long*)((long)ptr5 + (long)ptr0);
                    if((unsigned long)ptr0 <= 248L) {
                        ptr6 = *(ptr6 + 2);
                        if(v26 == ptr6) {
                            gvar_4363E0 = (unsigned int)((__rol__(-2, (long)((long)ptr0 >>> 3) & 0x1fL)) & gvar_4363E0);
                        }
                        else {
                            *(long*)(ptr6 + 3) = v26;
                            *(unsigned long*)(v26 + 16L) = ptr6;
                        }
                    }
                    else {
                        ptr0 = *(ptr6 + 6);
                        if(v26 != ptr6) {
                            v14 = *(long*)(ptr6 + 2);
                            *(long*)(v14 + 24L) = v26;
                            *(long*)(v26 + 16L) = v14;
                        }
                        else {
                            v26 = *(long*)(ptr6 + 5);
                            param5 = (long)(ptr6 + 5);
                            if(!v26) {
                                v26 = *(long*)(ptr6 + 4);
                                if(v26) {
                                    param5 = (long)(ptr6 + 4);
                                    goto loc_4035D8;
                                }
                            }
                            else {
                            loc_4035D8:
                                v14 = v26;
                            loc_4035DB:
                                do {
                                    v4 = param5;
                                    v26 = v14;
                                    param5 = v14 + 40L;
                                    v14 = *(long*)(v14 + 40L);
                                    if(v14) {
                                        goto loc_4035DB;
                                    }
                                    else {
                                        v14 = *(long*)(v26 + 32L);
                                        param5 = v26 + 32L;
                                    }
                                }
                                while(v14);
                                *(long*)v4 = 0L;
                            }
                        }
                        if(ptr0) {
                            param5 = (long)*(int*)(ptr6 + 7);
                            if(*(unsigned long*)(param5 * 8L + (long)&gvar_436638) == ptr6) {
                                *(long*)((param5 + 74L) * 8L + (long)&gvar_4363E8) = v26;
                                if(v26) {
                                    goto loc_403629;
                                }
                                else {
                                    gvar_4363E4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4363E4);
                                }
                            }
                            else {
                                if(*(long*)(ptr0 + 4) == ptr6) {
                                    *(long*)(ptr0 + 4) = v26;
                                }
                                else {
                                    *(long*)(ptr0 + 5) = v26;
                                }
                                if(v26) {
                                loc_403629:
                                    long v27 = *(long*)(ptr6 + 4);
                                    *(unsigned long*)(v26 + 48L) = ptr0;
                                    if(v27) {
                                        *(long*)(v26 + 32L) = v27;
                                        *(long*)(v27 + 48L) = v26;
                                    }
                                    v14 = *(long*)(ptr6 + 5);
                                    if(v14) {
                                        *(long*)(v26 + 40L) = v14;
                                        *(long*)(v14 + 48L) = v26;
                                    }
                                }
                            }
                        }
                    }
                    *(unsigned long*)(param0 + 8L) = (long*)((long)ptr5 | 0x1L);
                    *(unsigned long*)((long)ptr5 + param0) = ptr5;
                    if(param0 == v2) {
                        gvar_4363E8 = ptr5;
                        jump *(ptr4 + 3);
                    }
                }
            }
            else {
                *(ptr6 + 1) = (long*)((long)ptr0 & 0xfffffffffffffffeL);
                *(unsigned long*)(param0 + 8L) = (long*)((long)ptr5 | 0x1L);
                *(unsigned long*)((long)ptr5 + param0) = ptr5;
            }
            if((unsigned long)ptr5 <= 0xffL) {
                unsigned int v28 = gvar_4363E0;
                if(!((1 << ((long)((long)ptr5 >>> 3) & 0x1fL)) & v28)) {
                    gvar_4363E0 = (unsigned int)((1 << ((long)((long)ptr5 >>> 3) & 0x1fL)) | v28);
                    ptr1 = (long*)((((unsigned long)0 | ((unsigned long)((long)((long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428);
                }
                else {
                    ptr1 = *(unsigned long*)((((unsigned long)0 | ((unsigned long)((long)((long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438);
                }
                *(long*)((((unsigned long)0 | ((unsigned long)((long)((long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436438) = param0;
                *(ptr1 + 3) = param0;
                *(unsigned long*)(param0 + 16L) = ptr1;
                *(long*)(param0 + 24L) = (((unsigned long)0 | ((unsigned long)((long)((long)ptr5 >>> 3) & 0x7fffffffffffffffL) << 1)) & 0xffffffffL) * 8L + &gvar_436428;
            }
            else {
                long* ptr9 = (long*)((long)ptr5 >>> 8);
                ptr1 = (long*)((long)ptr9 & 0xffffffffL);
                if((unsigned int)ptr9) {
                    ptr1 = (long*)0x1F;
                    if((unsigned int)ptr9 <= 0xffff) {
                        if((unsigned int)ptr9 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr9 >>> i); --i) {
                            }
                            ptr9 = (unsigned long)i | ((unsigned long)(unsigned int)(long*)((long)ptr9 >>> 32L) << 32);
                        }
                        ptr1 = (long*)(((unsigned long)(31 - ((unsigned int)ptr9 ^ 0x1f)) * 2L + (unsigned long)((unsigned int)(long*)((long)ptr5 >>> ((unsigned long)(38 - ((unsigned int)ptr9 ^ 0x1f)) & 0x3fL)) & 0x1)) & 0xffffffffL);
                    }
                }
                unsigned int v29 = gvar_4363E4;
                *(int*)(param0 + 56L) = (unsigned int)ptr1;
                *(long*)(param0 + 40L) = 0L;
                *(long*)(param0 + 32L) = 0L;
                if(!((1 << (long)(long*)((long)ptr1 & 0x1fL)) & v29)) {
                    *(long*)((long)(long*)((long)(unsigned long*)((long)ptr1 & 0xffffffffL) * 8L) + (long)&gvar_436638) = param0;
                    gvar_4363E4 = (unsigned int)((1 << (long)(long*)((long)ptr1 & 0x1fL)) | v29);
                    *(unsigned long*)(param0 + 48L) = (long*)((long)(unsigned long*)((long)ptr1 & 0xffffffffL) * 8L) + 552135;
                loc_4037D6:
                    *(long*)(param0 + 24L) = param0;
                    *(long*)(param0 + 16L) = param0;
                }
                else {
                    long v30 = 0L;
                    ptr6 = *(unsigned long*)((long)(long*)((long)(unsigned long*)((long)ptr1 & 0xffffffffL) * 8L) + (long)&gvar_436638);
                    if((unsigned int)ptr1 != 31) {
                        v30 = (unsigned long)(57 - ((unsigned int)ptr1 >>> 1));
                    }
                    v14 = (long)((long)ptr5 << (v30 & 0x3fL));
                    while((*(long*)(ptr6 + 1) & 0xfffffffffffffff8L) != ptr5) {
                        long v31 = v14;
                        v14 *= 2L;
                        ptr0 = *(unsigned long*)((4L - (v31 >> 63)) * 8L + (long)ptr6);
                        if(ptr0) {
                            ptr6 = ptr0;
                        }
                        else {
                            *(long*)((4L - (v31 >> 63)) * 8L + (long)ptr6) = param0;
                            *(unsigned long*)(param0 + 48L) = ptr6;
                            goto loc_4037D6;
                        }
                    }
                    long v32 = *(long*)(ptr6 + 2);
                    *(long*)(v32 + 24L) = param0;
                    *(long*)(ptr6 + 2) = param0;
                    *(long*)(param0 + 16L) = v32;
                    *(unsigned long*)(param0 + 24L) = ptr6;
                    *(long*)(param0 + 48L) = 0L;
                }
                --gvar_436418;
                if(!gvar_436418) {
                    sub_401B19(&gvar_4363E0);
                    return;
                }
            }
            jump *(ptr4 + 3);
        }
        else {
            ptr0 = *(unsigned long*)(v12 - 16L);
            param0 -= (long)ptr0;
            v14 = (unsigned long)((unsigned char)v14 & 0x3) | ((unsigned long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v14) {
                ptr5 = (long*)((long)ptr5 + (long)ptr0);
                if(gvar_436400 == param0) {
                    long v33 = *(long*)(ptr6 + 1);
                    if(((unsigned int)v33 & 0x3) == 3) {
                        gvar_4363E8 = ptr5;
                        *(long*)(ptr6 + 1) = v33 & 0xfffffffffffffffeL;
                        *(unsigned long*)(param0 + 8L) = (long*)((long)ptr5 | 0x1L);
                        *ptr6 = ptr5;
                        jump *(ptr4 + 3);
                    }
                    else {
                        goto loc_4034C1;
                    }
                }
                else {
                    v3 = *(long*)(param0 + 24L);
                }
                if((unsigned long)ptr0 <= 0xffL) {
                    long v34 = *(long*)(param0 + 16L);
                    if(v3 == v34) {
                        gvar_4363E0 = (unsigned int)((__rol__(-2, (long)((long)ptr0 >>> 3) & 0x1fL)) & gvar_4363E0);
                    }
                    else {
                        *(long*)(v34 + 24L) = v3;
                        *(long*)(v3 + 16L) = v34;
                    }
                }
                else {
                    long v35 = *(long*)(param0 + 48L);
                    if(v3 != param0) {
                        v14 = *(long*)(param0 + 16L);
                        *(long*)(v14 + 24L) = v3;
                        *(long*)(v3 + 16L) = v14;
                    }
                    else {
                        v3 = *(long*)(param0 + 40L);
                        param5 = param0 + 40L;
                        if(!v3) {
                            v3 = *(long*)(param0 + 32L);
                            if(v3) {
                                param5 = param0 + 32L;
                                goto loc_4033EA;
                            }
                        }
                        else {
                        loc_4033EA:
                            v14 = v3;
                        loc_4033ED:
                            do {
                                v2 = param5;
                                v3 = v14;
                                param5 = v14 + 40L;
                                v14 = *(long*)(v14 + 40L);
                                if(v14) {
                                    goto loc_4033ED;
                                }
                                else {
                                    v14 = *(long*)(v3 + 32L);
                                    param5 = v3 + 32L;
                                }
                            }
                            while(v14);
                            *(long*)v2 = 0L;
                        }
                    }
                    if(v35) {
                        param5 = (long)*(int*)(param0 + 56L);
                        if(*(unsigned long*)(param5 * 8L + (long)&gvar_436638) == param0) {
                            *(long*)((long)(long*)((param5 + 74L) * 8L) + (long)&gvar_4363E8) = v3;
                            if(v3) {
                                goto loc_40343F;
                            }
                            else {
                                gvar_4363E4 = (unsigned int)((__rol__(-2, param5 & 0x1fL)) & gvar_4363E4);
                            }
                        }
                        else {
                            if(*(long*)(v35 + 32L) == param0) {
                                *(long*)(v35 + 32L) = v3;
                            }
                            else {
                                *(long*)(v35 + 40L) = v3;
                            }
                            if(v3) {
                            loc_40343F:
                                long v36 = *(long*)(param0 + 32L);
                                *(long*)(v3 + 48L) = v35;
                                if(v36) {
                                    *(long*)(v3 + 32L) = v36;
                                    *(long*)(v36 + 48L) = v3;
                                }
                                v14 = *(long*)(param0 + 40L);
                                if(v14) {
                                    *(long*)(v3 + 40L) = v14;
                                    *(long*)(v14 + 48L) = v3;
                                }
                            }
                        }
                    }
                }
                goto loc_4034C1;
            }
            else {
                v1 = (long)((long*)((long)ptr5 + (long)ptr0) + 4);
                ptr4 = &v6;
                v0 = sub_403D56(param0, v1, v12, v14);
            }
        }
        if(!(unsigned int)v0) {
            gvar_436738 -= v1;
        }
        jump *(ptr4 + 3);
    }
}

long sub_403817(unsigned long param0, long param1, long param2, long param3, long param4, long param5) {
    long result;
    long v0 = 0L;
    long v1 = param3;
    if(param0) {
        v0 = param1 * param0;
        if(((param1 | param0) & 0xffffffffffff0000L)) {
            param2 = (unsigned long)v0 % param0;
            v0 = (unsigned long)v0 / param0 == param1 ? v0: -1L;
        }
    }
    long v2 = sub_40238E(v0, param1, param2, param3, param4, param5);
    if(v2 && (*(char*)(v2 - 8L) & 0x3)) {
        sub_404562(v2, 0L, (unsigned long)v0, param3);
    }
    return result;
}

long* sub_403873(int* param0, long* param1, long* param2, long param3, long* param4) {
    unsigned long* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long* result = param1;
    long v5 = v4;
    long v6 = v3;
    long* ptr1 = param4;
    long v7 = *(param1 + 1);
    if(((unsigned char)v7 & 0x3)) {
        long* ptr2 = (long*)((unsigned long)(v7 & 0xfffffffffffffff8L) + (long)result);
        if((long*)((long)param2 + (long)result) <= ptr2) {
            v2 = (long)((unsigned long)(v7 & 0xfffffffffffffff8L) - (long)param2);
            if((unsigned long)v2 > 31L) {
                v1 = (long)((long)param2 + (long)result);
                *(unsigned long*)(result + 1) = (long*)((long)(long*)((unsigned long)((unsigned int)v7 & 0x1) | (long)param2) | 0x2L);
                *(long*)((long)((long)param2 + (long)result) + 8L) = v2 | 0x3L;
                *(ptr2 + 1) = *(ptr2 + 1) | 0x1L;
                sub_401F12(param0, v1, v2, param3);
            }
            return result;
        }
        else if(*(long*)&param0[10] == ptr2) {
            long* ptr3 = (long*)((unsigned long)(v7 & 0xfffffffffffffff8L) + *(long*)&param0[4]);
            if(param2 >= ptr3) {
            loc_4038A9:
                result = NULL;
            }
            else {
                ptr2 = (long*)((long)ptr3 - (long)param2);
                long* ptr4 = (long*)((long)param2 + (long)result);
                *(unsigned long*)(result + 1) = (long*)((long)(long*)((unsigned long)((unsigned int)v7 & 0x1) | (long)param2) | 0x2L);
                *(unsigned long*)(ptr4 + 1) = (long*)((long)ptr2 | 0x1L);
                *(long*)&param0[10] = ptr4;
                *(long*)&param0[4] = ptr2;
            }
            return result;
        }
        else if(*(long*)&param0[8] != ptr2) {
            unsigned long v8 = *(unsigned long*)(ptr2 + 1);
            if(!((unsigned char)v8 & 0x2)) {
                v8 &= -8L;
                param4 = (long*)((unsigned long)(v7 & 0xfffffffffffffff8L) + v8);
                if(param2 <= param4) {
                    long v9 = *(ptr2 + 3);
                    long v10 = (long)((long)param4 - (long)param2);
                    param3 = (long)(v8 >>> 3);
                    if(v8 <= 248L) {
                        long v11 = *(ptr2 + 2);
                        if(v9 == v11) {
                            param0[0] &= __rol__(-2, param3 & 0x1fL);
                        }
                        else {
                            *(long*)(v11 + 24L) = v9;
                            *(long*)(v9 + 16L) = v11;
                        }
                    }
                    else {
                        v8 = *(unsigned long*)(ptr2 + 6);
                        if(v9 != ptr2) {
                            long v12 = *(ptr2 + 2);
                            *(long*)(v12 + 24L) = v9;
                            *(long*)(v9 + 16L) = v12;
                        }
                        else {
                            v9 = *(ptr2 + 5);
                            param3 = (long)(ptr2 + 5);
                            if(!v9) {
                                v9 = *(ptr2 + 4);
                                if(v9) {
                                    param3 = (long)(ptr2 + 4);
                                    goto loc_403B09;
                                }
                            }
                            else {
                            loc_403B09:
                                long v13 = v9;
                            loc_403B0C:
                                do {
                                    v0 = param3;
                                    v9 = v13;
                                    param3 = v13 + 40L;
                                    v13 = *(long*)(v13 + 40L);
                                    if(v13) {
                                        goto loc_403B0C;
                                    }
                                    else {
                                        v13 = *(long*)(v9 + 32L);
                                        param3 = v9 + 32L;
                                    }
                                }
                                while(v13);
                                *(long*)v0 = 0L;
                            }
                        }
                        if(v8) {
                            param3 = (long)*(int*)(ptr2 + 7);
                            long* ptr5 = (long*)((long)*(int*)(ptr2 + 7) * 8L + (long)param0);
                            if(*(ptr5 + 75) == ptr2) {
                                *(ptr5 + 75) = v9;
                                if(v9) {
                                    goto loc_403B58;
                                }
                                else {
                                    param0[1] &= __rol__(-2, param3 & 0x1fL);
                                }
                            }
                            else {
                                if(*(long*)(v8 + 32L) == ptr2) {
                                    *(long*)(v8 + 32L) = v9;
                                }
                                else {
                                    *(long*)(v8 + 40L) = v9;
                                }
                                if(v9) {
                                loc_403B58:
                                    long v14 = *(ptr2 + 4);
                                    *(unsigned long*)(v9 + 48L) = v8;
                                    if(v14) {
                                        *(long*)(v9 + 32L) = v14;
                                        *(long*)(v14 + 48L) = v9;
                                    }
                                    long v15 = *(ptr2 + 5);
                                    if(v15) {
                                        *(long*)(v9 + 40L) = v15;
                                        *(long*)(v15 + 48L) = v9;
                                    }
                                }
                            }
                        }
                    }
                    long* ptr6 = (long*)((long)param4 + (long)result);
                    if((unsigned long)v10 <= 31L) {
                        *(unsigned long*)(result + 1) = (long*)((long)(long*)((unsigned long)((unsigned int)v7 & 0x1) | (long)param4) | 0x2L);
                        *(ptr6 + 1) = *(ptr6 + 1) | 0x1L;
                    }
                    else {
                        v1 = (long)((long)param2 + (long)result);
                        *(unsigned long*)(result + 1) = (long*)((long)(long*)((unsigned long)((unsigned int)v7 & 0x1) | (long)param2) | 0x2L);
                        *(unsigned long*)(v1 + 8L) = (long*)(v10 | 0x3L);
                        *(ptr6 + 1) = *(ptr6 + 1) | 0x1L;
                        v2 = v10;
                        sub_401F12(param0, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_4038A9;
        }
        else {
            param3 = (long)((unsigned long)(v7 & 0xfffffffffffffff8L) + *(long*)&param0[2]);
            if((unsigned long)param3 < (unsigned long)param2) {
                goto loc_4038A9;
            }
            else {
                v7 = (unsigned long)((unsigned int)v7 & 0x1);
                ptr0 = (unsigned long*)(param3 + (long)result);
                param4 = (long*)(param3 - (long)param2);
            }
        }
        if((unsigned long)param4 > 31L) {
            param3 = (long)((long)param2 + (long)result);
            *(unsigned long*)(result + 1) = (long*)((long)(long*)((long)param2 | v7) | 0x2L);
            *(unsigned long*)(param3 + 8L) = (long*)((long)param4 | 0x1L);
            *ptr0 = param4;
            *(long*)(ptr0 + 1) = *(long*)(ptr0 + 1) & 0xfffffffffffffffeL;
            *(long*)&param0[2] = param4;
            *(long*)&param0[8] = param3;
        }
        else {
            *(result + 1) = param3 | v7 | 0x2L;
            *(long*)(ptr0 + 1) = *(long*)(ptr0 + 1) | 0x1L;
            *(long*)&param0[2] = 0L;
            *(long*)&param0[8] = 0L;
            return result;
        }
    }
    else if((unsigned long)param2 <= 0xffL) {
        goto loc_4038A9;
    }
    else {
        unsigned long v16 = gvar_4367B0;
        if((unsigned long)(param2 + 1) > (unsigned long)(v7 & 0xfffffffffffffff8L) || (unsigned long)(long*)((unsigned long)(v7 & 0xfffffffffffffff8L) - (long)param2) > v16 * 2L) {
            long v17 = *result;
            long* ptr7 = (long*)((long)(long*)((char*)(v16 + (long)param2) + 62L) & (0L - v16));
            long v18 = (unsigned long)(v7 & 0xfffffffffffffff8L) + v17 + 32L;
            long v19 = sub_404008();
            if(v19 == -1L) {
                goto loc_4038A9;
            }
            else {
                result = (long*)(v19 + v17);
                long* ptr8 = (long*)((long)ptr7 - v17);
                char v20 = *(long*)&param0[6] > (unsigned long)v19;
                *(result + 1) = (long)(ptr8 - 4);
                *((long*)((long)ptr8 + (long)result) - 3) = 11L;
                *((long*)((long)ptr8 + (long)result) - 2) = 0L;
                if(v20) {
                    *(long*)&param0[6] = v19;
                }
                long* ptr9 = (long*)((long)(long*)(*(long*)&param0[214] + (long)ptr7) - v18);
                char v21 = *(long*)&param0[216] == ptr9;
                char v22 = *(long*)&param0[216] > (unsigned long)ptr9;
                *(long*)&param0[214] = ptr9;
                if(!v22 && !v21) {
                    *(long*)&param0[216] = ptr9;
                }
            }
        }
    }
    return result;
}

long sub_403C02(long param0, unsigned long* param1, long param2, long param3, long param4, long param5) {
    long result;
    long v0;
    long v1;
    long v2;
    if(!param0) {
        return sub_40238E((long)param1, v1, param2, param3, v2, param5);
    }
    if((unsigned long)param1 > 18446744073709551487L) {
        result = sub_401556();
    }
    else if(!param1) {
        sub_403312(param0, NULL, param2, param3, param4, param5);
    }
    else {
        long* ptr0 = sub_403873((int*)&gvar_4363E0, (long*)(param0 - 16L), (unsigned long)param1 <= 14L ? (long*)0x20: (long*)((long)(long*)((char*)param1 + 31L) & 0xfffffffffffffff0L), 1L, (long*)param4);
        if(!ptr0) {
            v0 = sub_40238E((long)param1, (long)param1, param2, param3, param4, param5);
            if(v0) {
                long v3 = *(long*)(param0 - 8L);
                sub_404420(param3, (unsigned long)((v3 & 0xfffffffffffffff8L) - 16L) <= (unsigned long)param1 ? (unsigned long)((v3 & 0xfffffffffffffff8L) - 16L): param1);
                sub_403312(param0, (unsigned long*)param0, param2, param3, param4, param5);
            }
        }
    }
    return result;
}

void sub_403CBB() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_403D42(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1 = v0;
    long v2 = v0;
    return sub_403D6A(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_403D56(long param0, long param1, long param2, long param3) {
    long v0;
    long v1 = v0;
    long v2 = v0;
    return sub_40400E(param0, param1, param2, param3);
}

long sub_403D6A(long param0) {
    long v0;
    long v1;
    long result;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8;
    long v9;
    int v10 = (unsigned int)gvar_436360 | gvar_436368 | 0x2;
    long v11 = v3;
    long v12 = 0L;
    long v13 = v2;
    long v14 = v6;
    long v15 = v4;
    long v16 = v7;
    unsigned char v17 = *(int*)&gvar_4362B8;
    int v18 = 3;
    long v19 = 0L;
    long v20 = gvar_436B00;
    if(!(v10 & 0x10)) {
        long v21 = v20;
        v12 = 0x200000000000L;
        if(v20) {
            int v22 = *(int*)((char*)(v20 * 8L + (long)&gvar_436B00) + 4L);
            do {
                --v21;
                long v23 = (long)(*(unsigned int*)(v21 * 8L + (long)&gvar_436B0C) + 1);
                if((unsigned long)((((param0 + 0xffffL) & 0xffffffffffff0000L) >>> 16) + v23) <= 0x30000000L && *(int*)(v21 * 8L + (long)&gvar_436B0C) > 0x1ffffffe) {
                    v12 = v23 * 0x10000L;
                    goto loc_403E46;
                }
            }
            while(v21);
            v12 = (long)(v22 + 1) * 0x10000L;
        }
    loc_403E46:
        v12 &= 0xffffffffffff0000L;
    }
    if(v20 == 300L) {
        result = sub_401556();
    }
    else {
        if((v10 & 0x10)) {
            sub_403D56(v12, (param0 + 0xffffL) & 0xffffffffffff0000L, v20, (long)(v10 & 0x10));
        }
        else {
            sub_40427B((unsigned int)((((param0 + 0xffffL) & 0xffffffffffff0000L) + 0xffffL) >>> 16) + (unsigned int)(v12 >> 16) - 1, &gvar_436B08, v20);
        }
        if(!(v17 & 0x4)) {
            v1 = sub_40429B((long)(v10 | 0x10), 3L, -1L, 0L);
            goto loc_403F49;
        }
        else {
            int v24 = (unsigned int)((param0 + 0xffffL) & 0xffffffffffff0000L);
            long v25 = sub_4046FA(3L, (unsigned long)(v10 | 0x10));
            long v26 = sub_401A32(-1L, &gvar_4047C0, v25 & 0xffffffffL, (((param0 + 0xffffL) & 0xffffffffffff0000L) >>> 32) & 0xffffffffL, (long)v24, 0L, -1L, v8);
            v0 = v26;
            if(v26) {
                long v27 = sub_4042A8(3L, (long)(v10 | 0x10));
                long v28 = sub_401A5E(v0, v27 & 0xffffffffL, 0L, 0L, (param0 + 0xffffL) & 0xffffffffffff0000L, v12, -1L, v27);
                result = v28;
                if(v28) {
                    goto loc_403F54;
                }
                else {
                    sub_401A19(v0);
                }
            }
            v1 = sub_404786();
        loc_403F49:
            result = v1;
            v0 = -1L;
        }
    loc_403F54:
        if(result != -1L) {
            long v29 = sub_40427B((int)(result >>> 16L), &gvar_436B08, gvar_436B00);
            unsigned long v30 = gvar_436B00;
            if((unsigned long)v29 < v30) {
                sub_404542((char*)((v29 + 2L) * 8L + &gvar_436B00), (char*)((v29 + 2L) * 8L + 4418296L), (v30 - v29) * 8L, (v29 + 2L) * 8L);
                sub_404542((char*)(v9 + 4420704L), (char*)(v9 + 4420696L), (gvar_436B00 - v5) * 8L, v9);
            }
            ++gvar_436B00;
            *(unsigned int*)(v29 * 8L + (long)&gvar_436B08) = (unsigned int)(result >>> 16L);
            *(long*)(v29 * 8L + (long)&gvar_437468) = v0;
            *(unsigned int*)(v29 * 8L + (long)&gvar_436B0C) = (unsigned int)((unsigned int)((((param0 + 0xffffL) & 0xffffffffffff0000L) + 0xffffL) >>> 16) + (unsigned int)(result >> 16) - 1);
        }
    }
    return result;
}

long sub_404008() {
    return sub_401566();
}

long sub_40400E(long param0, long param1, long param2, long param3) {
    int v0;
    long v1;
    long v2;
    if((unsigned long)(param0 - 1L) <= 18446744073709551613L && param1) {
        int v3 = (unsigned int)(param0 >>> 16L);
        v0 = 0;
        long v4 = sub_40427B((unsigned int)((param1 + 0xffffL) >>> 16) + (unsigned int)(param0 >> 16) - 1, &gvar_436B08, gvar_436B00);
        long v5 = v4;
        while(v4) {
            long v6 = v4 - 1L;
            unsigned int v7 = *(unsigned int*)(v6 * 8L + (long)&gvar_436B08);
            if(*(int*)(v6 * 8L + (long)&gvar_436B0C) < (unsigned int)(param0 >>> 16L)) {
                break;
            }
            else {
                if(!(gvar_4362B8 & 0x4)) {
                    long v8 = sub_404300();
                    v0 |= (unsigned int)v8;
                }
                else {
                    long v9 = /*BAD_CALL!*/ sub_401A74((long)v7 * 0x10000L);
                    long v10 = sub_401A19(*(long*)(v6 * 8L + (long)&gvar_437468));
                    v0 = (unsigned int)v10 ? (unsigned int)v9 ? v0: -1: -1;
                }
                v4 = v6;
            }
        }
        if((unsigned long)v4 < (unsigned long)v5) {
            unsigned long v11 = gvar_436B00;
            if(v11 > (unsigned long)v5) {
                sub_404542((char*)((v4 + 1L) * 8L + &gvar_436B00), (char*)((v5 + 1L) * 8L + &gvar_436B00), (v11 - v5) * 8L, (v4 + 1L) * 8L);
                sub_404542((char*)(v1 + 4420704L), (char*)(v2 + 4420704L), (gvar_436B00 - v5) * 8L, v1);
            }
            gvar_436B00 = (unsigned long)(gvar_436B00 + v4 - v5);
        }
    }
    else {
        v0 = 0;
    }
    return (unsigned long)v0;
}

long sub_404151(long param0, long param1, long param2) {
    long result;
    int* ptr0;
    long v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    long v5 = v0;
    int* ptr1 = gvar_4367E0;
    if(!ptr1) {
        gvar_4367E0 = 4417512L;
        ptr1 = (int*)0x4367E8;
    }
    if(*ptr1 == -1) {
        sub_401AC6();
        if(ptr0) {
            *(unsigned long*)(ptr0 + 2) = ptr1;
            gvar_4367E0 = ptr0;
            ptr1 = ptr0;
            goto loc_4041B8;
        }
        else {
            result = sub_401556();
        }
    }
    else {
    loc_4041B8:
        int v6 = *ptr1;
        unsigned int v7 = (unsigned int)~v6;
        if(v7 != 0) {
            unsigned int i;
            for(i = 31; !(v7 >>> i); --i) {
            }
            v7 = i;
        }
        *ptr1 = (~(1 << (v7 % 32)) & v6) | (1 << (v7 % 32));
        long* ptr2 = (long*)((unsigned long)v7 * 24L + (long)ptr1);
        result = 0L;
        *(ptr2 + 2) = param0;
        *(ptr2 + 3) = param1;
        *(ptr2 + 4) = param2;
    }
    return result;
}

long sub_4041E6(long param0, long param1, long param2, long* param3) {
    long v0;
    long v1 = v0;
    long result = param2;
loc_4041F8:
    for(int* i = gvar_4367E0; i; i = gvar_4367E0) {
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
                        goto loc_4041F8;
                    }
                }
            }
            int* ptr0 = *(unsigned long*)(i + 2);
            if(!param0) {
                if(ptr0) {
                    sub_401ACC();
                }
                gvar_4367E0 = ptr0;
                goto loc_4041F8;
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

long sub_40427B(int param0, long param1, long param2) {
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

long sub_40429B(long param0, long param1, long param2, long param3) {
    return sub_4042F0();
}

long sub_4042A8(long param0, int param1) {
    return (unsigned long)((((unsigned int)param0 * 8) & 0x20) | ((param1 * 32) & 0x80000000) | ((param1 >> 1) & 0x1) | ((param1 >> 2) & 0x20000000) | ((unsigned int)((unsigned long)0 | ((unsigned long)(param0 & 0x3fffffffffffffffL) << 2)) & 0x4) | ((unsigned int)param0 & 0x2));
}

long sub_4042F0() {
    jump gvar_4362C0;
}

long sub_404300() {
    jump gvar_4362C0;
}

long sub_40436D(long param0, int* param1, long param2, long param3) {
    return sub_4043AF(param0, param1, param2, param3);
}

long sub_4043AF(long param0, int* param1, long param2, long param3) {
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

void sub_404420(long param0, unsigned long param1) {
    long v0 = param0;
    jump *(long*)((param1 < 32L ? param1: 32L) * 8L + 4415640L);
}

void sub_404542(char* param0, char* param1, long param2, long param3) {
    long v0 = param2;
    if(param1 <= param0) {
        param0 = (char*)((char*)(v0 + (long)param0) - 1L);
        param1 = (char*)((char*)(v0 + (long)param1) - 1L);
    }
    while(v0 != 0L) {
        *param0 = *param1;
        ++param1;
        ++param0;
        --v0;
    }
}

void sub_404562(long param0, long param1, unsigned long param2, long param3) {
    long v0 = param3;
    jump *(long*)((param2 < 32L ? param2: 32L) * 8L + 4415904L);
}

long sub_4046C1(long param0) {
    gvar_437FB4 |= 4;
    if((gvar_4362B8 & 0x4)) {
        while(1) {
            gvar_405030(param0 & 0xffL);
        }
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x4046F2 = lidt(*(__SyntheticTypeUnknownP80)0x4046F2);
    hlt();
}

long sub_4046FA(int param0, unsigned long param1) {
    long v0;
    int v1 = (unsigned int)param1;
    if((param0 & 0x7) == 7) {
        v0 = 64L;
        if(!((unsigned char)v1 & 0x1)) {
            param1 = gvar_436360;
            v0 = ((long)v1 & param1) == param1 ? 64L: 128L;
        }
    }
    else if((param0 & 0x3) == 3) {
        v0 = 4L;
        if(!((unsigned char)v1 & 0x1)) {
            unsigned long v2 = gvar_436360;
            v0 = ((((long)(unsigned int)param1 & v2) == v2 ? 0L: 1L) * 4L + 4L) & 0xffffffffL;
        }
    }
    else {
        v0 = (param0 & 0x5) == 5 ? 32L: (unsigned char)param0 & 0x4 ? 16L: (unsigned long)((param0 & 0x1) + 1);
    }
    return (unsigned long)(((v1 | param0) & 0xdd000000) | (unsigned int)v0);
}

long sub_404786() {
    if((gvar_4362B8 & 0x4)) {
        long v0 = sub_401A48();
        gvar_437FB0 = (unsigned int)v0;
        return -1L;
    }
    return sub_401566();
}
