
int main(unsigned int param0) {
    int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int* ptr0 = &param0;
    char v5 = &v0 ? 0: 1;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&v0);
    char v8 = 0;
    char v9 = 0;
    unsigned int v10 = param0;
    int v11 = v0;
    int v12 = v2;
    unsigned int v13 = v10;
    int v14 = (int)(v10 - 3);
    char v15 = v14 ? 0: 1;
    char v16 = v14 < 0;
    char v17 = __parity__((unsigned char)v14);
    char v18 = (((v13 ^ 0x3) ^ v14) >>> 4) & 0x1;
    char v19 = v13 < 3;
    char v20 = ((v14 ^ v13) & (v13 ^ 0x3)) < 0;
    int* ptr1 = &v12;
    int v21 = v4;
    int v22 = v14;
    int* ptr2 = &param0;
    if(v15) {
        int* ptr3 = &ptr2;
        char v23 = &v0 == 28;
        char v24 = (int)&v3 < 0;
        char v25 = __parity__((unsigned char)&v0 - 28);
        char v26 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v3) >>> 4) & 0x1);
        char v27 = (unsigned int)&ptr2 < 12;
        char v28 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v3) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
        →puts("hello");
        int* ptr4 = &v1;
        v15 = &v0 == 16;
        v16 = (int)&ptr2 < 0;
        v17 = __parity__((unsigned char)&v0 - 16);
        v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&ptr2) >>> 4) & 0x1);
        v19 = (unsigned int)&v1 >= 0xfffffff0;
        v20 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v1) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    }
    int v29 = v22;
    int* ptr5 = ptr2;
    int v30 = v21;
    int v31 = v12;
    int v32 = v21;
    int* ptr6 = &v12;
    jump v32;
}

int sub_80482D6() {
    return gvar_804A008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804838F() {
    return 0;
}

void sub_80483C8() {
}

int sub_80483F9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_804840C() {
}

int sub_8048420() {
    return register_tm_clones();
}
