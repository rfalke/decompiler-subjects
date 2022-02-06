
long start() {
    gvar_403000 = 8;
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
    long* ptr2 = (long*)&gvar_402010;
    long v5 = 0x402050L;
    long v6 = 0x402050L;
    long v7 = 64L;
    char v8 = 0;
    char v9 = 0;
    char v10 = 0;
    char v11 = 0;
    char v12 = 0;
    char v13 = 0;
    int v14 = 64;
    long v15 = 8L;
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
    /*NO_RETURN*/ sub_401353();
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
    long v3;
    long v4 = v0;
    long v5 = param2;
    long v6 = v2;
    long v7 = v3;
    long v8 = v1;
    unsigned int* ptr0 = *(long*)&gvar_403040;
    if(!ptr0) {
        ptr0 = (unsigned int*)&gvar_403048;
        *(long*)&gvar_403040 = 72;
    }
    if(*ptr0 == -1) {
        result = sub_4013B4();
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

long sub_4019FA(long param0, int* param1, long param2, long param3) {
    return sub_401A3C(param0, param1, param2, param3);
}

long sub_401A3C(long param0, int* param1, long param2, long param3) {
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
