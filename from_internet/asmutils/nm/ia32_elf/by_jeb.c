
char start(char* param0, char* param1) {
    char* ptr0;
    char* ptr1;
    int* ptr2;
    char* ptr3;
    char v0;
    char v1;
    char* ptr4 = ptr3;
    char* ptr5 = param0;
    unsigned int* ptr6 = &param1;
    do {
        char v2 = *ptr5;
        ++ptr5;
        v0 = v2 ? 0: 1;
        char v3 = v2 < 0;
        char v4 = __parity__(v2);
        char v5 = 0;
        char v6 = 0;
    }
    while(!v0);
    gvar_80483BF = &loc_8048165;
    char v7 = *(short*)(ptr5 - 3) == 0x6d6e;
    char v8 = *(short*)(ptr5 - 3) < 0x6d6e;
    char v9 = __parity__((unsigned char)*(short*)(ptr5 - 3) - 110);
    char v10 = *(unsigned short*)(ptr5 - 3) < 0x6d6e;
    char v11 = (((*(short*)(ptr5 - 3) - 0x6d6e) ^ *(short*)(ptr5 - 3)) & (*(short*)(ptr5 - 3) ^ 0x6d6e)) < 0;
    char v12 = (((*(short*)(ptr5 - 3) - 0x6d6e) ^ (*(short*)(ptr5 - 3) ^ 0x6d6e)) >>> 4) & 0x1;
    if(!v7) {
        gvar_80483BF = &gvar_8048274;
        param0 = ptr4;
        int v13 = 50;
        ptr2 = (int*)&gvar_8048065;
        ptr1 = (char*)0x1;
        ptr3 = (char*)0x4;
        ptr0 = (char*)0x4;
        ptr6 = &param0;
        interrupt(128);
    }
    char* ptr7 = ptr4;
    ptr2 = (int*)(ptr4 - 1);
    char v14 = ptr2 ? 0: 1;
    char v15 = (int)ptr2 < 0;
    char v16 = __parity__((unsigned char)ptr2);
    v12 = (((int*)~(int)ptr2 ^ (char*)~(int)ptr7) >>> 4) & 0x1;
    char v17 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr7) & (int)ptr7) < 0;
    gvar_80483AF = ptr2;
    if(v14) {
        ptr1 = "a.out";
    }
    else {
        char* ptr8 = param1;
        ptr6 = &v1;
        ptr1 = ptr8;
        v7 = ptr1 ? 0: 1;
        v8 = (int)ptr1 < 0;
        v9 = __parity__((unsigned char)ptr1);
        v11 = 0;
        v10 = 0;
        if(v7) {
            ptr1 = gvar_80483C3;
            param1 = (char*)0x1;
            ptr0 = (char*)0x1;
            ptr6 = &v1;
            interrupt(128);
        }
    }
    gvar_80483B3 = ptr1;
    ptr2 = NULL;
    v7 = 1;
    v8 = 0;
    v9 = 1;
    v11 = 0;
    v10 = 0;
    --ptr6;
    *ptr6 = 5;
    ptr0 = *ptr6;
    ++ptr6;
    interrupt(128);
}

int sub_8048211(int param0) {
    unsigned int v0;
    unsigned char v1;
    char v2 = 1;
    unsigned int v3 = v0;
    unsigned char* ptr0 = (unsigned char*)(v0 + 7);
    char v4 = ptr0 ? 0: 1;
    char v5 = (int)ptr0 < 0;
    char v6 = __parity__((unsigned char)ptr0);
    char v7 = (int*)((int)(int*)((int)(int*)((v3 ^ 0x7) ^ (int)ptr0) >>> 4) & 0x1);
    char v8 = v3 >= 0xfffffff9;
    char v9 = (int)(int*)((int)(int*)((int)ptr0 ^ v3) & ~(v3 ^ 0x7)) < 0;
    int v10 = 8;
loc_804821A:
    int v11 = (unsigned int)(((unsigned char)param0 & 0xf) + 48) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
    char v12 = ((unsigned char)param0 & 0xf) == 9;
    char v13 = (char)v1 < 57;
    char v14 = __parity__(v1 - 57);
    char v15 = v1 < 57;
    char v16 = (((v1 - 57) ^ v1) & (v1 ^ 0x39)) < 0;
    char v17 = (((v1 - 57) ^ (v1 ^ 0x39)) >>> 4) & 0x1;
    if(!v12 && v13 == v16) {
        unsigned char v18 = v1;
        v11 = (unsigned int)(v1 + 39) | ((unsigned int)((v11 >>> 8) & 0xffffff) << 8);
        v12 = v1 ? 0: 1;
        v13 = v1 >= 128;
        v14 = __parity__(v1);
        char v19 = (((v18 ^ 0x27) ^ v1) >>> 4) & 0x1;
    loc_8048224:
        v15 = v18 >= 217;
        v16 = (char)((v1 ^ v18) & ~(v18 ^ 0x27)) < 0;
    }
    else {
        goto loc_8048224;
    }
    *ptr0 = v1;
    int* ptr1 = (int*)(ptr0 - 1);
    int v20 = param0;
    int v21 = param0 >>> 4;
    char v22 = (v20 >>> 3) & 0x1;
    char v23 = v16;
    char v24 = v21 ? 0: 1;
    char v25 = v21 < 0;
    char v26 = __parity__((unsigned char)v21);
    int v27 = 8;
    int v28 = 7;
    char v29 = 0;
    char v30 = 0;
    char v31 = 0;
    char v32 = 0;
    char v33 = 0;
    goto loc_804821A;
}

void sub_804822D() {
}

char sub_804822F(int param0, char param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    char v4;
    int v5;
    int* ptr0 = &v0;
    int v6 = (unsigned int)v4 | ((unsigned int)v3 << 8);
    int v7 = param0;
    int v8 = (unsigned int)param1 | ((unsigned int)v5 << 8);
    int v9 = v2;
    int* ptr1 = &v0;
    unsigned char* ptr2 = gvar_80483B3;
    unsigned char* ptr3 = gvar_80483B3;
    v4 = 0;
    int v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    unsigned char* ptr4 = NULL;
    int v16 = -1;
    char v17 = 0;
    char v18 = 1;
    char v19 = 1;
    char v20 = 1;
    char v21 = 0;
    while(v16 != 0) {
        char v22 = *ptr3 == 0;
        char v23 = *ptr3 > 0;
        char v24 = __parity__(0 - *ptr3);
        char v25 = *ptr3 > 0;
        char v26 = ((0 - *ptr3) & *ptr3) < 0;
        v20 = (((0 - *ptr3) ^ *ptr3) >>> 4) & 0x1;
        ++ptr3;
        --v16;
        if(!~v22) {
            break;
        }
    }
    int v27 = ~v16;
    char v28 = param1 ? 0: 1;
    char v29 = param1 < 0;
    char v30 = __parity__(param1);
    char v31 = 0;
    char v32 = 0;
    if(!v28) {
        ptr4 = ptr3;
        char* ptr5 = (char*)(ptr3 - 1);
        v28 = ptr5 ? 0: 1;
        v29 = (int)ptr5 < 0;
        v30 = __parity__((unsigned char)ptr5);
        v20 = (((char*)~(int)ptr5 ^ (unsigned char*)~(int)ptr4) >>> 4) & 0x1;
        v31 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr4) & (int)ptr4) < 0;
        v4 = param1;
        *ptr5 = param1;
        ptr3 = (unsigned char*)(ptr5 + 1);
    }
    int v33 = v27;
    unsigned char* ptr6 = ptr2;
    int v34 = 1;
    char v35 = 4;
    char v36 = 4;
    int* ptr7 = &v1;
    interrupt(128);
}

int sub_8048260(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v3;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr1 = &v0;
    int v8 = 1;
    int v9 = &gvar_8048273;
    int v10 = 1;
    int v11 = 4;
    int v12 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}
