
int start(int param0, int param1) {
    int v0;
    unsigned int v1;
    int v2;
    char v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8 = 0;
    char v9 = 1;
    char v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 0;
    *(char*)&gvar_804826F = 1;
    int v14 = v5;
    unsigned int* ptr0 = &param0;
    int v15 = v14;
    int v16 = v14 - 1;
    char v17 = v16 ? 0: 1;
    char v18 = v16 < 0;
    char v19 = __parity__((unsigned char)v16);
    char v20 = ((~v16 ^ ~v15) >>> 4) & 0x1;
    char v21 = ((v16 ^ v15) & v15) < 0;
    if(!v17) {
        int v22 = param0;
        ptr0 = &param1;
        while(1) {
            unsigned short* ptr1 = *ptr0;
            ++ptr0;
            char v23 = *ptr1 == 28973;
            char v24 = *ptr1 < 28973;
            char v25 = __parity__((unsigned char)*ptr1 - 45);
            char v26 = *ptr1 < 28973;
            char v27 = (((*ptr1 - 28973) ^ *ptr1) & (*ptr1 ^ 0x712d)) < 0;
            char v28 = (((*ptr1 - 28973) ^ (*ptr1 ^ 0x712d)) >>> 4) & 0x1;
            if(v23) {
                v4 = v4 | 0x1;
                char v29 = v4 ? 0: 1;
                char v30 = v4 < 0;
                char v31 = __parity__(v4);
                char v32 = 0;
                char v33 = 0;
                goto loc_804806F;
            }
            else {
                char v34 = *ptr1 == 25389;
                char v35 = *ptr1 < 25389;
                char v36 = __parity__((unsigned char)*ptr1 - 45);
                char v37 = *ptr1 < 25389;
                char v38 = (((*ptr1 - 25389) ^ *ptr1) & (*ptr1 ^ 0x632d)) < 0;
                char v39 = (((*ptr1 - 25389) ^ (*ptr1 ^ 0x632d)) >>> 4) & 0x1;
                if(v34) {
                    v4 |= 4;
                    char v40 = v4 ? 0: 1;
                    char v41 = v4 < 0;
                    char v42 = __parity__(v4);
                    char v43 = 0;
                    char v44 = 0;
                    goto loc_804806F;
                }
                else {
                    char v45 = *ptr1 == 0x622d;
                    char v46 = *ptr1 < 0x622d;
                    char v47 = __parity__((unsigned char)*ptr1 - 45);
                    char v48 = *ptr1 < 0x622d;
                    char v49 = (((*ptr1 - 0x622d) ^ *ptr1) & (*ptr1 ^ 0x622d)) < 0;
                    char v50 = (((*ptr1 - 0x622d) ^ (*ptr1 ^ 0x622d)) >>> 4) & 0x1;
                    if(v45) {
                        v4 |= 128;
                        char v51 = v4 ? 0: 1;
                        char v52 = v4 < 0;
                        char v53 = __parity__(v4);
                        char v54 = 0;
                        char v55 = 0;
                        goto loc_804806F;
                    }
                    else {
                        v3 = *ptr1 == 30253;
                        char v56 = *ptr1 < 30253;
                        char v57 = __parity__((unsigned char)*ptr1 - 45);
                        char v58 = *ptr1 < 30253;
                        char v59 = (((*ptr1 - 30253) ^ *ptr1) & (*ptr1 ^ 0x762d)) < 0;
                        char v60 = (((*ptr1 - 30253) ^ (*ptr1 ^ 0x762d)) >>> 4) & 0x1;
                    }
                }
            }
            if(!v3) {
                break;
            }
            else {
                v4 |= 2;
                char v61 = v4 ? 0: 1;
                char v62 = v4 < 0;
                char v63 = __parity__(v4);
                char v64 = 0;
                char v65 = 0;
            loc_804806F:
                int v66 = v16;
                --v16;
                char v67 = v16 ? 0: 1;
                char v68 = v16 < 0;
                char v69 = __parity__((unsigned char)v16);
                char v70 = ((~v16 ^ ~v66) >>> 4) & 0x1;
                char v71 = ((v16 ^ v66) & v66) < 0;
            }
        }
        *(char*)&gvar_8048274 = v4;
        v15 = v16;
        unsigned int v72 = (unsigned int)(v16 - 1);
        char v73 = v72 ? 0: 1;
        char v74 = v72 >= 0x80000000;
        char v75 = __parity__((unsigned char)v72);
        v20 = ((~v72 ^ ~v15) >>> 4) & 0x1;
        char v76 = ((v72 ^ v15) & v15) < 0;
        if(!v73) {
            gvar_804825B = v72;
        }
        else {
        loc_80480C5:
            do {
                v22 = 134513285;
                --ptr0;
                *ptr0 = &loc_80480CF;
                int v77 = /*BAD_CALL!*/ sub_80481D7(v6, v7);
                v4 = (unsigned char)v77;
                v2 = (unsigned int)((v77 >>> 8) & 0xffffff);
                char v78 = gvar_8048273 ? 0: 1;
                char v79 = gvar_8048273 >= 128;
                char v80 = __parity__(gvar_8048273);
                char v81 = gvar_8048273 < 0;
                char v82 = 0;
                v20 = 0;
                if(!v78) {
                    goto loc_80480D8;
                }
                else {
                    --ptr0;
                    *ptr0 = &loc_80480F2;
                    int* ptr2 = /*BAD_CALL!*/ sub_804821C();
                    v7 = gvar_8048274;
                    char v83 = ptr2 ? 0: 1;
                    char v84 = (int)ptr2 < 0;
                    char v85 = __parity__((unsigned char)ptr2);
                    char v86 = 0;
                    char v87 = 0;
                    char v88 = (unsigned char)v7 & 0x2 ? 0: 1;
                    char v89 = ((unsigned char)v7 & 0x2) < 0;
                    char v90 = __parity__((unsigned char)v7 & 0x2);
                    char v91 = 0;
                    char v92 = 0;
                    v72 = (unsigned int)((v83 ? 1: 0) ^ (v88 ? 1: 0)) | ((unsigned int)(v83 ? 1: 0) << 8) | ((unsigned int)(unsigned short)(v72 >>> 16) << 16);
                    char v93 = (v83 ? 1: 0) ^ (v88 ? 1: 0) ? 0: 1;
                    char v94 = (v72 >>> 7) & 0x1;
                    char v95 = __parity__((unsigned char)v72);
                    char v96 = 0;
                    char v97 = 0;
                    if(v93) {
                        goto loc_80480C5;
                    }
                    else {
                        *(char*)&gvar_804826F = 0;
                        char v98 = (unsigned char)v7 & 0x1 ? 0: 1;
                        char v99 = ((unsigned char)v7 & 0x1) < 0;
                        char v100 = __parity__((unsigned char)v7 & 0x1);
                        char v101 = 0;
                        char v102 = 0;
                        if(!v98) {
                            goto loc_80480C5;
                        }
                        else {
                            ++gvar_8048263;
                            v17 = (unsigned char)v7 & 0x4 ? 0: 1;
                            v18 = ((unsigned char)v7 & 0x4) < 0;
                            v19 = __parity__((unsigned char)v7 & 0x4);
                            v21 = 0;
                            v13 = 0;
                        }
                    }
                }
            }
            while(!v17);
            --ptr0;
            *ptr0 = &loc_8048123;
            /*BAD_CALL!*/ sub_804813B();
            --ptr0;
            *ptr0 = &loc_8048128;
            /*BAD_CALL!*/ sub_8048168();
            --ptr0;
            *ptr0 = &loc_804812D;
            int* ptr3 = /*BAD_CALL!*/ sub_804824A();
            v7 = (int)ptr3;
            v6 = 134513285;
            --ptr0;
            *ptr0 = 1;
            v1 = *ptr0;
            *ptr0 = 4;
            v0 = *ptr0;
            ++ptr0;
            interrupt(128);
        loc_80480D8:
            char v103 = *(char*)&gvar_8048274 & 0x4 ? 0: 1;
            char v104 = (*(char*)&gvar_8048274 & 0x4) < 0;
            char v105 = __parity__(*(char*)&gvar_8048274 & 0x4);
            char v106 = 0;
            char v107 = 0;
            if(!v103) {
                --ptr0;
                *ptr0 = &loc_80480E6;
                /*BAD_CALL!*/ sub_804813B();
                --ptr0;
                *ptr0 = &loc_80480EB;
                int v108 = /*BAD_CALL!*/ sub_8048190(v6, v7);
                v4 = (unsigned char)v108;
                v2 = (unsigned int)((v108 >>> 8) & 0xffffff);
            }
        }
        unsigned int v109 = *ptr0;
        ++ptr0;
        v1 = v109;
        v17 = v1 ? 0: 1;
        v18 = v1 >= 0x80000000;
        v19 = __parity__((unsigned char)v1);
        v21 = 0;
        v13 = 0;
        if(!v17) {
            int v110 = 0;
            char v111 = 1;
            char v112 = 0;
            char v113 = 1;
            char v114 = 0;
            char v115 = 0;
            gvar_8048263 = 0;
            gvar_8048267 = 0;
            gvar_804825F = v1;
            v6 = 0;
            v17 = 1;
            v18 = 0;
            v19 = 1;
            v21 = 0;
            v13 = 0;
            --ptr0;
            *ptr0 = 5;
            v0 = *ptr0;
            ++ptr0;
            interrupt(128);
        }
    }
    v1 = gvar_804826F;
    --ptr0;
    *ptr0 = 1;
    v0 = *ptr0;
    ++ptr0;
    interrupt(128);
}

void sub_804813B() {
    char v0 = *(char*)&gvar_804825B == 1;
    char v1 = *(char*)&gvar_804825B < 1;
    char v2 = __parity__(*(char*)&gvar_804825B - 1);
    char v3 = *(char*)&gvar_804825B < 1;
    char v4 = (((*(char*)&gvar_804825B - 1) ^ *(char*)&gvar_804825B) & (*(char*)&gvar_804825B ^ 0x1)) < 0;
    char v5 = (((*(char*)&gvar_804825B - 1) ^ (*(char*)&gvar_804825B ^ 0x1)) >>> 4) & 0x1;
    jump v3 || v0 ? &sub_8048167: &sub_8048144;
}

int sub_8048144(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v2;
    int v5 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr1 = &v0;
    unsigned int v8 = gvar_804825F;
    int* ptr2 = sub_804824A();
    *(char*)((int)ptr2 + v8) = 58;
    int* ptr3 = ptr2;
    int* ptr4 = (int*)((char*)ptr2 + 1);
    char v9 = ptr4 ? 0: 1;
    char v10 = (int)ptr4 < 0;
    char v11 = __parity__((unsigned char)ptr4);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x1) ^ (int)ptr4) >>> 4) & 0x1);
    char v13 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x1)) < 0;
    int* ptr5 = ptr4;
    unsigned int v14 = v8;
    int v15 = 1;
    int v16 = 4;
    int v17 = 4;
    int* ptr6 = &v1;
    interrupt(128);
}

void sub_8048167() {
}

void sub_8048168() {
    char v0 = *(char*)&gvar_8048274 & 0x80 ? 0: 1;
    char v1 = (*(char*)&gvar_8048274 & 0x80) < 0;
    char v2 = __parity__(*(char*)&gvar_8048274 & 0x80);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_804818F: &sub_8048171;
}

int sub_8048171(int param0, int param1) {
    char v0;
    char* ptr0;
    int v1;
    int v2;
    char* ptr1;
    unsigned int v3;
    int* ptr2 = &v0;
    int v4 = v1;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr3 = &v0;
    unsigned int v8 = gvar_804826B;
    unsigned int v9 = sub_80481AF();
    *ptr1 = 58;
    char* ptr4 = ptr1;
    char* ptr5 = ptr1;
    int* ptr6 = (int*)((int)ptr4 - v3);
    char v10 = ptr6 ? 0: 1;
    char v11 = (int)ptr6 < 0;
    char v12 = __parity__((unsigned char)ptr6);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)(v3 ^ (int)ptr5) ^ (int)ptr6) >>> 4) & 0x1);
    char v14 = v3 > (unsigned int)ptr5;
    char v15 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int)(int*)(v3 ^ (int)ptr5)) < 0;
    int* ptr7 = ptr6;
    int* ptr8 = (int*)((char*)ptr6 + 1);
    char v16 = ptr8 ? 0: 1;
    char v17 = (int)ptr8 < 0;
    char v18 = __parity__((unsigned char)ptr8);
    char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
    char v20 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x1)) < 0;
    unsigned int v21 = v3;
    int v22 = 1;
    int v23 = 4;
    int v24 = 4;
    int* ptr9 = &ptr0;
    interrupt(128);
}

void sub_804818F() {
}

int sub_8048190(int param0, int param1) {
    char v0;
    char* ptr0;
    int v1;
    int v2;
    char* ptr1;
    unsigned int v3;
    int* ptr2 = &v0;
    int v4 = v1;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr3 = &v0;
    unsigned int v8 = gvar_8048263;
    unsigned int v9 = sub_80481AF();
    *ptr1 = 10;
    char* ptr4 = ptr1;
    char* ptr5 = ptr1;
    int* ptr6 = (int*)((int)ptr4 - v3);
    char v10 = ptr6 ? 0: 1;
    char v11 = (int)ptr6 < 0;
    char v12 = __parity__((unsigned char)ptr6);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)(v3 ^ (int)ptr5) ^ (int)ptr6) >>> 4) & 0x1);
    char v14 = v3 > (unsigned int)ptr5;
    char v15 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr5) & (int)(int*)(v3 ^ (int)ptr5)) < 0;
    int* ptr7 = ptr6;
    int* ptr8 = (int*)((char*)ptr6 + 1);
    char v16 = ptr8 ? 0: 1;
    char v17 = (int)ptr8 < 0;
    char v18 = __parity__((unsigned char)ptr8);
    char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x1) ^ (int)ptr8) >>> 4) & 0x1);
    char v20 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x1)) < 0;
    unsigned int v21 = v3;
    int v22 = 1;
    int v23 = 4;
    int v24 = 4;
    int* ptr9 = &ptr0;
    interrupt(128);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_80481AF() {
    unsigned int v0;
    unsigned int result = v0 / 10;
    if(result) {
        result = (unsigned int)sub_80481B9(10, (int)(v0 % 10));
    }
    unsigned int v1 = (unsigned int)((unsigned char)v0 % 10 + 48) | ((unsigned int)(((v0 % 10) >>> 8) & 0xffffff) << 8);
    if((char)((unsigned char)v0 % 10 + 48) > 57) {
        v1 = (unsigned int)((unsigned char)v1 + 39) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    }
    *((char*)&gvar_8048274 + 1) = (unsigned char)v1;
    return result;
}

unsigned int sub_80481B9(unsigned int param0) {
    unsigned int v0;
    char* ptr0;
    unsigned int result = v0 / param0;
    unsigned int v1 = v0 % param0;
    if(result) {
        result = (unsigned int)sub_80481B9((int)param0, (int)v1);
    }
    v1 = (unsigned int)((unsigned char)v1 + 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v1 > 57) {
        v1 = (unsigned int)((unsigned char)v1 + 39) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
    }
    *ptr0 = (unsigned char)v1;
    return result;
}

int sub_80481D7(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0 = &v0;
    int v5 = v3;
    int v6 = param0;
    int v7 = param1;
    int v8 = v2;
    int* ptr1 = &v0;
    gvar_8048273 = 1;
    gvar_804826B = gvar_8048267;
    int v9 = 1;
    int v10 = &gvar_8048273;
    int v11 = v4;
    int v12 = 3;
    int v13 = 3;
    int* ptr2 = &v1;
    interrupt(128);
}

int* sub_804821C() {
    int* result1;
    int* result;
    void* ptr0;
    if(*(char*)&result[0]) {
        result1 = sub_804824A();
        int* ptr1 = result1;
        if(ptr1) {
            do {
                result1 = NULL;
                char v0 = 1;
                int* ptr2 = ptr1;
                void* ptr3 = ptr0;
                while(ptr1 != 0) {
                    v0 = *(char*)&result[0] == *(char*)ptr0;
                    result = (int*)((char*)result + 1);
                    ptr0 = (void*)((int)ptr0 + 1);
                    ptr1 = (int*)((char*)ptr1 - 1);
                    if(!v0) {
                        break;
                    }
                }
                ptr0 = ptr3;
                ptr1 = ptr2;
                if(v0) {
                    return result;
                }
            }
            while(*(char*)&result[0]);
        }
    }
    else {
        result1 = result;
    }
    return result1;
}

int* sub_804824A() {
    unsigned int v0;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
    }
    while(*ptr0);
    return (int*)((int)ptr0 - v0);
}
