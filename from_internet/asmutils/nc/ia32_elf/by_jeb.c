
int start(int param0, unsigned short* param1, int param2) {
    int* ptr0;
    unsigned short* ptr1;
    int v0;
    int* ptr2;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    unsigned short* ptr3;
    char v7;
    int v8;
    char v9;
    char v10;
    int v11;
    int v12;
    int v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    int v19 = 1;
    int v20 = 1;
    unsigned short* ptr4 = ptr3;
    int v21 = param0;
    unsigned short* ptr5 = param1;
    char v22 = ptr5 ? 0: 1;
    char v23 = (int)ptr5 < 0;
    char v24 = __parity__((unsigned char)ptr5);
    char v25 = 0;
    char v26 = 0;
    if(!v22) {
        int v27 = &gvar_804816C;
        gvar_804816C = 2;
        v6 = *ptr5 == 27693;
        v5 = *ptr5 < 27693;
        v4 = __parity__((unsigned char)*ptr5 - 45);
        v3 = *ptr5 < 27693;
        v2 = (((*ptr5 - 27693) ^ *ptr5) & (*ptr5 ^ 0x6c2d)) < 0;
        char v28 = (((*ptr5 - 27693) ^ (*ptr5 ^ 0x6c2d)) >>> 4) & 0x1;
        if(v6) {
            int v29 = sub_804813D();
            int v30 = param2;
            int v31 = sub_8048157();
            *((char*)&gvar_804816C + 2) = (unsigned char)(v11 >>> 8);
            *((char*)&gvar_804816C + 3) = v10;
            v1 = v31;
            param2 = 16;
            param1 = (unsigned short*)&gvar_804816C;
            ptr2 = &param0;
            v0 = 2;
            ptr3 = (unsigned short*)0x66;
            ptr1 = (unsigned short*)0x66;
            ptr0 = &param0;
            interrupt(128);
        }
        int v32 = sub_804813D();
        v20 = v32;
        char* ptr6 = (char*)&gvar_8048170;
        int v33 = 4;
        do {
            int v34 = sub_8048157();
            *ptr6 = v7;
            char* ptr7 = ptr6;
            ++ptr6;
            v6 = ptr6 ? 0: 1;
            v5 = (int)ptr6 < 0;
            v4 = __parity__((unsigned char)ptr6);
            v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x1) ^ (int)ptr6) >>> 4) & 0x1);
            v2 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x1)) < 0;
            v12 = v8 - 1;
        }
        while(v12);
        v1 = param2;
        int v35 = sub_8048157();
        *(ptr6 - 6) = (unsigned char)(v11 >>> 8);
        *(ptr6 - 5) = v9;
        param2 = 16;
        param1 = (unsigned short*)&gvar_804816C;
        ptr2 = &param0;
        v0 = 3;
        ptr3 = (unsigned short*)0x66;
        ptr1 = (unsigned short*)0x66;
        ptr0 = &param0;
        interrupt(128);
    }
    v1 = 134513020;
    int v36 = 0;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v2 = 0;
    v3 = 0;
    v11 = 0x400;
    ptr2 = (int*)0x804817C;
    v0 = 0;
    param1 = (unsigned short*)0x3;
    ptr1 = (unsigned short*)0x3;
    ptr0 = &param2;
    interrupt(128);
}

int sub_804813D() {
    int v0;
    int v1 = v0;
    int v2 = 6;
    int v3 = 1;
    int v4 = 2;
    int* ptr0 = &v4;
    int v5 = 1;
    int v6 = 102;
    int v7 = 102;
    int* ptr1 = &v4;
    interrupt(128);
}

int sub_8048157() {
    int result;
    char* ptr0;
    int v0 = 0;
    int v1 = 0;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        unsigned char v2 = (unsigned char)v0;
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if(v2 < 48) {
            return result;
        }
        v1 = v1 * 10 + v0;
    }
    return result;
}
