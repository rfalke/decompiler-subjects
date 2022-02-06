
int start(int param0, int param1) {
    unsigned int v0;
    void* ptr0;
    int* ptr1;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int* ptr2;
    char v6;
    void* ptr3;
    int v7;
    unsigned int* ptr4;
    int* ptr5;
    void* ptr6 = (void*)&loc_804922F;
    void* ptr7 = (void*)&loc_804922F;
    int* ptr8 = (int*)0x804804C;
    char v8 = 0;
    char v9 = 0;
    char v10 = 0;
    char v11 = 1;
    char v12 = 1;
    char v13 = 0;
    unsigned char* ptr9 = *(unsigned char**)&v6;
    unsigned int* ptr10 = &param0;
    unsigned char* ptr11 = ptr9;
    unsigned char* ptr12 = ptr9 - 1;
    char v14 = ptr12 ? 0: 1;
    char v15 = (int)ptr12 < 0;
    char v16 = __parity__((unsigned char)ptr12);
    char v17 = (((unsigned char*)~(int)ptr12 ^ (unsigned char*)~(int)ptr11) >>> 4) & 0x1;
    char v18 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr11) & (int)ptr11) < 0;
    if(!v14) {
        void* ptr13 = &param1;
        *(int*)&v6 = 0;
        do {
            int v19 = *(int*)ptr13;
            ptr13 = (void*)((int)ptr13 + 4);
            char v20 = v19 ? 0: 1;
            char v21 = v19 < 0;
            char v22 = __parity__((unsigned char)v19);
            char v23 = 0;
            char v24 = 0;
            if(!v20) {
                ptr10 = &ptr3;
                ptr2 = sub_80492F1();
                v6 |= (unsigned char)(int*)((int)ptr5 >>> 8);
                char v25 = v6 ? 0: 1;
                char v26 = v6 < 0;
                char v27 = __parity__(v6);
                char v28 = 0;
                char v29 = 0;
                ptr11 = ptr12;
                --ptr12;
                char v30 = ptr12 ? 0: 1;
                char v31 = (int)ptr12 < 0;
                char v32 = __parity__((unsigned char)ptr12);
                v17 = (((unsigned char*)~(int)ptr12 ^ (unsigned char*)~(int)ptr11) >>> 4) & 0x1;
                char v33 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr11) & (int)ptr11) < 0;
                if(v31) {
                    goto sub_8049250;
                }
            }
            else {
                void* ptr14 = *(void**)((int)ptr13 - 8);
                ptr3 = *(void**)((int)ptr13 - 8);
                int v34 = sub_8049319();
                ptr13 = ptr3;
                ptr10 = (unsigned int*)&v6;
                ptr2 = ptr4;
                int* ptr15 = (int*)&loc_804926A;
                unsigned char* ptr16 = *(unsigned char**)&v6;
                *(int**)&v6 = (int*)&loc_804926A;
                unsigned char* ptr17 = ptr16;
                ptr11 = ptr16;
                ptr12 = (unsigned char*)((int)ptr17 >>> 1);
                char v35 = (unsigned char*)((int)ptr11 & 0x1);
                char v36 = (int)ptr11 < 0;
                char v37 = ptr12 ? 0: 1;
                char v38 = (int)ptr12 < 0;
                char v39 = __parity__((unsigned char)ptr12);
                if(!v35) {
                    ptr11 = ptr12;
                    ptr12 = (unsigned char*)((int)ptr12 >>> 1);
                    char v40 = (unsigned char*)((int)ptr11 & 0x1);
                    char v41 = (int)ptr11 < 0;
                    char v42 = ptr12 ? 0: 1;
                    char v43 = (int)ptr12 < 0;
                    char v44 = __parity__((unsigned char)ptr12);
                    if(v40) {
                        goto sub_8049250;
                    }
                    else {
                        unsigned char* ptr18 = ptr12;
                        int* ptr19 = (int*)((int)ptr12 >>> 1);
                        char v45 = (unsigned char*)((int)ptr18 & 0x1);
                        char v46 = (int)ptr18 < 0;
                        char v47 = ptr19 ? 0: 1;
                        char v48 = (int)ptr19 < 0;
                        char v49 = __parity__((unsigned char)ptr19);
                        void* ptr20 = (void*)0x8049152;
                        int v50 = 31;
                        int v51 = 31;
                        int* ptr21 = (int*)0x20;
                        char v52 = 0;
                        char v53 = 0;
                        char v54 = 0;
                        char v55 = 1;
                        char v56 = 0;
                        char v57 = ptr2 ? 0: 1;
                        char v58 = (int)ptr2 < 0;
                        char v59 = __parity__((unsigned char)ptr2);
                        char v60 = 0;
                        char v61 = 0;
                        if(v58) {
                            unsigned int* ptr22 = ptr2;
                            ptr2 = (unsigned int*)(0 - (int)ptr2);
                            char v62 = ptr2 ? 0: 1;
                            char v63 = (int)ptr2 < 0;
                            char v64 = __parity__((unsigned char)ptr2);
                            char v65 = (unsigned int)ptr22 > 0;
                            char v66 = (int)(int*)((int)ptr2 & (int)ptr22) < 0;
                            char v67 = (int*)((int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr22) >>> 4) & 0x1);
                        }
                        char v68 = ptr2 == (int*)0x20;
                        char v69 = (int)ptr2 < (int)(int*)0x20;
                        char v70 = __parity__((unsigned char)ptr2 - 32);
                        char v71 = (unsigned int)ptr2 < (unsigned int)(int*)0x20;
                        char v72 = (int)(int*)((int)(int*)((int)(int*)(ptr2 - 8) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ (int)(int*)0x20)) < 0;
                        char v73 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr2 - 8) ^ (int)(int*)((int)ptr2 ^ (int)(int*)0x20)) >>> 4) & 0x1);
                        if(!v71) {
                            ptr3 = (void*)0x8049152;
                            unsigned int v74 = (unsigned int)ptr13;
                            int v75 = sub_80492D9(v74, (int*)0x20);
                            ptr20 = ptr3;
                            ptr2 = (unsigned int*)ptr5;
                        }
                        void* ptr23 = (void*)*(short*)((char*)((int)(int*)((int)ptr2 * 2) + (int)ptr20) - 2);
                        void* ptr24 = ptr20;
                        short* ptr25 = (short*)((int)ptr23 + (int)ptr20);
                        char v76 = ptr25 ? 0: 1;
                        char v77 = (int)ptr25 < 0;
                        char v78 = __parity__((unsigned char)ptr25);
                        char v79 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr23 ^ (int)ptr24) ^ (int)ptr25) >>> 4) & 0x1);
                        char v80 = (void*)__carry__((int)ptr23, (int)ptr24);
                        char v81 = (int)(int*)((int)(int*)((int)ptr25 ^ (int)ptr24) & (int*)~(int)(int*)((int)ptr23 ^ (int)ptr24)) < 0;
                        int v82 = (int)*ptr25;
                        short* ptr26 = ptr25;
                        ptr4 = (unsigned int*)((char*)ptr25 + 3);
                        char v83 = ptr4 ? 0: 1;
                        char v84 = (int)ptr4 < 0;
                        char v85 = __parity__((unsigned char)ptr4);
                        char v86 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr26 ^ 0x3) ^ (int)ptr4) >>> 4) & 0x1);
                        v5 = (unsigned int)ptr26 >= 0xfffffffd;
                        char v87 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr26) & (int*)~(int)(int*)((int)ptr26 ^ 0x3)) < 0;
                        int v88 = v82;
                        ptr5 = (int*)(v82 - 1);
                        v4 = ptr5 ? 0: 1;
                        v3 = (int)ptr5 < 0;
                        v2 = __parity__((unsigned char)ptr5);
                        v17 = (((int*)~(int)ptr5 ^ ~v88) >>> 4) & 0x1;
                        v1 = (int)(int*)((int)(int*)((int)ptr5 ^ v88) & v88) < 0;
                        ptr11 = &v6;
                        ptr3 = ptr23;
                        void* ptr27 = ptr4;
                        int* ptr28 = ptr5;
                        int* ptr29 = ptr19;
                        unsigned char* ptr30 = &v6;
                        int* ptr31 = (int*)0x804804C;
                        void* ptr32 = ptr13;
                        int v89 = v7;
                        if(!v4 && v3 == v1) {
                            ptr1 = (int*)0x1;
                            ptr0 = (void*)0x4;
                            ptr10 = &v89;
                            interrupt(128);
                        }
                        v7 = v89;
                        ptr13 = ptr32;
                        ptr8 = (int*)0x804804C;
                        ptr5 = ptr28;
                        ptr4 = (unsigned int*)ptr27;
                        ptr11 = *(unsigned char**)&v6;
                        ptr10 = &param0;
                        jump ptr11;
                    }
                }
                v0 = "report (asmutils 0.10) hp01\n";
                goto loc_8049265;
            }
        }
        while(1);
    }
    else {
    sub_8049250:
        int v90 = 0;
        char v91 = 1;
        char v92 = 0;
        char v93 = 1;
        char v94 = 0;
        char v95 = 0;
        --ptr10;
        *ptr10 = &loc_8049257;
        int v96 = /*BAD_CALL!*/ sub_80492A1();
        v0 = "report [option(s)] number\n\t--signal (-s)\tno option (errors)\n\t--version, -v\t--help, -h\n";
    loc_8049265:
        --ptr10;
        *ptr10 = &loc_804926A;
        int v97 = /*BAD_CALL!*/ sub_80492D9(v0, ptr5);
    }
    ptr1 = NULL;
    v4 = 1;
    v3 = 0;
    v2 = 1;
    v1 = 0;
    v5 = 0;
    --ptr10;
    *ptr10 = 1;
    ptr0 = *ptr10;
    ++ptr10;
    interrupt(128);
}

int sub_8049250() {
    char v0;
    unsigned int v1;
    int v2;
    int* ptr0;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = sub_80492A1();
    int v10 = v2 + 0x1187;
    int v11 = sub_80492D9(v1, ptr0);
    int v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 0;
    int v18 = 1;
    int v19 = 1;
    int* ptr1 = &v0;
    interrupt(128);
}

int sub_80492A1() {
    int result;
    int* ptr0;
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int v4;
    unsigned int v5;
    int v6 = v2 + 3398;
    int* ptr1 = *(int**)(v2 + 3648);
    char v7 = v5 ? 0: 1;
    char v8 = v5 >= 0x80000000;
    char v9 = __parity__((unsigned char)v5);
    char v10 = 0;
    char v11 = 0;
    if(v8) {
        unsigned int v12 = v5;
        v5 = (unsigned int)(0 - v5);
        char v13 = v5 ? 0: 1;
        char v14 = v5 >= 0x80000000;
        char v15 = __parity__((unsigned char)v5);
        char v16 = v12 > 0;
        char v17 = (int)(v5 & v12) < 0;
        char v18 = ((v5 ^ v12) >>> 4) & 0x1;
    }
    char v19 = v5 == ptr1;
    char v20 = (int)v5 < (int)ptr1;
    char v21 = __parity__((unsigned char)v5 - (unsigned char)ptr1);
    char v22 = v5 < (unsigned int)ptr1;
    char v23 = (int)(int*)((int)(int*)((int)(int*)(v5 - (int)ptr1) ^ v5) & (int)(int*)(v5 ^ (int)ptr1)) < 0;
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)(v5 - (int)ptr1) ^ (int)(int*)(v5 ^ (int)ptr1)) >>> 4) & 0x1);
    if(!v22) {
        result = v6;
        unsigned int v25 = v4;
        int v26 = sub_80492D9(v25, ptr1);
        v6 = result;
        v5 = v1;
    }
    int v27 = (int)*(short*)(v5 * 2 + v6 - 2);
    int v28 = v6;
    short* ptr2 = (short*)(v27 + v6);
    char v29 = ptr2 ? 0: 1;
    char v30 = (int)ptr2 < 0;
    char v31 = __parity__((unsigned char)ptr2);
    char v32 = (int*)((int)(int*)((int)(int*)((v27 ^ v28) ^ (int)ptr2) >>> 4) & 0x1);
    char v33 = __carry__(v27, v28);
    char v34 = (int)(int*)((int)(int*)((int)ptr2 ^ v28) & ~(v27 ^ v28)) < 0;
    int v35 = (int)*ptr2;
    short* ptr3 = ptr2;
    int* ptr4 = (int*)((char*)ptr2 + 3);
    char v36 = ptr4 ? 0: 1;
    char v37 = (int)ptr4 < 0;
    char v38 = __parity__((unsigned char)ptr4);
    char v39 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x3) ^ (int)ptr4) >>> 4) & 0x1);
    char v40 = (unsigned int)ptr3 >= 0xfffffffd;
    char v41 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x3)) < 0;
    int v42 = v35;
    int v43 = v35 - 1;
    char v44 = v43 ? 0: 1;
    char v45 = v43 < 0;
    char v46 = __parity__((unsigned char)v43);
    char v47 = ((~v43 ^ ~v42) >>> 4) & 0x1;
    char v48 = ((v43 ^ v42) & v42) < 0;
    int* ptr5 = &ptr0;
    result = v27;
    int* ptr6 = ptr4;
    int v49 = v43;
    int v50 = v3;
    int* ptr7 = &ptr0;
    if(!v44 && v45 == v48) {
        int v51 = 1;
        int v52 = 4;
        int v53 = 4;
        int* ptr8 = &v0;
        interrupt(128);
    }
    return result;
}

int sub_80492D9(unsigned int param0, int* param1) {
    char* ptr0;
    int v0;
    char v1;
    int v2;
    int v3;
    int* ptr1 = &ptr0;
    int result = v2;
    unsigned int v4 = param0;
    int* ptr2 = param1;
    int v5 = v3;
    int* ptr3 = &ptr0;
    char* ptr4 = (char*)(param0 - 1);
    do {
        ++ptr4;
        v1 = *ptr4 ? 0: 1;
        char v6 = *ptr4 < 0;
        char v7 = __parity__(*ptr4);
        char v8 = 0;
        char v9 = 0;
    }
    while(!v1);
    char* ptr5 = ptr4;
    int* ptr6 = (int*)((int)ptr4 - param0);
    char v10 = ptr6 ? 0: 1;
    char v11 = (int)ptr6 < 0;
    char v12 = __parity__((unsigned char)ptr6);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 ^ (int)ptr5) ^ (int)ptr6) >>> 4) & 0x1);
    char v14 = param0 > (unsigned int)ptr5;
    char v15 = (int)(int*)((int)(int*)(param0 ^ (int)ptr5) & (int)(int*)((int)ptr6 ^ (int)ptr5)) < 0;
    if(!v10 && v11 == v15) {
        int v16 = 1;
        int v17 = 4;
        int v18 = 4;
        int* ptr7 = &v0;
        interrupt(128);
    }
    return result;
}

unsigned int* sub_80492F1() {
    int v0;
    unsigned int* result;
    unsigned int v1 = *result;
    int v2 = 8;
    int v3 = 8;
    short* ptr0 = (short*)(v0 + 0x114c);
    do {
        int v4 = (unsigned int)*ptr0 | ((unsigned int)(unsigned short)(int*)((int)result >>> 16) << 16);
        result = *(unsigned int*)(ptr0 + 1);
        ptr0 += 3;
        if(!result) {
            return result;
        }
        if((unsigned short)v4 == (unsigned short)v1 || result == v1) {
            v3 = (unsigned int)(unsigned char)v3 | ((unsigned int)((unsigned char)(v3 >>> 8) | (unsigned char)v3) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        }
        v3 = (unsigned int)((unsigned char)v3 >>> 1) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
    }
    while((unsigned char)v3);
    return result;
}

int sub_8049319() {
    unsigned char v0;
    int* ptr0;
    int result = *ptr0;
    int v1 = 0;
    if((unsigned char)result == 45) {
        ptr0 = (int*)((char*)ptr0 + 1);
        result >>>= 8;
    }
    if((unsigned char)result == 48) {
        int v2 = 0;
        v1 = 2051;
        if((unsigned char)(result >>> 8) == 120) {
            ptr0 = (int*)((char*)ptr0 + 2);
            v1 = 0x1004;
        }
        while(1) {
            result = (unsigned int)*(char*)ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            ptr0 = (int*)((char*)ptr0 + 1);
            v0 = (unsigned char)result;
            result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            if(v0 < 48) {
                return result;
            }
            if((unsigned char)result >= 10) {
                v0 = (unsigned char)result;
                result = (unsigned int)((unsigned char)result - 7) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                if(v0 < 7) {
                    return result;
                }
                else if((unsigned char)(v1 >>> 8) > (unsigned char)result) {
                    goto loc_8049374;
                }
                else {
                    result = (unsigned int)((unsigned char)result - 32) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                }
            }
            if((unsigned char)(v1 >>> 8) <= (unsigned char)result) {
                return result;
            }
        loc_8049374:
            v2 <<= v1 & 0x1f;
            v2 = (unsigned int)((unsigned char)result | (unsigned char)v2) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        }
    }
    else if((unsigned char)result >= 48 && (unsigned char)result <= 57) {
        result = 0;
        while(1) {
            result = (unsigned int)*(char*)ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            ptr0 = (int*)((char*)ptr0 + 1);
            v0 = (unsigned char)result;
            result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            if(v0 < 48 || (unsigned char)result >= 10) {
                return result;
            }
            v1 = v1 * 10 + result;
        }
    }
    else {
        result = sub_8049250();
    }
    return result;
}
