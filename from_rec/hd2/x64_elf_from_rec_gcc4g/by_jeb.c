
long dumpline(long param0, long param1, unsigned int param2) {
    char v0;
    unsigned int v1;
    long result;
    long v2;
    long v3 = v2;
    long v4 = param0;
    unsigned int v5 = param2;
    →sprintf(&v0, "%08lX:");
    if((int)v5 > 16) {
        v5 = 16;
    }
    unsigned int j = 0;
    long i;
    for(i = (unsigned long)j; (int)v5 > (int)j; i = (unsigned long)j) {
        →sprintf((char*)((long)(j * 3) + (long)&v0) + 9L, " %02lX");
        ++j;
    }
    while(1) {
        i = (unsigned long)((int)j > 15 ? 0: 1) | ((unsigned long)((i >>> 8L) & 0xffffffffffffffL) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            →strcat(&v0, (char*)&gvar_400B8A);
        }
    }
    →strlen(&v0);
    unsigned int v6 = v1;
    →memcpy(&v0, (void*)&gvar_400B8E, 4L);
    v6 += 3;
    for(j = 0; (int)v5 > (int)j; ++j) {
        *(char*)((long)(j + v6) + (long)&v0) = *(unsigned char*)((long)j + v4) <= 31 || *(unsigned char*)((long)j + v4) > 126 ? '.': *(char*)((long)j + v4);
    }
    while((int)j <= 15) {
        *(char*)((long)(j + v6) + (long)&v0) = ' ';
        ++j;
    }
    →memcpy((void*)((long)j + (long)v6 + (long)&v0), (void*)&gvar_400B92, 2L);
    →puts(&v0);
    return result;
}

long hexdump(char* param0) {
    long result;
    char v0;
    unsigned long v1;
    char v2;
    FILE* ptr0;
    unsigned int v3;
    char* __file = param0;
    int v4 = /*BAD_CALL!*/ stat(__file, &v0);
    if((unsigned int)v4) {
        →perror(__file);
        result = 1L;
    }
    else {
        →fopen(__file, (char*)&gvar_400B94);
        FILE* __stream = ptr0;
        if(!__stream) {
            →perror(__file);
            result = 1L;
        }
        else {
            long v5 = 0L;
            while(v1 > (unsigned long)v5) {
                →fread(&v2, 1L, 16L, __stream);
                unsigned int v6 = v3;
                if(!v6) {
                    break;
                }
                else {
                    dumpline((long)&v2, v5, v6);
                    v5 += (long)v6;
                }
            }
            →fclose(__stream);
            result = 0L;
        }
    }
    return result;
}

long main(long param0, long param1) {
    unsigned int v0 = (unsigned int)param0;
    long v1 = param1;
    int v2 = 0;
    for(unsigned int i = 1; (int)v0 > (int)i; ++i) {
        long v3 = hexdump(*(char**)((long)i * 8L + v1));
        v2 += (unsigned int)v3;
    }
    return (unsigned long)v2;
}

int stat(char* __file, stat* __buf) {
    int result;
    →__xstat(1L, __file, __buf);
    return result;
}

long sub_4005F6() {
    return gvar_600E90();
}
