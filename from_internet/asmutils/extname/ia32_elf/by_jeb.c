
int start(unsigned char* param0, unsigned char* param1, int* param2) {
    int v0;
    int v1;
    unsigned char* ptr0;
    unsigned int* ptr1;
    int v2;
    int v3;
    int* ptr2;
    char v4;
    unsigned char* ptr3;
    unsigned char* ptr4;
    int v5;
    char v6;
    int v7 = v5;
    unsigned int v8 = (unsigned int)(v7 - 1);
    unsigned int v9 = (unsigned int)(v7 - 1);
    unsigned char* ptr5 = (unsigned char*)(v8 - 1);
    char v10 = ptr5 ? 0: 1;
    char v11 = (int)ptr5 < 0;
    char v12 = __parity__((unsigned char)ptr5);
    char v13 = (((unsigned char*)~(int)ptr5 ^ ~v9) >>> 4) & 0x1;
    char v14 = (int)(int*)((int)(int*)((int)ptr5 ^ v9) & v9) < 0;
    if(!v11) {
        ptr4 = param0;
        ptr3 = param1;
        char v15 = *ptr3 == 45;
        char v16 = *ptr3 < 45;
        char v17 = __parity__(*ptr3 - 45);
        v4 = *ptr3 < 45;
        char v18 = (((*ptr3 - 45) ^ *ptr3) & (*ptr3 ^ 0x2d)) < 0;
        v13 = (((*ptr3 - 45) ^ (*ptr3 ^ 0x2d)) >>> 4) & 0x1;
        if(v15) {
            ptr2 = (int*)0x80480D7;
            param1 = (unsigned char*)0x80480D7;
            param0 = ptr5;
            v3 = 0xfff;
            ptr5 = NULL;
            v10 = 1;
            v11 = 0;
            v12 = 1;
            v14 = 0;
            v4 = 0;
            v5 = 3;
            v2 = 3;
            ptr1 = &param0;
            interrupt(128);
        }
    }
    else if(v11) {
        v5 = 1;
        v2 = 1;
        ptr1 = &param0;
        interrupt(128);
    loc_804808F:
        while(v0 != 0) {
            char v19 = *ptr0 == 0;
            char v20 = *ptr0 > 0;
            char v21 = __parity__(0 - *ptr0);
            char v22 = *ptr0 > 0;
            char v23 = ((0 - *ptr0) & *ptr0) < 0;
            char v24 = (((0 - *ptr0) ^ *ptr0) >>> 4) & 0x1;
            ++ptr0;
            --v0;
            if(!~v19) {
            loc_8048091:
                char v25 = 1;
                unsigned int v26 = (unsigned int)~v0;
                unsigned int v27 = (unsigned int)~v0;
                unsigned char* ptr6 = ptr0 - 1;
                unsigned int v28 = v27;
                unsigned int v29 = v27 - 1;
                char v30 = v29 ? 0: 1;
                char v31 = v29 >= 0x80000000;
                char v32 = __parity__((unsigned char)v29);
                char v33 = ((~v29 ^ ~v28) >>> 4) & 0x1;
                char v34 = (int)((v29 ^ v28) & v28) < 0;
                while(v26 != 0) {
                    v30 = *ptr6 == 47;
                    char v35 = *ptr6 > 47;
                    char v36 = __parity__(47 - *ptr6);
                    char v37 = *ptr6 > 47;
                    char v38 = (((47 - *ptr6) ^ 0x2f) & (*ptr6 ^ 0x2f)) < 0;
                    char v39 = (((47 - *ptr6) ^ (*ptr6 ^ 0x2f)) >>> 4) & 0x1;
                    --ptr6;
                    --v26;
                    if(!~v30) {
                    loc_804809C:
                        if(!v30) {
                            unsigned char* ptr7 = ptr6;
                            --ptr6;
                            char v40 = ptr6 ? 0: 1;
                            char v41 = (int)ptr6 < 0;
                            char v42 = __parity__((unsigned char)ptr6);
                            char v43 = (((unsigned char*)~(int)ptr6 ^ (unsigned char*)~(int)ptr7) >>> 4) & 0x1;
                            char v44 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr7) & (int)ptr7) < 0;
                        }
                        unsigned int v45 = v29;
                        unsigned int v46 = v29 - v26;
                        char v47 = v46 ? 0: 1;
                        char v48 = v46 >= 0x80000000;
                        char v49 = __parity__((unsigned char)v46);
                        char v50 = (((v26 ^ v45) ^ v46) >>> 4) & 0x1;
                        char v51 = v26 > v45;
                        char v52 = (int)((v26 ^ v45) & (v46 ^ v45)) < 0;
                        unsigned int v53 = v46;
                        int* ptr8 = (int*)((char*)(v46 + (int)ptr6) + 2);
                        int v54 = (unsigned int)(unsigned char)(((__ror__(v1, 1)) & 0xffffff00) >>> 8) | ((unsigned int)((((__ror__(v1, 1)) & 0xffffff00) >>> 8) & 0xffffff) << 8);
                        ptr4 = (unsigned char*)((unsigned char*)ptr8 - 1);
                        unsigned int v55 = v46;
                        unsigned int v56 = v46 - 1;
                        char v57 = v56 ? 0: 1;
                        char v58 = v56 >= 0x80000000;
                        char v59 = __parity__((unsigned char)v56);
                        char v60 = ((~v56 ^ ~v55) >>> 4) & 0x1;
                        char v61 = (int)((v56 ^ v55) & v55) < 0;
                        while(v53 != 0) {
                            v57 = (unsigned char)v54 == *ptr4;
                            char v62 = (unsigned char)v54 < *ptr4;
                            char v63 = __parity__((unsigned char)v54 - *ptr4);
                            char v64 = (unsigned char)v54 < *ptr4;
                            char v65 = ((((unsigned char)v54 - *ptr4) ^ (unsigned char)v54) & ((unsigned char)v54 ^ *ptr4)) < 0;
                            char v66 = ((((unsigned char)v54 - *ptr4) ^ ((unsigned char)v54 ^ *ptr4)) >>> 4) & 0x1;
                            --ptr4;
                            --v53;
                            if(!~v57) {
                            loc_80480AD:
                                if(!v57) {
                                loc_80480AF:
                                    unsigned int v67 = v56;
                                    unsigned int v68 = v56;
                                    v53 = v67 + 1;
                                    char v69 = v53 ? 0: 1;
                                    char v70 = v53 >= 0x80000000;
                                    char v71 = __parity__((unsigned char)v53);
                                    char v72 = (((v68 ^ 0x1) ^ v53) >>> 4) & 0x1;
                                    char v73 = (int)((v53 ^ v68) & ~(v68 ^ 0x1)) < 0;
                                }
                                char v74 = v53 ? 0: 1;
                                char v75 = v53 >= 0x80000000;
                                char v76 = __parity__((unsigned char)v53);
                                char v77 = 0;
                                char v78 = 0;
                                if(v74) {
                                    goto loc_80480AF;
                                }
                                else {
                                    int v79 = v54;
                                    unsigned int v80 = (unsigned int)(v54 >> 31);
                                    char v81 = (v79 >> 30) & 0x1;
                                    char v82 = 0;
                                    char v83 = v80 ? 0: 1;
                                    char v84 = v80 >= 0x80000000;
                                    char v85 = __parity__((unsigned char)v80);
                                    int v86 = v53 - 1;
                                    unsigned int v87 = (unsigned int)(v86 - v80);
                                    unsigned int v88 = v56;
                                    unsigned int v89 = v56 - v87;
                                    char v90 = v89 ? 0: 1;
                                    char v91 = v89 >= 0x80000000;
                                    char v92 = __parity__((unsigned char)v89);
                                    char v93 = (((v87 ^ v88) ^ v89) >>> 4) & 0x1;
                                    char v94 = v87 > v88;
                                    char v95 = (int)((v87 ^ v88) & (v89 ^ v88)) < 0;
                                    int* ptr9 = (int*)(ptr4 + 1);
                                    int* ptr10 = (int*)(ptr4 + 1);
                                    ptr2 = (int*)((int)ptr9 - v80);
                                    char v96 = ptr2 ? 0: 1;
                                    char v97 = (int)ptr2 < 0;
                                    char v98 = __parity__((unsigned char)ptr2);
                                    char v99 = (int*)((int)(int*)((int)(int*)((int)(int*)(v80 ^ (int)ptr10) ^ (int)ptr2) >>> 4) & 0x1);
                                    v4 = v80 > (unsigned int)ptr10;
                                    char v100 = (int)(int*)((int)(int*)(v80 ^ (int)ptr10) & (int)(int*)((int)ptr2 ^ (int)ptr10)) < 0;
                                    *(char*)((int)ptr2 + v89) = 10;
                                    v9 = v89;
                                    v3 = (int)(v89 + 1);
                                    v10 = v3 ? 0: 1;
                                    v11 = v3 < 0;
                                    v12 = __parity__((unsigned char)v3);
                                    v13 = (((v9 ^ 0x1) ^ v3) >>> 4) & 0x1;
                                    v14 = ((v3 ^ v9) & ~(v9 ^ 0x1)) < 0;
                                    --ptr1;
                                    *ptr1 = 1;
                                    ptr5 = *ptr1;
                                    *ptr1 = 4;
                                    v2 = *ptr1;
                                    ++ptr1;
                                    interrupt(128);
                                }
                                return;
                            }
                        }
                        goto loc_80480AD;
                    }
                }
                goto loc_804809C;
            }
        }
        goto loc_8048091;
    }
    else {
        ptr5 = param0;
    }
    int v101 = (unsigned int)(unsigned char)ptr3 | ((unsigned int)46 << 8) | ((unsigned int)(unsigned short)(int*)((int)ptr3 >>> 16) << 16);
    ptr0 = param1;
    ptr1 = &param2;
    unsigned char* ptr11 = ptr5;
    int* ptr12 = (int*)(ptr5 - 1);
    char v102 = ptr12 ? 0: 1;
    char v103 = (int)ptr12 < 0;
    char v104 = __parity__((unsigned char)ptr12);
    char v105 = (((int*)~(int)ptr12 ^ (unsigned char*)~(int)ptr11) >>> 4) & 0x1;
    char v106 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr11) & (int)ptr11) < 0;
    if(!v103) {
        int* ptr13 = param2;
        ptr1 = &v6;
        v101 = *ptr13;
        char v107 = (unsigned char)(v101 >>> 8) == (unsigned char)v101;
        char v108 = (unsigned char)(v101 >>> 8) < (unsigned char)v101;
        char v109 = __parity__((unsigned char)(v101 >>> 8) - (unsigned char)v101);
        char v110 = (unsigned char)(v101 >>> 8) < (unsigned char)v101;
        v106 = ((((unsigned char)(v101 >>> 8) - (unsigned char)v101) ^ (unsigned char)(v101 >>> 8)) & ((unsigned char)(v101 >>> 8) ^ (unsigned char)v101)) < 0;
        char v111 = ((((unsigned char)(v101 >>> 8) - (unsigned char)v101) ^ ((unsigned char)(v101 >>> 8) ^ (unsigned char)v101)) >>> 4) & 0x1;
        if(!v107) {
            v101 = (unsigned int)(unsigned char)v101 | ((unsigned int)(unsigned char)v101 << 8) | ((unsigned int)(unsigned short)(v101 >>> 16) << 16);
            v110 = 1;
        }
        v4 = ~v110;
    }
    long long v112 = (unsigned long long)__rol__((unsigned long long)v101 | ((unsigned long long)v4 << 32), 1);
    v1 = (unsigned int)v112;
    char v113 = (v112 >>> 32L) & 0x1L;
    char v114 = v1 < 0 ^ v113;
    char v115 = __ror__(v1, 1) < 0;
    char v116 = (__ror__(v1, 1)) << 1 < 0 ^ __ror__(v1, 1) < 0;
    char v117 = 0;
    int v118 = 0;
    char v119 = 1;
    char v120 = 0;
    char v121 = 1;
    char v122 = 0;
    char v123 = 0;
    int v124 = 0;
    v0 = -1;
    char v125 = 0;
    char v126 = 1;
    char v127 = 1;
    char v128 = 1;
    char v129 = 0;
    goto loc_804808F;
}
