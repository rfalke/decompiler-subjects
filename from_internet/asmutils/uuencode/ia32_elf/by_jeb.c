
int start(int param0, unsigned short* param1, unsigned short* param2) {
    int v0;
    int v1;
    int v2;
    unsigned short* ptr0;
    unsigned int v3;
    int v4;
    unsigned int v5;
    int v6;
    char v7;
    int v8 = &gvar_804D9C4;
    gvar_804D9C4 = 0x69676562;
    gvar_804D9C8 = 110;
    unsigned int v9 = &gvar_804D9C4;
    int* ptr1 = (int*)&gvar_804D9C9;
    char v10 = 0;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    char v15 = 0;
    unsigned int v16 = v3;
    int v17 = param0;
    unsigned int* ptr2 = &param1;
    char v18 = v16 == 2;
    char v19 = (int)v16 < 2;
    char v20 = __parity__((unsigned char)v16 - 2);
    char v21 = v16 < 2;
    char v22 = (((v16 - 2) ^ v16) & (v16 ^ 0x2)) < 0;
    char v23 = (((v16 - 2) ^ (v16 ^ 0x2)) >>> 4) & 0x1;
    if(v19 == v22) {
        unsigned int v24 = v16;
        unsigned int v25 = v16 - 1;
        char v26 = v25 ? 0: 1;
        char v27 = v25 >= 0x80000000;
        char v28 = __parity__((unsigned char)v25);
        char v29 = ((~v25 ^ ~v24) >>> 4) & 0x1;
        char v30 = (int)((v25 ^ v24) & v24) < 0;
        ptr0 = param1;
        ptr2 = &param2;
        char v31 = *ptr0 == 0x6d2d;
        char v32 = *ptr0 < 0x6d2d;
        char v33 = __parity__((unsigned char)*ptr0 - 45);
        char v34 = *ptr0 < 0x6d2d;
        char v35 = (((*ptr0 - 0x6d2d) ^ *ptr0) & (*ptr0 ^ 0x6d2d)) < 0;
        char v36 = (((*ptr0 - 0x6d2d) ^ (*ptr0 ^ 0x6d2d)) >>> 4) & 0x1;
        if(v31) {
            gvar_804854C = &gvar_804847B;
            gvar_804D9C9 = 1935761965;
            gvar_804D9CD = 0x20343665;
            int v37 = &gvar_804D9C9;
            ptr1 = (int*)&gvar_804D9D1;
            char v38 = 0;
            char v39 = 0;
            char v40 = 1;
            char v41 = 1;
            char v42 = 0;
            char v43 = 0;
            *(char*)&gvar_804D9D1 = 0;
            ptr0 = param2;
            ptr2 = &v7;
            v9 = v25;
            --v25;
            char v44 = v25 ? 0: 1;
            char v45 = v25 >= 0x80000000;
            char v46 = __parity__((unsigned char)v25);
            char v47 = ((~v25 ^ ~v9) >>> 4) & 0x1;
            char v48 = (int)((v25 ^ v9) & v9) < 0;
        }
        else {
            gvar_804854C = &gvar_804843B;
            *(short*)&gvar_804D9C9 = 32;
            v9 = &gvar_804D9C9;
            ptr1 = (int*)0x804D9CA;
            char v49 = 0;
            char v50 = 0;
            char v51 = 1;
            char v52 = 0;
            char v53 = 0;
        }
        v18 = v25 == 2;
        v19 = (int)v25 < 2;
        v20 = __parity__((unsigned char)v25 - 2);
        v21 = v25 < 2;
        v22 = (((v25 - 2) ^ v25) & (v25 ^ 0x2)) < 0;
        v23 = (((v25 - 2) ^ (v25 ^ 0x2)) >>> 4) & 0x1;
        if((v21 || v18)) {
            if(!v21) {
                v2 = *ptr2;
                *ptr2 = v25;
                v1 = 134533508;
                --ptr2;
                *ptr2 = 106;
                v0 = *ptr2;
                ++ptr2;
                interrupt(128);
            }
            v18 = v25 == 1;
            v19 = (int)v25 < 1;
            v20 = __parity__((unsigned char)v25 - 1);
            v21 = v25 < 1;
            v22 = (((v25 - 1) ^ v25) & (v25 ^ 0x1)) < 0;
            v23 = (((v25 - 1) ^ (v25 ^ 0x1)) >>> 4) & 0x1;
            if(v18) {
                *ptr1 = 0x20343436;
                int* ptr3 = ptr1;
                char* ptr4 = (char*)(ptr1 + 1);
                char v54 = ptr4 ? 0: 1;
                char v55 = (int)ptr4 < 0;
                char v56 = __parity__((unsigned char)ptr4);
                char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x4) ^ (int)ptr4) >>> 4) & 0x1);
                v21 = (unsigned int)ptr3 >= 0xfffffffc;
                char v58 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x4)) < 0;
                *ptr4 = 0;
                char* ptr5 = ptr4;
                ptr1 = (int*)(ptr4 - 1);
                char v59 = ptr1 ? 0: 1;
                char v60 = (int)ptr1 < 0;
                char v61 = __parity__((unsigned char)ptr1);
                char v62 = (((int*)~(int)ptr1 ^ (char*)~(int)ptr5) >>> 4) & 0x1;
                char v63 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr5) & (int)ptr5) < 0;
                unsigned short* ptr6 = ptr0;
                --ptr2;
                *ptr2 = &loc_8048115;
                char v64 = /*BAD_CALL!*/ sub_8048374(v4, v6);
                gvar_804855C = 0;
                v2 = &gvar_804D9C4;
                --ptr2;
                *ptr2 = &loc_8048129;
                /*BAD_CALL!*/ sub_8048368();
                *(char*)((int)&gvar_804D9C4 + v5) = 10;
                v9 = v5;
                v6 = (int)(v5 + 1);
                v18 = v6 ? 0: 1;
                v19 = v6 < 0;
                v20 = __parity__((unsigned char)v6);
                v23 = (((v9 ^ 0x1) ^ v6) >>> 4) & 0x1;
                v22 = ((v6 ^ v9) & ~(v9 ^ 0x1)) < 0;
                v1 = &gvar_804D9C4;
                --ptr2;
                *ptr2 = 1;
                ptr0 = *ptr2;
                *ptr2 = 4;
                v0 = *ptr2;
                ++ptr2;
                interrupt(128);
            }
        }
    }
    v6 = 37;
    v1 = "Usage: uuencode [-m] [infile] header\nuuencode: unable to open ";
    --ptr2;
    *ptr2 = 2;
    ptr0 = *ptr2;
    *ptr2 = 4;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}

char sub_804831C(int param0, unsigned int param1) {
    char* ptr0;
    unsigned int v0;
    char result = 10;
    *ptr0 = 10;
    if(v0 != &gvar_804847B) {
        result = (param1 < 45 ? (unsigned char)param1: 45) + 32;
        *(ptr0 + 1) = (param1 < 45 ? (unsigned char)param1: 45) + 32;
    }
    gvar_8048558 = 0;
    return result;
}

char sub_8048340() {
    int v0;
    char result;
    int* ptr0;
    int v1 = (((unsigned int)(result & 0x7) | ((unsigned int)((result & 0x38) >>> 3) << 8) | ((unsigned int)(unsigned short)(((unsigned int)(((unsigned int)result | ((unsigned int)v0 << 8)) & 0x3fffff) & 0x1c0) >>> 6) << 16)) * 0x100) | 0x30303000;
    *ptr0 = (unsigned int)(unsigned char)(v1 >>> 24) | ((unsigned int)(unsigned char)(v1 >>> 16) << 8) | ((unsigned int)(unsigned char)(v1 >>> 8) << 16) | ((unsigned int)(unsigned char)v1 << 24);
    return result;
}

void sub_8048368() {
    unsigned int v0;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
    }
    while(*ptr0);
}

char sub_8048374(int param0, int param1) {
    int v0;
    char v1;
    char* ptr0;
    int v2;
    int v3;
    char v4;
    char result = v4;
    int v5 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr1 = &v0;
    sub_8048368();
    char* ptr2 = ptr0;
    char* ptr3 = (char*)(param1 + v2);
    do {
        v1 = *ptr2;
        ++ptr2;
        *ptr3 = v1;
        ++ptr3;
    }
    while(v1);
    return result;
}

char sub_8048388() {
    char v0;
    char* ptr0;
    char* ptr1;
    do {
        v0 = *ptr0;
        ++ptr0;
        *ptr1 = v0;
        ++ptr1;
    }
    while(v0);
    return 0;
}
