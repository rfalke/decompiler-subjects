
char start(int param0, int param1) {
    char v0;
    unsigned char* ptr0;
    unsigned char* ptr1;
    char v1;
    unsigned int v2;
    unsigned int v3 = v2;
    unsigned int* ptr2 = &param0;
    char v4 = v3 == 2;
    char v5 = (int)v3 < 2;
    char v6 = __parity__((unsigned char)v3 - 2);
    char v7 = v3 < 2;
    char v8 = (((v3 - 2) ^ v3) & (v3 ^ 0x2)) < 0;
    char v9 = (((v3 - 2) ^ (v3 ^ 0x2)) >>> 4) & 0x1;
    if(!v4 && v5 == v8) {
        int v10 = param0;
        ptr2 = &param1;
        unsigned char* ptr3 = NULL;
        char v11 = 1;
        char v12 = 0;
        char v13 = 1;
        char v14 = 0;
        char v15 = 0;
        while(1) {
            unsigned char* ptr4 = *ptr2;
            ++ptr2;
            unsigned char* ptr5 = ptr4;
            char v16 = ptr5 ? 0: 1;
            char v17 = (int)ptr5 < 0;
            char v18 = __parity__((unsigned char)ptr5);
            char v19 = 0;
            char v20 = 0;
            if(v16) {
                break;
            }
            else {
                unsigned char v21 = *ptr5;
                unsigned char* ptr6 = ptr5 + 1;
                char v22 = v21 == 45;
                char v23 = (char)v21 < 45;
                char v24 = __parity__(v21 - 45);
                char v25 = v21 < 45;
                char v26 = (((v21 - 45) ^ v21) & (v21 ^ 0x2d)) < 0;
                char v27 = (((v21 - 45) ^ (v21 ^ 0x2d)) >>> 4) & 0x1;
                if(!v22) {
                    goto loc_80480C9;
                }
                else {
                    v21 = *ptr6;
                    ptr5 = ptr6 + 1;
                    char v28 = v21 ? 0: 1;
                    char v29 = v21 >= 128;
                    char v30 = __parity__(v21);
                    char v31 = 0;
                    char v32 = 0;
                    if(!v28) {
                        char v33 = v21 == 115;
                        char v34 = (char)v21 < 115;
                        char v35 = __parity__(v21 - 115);
                        char v36 = v21 < 115;
                        char v37 = (((v21 - 115) ^ v21) & (v21 ^ 0x73)) < 0;
                        char v38 = (((v21 - 115) ^ (v21 ^ 0x73)) >>> 4) & 0x1;
                        if(!v33) {
                            v4 = v21 == 108;
                            v5 = (char)v21 < 108;
                            v6 = __parity__(v21 - 108);
                            v7 = v21 < 108;
                            v8 = (((v21 - 108) ^ v21) & (v21 ^ 0x6c)) < 0;
                            v9 = (((v21 - 108) ^ (v21 ^ 0x6c)) >>> 4) & 0x1;
                            if(!v4) {
                                goto loc_80481F4;
                            }
                            else {
                                gvar_80482AA |= 16;
                                char v39 = gvar_80482AA ? 0: 1;
                                char v40 = gvar_80482AA >= 0x80000000;
                                char v41 = __parity__((unsigned char)gvar_80482AA);
                                char v42 = 0;
                                char v43 = 0;
                                continue;
                            }
                        }
                        else {
                            gvar_80482AA |= 8;
                            char v44 = gvar_80482AA ? 0: 1;
                            char v45 = gvar_80482AA >= 0x80000000;
                            char v46 = __parity__((unsigned char)gvar_80482AA);
                            char v47 = 0;
                            char v48 = 0;
                            continue;
                        }
                    }
                    else {
                        int* ptr7 = (int*)(ptr5 - 1);
                        int* ptr8 = (int*)(ptr5 - 1);
                        ptr5 = (unsigned char*)((unsigned char*)ptr7 - 1);
                        char v49 = ptr5 ? 0: 1;
                        char v50 = (int)ptr5 < 0;
                        char v51 = __parity__((unsigned char)ptr5);
                        char v52 = (((unsigned char*)~(int)ptr5 ^ (int*)~(int)ptr8) >>> 4) & 0x1;
                        char v53 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr8) & (int)ptr8) < 0;
                        *(unsigned int*)((int)(int*)((int)ptr3 * 4) + (int)&gvar_8048286) = ptr5;
                        v1 = ptr3 ? 0: 1;
                        char v54 = (int)ptr3 < 0;
                        char v55 = __parity__((unsigned char)ptr3);
                        char v56 = 0;
                        char v57 = 0;
                    }
                }
                if(!v1) {
                    break;
                }
                else {
                    ptr1 = ptr3;
                    ++ptr3;
                    char v58 = ptr3 ? 0: 1;
                    char v59 = (int)ptr3 < 0;
                    char v60 = __parity__((unsigned char)ptr3);
                    char v61 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                    char v62 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
                    continue;
                loc_80480C9:
                    ptr1 = ptr6;
                    ptr5 = ptr6 - 1;
                    char v63 = ptr5 ? 0: 1;
                    char v64 = (int)ptr5 < 0;
                    char v65 = __parity__((unsigned char)ptr5);
                    v9 = (((unsigned char*)~(int)ptr5 ^ (unsigned char*)~(int)ptr1) >>> 4) & 0x1;
                    char v66 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr1) & (int)ptr1) < 0;
                    *(unsigned int*)((int)(int*)((int)ptr3 * 4) + (int)&gvar_8048286) = ptr5;
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                    v6 = 1;
                    v8 = 0;
                    v7 = 0;
                    ptr0 = ptr5;
                    --ptr2;
                    *ptr2 = 5;
                    v0 = *ptr2;
                    ++ptr2;
                    interrupt(128);
                }
            }
        }
        gvar_80482A6 = 134513838;
        int v67 = 0;
        char v68 = 1;
        char v69 = 0;
        char v70 = 1;
        char v71 = 0;
        char v72 = 0;
        int v73 = 0;
        int v74 = -1;
        char v75 = 0;
        char v76 = 1;
        char v77 = 1;
        char v78 = 1;
        char v79 = 0;
        ptr1 = (unsigned char*)0xFFFFFFFF;
        ptr3 = NULL;
        char v80 = 1;
        char v81 = 0;
        char v82 = 1;
        v9 = 1;
        char v83 = 0;
        --ptr2;
        *ptr2 = 2;
        int v84 = 2;
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v6 = 1;
        v8 = 0;
        v7 = 0;
        ptr0 = gvar_804828E;
        *ptr2 = 19;
        v0 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
loc_80481F4:
    --ptr2;
    *ptr2 = 2;
    ptr0 = *ptr2;
    ++ptr2;
    --ptr2;
    *ptr2 = 1;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}

int sub_804804C() {
    char* ptr0;
    int v0;
    int v1 = 16;
    int v2 = 16;
    char* ptr1 = ptr0;
    do {
        *(char*)((int*)(v2 + (int)ptr0) + 4) = (unsigned char)v0 % 10 + 48;
        --v2;
        v0 /= 10;
    }
    while(v0);
    int v3 = 0 - (unsigned int)(v2 - 16);
    char* ptr2 = (char*)((char*)(v2 + (int)ptr0) + 17);
    while(v3 != 0) {
        *ptr1 = *ptr2;
        ++ptr2;
        ++ptr1;
        --v3;
    }
    return 0;
}

char sub_8048070() {
    char* ptr0;
    char* ptr1;
    char v0 = *ptr0;
    char* ptr2 = ptr0 + 1;
    do {
        *ptr1 = v0;
        ++ptr1;
        v0 = *ptr2;
        ++ptr2;
    }
    while(v0);
    *ptr1 = 32;
    return 32;
}
