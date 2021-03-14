
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

long _dumpline(long param0, long param1, int param2) {
    long v0;
    long v1;
    int v2;
    long v3;
    long v4;
    char v5;
    long v6 = param0;
    →___sprintf_chk();
    long v7 = 1L;
    if(!(param2 <= 16 ? param2: 16 ? 0: 1) && (param2 <= 16 ? param2: 16) >= 0) {
        long v8 = v6;
        int v9 = 0;
        int v10 = 0;
        do {
            →_sprintf();
            ++v9;
            ++v8;
            v10 += 3;
        }
        while((param2 <= 16 ? param2: 16) != v9);
        if((param2 <= 16 ? param2: 16) <= 15) {
            v7 = ((param2 <= 16 ? (unsigned long)param2: 16L) + 1L) & 0xffffffffL;
            goto loc_100000BBA;
        }
        else {
            char* ptr0 = &v5;
            long v11 = -1L;
            while(v11 != 0L) {
                char v12 = *ptr0 == 0;
                ++ptr0;
                --v11;
                if(!~v12) {
                    break;
                }
            }
            v4 = ~v11 - 1L;
            *(int*)((long)(unsigned int)v4 + (long)&v5) = 0x7c2020;
            v3 = (v4 + 3L) & 0xffffffffL;
            v2 = 0;
            v1 = 0L;
            goto loc_100000C2A;
        }
    }
    else {
    loc_100000BBA:
        do {
            →___strcat_chk();
            v7 = (unsigned long)((unsigned int)v7 + 1);
        }
        while((unsigned int)v7 - 1 <= 15);
        char* ptr1 = &v5;
        long v13 = -1L;
        while(v13 != 0L) {
            char v14 = *ptr1 == 0;
            ++ptr1;
            --v13;
            if(!~v14) {
                break;
            }
        }
        v4 = ~v13 - 1L;
        *(int*)((long)(unsigned int)v4 + (long)&v5) = 0x7c2020;
        v3 = (v4 + 3L) & 0xffffffffL;
        v2 = 0;
        v1 = 0L;
        if(((param2 <= 16 ? param2: 16 ? 0: 1) || (param2 <= 16 ? param2: 16) < 0)) {
            v0 = 0L;
            goto loc_100000C04;
        }
        else {
        loc_100000C2A:
            do {
                *(char*)((long)((unsigned int)v4 + (unsigned int)v1 + 3) + (long)&v5) = (unsigned char)(*(char*)(v1 + v6) + 224) < 95 ? *(char*)(v1 + v6): 46;
                ++v2;
                ++v1;
            }
            while((param2 <= 16 ? param2: 16) != v2);
            v0 = (unsigned long)v2;
        }
        if(v2 <= 15) {
            v0 = param2 <= 16 ? (unsigned long)param2: 16L;
        loc_100000C04:
            int v15 = (unsigned int)v0 + (unsigned int)v3;
            do {
                *(char*)((long)v15 + (long)&v5) = 32;
                v0 = (unsigned long)((unsigned int)v0 + 1);
                ++v15;
            }
            while((unsigned int)v0 <= 15);
        }
    }
    *(short*)((long)(unsigned int)v0 + (long)(unsigned int)v3 + (long)&v5) = 124;
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
    long v2 = →_stat$INODE64();
    if((unsigned int)v2) {
        →_perror();
        result = 1L;
    }
    else {
        long v3 = →_fopen();
        if(v3) {
            long v4 = 0L;
            if(v0) {
                do {
                    long v5 = /*BAD_CALL!*/ →_fread();
                    if(!(int)v5) {
                        break;
                    }
                    else {
                        _dumpline(&v1, v4, (int)v5);
                        v4 += (long)(int)v5;
                    }
                }
                while((unsigned long)v4 < v0);
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

long _main(int param0, long param1) {
    int v0 = 0;
    if(param0 > 1) {
        long v1 = param1;
        int v2 = 1;
        v0 = 0;
        do {
            long v3 = _hexdump(*(long*)(v1 + 8L));
            v0 += (unsigned int)v3;
            ++v2;
            v1 += 8L;
        }
        while(param0 != v2);
    }
    return (unsigned long)v0;
}

long start() {
    long v0;
    char v1;
    long v2 = 0L;
    for(long* i = (long*)((unsigned long)(((int)v0 + 1) * 8) + &v1); *i; ++i) {
    }
    long v3 = _main((int)v0, &v1);
    →_exit();
    hlt();
}
