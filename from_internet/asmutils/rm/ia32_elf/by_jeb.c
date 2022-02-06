
int start(int param0, unsigned short* param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    char v8;
    int v9;
    int v10 = v7;
    unsigned int* ptr0 = &param0;
    char v11 = v10 == 2;
    char v12 = v10 < 2;
    char v13 = __parity__((unsigned char)v10 - 2);
    char v14 = (unsigned int)v10 < 2;
    char v15 = (((v10 - 2) ^ v10) & (v10 ^ 0x2)) < 0;
    char v16 = (((v10 - 2) ^ (v10 ^ 0x2)) >>> 4) & 0x1;
    if(v12 == v15) {
        int v17 = param0;
        --v10;
        int v18 = 0;
        char v19 = 1;
        char v20 = 0;
        char v21 = 1;
        char v22 = 0;
        char v23 = 0;
        unsigned short* ptr1 = param1;
        ptr0 = &v8;
        char v24 = *ptr1 == 29229;
        char v25 = *ptr1 < 29229;
        char v26 = __parity__((unsigned char)*ptr1 - 45);
        char v27 = *ptr1 < 29229;
        char v28 = (((*ptr1 - 29229) ^ *ptr1) & (*ptr1 ^ 0x722d)) < 0;
        v16 = (((*ptr1 - 29229) ^ (*ptr1 ^ 0x722d)) >>> 4) & 0x1;
        if(v24) {
            int v29 = 0;
            v18 = 1;
            char v30 = 0;
            char v31 = 0;
            char v32 = 0;
            v16 = 0;
            char v33 = 0;
        }
        else {
            ptr0 = &param1;
            param1 = ptr1;
        }
        int v34 = *ptr0;
        ++ptr0;
        v6 = v34 ? 0: 1;
        v5 = v34 < 0;
        v4 = __parity__((unsigned char)v34);
        v3 = 0;
        v2 = 0;
        if(!v6) {
            --ptr0;
            *ptr0 = &loc_8048070;
            int v35 = /*BAD_CALL!*/ sub_8048177(v10, v9);
            v1 = v34;
            --ptr0;
            *ptr0 = 10;
            v0 = *ptr0;
            ++ptr0;
            interrupt(128);
        }
    }
    v1 = 0;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

int sub_8048094(int param0) {
    int* ptr0;
    int* ptr1;
    char v0;
    int v1;
    int v2;
    int* ptr2 = &ptr0;
    int* ptr3 = &ptr0;
    char v3 = &ptr1 == 0x1112;
    char v4 = (int)&v0 < 0;
    char v5 = __parity__((unsigned char)&ptr1 - 18);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x110e) ^ (int)&v0) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr0 < 0x110e;
    char v8 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&ptr0 ^ 0x110e)) < 0;
    int v9 = param0;
    int result = sub_8048177(v1, v2);
    if(v3) {
        v1 = 0;
        char v10 = 1;
        char v11 = 0;
        char v12 = 1;
        char v13 = 0;
        char v14 = 0;
        int v15 = param0;
        int v16 = 5;
        result = 5;
        int* ptr4 = &v0;
        interrupt(128);
    }
    return result;
}

int sub_8048148(int param0, int param1) {
    int result;
    sub_80481AE(param0, param1);
    sub_804815C(param0, param1);
    sub_80481BB(param0, param1);
    return result;
}

short sub_804815C(int param0, int param1) {
    int v0;
    int v1;
    sub_804819E();
    if(*(char*)(v0 + v1 - 1) != 47) {
        *(short*)(v0 + v1) = 47;
    }
    return 47;
}

int sub_8048177(int param0, int param1) {
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
    int v9 = 134513107;
    int v10 = v4;
    int v11 = 107;
    int v12 = 107;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_804819E() {
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

int sub_80481AE(int param0, int param1) {
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
    sub_804819E();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
    }
    return result;
}

int sub_80481BB(int param0, int param1) {
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
    sub_804819E();
    char* ptr2 = ptr0;
    char* ptr3 = (char*)(param1 + v2);
    sub_804819E();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr3 = *ptr2;
        ++ptr2;
        ++ptr3;
    }
    return result;
}
