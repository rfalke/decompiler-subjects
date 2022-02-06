
int start(int param0, int param1) {
    int v0;
    int v1;
    int v2 = v0;
    unsigned int* ptr0 = &param0;
    char v3 = v2 == 3;
    char v4 = v2 < 3;
    char v5 = __parity__((unsigned char)v2 - 3);
    char v6 = (unsigned int)v2 < 3;
    char v7 = (((v2 - 3) ^ v2) & (v2 ^ 0x3)) < 0;
    char v8 = (((v2 - 3) ^ (v2 ^ 0x3)) >>> 4) & 0x1;
    if(v4 == v7) {
        int v9 = param0;
        ptr0 = &param1;
        int v10 = v2 - 1;
        v2 = v10 - 1;
        int v11 = 0;
        char v12 = 1;
        char v13 = 0;
        char v14 = 1;
        char v15 = 0;
        char v16 = 0;
        int v17 = *(int*)(v2 * 4 + (int)&param1);
        *(int*)(v2 * 4 + (int)&param1) = 0;
        int v18 = v17;
        while(1) {
            int v19 = *ptr0;
            ++ptr0;
            char v20 = v19 ? 0: 1;
            char v21 = v19 < 0;
            char v22 = __parity__((unsigned char)v19);
            char v23 = 0;
            char v24 = 0;
            if(v20) {
                break;
            }
            else {
                --ptr0;
                *ptr0 = &loc_8048065;
                int v25 = /*BAD_CALL!*/ sub_8048071(v2, v1);
            }
        }
    }
    int v26 = 0;
    char v27 = 1;
    char v28 = 0;
    char v29 = 1;
    char v30 = 0;
    char v31 = 0;
    --ptr0;
    *ptr0 = 1;
    int v32 = *ptr0;
    ++ptr0;
    interrupt(128);
}

int sub_8048071(int param0, int param1) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    int v7;
    unsigned char* ptr0 = &v1;
    int v8 = v3;
    int v9 = param0;
    int v10 = param1;
    int v11 = v4;
    unsigned char* ptr1 = &v1;
    int v12 = sub_80480E7(param0, param1);
    if(v6) {
        v0 = v5;
        int v13 = /*BAD_CALL!*/ sub_804810E();
        short v14 = (unsigned short)(v13 >>> 16);
        short v15 = 47;
        int v16 = param1;
        int v17 = param1;
        int v18 = param1 - 1;
        char v19 = v18 ? 0: 1;
        char v20 = v18 < 0;
        char v21 = __parity__((unsigned char)v18);
        char v22 = ((~v18 ^ ~v17) >>> 4) & 0x1;
        char v23 = ((v18 ^ v17) & v17) < 0;
        int v24 = v7;
        unsigned char* ptr2 = (unsigned char*)(v18 + v24);
        char v25 = *ptr2 == 47;
        char v26 = *ptr2 < 47;
        char v27 = __parity__(*ptr2 - 47);
        char v28 = *ptr2 < 47;
        char v29 = (((*ptr2 - 47) ^ *ptr2) & (*ptr2 ^ 0x2f)) < 0;
        char v30 = (((*ptr2 - 47) ^ (*ptr2 ^ 0x2f)) >>> 4) & 0x1;
        if(v25) {
            *ptr2 = 0;
        }
        char v31 = 1;
        while(v16 != 0) {
            v25 = *ptr2 == 47;
            char v32 = *ptr2 > 47;
            char v33 = __parity__(47 - *ptr2);
            v28 = *ptr2 > 47;
            char v34 = (((47 - *ptr2) ^ 0x2f) & (*ptr2 ^ 0x2f)) < 0;
            char v35 = (((47 - *ptr2) ^ (*ptr2 ^ 0x2f)) >>> 4) & 0x1;
            --ptr2;
            --v16;
            if(!~v25) {
                break;
            }
        }
        char v36 = 0;
        if(v25) {
            unsigned char* ptr3 = ptr2;
            ++ptr2;
            char v37 = ptr2 ? 0: 1;
            char v38 = (int)ptr2 < 0;
            char v39 = __parity__((unsigned char)ptr2);
            char v40 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x1) ^ (int)ptr2) >>> 4) & 0x1);
            char v41 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x1)) < 0;
        }
        ptr0 = ptr2;
        int v42 = (int)(ptr2 + 1);
        v6 = v42 ? 0: 1;
        char v43 = v42 < 0;
        char v44 = __parity__((unsigned char)v42);
        char v45 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 ^ 0x1) ^ v42) >>> 4) & 0x1);
        char v46 = (int)(int*)((int)(int*)(v42 ^ (int)ptr0) & (int*)~(int)(int*)((int)ptr0 ^ 0x1)) < 0;
        int v47 = v7;
        int v48 = v42;
        int v49 = v0;
        int v50 = v48;
        int v51 = v49;
        v5 = 134513028;
        int v52 = sub_80480B8(v16, v50);
        v7 = v47;
    }
    int v53 = v5;
    int v54 = v7;
    v0 = 38;
    int v55 = 38;
    int* ptr4 = &v2;
    interrupt(128);
}

int sub_80480B8(int param0, int param1) {
    int result;
    sub_804811F(param0, param1);
    sub_80480CC(param0, param1);
    sub_804812C(param0, param1);
    return result;
}

short sub_80480CC(int param0, int param1) {
    int v0;
    int v1;
    sub_804810E();
    if(*(char*)(v0 + v1 - 1) != 47) {
        *(short*)(v0 + v1) = 47;
    }
    return 47;
}

int sub_80480E7(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0 = &v0;
    int v5 = v3;
    int v6 = param0;
    int v7 = param1;
    int v8 = v2;
    int* ptr1 = &v0;
    int v9 = 134512964;
    int v10 = v4;
    int v11 = 106;
    int v12 = 106;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_804810E() {
    char v0;
    char* ptr0;
    int result;
    int v1 = -1;
    do {
        ++v1;
        v0 = *ptr0;
        ++ptr0;
    }
    while(v0);
    return result;
}

int sub_804811F(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char* ptr0;
    char* ptr1;
    int result = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = v2;
    int* ptr2 = &v0;
    sub_804810E();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
    }
    return result;
}

int sub_804812C(int param0, int param1) {
    int v0;
    int v1;
    char* ptr0;
    int v2;
    int v3;
    int result = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr1 = &v0;
    sub_804810E();
    char* ptr2 = ptr0;
    char* ptr3 = (char*)(param1 + v2);
    sub_804810E();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr3 = *ptr2;
        ++ptr2;
        ++ptr3;
    }
    return result;
}
