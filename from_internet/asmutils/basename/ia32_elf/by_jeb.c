
int start(char* param0, unsigned char* param1, unsigned char* param2) {
    unsigned char* ptr0;
    unsigned char* ptr1;
    unsigned int* ptr2;
    unsigned char* ptr3;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5 = 1;
    int v6 = 1;
    unsigned char* ptr4 = ptr3;
    unsigned char* ptr5 = ptr3;
    unsigned char* ptr6 = ptr3;
    int* ptr7 = (int*)(ptr5 - 1);
    char v7 = ptr7 ? 0: 1;
    char v8 = (int)ptr7 < 0;
    char v9 = __parity__((unsigned char)ptr7);
    char v10 = (((unsigned int)~(int)ptr7 ^ (unsigned char*)~(int)ptr6) >>> 4) & 0x1;
    char v11 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr6) & (int)ptr6) < 0;
    if(!v7) {
        v7 = ptr7 == 2;
        v8 = (int)ptr7 < 2;
        v9 = __parity__((unsigned char)ptr7 - 2);
        char v12 = (unsigned int)ptr7 < 2;
        v11 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr7 - 2) ^ (int)ptr7) & (int)(int*)((int)ptr7 ^ 0x2)) < 0;
        v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr7 - 2) ^ (int)(int*)((int)ptr7 ^ 0x2)) >>> 4) & 0x1);
        if((v7 || v8 != v11)) {
            char* ptr8 = param0;
            unsigned char* ptr9 = param1;
            ptr2 = &param2;
            unsigned char* ptr10 = ptr9;
            unsigned char* ptr11 = NULL;
            char v13 = *ptr9 ? 0: 1;
            char v14 = *ptr9 < 0;
            char v15 = __parity__(*ptr9);
            v12 = *ptr9 < 0;
            char v16 = 0;
            char v17 = 0;
            if(!v13) {
                do {
                    ++ptr9;
                    v3 = *ptr9 ? 0: 1;
                    char v18 = *ptr9 < 0;
                    char v19 = __parity__(*ptr9);
                    char v20 = *ptr9 < 0;
                    char v21 = 0;
                    char v22 = 0;
                }
                while(!v3);
                unsigned char* ptr12 = ptr9;
                do {
                    --ptr9;
                    char v23 = ptr9 == ptr10;
                    char v24 = (int)ptr9 < (int)ptr10;
                    char v25 = __parity__((unsigned char)ptr9 - (unsigned char)ptr10);
                    char v26 = ptr9 < ptr10;
                    char v27 = (int)(int*)((int)(int*)((int)(int*)((int)ptr9 - (int)ptr10) ^ (int)ptr9) & (int)(int*)((int)ptr9 ^ (int)ptr10)) < 0;
                    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 - (int)ptr10) ^ (int)(int*)((int)ptr9 ^ (int)ptr10)) >>> 4) & 0x1);
                    if(v24 == v27) {
                        v4 = *ptr9 == 47;
                        char v29 = *ptr9 < 47;
                        char v30 = __parity__(*ptr9 - 47);
                        char v31 = *ptr9 < 47;
                        char v32 = (((*ptr9 - 47) ^ *ptr9) & (*ptr9 ^ 0x2f)) < 0;
                        char v33 = (((*ptr9 - 47) ^ (*ptr9 ^ 0x2f)) >>> 4) & 0x1;
                    }
                    else {
                        ptr11 = NULL;
                        char v34 = 1;
                        char v35 = 0;
                        char v36 = 1;
                        char v37 = 0;
                        v12 = 0;
                    }
                    goto loc_804808D;
                }
                while(v4);
                unsigned char* ptr13 = ptr9;
                unsigned char* ptr14 = ptr9 + 1;
                char v38 = ptr14 ? 0: 1;
                char v39 = (int)ptr14 < 0;
                char v40 = __parity__((unsigned char)ptr14);
                char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr13 ^ 0x1) ^ (int)ptr14) >>> 4) & 0x1);
                char v42 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr13) & (int*)~(int)(int*)((int)ptr13 ^ 0x1)) < 0;
                unsigned char* ptr15 = ptr14;
                while(1) {
                    --ptr14;
                    char v43 = *ptr14 == 47;
                    char v44 = *ptr14 < 47;
                    char v45 = __parity__(*ptr14 - 47);
                    char v46 = *ptr14 < 47;
                    char v47 = (((*ptr14 - 47) ^ *ptr14) & (*ptr14 ^ 0x2f)) < 0;
                    char v48 = (((*ptr14 - 47) ^ (*ptr14 ^ 0x2f)) >>> 4) & 0x1;
                    if(v43) {
                    loc_80480A1:
                        unsigned char* ptr16 = ptr14;
                        ++ptr14;
                        char v49 = ptr14 ? 0: 1;
                        char v50 = (int)ptr14 < 0;
                        char v51 = __parity__((unsigned char)ptr14);
                        char v52 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr16 ^ 0x1) ^ (int)ptr14) >>> 4) & 0x1);
                        char v53 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr16) & (int*)~(int)(int*)((int)ptr16 ^ 0x1)) < 0;
                    loc_80480A2:
                        ptr1 = ptr14;
                        unsigned char* ptr17 = ptr15;
                        ptr11 = (unsigned char*)((int)ptr15 - (int)ptr14);
                        char v54 = ptr11 ? 0: 1;
                        char v55 = (int)ptr11 < 0;
                        char v56 = __parity__((unsigned char)ptr11);
                        char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr17) ^ (int)ptr11) >>> 4) & 0x1);
                        v12 = ptr14 > ptr17;
                        char v58 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr17) & (int)(int*)((int)ptr11 ^ (int)ptr17)) < 0;
                        int* ptr18 = ptr7;
                        ptr7 = (int*)((char*)ptr7 - 1);
                        char v59 = ptr7 ? 0: 1;
                        char v60 = (int)ptr7 < 0;
                        char v61 = __parity__((unsigned char)ptr7);
                        char v62 = (((unsigned int)~(int)ptr7 ^ (unsigned int)~(int)ptr18) >>> 4) & 0x1;
                        char v63 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr18) & (int)ptr18) < 0;
                        if(!v59) {
                            unsigned char* ptr19 = param2;
                            param2 = ptr1;
                            param1 = ptr11;
                            unsigned char* ptr20 = ptr1;
                            unsigned char* ptr21 = (unsigned char*)((int)ptr1 + (int)ptr11);
                            char v64 = ptr21 ? 0: 1;
                            char v65 = (int)ptr21 < 0;
                            char v66 = __parity__((unsigned char)ptr21);
                            char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr20) ^ (int)ptr21) >>> 4) & 0x1);
                            char v68 = (unsigned char*)__carry__((int)ptr11, (int)ptr20);
                            char v69 = (int)(int*)((int)(int*)((int)ptr21 ^ (int)ptr20) & (int*)~(int)(int*)((int)ptr11 ^ (int)ptr20)) < 0;
                            unsigned char* ptr22 = ptr19;
                            char v70 = *ptr19 ? 0: 1;
                            char v71 = *ptr19 < 0;
                            char v72 = __parity__(*ptr19);
                            v12 = *ptr19 < 0;
                            char v73 = 0;
                            char v74 = 0;
                            if(!v70) {
                                do {
                                    ++ptr19;
                                    v2 = *ptr19 ? 0: 1;
                                    char v75 = *ptr19 < 0;
                                    char v76 = __parity__(*ptr19);
                                    char v77 = *ptr19 < 0;
                                    char v78 = 0;
                                    char v79 = 0;
                                }
                                while(!v2);
                                int* ptr23 = (int*)((int)ptr19 - (int)ptr22);
                                char v80 = ptr23 == ptr11;
                                char v81 = (int)ptr23 < (int)ptr11;
                                char v82 = __parity__((unsigned char)ptr23 - (unsigned char)ptr11);
                                v12 = (unsigned int)ptr23 < (unsigned int)ptr11;
                                char v83 = (int)(int*)((int)(int*)((int)(int*)((int)ptr23 - (int)ptr11) ^ (int)ptr23) & (int)(int*)((int)ptr23 ^ (int)ptr11)) < 0;
                                char v84 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr23 - (int)ptr11) ^ (int)(int*)((int)ptr23 ^ (int)ptr11)) >>> 4) & 0x1);
                                if(v81 != v83) {
                                    int* ptr24 = ptr23;
                                    char* ptr25 = (char*)((int)ptr23 + (int)ptr22);
                                    char v85 = ptr25 ? 0: 1;
                                    char v86 = (int)ptr25 < 0;
                                    char v87 = __parity__((unsigned char)ptr25);
                                    char v88 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr22 ^ (int)ptr24) ^ (int)ptr25) >>> 4) & 0x1);
                                    char v89 = (unsigned char*)__carry__((int)ptr22, (int)ptr24);
                                    char v90 = (int)(int*)((int)(int*)((int)ptr25 ^ (int)ptr24) & (int*)~(int)(int*)((int)ptr22 ^ (int)ptr24)) < 0;
                                    param0 = ptr25;
                                    do {
                                        --ptr25;
                                        unsigned char* ptr26 = ptr21;
                                        --ptr21;
                                        char v91 = ptr21 ? 0: 1;
                                        char v92 = (int)ptr21 < 0;
                                        char v93 = __parity__((unsigned char)ptr21);
                                        char v94 = (((unsigned char*)~(int)ptr21 ^ (unsigned char*)~(int)ptr26) >>> 4) & 0x1;
                                        char v95 = (int)(int*)((int)(int*)((int)ptr21 ^ (int)ptr26) & (int)ptr26) < 0;
                                        ptr11 = (unsigned int)*ptr25 | ((unsigned int)(int*)((int)(int*)((int)ptr11 >>> 8) & 0xffffff) << 8);
                                        char v96 = *ptr25 == *ptr21;
                                        char v97 = (unsigned char)ptr11 > *ptr21;
                                        char v98 = __parity__(*ptr21 - (unsigned char)ptr11);
                                        v12 = (unsigned char)ptr11 > *ptr21;
                                        char v99 = (((*ptr21 - (unsigned char)ptr11) ^ *ptr21) & ((unsigned char)ptr11 ^ *ptr21)) < 0;
                                        char v100 = (((*ptr21 - (unsigned char)ptr11) ^ ((unsigned char)ptr11 ^ *ptr21)) >>> 4) & 0x1;
                                        if(!v96) {
                                            char* ptr27 = param0;
                                            ptr11 = param1;
                                            ptr1 = param2;
                                            ptr2 = &v1;
                                            goto loc_804808D;
                                        }
                                        else {
                                            v0 = ptr25 == ptr22;
                                            char v101 = (int)ptr25 < (int)ptr22;
                                            char v102 = __parity__((unsigned char)ptr25 - (unsigned char)ptr22);
                                            char v103 = (unsigned int)ptr25 < (unsigned int)ptr22;
                                            char v104 = (int)(int*)((int)(int*)((int)(int*)((int)ptr25 - (int)ptr22) ^ (int)ptr25) & (int)(int*)((int)ptr25 ^ (int)ptr22)) < 0;
                                            char v105 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr25 - (int)ptr22) ^ (int)(int*)((int)ptr25 ^ (int)ptr22)) >>> 4) & 0x1);
                                        }
                                    }
                                    while(!v0);
                                    char* ptr28 = param0;
                                    char* ptr29 = param0;
                                    int* ptr30 = (int*)((int)ptr28 - (int)ptr22);
                                    char v106 = ptr30 ? 0: 1;
                                    char v107 = (int)ptr30 < 0;
                                    char v108 = __parity__((unsigned char)ptr30);
                                    char v109 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr22 ^ (int)ptr29) ^ (int)ptr30) >>> 4) & 0x1);
                                    char v110 = (unsigned int)ptr22 > (unsigned int)ptr29;
                                    char v111 = (int)(int*)((int)(int*)((int)ptr30 ^ (int)ptr29) & (int)(int*)((int)ptr22 ^ (int)ptr29)) < 0;
                                    unsigned char* ptr31 = param1;
                                    ptr1 = param2;
                                    ptr2 = &v1;
                                    unsigned char* ptr32 = ptr31;
                                    ptr11 = (unsigned char*)((int)ptr31 - (int)ptr30);
                                    char v112 = ptr11 ? 0: 1;
                                    char v113 = (int)ptr11 < 0;
                                    char v114 = __parity__((unsigned char)ptr11);
                                    char v115 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr30 ^ (int)ptr32) ^ (int)ptr11) >>> 4) & 0x1);
                                    v12 = (unsigned int)ptr30 > (unsigned int)ptr32;
                                    char v116 = (int)(int*)((int)(int*)((int)ptr30 ^ (int)ptr32) & (int)(int*)((int)ptr11 ^ (int)ptr32)) < 0;
                                }
                                else {
                                    ptr11 = param1;
                                    ptr1 = param2;
                                    ptr2 = &v1;
                                }
                            }
                            else {
                                ptr11 = param1;
                                ptr1 = param2;
                                ptr2 = &v1;
                            }
                        }
                        goto loc_804808D;
                    }
                    else {
                        char v117 = ptr14 == ptr10;
                        char v118 = (int)ptr14 < (int)ptr10;
                        char v119 = __parity__((unsigned char)ptr14 - (unsigned char)ptr10);
                        char v120 = ptr14 < ptr10;
                        char v121 = (int)(int*)((int)(int*)((int)(int*)((int)ptr14 - (int)ptr10) ^ (int)ptr14) & (int)(int*)((int)ptr14 ^ (int)ptr10)) < 0;
                        char v122 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr14 - (int)ptr10) ^ (int)(int*)((int)ptr14 ^ (int)ptr10)) >>> 4) & 0x1);
                        if(v117) {
                            goto loc_80480A2;
                        }
                    }
                }
                goto loc_80480A1;
            }
            else {
            loc_804808D:
                *(char*)((int)ptr1 + (int)ptr11) = 10;
                ptr6 = ptr11;
                int* ptr33 = (int*)(ptr11 + 1);
                v7 = ptr33 ? 0: 1;
                v8 = (int)ptr33 < 0;
                v9 = __parity__((unsigned char)ptr33);
                v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0x1) ^ (int)ptr33) >>> 4) & 0x1);
                v11 = (int)(int*)((int)(int*)((int)ptr33 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0x1)) < 0;
                --ptr2;
                *ptr2 = 1;
                v6 = *ptr2;
                *ptr2 = 4;
                ptr0 = *ptr2;
                ++ptr2;
                interrupt(128);
            }
        }
    }
    ptr3 = (unsigned char*)0x1;
    ptr0 = (unsigned char*)0x1;
    ptr2 = &param0;
    interrupt(128);
}
