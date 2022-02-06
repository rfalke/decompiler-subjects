
int start(int param0, unsigned int* param1) {
    char v0;
    unsigned int v1;
    int v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    int v8;
    unsigned char v9;
    char v10;
    void* ptr0;
    char v11;
    char v12;
    char v13;
    int v14;
    int v15;
    int v16;
    int v17;
    char v18;
    int v19;
    int v20;
    int v21;
    char v22;
    char v23;
    char v24;
    char v25;
    char v26;
    int v27;
    int v28 = &gvar_804804C;
    void* ptr1 = ptr0;
    int v29 = (int)(int*)((int)ptr1 * 4) + (int)&param1;
    int v30 = param0;
    unsigned int* ptr2 = &ptr0;
    int v31 = sub_8048060();
    int v32 = v31;
    int v33 = v31 - 1;
    char v34 = v33 ? 0: 1;
    char v35 = v33 < 0;
    char v36 = __parity__((unsigned char)v33);
    char v37 = ((~v33 ^ ~v32) >>> 4) & 0x1;
    char v38 = ((v33 ^ v32) & v32) < 0;
    *(char*)(v29 + 11) = (unsigned char)v33;
    if(!v34 && v35 == v38) {
        int v39 = param0;
        unsigned int* ptr3 = param1;
        ptr2 = &v18;
        unsigned int v40 = *ptr3;
        char v41 = (unsigned short)v40 == 29741;
        char v42 = (unsigned short)v40 < 29741;
        char v43 = __parity__((unsigned char)v40 - 45);
        char v44 = (unsigned short)v40 < 29741;
        char v45 = ((((unsigned short)v40 - 29741) ^ (unsigned short)v40) & ((unsigned short)v40 ^ 0x742d)) < 0;
        char v46 = ((((unsigned short)v40 - 29741) ^ ((unsigned short)v40 ^ 0x742d)) >>> 4) & 0x1;
        if(!v41) {
            v34 = v40 == 1769221421;
            v35 = (int)v40 < 1769221421;
            v36 = __parity__((unsigned char)v40 - 45);
            v10 = v40 < 1769221421;
            v38 = (((v40 - 1769221421) ^ v40) & (v40 ^ 0x69742d2d)) < 0;
            v37 = (((v40 - 1769221421) ^ (v40 ^ 0x69742d2d)) >>> 4) & 0x1;
            if(v34) {
                goto loc_80480A8;
            }
        }
        else {
        loc_80480A8:
            v9 = *(unsigned char*)(v29 + 11);
            *(char*)(v29 + 11) = 0 - *(char*)(v29 + 11);
            v34 = *(char*)(v29 + 11) ? 0: 1;
            v35 = *(char*)(v29 + 11) < 0;
            v36 = __parity__(*(char*)(v29 + 11));
            v10 = v9 > 0;
            v38 = (*(char*)(v29 + 11) & v9) < 0;
            v37 = ((*(char*)(v29 + 11) ^ v9) >>> 4) & 0x1;
        }
    }
    --ptr2;
    *ptr2 = (unsigned int)v10 | ((unsigned int)1 << 1) | ((unsigned int)v36 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v37 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v34 << 6) | ((unsigned int)v35 << 7) | ((unsigned int)v24 << 8) | ((unsigned int)v23 << 9) | ((unsigned int)0 << 10) | ((unsigned int)v38 << 11) | ((unsigned int)v11 << 12) | ((unsigned int)v26 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v22 << 18) | ((unsigned int)v13 << 19) | ((unsigned int)v12 << 20) | ((unsigned int)v25 << 21) | ((unsigned int)0 << 22);
    unsigned int v47 = *ptr2;
    unsigned int v48 = *ptr2;
    int v49 = (int)(v47 ^ 0x200000);
    char v50 = v49 ? 0: 1;
    char v51 = v49 < 0;
    char v52 = __parity__((unsigned char)v49);
    char v53 = 0;
    char v54 = 0;
    *ptr2 = v49;
    int v55 = *ptr2;
    char v56 = v55 & 0x1;
    char v57 = (v55 >>> 2) & 0x1;
    char v58 = (v55 >>> 4) & 0x1;
    char v59 = (v55 >>> 6) & 0x1;
    char v60 = (v55 >>> 7) & 0x1;
    char v61 = (v55 >>> 8) & 0x1;
    char v62 = (v55 >>> 9) & 0x1;
    char v63 = (v55 >>> 10) & 0x1;
    char v64 = (v55 >>> 11) & 0x1;
    char v65 = (v55 >>> 14) & 0x1;
    char v66 = 0;
    char v67 = (v55 >>> 18) & 0x1;
    char v68 = (v55 >>> 21) & 0x1;
    *ptr2 = (unsigned int)v56 | ((unsigned int)1 << 1) | ((unsigned int)v57 << 2) | ((unsigned int)0 << 3) | ((unsigned int)v58 << 4) | ((unsigned int)0 << 5) | ((unsigned int)v59 << 6) | ((unsigned int)v60 << 7) | ((unsigned int)v61 << 8) | ((unsigned int)v62 << 9) | ((unsigned int)v63 << 10) | ((unsigned int)v64 << 11) | ((unsigned int)v11 << 12) | ((unsigned int)v65 << 14) | ((unsigned int)0 << 15) | ((unsigned int)v67 << 18) | ((unsigned int)v13 << 19) | ((unsigned int)v12 << 20) | ((unsigned int)v68 << 21) | ((unsigned int)0 << 22);
    unsigned int v69 = *ptr2;
    ++ptr2;
    char v70 = v69 == v48;
    char v71 = (int)v69 < (int)v48;
    char v72 = __parity__((unsigned char)v69 - (unsigned char)v48);
    char v73 = v69 < v48;
    char v74 = (int)(((v69 - v48) ^ v69) & (v69 ^ v48)) < 0;
    char v75 = (((v69 - v48) ^ (v69 ^ v48)) >>> 4) & 0x1;
    if(!v70) {
        int v76 = 0;
        char v77 = *(char*)(v29 + 11) == 0;
        char v78 = *(char*)(v29 + 11) > 0;
        char v79 = __parity__(0 - *(char*)(v29 + 11));
        char v80 = *(unsigned char*)(v29 + 11) > 0;
        char v81 = ((0 - *(char*)(v29 + 11)) & *(char*)(v29 + 11)) < 0;
        v75 = (((0 - *(char*)(v29 + 11)) ^ *(char*)(v29 + 11)) >>> 4) & 0x1;
        if(!v77 && v78 == v81) {
            (int v16, v21) = rdtsc();
            --ptr2;
            *ptr2 = v16;
            v19 = v29;
            v8 = &gvar_804804C;
            v7 = 1;
            v6 = 0;
            v5 = 1;
            v4 = 0;
            v3 = 0;
            v2 = 162;
            interrupt(128);
            goto loc_80480F6;
        }
        else {
            (int v17, int v108, int v14, int v20) = cpuid(0, v19);
            --ptr2;
            *ptr2 = v17;
            --ptr2;
            *ptr2 = &loc_80480CB;
            int v82 = /*BAD_CALL!*/ sub_8048142(v14, v20);
            int v83 = 0x80000000;
            (int v27, v48, v19, int v21) = cpuid(0x80000000, v19);
            char v84 = v27 ? 0: 1;
            char v85 = v27 < 0;
            char v86 = __parity__((unsigned char)v27);
            char v87 = 0;
            char v88 = 0;
            if(v85) {
                --ptr2;
                *ptr2 = &loc_80480DB;
                int v89 = /*BAD_CALL!*/ sub_8048142(v19, v21);
            }
            v1 = *ptr2;
            ++ptr2;
            char v90 = v1 == 2;
            char v91 = (int)v1 < 2;
            char v92 = __parity__((unsigned char)v1 - 2);
            v0 = v1 < 2;
            char v93 = (((v1 - 2) ^ v1) & (v1 ^ 0x2)) < 0;
            v75 = (((v1 - 2) ^ (v1 ^ 0x2)) >>> 4) & 0x1;
        }
        if(!v0) {
            v1 = (unsigned int)2 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            (int v15, v48, v19, v21) = cpuid(v1, v19);
            v9 = (unsigned char)v15;
            v15 = (unsigned int)((unsigned char)v15 + 0xff) | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
            char v94 = (unsigned char)v15 ? 0: 1;
            char v95 = (v15 >>> 7) & 0x1;
            char v96 = __parity__((unsigned char)v15);
            v75 = ((~(unsigned char)v15 ^ ~v9) >>> 4) & 0x1;
            char v97 = (((unsigned char)v15 ^ v9) & v9) < 0;
            if(!v94 && v95 == v97) {
                int v98 = (unsigned int)(unsigned char)v15;
                int v99 = v98 | 0x10000000;
                char v100 = v99 ? 0: 1;
                char v101 = v99 < 0;
                char v102 = __parity__((unsigned char)v99);
                char v103 = 0;
                char v104 = 0;
                --ptr2;
                *ptr2 = &loc_80480F6;
                int v105 = /*BAD_CALL!*/ sub_8048142(v19, v21);
            }
        }
    }
    else {
        int v106 = "no \'cpuid\'\n";
        --ptr2;
        *ptr2 = &loc_8048105;
        int v107 = /*BAD_CALL!*/ sub_80481C8("no \'cpuid\'\n", v21);
    }
loc_80480F6:
    v8 = 0;
    v7 = 1;
    v6 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 0;
    --ptr2;
    *ptr2 = 1;
    v2 = *ptr2;
    ++ptr2;
    interrupt(128);
}

int sub_8048060() {
    char v0;
    unsigned char* ptr0;
    int v1;
    int result = v1;
    int v2 = -1;
    do {
        v0 = *ptr0 == 0;
        ++ptr0;
        --v2;
    }
    while(~v0 && v2 == 0);
    if(*(int*)(ptr0 - 5) == 0x64656570 && *(int*)(ptr0 - 9) == 1937076323) {
        result = 0;
    }
    return result;
}

int sub_8048142(int param0, int param1) {
    char v0;
    short v1;
    short v2;
    *(int*)&v0 = (unsigned int)v2 | ((unsigned int)v1 << 16);
    int v3 = (unsigned int)0 | ((unsigned int)v1 << 16);
    do {
        sub_8048157(param0, param1);
        ++v3;
        v0 += 0xff;
    }
    while(v0 >= 0);
    return *(int*)&v0;
}

int sub_8048157(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int v5;
    short v6;
    int v7;
    int v8 = v1;
    char v9 = (__rol__(v1, 8)) & 0x1;
    char v10 = v3;
    int v11 = (unsigned int)((unsigned char)((__rol__(v1, 8)) >>> 8) | (unsigned char)__rol__(v1, 8)) | ((unsigned int)(((__rol__(v1, 8)) >>> 8) & 0xffffff) << 8);
    char v12 = (unsigned char)((__rol__(v1, 8)) >>> 8) | (unsigned char)__rol__(v1, 8) ? 0: 1;
    char v13 = (v11 >>> 7) & 0x1;
    char v14 = __parity__((unsigned char)v11);
    char v15 = 0;
    char v16 = 0;
    int v17 = sub_8048203(param0, param1);
    int v18 = v8;
    int v19 = v18 & 0xefffffff;
    char v20 = v19 ? 0: 1;
    char v21 = v19 < 0;
    char v22 = __parity__((unsigned char)v19);
    char v23 = 0;
    char v24 = 0;
    (int v58, int v51, int v4, int v7) = cpuid(v19, param0);
    int v25 = sub_80481DE(v4, v7);
    int v26 = v25;
    int v27 = v26;
    int v28 = sub_80481DE(param0, param1);
    int v29 = v28;
    int v30 = v29;
    int v31 = sub_80481DE(v30, param1);
    int v32 = v31;
    int v33 = v32;
    int v34 = sub_80481DE(param0, v33);
    char v35 = *(char*)(v5 + 11) ? 0: 1;
    char v36 = *(char*)(v5 + 11) < 0;
    if(!v35 && v36 == 0) {
        char v37 = v6 ? 0: 1;
        char v38 = v6 < 0;
        char v39 = __parity__((unsigned char)v6);
        char v40 = 0;
        v52 = 0;
        if(v37) {
            int v41 = v34;
            int v42 = param1;
            v0 = v41;
        }
        v2 = param0;
        unsigned int v43 = (unsigned int)(v5 + 1);
        *(int*)v43 = 10016;
        int v44 = sub_80481C8(v43, v0);
        v32 = param0;
        unsigned int v45 = (unsigned int)(param0 - 1);
        v35 = v45 ? 0: 1;
        v36 = v45 >= 0x80000000;
        v54 = __parity__((unsigned char)v45);
        char v46 = ((~v45 ^ ~v32) >>> 4) & 0x1;
        v53 = ((v45 ^ v32) & v32) < 0;
        *(int*)v45 = v27;
        int v47 = sub_80481C8(v45, param1);
        *(int*)param0 = v2;
        int v48 = sub_80481C8((unsigned int)param0, param1);
        *(int*)param0 = param1;
        int v49 = sub_80481C8((unsigned int)param0, param1);
        *(int*)param0 = v49;
        int v50 = sub_80481C8((unsigned int)param0, param1);
        *(short*)param0 = 39;
        ptr0 = &v2;
        v34 = sub_80481C8((unsigned int)param0, param1);
    }
}

int sub_80481C8(unsigned int param0, int param1) {
    char v0;
    int v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int* ptr0 = &v0;
    int v6 = v4;
    unsigned int v7 = param0;
    int v8 = param1;
    int v9 = v5;
    int* ptr1 = &v0;
    unsigned int v10 = param0;
    unsigned int v11 = param0;
    unsigned char* ptr2 = (unsigned char*)(v10 - 1);
    char v12 = ptr2 ? 0: 1;
    char v13 = (int)ptr2 < 0;
    char v14 = __parity__((unsigned char)ptr2);
    char v15 = (((unsigned char*)~(int)ptr2 ^ ~v11) >>> 4) & 0x1;
    char v16 = (int)(int*)((int)(int*)((int)ptr2 ^ v11) & v11) < 0;
    do {
        ++ptr2;
        char v17 = *ptr2 == 9;
        v3 = *ptr2 < 9;
        char v18 = __parity__(*ptr2 - 9);
        char v19 = *ptr2 < 9;
        v2 = (((*ptr2 - 9) ^ *ptr2) & (*ptr2 ^ 0x9)) < 0;
        char v20 = (((*ptr2 - 9) ^ (*ptr2 ^ 0x9)) >>> 4) & 0x1;
    }
    while(v3 == v2);
    unsigned char* ptr3 = ptr2;
    int* ptr4 = (int*)((int)ptr2 - param0);
    char v21 = ptr4 ? 0: 1;
    char v22 = (int)ptr4 < 0;
    char v23 = __parity__((unsigned char)ptr4);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 ^ (int)ptr3) ^ (int)ptr4) >>> 4) & 0x1);
    char v25 = param0 > (unsigned int)ptr3;
    char v26 = (int)(int*)((int)(int*)(param0 ^ (int)ptr3) & (int)(int*)((int)ptr4 ^ (int)ptr3)) < 0;
    int v27 = 1;
    int v28 = 4;
    int v29 = 4;
    int* ptr5 = &v1;
    interrupt(128);
}

int sub_80481DE(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char v5;
    char v6;
    char v7;
    int* ptr0 = &v0;
    int v8 = v2;
    int v9 = param0;
    int v10 = param1;
    int v11 = v3;
    int* ptr1 = &v0;
    int v12 = v2;
    int v13 = 8;
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    unsigned char* ptr2 = (unsigned char*)(v4 + 8);
    *ptr2 = 32;
    int v20 = 8;
    do {
        unsigned char v21 = (unsigned char)((unsigned char)v12 & 0xf);
        char v22 = (unsigned char)v12 & 0xf ? 0: 1;
        char v23 = v21 >= 128;
        char v24 = __parity__(v21);
        char v25 = 0;
        char v26 = 0;
        int v27 = v12;
        v12 >>>= 4;
        char v28 = (v27 >>> 3) & 0x1;
        char v29 = 0;
        char v30 = v12 ? 0: 1;
        char v31 = v12 < 0;
        char v32 = __parity__((unsigned char)v12);
        --ptr2;
        char v33 = v21 == 10;
        char v34 = (char)v21 < 10;
        char v35 = __parity__(v21 - 10);
        char v36 = v21 < 10;
        char v37 = (((v21 - 10) ^ v21) & (v21 ^ 0xa)) < 0;
        char v38 = (((v21 - 10) ^ (v21 ^ 0xa)) >>> 4) & 0x1;
        unsigned char v39 = v21;
        v21 -= (unsigned char)v36 + 105;
        char v40 = v21 ? 0: 1;
        char v41 = v21 >= 128;
        char v42 = __parity__(v21);
        char v43 = (((v39 ^ 0x69) ^ v21) >>> 4) & 0x1;
        char v44 = v39 < 105;
        char v45 = (char)((v21 ^ v39) & (v39 ^ 0x69)) < 0;
        int v46 = (unsigned int)v21;
        int v47 = (unsigned int)v21 | ((unsigned int)v44 << 8) | ((unsigned int)((v46 >>> 9) & 0x7fffff) << 9);
        if((v21 & 0xf) <= 9 && !v43) {
            char v48 = 0;
            char v49 = 0;
        }
        char v50 = 1;
        if(!~((unsigned char)v47 > 0x99 || ((v47 >>> 8) & 0x1))) {
            v21 -= 96;
        }
        char v51 = 1;
        *ptr2 = v21;
        int v52 = v13;
        --v13;
        v6 = v13 ? 0: 1;
        v5 = v13 < 0;
        char v53 = __parity__((unsigned char)v13);
        char v54 = ((~v13 ^ ~v52) >>> 4) & 0x1;
        v7 = ((v13 ^ v52) & v52) < 0;
    }
    while(!v6 && v5 == v7);
    int v55 = v20;
    int v56 = v20;
    int v57 = v55 + 1;
    char v58 = v57 ? 0: 1;
    char v59 = v57 < 0;
    char v60 = __parity__((unsigned char)v57);
    char v61 = (((v56 ^ 0x1) ^ v57) >>> 4) & 0x1;
    char v62 = ((v57 ^ v56) & ~(v56 ^ 0x1)) < 0;
    int v63 = 1;
    v20 = 4;
    int v64 = 4;
    int* ptr3 = &v1;
    interrupt(128);
}

int sub_8048203(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    char v4;
    char v5;
    int v6;
    char v7;
    int* ptr0 = &v0;
    int v8 = v2;
    int v9 = param0;
    int v10 = param1;
    int v11 = v3;
    int* ptr1 = &v0;
    int v12 = v2;
    int v13 = 2;
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    unsigned char* ptr2 = (unsigned char*)(v6 + 8);
    *ptr2 = 32;
    int v20 = 2;
    do {
        unsigned char v21 = (unsigned char)((unsigned char)v12 & 0xf);
        char v22 = (unsigned char)v12 & 0xf ? 0: 1;
        char v23 = v21 >= 128;
        char v24 = __parity__(v21);
        char v25 = 0;
        char v26 = 0;
        int v27 = v12;
        v12 >>>= 4;
        char v28 = (v27 >>> 3) & 0x1;
        char v29 = 0;
        char v30 = v12 ? 0: 1;
        char v31 = v12 < 0;
        char v32 = __parity__((unsigned char)v12);
        --ptr2;
        char v33 = v21 == 10;
        char v34 = (char)v21 < 10;
        char v35 = __parity__(v21 - 10);
        char v36 = v21 < 10;
        char v37 = (((v21 - 10) ^ v21) & (v21 ^ 0xa)) < 0;
        char v38 = (((v21 - 10) ^ (v21 ^ 0xa)) >>> 4) & 0x1;
        unsigned char v39 = v21;
        v21 -= (unsigned char)v36 + 105;
        char v40 = v21 ? 0: 1;
        char v41 = v21 >= 128;
        char v42 = __parity__(v21);
        char v43 = (((v39 ^ 0x69) ^ v21) >>> 4) & 0x1;
        char v44 = v39 < 105;
        char v45 = (char)((v21 ^ v39) & (v39 ^ 0x69)) < 0;
        int v46 = (unsigned int)v21;
        int v47 = (unsigned int)v21 | ((unsigned int)v44 << 8) | ((unsigned int)((v46 >>> 9) & 0x7fffff) << 9);
        if((v21 & 0xf) <= 9 && !v43) {
            char v48 = 0;
            char v49 = 0;
        }
        char v50 = 1;
        if(!~((unsigned char)v47 > 0x99 || ((v47 >>> 8) & 0x1))) {
            v21 -= 96;
        }
        char v51 = 1;
        *ptr2 = v21;
        int v52 = v13;
        --v13;
        v5 = v13 ? 0: 1;
        v4 = v13 < 0;
        char v53 = __parity__((unsigned char)v13);
        char v54 = ((~v13 ^ ~v52) >>> 4) & 0x1;
        v7 = ((v13 ^ v52) & v52) < 0;
    }
    while(!v5 && v4 == v7);
    int v55 = v20;
    int v56 = v20;
    int v57 = v55 + 1;
    char v58 = v57 ? 0: 1;
    char v59 = v57 < 0;
    char v60 = __parity__((unsigned char)v57);
    char v61 = (((v56 ^ 0x1) ^ v57) >>> 4) & 0x1;
    char v62 = ((v57 ^ v56) & ~(v56 ^ 0x1)) < 0;
    int v63 = 1;
    v20 = 4;
    int v64 = 4;
    int* ptr3 = &v1;
    interrupt(128);
}
