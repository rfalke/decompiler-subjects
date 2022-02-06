
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

long ___inline_strcpy_chk(long param0, long param1) {
    return →___strcpy_chk();
}

long _dumpline(long param0, long param1, unsigned int param2) {
    char v0;
    long v1 = param0;
    unsigned int v2 = param2;
    →___sprintf_chk();
    if((int)v2 > 16) {
        v2 = 16;
    }
    unsigned int j = 0;
    long i;
    for(i = (long)j; (int)v2 > (int)j; i = (long)j) {
        →___sprintf_chk();
        ++j;
    }
    while(1) {
        i = (unsigned long)((int)j > 15 ? 0: 1) | ((unsigned long)((i >>> 8L) & 0xffffffffffffffL) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            i = →___strcat_chk();
        }
    }
    long v3 = →_strlen();
    unsigned int v4 = (unsigned int)v3;
    ___inline_strcpy_chk((long)v4 + (long)&v0, &gvar_100000EC6);
    v4 += 3;
    for(j = 0; (int)v2 > (int)j; ++j) {
        unsigned int v5 = v4 + j;
        char v6 = *(unsigned char*)((long)j + v1) <= 31 || *(unsigned char*)((long)j + v1) > 126 ? 46: *(char*)((long)j + v1);
        *(char*)((long)v5 + (long)&v0) = *(unsigned char*)((long)j + v1) <= 31 || *(unsigned char*)((long)j + v1) > 126 ? 46: *(char*)((long)j + v1);
    }
    while((int)j <= 15) {
        *(char*)((long)(v4 + j) + (long)&v0) = 32;
        ++j;
    }
    ___inline_strcpy_chk((long)v4 + (long)j + (long)&v0, &gvar_100000ECA);
    →_puts();
    long result = (long)pseudoGuardStack64;
    if((*(long*)result ^ pseudoGuardStack64)) {
        result = →___stack_chk_fail();
    }
    return result;
}

long _hexdump(long param0) {
    int v0;
    unsigned long v1;
    char v2;
    long v3 = /*BAD_CALL!*/ →_stat$INODE64();
    if((unsigned int)v3) {
        →_perror();
        v0 = 1;
    }
    else {
        long v4 = →_fopen();
        if(!v4) {
            →_perror();
            v0 = 1;
        }
        else {
            long v5 = 0L;
            while(v1 > (unsigned long)v5) {
                long v6 = →_fread();
                if(!(unsigned int)v6) {
                    break;
                }
                else {
                    _dumpline(&v2, v5, (unsigned int)v6);
                    v5 += (long)(unsigned int)v6;
                }
            }
            →_fclose();
            v0 = 0;
        }
    }
    return (long)v0;
}

long _main(long param0, long param1) {
    unsigned int v0 = (unsigned int)param0;
    long v1 = param1;
    int v2 = 0;
    for(unsigned int i = 1; (int)v0 > (int)i; ++i) {
        long v3 = _hexdump(*(long*)((long)i * 8L + v1));
        v2 += (unsigned int)v3;
    }
    return (unsigned long)v2;
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
    long v9 = v0;
    long v10 = &v2;
    int v11 = (unsigned int)v9;
    int v12 = 0;
    unsigned int v13 = (unsigned int)v9;
    int v14 = v11 + 1;
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
    unsigned long* ptr2 = (unsigned long*)(v23 + &v2);
    char v30 = ptr2 ? 0: 1;
    char v31 = (long)ptr2 < 0L;
    char v32 = __parity__((unsigned char)ptr2);
    char v33 = (long*)((long)(long*)((long)(long*)((v29 ^ &v2) ^ (long)ptr2) >>> 4L) & 0x1L);
    char v34 = __carry__(v29, &v2);
    char v35 = (long)(long*)((long)(long*)((long)ptr2 ^ v29) & ~(v29 ^ &v2)) < 0L;
    unsigned long* ptr3 = ptr2;
    while(1) {
        char v36 = *ptr3 ? 0: 1;
        char v37 = *ptr3 < 0L;
        char v38 = __parity__((unsigned char)*ptr3);
        char v39 = *ptr3 < 0L;
        char v40 = 0;
        char v41 = 0;
        if(v36) {
            break;
        }
        else {
            unsigned long* ptr4 = ptr3;
            ++ptr3;
            char v42 = ptr3 ? 0: 1;
            char v43 = (long)ptr3 < 0L;
            char v44 = __parity__((unsigned char)ptr3);
            char v45 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr4 ^ 0x8L) ^ (long)ptr3) >>> 4L) & 0x1L);
            char v46 = (unsigned long)ptr4 >= 18446744073709551608L;
            char v47 = (long)(long*)((long)(long*)((long)ptr3 ^ (long)ptr4) & (long*)~(long)(long*)((long)ptr4 ^ 0x8L)) < 0L;
        }
    }
    unsigned long* ptr5 = ptr3;
    long* ptr6 = (long*)(ptr3 + 1);
    char v48 = ptr6 ? 0: 1;
    char v49 = (long)ptr6 < 0L;
    char v50 = __parity__((unsigned char)ptr6);
    char v51 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr5 ^ 0x8L) ^ (long)ptr6) >>> 4L) & 0x1L);
    char v52 = (unsigned long)ptr5 >= 18446744073709551608L;
    char v53 = (long)(long*)((long)(long*)((long)ptr6 ^ (long)ptr5) & (long*)~(long)(long*)((long)ptr5 ^ 0x8L)) < 0L;
    long v54 = _main(v9, &v2);
    long v55 = (unsigned long)(unsigned int)v54;
    long* ptr7 = &ptr0;
    long v56 = →_exit();
    hlt();
}
