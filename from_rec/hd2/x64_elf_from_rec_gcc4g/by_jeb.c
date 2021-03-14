
int dumpline(long param0, long param1, int param2) {
    char v0;
    char v1;
    long v2 = param0;
    long v3 = param1;
    int max = param2;
    →sprintf(&v0, "%08lX:", v3);
    if(max > 16) {
        max = 16;
    }
    int j = 0;
    char* i;
    for(i = (char*)j; max > j; i = (char*)j) {
        →sprintf((char*)((long)(j * 3) + (long)&v1), " %02lX");
        ++j;
    }
    while(1) {
        i = (unsigned long)(j <= 15 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)i >>> 8L) & 0xffffffffffffffL) << 8);
        ++j;
        if(!(unsigned char)i) {
            break;
        }
        else {
            i = →strcat(&v0, (char*)&gvar_400B8A);
        }
    }
    size_t v4 = →strlen(&v0);
    int v5 = (unsigned int)v4;
    →memcpy((void*)((long)v5 + (long)&v0), (void*)&gvar_400B8E, 4L);
    v5 += 3;
    for(j = 0; j < max; ++j) {
        *(char*)((long)(j + v5) + (long)&v0) = *(unsigned char*)((long)j + v2) > 31 && *(unsigned char*)((long)j + v2) <= 126 ? *(char*)((long)j + v2): '.';
    }
    while(j <= 15) {
        *(char*)((long)(j + v5) + (long)&v0) = ' ';
        ++j;
    }
    →memcpy((void*)((long)j + (long)v5 + (long)&v0), (void*)&gvar_400B92, 2L);
    return →puts(&v0);
}

long hexdump(char* param0) {
    long result;
    char v0;
    unsigned long v1;
    char v2;
    char* __file = param0;
    int v3 = stat(__file, &v0);
    if((unsigned int)v3) {
        →perror(__file);
        result = 1L;
    }
    else {
        FILE* __stream = →fopen(__file, (char*)&gvar_400B94);
        if(!__stream) {
            →perror(__file);
            result = 1L;
        }
        else {
            long v4 = 0L;
            while(v1 > (unsigned long)v4) {
                size_t v5 = →fread(&v2, 1L, 16L, __stream);
                int v6 = (int)v5;
                if(!v6) {
                    break;
                }
                else {
                    dumpline((long)&v2, v4, v6);
                    v4 += (long)v6;
                }
            }
            →fclose(__stream);
            result = 0L;
        }
    }
    return result;
}

long main(int param0, long param1) {
    int max = param0;
    long v0 = param1;
    int v1 = 0;
    for(int i = 1; i < max; ++i) {
        long v2 = hexdump(*(char**)((long)i * 8L + v0));
        v1 += (unsigned int)v2;
    }
    return (unsigned long)v1;
}

int stat(char* __file, stat* __buf) {
    return →__xstat(1, __file, __buf);
}

void sub_4005F0() {
    jump gvar_600E90;
}
