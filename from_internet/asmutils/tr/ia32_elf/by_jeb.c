
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char* ptr0;
    char v6;
    char v7;
    int v8;
    int v9;
    char v10;
    int v11;
    char v12;
    int v13;
    char v14;
    unsigned char* ptr1;
    int v15 = v9;
    int v16 = param0;
    unsigned int* ptr2 = &param1;
    int v17 = 0;
    char v18 = 1;
    char v19 = 0;
    char v20 = 1;
    char v21 = 0;
    char v22 = 0;
    while(1) {
        unsigned char* ptr3 = ptr1;
        --ptr1;
        char v23 = ptr1 ? 0: 1;
        char v24 = (int)ptr1 < 0;
        char v25 = __parity__((unsigned char)ptr1);
        char v26 = (((unsigned char*)~(int)ptr1 ^ (unsigned char*)~(int)ptr3) >>> 4) & 0x1;
        char v27 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr3) & (int)ptr3) < 0;
        unsigned char* ptr4 = *ptr2;
        ++ptr2;
        unsigned char* ptr5 = ptr4;
        char v28 = ptr5 ? 0: 1;
        char v29 = (int)ptr5 < 0;
        char v30 = __parity__((unsigned char)ptr5);
        char v31 = 0;
        char v32 = 0;
        if(v28) {
            break;
        }
        else {
            v8 = (unsigned int)*ptr5 | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
            char v33 = ptr5 ? 0: 1;
            char v34 = (int)ptr5 < 0;
            char v35 = __parity__((unsigned char)ptr5);
            char v36 = 0;
            char v37 = 0;
            if(v33) {
                break;
            }
            else {
                char v38 = *(short*)ptr5 == 29485;
                char v39 = *(short*)ptr5 < 29485;
                char v40 = __parity__((unsigned char)*(short*)ptr5 - 45);
                char v41 = *(unsigned short*)ptr5 < 29485;
                char v42 = (((*(short*)ptr5 - 29485) ^ *(short*)ptr5) & (*(short*)ptr5 ^ 0x732d)) < 0;
                char v43 = (((*(short*)ptr5 - 29485) ^ (*(short*)ptr5 ^ 0x732d)) >>> 4) & 0x1;
                if(!v38) {
                    char v44 = *(short*)ptr5 == 25645;
                    char v45 = *(short*)ptr5 < 25645;
                    char v46 = __parity__((unsigned char)*(short*)ptr5 - 45);
                    char v47 = *(unsigned short*)ptr5 < 25645;
                    char v48 = (((*(short*)ptr5 - 25645) ^ *(short*)ptr5) & (*(short*)ptr5 ^ 0x642d)) < 0;
                    char v49 = (((*(short*)ptr5 - 25645) ^ (*(short*)ptr5 ^ 0x642d)) >>> 4) & 0x1;
                    if(v44) {
                        char v50 = (unsigned char)v17;
                        v17 = (unsigned int)((unsigned char)v17 + 1) | ((unsigned int)((v17 >>> 8) & 0xffffff) << 8);
                        char v51 = (unsigned char)v17 ? 0: 1;
                        char v52 = (v17 >>> 7) & 0x1;
                        char v53 = __parity__((unsigned char)v17);
                        char v54 = (((v50 ^ 0x1) ^ (unsigned char)v17) >>> 4) & 0x1;
                        char v55 = (((unsigned char)v17 ^ v50) & ~(v50 ^ 0x1)) < 0;
                        continue;
                    }
                    else {
                        v8 = 0;
                        char v56 = 1;
                        char v57 = 0;
                        char v58 = 1;
                        char v59 = 0;
                        char v60 = 0;
                        gvar_804824D = (unsigned char)(v17 >>> 8);
                        gvar_804824E = (unsigned char)v17;
                        char v61 = (unsigned char)v17 ? 0: 1;
                        char v62 = (v17 >>> 7) & 0x1;
                        char v63 = __parity__((unsigned char)v17);
                        char v64 = 0;
                        char v65 = 0;
                        if(v61) {
                            do {
                                *(unsigned char*)((int)&gvar_8048251 + v8) = (unsigned char)v8;
                                v7 = (unsigned char)v8;
                                v8 = (unsigned int)((unsigned char)v8 + 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                                v10 = (unsigned char)v8 ? 0: 1;
                                char v66 = (v8 >>> 7) & 0x1;
                                char v67 = __parity__((unsigned char)v8);
                                char v68 = (((v7 ^ 0x1) ^ (unsigned char)v8) >>> 4) & 0x1;
                                char v69 = (((unsigned char)v8 ^ v7) & ~(v7 ^ 0x1)) < 0;
                            }
                            while(!v10);
                            ptr0 = (char*)&gvar_8048351;
                            --ptr2;
                            *ptr2 = &loc_80480CD;
                            int v70 = /*BAD_CALL!*/ sub_8048172(v11, v13);
                            unsigned char* ptr6 = *ptr2;
                            *ptr2 = v70;
                            ptr5 = ptr6;
                            char v71 = ptr5 ? 0: 1;
                            char v72 = (int)ptr5 < 0;
                            char v73 = __parity__((unsigned char)ptr5);
                            char v74 = 0;
                            char v75 = 0;
                            if(v71) {
                                break;
                            }
                            else {
                                ptr0 = (char*)&gvar_8048451;
                                --ptr2;
                                *ptr2 = &loc_80480DD;
                                unsigned char* ptr7 = (unsigned char*)/*BAD_CALL!*/ sub_8048172(v11, v13);
                                ptr5 = *ptr2;
                                ++ptr2;
                                char v76 = ptr7 == ptr5;
                                char v77 = (int)ptr7 > (int)ptr5;
                                char v78 = __parity__((unsigned char)ptr5 - (unsigned char)ptr7);
                                char v79 = ptr7 > ptr5;
                                char v80 = (int)(int*)((int)(int*)((int)(int*)((int)ptr5 - (int)ptr7) ^ (int)ptr5) & (int)(int*)((int)ptr7 ^ (int)ptr5)) < 0;
                                v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 - (int)ptr7) ^ (int)(int*)((int)ptr7 ^ (int)ptr5)) >>> 4) & 0x1);
                                if(!v76) {
                                    break;
                                }
                                else {
                                    unsigned char* ptr8 = ptr7;
                                    char v81 = ptr8 ? 0: 1;
                                    char v82 = (int)ptr8 < 0;
                                    char v83 = __parity__((unsigned char)ptr8);
                                    char v84 = 0;
                                    char v85 = 0;
                                    if(!v81) {
                                        ptr0 = (char*)&gvar_8048351;
                                        ptr1 = (unsigned char*)&gvar_8048451;
                                        int v86 = 0;
                                        char v87 = 1;
                                        char v88 = 0;
                                        char v89 = 1;
                                        char v90 = 0;
                                        char v91 = 0;
                                        do {
                                            v86 = (unsigned int)*ptr0 | ((unsigned int)((v86 >>> 8) & 0xffffff) << 8);
                                            char* ptr9 = ptr0;
                                            ++ptr0;
                                            char v92 = ptr0 ? 0: 1;
                                            char v93 = (int)ptr0 < 0;
                                            char v94 = __parity__((unsigned char)ptr0);
                                            char v95 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                                            char v96 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x1)) < 0;
                                            unsigned char v97 = *ptr1;
                                            unsigned char* ptr10 = ptr1;
                                            ++ptr1;
                                            char v98 = ptr1 ? 0: 1;
                                            char v99 = (int)ptr1 < 0;
                                            char v100 = __parity__((unsigned char)ptr1);
                                            char v101 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ 0x1) ^ (int)ptr1) >>> 4) & 0x1);
                                            char v102 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr10) & (int*)~(int)(int*)((int)ptr10 ^ 0x1)) < 0;
                                            *(unsigned char*)((int)&gvar_8048251 + v86) = v97;
                                            ptr3 = ptr8;
                                            --ptr8;
                                            v12 = ptr8 ? 0: 1;
                                            char v103 = (int)ptr8 < 0;
                                            char v104 = __parity__((unsigned char)ptr8);
                                            v6 = (((unsigned int)~(int)ptr8 ^ (unsigned int)~(int)ptr3) >>> 4) & 0x1;
                                            char v105 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr3) & (int)ptr3) < 0;
                                        }
                                        while(!v12);
                                    }
                                    goto loc_8048101;
                                }
                            }
                        }
                    }
                }
                else {
                    char v106 = (unsigned char)(v17 >>> 8);
                    v17 = (unsigned int)(unsigned char)v17 | ((unsigned int)((unsigned char)(v17 >>> 8) + 1) << 8) | ((unsigned int)(unsigned short)(v17 >>> 16) << 16);
                    char v107 = (unsigned char)(v17 >>> 8) ? 0: 1;
                    char v108 = (v17 >>> 15) & 0x1;
                    char v109 = __parity__((unsigned char)(v17 >>> 8));
                    char v110 = (((v106 ^ 0x1) ^ (unsigned char)(v17 >>> 8)) >>> 4) & 0x1;
                    char v111 = (((unsigned char)(v17 >>> 8) ^ v106) & ~(v106 ^ 0x1)) < 0;
                    continue;
                }
                do {
                    *(unsigned char*)((int)&gvar_8048251 + v8) = (unsigned char)v17;
                    v7 = (unsigned char)v8;
                    v8 = (unsigned int)((unsigned char)v8 + 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
                    v14 = (unsigned char)v8 ? 0: 1;
                    char v112 = (v8 >>> 7) & 0x1;
                    char v113 = __parity__((unsigned char)v8);
                    v6 = (((v7 ^ 0x1) ^ (unsigned char)v8) >>> 4) & 0x1;
                    char v114 = (((unsigned char)v8 ^ v7) & ~(v7 ^ 0x1)) < 0;
                }
                while(!v14);
                int v115 = &gvar_8048351;
                --ptr2;
                *ptr2 = &gvar_8048351;
                --ptr2;
                *ptr2 = &loc_804809B;
                unsigned char* ptr11 = (unsigned char*)/*BAD_CALL!*/ sub_8048172(v11, v13);
                ptr0 = *ptr2;
                ++ptr2;
                int v116 = 0;
                char v117 = 0;
                unsigned char* ptr12 = ptr11;
                char v118 = ptr12 ? 0: 1;
                char v119 = (int)ptr12 < 0;
                char v120 = __parity__((unsigned char)ptr12);
                char v121 = 0;
                char v122 = 0;
                while(!v118) {
                    v116 = (unsigned int)*ptr0 | ((unsigned int)((v116 >>> 8) & 0xffffff) << 8);
                    *(unsigned char*)((int)&gvar_8048251 + v116) = 0;
                    ++ptr0;
                    ptr3 = ptr12;
                    --ptr12;
                    v118 = ptr12 ? 0: 1;
                    char v123 = (int)ptr12 < 0;
                    char v124 = __parity__((unsigned char)ptr12);
                    v6 = (((unsigned char*)~(int)ptr12 ^ (unsigned char*)~(int)ptr3) >>> 4) & 0x1;
                    char v125 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr3) & (int)ptr3) < 0;
                }
            loc_8048101:
                ptr1 = NULL;
                v5 = 1;
                v4 = 0;
                v3 = 1;
                v2 = 0;
                v1 = 0;
                --ptr2;
                *ptr2 = 1;
                ptr5 = *ptr2;
                *ptr2 = 1;
                v13 = *ptr2;
                v11 = &gvar_8048250;
                v8 = 0;
                *ptr2 = 3;
                v0 = *ptr2;
                ++ptr2;
                interrupt(128);
            }
        }
    }
    v8 &= 0xffffff00;
    char v126 = 1;
    char v127 = (v8 >>> 7) & 0x1;
    char v128 = __parity__((unsigned char)v8);
    char v129 = 0;
    v1 = 0;
    v7 = (unsigned char)v8;
    v8 = (unsigned int)((unsigned char)v8 + 1) | ((unsigned int)((v8 >>> 8) & 0xffffff) << 8);
    v5 = (unsigned char)v8 ? 0: 1;
    v4 = (v8 >>> 7) & 0x1;
    v3 = __parity__((unsigned char)v8);
    v6 = (((v7 ^ 0x1) ^ (unsigned char)v8) >>> 4) & 0x1;
    v2 = (((unsigned char)v8 ^ v7) & ~(v7 ^ 0x1)) < 0;
    --ptr2;
    *ptr2 = 1;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}
