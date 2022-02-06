
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

long _dumpline(char* param0, long param1, unsigned int param2) {
    long v0;
    char v1;
    long v2;
    unsigned int v3;
    long v4;
    long v5;
    char v6;
    char v7;
    long v8;
    long v9;
    long v10;
    long v11;
    long v12;
    long v13 = v10;
    long v14 = v11;
    long v15 = v12;
    long v16 = v9;
    long v17 = v8;
    char* ptr0 = param0;
    →___sprintf_chk();
    int v18 = 1;
    if((int)((int)param2 <= 16 ? param2: 16) > 0) {
        char* ptr1 = ptr0;
        unsigned int v19 = 0;
        int v20 = 0;
        do {
            →_sprintf();
            ++v19;
            ++ptr1;
            v20 += 3;
        }
        while(((int)param2 <= 16 ? param2: 16) != v19);
        if((int)((int)param2 <= 16 ? param2: 16) <= 15) {
            v18 = ((int)param2 <= 16 ? param2: 16) + 1;
            goto loc_100000BBA;
        }
        else {
            unsigned char* ptr2 = &v7;
            long v21 = -1L;
            do {
                v6 = *ptr2 == 0;
                ++ptr2;
                --v21;
            }
            while(~v6 && v21 == 0L);
            v5 = -2L - v21;
            *(int*)((long)(unsigned int)v5 + (long)&v7) = 0x7c2020;
            v4 = (unsigned long)((unsigned int)v5 + 3);
            v3 = 0;
            v2 = 0L;
            goto loc_100000C2A;
        }
    }
    else {
    loc_100000BBA:
        do {
            →___strcat_chk();
            ++v18;
        }
        while(v18 == 16 || (int)(unsigned int)(v18 - 1) < 15);
        unsigned char* ptr3 = &v7;
        long v22 = -1L;
        do {
            v1 = *ptr3 == 0;
            ++ptr3;
            --v22;
        }
        while(~v1 && v22 == 0L);
        v5 = -2L - v22;
        *(int*)((long)(unsigned int)v5 + (long)&v7) = 0x7c2020;
        v4 = (unsigned long)((unsigned int)v5 + 3);
        v3 = 0;
        v2 = 0L;
        if((int)((int)param2 <= 16 ? param2: 16) <= 0) {
            v0 = 0L;
            goto loc_100000C04;
        }
        else {
        loc_100000C2A:
            do {
                *(char*)((long)((unsigned int)v5 + (unsigned int)v2 + 3) + (long)&v7) = (unsigned char)(*(char*)(v2 + (long)ptr0) + 224) < 95 ? *(char*)(v2 + (long)ptr0): 46;
                ++v3;
                ++v2;
            }
            while(((int)param2 <= 16 ? param2: 16) != v3);
            v0 = (unsigned long)v3;
        }
        if((int)v3 <= 15) {
            v0 = (int)param2 <= 16 ? (unsigned long)param2: 16L;
        loc_100000C04:
            int v23 = (unsigned int)v0 + (unsigned int)v4;
            do {
                *(char*)((long)v23 + (long)&v7) = 32;
                v0 = (unsigned long)((unsigned int)v0 + 1);
                ++v23;
            }
            while((unsigned int)v0 <= 15);
        }
    }
    *(short*)((long)(unsigned int)v0 + (long)(unsigned int)v4 + (long)&v7) = 124;
    →_puts();
    long result = (long)pseudoGuardStack64;
    if((*(long*)result ^ pseudoGuardStack64)) {
        result = →___stack_chk_fail();
    }
    return result;
}

long _hexdump(long param0) {
    long result;
    unsigned long v0;
    char v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6 = v3;
    long v7 = v4;
    long v8 = v2;
    long v9 = v5;
    long v10 = /*BAD_CALL!*/ →_stat$INODE64();
    if((unsigned int)v10) {
        →_perror();
        result = 1L;
    }
    else {
        long v11 = →_fopen();
        if(v11) {
            long v12 = 0L;
            if(v0) {
                do {
                    long v13 = /*BAD_CALL!*/ →_fread();
                    if(!(unsigned int)v13) {
                        break;
                    }
                    else {
                        _dumpline(&v1, v12, (unsigned int)v13);
                        v12 += (long)(unsigned int)v13;
                    }
                }
                while((unsigned long)v12 < v0);
            }
            →_fclose();
            result = 0L;
        }
        else {
            →_perror();
            result = 1L;
        }
    }
    return result;
}

int _main(long param0, long param1) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4 = v1;
    long v5 = v2;
    long v6 = v3;
    long v7 = v0;
    int result = 0;
    if((unsigned int)param0 > 1) {
        long v8 = param1;
        unsigned int v9 = 1;
        result = 0;
        do {
            long v10 = _hexdump(*(long*)(v8 + 8L));
            result += (unsigned int)v10;
            ++v9;
            v8 += 8L;
        }
        while((unsigned int)param0 != v9);
    }
    return result;
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
    int v54 = _main(v9, &v2);
    long v55 = (unsigned long)(unsigned int)v54;
    long* ptr7 = &ptr0;
    long v56 = →_exit();
    hlt();
}
