
int sub_804804C(int param0, int param1) {
    int v0;
    short v1;
    int v2 = v0;
    if(!v2) {
        v2 = (unsigned int)v1;
    }
    else if(v1) {
        int v3 = v2;
        v2 = (unsigned int)((unsigned short)v2 * v1) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        int v4 = (((unsigned int)(unsigned short)v3 * (unsigned int)v1) >>> 16) * 0x10000;
        short v5 = (unsigned short)v2;
        v2 = (unsigned int)(unsigned short)v4 | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
        int v6 = (unsigned int)v5 | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        return (unsigned int)((unsigned short)((unsigned long long)v6 | ((unsigned long long)v2 << 32)) % 1) | ((unsigned int)(unsigned short)(((unsigned int)((unsigned long long)v6 | ((unsigned long long)v2 << 32)) / 0x10001) >>> 16) << 16);
    }
    return (unsigned int)(1 - (unsigned short)v2) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
}

int sub_8048077(int param0, int param1) {
    short v0;
    int result = (unsigned int)v0;
    if(result) {
        int v1 = 0xffff;
        while(((unsigned int)((unsigned long long)(result * v1) | ((unsigned long long)(unsigned int)(((unsigned long long)result * (unsigned long long)v1) >>> 32L) << 32)) % 0x10001 - 1)) {
            --v1;
            if(!v1) {
                break;
            }
        }
        result = v1;
    }
    return result;
}

int* sub_804809C(int param0, int param1) {
    int v0;
    int v1;
    short* ptr0;
    short* ptr1;
    int* ptr2;
    int* result = ptr2;
    int v2 = param0;
    int v3 = param1;
    int v4 = v1;
    int* ptr3 = &v0;
    short* ptr4 = ptr0;
    int v5 = 8;
    int v6 = 8;
    do {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
        --v6;
    }
    while(v6 == 0);
    short* ptr5 = ptr4;
    short* ptr6 = (short*)0x1;
    int* ptr7 = NULL;
    do {
        ptr4 = ptr6;
        *ptr0 = (*(short*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 & 0x7) + (int)ptr7) * 2) + (int)ptr5) * 0x200) | (*(short*)((int)(int*)((int)(int*)((int)(int*)((int)(int*)((char*)((int)ptr6 & 0x7) + 1) & 0x7) + (int)ptr7) * 2) + (int)ptr5) >>> 7);
        ++ptr0;
        ptr7 = (int*)((int)(int*)((int)((unsigned int)((unsigned char)((unsigned char)ptr4 & 0x7) >= 1 ? 0: 1) | ((unsigned int)(int*)((int)(int*)((int)(int*)((int)ptr4 & 0x7) >>> 8) & 0xffffff) << 8)) * 8) + (int)ptr7);
        ptr6 = (short*)((char*)ptr4 + 1);
    }
    while((int)ptr6 <= 44);
    return result;
}

int sub_80480E3(int param0, int param1) {
    int v0;
    short* ptr0;
    int v1;
    int v2;
    short* ptr1;
    int result = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = v2;
    int* ptr2 = &v0;
    int v6 = sub_8048077(param0, param1);
    *ptr0 = (unsigned short)v6;
    *(ptr0 + 1) = 0 - *(ptr1 + 49);
    *(ptr0 + 2) = 0 - *(ptr1 + 50);
    int v7 = sub_8048077(param0, param1);
    *(ptr0 + 3) = (unsigned short)v7;
    int* ptr3 = (int*)(ptr0 + 4);
    int v8 = 42;
    int v9 = 42;
    do {
        *ptr3 = *((int*)(v9 * 2 + (int)ptr1) + 2);
        int v10 = sub_8048077(v9, param1);
        *(short*)(ptr3 + 1) = (unsigned short)v10;
        *(short*)((char*)ptr3 + 6) = 0 - *(short*)((int*)(param0 * 2 + (int)ptr1) + 1);
        *(short*)(ptr3 + 2) = 0 - *(short*)((char*)(param0 * 2 + (int)ptr1) + 2);
        int v11 = sub_8048077(param0, param1);
        *(short*)((char*)ptr3 + 10) = (unsigned short)v11;
        ptr3 += 3;
        v9 = param0 - 6;
    }
    while(v9);
    *ptr3 = *(int*)(ptr1 + 4);
    int v12 = sub_8048077(0, param1);
    *(unsigned short*)(ptr3 + 1) = (unsigned short)v12;
    *(unsigned short*)((char*)ptr3 + 6) = (unsigned short)(0 - *(unsigned short*)(ptr1 + 1));
    *(unsigned short*)(ptr3 + 2) = (unsigned short)(0 - *(unsigned short*)(ptr1 + 2));
    int v13 = sub_8048077(param0, param1);
    *(short*)((char*)ptr3 + 10) = (unsigned short)v13;
    return result;
}

int sub_804816C(int param0, int param1) {
    int v0;
    int v1;
    short v2;
    short v3;
    short v4;
    int v5;
    int v6;
    int v7;
    int v8;
    short v9;
    short v10;
    short v11;
    short* ptr0;
    short* ptr1;
    int result = v8;
    int v12 = param0;
    int v13 = param1;
    int v14 = (unsigned int)v2 | ((unsigned int)v11 << 16);
    int* ptr2 = &v0;
    int v15 = (unsigned int)v10 | ((unsigned int)v4 << 16);
    short* ptr3 = ptr0;
    param0 = (unsigned int)*ptr0 | ((unsigned int)(unsigned short)(param0 >>> 16) << 16);
    param1 = (unsigned int)*(ptr0 + 1) | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
    v10 = *(ptr0 + 2);
    ptr0 = (unsigned int)*(ptr0 + 3) | ((unsigned int)(unsigned short)(int*)((int)ptr0 >>> 16) << 16);
    int v16 = 8;
    do {
        int v17 = v16;
        int v18 = sub_804804C(param0, param1);
        int v19 = (unsigned int)(unsigned short)v18 | ((unsigned int)(unsigned short)(v19 >>> 16) << 16);
        int v20 = (unsigned int)((unsigned short)v20 + *(ptr1 + 1)) | ((unsigned int)(unsigned short)(v20 >>> 16) << 16);
        v10 += *(ptr1 + 2);
        int v21 = sub_804804C(v19, v20);
        ptr0 = (unsigned int)(unsigned short)v21 | ((unsigned int)(unsigned short)(int*)((int)ptr0 >>> 16) << 16);
        int v22 = sub_804804C(v1, v7);
        int v23 = v22;
        ptr1 += 6;
        int v24 = /*BAD_CALL!*/ sub_804804C(v1, v7);
        v2 = (unsigned short)v24 + (unsigned short)v23;
        param0 = (unsigned int)((unsigned short)v24 ^ (unsigned short)param0) | ((unsigned int)(unsigned short)(param0 >>> 16) << 16);
        param1 = (unsigned int)((unsigned short)param1 ^ v2) | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
        ptr0 = (unsigned int)((unsigned short)ptr0 ^ v2) | ((unsigned int)(unsigned short)(int*)((int)ptr0 >>> 16) << 16);
        short v25 = (unsigned short)param1;
        param1 = (unsigned int)((unsigned short)v24 ^ v10) | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
        v10 = v25;
        v16 = v17 - 1;
    }
    while(v16);
    int v26 = /*BAD_CALL!*/ sub_804804C(param0, param1);
    v10 += *(ptr1 + 1);
    int v27 = sub_804804C((unsigned int)(unsigned short)v26 | ((unsigned int)(unsigned short)(v5 >>> 16) << 16), (unsigned int)((unsigned short)v6 + *(ptr1 + 2)) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16));
    short* ptr4 = ptr3;
    *ptr4 = v9;
    *(ptr4 + 1) = v10;
    *(ptr4 + 2) = v3;
    *(ptr4 + 3) = (unsigned short)v27;
    return result;
}

int sub_804820A() {
    char v0;
    char v1;
    int v2;
    int v3;
    int v4 = v2;
    *(int*)&v0 = v2;
    int v5 = 7;
    do {
        *(char*)(v5 + (int)&v0) = 42;
        int v6 = v5;
        --v5;
        char v7 = v5 ? 0: 1;
        v1 = v5 < 0;
        char v8 = __parity__((unsigned char)v5);
        char v9 = ((~v5 ^ ~v6) >>> 4) & 0x1;
        char v10 = ((v5 ^ v6) & v6) < 0;
    }
    while(!v1);
    int v11 = 8;
    char* ptr0 = &v0;
    int v12 = v3;
    int v13 = 3;
    int v14 = 3;
    int* ptr1 = (int*)&v0;
    interrupt(128);
}
