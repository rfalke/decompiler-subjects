
long dumpline(char* param0, long param1, unsigned int param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    unsigned char v5;
    char v6;
    long result;
    char* ptr0;
    char v7;
    *(long*)&v4 = &loc_4006E8;
    /*BAD_CALL!*/ →sprintf(&v5, "%08lX:");
    long v8 = (int)param2 <= 16 ? (unsigned long)param2: 16L;
    int v9 = 1;
    if(!((unsigned int)v8 ? 0: 1) && (unsigned int)v8 >= 0) {
        char* ptr1 = ptr0;
        int v10 = 0;
        do {
            *(long*)&v4 = &loc_400727;
            /*BAD_CALL!*/ →sprintf((char*)((long)v10 + (long)&v7), " %02lX");
            ++ptr1;
            v10 += 3;
        }
        while((int)(unsigned int)((unsigned int)ptr1 - (unsigned int)ptr0) < (unsigned int)v8);
        if((unsigned int)v8 <= 15) {
            v9 = (unsigned int)v8 + 1;
            goto loc_400759;
        }
        else {
            char* ptr2 = &v5;
            long v11 = -1L;
            do {
                v3 = ptr2[0] == 0;
                ++ptr2;
                --v11;
            }
            while(~v3 && v11 == 0L);
            v2 = -2L - v11;
            *(int*)((long)(unsigned int)v2 + (long)&v5) = 0x7c2020;
            v1 = (unsigned long)((unsigned int)v2 + 3);
            goto loc_4007B4;
        }
    }
    else {
    loc_400759:
        do {
            long v12 = -1L;
            while(v12 != 0L) {
                --v12;
                if(v5 == 0) {
                    break;
                }
            }
            *(int*)(~v12 + (long)&v6) = 0x202020;
            ++v9;
        }
        while(v9 == 16 || (int)(unsigned int)(v9 - 1) < 15);
        char* ptr3 = &v5;
        long v13 = -1L;
        do {
            v0 = ptr3[0] == 0;
            ++ptr3;
            --v13;
        }
        while(~v0 && v13 == 0L);
        v2 = -2L - v13;
        *(int*)((long)(unsigned int)v2 + (long)&v5) = 0x7c2020;
        v1 = (unsigned long)((unsigned int)v2 + 3);
        if((((unsigned int)v8 ? 0: 1) || (unsigned int)v8 < 0)) {
            v8 = 0L;
        }
        else {
        loc_4007B4:
            long* ptr4 = (long*)((char*)((unsigned long)((unsigned int)v8 - 1) + (long)ptr0) + 1L);
            char* ptr5 = ptr0;
            long v14 = (unsigned long)((unsigned int)v2 - (unsigned int)ptr0 + 3);
            do {
                *(char*)((long)((unsigned int)ptr5 + (unsigned int)v14) + (long)&v5) = (unsigned char)(*ptr5 + 224) < 95 ? *ptr5: '.';
                ++ptr5;
            }
            while(ptr5 != ptr4);
            if((unsigned int)v8 > 15) {
                *(short*)((long)(unsigned int)v1 + (long)(unsigned int)v8 + (long)&v5) = 124;
                *(long*)&v4 = &loc_400818;
                /*BAD_CALL!*/ →puts(&v5);
                return result;
            }
        }
        int v15 = (unsigned int)v1 + (unsigned int)v8;
        do {
            *(char*)((long)v15 + (long)&v5) = ' ';
            v8 = (unsigned long)((unsigned int)v8 + 1);
            ++v15;
        }
        while((unsigned int)v8 <= 15);
    }
    *(short*)((long)(unsigned int)v1 + (long)(unsigned int)v8 + (long)&v5) = 124;
    *(long*)&v4 = &loc_400818;
    /*BAD_CALL!*/ →puts(&v5);
    return result;
}

long hexdump(char* __filename) {
    long result;
    char v0;
    unsigned long v1;
    char v2;
    FILE* __stream;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    →__xstat(1L, __filename, &v0);
    if(v6) {
        →perror(__filename);
        result = 1L;
    }
    else {
        →fopen(__filename, (char*)&gvar_400A5A);
        if(__stream) {
            long v7 = 0L;
            if(v1) {
                do {
                    →fread(&v2, 1L, 16L, __stream);
                    if(!v3) {
                        break;
                    }
                    else {
                        dumpline((char*)&v2, v7, v4);
                        v7 += (long)v5;
                    }
                }
                while((unsigned long)v7 < v1);
            }
            →fclose(__stream);
            result = 0L;
        }
        else {
            →perror(__filename);
            result = 1L;
        }
    }
    return result;
}

long main(long param0, long param1) {
    int v0 = 0;
    if((unsigned int)param0 > 1) {
        long v1 = param1;
        unsigned int v2 = 1;
        do {
            long v3 = hexdump(*(char**)(v1 + 8L));
            v0 += (unsigned int)v3;
            ++v2;
            v1 += 8L;
        }
        while((int)(unsigned int)param0 > (int)v2);
    }
    return (unsigned long)v0;
}

long sub_400546() {
    return gvar_600D70();
}
