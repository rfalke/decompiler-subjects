
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

long ___inline_strcpy_chk(long param0, long param1) {
    return →___strcpy_chk();
}

long _dumpline(long param0, long param1, int param2) {
    char v0;
    long v1 = param0;
    int max = param2;
    →___sprintf_chk();
    if(max > 16) {
        max = 16;
    }
    int j = 0;
    long i;
    for(i = (long)j; max > j; i = (long)j) {
        →___sprintf_chk();
        ++j;
    }
    while(1) {
        i = (unsigned long)(j <= 15 ? 1: 0) | ((unsigned long)((i >>> 8L) & 0xffffffffffffffL) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            i = →___strcat_chk();
        }
    }
    long v2 = →_strlen();
    ___inline_strcpy_chk((long)(unsigned int)v2 + (long)&v0, &gvar_100000EC6);
    int v3 = (unsigned int)v2 + 3;
    for(j = 0; j < max; ++j) {
        int v4 = v3 + j;
        char v5 = *(unsigned char*)((long)j + v1) > 31 && *(unsigned char*)((long)j + v1) <= 126 ? *(char*)((long)j + v1): 46;
        *(char*)((long)v4 + (long)&v0) = *(unsigned char*)((long)j + v1) > 31 && *(unsigned char*)((long)j + v1) <= 126 ? *(char*)((long)j + v1): 46;
    }
    while(j <= 15) {
        *(char*)((long)(v3 + j) + (long)&v0) = 32;
        ++j;
    }
    ___inline_strcpy_chk((long)v3 + (long)j + (long)&v0, &gvar_100000ECA);
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
    long v3 = →_stat$INODE64();
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
                if(!(int)v6) {
                    break;
                }
                else {
                    _dumpline(&v2, v5, (int)v6);
                    v5 += (long)(int)v6;
                }
            }
            →_fclose();
            v0 = 0;
        }
    }
    return (long)v0;
}

long _main(int param0, long param1) {
    int max = param0;
    long v0 = param1;
    int v1 = 0;
    for(int i = 1; i < max; ++i) {
        long v2 = _hexdump(*(long*)((long)i * 8L + v0));
        v1 += (unsigned int)v2;
    }
    return (unsigned long)v1;
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
