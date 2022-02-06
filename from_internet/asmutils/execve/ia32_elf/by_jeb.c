
int start(unsigned int param0, unsigned int param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    int* ptr1;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    char v12;
    char v13;
    char v14;
    unsigned int v15;
    unsigned int v16;
    char v17;
    char v18;
    char v19;
    char v20;
    char v21;
    char v22;
    unsigned short v23;
    unsigned short v24;
    char* ptr2;
    unsigned int v25;
    unsigned short v26;
    unsigned int v27;
    unsigned int v28;
    unsigned short v29;
    int v30;
    unsigned int v31;
    unsigned short v32;
    unsigned short v33;
    gvar_80482B6 = v28;
    int v34 = 525442;
    int* ptr3 = (unsigned int)v13 | ((unsigned int)1 << 1) | ((unsigned int)v11 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v9 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v8 << 6) | ((unsigned int)v18 << 7) | ((unsigned int)v7 << 8) | ((unsigned int)v10 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v17 << 11) | ((unsigned int)v12 << 12) | ((unsigned int)v14 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v19 << 18) | ((unsigned int)v21 << 19) | ((unsigned int)v20 << 20) | ((unsigned int)v22 << 21) | ((unsigned int)0 << 22);
    gvar_80482D6 = (unsigned int)v13 | ((unsigned int)1 << 1) | ((unsigned int)v11 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v9 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v8 << 6) | ((unsigned int)v18 << 7) | ((unsigned int)v7 << 8) | ((unsigned int)v10 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v17 << 11) | ((unsigned int)v12 << 12) | ((unsigned int)v14 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v19 << 18) | ((unsigned int)v21 << 19) | ((unsigned int)v20 << 20) | ((unsigned int)v22 << 21) | ((unsigned int)0 << 22);
    gvar_80482BA = v15;
    gvar_80482BE = param0;
    gvar_80482C2 = param1;
    gvar_80482C6 = v31;
    gvar_80482CA = v16;
    gvar_80482CE = v25;
    gvar_80482D2 = &ptr1;
    gvar_80482DA = v23;
    gvar_80482DE = v29;
    gvar_80482E2 = v32;
    gvar_80482E6 = v33;
    gvar_80482EA = v24;
    gvar_80482EE = v26;
    int* ptr4 = ptr1;
    gvar_80482F2 = ptr1;
    char* ptr5 = ptr2;
    gvar_80482F6 = ptr2;
    unsigned int v35 = v27;
    gvar_80482FA = v27;
    param1 = *(unsigned int*)((int)(int*)((int)ptr4 * 4) + (int)&v30);
    gvar_80482FE = *(unsigned int*)((int)(int*)((int)ptr4 * 4) + (int)&v30);
    ptr1 = ptr4;
    do {
        char v36 = *ptr5;
        ++ptr5;
        v6 = v36 ? 0: 1;
        char v37 = v36 < 0;
        char v38 = __parity__(v36);
        char v39 = 0;
        char v40 = 0;
    }
    while(!v6);
    char v41 = *(int*)(ptr5 - 5) == 0x73676572;
    char v42 = *(int*)(ptr5 - 5) < 0x73676572;
    char v43 = __parity__((unsigned char)*(int*)(ptr5 - 5) - 114);
    char v44 = *(unsigned int*)(ptr5 - 5) < 0x73676572;
    char v45 = (((*(int*)(ptr5 - 5) - 0x73676572) ^ *(int*)(ptr5 - 5)) & (*(int*)(ptr5 - 5) ^ 0x73676572)) < 0;
    char v46 = (((*(int*)(ptr5 - 5) - 0x73676572) ^ (*(int*)(ptr5 - 5) ^ 0x73676572)) >>> 4) & 0x1;
    if(v41) {
        int v47 = 19;
        int v48 = sub_80480A7(19);
    }
    else {
        int* ptr6 = ptr1;
        ptr0 = &ptr2;
        int* ptr7 = ptr6;
        ptr4 = (int*)((char*)ptr6 - 1);
        v5 = ptr4 ? 0: 1;
        v4 = (int)ptr4 < 0;
        v3 = __parity__((unsigned char)ptr4);
        v46 = (((int*)~(int)ptr4 ^ (int*)~(int)ptr7) >>> 4) & 0x1;
        v2 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr7) & (int)ptr7) < 0;
        if(!v5) {
            char* ptr8 = ptr2;
            unsigned int v49 = v27;
            int* ptr9 = &v27;
            int* ptr10 = (int*)((int)(int*)((int)ptr4 * 4) + (int)&v30);
            ptr5 = (char*)0x11223344;
            v35 = 0x55667788;
            ptr4 = (int*)0x9900AABB;
            int v50 = &gvar_80482B6;
            gvar_80482BA = v49;
            gvar_80482BE = &v27;
            gvar_80482C2 = ptr10;
            gvar_80482C6 = 0x11223344;
            gvar_80482CA = 0x55667788;
            gvar_80482CE = 0x9900aabb;
            ptr7 = &v27;
            ptr2 = (char*)&gvar_80482B6;
            ptr1 = &v27;
            ptr3 = ptr10;
            unsigned int v51 = v49;
            int* ptr11 = &v27;
            int v52 = 0x9900aabb;
            int v53 = 0x11223344;
            int v54 = 0x55667788;
            param1 = 18;
            param0 = &gvar_80481A1;
            v1 = 1;
            int v55 = 4;
            v0 = 4;
            ptr0 = &v54;
            interrupt(128);
        }
    }
    v1 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v44 = 0;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

void sub_804804C() {
    unsigned int v0;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
    }
    while(*ptr0);
}

unsigned int sub_804805C(int param0, unsigned int param1) {
    int v0;
    short* ptr0;
    unsigned int v1;
    int v2;
    unsigned int result = v1;
    int v3 = param0;
    unsigned int v4 = param1;
    int v5 = v2;
    int* ptr1 = &v0;
    *ptr0 = 30768;
    unsigned char* ptr2 = (unsigned char*)(ptr0 + 1);
    unsigned char* ptr3 = (unsigned char*)(ptr0 + 1);
    unsigned int v6 = v1;
    unsigned int v7 = 16;
    int v8 = 0;
    do {
        ++v8;
        unsigned int v9 = v6 / 16;
        param1 = v6 % 16;
        v6 = v9;
        v9 = (unsigned int)((unsigned char)param1 - ((unsigned char)((unsigned char)param1 < 10) + 105)) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        if(!~((unsigned char)((unsigned char)param1 - ((unsigned char)((unsigned char)param1 < 10) + 105)) > 0x99 || (unsigned char)param1 < 105)) {
            v9 = (unsigned int)((unsigned char)v9 - 96) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        }
        *ptr2 = (unsigned char)v9;
        ++ptr2;
    }
    while(v6 != 0);
    *ptr2 = 0;
    int counter = v8 >>> 1;
    if(counter) {
        unsigned char* ptr4 = ptr3;
        unsigned char* ptr5 = ptr2 - 1;
        do {
            unsigned char v10 = *ptr5;
            *ptr5 = *ptr4;
            *ptr4 = v10;
            ++ptr4;
            --ptr5;
            --counter;
        }
        while(counter);
    }
    return result;
}

int sub_80480A7(int param0) {
    char v0;
    int v1 = &gvar_80482B6;
    unsigned char* ptr0 = "EAX\t:\t";
    int v2 = param0;
    int v3 = "EAX\t:\t";
    do {
        ++ptr0;
        v0 = *ptr0 ? 0: 1;
        char v4 = *ptr0 < 0;
        char v5 = __parity__(*ptr0);
        char v6 = *ptr0 < 0;
        char v7 = 0;
        char v8 = 0;
    }
    while(!v0);
    unsigned char* ptr1 = ptr0;
    unsigned char* ptr2 = ptr0;
    int* ptr3 = (int*)(ptr1 - &aEAX___);
    char v9 = ptr3 ? 0: 1;
    char v10 = (int)ptr3 < 0;
    char v11 = __parity__((unsigned char)ptr3);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ &aEAX___) ^ (int)ptr3) >>> 4) & 0x1);
    char v13 = (unsigned int)ptr2 < &aEAX___;
    char v14 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ &aEAX___)) < 0;
    int v15 = 1;
    int v16 = 4;
    int v17 = 4;
    int* ptr4 = &v2;
    interrupt(128);
}
