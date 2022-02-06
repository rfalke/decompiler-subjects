
int start(void* param0, void* param1) {
    unsigned int* ptr0;
    void* ptr1;
    int v0;
    int v1;
    int v2;
    int v3;
    gvar_805D702 = 0x2f2e;
    int v4 = v1;
    void* ptr2 = param0;
    int v5 = sub_80481C8();
    void* ptr3 = param1;
    unsigned int v6 = sub_8048212(v2);
    void* ptr4 = ptr3;
    void* ptr5 = ptr3;
    char v7 = ptr5 ? 0: 1;
    char v8 = (int)ptr5 < 0;
    char v9 = __parity__((unsigned char)ptr5);
    char v10 = 0;
    char v11 = 0;
    if(!v7) {
        v0 = 0;
        char v12 = 1;
        char v13 = 0;
        char v14 = 1;
        char v15 = 0;
        char v16 = 0;
        void* ptr6 = ptr5;
        ptr1 = (void*)0x5;
        ptr0 = &v2;
        interrupt(128);
    }
    gvar_805DB23 = 1;
    /*NO_RETURN*/ sub_8048DF5(v0, v3);
    gvar_805D668 = 0;
    gvar_805D66C = 0;
    gvar_805D670 = 0;
    gvar_805D674 = 0;
    gvar_805D678 = 0;
    ptr0 = (unsigned int*)(&param1 - 1);
    *ptr0 = 134512998;
    ptr1 = (void*)/*NO_RETURN*/ sub_8048DF5(v0, v3);
}

int sub_80481C8() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 45;
    int v8 = 45;
    int* ptr0 = &v0;
    interrupt(128);
}

unsigned int sub_8048212(int param0) {
    unsigned int result;
    int v0;
    int v1;
    unsigned int* ptr0 = &param0;
    if(v0) {
        do {
            v1 = *ptr0;
            ++ptr0;
        }
        while(v1);
        --ptr0;
        *ptr0 = 0;
    }
    do {
        result = *ptr0;
        ++ptr0;
        if(!result) {
            return result;
        }
        unsigned int v2 = gvar_805D706;
        *(unsigned int*)(v2 * 4 + (int)&gvar_805D5A0) = result;
        gvar_805D706 = v2 + 1;
    }
    while(gvar_805D706 != 50);
    return result;
}

void sub_8048266() {
    char v0 = gvar_805DB54 ? 0: 1;
    char v1 = gvar_805DB54 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_805DB54);
    char v3 = gvar_805DB54 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804826F: &sub_80482AA;
}

int sub_80482EA() {
    int* ptr0;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    void* ptr1;
    char v7;
    unsigned char* ptr2 = (unsigned char*)&gvar_804959A;
    gvar_804959A = 0;
    int* ptr3 = &ptr1;
    void* ptr4 = (void*)/*BAD_CALL!*/ sub_80482C6();
    if(!v86) {
        v5 = (unsigned char)ptr4 == 27;
        v4 = (unsigned char)ptr4 < 27;
        v3 = __parity__((unsigned char)ptr4 - 27);
        v2 = (unsigned char)ptr4 < 27;
        v1 = ((((unsigned char)ptr4 - 27) ^ (unsigned char)ptr4) & ((unsigned char)ptr4 ^ 0x1b)) < 0;
        v0 = ((((unsigned char)ptr4 - 27) ^ ((unsigned char)ptr4 ^ 0x1b)) >>> 4) & 0x1;
        if(!v5) {
            char v8 = (unsigned char)ptr4 == 8;
            char v9 = (unsigned char)ptr4 < 8;
            char v10 = __parity__((unsigned char)ptr4 - 8);
            char v11 = (unsigned char)ptr4 < 8;
            char v12 = ((((unsigned char)ptr4 - 8) ^ (unsigned char)ptr4) & ((unsigned char)ptr4 ^ 0x8)) < 0;
            char v13 = ((((unsigned char)ptr4 - 8) ^ ((unsigned char)ptr4 ^ 0x8)) >>> 4) & 0x1;
            if(!v8) {
                char v14 = (unsigned char)ptr4 == 127;
                char v15 = (unsigned char)ptr4 < 127;
                char v16 = __parity__((unsigned char)ptr4 - 127);
                char v17 = (unsigned char)ptr4 < 127;
                char v18 = ((((unsigned char)ptr4 - 127) ^ (unsigned char)ptr4) & ((unsigned char)ptr4 ^ 0x7f)) < 0;
                char v19 = ((((unsigned char)ptr4 - 127) ^ ((unsigned char)ptr4 ^ 0x7f)) >>> 4) & 0x1;
                if(!v14) {
                    v5 = (unsigned char)ptr4 == 4;
                    v4 = (unsigned char)ptr4 < 4;
                    v3 = __parity__((unsigned char)ptr4 - 4);
                    v2 = (unsigned char)ptr4 < 4;
                    v1 = ((((unsigned char)ptr4 - 4) ^ (unsigned char)ptr4) & ((unsigned char)ptr4 ^ 0x4)) < 0;
                    v0 = ((((unsigned char)ptr4 - 4) ^ ((unsigned char)ptr4 ^ 0x4)) >>> 4) & 0x1;
                    char v20 = (unsigned char)ptr4 == 12;
                    char v21 = (unsigned char)ptr4 < 12;
                    char v22 = __parity__((unsigned char)ptr4 - 12);
                    char v23 = (unsigned char)ptr4 < 12;
                    char v24 = ((((unsigned char)ptr4 - 12) ^ (unsigned char)ptr4) & ((unsigned char)ptr4 ^ 0xc)) < 0;
                    char v25 = ((((unsigned char)ptr4 - 12) ^ ((unsigned char)ptr4 ^ 0xc)) >>> 4) & 0x1;
                    if(!v20) {
                        int v26 = &gvar_805D6F3;
                        int v27 = 1;
                        /*NO_RETURN*/ sub_8048E06();
                    }
                }
            }
            v2 = 0;
            v1 = 0;
            v0 = 0;
        }
        ptr4 = (void*)0x3;
        ptr3 = &v6;
        interrupt(128);
    }
    do {
        --ptr2;
        char v28 = ptr8 == ptr2;
        char v29 = (int)ptr8 > (int)ptr2;
        char v30 = __parity__((unsigned char)ptr2 - (unsigned char)ptr8);
        char v31 = ptr8 > ptr2;
        char v32 = (int)(int*)((int)(int*)((int)(int*)((int)ptr2 - (int)ptr8) ^ (int)ptr2) & (int)(int*)((int)ptr8 ^ (int)ptr2)) < 0;
        char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 - (int)ptr8) ^ (int)(int*)((int)ptr8 ^ (int)ptr2)) >>> 4) & 0x1);
        if(!v28) {
            char v34 = *ptr2 == 47;
            char v35 = *ptr2 < 47;
            char v36 = __parity__(*ptr2 - 47);
            char v37 = *ptr2 < 47;
            char v38 = (((*ptr2 - 47) ^ *ptr2) & (*ptr2 ^ 0x2f)) < 0;
            char v39 = (((*ptr2 - 47) ^ (*ptr2 ^ 0x2f)) >>> 4) & 0x1;
            if(v34) {
                char v40 = ptr9 ? 0: 1;
                char v41 = (int)ptr9 < 0;
                char v42 = __parity__((unsigned char)ptr9);
                char v43 = 0;
                char v44 = 0;
                if(v40) {
                    ptr9 = ptr2;
                }
            }
            v7 = *ptr2 == 32;
            char v45 = *ptr2 < 32;
            char v46 = __parity__(*ptr2 - 32);
            char v47 = *ptr2 < 32;
            char v48 = (((*ptr2 - 32) ^ *ptr2) & (*ptr2 ^ 0x20)) < 0;
            char v49 = (((*ptr2 - 32) ^ (*ptr2 ^ 0x20)) >>> 4) & 0x1;
        }
        else {
            goto loc_804851E;
        }
        v91 = 134600332;
        ptr4 = (void*)0x6A;
        ptr3 = &ptr1;
        interrupt(128);
        return;
    }
    while(!v7);
    unsigned char* ptr5 = ptr2;
    ++ptr2;
    char v50 = ptr2 ? 0: 1;
    char v51 = (int)ptr2 < 0;
    char v52 = __parity__((unsigned char)ptr2);
    char v53 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x1) ^ (int)ptr2) >>> 4) & 0x1);
    char v54 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x1)) < 0;
    ptr11 = ptr2;
    char v55 = ptr9 ? 0: 1;
    char v56 = (int)ptr9 < 0;
    char v57 = __parity__((unsigned char)ptr9);
    char v58 = 0;
    v2 = 0;
    if(v55) {
    loc_804851E:
        char v59 = *ptr8 == 47;
        char v60 = *ptr8 < 47;
        char v61 = __parity__(*ptr8 - 47);
        char v62 = *ptr8 < 47;
        char v63 = (((*ptr8 - 47) ^ *ptr8) & (*ptr8 ^ 0x2f)) < 0;
        char v64 = (((*ptr8 - 47) ^ (*ptr8 ^ 0x2f)) >>> 4) & 0x1;
        if(v59) {
            char v65 = ptr9 ? 0: 1;
            char v66 = (int)ptr9 < 0;
            char v67 = __parity__((unsigned char)ptr9);
            char v68 = 0;
            v2 = 0;
            if(v65) {
                ptr9 = ptr8;
            }
            ptr11 = ptr8;
        }
        else {
            char v69 = *ptr8 == 46;
            char v70 = *ptr8 < 46;
            char v71 = __parity__(*ptr8 - 46);
            v2 = *ptr8 < 46;
            char v72 = (((*ptr8 - 46) ^ *ptr8) & (*ptr8 ^ 0x2e)) < 0;
            char v73 = (((*ptr8 - 46) ^ (*ptr8 ^ 0x2e)) >>> 4) & 0x1;
            if(!v69) {
                ptr11 = (unsigned char*)&gvar_805D702;
                int v74 = &gvar_805D702;
                ptr0 = (int*)&gvar_805D702;
                ptr10 = (int*)0x805D703;
                v5 = 0;
                v4 = 0;
                v3 = 1;
                v0 = 0;
                v1 = 0;
                gvar_805D90A = ptr2;
                v91 = 134600332;
                ptr4 = (void*)0x6A;
                ptr3 = &ptr1;
                interrupt(128);
                return;
            }
            char v75 = ptr9 ? 0: 1;
            char v76 = (int)ptr9 < 0;
            char v77 = __parity__((unsigned char)ptr9);
            char v78 = 0;
            v2 = 0;
        }
    }
    unsigned char* ptr6 = ptr9;
    int* ptr7 = (int*)(ptr9 + 1);
    char v79 = ptr7 ? 0: 1;
    char v80 = (int)ptr7 < 0;
    char v81 = __parity__((unsigned char)ptr7);
    char v82 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr7) >>> 4) & 0x1);
    char v83 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
    gvar_805D90A = ptr7;
    ptr0 = ptr7;
    ptr10 = (int*)((char*)ptr7 - 1);
    v5 = ptr10 ? 0: 1;
    v4 = (int)ptr10 < 0;
    v3 = __parity__((unsigned char)ptr10);
    v0 = (((int*)~(int)ptr10 ^ (int*)~(int)ptr0) >>> 4) & 0x1;
    v1 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr0) & (int)ptr0) < 0;
    v91 = 134600332;
    ptr4 = (void*)0x6A;
    ptr3 = &ptr1;
    interrupt(128);
}

void sub_8048B38() {
    char v0 = *(char*)&gvar_805DB50 == 127;
    char v1 = *(char*)&gvar_805DB50 < 127;
    char v2 = __parity__(*(char*)&gvar_805DB50 - 127);
    char v3 = *(char*)&gvar_805DB50 < 127;
    char v4 = (((*(char*)&gvar_805DB50 - 127) ^ *(char*)&gvar_805DB50) & (*(char*)&gvar_805DB50 ^ 0x7f)) < 0;
    char v5 = (((*(char*)&gvar_805DB50 - 127) ^ (*(char*)&gvar_805DB50 ^ 0x7f)) >>> 4) & 0x1;
    jump v0 ? &sub_8048B41: &sub_8048B7C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048E1C(int param0, int param1) {
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
    int v8 = v3;
    int v9 = sub_804823D();
    int v10 = param0 - 1;
    int v11 = param0 - 1;
    int v12 = v10 - 1;
    char v13 = v12 ? 0: 1;
    char v14 = v12 < 0;
    char v15 = __parity__((unsigned char)v12);
    char v16 = ((~v12 ^ ~v11) >>> 4) & 0x1;
    char v17 = ((v12 ^ v11) & v11) < 0;
    int v18 = v12;
    int v19 = v9;
    int v20 = 2;
    int v21 = 4;
    int v22 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}
