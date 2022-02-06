
int start(int param0, char* param1, char* param2) {
    int* ptr0;
    char* ptr1;
    int v0;
    char* ptr2;
    char v1;
    char v2;
    char v3;
    unsigned char v4 = (unsigned char)ptr2;
    int v5 = (unsigned int)(int*)((int)(int*)((int)ptr2 >>> 8) & 0xffffff);
    char v6 = v4 == 3;
    char v7 = (char)v4 < 3;
    char v8 = __parity__(v4 - 3);
    char v9 = v4 < 3;
    char v10 = (((v4 - 3) ^ v4) & (v4 ^ 0x3)) < 0;
    char v11 = (((v4 - 3) ^ (v4 ^ 0x3)) >>> 4) & 0x1;
    if((v9 || v6)) {
        int v12 = 33;
        int v13 = &gvar_804804D;
        v0 = 1;
        ptr2 = (char*)0x4;
        ptr1 = (char*)0x4;
        ptr0 = &param0;
        interrupt(128);
    }
    int v14 = param0;
    char* ptr3 = param1;
    int v15 = &gvar_8048195;
    int v16 = 0;
    unsigned int v17 = 0;
    int v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 1;
    char v22 = 0;
    char v23 = 0;
    do {
        int v24 = 0;
        char v25 = 1;
        char v26 = 0;
        char v27 = 1;
        char v28 = 0;
        char v29 = 0;
        while(1) {
            v16 = (unsigned int)*ptr3 | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
            ++ptr3;
            ++v18;
            unsigned char v30 = (unsigned char)v16;
            v16 = (unsigned int)((unsigned char)v16 - 48) | ((unsigned int)((v16 >>> 8) & 0xffffff) << 8);
            char v31 = (unsigned char)v16 ? 0: 1;
            char v32 = (v16 >>> 7) & 0x1;
            char v33 = __parity__((unsigned char)v16);
            char v34 = (((v30 ^ 0x30) ^ (unsigned char)v16) >>> 4) & 0x1;
            char v35 = v30 < 48;
            char v36 = (((unsigned char)v16 ^ v30) & (v30 ^ 0x30)) < 0;
            if(v35) {
                break;
            }
            else {
                int v37 = v24;
                int v38 = v24 * 10;
                int v39 = v24 * 10;
                v24 = v16 + v38;
                char v40 = v24 ? 0: 1;
                char v41 = v24 < 0;
                char v42 = __parity__((unsigned char)v24);
                char v43 = (((v16 ^ v39) ^ v24) >>> 4) & 0x1;
                char v44 = __carry__(v16, v39);
                char v45 = ((v24 ^ v39) & ~(v16 ^ v39)) < 0;
            }
        }
        *(unsigned char*)((int)&gvar_8048199 + v17) = (unsigned char)v24;
        ++v17;
        v3 = v17 == 4;
        char v46 = (int)v17 < 4;
        char v47 = __parity__((unsigned char)v17 - 4);
        char v48 = v17 < 4;
        char v49 = (((v17 - 4) ^ v17) & (v17 ^ 0x4)) < 0;
        char v50 = (((v17 - 4) ^ (v17 ^ 0x4)) >>> 4) & 0x1;
    }
    while(!v3);
    gvar_8048195 = 2;
    char* ptr4 = param2;
    int v51 = 0;
    unsigned int v52 = 0;
    char v53 = 1;
    char v54 = 0;
    char v55 = 1;
    char v56 = 0;
    char v57 = 0;
    while(1) {
        v51 = (unsigned int)*ptr4 | ((unsigned int)((v51 >>> 8) & 0xffffff) << 8);
        ++ptr4;
        char v58 = (unsigned char)v51 ? 0: 1;
        char v59 = (unsigned char)v51 < 0;
        char v60 = __parity__((unsigned char)v51);
        char v61 = 0;
        char v62 = 0;
        if(v58) {
            break;
        }
        else {
            v51 = (unsigned int)((unsigned char)v51 - 48) | ((unsigned int)((v51 >>> 8) & 0xffffff) << 8);
            unsigned int v63 = v52;
            int v64 = v52 * 10;
            int v65 = v52 * 10;
            v52 = (unsigned int)(v51 + v64);
            char v66 = v52 ? 0: 1;
            char v67 = v52 >= 0x80000000;
            char v68 = __parity__((unsigned char)v52);
            char v69 = (((v51 ^ v65) ^ v52) >>> 4) & 0x1;
            char v70 = __carry__(v51, v65);
            char v71 = ((v52 ^ v65) & ~(v51 ^ v65)) < 0;
        }
    }
    int v72 = v51;
    unsigned int v73 = v52;
    int v74 = v72;
    gvar_80481AB = v73;
    int v75 = 0;
    int v76 = 0;
    char v77 = 1;
    char v78 = 0;
    char v79 = 1;
    char v80 = 0;
    char v81 = 0;
    while(1) {
        v75 = (unsigned int)*ptr4 | ((unsigned int)((v75 >>> 8) & 0xffffff) << 8);
        ++ptr4;
        char v82 = (unsigned char)v75 ? 0: 1;
        char v83 = (unsigned char)v75 < 0;
        char v84 = __parity__((unsigned char)v75);
        char v85 = 0;
        char v86 = 0;
        if(v82) {
            break;
        }
        else {
            v75 = (unsigned int)((unsigned char)v75 - 48) | ((unsigned int)((v75 >>> 8) & 0xffffff) << 8);
            int v87 = v76;
            int v88 = v76 * 10;
            int v89 = v76 * 10;
            v76 = v75 + v88;
            char v90 = v76 ? 0: 1;
            char v91 = v76 < 0;
            char v92 = __parity__((unsigned char)v76);
            char v93 = (((v75 ^ v89) ^ v76) >>> 4) & 0x1;
            char v94 = __carry__(v75, v89);
            char v95 = ((v76 ^ v89) & ~(v75 ^ v89)) < 0;
        }
    }
    int v96 = v75;
    int v97 = v76;
    int v98 = v96;
    *(int*)((char*)&gvar_80481AB + 2) = v97;
    char v99 = 1;
    char v100 = 0;
    char v101 = 1;
    char v102 = 0;
    char v103 = 0;
    unsigned short v104 = *(short*)&gvar_80481AB;
    short v105 = 0;
    do {
        int v106 = sub_8048105();
        ++v104;
        v1 = *(short*)((char*)&gvar_80481AB + 2) == v104;
        char v107 = *(short*)((char*)&gvar_80481AB + 2) > (short)v104;
        char v108 = __parity__((unsigned char)v104 - (unsigned char)*(short*)((char*)&gvar_80481AB + 2));
        char v109 = *(short*)((char*)&gvar_80481AB + 2) > v104;
        char v110 = (((v104 - *(short*)((char*)&gvar_80481AB + 2)) ^ v104) & (*(short*)((char*)&gvar_80481AB + 2) ^ v104)) < 0;
        v11 = (((v104 - *(short*)((char*)&gvar_80481AB + 2)) ^ (*(short*)((char*)&gvar_80481AB + 2) ^ v104)) >>> 4) & 0x1;
    }
    while(!v1);
    v0 = 0;
    v6 = 1;
    v7 = 0;
    v8 = 1;
    v10 = 0;
    v9 = 0;
    param2 = (char*)0x1;
    ptr1 = (char*)0x1;
    ptr0 = &v2;
    interrupt(128);
}

int sub_8048105() {
    int v0 = 0;
    int v1 = 1;
    int v2 = 2;
    int* ptr0 = &v2;
    int v3 = 1;
    int v4 = 102;
    int v5 = 102;
    int* ptr1 = &v2;
    interrupt(128);
}

char* sub_804817A() {
    int v0;
    char v1;
    char* ptr0;
    char* ptr1 = (unsigned int)v1 | ((unsigned int)v0 << 8);
    int v2 = 6;
    do {
        *ptr0 = 32;
        ++ptr0;
        --v2;
    }
    while(v2 == 0);
    char* ptr2 = ptr1;
    do {
        --ptr0;
        *ptr0 = (unsigned char)ptr2 % 10 + 48;
        ptr2 = (char*)((int)(unsigned int)ptr2 / 10);
    }
    while(ptr2);
    return 0;
}
