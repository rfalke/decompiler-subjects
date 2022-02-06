
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, unsigned char* param1, char* param2, unsigned char* param3) {
    int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    char v5;
    unsigned char* ptr0;
    char* ptr1;
    char v6;
    int v7;
    char* ptr2 = ptr1;
    int v8 = &param0;
    char* ptr3 = ptr2;
    char* ptr4 = ptr2 - 1;
    char v9 = ptr4 ? 0: 1;
    char v10 = (int)ptr4 < 0;
    char v11 = __parity__((unsigned char)ptr4);
    char v12 = (((unsigned int)~(int)ptr4 ^ (unsigned int)~(int)ptr3) >>> 4) & 0x1;
    char v13 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int)ptr3) < 0;
    if(v9) {
        goto loc_80480A3;
    }
    else {
        gvar_80483D4 = 60000;
        int v14 = param0;
        ptr0 = param1;
        v8 = &param2;
        v5 = *ptr0 == 45;
        char v15 = *ptr0 < 45;
        char v16 = __parity__(*ptr0 - 45);
        char v17 = *ptr0 < 45;
        char v18 = (((*ptr0 - 45) ^ *ptr0) & (*ptr0 ^ 0x2d)) < 0;
        char v19 = (((*ptr0 - 45) ^ (*ptr0 ^ 0x2d)) >>> 4) & 0x1;
    }
    if(v5) {
        ptr3 = ptr4;
        char* ptr5 = ptr4 - 2;
        v9 = ptr5 ? 0: 1;
        v10 = (int)ptr5 < 0;
        v11 = __parity__((unsigned char)ptr5);
        v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x2) ^ (int)ptr5) >>> 4) & 0x1);
        v4 = (unsigned int)ptr3 < 2;
        v13 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr3) & (int)(int*)((int)ptr3 ^ 0x2)) < 0;
        if(!v4 && !v9) {
            char* ptr6 = param2;
            param2 = ptr5;
            unsigned int v20 = 0;
            int v21 = 0;
            char v22 = 1;
            char v23 = 0;
            char v24 = 1;
            char v25 = 0;
            char v26 = 0;
            while(1) {
                v21 = (unsigned int)*ptr6 | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                ++ptr6;
                unsigned char v27 = (unsigned char)v21;
                v21 = (unsigned int)((unsigned char)v21 - 48) | ((unsigned int)((v21 >>> 8) & 0xffffff) << 8);
                char v28 = (unsigned char)v21 ? 0: 1;
                char v29 = (v21 >>> 7) & 0x1;
                char v30 = __parity__((unsigned char)v21);
                char v31 = (((v27 ^ 0x30) ^ (unsigned char)v21) >>> 4) & 0x1;
                char v32 = v27 < 48;
                char v33 = (((unsigned char)v21 ^ v27) & (v27 ^ 0x30)) < 0;
                if(v32) {
                    break;
                }
                else {
                    char v34 = (unsigned char)v21 == 9;
                    char v35 = (unsigned char)v21 < 9;
                    char v36 = __parity__((unsigned char)v21 - 9);
                    char v37 = (unsigned char)v21 < 9;
                    char v38 = ((((unsigned char)v21 - 9) ^ (unsigned char)v21) & ((unsigned char)v21 ^ 0x9)) < 0;
                    char v39 = ((((unsigned char)v21 - 9) ^ ((unsigned char)v21 ^ 0x9)) >>> 4) & 0x1;
                    if(!v37 && !v34) {
                        break;
                    }
                    else {
                        unsigned int v40 = v20;
                        int v41 = v20 * 10;
                        int v42 = v20 * 10;
                        v20 = (unsigned int)(v21 + v41);
                        char v43 = v20 ? 0: 1;
                        char v44 = v20 >= 0x80000000;
                        char v45 = __parity__((unsigned char)v20);
                        char v46 = (((v21 ^ v42) ^ v20) >>> 4) & 0x1;
                        char v47 = __carry__(v21, v42);
                        char v48 = ((v20 ^ v42) & ~(v21 ^ v42)) < 0;
                    }
                }
            }
            gvar_80483D4 = v20;
            ptr4 = param2;
            ptr0 = param3;
            v8 = &v6;
        }
        else {
        loc_80480A3:
            v8 -= 4;
            *(int*)v8 = 47;
            v3 = *(int*)v8;
            v2 = &gvar_804804C;
            *(int*)v8 = 1;
            v1 = 1;
            *(int*)v8 = 4;
            v0 = *(int*)v8;
            v8 += 4;
            interrupt(128);
        }
    }
    gvar_80483CC = ptr0;
    ptr3 = ptr4;
    int* ptr7 = (int*)(ptr4 - 1);
    char v49 = ptr7 ? 0: 1;
    char v50 = (int)ptr7 < 0;
    char v51 = __parity__((unsigned char)ptr7);
    v12 = (((int*)~(int)ptr7 ^ (unsigned int)~(int)ptr3) >>> 4) & 0x1;
    char v52 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr3) & (int)ptr3) < 0;
    if(!v49) {
        gvar_80483D0 = *(unsigned int*)v8;
        v8 += 4;
    }
    unsigned int v53 = gvar_80483D0;
    unsigned int v54 = gvar_80483D0;
    v9 = v54 ? 0: 1;
    v10 = v54 >= 0x80000000;
    v11 = __parity__((unsigned char)v54);
    v13 = 0;
    v4 = 0;
    if(v9) {
        v8 -= 4;
        *(int*)v8 = &loc_804812D;
        int v55 = /*BAD_CALL!*/ sub_804835A();
        v9 = v54 ? 0: 1;
        v10 = v54 >= 0x80000000;
        v11 = __parity__((unsigned char)v54);
        v13 = 0;
        v4 = 0;
        if(v9) {
            int v56 = v55;
            v9 = v56 ? 0: 1;
            v10 = v56 < 0;
            v11 = __parity__((unsigned char)v56);
            v13 = 0;
            v4 = 0;
            if(!v9) {
                v9 = v56 == -111;
                v10 = v56 < -111;
                v11 = __parity__((unsigned char)v56 - 145);
                v4 = (unsigned int)v56 < 0xffffff91;
                v13 = (((v56 + 111) ^ v56) & (v56 ^ 0xffffff91)) < 0;
                v12 = (((v56 + 111) ^ (v56 ^ 0xffffff91)) >>> 4) & 0x1;
                if(v9) {
                    v8 -= 4;
                    *(int*)v8 = 36;
                    v3 = *(int*)v8;
                    v2 = &gvar_804807B;
                    *(int*)v8 = 1;
                    v1 = 1;
                    *(int*)v8 = 4;
                    v0 = *(int*)v8;
                    v8 += 4;
                    interrupt(128);
                }
            }
            v1 = v7;
            v8 -= 4;
            *(int*)v8 = 6;
            v0 = *(int*)v8;
            v8 += 4;
            interrupt(128);
        }
    }
    v8 -= 4;
    *(int*)v8 = &loc_8048138;
    int v57 = /*BAD_CALL!*/ sub_80482AB(v2, v3);
    int v58 = &gvar_804860C;
    v8 -= 4;
    *(int*)v8 = &loc_8048142;
    int v59 = /*BAD_CALL!*/ sub_8048289(v2, v3);
    ptr7 = (unsigned int)53 | ((unsigned int)(int*)((int)(int*)((int)ptr7 >>> 8) & 0xffffff) << 8);
    gvar_804860C = 2;
    *((char*)&gvar_804860C + 3) = (unsigned char)ptr7;
    v8 -= 4;
    *(int*)v8 = 0;
    v8 -= 4;
    *(int*)v8 = 2;
    v8 -= 4;
    *(int*)v8 = 2;
    v2 = v8;
    v8 -= 4;
    *(int*)v8 = 1;
    v1 = 1;
    *(int*)v8 = 102;
    v0 = *(int*)v8;
    v8 += 4;
    interrupt(128);
}

int sub_8048289() {
    int v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    while(1) {
        int v4 = 0;
        while(1) {
            v2 = (unsigned int)*(char*)(v3 + v0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            ++v3;
            unsigned char v5 = (unsigned char)v2;
            v2 = (unsigned int)((unsigned char)v2 - 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            if(v5 < 48) {
                break;
            }
            else {
                v4 = v4 * 10 + v2;
            }
        }
        *(char*)(v1 + 4) = (unsigned char)v4;
    }
}

void sub_80482AA() {
}

int sub_80482AB(int param0, int param1) {
    int v0;
    unsigned char v1;
    int v2;
    int v3;
    int result = (unsigned int)v1 | ((unsigned int)v2 << 8);
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr0 = &v0;
    unsigned char* ptr1 = gvar_80483CC;
    unsigned char* ptr2 = (unsigned char*)&gvar_8048404;
    unsigned char* ptr3 = (unsigned char*)&gvar_8048405;
loc_80482B9:
    while(1) {
        param0 = 0;
    loc_80482BB:
        do {
            v1 = *ptr1;
            ++ptr1;
            if(v1) {
                if(v1 != 46) {
                    ++param0;
                    *ptr3 = v1;
                    ++ptr3;
                    goto loc_80482BB;
                }
                else {
                    *ptr2 = (unsigned char)param0;
                    ptr2 = ptr3;
                    ++ptr3;
                    continue loc_80482B9;
                }
            }
        }
        while(v1);
    }
    *ptr3 = 0;
    *(short*)(ptr3 + 1) = 0x100;
    *(short*)(ptr3 + 3) = 0x100;
    *ptr2 = (unsigned char)param0;
    gvar_80483F6 = (unsigned short)(unsigned char)(int*)((int)(int*)(ptr3 - 134513651) >>> 8) | ((unsigned short)((unsigned char)ptr3 + 13) << 8);
    gvar_80483F8 = 19794;
    gvar_80483FC = 0x100;
    gvar_80483FA = 1;
    return result;
}

int sub_804830A() {
    char v0;
    char v1;
    int v2;
    int v3 = 134513644;
    int v4 = 134513644;
    char v5 = (unsigned char)v2;
    v2 = (unsigned int)(unsigned char)(v2 >>> 8) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    int v6 = (unsigned int)(unsigned char)v2 | ((unsigned int)v5 << 8) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
    char v7 = __ror__(v6, 16) < 0;
    char v8 = v1;
    char v9 = (unsigned char)__ror__(v6, 16);
    int v10 = (unsigned int)(unsigned char)((__ror__(v6, 16)) >>> 8) | ((unsigned int)(((__ror__(v6, 16)) >>> 8) & 0xffffff) << 8);
    int v11 = (unsigned int)(unsigned char)((__ror__(v6, 16)) >>> 8) | ((unsigned int)v9 << 8) | ((unsigned int)(unsigned short)(v10 >>> 16) << 16);
    int v12 = sub_804832D();
    int v13 = 134513644;
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    char v20 = 0;
    int v21 = 134513644;
    int v22 = 134513645;
    char v23 = 0;
    char v24 = 0;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    int v28 = 0;
    int v29 = 134513645;
    int v30 = 1;
    int v31 = 4;
    int v32 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_804832D() {
    char* ptr0;
    int v0;
    *ptr0 = 10;
    char* ptr1 = ptr0 - 1;
    do {
        int v1 = sub_8048348();
        *ptr1 = 46;
        --ptr1;
        v0 >>>= 8;
    }
    while(v0);
    *(ptr1 + 1) = 32;
    return 0;
}

int sub_8048348() {
    int result;
    char* ptr0;
    int v0;
    do {
        *ptr0 = (unsigned char)result % 10 + 48;
        ++ptr0;
        v0 = (unsigned int)(unsigned char)((unsigned int)((unsigned char)result / 10) | ((unsigned int)(unsigned short)(result >>> 16) << 8) | ((unsigned int)0 << 24)) | ((unsigned int)(((unsigned int)((unsigned char)result / 10) | ((unsigned int)(unsigned short)(result >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        result = (unsigned int)(unsigned char)v0 | ((unsigned int)(unsigned char)((unsigned int)((unsigned char)result % 10 + 48) | ((unsigned int)((unsigned char)result / 10) << 8) | ((unsigned int)(unsigned short)(result >>> 16) << 16)) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    }
    while((unsigned char)v0);
    return result;
}

int sub_804835A() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = "/etc/resolv.conf";
    int v8 = 5;
    int v9 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}
