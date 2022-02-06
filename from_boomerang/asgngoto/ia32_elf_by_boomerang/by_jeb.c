
int MAIN__() {
    char v0;
    void* ptr0;
    int v1;
    int v2;
    unsigned int v3;
    char v4;
    int v5;
    int* ptr1 = &v1;
    int* ptr2 = &v4;
    char v6 = &v0 == 40;
    char v7 = (int)&v2 < 0;
    char v8 = __parity__((unsigned char)&v0 - 40);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v10 = (unsigned int)&v4 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v4) & (int)(int*)((int)&v4 ^ 0xc)) < 0;
    →s_wsle();
    int* ptr3 = &v5;
    char v12 = &v0 == 28;
    char v13 = (int)&v4 < 0;
    char v14 = __parity__((unsigned char)&v0 - 28);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v4) >>> 4) & 0x1);
    char v16 = (unsigned int)&v5 >= 0xfffffff0;
    char v17 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v4) & (int*)~(int)(int*)((int)&v5 ^ 0x10)) < 0;
    →do_lio();
    int* ptr4 = &v5;
    char v18 = &v0 == 28;
    char v19 = (int)&v4 < 0;
    char v20 = __parity__((unsigned char)&v0 - 28);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v4) >>> 4) & 0x1);
    char v22 = (unsigned int)&v5 >= 0xfffffff0;
    char v23 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v4) & (int*)~(int)(int*)((int)&v5 ^ 0x10)) < 0;
    →e_wsle();
    int* ptr5 = &v4;
    char v24 = &v0 == 40;
    char v25 = (int)&v2 < 0;
    char v26 = __parity__((unsigned char)&v0 - 40);
    char v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v28 = (unsigned int)&v4 < 12;
    char v29 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v4) & (int)(int*)((int)&v4 ^ 0xc)) < 0;
    →s_rsle();
    int* ptr6 = &v5;
    char v30 = &v0 == 28;
    char v31 = (int)&v4 < 0;
    char v32 = __parity__((unsigned char)&v0 - 28);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v4) >>> 4) & 0x1);
    char v34 = (unsigned int)&v5 >= 0xfffffff0;
    char v35 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v4) & (int*)~(int)(int*)((int)&v5 ^ 0x10)) < 0;
    int* ptr7 = &v3;
    int* ptr8 = &v3;
    v2 = &gvar_80489A8;
    v5 = &gvar_80489B0;
    →do_lio();
    int* ptr9 = &v5;
    char v36 = &v0 == 28;
    char v37 = (int)&v4 < 0;
    char v38 = __parity__((unsigned char)&v0 - 28);
    char v39 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x10) ^ (int)&v4) >>> 4) & 0x1);
    char v40 = (unsigned int)&v5 >= 0xfffffff0;
    char v41 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v4) & (int*)~(int)(int*)((int)&v5 ^ 0x10)) < 0;
    int* ptr10 = &ptr0;
    →e_rsle();
    int v42 = &gvar_8048760;
    char v43 = v3 == 2;
    char v44 = (int)v3 < 2;
    char v45 = __parity__((unsigned char)v3 - 2);
    char v46 = v3 < 2;
    char v47 = (((v3 - 2) ^ v3) & (v3 ^ 0x2)) < 0;
    char v48 = (((v3 - 2) ^ (v3 ^ 0x2)) >>> 4) & 0x1;
    if(v43) {
        v42 = &gvar_8048793;
    }
    char v49 = v3 == 3;
    char v50 = (int)v3 < 3;
    char v51 = __parity__((unsigned char)v3 - 3);
    char v52 = v3 < 3;
    char v53 = (((v3 - 3) ^ v3) & (v3 ^ 0x3)) < 0;
    char v54 = (((v3 - 3) ^ (v3 ^ 0x3)) >>> 4) & 0x1;
    if(v49) {
        v42 = &gvar_80487C3;
    }
    char v55 = v3 == 4;
    char v56 = (int)v3 < 4;
    char v57 = __parity__((unsigned char)v3 - 4);
    char v58 = v3 < 4;
    char v59 = (((v3 - 4) ^ v3) & (v3 ^ 0x4)) < 0;
    char v60 = (((v3 - 4) ^ (v3 ^ 0x4)) >>> 4) & 0x1;
    if(v55) {
        v42 = &gvar_80487F3;
    }
    int v61 = v42;
    jump v61;
}

int atexit(FUNCPTR __func) {
    int result;
    →__cxa_atexit();
    return result;
}

int main(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    int v3;
    void* ptr0;
    int* ptr1 = &v3;
    char v4 = &v0 == 16;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&v0 - 16);
    char v7 = 0;
    char v8 = 0;
    int v9 = param1;
    int* ptr2 = &v1;
    char v10 = &v0 == 32;
    char v11 = (int)&v2 < 0;
    char v12 = __parity__((unsigned char)&v0 - 32);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v2) >>> 4) & 0x1);
    char v14 = (unsigned int)&v1 < 16;
    char v15 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v1) & (int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v16 = v9;
    int v17 = param0;
    →f_setarg();
    →f_setsig();
    →f_init();
    int v18 = atexit((void __cdecl (*_)())&→f_exit);
    int v19 = MAIN__();
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(0);
}

int sub_804855A() {
    return gvar_8049ABC();
}
