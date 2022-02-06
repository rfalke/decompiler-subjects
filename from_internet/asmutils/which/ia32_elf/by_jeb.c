
int start(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    unsigned int* ptr0;
    char v5;
    unsigned int* ptr1;
    unsigned int* ptr2;
    char v6;
    char v7;
    char v8;
    unsigned int* ptr3 = ptr2;
    unsigned int* ptr4 = ptr2;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    int v15 = 0;
    unsigned char v16 = 1;
    int v17 = 0;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    char v21 = 0;
    char v22 = 0;
    gvar_80487F5 = 1;
loc_8048057:
    do {
        ptr1 = ptr3;
        ptr3 = (unsigned int*)((char*)ptr3 + 1);
        char v23 = ptr3 ? 0: 1;
        char v24 = (int)ptr3 < 0;
        char v25 = __parity__((unsigned char)ptr3);
        v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
        char v26 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
        unsigned int* ptr5 = *(unsigned int*)((int)(int*)((int)ptr3 * 4) + (int)&param0);
        ptr0 = *(unsigned int*)((int)(int*)((int)ptr3 * 4) + (int)&param0);
        v4 = ptr0 ? 0: 1;
        v3 = (int)ptr0 < 0;
        v2 = __parity__((unsigned char)ptr0);
        v1 = 0;
        v0 = 0;
        if(v4) {
            goto loc_804809E;
        }
        else {
            char v27 = *ptr0 == 0x48544150;
            char v28 = *ptr0 < 0x48544150;
            char v29 = __parity__((unsigned char)*ptr0 - 80);
            char v30 = *ptr0 < 0x48544150;
            char v31 = (((*ptr0 - 0x48544150) ^ *ptr0) & (*ptr0 ^ 0x48544150)) < 0;
            char v32 = (((*ptr0 - 0x48544150) ^ (*ptr0 ^ 0x48544150)) >>> 4) & 0x1;
            if(!v27) {
                goto loc_8048057;
            }
            else {
                v8 = *(char*)(ptr0 + 1) == 61;
                char v33 = *(char*)(ptr0 + 1) < 61;
                char v34 = __parity__(*(char*)(ptr0 + 1) - 61);
                char v35 = *(unsigned char*)(ptr0 + 1) < 61;
                char v36 = (((*(char*)(ptr0 + 1) - 61) ^ *(char*)(ptr0 + 1)) & (*(char*)(ptr0 + 1) ^ 0x3d)) < 0;
                char v37 = (((*(char*)(ptr0 + 1) - 61) ^ (*(char*)(ptr0 + 1) ^ 0x3d)) >>> 4) & 0x1;
            }
        }
    }
    while(!v8);
    ptr3 = ptr4;
    ptr1 = ptr0;
    ptr0 = (unsigned int*)((char*)ptr0 + 5);
    char v38 = ptr0 ? 0: 1;
    char v39 = (int)ptr0 < 0;
    char v40 = __parity__((unsigned char)ptr0);
    v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x5) ^ (int)ptr0) >>> 4) & 0x1);
    char v41 = (unsigned int)ptr1 >= 0xfffffffb;
    char v42 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x5)) < 0;
    unsigned int* ptr6 = (unsigned int*)&gvar_80482ED;
    char v43 = 64;
alab1:
    do {
        while(1) {
            v16 = *(unsigned char*)ptr0;
            v4 = *(char*)ptr0 ? 0: 1;
            v3 = v16 >= 128;
            v2 = __parity__(v16);
            v1 = 0;
            v0 = 0;
            if(v4) {
                break alab1;
            }
            else {
                char v44 = v16 == 58;
                char v45 = (char)v16 < 58;
                char v46 = __parity__(v16 - 58);
                char v47 = v16 < 58;
                char v48 = (((v16 - 58) ^ v16) & (v16 ^ 0x3a)) < 0;
                char v49 = (((v16 - 58) ^ (v16 ^ 0x3a)) >>> 4) & 0x1;
                if(v44) {
                    ptr1 = ptr0;
                    ptr0 = (unsigned int*)((char*)ptr0 + 1);
                    char v50 = ptr0 ? 0: 1;
                    char v51 = (int)ptr0 < 0;
                    char v52 = __parity__((unsigned char)ptr0);
                    v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                    char v53 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
                }
                else {
                    *ptr6 = ptr0;
                    unsigned int* ptr7 = ptr6;
                    ++ptr6;
                    char v54 = ptr6 ? 0: 1;
                    char v55 = (int)ptr6 < 0;
                    char v56 = __parity__((unsigned char)ptr6);
                    char v57 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                    char v58 = (unsigned int)ptr7 >= 0xfffffffc;
                    char v59 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x4)) < 0;
                    do {
                        ptr1 = ptr0;
                        ptr0 = (unsigned int*)((char*)ptr0 + 1);
                        char v60 = ptr0 ? 0: 1;
                        char v61 = (int)ptr0 < 0;
                        char v62 = __parity__((unsigned char)ptr0);
                        v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 ^ 0x1) ^ (int)ptr0) >>> 4) & 0x1);
                        char v63 = (int)(int*)((int)(int*)((int)ptr0 ^ (int)ptr1) & (int*)~(int)(int*)((int)ptr1 ^ 0x1)) < 0;
                        v16 = *(unsigned char*)ptr0;
                        v4 = *(char*)ptr0 ? 0: 1;
                        v3 = v16 >= 128;
                        v2 = __parity__(v16);
                        v1 = 0;
                        v0 = 0;
                        if(v4) {
                            break alab1;
                        }
                        else {
                            v6 = v16 == 58;
                            char v64 = (char)v16 < 58;
                            char v65 = __parity__(v16 - 58);
                            v0 = v16 < 58;
                            char v66 = (((v16 - 58) ^ v16) & (v16 ^ 0x3a)) < 0;
                            char v67 = (((v16 - 58) ^ (v16 ^ 0x3a)) >>> 4) & 0x1;
                        }
                    }
                    while(!v6);
                    *(char*)ptr0 = 0;
                    ptr0 = (unsigned int*)((char*)ptr0 + 1);
                    char v68 = v43;
                    v43 += 0xff;
                    v4 = v43 ? 0: 1;
                    v3 = v43 < 0;
                    v2 = __parity__(v43);
                    v5 = ((~v43 ^ ~v68) >>> 4) & 0x1;
                    v1 = ((v43 ^ v68) & v68) < 0;
                }
            }
        }
    }
    while(!v4);
loc_804809E:
    int v69 = param0;
    param0 = 24;
    int v70 = 24;
    int* ptr8 = &v7;
    interrupt(128);
}

unsigned char sub_80480E3() {
    unsigned char v0;
    int v1 = &gvar_80482ED;
    unsigned char* ptr0 = gvar_80487F9;
    do {
        v0 = *ptr0;
        ++ptr0;
        char v2 = v0 ? 0: 1;
        char v3 = v0 >= 128;
        char v4 = __parity__(v0);
        char v5 = 0;
        char v6 = 0;
        if(v2) {
            unsigned char* ptr1 = gvar_80482ED;
            ptr0 = gvar_80482ED;
            char v7 = ptr0 ? 0: 1;
            char v8 = (int)ptr0 < 0;
            char v9 = __parity__((unsigned char)ptr0);
            char v10 = 0;
            char v11 = 0;
            jump v7 ? &sub_8048191: &sub_804810E;
        }
        else {
            char v12 = (((v0 - 47) ^ (v0 ^ 0x2f)) >>> 4) & 0x1;
        }
    }
    while(v0 != 47);
    sub_804812A();
    return 47;
}

char sub_804810E() {
    /*BAD_CALL!*/ sub_80481DA();
    gvar_80483F4 = 47;
}

int sub_804812A() {
    char v0;
    unsigned int v1 = gvar_80487F9;
    char v2 = sub_80481DA();
    int v3 = 134514685;
    int v4 = 134513653;
    int v5 = 106;
    int v6 = 106;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_8048191() {
}

char sub_80481DA() {
    char v0;
    char* ptr0;
    char* ptr1;
    do {
        v0 = *ptr0;
        ++ptr0;
        *ptr1 = v0;
        ++ptr1;
    }
    while(v0);
    return 0;
}
