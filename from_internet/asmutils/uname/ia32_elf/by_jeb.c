
char start(unsigned char* param0, int param1) {
    char v0;
    int v1;
    unsigned char* ptr0;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    unsigned char v8;
    unsigned char* ptr1;
    int* ptr2;
    char v9;
    int* ptr3 = ptr2;
    unsigned char* ptr4 = param0;
    unsigned int* ptr5 = &param1;
    int* ptr6 = ptr3;
    int* ptr7 = (int*)((char*)ptr3 - 1);
    char v10 = ptr7 ? 0: 1;
    char v11 = (int)ptr7 < 0;
    char v12 = __parity__((unsigned char)ptr7);
    char v13 = (((int*)~(int)ptr7 ^ (int*)~(int)ptr6) >>> 4) & 0x1;
    char v14 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)ptr6) < 0;
    if(v10) {
        ptr1 = (unsigned int)1 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        do {
            v8 = *ptr4;
            ++ptr4;
            v9 = v8 ? 0: 1;
            char v15 = v8 >= 128;
            char v16 = __parity__(v8);
            char v17 = 0;
            char v18 = 0;
        }
        while(!v9);
        v7 = *(int*)(ptr4 - 5) == 0x68637261;
        v6 = *(int*)(ptr4 - 5) < 0x68637261;
        v5 = __parity__((unsigned char)*(int*)(ptr4 - 5) - 97);
        v4 = *(unsigned int*)(ptr4 - 5) < 0x68637261;
        v3 = (((*(int*)(ptr4 - 5) - 0x68637261) ^ *(int*)(ptr4 - 5)) & (*(int*)(ptr4 - 5) ^ 0x68637261)) < 0;
        v2 = (((*(int*)(ptr4 - 5) - 0x68637261) ^ (*(int*)(ptr4 - 5) ^ 0x68637261)) >>> 4) & 0x1;
        if(v7) {
            ptr1 = (unsigned int)16 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        }
    }
    else {
    loc_804806C:
        do {
            unsigned char* ptr8 = *ptr5;
            ++ptr5;
            v8 = *ptr8;
            ptr4 = ptr8 + 1;
            v7 = v8 == 45;
            v6 = (char)v8 < 45;
            v5 = __parity__(v8 - 45);
            v4 = v8 < 45;
            v3 = (((v8 - 45) ^ v8) & (v8 ^ 0x2d)) < 0;
            v2 = (((v8 - 45) ^ (v8 ^ 0x2d)) >>> 4) & 0x1;
            if(v7) {
                while(1) {
                    v8 = *ptr4;
                    ++ptr4;
                    char v19 = v8 ? 0: 1;
                    char v20 = v8 >= 128;
                    char v21 = __parity__(v8);
                    char v22 = 0;
                    char v23 = 0;
                    if(v19) {
                        break;
                    }
                    else {
                        --ptr5;
                        *ptr5 = 5;
                        int v24 = *ptr5;
                        ++ptr5;
                        ptr0 = (unsigned char*)&gvar_804804C;
                        int v25 = &gvar_804804C;
                        while(v24 != 0) {
                            v19 = *ptr0 == v8;
                            char v26 = *ptr0 > (char)v8;
                            char v27 = __parity__(v8 - *ptr0);
                            char v28 = *ptr0 > v8;
                            char v29 = (((v8 - *ptr0) ^ v8) & (*ptr0 ^ v8)) < 0;
                            char v30 = (((v8 - *ptr0) ^ (*ptr0 ^ v8)) >>> 4) & 0x1;
                            ++ptr0;
                            --v24;
                            if(!~v19) {
                                break;
                            }
                        }
                        if(v19) {
                            int* ptr9 = (int*)(ptr0 - 1);
                            ptr6 = (int*)(ptr0 - 1);
                            ptr0 = (unsigned char*)(ptr9 - 0x2012013);
                            char v31 = ptr0 ? 0: 1;
                            char v32 = (int)ptr0 < 0;
                            char v33 = __parity__((unsigned char)ptr0);
                            v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ &gvar_804804C) ^ (int)ptr0) >>> 4) & 0x1);
                            char v34 = (unsigned int)ptr6 < &gvar_804804C;
                            char v35 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ &gvar_804804C)) < 0;
                            unsigned char* ptr10 = ptr0;
                            char v36 = (int*)((int)(int*)((int)ptr1 >>> (int)(int*)((int)(unsigned int)ptr10 % 32)) & 0x1);
                            ptr1 = (unsigned char*)((int)(int*)((int*)~(int)(int*)(1 << (int)(int*)((int)(unsigned int)ptr10 % 32)) & (int)ptr1) | (int)(int*)(1 << (int)(int*)((int)(unsigned int)ptr10 % 32)));
                        }
                        else {
                            v7 = v8 == 97;
                            v6 = (char)v8 < 97;
                            v5 = __parity__(v8 - 97);
                            v4 = v8 < 97;
                            v3 = (((v8 - 97) ^ v8) & (v8 ^ 0x61)) < 0;
                            v2 = (((v8 - 97) ^ (v8 ^ 0x61)) >>> 4) & 0x1;
                            if(!v7) {
                                break loc_804806C;
                            }
                            else {
                                ptr1 = (unsigned int)63 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
                            }
                        }
                    }
                }
                v7 = (unsigned char)ptr1 ? 0: 1;
                v6 = (int*)((int)(int*)((int)ptr1 >>> 7) & 0x1);
                v5 = __parity__((unsigned char)ptr1);
                v3 = 0;
                v4 = 0;
                if(v7) {
                    break;
                }
                else {
                    ptr6 = ptr7;
                    ptr7 = (int*)((char*)ptr7 - 1);
                    v7 = ptr7 ? 0: 1;
                    v6 = (int)ptr7 < 0;
                    v5 = __parity__((unsigned char)ptr7);
                    v2 = (((int*)~(int)ptr7 ^ (int*)~(int)ptr6) >>> 4) & 0x1;
                    v3 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)ptr6) < 0;
                    if(!v7) {
                        goto loc_804806C;
                    }
                    else {
                        goto loc_80480AA;
                    }
                }
            }
        }
        while(v7);
        --ptr5;
        *ptr5 = 1;
        ptr1 = *ptr5;
        v1 = &gvar_8048052;
        *ptr5 = 4;
        v0 = *ptr5;
        ++ptr5;
        interrupt(128);
    }
loc_80480AA:
    --ptr5;
    *ptr5 = 5;
    v1 = 5;
    ptr0 = ptr1;
    ptr7 = (int*)0x804810F;
    *ptr5 = 122;
    v0 = *ptr5;
    ++ptr5;
    interrupt(128);
}
