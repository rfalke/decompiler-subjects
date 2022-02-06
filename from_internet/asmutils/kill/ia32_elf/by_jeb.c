
int start(int param0, int param1, void* param2) {
    int v0;
    void* ptr0;
    void* ptr1;
    void* ptr2;
    char v1;
    void* ptr3;
    char v2;
    void* ptr4 = ptr2;
    unsigned int* ptr5 = &param1;
    void* ptr6 = ptr4;
    void* ptr7 = (void*)((int)ptr4 - 1);
    char v3 = ptr7 ? 0: 1;
    char v4 = (int)ptr7 < 0;
    char v5 = __parity__((unsigned char)ptr7);
    char v6 = (((void*)~(int)ptr7 ^ (void*)~(int)ptr6) >>> 4) & 0x1;
    char v7 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)ptr6) < 0;
    if(!v3) {
        int v8 = param1;
        void* ptr8 = param2;
        ptr5 = &ptr3;
        unsigned int v9 = (unsigned int)*(char*)ptr8 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        char v10 = *(char*)ptr8 == 45;
        char v11 = (unsigned char)v9 < 45;
        char v12 = __parity__((unsigned char)v9 - 45);
        char v13 = (unsigned char)v9 < 45;
        char v14 = ((((unsigned char)v9 - 45) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x2d)) < 0;
        v6 = ((((unsigned char)v9 - 45) ^ ((unsigned char)v9 ^ 0x2d)) >>> 4) & 0x1;
        if(!v10) {
            param0 = 15;
            goto loc_8048214;
        }
        else {
            ptr6 = ptr8;
            ptr8 = (void*)((int)ptr8 + 1);
            char v15 = ptr8 ? 0: 1;
            char v16 = (int)ptr8 < 0;
            char v17 = __parity__((unsigned char)ptr8);
            char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
            char v19 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
            v9 = (unsigned int)*(char*)ptr8 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
            char v20 = *(char*)ptr8 == 108;
            char v21 = (unsigned char)v9 < 108;
            char v22 = __parity__((unsigned char)v9 - 108);
            char v23 = (unsigned char)v9 < 108;
            char v24 = ((((unsigned char)v9 - 108) ^ (unsigned char)v9) & ((unsigned char)v9 ^ 0x6c)) < 0;
            char v25 = ((((unsigned char)v9 - 108) ^ ((unsigned char)v9 ^ 0x6c)) >>> 4) & 0x1;
            if(v20) {
                ptr7 = (void*)&gvar_8048081;
                v3 = gvar_8048081 ? 0: 1;
                v4 = gvar_8048081 >= 128;
                v5 = __parity__(gvar_8048081);
                v23 = gvar_8048081 < 0;
                v7 = 0;
                v6 = 0;
                if(!v3) {
                    unsigned char v26 = *(int*)&gvar_8048081;
                    ptr8 = (void*)(v26 & 0xf);
                    char v27 = ptr8 ? 0: 1;
                    char v28 = (int)ptr8 < 0;
                    char v29 = __parity__((unsigned char)ptr8);
                    char v30 = 0;
                    v23 = 0;
                    int v31 = &gvar_8048082;
                    ptr6 = (void*)&gvar_8048082;
                    ptr7 = (void*)&gvar_8048083;
                    v3 = 0;
                    v4 = 0;
                    v5 = 0;
                    v6 = 0;
                    v7 = 0;
                    ptr1 = ptr8;
                    param0 = &gvar_8048083;
                    v9 = 1;
                    ptr0 = (void*)0x4;
                    ptr5 = &ptr3;
                    interrupt(128);
                }
                ptr1 = (void*)0x1;
                param0 = &gvar_8048145;
                v9 = 1;
                ptr0 = (void*)0x4;
                ptr5 = &ptr3;
                interrupt(128);
            }
            ptr6 = ptr7;
            ptr7 = (void*)((int)ptr7 - 1);
            v3 = ptr7 ? 0: 1;
            v4 = (int)ptr7 < 0;
            v5 = __parity__((unsigned char)ptr7);
            v6 = (((void*)~(int)ptr7 ^ (void*)~(int)ptr6) >>> 4) & 0x1;
            v7 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)ptr6) < 0;
            if(!v3) {
                unsigned int v32 = sub_804804C(param0);
                char v33 = (unsigned char)v9 ? 0: 1;
                char v34 = (v9 >>> 7) & 0x1;
                char v35 = __parity__((unsigned char)v9);
                char v36 = 0;
                char v37 = 0;
                if(!v33) {
                    param0 = (int)v32;
                    goto loc_8048213;
                }
                else {
                    v0 = 0;
                    char v38 = 1;
                    char v39 = 0;
                    char v40 = 1;
                    char v41 = 0;
                    char v42 = 0;
                    while(1) {
                        v9 = (unsigned int)*(char*)ptr8 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                        char v43 = *(char*)ptr8 ? 0: 1;
                        char v44 = (v9 >>> 7) & 0x1;
                        char v45 = __parity__((unsigned char)v9);
                        char v46 = 0;
                        char v47 = 0;
                        if(v43) {
                            break;
                        }
                        else {
                            *(char*)(v0 + &loc_804822C) = (unsigned char)v9;
                            char v48 = (unsigned char)v0 == 5;
                            char v49 = (unsigned char)v0 < 5;
                            char v50 = __parity__((unsigned char)v0 - 5);
                            char v51 = (unsigned char)v0 < 5;
                            char v52 = ((((unsigned char)v0 - 5) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0x5)) < 0;
                            char v53 = ((((unsigned char)v0 - 5) ^ ((unsigned char)v0 ^ 0x5)) >>> 4) & 0x1;
                            if(v48) {
                                goto loc_80481DF;
                            }
                            else {
                                v0 = (unsigned int)((unsigned char)v0 + 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
                                ptr6 = ptr8;
                                ptr8 = (void*)((int)ptr8 + 1);
                                char v54 = ptr8 ? 0: 1;
                                char v55 = (int)ptr8 < 0;
                                char v56 = __parity__((unsigned char)ptr8);
                                v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
                                char v57 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
                            }
                        }
                    }
                    v3 = (unsigned char)v0 ? 0: 1;
                    v4 = (v0 >>> 7) & 0x1;
                    v5 = __parity__((unsigned char)v0);
                    v7 = 0;
                    v23 = 0;
                }
                if(!v3) {
                loc_80481DF:
                    v9 = 0;
                    int v58 = 0;
                    char v59 = 1;
                    char v60 = 0;
                    char v61 = 1;
                    char v62 = 0;
                    char v63 = 0;
                    int v64 = -1;
                    ptr6 = (void*)0xFFFFFFFF;
                    ptr1 = (void*)0xFFFFFFFE;
                    char v65 = 0;
                    char v66 = 1;
                    char v67 = 0;
                    char v68 = 0;
                    char v69 = 0;
                loc_80481E5:
                    param0 = (unsigned int)(unsigned char)v0 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8);
                    ptr8 = NULL;
                    char v70 = 1;
                    char v71 = 0;
                    char v72 = 1;
                    char v73 = 0;
                    char v74 = 0;
                    do {
                        int* ptr9 = (int*)((int)ptr1 + 1);
                        char v75 = (unsigned char)ptr9 + 1;
                        ptr1 = (unsigned int)((unsigned char)(v9 >>> 8) + (unsigned char)ptr9 + 1) | ((unsigned int)(int*)((int)(int*)((int)(void*)((char*)ptr9 + 1) >>> 8) & 0xffffff) << 8);
                        char v76 = (unsigned char)(v9 >>> 8) + (unsigned char)ptr9 + 1 ? 0: 1;
                        char v77 = (int*)((int)(int*)((int)ptr1 >>> 7) & 0x1);
                        char v78 = __parity__((unsigned char)ptr1);
                        v6 = ((((unsigned char)(v9 >>> 8) ^ v75) ^ (unsigned char)ptr1) >>> 4) & 0x1;
                        char v79 = __carry__((unsigned char)(v9 >>> 8), v75);
                        char v80 = (((unsigned char)ptr1 ^ v75) & ~((unsigned char)(v9 >>> 8) ^ v75)) < 0;
                        unsigned int v81 = (unsigned int)(unsigned char)v9 | ((unsigned int)*(char*)((int)ptr1 + &gvar_8048081) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                        v9 = (unsigned int)(unsigned char)v9 | ((unsigned int)*(char*)((int)ptr1 + &gvar_8048081) << 8) | ((unsigned int)(unsigned short)(v9 >>> 16) << 16);
                        v3 = (unsigned char)(v9 >>> 8) ? 0: 1;
                        v4 = (v9 >>> 15) & 0x1;
                        v5 = __parity__((unsigned char)(v9 >>> 8));
                        v7 = 0;
                        v23 = 0;
                        if(v3) {
                            goto loc_8048227;
                        }
                        else {
                            v1 = (unsigned char)(v9 >>> 8) == (unsigned char)param0;
                            char v82 = (unsigned char)(v9 >>> 8) < (unsigned char)param0;
                            char v83 = __parity__((unsigned char)(v9 >>> 8) - (unsigned char)param0);
                            char v84 = (unsigned char)(v9 >>> 8) < (unsigned char)param0;
                            char v85 = ((((unsigned char)(v9 >>> 8) - (unsigned char)param0) ^ (unsigned char)(v9 >>> 8)) & ((unsigned char)(v9 >>> 8) ^ (unsigned char)param0)) < 0;
                            char v86 = ((((unsigned char)(v9 >>> 8) - (unsigned char)param0) ^ ((unsigned char)(v9 >>> 8) ^ (unsigned char)param0)) >>> 4) & 0x1;
                        }
                    }
                    while(!v1);
                    do {
                        v9 = (unsigned int)*(char*)((int)ptr8 + &loc_804822C) | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
                        char v87 = *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083) == *(char*)((int)ptr8 + &loc_804822C);
                        char v88 = (unsigned char)v9 < *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083);
                        char v89 = __parity__((unsigned char)v9 - *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083));
                        char v90 = (unsigned char)v9 < *(unsigned char*)((unsigned char*)((int)ptr1 + (int)ptr8) + &gvar_8048083);
                        char v91 = ((((unsigned char)v9 - *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083)) ^ (unsigned char)v9) & ((unsigned char)v9 ^ *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083))) < 0;
                        char v92 = ((((unsigned char)v9 - *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083)) ^ ((unsigned char)v9 ^ *(char*)((char*)((int)ptr1 + (int)ptr8) + &gvar_8048083))) >>> 4) & 0x1;
                        if(!v87) {
                            goto loc_80481E5;
                        }
                        else {
                            ptr6 = ptr8;
                            ptr8 = (void*)((int)ptr8 + 1);
                            char v93 = ptr8 ? 0: 1;
                            char v94 = (int)ptr8 < 0;
                            char v95 = __parity__((unsigned char)ptr8);
                            v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
                            char v96 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
                            --param0;
                        }
                    }
                    while(param0);
                    param0 = (int)*(char*)((int)ptr1 + &gvar_8048082);
                loc_8048213:
                    ptr8 = ptr3;
                    ptr5 = &v2;
                loc_8048214:
                    --ptr5;
                    *ptr5 = &loc_8048219;
                    unsigned int v97 = /*BAD_CALL!*/ sub_804804C(param0);
                    v3 = (unsigned char)v9 ? 0: 1;
                    v4 = (v9 >>> 7) & 0x1;
                    v5 = __parity__((unsigned char)v9);
                    v7 = 0;
                    v23 = 0;
                    if(!v3) {
                        v9 = v97;
                        --ptr5;
                        *ptr5 = 37;
                        ptr0 = *ptr5;
                        ++ptr5;
                        interrupt(128);
                    }
                }
            }
        }
    }
loc_8048227:
    --ptr5;
    *ptr5 = 1;
    ptr0 = *ptr5;
    ++ptr5;
    interrupt(128);
}

unsigned int sub_804804C(int param0) {
    char* ptr0;
    unsigned int result = 0;
    int v0 = 0;
    int v1 = (unsigned int)*ptr0;
    if(*ptr0 == 45) {
        v0 = 0x100;
        ++ptr0;
    loc_8048063:
        v1 = (unsigned int)*ptr0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    }
    unsigned char v2 = (unsigned char)v1;
    v1 = (unsigned int)((unsigned char)v1 - 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    if(v2 >= 48 && (unsigned char)v1 <= 9) {
        result = (unsigned int)(result * 10 + v1);
        v0 = (unsigned int)((unsigned char)v0 + 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        goto loc_8048063;
    }
    else {
        if((unsigned char)(v0 >>> 8)) {
            result = (unsigned int)(0 - result);
        }
        return result;
    }
}
