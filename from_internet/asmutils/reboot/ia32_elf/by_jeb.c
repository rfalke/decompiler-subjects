
int start(char* param0, int param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    unsigned int* ptr0;
    unsigned short* ptr1;
    unsigned int* ptr2;
    char v8;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    unsigned int* ptr3 = ptr2;
    char* ptr4 = param0;
    unsigned int* ptr5 = &param1;
    do {
        ptr1 = (unsigned int)*ptr4 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        ++ptr4;
        v8 = (unsigned char)ptr1 ? 0: 1;
        char v15 = (int*)((int)(int*)((int)ptr1 >>> 7) & 0x1);
        char v16 = __parity__((unsigned char)ptr1);
        char v17 = 0;
        char v18 = 0;
    }
    while(!v8);
    int v19 = -18751827;
    int v20 = 0x28121969;
    int v21 = 0x1234567;
    while(1) {
        ptr0 = ptr3;
        ptr3 = (unsigned int*)((char*)ptr3 - 1);
        char v22 = ptr3 ? 0: 1;
        char v23 = (int)ptr3 < 0;
        char v24 = __parity__((unsigned char)ptr3);
        char v25 = ((~(int)ptr3 ^ (unsigned int*)~(int)ptr0) >>> 4) & 0x1;
        char v26 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr0) & (int)ptr0) < 0;
        if(v22) {
            break;
        }
        else {
            ptr1 = *ptr5;
            ++ptr5;
            v7 = *ptr1 == 28717;
            v6 = *ptr1 < 28717;
            v5 = __parity__((unsigned char)*ptr1 - 45);
            v4 = *ptr1 < 28717;
            v3 = (((*ptr1 - 28717) ^ *ptr1) & (*ptr1 ^ 0x702d)) < 0;
            v2 = (((*ptr1 - 28717) ^ (*ptr1 ^ 0x702d)) >>> 4) & 0x1;
            if(v7) {
                goto loc_8048091;
            }
            else {
                char v27 = *ptr1 == 0x662d;
                char v28 = *ptr1 < 0x662d;
                char v29 = __parity__((unsigned char)*ptr1 - 45);
                char v30 = *ptr1 < 0x662d;
                char v31 = (((*ptr1 - 0x662d) ^ *ptr1) & (*ptr1 ^ 0x662d)) < 0;
                char v32 = (((*ptr1 - 0x662d) ^ (*ptr1 ^ 0x662d)) >>> 4) & 0x1;
                if(!v27) {
                    break;
                }
                else {
                    int v33 = v9;
                    ++v9;
                    char v34 = v9 ? 0: 1;
                    char v35 = v9 < 0;
                    char v36 = __parity__((unsigned char)v9);
                    char v37 = (((v33 ^ 0x1) ^ v9) >>> 4) & 0x1;
                    char v38 = ((v9 ^ v33) & ~(v33 ^ 0x1)) < 0;
                }
            }
        }
    }
    v7 = *(int*)(ptr4 - 5) == 1953259880;
    v6 = *(int*)(ptr4 - 5) < 1953259880;
    v5 = __parity__((unsigned char)*(int*)(ptr4 - 5) - 104);
    v4 = *(unsigned int*)(ptr4 - 5) < 1953259880;
    v3 = (((*(int*)(ptr4 - 5) - 1953259880) ^ *(int*)(ptr4 - 5)) & (*(int*)(ptr4 - 5) ^ 0x746c6168)) < 0;
    v2 = (((*(int*)(ptr4 - 5) - 1953259880) ^ (*(int*)(ptr4 - 5) ^ 0x746c6168)) >>> 4) & 0x1;
    if(v7) {
        v1 = 0xcdef0123;
        goto loc_8048096;
    }
    else {
        v7 = *(short*)(ptr4 - 3) == 0x6666;
        v6 = *(short*)(ptr4 - 3) < 0x6666;
        v5 = __parity__((unsigned char)*(short*)(ptr4 - 3) - 102);
        v4 = *(unsigned short*)(ptr4 - 3) < 0x6666;
        v3 = (((*(short*)(ptr4 - 3) - 0x6666) ^ *(short*)(ptr4 - 3)) & (*(short*)(ptr4 - 3) ^ 0x6666)) < 0;
        v2 = (((*(short*)(ptr4 - 3) - 0x6666) ^ (*(short*)(ptr4 - 3) ^ 0x6666)) >>> 4) & 0x1;
    }
    if(v7) {
    loc_8048091:
        v1 = 0x4321fedc;
    loc_8048096:
        --ptr5;
        *ptr5 = v1;
        v21 = 0x89abcdef;
        --ptr5;
        *ptr5 = 88;
        v0 = *ptr5;
        ++ptr5;
        interrupt(128);
    }
    v7 = v9 ? 0: 1;
    v6 = v9 < 0;
    v5 = __parity__((unsigned char)v9);
    v3 = 0;
    v4 = 0;
    if(v7) {
        ptr0 = ptr5;
        --ptr5;
        *ptr5 = ptr1;
        --ptr5;
        *ptr5 = 0x28121969;
        --ptr5;
        *ptr5 = 0x1234567;
        --ptr5;
        *ptr5 = -18751827;
        --ptr5;
        *ptr5 = ptr0;
        --ptr5;
        *ptr5 = ptr3;
        --ptr5;
        *ptr5 = ptr4;
        --ptr5;
        *ptr5 = v9;
        --ptr5;
        *ptr5 = 2;
        v20 = 2;
        *ptr5 = 1;
        v19 = 1;
        *ptr5 = 37;
        v0 = *ptr5;
        ++ptr5;
        interrupt(128);
    }
    --ptr5;
    *ptr5 = 88;
    v0 = *ptr5;
    ++ptr5;
    interrupt(128);
}
