
int start(int param0, int param1) {
    unsigned char v0;
    unsigned int v1;
    char* ptr0;
    int v2;
    int v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    int v9;
    char v10;
    unsigned char* ptr1;
    char v11;
    int v12 = v9;
    int v13 = param0;
    unsigned int* ptr2 = &param1;
    do {
        char* ptr3 = *ptr2;
        ++ptr2;
        char* ptr4 = ptr3;
        char v14 = ptr4 ? 0: 1;
        char v15 = (int)ptr4 < 0;
        char v16 = __parity__((unsigned char)ptr4);
        char v17 = 0;
        char v18 = 0;
        if(v14) {
        loc_804809F:
            char v19 = gvar_80482E5 ? 0: 1;
            char v20 = gvar_80482E5 >= 128;
            char v21 = __parity__(gvar_80482E5);
            char v22 = gvar_80482E5 < 0;
            char v23 = 0;
            char v24 = 0;
            if(!v19) {
                --ptr2;
                *ptr2 = &loc_80480AD;
                unsigned int v25 = /*BAD_CALL!*/ sub_804829F();
                int v26 = &gvar_804833B;
                unsigned int v27 = v25;
                unsigned int v28 = v1;
                v1 = v27;
                --ptr2;
                *ptr2 = &gvar_804833B;
                --ptr2;
                *ptr2 = &loc_80480B9;
                unsigned int v29 = /*BAD_CALL!*/ sub_804829F();
                char* ptr5 = *ptr2;
                *ptr5 = 10;
                char* ptr6 = ptr5;
                char* ptr7 = (char*)((int)ptr5 - (int)ptr1);
                char v30 = ptr7 ? 0: 1;
                char v31 = (int)ptr7 < 0;
                char v32 = __parity__((unsigned char)ptr7);
                char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr6) ^ (int)ptr7) >>> 4) & 0x1);
                v8 = (unsigned int)ptr1 > (unsigned int)ptr6;
                char v34 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr6) & (int)(int*)((int)ptr7 ^ (int)ptr6)) < 0;
                ptr0 = ptr7;
                int* ptr8 = (int*)(ptr7 + 1);
                v7 = ptr8 ? 0: 1;
                v6 = (int)ptr8 < 0;
                v5 = __parity__((unsigned char)ptr8);
                v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
                v4 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr0) & (int*)~(int)(int*)((int)ptr0 ^ 0x1)) < 0;
                *ptr2 = 1;
                v3 = 1;
                *ptr2 = 4;
                v2 = *ptr2;
                ++ptr2;
                interrupt(128);
            }
            v3 = 0;
            v7 = 1;
            v6 = 0;
            v5 = 1;
            v4 = 0;
            v8 = 0;
            --ptr2;
            *ptr2 = 1;
            v2 = *ptr2;
            ++ptr2;
            interrupt(128);
            return;
        }
        int v35 = (unsigned int)*ptr4 | ((unsigned int)((v35 >>> 8) & 0xffffff) << 8);
        char* ptr9 = ptr4 + 1;
        char v36 = (unsigned char)v35 == 45;
        char v37 = (unsigned char)v35 < 45;
        char v38 = __parity__((unsigned char)v35 - 45);
        char v39 = (unsigned char)v35 < 45;
        char v40 = ((((unsigned char)v35 - 45) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x2d)) < 0;
        char v41 = ((((unsigned char)v35 - 45) ^ ((unsigned char)v35 ^ 0x2d)) >>> 4) & 0x1;
        if(!v36) {
            ptr0 = ptr9;
            int* ptr10 = (int*)(ptr9 - 1);
            char v42 = ptr10 ? 0: 1;
            char v43 = (int)ptr10 < 0;
            char v44 = __parity__((unsigned char)ptr10);
            char v45 = (((int*)~(int)ptr10 ^ (char*)~(int)ptr0) >>> 4) & 0x1;
            char v46 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr0) & (int)ptr0) < 0;
            --ptr2;
            *ptr2 = ptr10;
            v1 = 0;
            char v47 = 1;
            char v48 = 0;
            char v49 = 1;
            char v50 = 0;
            char v51 = 0;
        loc_80480D3:
            while(1) {
                char* ptr11 = *ptr2;
                ++ptr2;
                ptr4 = ptr11;
                char v52 = ptr4 ? 0: 1;
                char v53 = (int)ptr4 < 0;
                char v54 = __parity__((unsigned char)ptr4);
                char v55 = 0;
                char v56 = 0;
                if(v52) {
                    break;
                }
                else {
                    char* ptr12 = (char*)&gvar_804833C;
                    do {
                        v35 = (unsigned int)*ptr4 | ((unsigned int)((v35 >>> 8) & 0xffffff) << 8);
                        ++ptr4;
                        *ptr12 = (unsigned char)v35;
                        ++ptr12;
                        v10 = (unsigned char)v35 ? 0: 1;
                        char v57 = (v35 >>> 7) & 0x1;
                        char v58 = __parity__((unsigned char)v35);
                        char v59 = 0;
                        char v60 = 0;
                    }
                    while(!v10);
                    ptr0 = ptr12;
                    int* ptr13 = (int*)(ptr12 - 1);
                    char v61 = ptr13 ? 0: 1;
                    char v62 = (int)ptr13 < 0;
                    char v63 = __parity__((unsigned char)ptr13);
                    char v64 = (((int*)~(int)ptr13 ^ (char*)~(int)ptr0) >>> 4) & 0x1;
                    char v65 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr0) & (int)ptr0) < 0;
                    --ptr2;
                    *ptr2 = &loc_80480E9;
                    v35 = /*BAD_CALL!*/ sub_8048102();
                    if(!v62) {
                        v1 = (unsigned int)(v35 + v1);
                        char v66 = gvar_80482E5 ? 0: 1;
                        char v67 = gvar_80482E5 >= 128;
                        char v68 = __parity__(gvar_80482E5);
                        char v69 = gvar_80482E5 < 0;
                        char v70 = 0;
                        char v71 = 0;
                        if(v66) {
                            --ptr2;
                            *ptr2 = &loc_80480FB;
                            unsigned int v72 = /*BAD_CALL!*/ sub_804829F();
                            --ptr2;
                            *ptr2 = &loc_8048100;
                            v35 = /*BAD_CALL!*/ sub_80482C1(ptr1);
                        }
                    }
                }
            }
            goto loc_804809F;
        }
        else {
        loc_8048058:
            while(1) {
                v35 = (unsigned int)*ptr9 | ((unsigned int)((v35 >>> 8) & 0xffffff) << 8);
                ++ptr9;
                char v73 = (unsigned char)v35 == 97;
                char v74 = (unsigned char)v35 < 97;
                char v75 = __parity__((unsigned char)v35 - 97);
                char v76 = (unsigned char)v35 < 97;
                char v77 = ((((unsigned char)v35 - 97) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x61)) < 0;
                char v78 = ((((unsigned char)v35 - 97) ^ ((unsigned char)v35 ^ 0x61)) >>> 4) & 0x1;
                if(v73) {
                    v0 = gvar_80482E6;
                    ++gvar_80482E6;
                    char v79 = gvar_80482E6 ? 0: 1;
                    char v80 = gvar_80482E6 >= 128;
                    char v81 = __parity__(gvar_80482E6);
                    char v82 = (((v0 ^ 0x1) ^ gvar_80482E6) >>> 4) & 0x1;
                    char v83 = (char)((gvar_80482E6 ^ v0) & ~(v0 ^ 0x1)) < 0;
                }
                else {
                    char v84 = (unsigned char)v35 == 115;
                    char v85 = (unsigned char)v35 < 115;
                    char v86 = __parity__((unsigned char)v35 - 115);
                    char v87 = (unsigned char)v35 < 115;
                    char v88 = ((((unsigned char)v35 - 115) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x73)) < 0;
                    char v89 = ((((unsigned char)v35 - 115) ^ ((unsigned char)v35 ^ 0x73)) >>> 4) & 0x1;
                    if(v84) {
                        v0 = gvar_80482E7;
                        ++gvar_80482E7;
                        char v90 = gvar_80482E7 ? 0: 1;
                        char v91 = gvar_80482E7 >= 128;
                        char v92 = __parity__(gvar_80482E7);
                        char v93 = (((v0 ^ 0x1) ^ gvar_80482E7) >>> 4) & 0x1;
                        char v94 = (char)((gvar_80482E7 ^ v0) & ~(v0 ^ 0x1)) < 0;
                    }
                    else {
                        char v95 = (unsigned char)v35 == 116;
                        char v96 = (unsigned char)v35 < 116;
                        char v97 = __parity__((unsigned char)v35 - 116);
                        char v98 = (unsigned char)v35 < 116;
                        char v99 = ((((unsigned char)v35 - 116) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x74)) < 0;
                        char v100 = ((((unsigned char)v35 - 116) ^ ((unsigned char)v35 ^ 0x74)) >>> 4) & 0x1;
                        if(v95) {
                            v0 = gvar_80482E5;
                            ++gvar_80482E5;
                            char v101 = gvar_80482E5 ? 0: 1;
                            char v102 = gvar_80482E5 >= 128;
                            char v103 = __parity__(gvar_80482E5);
                            char v104 = (((v0 ^ 0x1) ^ gvar_80482E5) >>> 4) & 0x1;
                            char v105 = (char)((gvar_80482E5 ^ v0) & ~(v0 ^ 0x1)) < 0;
                        }
                        else {
                            char v106 = (unsigned char)v35 == 107;
                            char v107 = (unsigned char)v35 < 107;
                            char v108 = __parity__((unsigned char)v35 - 107);
                            char v109 = (unsigned char)v35 < 107;
                            char v110 = ((((unsigned char)v35 - 107) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x6b)) < 0;
                            char v111 = ((((unsigned char)v35 - 107) ^ ((unsigned char)v35 ^ 0x6b)) >>> 4) & 0x1;
                            if(v106) {
                                v0 = gvar_80482E8;
                                ++gvar_80482E8;
                                char v112 = gvar_80482E8 ? 0: 1;
                                char v113 = gvar_80482E8 >= 128;
                                char v114 = __parity__(gvar_80482E8);
                                char v115 = (((v0 ^ 0x1) ^ gvar_80482E8) >>> 4) & 0x1;
                                char v116 = (char)((gvar_80482E8 ^ v0) & ~(v0 ^ 0x1)) < 0;
                            }
                            else {
                                char v117 = (unsigned char)v35 == 100;
                                char v118 = (unsigned char)v35 < 100;
                                char v119 = __parity__((unsigned char)v35 - 100);
                                char v120 = (unsigned char)v35 < 100;
                                char v121 = ((((unsigned char)v35 - 100) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x64)) < 0;
                                char v122 = ((((unsigned char)v35 - 100) ^ ((unsigned char)v35 ^ 0x64)) >>> 4) & 0x1;
                                if(v117) {
                                    v0 = gvar_80482E9;
                                    ++gvar_80482E9;
                                    char v123 = gvar_80482E9 ? 0: 1;
                                    char v124 = gvar_80482E9 >= 128;
                                    char v125 = __parity__(gvar_80482E9);
                                    char v126 = (((v0 ^ 0x1) ^ gvar_80482E9) >>> 4) & 0x1;
                                    char v127 = (char)((gvar_80482E9 ^ v0) & ~(v0 ^ 0x1)) < 0;
                                }
                                else {
                                    char v128 = (unsigned char)v35 == 45;
                                    char v129 = (unsigned char)v35 < 45;
                                    char v130 = __parity__((unsigned char)v35 - 45);
                                    char v131 = (unsigned char)v35 < 45;
                                    char v132 = ((((unsigned char)v35 - 45) ^ (unsigned char)v35) & ((unsigned char)v35 ^ 0x2d)) < 0;
                                    char v133 = ((((unsigned char)v35 - 45) ^ ((unsigned char)v35 ^ 0x2d)) >>> 4) & 0x1;
                                    if(v128) {
                                        goto loc_80480D3;
                                    }
                                    else {
                                        v11 = (unsigned char)v35 ? 0: 1;
                                        char v134 = (unsigned char)v35 < 0;
                                        char v135 = __parity__((unsigned char)v35);
                                        char v136 = (unsigned char)v35 < 0;
                                        char v137 = 0;
                                        char v138 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    while(v11);
    goto loc_8048058;
}

int sub_8048102() {
    char v0;
    int v1 = 134513389;
    int v2 = &gvar_804833C;
    int v3 = 107;
    int v4 = 107;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_804825F(int param0, unsigned int param1) {
    unsigned int* ptr0;
    unsigned int v0 = gvar_80482DD;
    unsigned int* ptr1 = (unsigned int*)(v0 + param1);
    char v1 = gvar_80482E1 == ptr1;
    char v2 = (int)gvar_80482E1 > (int)ptr1;
    char v3 = __parity__((unsigned char)ptr1 - (unsigned char)gvar_80482E1);
    char v4 = gvar_80482E1 > (unsigned int)ptr1;
    char v5 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - gvar_80482E1) ^ (int)ptr1) & (int)(int*)(gvar_80482E1 ^ (int)ptr1)) < 0;
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - gvar_80482E1) ^ (int)(int*)(gvar_80482E1 ^ (int)ptr1)) >>> 4) & 0x1);
    if(!v4 && !v1) {
        unsigned int* ptr2 = ptr0;
        ptr0 = ptr1;
        int v7 = 45;
        int v8 = 45;
        int* ptr3 = &ptr2;
        interrupt(128);
    }
    gvar_80482DD = ptr1;
    *(ptr1 - 1) = ptr1;
    ptr1 = (unsigned int*)((int)ptr1 - param1);
    *ptr1 = ptr1;
}

void sub_8048298(unsigned int param0) {
    gvar_80482DD = param0;
}

unsigned int sub_804829F() {
    int v0;
    char v1;
    gvar_804833B = 9;
    char* ptr0 = (char*)&gvar_804833A;
    unsigned int v2 = (unsigned int)v1 | ((unsigned int)v0 << 8);
    do {
        *ptr0 = (unsigned char)v2 % 10 + 48;
        --ptr0;
        v2 /= 10;
    }
    while(v2);
    return 0;
}

int sub_80482C1(unsigned char* param0) {
    char v0;
    int v1;
    unsigned char* ptr0 = param0;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 0;
    do {
        int v9 = v2;
        ++v2;
        char v10 = v2 ? 0: 1;
        char v11 = v2 < 0;
        char v12 = __parity__((unsigned char)v2);
        char v13 = (((v9 ^ 0x1) ^ v2) >>> 4) & 0x1;
        char v14 = ((v2 ^ v9) & ~(v9 ^ 0x1)) < 0;
        v0 = *ptr0 == 0;
        char v15 = *ptr0 > 0;
        char v16 = __parity__(0 - *ptr0);
        char v17 = *ptr0 > 0;
        char v18 = ((0 - *ptr0) & *ptr0) < 0;
        char v19 = (((0 - *ptr0) ^ *ptr0) >>> 4) & 0x1;
        ++ptr0;
    }
    while(!v0);
    unsigned char* ptr1 = ptr0;
    char* ptr2 = (char*)(ptr0 - 1);
    char v20 = ptr2 ? 0: 1;
    char v21 = (int)ptr2 < 0;
    char v22 = __parity__((unsigned char)ptr2);
    char v23 = (((char*)~(int)ptr2 ^ (unsigned char*)~(int)ptr1) >>> 4) & 0x1;
    char v24 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr1) & (int)ptr1) < 0;
    *ptr2 = 10;
    int v25 = 1;
    int v26 = 4;
    int v27 = 4;
    int* ptr3 = &v1;
    interrupt(128);
}
