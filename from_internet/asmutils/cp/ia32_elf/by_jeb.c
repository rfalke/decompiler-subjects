
int start(int param0, unsigned short* param1) {
    unsigned int* ptr0;
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    char v5;
    unsigned int v6 = v4;
    char v7 = v6 == 3;
    char v8 = (int)v6 < 3;
    char v9 = __parity__((unsigned char)v6 - 3);
    char v10 = v6 < 3;
    char v11 = (((v6 - 3) ^ v6) & (v6 ^ 0x3)) < 0;
    char v12 = (((v6 - 3) ^ (v6 ^ 0x3)) >>> 4) & 0x1;
    if(v10) {
        v3 = 27;
        v2 = &gvar_804804C;
        v1 = 1;
        v4 = 4;
        v0 = 4;
        ptr0 = &param0;
        interrupt(128);
    }
    int v13 = param0;
    unsigned int v14 = v6;
    int v15 = (int)(v6 - 1);
    char v16 = v15 ? 0: 1;
    char v17 = v15 < 0;
    char v18 = __parity__((unsigned char)v15);
    char v19 = ((~v15 ^ ~v14) >>> 4) & 0x1;
    char v20 = ((v15 ^ v14) & v14) < 0;
    unsigned short* ptr1 = param1;
    ptr0 = &v5;
    char v21 = *ptr1 == 29229;
    char v22 = *ptr1 < 29229;
    char v23 = __parity__((unsigned char)*ptr1 - 45);
    char v24 = *ptr1 < 29229;
    char v25 = (((*ptr1 - 29229) ^ *ptr1) & (*ptr1 ^ 0x722d)) < 0;
    v12 = (((*ptr1 - 29229) ^ (*ptr1 ^ 0x722d)) >>> 4) & 0x1;
    if(v21) {
        ++gvar_80482EA;
        int v26 = v15;
        --v15;
        char v27 = v15 ? 0: 1;
        char v28 = v15 < 0;
        char v29 = __parity__((unsigned char)v15);
        v12 = ((~v15 ^ ~v26) >>> 4) & 0x1;
        char v30 = ((v15 ^ v26) & v26) < 0;
    }
    else {
        ptr0 = &param1;
        param1 = ptr1;
    }
    v2 = v15 - 1;
    int v31 = 0;
    char v32 = 1;
    char v33 = 0;
    char v34 = 1;
    char v35 = 0;
    char v36 = 0;
    int v37 = *(int*)(v2 * 4 + (int)ptr0);
    *(int*)(v2 * 4 + (int)ptr0) = 0;
    int v38 = v37;
    gvar_80482E6 = v37;
    while(1) {
        int v39 = *ptr0;
        ++ptr0;
        v7 = v39 ? 0: 1;
        v8 = v39 < 0;
        v9 = __parity__((unsigned char)v39);
        v11 = 0;
        v10 = 0;
        if(v7) {
            break;
        }
        else {
            --ptr0;
            *ptr0 = &loc_80480AD;
            v38 = /*BAD_CALL!*/ sub_804828E(v2, v3);
            --ptr0;
            *ptr0 = v39;
            unsigned int v40 = gvar_80482E6;
            int v41 = *ptr0;
            *ptr0 = &loc_80480D5;
            v38 = /*BAD_CALL!*/ sub_80480D7(v2, v3);
        }
    }
    v1 = v38;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

int sub_80480D7(int param0, int param1) {
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
    int v9 = 134517483;
    int v10 = v4;
    int v11 = 106;
    int v12 = 106;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_804816B(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1;
    int* ptr2;
    char v2;
    int v3;
    int v4;
    int* ptr3 = &ptr1;
    int* ptr4 = &ptr1;
    char v5 = &ptr2 == 0x1112;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&ptr2 - 18);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x110e) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&ptr1 < 0x110e;
    char v10 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v2) & (int)(int*)((int)&ptr1 ^ 0x110e)) < 0;
    int result = sub_804828E(v3, v4);
    if(v5) {
        int v11 = param1;
        int v12 = sub_804828E(v3, v4);
        if(!v5) {
            v3 = 493;
            v1 = v11;
            v0 = 39;
            result = 39;
            ptr0 = &v2;
            interrupt(128);
        }
        v3 = 0;
        v5 = 1;
        v6 = 0;
        v7 = 1;
        v10 = 0;
        v9 = 0;
        v1 = param0;
        v0 = 5;
        result = 5;
        ptr0 = &v2;
        interrupt(128);
    }
    return result;
}

int sub_804825F(int param0, int param1) {
    int result;
    sub_80482C1(param0, param1);
    sub_8048273(param0, param1);
    sub_80482CE(param0, param1);
    return result;
}

short sub_8048273(int param0, int param1) {
    int v0;
    int v1;
    sub_80482B5();
    if(*(char*)(v0 + v1 - 1) != 47) {
        *(short*)(v0 + v1) = 47;
    }
    return 47;
}

int sub_804828E(int param0, int param1) {
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
    int v9 = 134517483;
    int v10 = v4;
    int v11 = 106;
    int v12 = 106;
    int* ptr2 = &v1;
    interrupt(128);
}

void sub_80482B5() {
    unsigned int v0;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
    }
    while(*ptr0);
}

int sub_80482C1(int param0, int param1) {
    int v0;
    int v1;
    char* ptr0;
    char* ptr1;
    int v2;
    int result = v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr2 = &v0;
    sub_80482B5();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
    }
    return result;
}

int sub_80482CE(int param0, int param1) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    int v3;
    int result = v3;
    int v4 = param0;
    int v5 = param1;
    int v6 = v2;
    int* ptr1 = &v0;
    sub_80482B5();
    char* ptr2 = ptr0;
    char* ptr3 = (char*)(param1 + v1);
    sub_80482B5();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr3 = *ptr2;
        ++ptr2;
        ++ptr3;
    }
    return result;
}
