
int start(char* param0, int param1) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    int v4;
    unsigned int v5;
    int v6;
    char v7;
    int v8 = v6;
    char* ptr0 = param0;
    unsigned int* ptr1 = &param1;
    do {
        v5 = (unsigned int)*ptr0 | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        v7 = (unsigned char)v5 ? 0: 1;
        char v9 = (v5 >>> 7) & 0x1;
        char v10 = __parity__((unsigned char)v5);
        char v11 = 0;
        char v12 = 0;
    }
    while(!v7);
    char v13 = *(ptr0 - 7) == 117;
    char v14 = *(ptr0 - 7) < 117;
    char v15 = __parity__(*(ptr0 - 7) - 117);
    char v16 = *(unsigned char*)(ptr0 - 7) < 117;
    char v17 = (((*(ptr0 - 7) - 117) ^ *(ptr0 - 7)) & (*(ptr0 - 7) ^ 0x75)) < 0;
    char v18 = (((*(ptr0 - 7) - 117) ^ (*(ptr0 - 7) ^ 0x75)) >>> 4) & 0x1;
    if(v13) {
        v4 = (unsigned int)(unsigned char)v4 | ((unsigned int)1 << 8) | ((unsigned int)(unsigned short)(v4 >>> 16) << 16);
        int v19 = param1;
        int v20 = param1;
        char v21 = v20 ? 0: 1;
        char v22 = v20 < 0;
        char v23 = __parity__((unsigned char)v20);
        char v24 = 0;
        char v25 = 0;
        if(v21) {
            v20 = &gvar_804804C;
        }
        param0 = NULL;
        ptr1 = &v6;
    }
    char* ptr2 = *ptr1;
    ++ptr1;
    char* ptr3 = ptr2;
    char v26 = ptr3 ? 0: 1;
    char v27 = (int)ptr3 < 0;
    char v28 = __parity__((unsigned char)ptr3);
    char v29 = 0;
    char v30 = 0;
    if(!v26) {
        char* ptr4 = ptr3;
        int v31 = 0;
        unsigned int v32 = 0;
        v3 = 0;
        char v33 = 1;
        char v34 = 0;
        char v35 = 1;
        char v36 = 0;
        char v37 = 0;
        while(1) {
            v31 = (unsigned int)*ptr3 | ((unsigned int)((v31 >>> 8) & 0xffffff) << 8);
            ++ptr3;
            unsigned char v38 = (unsigned char)v31;
            v31 = (unsigned int)((unsigned char)v31 - 48) | ((unsigned int)((v31 >>> 8) & 0xffffff) << 8);
            char v39 = (unsigned char)v31 ? 0: 1;
            char v40 = (v31 >>> 7) & 0x1;
            char v41 = __parity__((unsigned char)v31);
            v18 = (((v38 ^ 0x30) ^ (unsigned char)v31) >>> 4) & 0x1;
            char v42 = v38 < 48;
            char v43 = (((unsigned char)v31 ^ v38) & (v38 ^ 0x30)) < 0;
            if(v42) {
                break;
            }
            else {
                char v44 = (unsigned char)v31 == 9;
                char v45 = (unsigned char)v31 < 9;
                char v46 = __parity__((unsigned char)v31 - 9);
                char v47 = (unsigned char)v31 < 9;
                char v48 = ((((unsigned char)v31 - 9) ^ (unsigned char)v31) & ((unsigned char)v31 ^ 0x9)) < 0;
                v18 = ((((unsigned char)v31 - 9) ^ ((unsigned char)v31 ^ 0x9)) >>> 4) & 0x1;
                if(!v47 && !v44) {
                    break;
                }
                else {
                    unsigned int v49 = v32;
                    int v50 = v32 * 10;
                    int v51 = v32 * 10;
                    v32 = (unsigned int)(v31 + v50);
                    char v52 = v32 ? 0: 1;
                    char v53 = (int)v32 < 0;
                    char v54 = __parity__((unsigned char)v32);
                    char v55 = (((v31 ^ v51) ^ v32) >>> 4) & 0x1;
                    char v56 = __carry__(v31, v51);
                    char v57 = ((v32 ^ v51) & ~(v31 ^ v51)) < 0;
                    v2 = v3;
                    v3 = (unsigned int)((unsigned int)v56 + v3);
                    char v58 = v3 ? 0: 1;
                    char v59 = (int)v3 < 0;
                    char v60 = __parity__((unsigned char)v3);
                    char v61 = ((v3 ^ v2) >>> 4) & 0x1;
                    char v62 = v2 >= 0;
                    char v63 = (int)((v3 ^ v2) & ~v2) < 0;
                }
            }
        }
        v5 = v32;
        char v64 = v3 ? 0: 1;
        char v65 = (int)v3 < 0;
        char v66 = __parity__((unsigned char)v3);
        char v67 = 0;
        char v68 = 0;
        if(!v64) {
            goto loc_8048095;
        }
        else {
            v26 = v5 ? 0: 1;
            v27 = (int)v5 < 0;
            v28 = __parity__((unsigned char)v5);
            v29 = 0;
            v30 = 0;
            goto loc_8048093;
        }
    }
    else {
    loc_8048093:
        if(!v26) {
        loc_8048095:
            --ptr1;
            *ptr1 = 1;
            int v69 = 1;
            ++ptr1;
            char v70 = (unsigned char)(v4 >>> 8) ? 0: 1;
            char v71 = (v4 >>> 15) & 0x1;
            char v72 = __parity__((unsigned char)(v4 >>> 8));
            char v73 = 0;
            char v74 = 0;
            if(!v70) {
                int v75 = 1000000;
                unsigned int v76 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v3 << 32)) % 1000000;
                unsigned int v77 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v3 << 32)) / 1000000;
                unsigned int v78 = v76;
                unsigned int v79 = v77;
                unsigned int v80 = v78;
                unsigned int v81 = v79;
                int v82 = 1000;
                unsigned int v83 = v80;
                unsigned int v84 = v80 * 1000;
                int v85 = (unsigned int)(((unsigned long long)v83 * 1000L) >>> 32L);
                char v86 = v85 ? 1: 0;
                char v87 = v85 ? 1: 0;
                unsigned int v88 = v81;
                v2 = v84;
                v5 = v88;
                v3 = v2;
            }
            else {
                v4 = (unsigned int)*(ptr3 - 1) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
                char v89 = *(ptr3 - 1) ? 0: 1;
                char v90 = (unsigned char)v4 < 0;
                char v91 = __parity__((unsigned char)v4);
                char v92 = 0;
                char v93 = 0;
                if(!v89) {
                    char v94 = (unsigned char)v4 == 115;
                    char v95 = (unsigned char)v4 < 115;
                    char v96 = __parity__((unsigned char)v4 - 115);
                    char v97 = (unsigned char)v4 < 115;
                    char v98 = ((((unsigned char)v4 - 115) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x73)) < 0;
                    v18 = ((((unsigned char)v4 - 115) ^ ((unsigned char)v4 ^ 0x73)) >>> 4) & 0x1;
                    if(!v94) {
                        --ptr1;
                        *ptr1 = 60;
                        v69 = 60;
                        ++ptr1;
                        char v99 = (unsigned char)v4 == 109;
                        char v100 = (unsigned char)v4 < 109;
                        char v101 = __parity__((unsigned char)v4 - 109);
                        char v102 = (unsigned char)v4 < 109;
                        char v103 = ((((unsigned char)v4 - 109) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x6d)) < 0;
                        v18 = ((((unsigned char)v4 - 109) ^ ((unsigned char)v4 ^ 0x6d)) >>> 4) & 0x1;
                        if(v99) {
                            goto loc_80480E2;
                        }
                        else {
                            v69 = 3600;
                            char v104 = (unsigned char)v4 == 104;
                            char v105 = (unsigned char)v4 < 104;
                            char v106 = __parity__((unsigned char)v4 - 104);
                            char v107 = (unsigned char)v4 < 104;
                            char v108 = ((((unsigned char)v4 - 104) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x68)) < 0;
                            v18 = ((((unsigned char)v4 - 104) ^ ((unsigned char)v4 ^ 0x68)) >>> 4) & 0x1;
                            if(v104) {
                                goto loc_80480E2;
                            }
                            else {
                                v69 = 0x15180;
                                char v109 = (unsigned char)v4 == 100;
                                char v110 = (unsigned char)v4 < 100;
                                char v111 = __parity__((unsigned char)v4 - 100);
                                char v112 = (unsigned char)v4 < 100;
                                char v113 = ((((unsigned char)v4 - 100) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x64)) < 0;
                                v18 = ((((unsigned char)v4 - 100) ^ ((unsigned char)v4 ^ 0x64)) >>> 4) & 0x1;
                                if(v109) {
                                    goto loc_80480E2;
                                }
                                else {
                                    v26 = (unsigned char)v4 == 110;
                                    v27 = (unsigned char)v4 < 110;
                                    v28 = __parity__((unsigned char)v4 - 110);
                                    v30 = (unsigned char)v4 < 110;
                                    v29 = ((((unsigned char)v4 - 110) ^ (unsigned char)v4) & ((unsigned char)v4 ^ 0x6e)) < 0;
                                    v18 = ((((unsigned char)v4 - 110) ^ ((unsigned char)v4 ^ 0x6e)) >>> 4) & 0x1;
                                    if(!v26) {
                                        goto loc_80480FB;
                                    }
                                    else {
                                        v2 = v5;
                                        v5 = v3;
                                        v3 = v2;
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                loc_80480E2:
                    v2 = v5;
                    v5 *= v69;
                    v3 = (unsigned int)(((unsigned long long)v69 * (unsigned long long)v2) >>> 32L);
                    char v114 = v3 ? 1: 0;
                    char v115 = v3 ? 1: 0;
                }
            }
            v1 = &loc_8048102;
            *(unsigned int*)&loc_8048102 = v5;
            *(unsigned int*)&loc_8048106 = v3;
            v4 = 0;
            v26 = 1;
            v27 = 0;
            v28 = 1;
            v29 = 0;
            v30 = 0;
            v0 = 162;
            interrupt(128);
        }
    }
loc_80480FB:
    v1 = v5;
    --ptr1;
    *ptr1 = 1;
    v0 = *ptr1;
    ++ptr1;
    interrupt(128);
}
