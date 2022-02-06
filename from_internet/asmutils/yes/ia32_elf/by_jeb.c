
int start(int param0, int param1) {
    char v0;
    int v1;
    char v2;
    char v3;
    int v4 = v1;
    int v5 = (unsigned int)((param0 >>> 8) & 0xffffff);
    unsigned int* ptr0 = &param1;
    char* ptr1 = (char*)&gvar_8048087;
    int v6 = &gvar_8048087;
    int v7 = v4;
    int v8 = v4 - 1;
    char v9 = v8 ? 0: 1;
    char v10 = v8 < 0;
    char v11 = __parity__((unsigned char)v8);
    char v12 = ((~v8 ^ ~v7) >>> 4) & 0x1;
    char v13 = ((v8 ^ v7) & v7) < 0;
    if(v9) {
        gvar_8048087 = 121;
        ptr1 = (char*)&gvar_8048088;
        int v14 = v8;
        ++v8;
        char v15 = v8 ? 0: 1;
        char v16 = v8 < 0;
        char v17 = __parity__((unsigned char)v8);
        char v18 = (((v14 ^ 0x1) ^ v8) >>> 4) & 0x1;
        char v19 = ((v8 ^ v14) & ~(v14 ^ 0x1)) < 0;
    loc_804805C:
        int v20 = v8;
        --v8;
        char v21 = v8 ? 0: 1;
        char v22 = v8 < 0;
        char v23 = __parity__((unsigned char)v8);
        char v24 = ((~v8 ^ ~v20) >>> 4) & 0x1;
        char v25 = ((v8 ^ v20) & v20) < 0;
        if(!v21) {
            *ptr1 = 32;
            ++ptr1;
            goto loc_8048062;
        }
    }
    else {
    loc_8048062:
        char* ptr2 = *ptr0;
        ++ptr0;
        do {
            v0 = *ptr2;
            ++ptr2;
            char v26 = v0 ? 0: 1;
            char v27 = v0 < 0;
            char v28 = __parity__(v0);
            char v29 = 0;
            char v30 = 0;
            if(v26) {
                goto loc_804805C;
            }
            else {
                *ptr1 = v0;
                ++ptr1;
                char v31 = ptr1 == 134516869;
                v2 = (int)ptr1 < 134516869;
                char v32 = __parity__((unsigned char)ptr1 - 133);
                char v33 = (unsigned int)ptr1 < 134516869;
                v3 = (int)(int*)((int)(int*)((int)(int*)(ptr1 - 134516869) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x8049085)) < 0;
                char v34 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr1 - 134516869) ^ (int)(int*)((int)ptr1 ^ 0x8049085)) >>> 4) & 0x1);
            }
        }
        while(v2 != v3);
    }
    v0 = 10;
    *ptr1 = 10;
    int* ptr3 = (int*)(ptr1 + 1);
    int* ptr4 = (int*)(ptr1 + 1);
    int* ptr5 = (int*)((char*)ptr3 - &gvar_8048087);
    char v35 = ptr5 ? 0: 1;
    char v36 = (int)ptr5 < 0;
    char v37 = __parity__((unsigned char)ptr5);
    char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ &gvar_8048087) ^ (int)ptr5) >>> 4) & 0x1);
    char v39 = (unsigned int)ptr4 < &gvar_8048087;
    char v40 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr4) & (int)(int*)((int)ptr4 ^ &gvar_8048087)) < 0;
    int* ptr6 = ptr5;
    int v41 = &gvar_8048087;
    --ptr0;
    *ptr0 = 1;
    int v42 = 1;
    *ptr0 = 4;
    int v43 = *ptr0;
    ++ptr0;
    interrupt(128);
}
