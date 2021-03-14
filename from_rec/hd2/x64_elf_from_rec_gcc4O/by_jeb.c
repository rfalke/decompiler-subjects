
int dumpline(char* param0, long param1, int param2) {
    long v0;
    long v1;
    char v2;
    char v3;
    char* ptr0;
    →sprintf(&v2, "%08lX:", param1);
    long v4 = param2 <= 16 ? (unsigned long)param2: 16L;
    long v5 = 1L;
    if(!((unsigned int)v4 ? 0: 1) && (unsigned int)v4 >= 0) {
        char* ptr1 = ptr0;
        int v6 = 0;
        do {
            →sprintf((char*)((long)v6 + (long)&v3), " %02lX");
            ++ptr1;
            v6 += 3;
        }
        while((unsigned int)ptr1 - (unsigned int)ptr0 < (unsigned int)v4);
        if((unsigned int)v4 <= 15) {
            v5 = (v4 + 1L) & 0xffffffffL;
            goto loc_400759;
        }
        else {
            char* ptr2 = &v2;
            long v7 = -1L;
            while(v7 != 0L) {
                char v8 = ptr2[0] == 0;
                ++ptr2;
                --v7;
                if(!~v8) {
                    break;
                }
            }
            v1 = ~v7 - 1L;
            *(int*)((long)(unsigned int)v1 + (long)&v2) = 0x7c2020;
            v0 = (unsigned long)((unsigned int)v1 + 3);
            goto loc_4007B4;
        }
    }
    else {
    loc_400759:
        do {
            long v9 = -1L;
            while(v9 != 0L) {
                --v9;
                if(v2 == 0) {
                    break;
                }
            }
            *(int*)((char*)(~v9 + (long)&v2) - 1L) = 0x202020;
            v5 = (unsigned long)((unsigned int)v5 + 1);
        }
        while((unsigned int)v5 - 1 <= 15);
        char* ptr3 = &v2;
        long v10 = -1L;
        while(v10 != 0L) {
            char v11 = ptr3[0] == 0;
            ++ptr3;
            --v10;
            if(!~v11) {
                break;
            }
        }
        v1 = ~v10 - 1L;
        *(int*)((long)(unsigned int)v1 + (long)&v2) = 0x7c2020;
        v0 = (unsigned long)((unsigned int)v1 + 3);
        if((((unsigned int)v4 ? 0: 1) || (unsigned int)v4 < 0)) {
            v4 = 0L;
        }
        else {
        loc_4007B4:
            long* ptr4 = (long*)((char*)(((v4 - 1L) & 0xffffffffL) + (long)ptr0) + 1L);
            char* ptr5 = ptr0;
            long v12 = (unsigned long)((unsigned int)v1 - (unsigned int)ptr0 + 3);
            do {
                *(char*)((long)((unsigned int)ptr5 + (unsigned int)v12) + (long)&v2) = (unsigned char)(*ptr5 + 224) < 95 ? *ptr5: '.';
                ++ptr5;
            }
            while(ptr5 != ptr4);
            if((unsigned int)v4 > 15) {
                *(short*)((long)(unsigned int)v0 + (long)(unsigned int)v4 + (long)&v2) = 124;
                return →puts(&v2);
            }
        }
        int v13 = (unsigned int)v0 + (unsigned int)v4;
        do {
            *(char*)((long)v13 + (long)&v2) = ' ';
            v4 = (unsigned long)((unsigned int)v4 + 1);
            ++v13;
        }
        while((unsigned int)v4 <= 15);
    }
    *(short*)((long)(unsigned int)v0 + (long)(unsigned int)v4 + (long)&v2) = 124;
    return →puts(&v2);
}

long hexdump(char* __filename) {
    long result;
    char v0;
    unsigned long v1;
    char v2;
    int v3 = →__xstat(1, __filename, &v0);
    if((unsigned int)v3) {
        →perror(__filename);
        result = 1L;
    }
    else {
        FILE* __stream = →fopen(__filename, (char*)&gvar_400A5A);
        if(__stream) {
            long v4 = 0L;
            if(v1) {
                do {
                    size_t v5 = /*BAD_CALL!*/ →fread(&v2, 1L, 16L, __stream);
                    if(!(int)v5) {
                        break;
                    }
                    else {
                        dumpline((char*)&v2, v4, (int)v5);
                        v4 += (long)(int)v5;
                    }
                }
                while((unsigned long)v4 < v1);
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

long main(int param0, long param1) {
    int v0 = 0;
    if(param0 > 1) {
        long v1 = param1;
        int v2 = 1;
        do {
            long v3 = hexdump(*(char**)(v1 + 8L));
            v0 += (unsigned int)v3;
            ++v2;
            v1 += 8L;
        }
        while(v2 < param0);
    }
    return (unsigned long)v0;
}

void sub_400540() {
    jump gvar_600D70;
}
