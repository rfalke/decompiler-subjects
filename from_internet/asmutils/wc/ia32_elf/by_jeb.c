
int start(int param0, int param1) {
    int v0;
    char v1;
    char v2;
    int v3;
    char v4;
    unsigned short* ptr0;
    unsigned int* ptr1;
    int v5;
    int v6 = v5;
    int v7 = v5;
    unsigned short* ptr2 = (unsigned short*)(v6 - 1);
    char v8 = ptr2 ? 0: 1;
    char v9 = (int)ptr2 < 0;
    char v10 = __parity__((unsigned char)ptr2);
    char v11 = (((unsigned short*)~(int)ptr2 ^ ~v7) >>> 4) & 0x1;
    char v12 = (int)(int*)((int)(int*)((int)ptr2 ^ v7) & v7) < 0;
    if(v8) {
        int v13 = param0;
        ptr1 = &param1;
    }
    else {
        unsigned short v14 = (unsigned short)param0;
        short v15 = (unsigned short)(param0 >>> 16);
        ptr1 = &param1;
    loc_8048054:
        do {
            ptr0 = *ptr1;
            ++ptr1;
            v4 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = 0;
            char v19 = 0;
            if(!v4) {
                unsigned short* ptr3 = (unsigned short*)&gvar_80481B4;
                unsigned short* ptr4 = (unsigned short*)&gvar_80481BD;
                char v20 = 1;
                char v21 = 0;
                char v22 = 1;
                char v23 = 0;
                char v24 = 0;
                v3 = 3;
                v2 = 4;
                do {
                    v14 = *ptr3;
                    ++ptr3;
                    char v25 = *ptr0 == v14;
                    char v26 = *ptr0 < (short)v14;
                    char v27 = __parity__((unsigned char)*ptr0 - (unsigned char)v14);
                    char v28 = *ptr0 < v14;
                    char v29 = (((*ptr0 - v14) ^ *ptr0) & (*ptr0 ^ v14)) < 0;
                    char v30 = (((*ptr0 - v14) ^ (*ptr0 ^ v14)) >>> 4) & 0x1;
                    if(v25) {
                        goto loc_8048074;
                    }
                    else {
                        char v31 = v2;
                        v2 >>>= 1;
                        char v32 = v31 & 0x1;
                        char v33 = v31 < 0;
                        char v34 = v2 ? 0: 1;
                        char v35 = v2 < 0;
                        char v36 = __parity__(v2);
                        v14 = 0;
                        v15 = 0;
                        char v37 = 1;
                        char v38 = 0;
                        char v39 = 1;
                        char v40 = 0;
                        char v41 = 0;
                        *(int*)ptr4 = 0;
                        ptr4 += 2;
                        --v3;
                    }
                }
                while(v3);
                ptr2 = NULL;
                v8 = *(char*)ptr0 == 45;
                v9 = *(char*)ptr0 < 45;
                v10 = __parity__(*(char*)ptr0 - 45);
                v1 = *(unsigned char*)ptr0 < 45;
                v12 = (((*(char*)ptr0 - 45) ^ *(char*)ptr0) & (*(char*)ptr0 ^ 0x2d)) < 0;
                v11 = (((*(char*)ptr0 - 45) ^ (*(char*)ptr0 ^ 0x2d)) >>> 4) & 0x1;
                if(!v8) {
                    ptr4 = ptr0;
                    gvar_80481CA = 1;
                    v3 = 0;
                    v8 = 1;
                    v9 = 0;
                    v10 = 1;
                    v12 = 0;
                    v1 = 0;
                    --ptr1;
                    *ptr1 = 5;
                    v0 = *ptr1;
                    ++ptr1;
                    interrupt(128);
                loc_8048074:
                    gvar_80481BA |= v2;
                    char v42 = gvar_80481BA ? 0: 1;
                    char v43 = gvar_80481BA >= 128;
                    char v44 = __parity__(gvar_80481BA);
                    char v45 = 0;
                    char v46 = 0;
                    goto loc_8048054;
                }
                else {
                    goto loc_80480A4;
                }
            }
        }
        while(!v4);
        char v47 = gvar_80481CA ? 0: 1;
        char v48 = gvar_80481CA >= 128;
        char v49 = __parity__(gvar_80481CA);
        char v50 = gvar_80481CA < 0;
        char v51 = 0;
        v11 = 0;
        if(v47) {
            gvar_80481CA = 1;
            ptr2 = NULL;
            v8 = 1;
            v9 = 0;
            v10 = 1;
            v12 = 0;
            v1 = 0;
        }
        else {
            ptr0 = NULL;
            v8 = 1;
            v9 = 0;
            v10 = 1;
            v12 = 0;
            v1 = 0;
            --ptr1;
            *ptr1 = 1;
            v0 = *ptr1;
            ++ptr1;
            interrupt(128);
        }
    }
loc_80480A4:
    gvar_80481C9 = 1;
    unsigned short* ptr5 = ptr2;
    v2 = 0;
    int v52 = 16;
    v3 = 134513115;
    ptr0 = ptr5;
    --ptr1;
    *ptr1 = 3;
    v0 = *ptr1;
    ++ptr1;
    interrupt(128);
}

int sub_8048172(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v2;
    int v5 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr1 = &v0;
    int v8 = param0;
    int v9 = sub_8048184();
    int v10 = 1;
    int v11 = 4;
    int v12 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_8048184() {
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

int sub_8048194(int param0, int param1) {
    short v0;
    char v1;
    char* ptr0;
    char v2;
    int v3;
    char* ptr1;
    unsigned int v4;
    int* ptr2 = &v1;
    unsigned int v5 = v4;
    int v6 = param0;
    int v7 = param1;
    int v8 = v3;
    int* ptr3 = &v1;
    int* ptr4 = &ptr0;
    int counter = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    int v14 = 10;
    do {
        int v15 = 0;
        unsigned int v16 = v4 % 10;
        v4 /= 10;
        unsigned char v17 = (unsigned char)v16;
        param1 = (unsigned int)((unsigned char)v16 + 48) | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
        char v18 = (unsigned char)v16 + 48 ? 0: 1;
        char v19 = (param1 >>> 7) & 0x1;
        char v20 = __parity__((unsigned char)param1);
        char v21 = (((v17 ^ 0x30) ^ (unsigned char)param1) >>> 4) & 0x1;
        char v22 = v17 >= 208;
        char v23 = (((unsigned char)param1 ^ v17) & ~(v17 ^ 0x30)) < 0;
        --ptr4;
        *ptr4 = param1;
        ++counter;
        v2 = v4 ? 0: 1;
        char v24 = v4 >= 0x80000000;
        char v25 = __parity__((unsigned char)v4);
        char v26 = 0;
        char v27 = 0;
    }
    while(!v2);
    do {
        v0 = (unsigned short)*ptr4;
        short v28 = (unsigned short)(*ptr4 >>> 16);
        ++ptr4;
        *ptr1 = (unsigned char)v0;
        ++ptr1;
        --counter;
    }
    while(counter);
    v0 = 9;
    *(short*)ptr1 = 9;
    int* ptr5 = (int*)(ptr1 + 2);
    int v29 = *ptr4;
    ++ptr4;
    int v30 = *ptr4;
    ++ptr4;
    int v31 = *ptr4;
    ptr4 += 2;
    int v32 = *ptr4;
    ++ptr4;
    int v33 = *ptr4;
    ++ptr4;
    int v34 = *ptr4;
    ++ptr4;
    int v35 = *ptr4;
    ++ptr4;
    int v36 = *ptr4;
    ++ptr4;
    jump v36;
}
