
int main(unsigned int param0, int param1) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    char v5;
    char v6;
    int v7;
    int* ptr0 = &param0;
    char v8 = &v0 ? 0: 1;
    char v9 = (int)&v0 < 0;
    char v10 = __parity__((unsigned char)&v0);
    char v11 = 0;
    char v12 = 0;
    int v13 = v0;
    int v14 = v3;
    int* ptr1 = &v14;
    int v15 = v4;
    int v16 = v7;
    int v17 = v2;
    int* ptr2 = &param0;
    int* ptr3 = &ptr2;
    char v18 = &v0 == 32;
    char v19 = (int)&v1 < 0;
    char v20 = __parity__((unsigned char)&v0 - 32);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v22 = (unsigned int)&ptr2 < 8;
    char v23 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v1) & (int)(int*)((int)&ptr2 ^ 0x8)) < 0;
    unsigned int v24 = param0;
    int v25 = param1;
    char v26 = v24 ? 0: 1;
    char v27 = v24 >= 0x80000000;
    char v28 = __parity__((unsigned char)v24);
    char v29 = 0;
    char v30 = 0;
    if(!v26 && v27 == 0) {
        unsigned int v31 = 0;
        char v32 = 1;
        char v33 = 0;
        char v34 = 1;
        char v35 = 0;
        char v36 = 0;
        do {
            int* ptr4 = &v1;
            char v37 = &v0 == 44;
            char v38 = (int)&v6 < 0;
            char v39 = __parity__((unsigned char)&v0 - 44);
            char v40 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
            char v41 = (unsigned int)&v1 < 12;
            char v42 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v6) & (int)(int*)((int)&v1 ^ 0xc)) < 0;
            int v43 = *(int*)(v31 * 4 + v25);
            unsigned int v44 = v31;
            ++v31;
            char v45 = v31 ? 0: 1;
            char v46 = v31 >= 0x80000000;
            char v47 = __parity__((unsigned char)v31);
            char v48 = (((v44 ^ 0x1) ^ v31) >>> 4) & 0x1;
            char v49 = v44 >= 0xffffffff;
            char v50 = (int)((v31 ^ v44) & ~(v44 ^ 0x1)) < 0;
            →puts(v43);
            v5 = v31 == v24;
            char v51 = (int)v31 > (int)v24;
            char v52 = __parity__((unsigned char)v24 - (unsigned char)v31);
            char v53 = v31 > v24;
            char v54 = (int)(((v24 - v31) ^ v24) & (v31 ^ v24)) < 0;
            v21 = (((v24 - v31) ^ (v31 ^ v24)) >>> 4) & 0x1;
        }
        while(!v5);
    }
    int v55 = 0;
    char v56 = 1;
    char v57 = 0;
    char v58 = 1;
    char v59 = 0;
    char v60 = 0;
    int* ptr5 = ptr2;
    int v61 = v17;
    int v62 = v16;
    int v63 = v15;
    int v64 = v14;
    int v65 = v15;
    int* ptr6 = &v14;
    jump v65;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804839F() {
    return 0;
}

void sub_80483D8() {
}

int sub_8048409() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804841C() {
}

int sub_8048430() {
    return register_tm_clones();
}
