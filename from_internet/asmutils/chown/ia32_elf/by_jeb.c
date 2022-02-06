
int start(int param0, void* param1, void* param2) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    char v3;
    char v4;
    gvar_8048139 = 0xffffffff;
    unsigned int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    unsigned int v11 = v2;
    unsigned int v12 = v2;
    int v13 = (int)(v11 - 1);
    char v14 = v13 ? 0: 1;
    char v15 = v13 < 0;
    char v16 = __parity__((unsigned char)v13);
    char v17 = ((~v13 ^ ~v12) >>> 4) & 0x1;
    char v18 = ((v13 ^ v12) & v12) < 0;
    int v19 = param0;
    int* ptr0 = &param1;
    if(!v14) {
        void* ptr1 = param1;
        int v20 = /*BAD_CALL!*/ sub_8048129();
        int v21 = (unsigned int)((v20 >>> 8) & 0xffffff);
        unsigned char v22 = *(unsigned char*)ptr1;
        void* ptr2 = (void*)((int)ptr1 + 1);
        v14 = v22 == 47;
        v15 = (char)v22 < 47;
        v16 = __parity__(v22 - 47);
        v10 = v22 < 47;
        v18 = (((v22 - 47) ^ v22) & (v22 ^ 0x2f)) < 0;
        v17 = (((v22 - 47) ^ (v22 ^ 0x2f)) >>> 4) & 0x1;
        if(!v14 && v15 == v18) {
            v14 = v22 == 58;
            v15 = (char)v22 < 58;
            v16 = __parity__(v22 - 58);
            v10 = v22 < 58;
            v18 = (((v22 - 58) ^ v22) & (v22 ^ 0x3a)) < 0;
            v17 = (((v22 - 58) ^ (v22 ^ 0x3a)) >>> 4) & 0x1;
            if(v15 != v18) {
                ptr2 = (void*)((int)ptr2 - 1);
                unsigned int v23 = v23 - 1;
                v5 = 1;
                v14 = *(char*)(v23 + (int)ptr2) == 46;
                v15 = *(char*)(v23 + (int)ptr2) < 46;
                v16 = __parity__(*(char*)(v23 + (int)ptr2) - 46);
                v10 = *(unsigned char*)(v23 + (int)ptr2) < 46;
                v18 = (((*(char*)(v23 + (int)ptr2) - 46) ^ *(char*)(v23 + (int)ptr2)) & (*(char*)(v23 + (int)ptr2) ^ 0x2e)) < 0;
                v17 = (((*(char*)(v23 + (int)ptr2) - 46) ^ (*(char*)(v23 + (int)ptr2) ^ 0x2e)) >>> 4) & 0x1;
                if(!v14) {
                    unsigned int v24 = v23 + 1;
                    v5 = 0;
                    unsigned int v25 = 0;
                    char v26 = 1;
                    char v27 = 0;
                    char v28 = 1;
                    char v29 = 0;
                    char v30 = 0;
                    param1 = ptr2;
                    do {
                        v22 = *(unsigned char*)ptr2;
                        ptr2 = (void*)((int)ptr2 + 1);
                        ++v25;
                        char v31 = v25 == v24;
                        char v32 = (int)v25 < (int)v24;
                        char v33 = __parity__((unsigned char)v25 - (unsigned char)v24);
                        char v34 = v25 < v24;
                        char v35 = (int)(((v25 - v24) ^ v25) & (v25 ^ v24)) < 0;
                        char v36 = (((v25 - v24) ^ (v25 ^ v24)) >>> 4) & 0x1;
                        if(!v31 && v32 == v35) {
                            goto loc_80480A9;
                        }
                        else {
                            v3 = v22 == 46;
                            char v37 = (char)v22 < 46;
                            char v38 = __parity__(v22 - 46);
                            char v39 = v22 < 46;
                            char v40 = (((v22 - 46) ^ v22) & (v22 ^ 0x2e)) < 0;
                            char v41 = (((v22 - 46) ^ (v22 ^ 0x2e)) >>> 4) & 0x1;
                        }
                    }
                    while(!v3);
                    gvar_804853D = 1;
                loc_80480A9:
                    gvar_804813D = ptr2;
                    v12 = v25;
                    int v42 = (int)(v25 - 1);
                    char v43 = v42 ? 0: 1;
                    char v44 = v42 < 0;
                    char v45 = __parity__((unsigned char)v42);
                    char v46 = ((~v42 ^ ~v12) >>> 4) & 0x1;
                    char v47 = ((v42 ^ v12) & v12) < 0;
                    void* ptr3 = param1;
                    *(char*)(v42 + (int)ptr3) = 0;
                    gvar_8048139 = ptr3;
                    unsigned int v48 = gvar_804813D;
                    int v49 = sub_8048115();
                    gvar_804813D = v49;
                    unsigned int v50 = gvar_8048139;
                    int v51 = sub_8048115();
                    gvar_8048139 = v51;
                    char v52 = gvar_804853D == 1;
                    char v53 = (int)gvar_804853D < 1;
                    char v54 = __parity__((unsigned char)gvar_804853D - 1);
                    char v55 = gvar_804853D < 1;
                    char v56 = (((gvar_804853D - 1) ^ gvar_804853D) & (gvar_804853D ^ 0x1)) < 0;
                    v17 = (((gvar_804853D - 1) ^ (gvar_804853D ^ 0x1)) >>> 4) & 0x1;
                    if(!v52) {
                        sub_804804C();
                    }
                    void* ptr4 = param2;
                    ptr0 = &v4;
                    ptr2 = ptr4;
                    v14 = ptr2 ? 0: 1;
                    v15 = (int)ptr2 < 0;
                    v16 = __parity__((unsigned char)ptr2);
                    v18 = 0;
                    v10 = 0;
                    if(!v14) {
                        gvar_8048141 = ptr2;
                        v23 = gvar_804813D;
                        unsigned int v57 = gvar_8048139;
                        v1 = gvar_8048141;
                        v14 = 1;
                        v15 = 0;
                        v16 = 1;
                        v18 = 0;
                        v10 = 0;
                        v0 = 182;
                        interrupt(128);
                    }
                }
            }
        }
    }
    v1 = v5;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

void sub_804804C() {
    gvar_804813D = 0xffffffff;
}

int sub_8048115() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)v0) {
            return result;
        }
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        result = result * 10 + v0;
    }
    return result;
}

int sub_8048129() {
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
