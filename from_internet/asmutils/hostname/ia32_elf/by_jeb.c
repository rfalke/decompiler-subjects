
char start(char* param0, char* param1) {
    int* ptr0;
    char* ptr1;
    int* ptr2;
    char* ptr3;
    char* ptr4;
    char v0;
    int v1;
    char v2;
    char v3;
    char v4;
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    int v11 = v1;
    char* ptr5 = param0;
    do {
        v0 = *ptr5;
        ++ptr5;
        v4 = v0 ? 0: 1;
        char v12 = v0 < 0;
        char v13 = __parity__(v0);
        char v14 = 0;
        char v15 = 0;
    }
    while(!v4);
    char v16 = *(int*)(ptr5 - 9) == 1953722216;
    char v17 = *(int*)(ptr5 - 9) < 1953722216;
    char v18 = __parity__((unsigned char)*(int*)(ptr5 - 9) - 104);
    char v19 = *(unsigned int*)(ptr5 - 9) < 1953722216;
    char v20 = (((*(int*)(ptr5 - 9) - 1953722216) ^ *(int*)(ptr5 - 9)) & (*(int*)(ptr5 - 9) ^ 0x74736f68)) < 0;
    char v21 = (((*(int*)(ptr5 - 9) - 1953722216) ^ (*(int*)(ptr5 - 9) ^ 0x74736f68)) >>> 4) & 0x1;
    if(!v16) {
        int v22 = 0;
        v5 = 1;
        char v23 = 0;
        char v24 = 0;
        char v25 = 0;
        char v26 = 0;
        char v27 = 0;
    }
    int v28 = v11;
    int v29 = v11 - 1;
    char v30 = v29 ? 0: 1;
    char v31 = v29 < 0;
    char v32 = __parity__((unsigned char)v29);
    char v33 = ((~v29 ^ ~v28) >>> 4) & 0x1;
    char v34 = ((v29 ^ v28) & v28) < 0;
    if(!v30) {
        ptr4 = param1;
        ptr3 = param1;
    }
    else {
        ptr2 = (int*)0x80480B9;
        ptr4 = (char*)0x80480B9;
        param0 = (char*)0x7A;
        ptr1 = (char*)0x7A;
        ptr0 = &param1;
        interrupt(128);
    }
    do {
        v0 = *ptr3;
        ++ptr3;
        v2 = v0 ? 0: 1;
        char v35 = v0 < 0;
        char v36 = __parity__(v0);
        char v37 = 0;
        char v38 = 0;
    }
    while(!v2);
    char* ptr6 = ptr3;
    int* ptr7 = (int*)((int)ptr3 - (int)ptr4);
    char v39 = ptr7 ? 0: 1;
    char v40 = (int)ptr7 < 0;
    char v41 = __parity__((unsigned char)ptr7);
    char v42 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr6) ^ (int)ptr7) >>> 4) & 0x1);
    v19 = ptr4 > ptr6;
    char v43 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr6) & (int)(int*)((int)ptr7 ^ (int)ptr6)) < 0;
    int* ptr8 = ptr7;
    ptr2 = (int*)((char*)ptr7 - 1);
    char v44 = ptr2 ? 0: 1;
    char v45 = (int)ptr2 < 0;
    char v46 = __parity__((unsigned char)ptr2);
    char v47 = (((int*)~(int)ptr2 ^ (int*)~(int)ptr8) >>> 4) & 0x1;
    char v48 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr8) & (int)ptr8) < 0;
    int* ptr9 = ptr2;
    v28 = v5;
    --v5;
    v30 = v5 ? 0: 1;
    v31 = v5 < 0;
    v32 = __parity__((unsigned char)v5);
    v33 = ((~v5 ^ ~v28) >>> 4) & 0x1;
    v34 = ((v5 ^ v28) & v28) < 0;
    if(!v30) {
        param1 = (char*)0x4A;
        ptr1 = (char*)0x4A;
        ptr0 = &v3;
        interrupt(128);
    }
    param1 = (char*)0x79;
    ptr1 = (char*)0x79;
    ptr0 = &v3;
    interrupt(128);
}
