
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    int v0;
    int v1;
    char v2;
    int v3 = v0;
    int v4 = param0;
    unsigned int* ptr0 = &param1;
    int v5 = v4;
    unsigned char* ptr1 = (unsigned char*)(v4 - 1);
    char v6 = ptr1 ? 0: 1;
    char v7 = (int)ptr1 < 0;
    char v8 = __parity__((unsigned char)ptr1);
    char v9 = (((unsigned char*)~(int)ptr1 ^ ~v5) >>> 4) & 0x1;
    char v10 = (int)(int*)((int)(int*)((int)ptr1 ^ v5) & v5) < 0;
    do {
        ++ptr1;
        v2 = *ptr1 ? 0: 1;
        char v11 = *ptr1 < 0;
        char v12 = __parity__(*ptr1);
        char v13 = *ptr1 < 0;
        char v14 = 0;
        char v15 = 0;
    }
    while(!v2);
    char v16 = *(char*)(ptr1 - 2) == 120;
    char v17 = *(char*)(ptr1 - 2) < 120;
    char v18 = __parity__(*(char*)(ptr1 - 2) - 120);
    char v19 = *(ptr1 - 2) < 120;
    char v20 = (((*(char*)(ptr1 - 2) - 120) ^ *(char*)(ptr1 - 2)) & (*(char*)(ptr1 - 2) ^ 0x78)) < 0;
    char v21 = (((*(char*)(ptr1 - 2) - 120) ^ (*(char*)(ptr1 - 2) ^ 0x78)) >>> 4) & 0x1;
    if(v16) {
        gvar_804881C = 2;
    }
    while(1) {
        int v22 = v3;
        --v3;
        char v23 = v3 ? 0: 1;
        char v24 = v3 < 0;
        char v25 = __parity__((unsigned char)v3);
        char v26 = ((~v3 ^ ~v22) >>> 4) & 0x1;
        char v27 = ((v3 ^ v22) & v22) < 0;
        if(v23) {
            break;
        }
        else {
            unsigned short* ptr2 = *ptr0;
            ++ptr0;
            char v28 = *ptr2 == 28461;
            char v29 = *ptr2 < 28461;
            char v30 = __parity__((unsigned char)*ptr2 - 45);
            char v31 = *ptr2 < 28461;
            char v32 = (((*ptr2 - 28461) ^ *ptr2) & (*ptr2 ^ 0x6f2d)) < 0;
            char v33 = (((*ptr2 - 28461) ^ (*ptr2 ^ 0x6f2d)) >>> 4) & 0x1;
            if(!v28) {
                char v34 = *ptr2 == 25389;
                char v35 = *ptr2 < 25389;
                char v36 = __parity__((unsigned char)*ptr2 - 45);
                char v37 = *ptr2 < 25389;
                char v38 = (((*ptr2 - 25389) ^ *ptr2) & (*ptr2 ^ 0x632d)) < 0;
                char v39 = (((*ptr2 - 25389) ^ (*ptr2 ^ 0x632d)) >>> 4) & 0x1;
                if(!v34) {
                    char v40 = *ptr2 == 30765;
                    char v41 = *ptr2 < 30765;
                    char v42 = __parity__((unsigned char)*ptr2 - 45);
                    char v43 = *ptr2 < 30765;
                    char v44 = (((*ptr2 - 30765) ^ *ptr2) & (*ptr2 ^ 0x782d)) < 0;
                    char v45 = (((*ptr2 - 30765) ^ (*ptr2 ^ 0x782d)) >>> 4) & 0x1;
                    if(!v40) {
                        int v46 = 0;
                        char v47 = 1;
                        char v48 = 0;
                        char v49 = 1;
                        char v50 = 0;
                        char v51 = 0;
                        --ptr0;
                        *ptr0 = 5;
                        int v52 = *ptr0;
                        ++ptr0;
                        interrupt(128);
                    }
                    gvar_804881C = 2;
                }
                else {
                    gvar_804881C = 1;
                }
            }
            else {
                gvar_804881C = 0;
            }
        }
    }
    char v53 = gvar_804881C == 1;
    if(!v53) {
        char v54 = gvar_804881C ? 0: 1;
        if(v54) {
            while(1) {
                --ptr0;
                *ptr0 = &loc_80480CB;
                /*BAD_CALL!*/ sub_80480F8();
                --ptr0;
                *ptr0 = &loc_80480D0;
                /*BAD_CALL!*/ sub_8048281();
            }
        }
        while(1) {
            --ptr0;
            *ptr0 = &loc_80480D7;
            /*BAD_CALL!*/ sub_80480F8();
            --ptr0;
            *ptr0 = &loc_80480DC;
            /*BAD_CALL!*/ sub_80482F0();
        }
    }
    while(1) {
        --ptr0;
        *ptr0 = &loc_80480B6;
        /*BAD_CALL!*/ sub_80480F8();
        --ptr0;
        *ptr0 = &loc_80480BB;
        /*BAD_CALL!*/ sub_804817C(v1);
    }
}

int sub_80480F8() {
    char v0;
    int v1 = &gvar_80483CB;
    int v2 = 0x400;
    int v3 = *(int*)&aFile_access_err[18];
    int v4 = 3;
    int v5 = 3;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_804817C(int param0) {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    unsigned int v7 = gvar_80483BF;
    unsigned int v8 = gvar_80483BF;
    char v9 = v7 ? 0: 1;
    char v10 = v7 >= 0x80000000;
    char v11 = __parity__((unsigned char)v7);
    char v12 = ((v7 ^ v8) >>> 4) & 0x1;
    char v13 = v8 >= 0;
    char v14 = (int)((v7 ^ v8) & ~v8) < 0;
    unsigned int v15 = v7;
    int v16 = (unsigned int)((unsigned char)v7 & 0xf) | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    char v17 = (unsigned char)v7 & 0xf ? 0: 1;
    char v18 = (v16 >>> 7) & 0x1;
    char v19 = __parity__((unsigned char)v16);
    char v20 = 0;
    char v21 = 0;
    if(v17) {
        unsigned int v22 = v15;
        unsigned int v23 = (unsigned int)sub_8048264((unsigned int)21 | ((unsigned int)((param0 >>> 8) & 0xffffff) << 8));
        v15 = v23;
    }
    int* ptr0 = &v0;
    int v24 = (unsigned int)*(char*)&gvar_80483CB | ((unsigned int)((v15 >>> 8) & 0xffffff) << 8);
    char v25 = *(char*)&gvar_80483CB == 32;
    char v26 = (unsigned char)v24 < 32;
    char v27 = __parity__((unsigned char)v24 - 32);
    char v28 = (unsigned char)v24 < 32;
    char v29 = ((((unsigned char)v24 - 32) ^ (unsigned char)v24) & ((unsigned char)v24 ^ 0x20)) < 0;
    char v30 = ((((unsigned char)v24 - 32) ^ ((unsigned char)v24 ^ 0x20)) >>> 4) & 0x1;
    jump v26 == v29 ? &sub_804819E: &sub_80481EB;
}

int sub_804819E() {
    unsigned char v0;
    if((char)v0 <= 126) {
        sub_8048138();
        int v1 = sub_8048138();
        int v2 = sub_8048138();
        int v3 = /*BAD_CALL!*/ sub_8048138();
    }
    sub_8048138();
    sub_8048138();
    sub_8048138();
    return sub_80481BE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80482C0(int param0) {
    int result;
    int v0;
    if(((gvar_80483BF + v0) & 0xf)) {
        result = sub_80482A6(param0);
    }
    else {
        sub_8048138();
        result = sub_8048290(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804832D(int param0) {
    int result;
    int v0;
    if(((gvar_80483BF + v0) & 0xf)) {
        result = sub_8048315(param0);
    }
    else {
        sub_8048138();
        result = sub_80482FF(param0);
    }
    return result;
}
