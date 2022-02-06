
int start(char* param0, int param1) {
    int* ptr0;
    char* ptr1;
    char* ptr2;
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    char v7;
    int v8;
    unsigned char v9;
    int v10;
    unsigned short* ptr3;
    int v11;
    int* ptr4 = &v10;
    char v12 = v9 == 2;
    char v13 = (char)v9 < 2;
    char v14 = __parity__(v9 - 2);
    char v15 = v9 < 2;
    char v16 = (((v9 - 2) ^ v9) & (v9 ^ 0x2)) < 0;
    char v17 = (((v9 - 2) ^ (v9 ^ 0x2)) >>> 4) & 0x1;
    if(v13 == v16) {
        unsigned short* ptr5 = ptr3;
        char v18 = *ptr5 == 22061;
        char v19 = *ptr5 < 22061;
        char v20 = __parity__((unsigned char)*ptr5 - 45);
        char v21 = *ptr5 < 22061;
        char v22 = (((*ptr5 - 22061) ^ *ptr5) & (*ptr5 ^ 0x562d)) < 0;
        v17 = (((*ptr5 - 22061) ^ (*ptr5 ^ 0x562d)) >>> 4) & 0x1;
        if(v18) {
            v8 = "hackers\' ksyms v 0.1\n";
            sub_804824A(param0);
            goto loc_80480E8;
        }
        else {
            char v23 = *ptr5 == 26669;
            char v24 = *ptr5 < 26669;
            char v25 = __parity__((unsigned char)*ptr5 - 45);
            char v26 = *ptr5 < 26669;
            char v27 = (((*ptr5 - 26669) ^ *ptr5) & (*ptr5 ^ 0x682d)) < 0;
            char v28 = (((*ptr5 - 26669) ^ (*ptr5 ^ 0x682d)) >>> 4) & 0x1;
            if(!v23) {
                int v29 = "Address   Symbol                            Defined by\n";
                sub_804824A(param0);
            }
            unsigned short* ptr6 = ptr3;
            v7 = *ptr6 == 28461;
            char v30 = *ptr6 < 28461;
            char v31 = __parity__((unsigned char)*ptr6 - 45);
            char v32 = *ptr6 < 28461;
            char v33 = (((*ptr6 - 28461) ^ *ptr6) & (*ptr6 ^ 0x6f2d)) < 0;
            v17 = (((*ptr6 - 28461) ^ (*ptr6 ^ 0x6f2d)) >>> 4) & 0x1;
        }
        if(v7) {
            char v34 = v9 == 3;
            char v35 = (char)v9 < 3;
            char v36 = __parity__(v9 - 3);
            char v37 = v9 < 3;
            char v38 = (((v9 - 3) ^ v9) & (v9 ^ 0x3)) < 0;
            v17 = (((v9 - 3) ^ (v9 ^ 0x3)) >>> 4) & 0x1;
            if(v35 != v38) {
                v8 = 0;
                char v39 = 1;
                char v40 = 0;
                char v41 = 1;
                char v42 = 0;
                char v43 = 0;
                v6 = sub_80480F1((int)param0, param1);
            }
            else {
                v8 = v11;
                v6 = sub_80480F1((int)param0, param1);
            }
        loc_80480E8:
            int v44 = 0;
            v5 = 1;
            v4 = 0;
            v3 = 1;
            v2 = 0;
            v1 = 0;
            v0 = 0;
            ptr2 = (char*)0x1;
            ptr1 = (char*)0x1;
            ptr0 = &v10;
            interrupt(128);
        }
    }
    int v45 = &gvar_80A82CE;
    v8 = 0x20000;
    param1 = 134513354;
    ptr2 = (char*)0x1;
    param0 = (char*)0x1;
    ptr0 = &v10;
    v0 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v1 = 0;
    ptr1 = (char*)0xA7;
    interrupt(128);
}

int sub_80480F1(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0 = &v5;
    int* ptr1 = &v5;
    char v7 = &v0 == 16;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&v0 - 16);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0xc) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v5 < 12;
    char v12 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v1) & (int)(int*)((int)&v5 ^ 0xc)) < 0;
    int v13 = v3;
    int* ptr2 = &v1;
    int v14 = v6;
    int v15 = param0;
    int v16 = param1;
    int v17 = v4;
    int* ptr3 = &v1;
    int* ptr4 = &v5;
    int v18 = &gvar_80A82CA;
    int v19 = 0x20000;
    int v20 = 0x80882ca;
    int v21 = 4;
    int v22 = 4;
    int* ptr5 = &v2;
    int v23 = v13;
    char v24 = 1;
    char v25 = 0;
    char v26 = 1;
    char v27 = 0;
    char v28 = 0;
    int v29 = 167;
    interrupt(128);
}

// Stale decompilation - Refresh this view to re-decompile this code
char sub_8048214(int param0, int param1) {
    char v0;
    char* ptr0;
    char* ptr1 = ptr0;
    sub_804822C(param0, param1);
    char* ptr2 = ptr1;
    *ptr0 = 9;
    if(v0 == 16 && (unsigned char)((unsigned char)ptr2 - ((unsigned char)ptr0 + 1)) > 249) {
        *(ptr0 + 1) = 9;
    }
    return 9;
}

unsigned int sub_804822C(unsigned int param0) {
    unsigned int v0;
    char* ptr0;
    unsigned int result = v0 / param0;
    unsigned int v1 = v0 % param0;
    if(result) {
        result = (unsigned int)sub_804822C((int)param0, (int)v1);
    }
    v1 = (unsigned int)((unsigned char)v1 + 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v1 > 57) {
        v1 = (unsigned int)((unsigned char)v1 + 39) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    }
    *ptr0 = (unsigned char)v1;
    return result;
}

void sub_804824A(char* param0) {
    char v0;
    char* ptr0;
    if(ptr0) {
        char* ptr1 = param0;
        char* ptr2 = ptr0;
        char* ptr3 = NULL;
        char v1 = 1;
        char v2 = 0;
        char v3 = 1;
        char v4 = 0;
        char v5 = 0;
        while(1) {
            v0 = *ptr0;
            ++ptr0;
            char v6 = v0 ? 0: 1;
            char v7 = v0 < 0;
            char v8 = __parity__(v0);
            char v9 = 0;
            char v10 = 0;
            if(v6) {
                break;
            }
            else {
                char* ptr4 = ptr3;
                ++ptr3;
                char v11 = ptr3 ? 0: 1;
                char v12 = (int)ptr3 < 0;
                char v13 = __parity__((unsigned char)ptr3);
                char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                char v15 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x1)) < 0;
            }
        }
        ptr0 = ptr2;
        ptr2 = ptr3;
        char* ptr5 = ptr3;
        param0 = ptr0;
        int v16 = 1;
        int v17 = 4;
        v0 = 4;
        int v18 = 0;
        int* ptr6 = &ptr2;
        interrupt(128);
    }
}
