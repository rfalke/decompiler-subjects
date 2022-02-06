
int start(unsigned char* param0, int param1) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    unsigned char* ptr0;
    int v7;
    unsigned char* ptr1;
    char v8;
    char v9;
    unsigned char* ptr2;
    int v10;
    int v11;
    char v12;
    char v13;
    unsigned char* ptr3 = ptr1;
    int* ptr4 = &param0;
    unsigned char* ptr5 = ptr3;
    int* ptr6 = (int*)(ptr3 - 1);
    char v14 = ptr6 ? 0: 1;
    char v15 = (int)ptr6 < 0;
    char v16 = __parity__((unsigned char)ptr6);
    char v17 = (((int*)~(int)ptr6 ^ (unsigned char*)~(int)ptr5) >>> 4) & 0x1;
    char v18 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int)ptr5) < 0;
    if(!v14) {
        unsigned char* ptr7 = param0;
        v7 = param1;
        ptr4 = &ptr2;
        do {
            ptr0 = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            ++ptr7;
            v8 = (unsigned char)ptr0 ? 0: 1;
            char v19 = (int*)((int)(int*)((int)ptr0 >>> 7) & 0x1);
            char v20 = __parity__((unsigned char)ptr0);
            char v21 = 0;
            char v22 = 0;
        }
        while(!v8);
        char v23 = *(char*)(ptr7 - 7) == 117;
        char v24 = *(char*)(ptr7 - 7) < 117;
        char v25 = __parity__(*(char*)(ptr7 - 7) - 117);
        char v26 = *(ptr7 - 7) < 117;
        char v27 = (((*(char*)(ptr7 - 7) - 117) ^ *(char*)(ptr7 - 7)) & (*(char*)(ptr7 - 7) ^ 0x75)) < 0;
        v17 = (((*(char*)(ptr7 - 7) - 117) ^ (*(char*)(ptr7 - 7) ^ 0x75)) >>> 4) & 0x1;
        if(v23) {
            v6 = 0;
            v5 = 1;
            v4 = 0;
            v3 = 1;
            v2 = 0;
            v1 = 0;
            param1 = 22;
            v0 = 22;
            ptr4 = &ptr2;
            interrupt(128);
        }
        char v28 = (unsigned char)ptr6 == 2;
        char v29 = (unsigned char)ptr6 < 2;
        char v30 = __parity__((unsigned char)ptr6 - 2);
        char v31 = (unsigned char)ptr6 < 2;
        char v32 = ((((unsigned char)ptr6 - 2) ^ (unsigned char)ptr6) & ((unsigned char)ptr6 ^ 0x2)) < 0;
        v17 = ((((unsigned char)ptr6 - 2) ^ ((unsigned char)ptr6 ^ 0x2)) >>> 4) & 0x1;
        if(!v31) {
            char v33 = *(short*)v7 == 28461;
            char v34 = *(short*)v7 < 28461;
            char v35 = __parity__((unsigned char)*(short*)v7 - 45);
            char v36 = *(unsigned short*)v7 < 28461;
            char v37 = (((*(short*)v7 - 28461) ^ *(short*)v7) & (*(short*)v7 ^ 0x6f2d)) < 0;
            char v38 = (((*(short*)v7 - 28461) ^ (*(short*)v7 ^ 0x6f2d)) >>> 4) & 0x1;
            if(v33) {
                unsigned char* ptr8 = ptr2;
                do {
                    ptr7 = ptr8;
                    do {
                        ptr0 = (unsigned int)*ptr7 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
                        ++ptr7;
                        char v39 = (unsigned char)ptr0 == 44;
                        char v40 = (unsigned char)ptr0 < 44;
                        char v41 = __parity__((unsigned char)ptr0 - 44);
                        char v42 = (unsigned char)ptr0 < 44;
                        char v43 = ((((unsigned char)ptr0 - 44) ^ (unsigned char)ptr0) & ((unsigned char)ptr0 ^ 0x2c)) < 0;
                        char v44 = ((((unsigned char)ptr0 - 44) ^ ((unsigned char)ptr0 ^ 0x2c)) >>> 4) & 0x1;
                        if(v39) {
                            goto loc_80480C5;
                        }
                        else {
                            v9 = (unsigned char)ptr0 ? 0: 1;
                            char v45 = (int*)((int)(int*)((int)ptr0 >>> 7) & 0x1);
                            char v46 = __parity__((unsigned char)ptr0);
                            char v47 = 0;
                            char v48 = 0;
                        }
                    }
                    while(!v9);
                    unsigned char v49 = gvar_80481D5;
                    ++gvar_80481D5;
                    char v50 = gvar_80481D5 ? 0: 1;
                    char v51 = gvar_80481D5 >= 128;
                    char v52 = __parity__(gvar_80481D5);
                    char v53 = (((v49 ^ 0x1) ^ gvar_80481D5) >>> 4) & 0x1;
                    char v54 = (char)((gvar_80481D5 ^ v49) & ~(v49 ^ 0x1)) < 0;
                loc_80480C5:
                    unsigned char* ptr9 = ptr7;
                    unsigned char* ptr10 = ptr7;
                    int* ptr11 = (int*)((int)ptr9 - (int)ptr8);
                    char v55 = ptr11 ? 0: 1;
                    char v56 = (int)ptr11 < 0;
                    char v57 = __parity__((unsigned char)ptr11);
                    char v58 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr10) ^ (int)ptr11) >>> 4) & 0x1);
                    char v59 = ptr8 > ptr10;
                    char v60 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr10) & (int)(int*)((int)ptr8 ^ (int)ptr10)) < 0;
                    int* ptr12 = ptr11;
                    unsigned char* ptr13 = (unsigned char*)((unsigned char*)ptr11 - 1);
                    char v61 = ptr13 ? 0: 1;
                    char v62 = (int)ptr13 < 0;
                    char v63 = __parity__((unsigned char)ptr13);
                    char v64 = (((unsigned char*)~(int)ptr13 ^ (int*)~(int)ptr12) >>> 4) & 0x1;
                    char v65 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr12) & (int)ptr12) < 0;
                    int v66 = 7;
                    unsigned int* ptr14 = (unsigned int*)&gvar_8048156;
                    do {
                        ptr5 = &v11;
                        ptr2 = ptr0;
                        param1 = v66;
                        param0 = (unsigned char*)ptr14;
                        ptr1 = ptr13;
                        unsigned char* ptr15 = &v11;
                        unsigned char* ptr16 = ptr8;
                        unsigned char* ptr17 = ptr7;
                        int v67 = v10;
                        unsigned char* ptr18 = ptr8;
                        unsigned char* ptr19 = *ptr14;
                        unsigned char* ptr20 = ptr13;
                        while(ptr20 != 0) {
                            v61 = *ptr18 == *ptr19;
                            char v68 = *ptr18 < *ptr19;
                            char v69 = __parity__(*ptr18 - *ptr19);
                            char v70 = *ptr18 < *ptr19;
                            char v71 = (((*ptr18 - *ptr19) ^ *ptr18) & (*ptr18 ^ *ptr19)) < 0;
                            char v72 = (((*ptr18 - *ptr19) ^ (*ptr18 ^ *ptr19)) >>> 4) & 0x1;
                            ++ptr18;
                            ++ptr19;
                            --ptr20;
                            if(!v61) {
                                break;
                            }
                        }
                        v10 = v67;
                        ptr7 = ptr17;
                        ptr8 = ptr16;
                        ptr13 = ptr1;
                        unsigned char* ptr21 = param0;
                        int v73 = param1;
                        ptr0 = ptr2;
                        if(v61) {
                            ptr0 = *(unsigned int*)(ptr21 + 4);
                            gvar_80481D1 = (int*)(gvar_80481D1 | (int)ptr0);
                            char v74 = gvar_80481D1 ? 0: 1;
                            char v75 = gvar_80481D1 >= 0x80000000;
                            char v76 = __parity__((unsigned char)gvar_80481D1);
                            char v77 = 0;
                            char v78 = 0;
                            break;
                        }
                        else {
                            ptr5 = ptr21;
                            ptr14 = (unsigned int*)(ptr21 + 8);
                            v61 = ptr14 ? 0: 1;
                            char v79 = (int)ptr14 < 0;
                            char v80 = __parity__((unsigned char)ptr14);
                            char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 ^ 0x8) ^ (int)ptr14) >>> 4) & 0x1);
                            char v82 = (unsigned int)ptr5 >= 0xfffffff8;
                            char v83 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr5) & (int*)~(int)(int*)((int)ptr5 ^ 0x8)) < 0;
                            v66 = v73 - 1;
                        }
                    }
                    while(v66);
                    ptr8 = ptr7;
                    v13 = gvar_80481D5 == 1;
                    char v84 = (char)gvar_80481D5 < 1;
                    char v85 = __parity__(gvar_80481D5 - 1);
                    char v86 = gvar_80481D5 < 1;
                    char v87 = (((gvar_80481D5 - 1) ^ gvar_80481D5) & (gvar_80481D5 ^ 0x1)) < 0;
                    char v88 = (((gvar_80481D5 - 1) ^ (gvar_80481D5 ^ 0x1)) >>> 4) & 0x1;
                }
                while(!v13);
                v7 = v11;
                ptr4 = &v12;
            }
            int v89 = &gvar_80481D5;
            char v90 = *(short*)v7 == 29741;
            char v91 = *(short*)v7 < 29741;
            char v92 = __parity__((unsigned char)*(short*)v7 - 45);
            char v93 = *(unsigned short*)v7 < 29741;
            char v94 = (((*(short*)v7 - 29741) ^ *(short*)v7) & (*(short*)v7 ^ 0x742d)) < 0;
            v17 = (((*(short*)v7 - 29741) ^ (*(short*)v7 ^ 0x742d)) >>> 4) & 0x1;
            if(v90) {
                int v95 = *ptr4;
                ++ptr4;
                int v96 = *ptr4;
                ++ptr4;
            }
            int v97 = *ptr4;
            *ptr4 = &loc_8048110;
            int v98 = /*BAD_CALL!*/ sub_8048140();
            gvar_80481D1 |= 1;
            char v99 = gvar_80481D1 ? 0: 1;
            char v100 = gvar_80481D1 >= 0x80000000;
            char v101 = __parity__((unsigned char)gvar_80481D1);
            char v102 = 0;
            char v103 = 0;
            --ptr4;
            *ptr4 = &loc_804811C;
            int v104 = /*BAD_CALL!*/ sub_8048140();
            gvar_80481D1 &= -2;
            gvar_80481D1 |= 4;
            char v105 = gvar_80481D1 ? 0: 1;
            char v106 = gvar_80481D1 >= 0x80000000;
            char v107 = __parity__((unsigned char)gvar_80481D1);
            char v108 = 0;
            char v109 = 0;
            --ptr4;
            *ptr4 = &loc_804812F;
            int v110 = /*BAD_CALL!*/ sub_8048140();
            gvar_80481D1 |= 1;
            v5 = gvar_80481D1 ? 0: 1;
            v4 = gvar_80481D1 >= 0x80000000;
            v3 = __parity__((unsigned char)gvar_80481D1);
            v2 = 0;
            v1 = 0;
            --ptr4;
            *ptr4 = &loc_804813B;
            int v111 = /*BAD_CALL!*/ sub_8048140();
            v7 = v111;
            --ptr4;
            *ptr4 = 1;
            v0 = *ptr4;
            ++ptr4;
            interrupt(128);
        }
    }
    v6 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v1 = 0;
    v7 = "/proc/mounts";
    --ptr4;
    *ptr4 = 5;
    v0 = *ptr4;
    ++ptr4;
    interrupt(128);
}

int sub_8048140() {
    char v0;
    unsigned int v1 = gvar_80481D1;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 21;
    int v9 = 21;
    int* ptr0 = &v0;
    interrupt(128);
}
