
int start(unsigned char* param0, int param1) {
    int v0;
    int v1;
    char v2;
    int v3 = v1;
    unsigned char* ptr0 = param0;
    unsigned int* ptr1 = &param1;
    gvar_80484EF = 15;
    unsigned int v4 = 0;
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    unsigned int* ptr2 = NULL;
    unsigned int* ptr3 = (unsigned int*)0xFFFFFFFF;
    char v11 = 0;
    char v12 = 1;
    char v13 = 1;
    char v14 = 1;
    char v15 = 0;
    while(ptr3 != 0) {
        char v16 = *ptr0 == 0;
        char v17 = *ptr0 > 0;
        char v18 = __parity__(0 - *ptr0);
        char v19 = *ptr0 > 0;
        char v20 = ((0 - *ptr0) & *ptr0) < 0;
        char v21 = (((0 - *ptr0) ^ *ptr0) >>> 4) & 0x1;
        ++ptr0;
        ptr3 = (unsigned int*)((char*)ptr3 - 1);
        if(!~v16) {
            break;
        }
    }
    char v22 = *(int*)(ptr0 - 5) == 0x666f6469;
    char v23 = *(int*)(ptr0 - 5) < 0x666f6469;
    char v24 = __parity__((unsigned char)*(int*)(ptr0 - 5) - 105);
    char v25 = *(unsigned int*)(ptr0 - 5) < 0x666f6469;
    char v26 = (((*(int*)(ptr0 - 5) - 0x666f6469) ^ *(int*)(ptr0 - 5)) & (*(int*)(ptr0 - 5) ^ 0x666f6469)) < 0;
    char v27 = (((*(int*)(ptr0 - 5) - 0x666f6469) ^ (*(int*)(ptr0 - 5) ^ 0x666f6469)) >>> 4) & 0x1;
    if(!v22) {
        char v28 = *(char*)(ptr0 - 2) == 53;
        char v29 = *(char*)(ptr0 - 2) < 53;
        char v30 = __parity__(*(char*)(ptr0 - 2) - 53);
        char v31 = *(ptr0 - 2) < 53;
        char v32 = (((*(char*)(ptr0 - 2) - 53) ^ *(char*)(ptr0 - 2)) & (*(char*)(ptr0 - 2) ^ 0x35)) < 0;
        v27 = (((*(char*)(ptr0 - 2) - 53) ^ (*(char*)(ptr0 - 2) ^ 0x35)) >>> 4) & 0x1;
        v0 = !v28 ? &gvar_80480AE: &gvar_804833F;
    }
    else {
        gvar_80484DF = 1;
        v0 = &gvar_8048367;
    }
    while(1) {
        char* ptr4 = *ptr1;
        ++ptr1;
        char* ptr5 = ptr4;
        char v33 = ptr5 ? 0: 1;
        char v34 = (int)ptr5 < 0;
        char v35 = __parity__((unsigned char)ptr5);
        char v36 = 0;
        char v37 = 0;
        if(v33) {
            break;
        }
        else {
            ptr3 = NULL;
            char v38 = 1;
            char v39 = 0;
            char v40 = 1;
            char v41 = 0;
            char v42 = 0;
            v4 = (unsigned int)*ptr5 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            ++ptr5;
            char v43 = (unsigned char)v4 == 45;
            char v44 = (unsigned char)v4 < 45;
            char v45 = __parity__((unsigned char)v4 - 45);
            char v46 = (unsigned char)v4 < 45;
            char v47 = ((((unsigned char)v4 - 45) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x2d)) < 0;
            char v48 = ((((unsigned char)v4 - 45) ^ ((unsigned char)v4 ^ 0x2d)) >>> 4) & 0x1;
            if(v43) {
                v4 = (unsigned int)*ptr5 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
                ++ptr5;
                char v49 = (unsigned char)v4 == 45;
                char v50 = (unsigned char)v4 < 45;
                char v51 = __parity__((unsigned char)v4 - 45);
                char v52 = (unsigned char)v4 < 45;
                char v53 = ((((unsigned char)v4 - 45) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x2d)) < 0;
                char v54 = ((((unsigned char)v4 - 45) ^ ((unsigned char)v4 ^ 0x2d)) >>> 4) & 0x1;
                if(!v49) {
                    v33 = (unsigned char)v4 == 57;
                    v34 = (unsigned char)v4 < 57;
                    v35 = __parity__((unsigned char)v4 - 57);
                    v37 = (unsigned char)v4 < 57;
                    v36 = ((((unsigned char)v4 - 57) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x39)) < 0;
                    v27 = ((((unsigned char)v4 - 57) ^ ((unsigned char)v4 ^ 0x39)) >>> 4) & 0x1;
                    if(!v33 && v34 == v36) {
                        char v55 = (unsigned char)v4 == 101;
                        char v56 = (unsigned char)v4 < 101;
                        char v57 = __parity__((unsigned char)v4 - 101);
                        char v58 = (unsigned char)v4 < 101;
                        char v59 = ((((unsigned char)v4 - 101) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x65)) < 0;
                        v27 = ((((unsigned char)v4 - 101) ^ ((unsigned char)v4 ^ 0x65)) >>> 4) & 0x1;
                        if(!v55) {
                            char v60 = (unsigned char)v4 == 103;
                            char v61 = (unsigned char)v4 < 103;
                            char v62 = __parity__((unsigned char)v4 - 103);
                            char v63 = (unsigned char)v4 < 103;
                            char v64 = ((((unsigned char)v4 - 103) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x67)) < 0;
                            char v65 = ((((unsigned char)v4 - 103) ^ ((unsigned char)v4 ^ 0x67)) >>> 4) & 0x1;
                            if(!v60) {
                                char v66 = (unsigned char)v4 == 105;
                                char v67 = (unsigned char)v4 < 105;
                                char v68 = __parity__((unsigned char)v4 - 105);
                                char v69 = (unsigned char)v4 < 105;
                                char v70 = ((((unsigned char)v4 - 105) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x69)) < 0;
                                char v71 = ((((unsigned char)v4 - 105) ^ ((unsigned char)v4 ^ 0x69)) >>> 4) & 0x1;
                                if(!v66) {
                                    v33 = (unsigned char)v4 == 108;
                                    v34 = (unsigned char)v4 < 108;
                                    v35 = __parity__((unsigned char)v4 - 108);
                                    v37 = (unsigned char)v4 < 108;
                                    v36 = ((((unsigned char)v4 - 108) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x6c)) < 0;
                                    v27 = ((((unsigned char)v4 - 108) ^ ((unsigned char)v4 ^ 0x6c)) >>> 4) & 0x1;
                                    if(v33) {
                                        goto loc_804832E;
                                    }
                                    else {
                                        char v72 = (unsigned char)v4 == 113;
                                        char v73 = (unsigned char)v4 < 113;
                                        char v74 = __parity__((unsigned char)v4 - 113);
                                        char v75 = (unsigned char)v4 < 113;
                                        char v76 = ((((unsigned char)v4 - 113) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x71)) < 0;
                                        char v77 = ((((unsigned char)v4 - 113) ^ ((unsigned char)v4 ^ 0x71)) >>> 4) & 0x1;
                                        if(v72) {
                                            goto loc_804831C;
                                        }
                                        else {
                                            char v78 = (unsigned char)v4 == 118;
                                            char v79 = (unsigned char)v4 < 118;
                                            char v80 = __parity__((unsigned char)v4 - 118);
                                            char v81 = (unsigned char)v4 < 118;
                                            char v82 = ((((unsigned char)v4 - 118) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x76)) < 0;
                                            char v83 = ((((unsigned char)v4 - 118) ^ ((unsigned char)v4 ^ 0x76)) >>> 4) & 0x1;
                                            if(v78) {
                                                goto loc_804831D;
                                            }
                                            else {
                                                char v84 = (unsigned char)v4 == 86;
                                                char v85 = (unsigned char)v4 < 86;
                                                char v86 = __parity__((unsigned char)v4 - 86);
                                                char v87 = (unsigned char)v4 < 86;
                                                char v88 = ((((unsigned char)v4 - 86) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x56)) < 0;
                                                char v89 = ((((unsigned char)v4 - 86) ^ ((unsigned char)v4 ^ 0x56)) >>> 4) & 0x1;
                                                if(v84) {
                                                    goto loc_804831E;
                                                }
                                                else {
                                                    char v90 = (unsigned char)v4 == 119;
                                                    char v91 = (unsigned char)v4 < 119;
                                                    char v92 = __parity__((unsigned char)v4 - 119);
                                                    char v93 = (unsigned char)v4 < 119;
                                                    char v94 = ((((unsigned char)v4 - 119) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x77)) < 0;
                                                    v27 = ((((unsigned char)v4 - 119) ^ ((unsigned char)v4 ^ 0x77)) >>> 4) & 0x1;
                                                    if(v90) {
                                                        continue;
                                                    }
                                                    else {
                                                        char v95 = (unsigned char)v4 == 115;
                                                        char v96 = (unsigned char)v4 < 115;
                                                        char v97 = __parity__((unsigned char)v4 - 115);
                                                        char v98 = (unsigned char)v4 < 115;
                                                        char v99 = ((((unsigned char)v4 - 115) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x73)) < 0;
                                                        char v100 = ((((unsigned char)v4 - 115) ^ ((unsigned char)v4 ^ 0x73)) >>> 4) & 0x1;
                                                        if(v95) {
                                                            goto loc_804831F;
                                                        }
                                                        else {
                                                            char v101 = (unsigned char)v4 == 120;
                                                            char v102 = (unsigned char)v4 < 120;
                                                            char v103 = __parity__((unsigned char)v4 - 120);
                                                            char v104 = (unsigned char)v4 < 120;
                                                            char v105 = ((((unsigned char)v4 - 120) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x78)) < 0;
                                                            char v106 = ((((unsigned char)v4 - 120) ^ ((unsigned char)v4 ^ 0x78)) >>> 4) & 0x1;
                                                            if(v101) {
                                                                goto loc_8048320;
                                                            }
                                                            else {
                                                                char v107 = (unsigned char)v4 == 111;
                                                                char v108 = (unsigned char)v4 < 111;
                                                                char v109 = __parity__((unsigned char)v4 - 111);
                                                                char v110 = (unsigned char)v4 < 111;
                                                                char v111 = ((((unsigned char)v4 - 111) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x6f)) < 0;
                                                                v27 = ((((unsigned char)v4 - 111) ^ ((unsigned char)v4 ^ 0x6f)) >>> 4) & 0x1;
                                                                if(v107) {
                                                                    goto loc_8048321;
                                                                }
                                                                else {
                                                                    ptr0 = (unsigned char*)(ptr5 - 1);
                                                                    unsigned int* ptr6 = (unsigned int*)&gvar_8048430;
                                                                    do {
                                                                        unsigned int v112 = *ptr6;
                                                                        ptr5 = (char*)(ptr6 + 1);
                                                                        v4 = v112;
                                                                        v33 = v4 ? 0: 1;
                                                                        v34 = v4 >= 0x80000000;
                                                                        v35 = __parity__((unsigned char)v4);
                                                                        v36 = 0;
                                                                        v37 = 0;
                                                                        if(v33) {
                                                                            goto loc_80482EA;
                                                                        }
                                                                        else {
                                                                            ptr6 = (unsigned int*)(ptr5 + 1);
                                                                            v2 = *(int*)ptr0 == v4;
                                                                            char v113 = *(int*)ptr0 > (int)v4;
                                                                            char v114 = __parity__((unsigned char)v4 - (unsigned char)*(int*)ptr0);
                                                                            v37 = *(unsigned int*)ptr0 > v4;
                                                                            char v115 = (((v4 - *(int*)ptr0) ^ v4) & (*(int*)ptr0 ^ v4)) < 0;
                                                                            v27 = (((v4 - *(int*)ptr0) ^ (*(int*)ptr0 ^ v4)) >>> 4) & 0x1;
                                                                        }
                                                                    }
                                                                    while(!v2);
                                                                    ptr2 = ptr6;
                                                                    char* ptr7 = (char*)((char*)ptr6 - 1);
                                                                    v33 = ptr7 ? 0: 1;
                                                                    v34 = (int)ptr7 < 0;
                                                                    v35 = __parity__((unsigned char)ptr7);
                                                                    v27 = (((char*)~(int)ptr7 ^ (unsigned int*)~(int)ptr2) >>> 4) & 0x1;
                                                                    v36 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr2) & (int)ptr2) < 0;
                                                                    v4 = (unsigned int)*ptr7 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
                                                                    ptr5 = ptr7 + 1;
                                                                    *(char*)&gvar_80484EF = (unsigned char)v4;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                int v116 = 0;
                                ptr3 = (unsigned int*)0x1;
                                char v117 = 0;
                                char v118 = 0;
                                char v119 = 0;
                                char v120 = 0;
                                char v121 = 0;
                            }
                            unsigned int* ptr8 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v122 = ptr3 ? 0: 1;
                            char v123 = (int)ptr3 < 0;
                            char v124 = __parity__((unsigned char)ptr3);
                            char v125 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v126 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x1)) < 0;
                        loc_804831C:
                            unsigned int* ptr9 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v127 = ptr3 ? 0: 1;
                            char v128 = (int)ptr3 < 0;
                            char v129 = __parity__((unsigned char)ptr3);
                            char v130 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v131 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x1)) < 0;
                        loc_804831D:
                            unsigned int* ptr10 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v132 = ptr3 ? 0: 1;
                            char v133 = (int)ptr3 < 0;
                            char v134 = __parity__((unsigned char)ptr3);
                            char v135 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v136 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr10) & (int*)~(int)(int*)((int)ptr10 ^ 0x1)) < 0;
                        loc_804831E:
                            unsigned int* ptr11 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v137 = ptr3 ? 0: 1;
                            char v138 = (int)ptr3 < 0;
                            char v139 = __parity__((unsigned char)ptr3);
                            char v140 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v141 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr11) & (int*)~(int)(int*)((int)ptr11 ^ 0x1)) < 0;
                        loc_804831F:
                            unsigned int* ptr12 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v142 = ptr3 ? 0: 1;
                            char v143 = (int)ptr3 < 0;
                            char v144 = __parity__((unsigned char)ptr3);
                            char v145 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v146 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr12) & (int*)~(int)(int*)((int)ptr12 ^ 0x1)) < 0;
                        loc_8048320:
                            unsigned int* ptr13 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v147 = ptr3 ? 0: 1;
                            char v148 = (int)ptr3 < 0;
                            char v149 = __parity__((unsigned char)ptr3);
                            char v150 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr13 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v151 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr13) & (int*)~(int)(int*)((int)ptr13 ^ 0x1)) < 0;
                        loc_8048321:
                            ptr2 = ptr3;
                            ptr3 = (unsigned int*)((char*)ptr3 + 1);
                            char v152 = ptr3 ? 0: 1;
                            char v153 = (int)ptr3 < 0;
                            char v154 = __parity__((unsigned char)ptr3);
                            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                            char v155 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr2) & (int*)~(int)(int*)((int)ptr2 ^ 0x1)) < 0;
                            char v156 = (int*)((int)(int*)(gvar_80484E3 >>> (int)(int*)((int)(unsigned int)ptr3 % 32)) & 0x1);
                            gvar_80484E3 = (int*)(((int*)~(int)(int*)(1 << (int)(int*)((int)(unsigned int)ptr3 % 32)) & gvar_80484E3) | (int)(int*)(1 << (int)(int*)((int)(unsigned int)ptr3 % 32)));
                        }
                        continue;
                    }
                    else {
                    loc_804832E:
                        interrupt(3);
                    }
                }
            }
            ptr2 = ptr1;
            --ptr1;
            v33 = ptr1 ? 0: 1;
            v34 = (int)ptr1 < 0;
            v35 = __parity__((unsigned char)ptr1);
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ 0x4) ^ (int)ptr1) >>> 4) & 0x1);
            v37 = (unsigned int)ptr2 < 4;
            v36 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x4)) < 0;
            break;
        loc_80482EA:
            int v157 = 16;
            ptr3 = (unsigned int*)&gvar_80483D6;
            --ptr1;
            *ptr1 = 1;
            v3 = *ptr1;
            *ptr1 = 4;
            v4 = *ptr1;
            ++ptr1;
            interrupt(128);
        }
    }
    jump v0;
}

int sub_8048253() {
    return gvar_80484EB();
}
