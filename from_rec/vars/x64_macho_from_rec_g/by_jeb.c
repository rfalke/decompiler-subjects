
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

int* _func(int* param0) {
    int* ptr0 = param0;
    *ptr0 = 1;
    *(char*)(ptr0 + 4) = 107;
    int* result = ptr0;
    *(long*)(result + 6) = 10L;
    return result;
}

int* _func2() {
    *(int*)&_gs1 = 1;
    gvar_100001108 = &_gs1;
    gvar_100001110 = 107;
    gvar_100001118 = 10L;
    *gvar_100001108 = 2;
    int* result = *(unsigned long*)(gvar_100001108 + 8L);
    *result = 3;
    return result;
}

int* _main() {
    _func((int*)&_gs1);
    return _func2();
}

long start() {
    long v0;
    char v1;
    char v2;
    void* ptr0;
    long v3 = 0L;
    long* ptr1 = &v3;
    char v4 = &v0 == 16L;
    char v5 = (long)&v1 < 0L;
    char v6 = __parity__((unsigned char)&v0 - 16);
    char v7 = 0;
    char v8 = 0;
    unsigned int v9 = (unsigned int)v0;
    int v10 = (unsigned int)(v0 >>> 32L);
    long* ptr2 = &v2;
    unsigned int v11 = v9;
    int v12 = 0;
    unsigned int v13 = v9;
    int v14 = (int)(v11 + 1);
    int v15 = 0;
    char v16 = v11 + 1 ? 0: 1;
    char v17 = v14 < 0;
    char v18 = __parity__((unsigned char)v14);
    char v19 = (((v13 ^ 0x1) ^ v14) >>> 4) & 0x1;
    char v20 = v13 >= 0xffffffff;
    char v21 = ((v14 ^ v13) & ~(v13 ^ 0x1)) < 0;
    int v22 = v14;
    long v23 = (unsigned long)(v14 * 8);
    char v24 = (v22 >>> 29) & 0x1;
    char v25 = v21;
    char v26 = (unsigned int)v23 ? 0: 1;
    char v27 = (v23 >>> 31L) & 0x1L;
    char v28 = __parity__((unsigned char)v23);
    long v29 = v23;
    unsigned long* ptr3 = (unsigned long*)(v23 + (long)&v2);
    char v30 = ptr3 ? 0: 1;
    char v31 = (long)ptr3 < 0L;
    char v32 = __parity__((unsigned char)ptr3);
    char v33 = (long*)((long)(long*)((long)(long*)((long)(long*)(v29 ^ (long)&v2) ^ (long)ptr3) >>> 4L) & 0x1L);
    char v34 = __carry__(v29, (long)&v2);
    char v35 = (long)(long*)((long)(long*)((long)ptr3 ^ v29) & (long*)~(long)(long*)(v29 ^ (long)&v2)) < 0L;
    unsigned long* ptr4 = ptr3;
    while(1) {
        char v36 = *ptr4 ? 0: 1;
        char v37 = *ptr4 < 0L;
        char v38 = __parity__((unsigned char)*ptr4);
        char v39 = *ptr4 < 0L;
        char v40 = 0;
        char v41 = 0;
        if(v36) {
            break;
        }
        else {
            unsigned long* ptr5 = ptr4;
            ++ptr4;
            char v42 = ptr4 ? 0: 1;
            char v43 = (long)ptr4 < 0L;
            char v44 = __parity__((unsigned char)ptr4);
            char v45 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr5 ^ 0x8L) ^ (long)ptr4) >>> 4L) & 0x1L);
            char v46 = (unsigned long)ptr5 >= 18446744073709551608L;
            char v47 = (long)(long*)((long)(long*)((long)ptr4 ^ (long)ptr5) & (long*)~(long)(long*)((long)ptr5 ^ 0x8L)) < 0L;
        }
    }
    unsigned long* ptr6 = ptr4;
    long* ptr7 = (long*)(ptr4 + 1);
    char v48 = ptr7 ? 0: 1;
    char v49 = (long)ptr7 < 0L;
    char v50 = __parity__((unsigned char)ptr7);
    char v51 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr6 ^ 0x8L) ^ (long)ptr7) >>> 4L) & 0x1L);
    char v52 = (unsigned long)ptr6 >= 18446744073709551608L;
    char v53 = (long)(long*)((long)(long*)((long)ptr7 ^ (long)ptr6) & (long*)~(long)(long*)((long)ptr6 ^ 0x8L)) < 0L;
    int* ptr8 = _main();
    long v54 = (unsigned long)(unsigned int)ptr8;
    long* ptr9 = &ptr0;
    long v55 = →_exit();
    hlt();
}
