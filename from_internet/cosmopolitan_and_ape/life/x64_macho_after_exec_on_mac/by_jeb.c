
long start() {
    long v0;
    long* ptr0;
    int v1;
    long v2;
    long* ptr1;
    long v3;
    char v4;
    char v5;
    gvar_403000 = 8;
    long v6 = (long)v1;
    long* ptr2 = (long*)&gvar_402010;
    for(long i = 8L; i != 0L; --i) {
        *ptr2 = &gvar_401214;
        ++ptr2;
    }
    long v7 = 0xffffffffL;
    long* ptr3 = &v4;
    while(v7 != 0L) {
        char v8 = *ptr3 == 0L;
        ++ptr3;
        --v7;
        if(!~v8) {
            break;
        }
    }
    sub_401297();
    gvar_40335C |= 1;
    long* ptr4 = (long*)&gvar_402008;
    long v9 = &gvar_402008;
    while(ptr4 != v9) {
        ptr0 = ptr4;
        v0 = v9;
        *ptr4(v9);
        v9 = v0;
        ptr4 = ptr0 + 1;
    }
    long v10 = sub_40134D();
    ptr0 = (long*)&loc_40139B;
    v0 = 0L;
    long v11 = v6;
    long v12 = v2;
    sub_401907(0L, &v5, v3, ptr1);
    /*NO_RETURN*/ sub_401AA1((long)(unsigned int)v10);
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

long* sub_401297() {
    char* ptr0;
    unsigned char v0;
    long* ptr1;
    long* ptr2;
    long v1 = &gvar_401EE8;
    if((gvar_403000 & 0x8)) {
        ptr1 = (long*)0x45;
        v0 = 8;
        ptr0 = (char*)&gvar_401EF8;
    }
    else if((gvar_403000 & 0x20)) {
        ptr1 = (long*)0x30;
        v0 = 32;
        ptr0 = (char*)&gvar_401EE9;
    }
    else if((gvar_403000 & 0x4)) {
        ptr1 = (long*)0x22;
        v0 = 4;
        ptr0 = (char*)&gvar_401EF5;
    }
    else if(*ptr2) {
        ptr1 = NULL;
        v0 = 1;
        ptr0 = (char*)&gvar_401EED;
    }
    else {
        ptr1 = (long*)0x2A;
        v0 = 16;
        ptr0 = (char*)&gvar_401EF1;
    }
    *(long*)&gvar_403000 = v0;
    long* result = (long*)((char*)ptr1 + &gvar_40199D);
    gvar_403008 = (long*)((char*)ptr1 + &gvar_40199D);
    ptr1 = (long*)0x403010;
    for(unsigned long* i = (unsigned long*)&gvar_403018; (unsigned long)i < 0x403030L; ++i) {
        long v2 = 0L;
        long* ptr3 = NULL;
        do {
            result = (unsigned long)*ptr0 | ((unsigned long)(long*)((long)(long*)((long)result >>> 8L) & 0xffffffffffffffL) << 8);
            ++ptr0;
            long v3 = (unsigned long)((unsigned int)result & 0x7f) << (v2 & 0x3fL);
            v2 = (unsigned long)((unsigned int)v2 + 7);
            ptr3 = (long*)((long)ptr3 | v3);
        }
        while((unsigned char)result < 0);
        if(((unsigned char)result & 0x40)) {
            ptr3 = (long*)((-1L << (v2 & 0x3fL)) | (long)ptr3);
        }
        result = *i ? *i: ptr3;
        *i = *i ? *i: ptr3;
    }
    return result;
}

long sub_40134D() {
    return 42L;
}

long sub_4013B4() {
    gvar_403358 = gvar_403018;
    return -1L;
}

long sub_401872(long param0, long param1, long param2) {
    long result;
    long v0;
    long v1;
    long v2;
    long v3 = v1;
    long v4 = v2;
    long v5 = v0;
    int* ptr0 = *(long*)&gvar_403040;
    if(!ptr0) {
        ptr0 = (int*)&gvar_403048;
        *(long*)&gvar_403040 = 72;
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
        long* ptr1 = (long*)((unsigned long)v7 * 24L + (long)ptr0);
        result = 0L;
        *(ptr1 + 2) = param0;
        *(ptr1 + 3) = param1;
        *(ptr1 + 4) = param2;
    }
    return result;
}

long sub_401907(long param0, long param1, long param2, long* param3) {
    long v0;
    long v1 = v0;
    long result = param2;
loc_40191B:
    for(int* i = *(long*)&gvar_403040; i; i = *(long*)&gvar_403040) {
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
                        goto loc_40191B;
                    }
                }
            }
            int* ptr0 = *(unsigned long*)(i + 2);
            if(!param0) {
                *(long*)&gvar_403040 = ptr0;
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

long sub_4019FA(long param0, int* param1, long param2, long param3) {
    return sub_401A3C(param0, param1, param2, param3);
}

long sub_401A3C(long param0, int* param1, long param2, long param3) {
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

long sub_401AA1(long param0) {
    gvar_40335C |= 4;
    if((gvar_403000 & 0x4)) {
        while(1) {
            *(long*)&gvar_402010(param0 & 0xffL);
        }
    }
    syscall();
    *(__SyntheticTypeUnknownP80)0x401AD2 = lidt(*(__SyntheticTypeUnknownP80)0x401AD2);
    hlt();
}
