
int dumpline(int param0, int param1, int param2) {
    char v0;
    char v1;
    →sprintf(&v0, "%08lX:", param1);
    if(param2 > 16) {
        param2 = 16;
    }
    int i;
    for(i = 0; i < param2; ++i) {
        int v2 = (unsigned int)*(char*)(i + param0);
        →sprintf((char*)(i * 3 + (int)&v1), " %02lX");
    }
    while(1) {
        int v3 = i;
        ++i;
        if(v3 > 15) {
            break;
        }
        else {
            →strcat(&v0, (char*)&gvar_80489D6);
        }
    }
    size_t v4 = →strlen(&v0);
    →strcpy((char*)((int)&v0 + v4), (char*)&gvar_80489DA);
    for(i = 0; i < param2; ++i) {
        int v5 = v4 + i;
        unsigned char* ptr0 = (unsigned char*)(i + param0);
        if(*ptr0 > 31) {
            ptr0 = (unsigned char*)(i + param0);
            if(*ptr0 > 126) {
                goto loc_8048770;
            }
            else {
                ptr0 = (unsigned int)*(char*)(i + param0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            }
        }
        else {
        loc_8048770:
            ptr0 = (unsigned int)46 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        }
        *(char*)(v5 + (int)&v0) = (char)ptr0;
    }
    while(i <= 15) {
        *(char*)((int)(int*)((int)&v0 + v4) + i) = ' ';
        ++i;
    }
    →strcpy((char*)((int)(int*)((int)&v0 + v4) + i), (char*)&gvar_80489DE);
    return →printf((char*)&gvar_80489E0, &v0);
}

void fini_dummy() {
}

int hexdump(char* __file) {
    int result;
    char v0;
    unsigned int v1;
    char v2;
    int v3 = stat(__file, &v0);
    if(!v3) {
        →perror(__file);
        result = 1;
    }
    else {
        FILE* __stream = →fopen(__file, (char*)&gvar_80489E4);
        if(!__stream) {
            →perror(__file);
            result = 1;
        }
        else {
            int v4 = 0;
            while(v1 > (unsigned int)v4) {
                int v5 = (int)→fread(&v2, 1, 16, __stream);
                if(!v5) {
                    break;
                }
                else {
                    dumpline((int)&v2, v4, v5);
                    v4 += v5;
                }
            }
            →fclose(__stream);
            result = 0;
        }
    }
    return result;
}

void init_dummy() {
}

int main(int param0, int param1) {
    int result = 0;
    for(int i = 1; i < param0; ++i) {
        int v0 = hexdump(*(char**)(i * 4 + param1));
        result += v0;
    }
    return result;
}

int stat(char* __file, stat* __buf) {
    int result;
    →_xstat();
    return result;
}

void sub_80484A8() {
    jump gvar_8049A04;
}

int sub_80484BE() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_80484CE() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_80484DE() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_80484EE() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_80484FE() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804850E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804851E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804852E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804853E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804854E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804855E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804856E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804857E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_804858E() {
    /*BAD_CALL!*/ sub_80484A8();
}

int sub_8048604() {
    128 = int(128);
}

int sub_8048617() {
    128 = int(128);
}

int sub_80486CE() {
    int v0;
    int* ptr0;
    while(1) {
        int v1 = *(ptr0 - 21);
        *(ptr0 - 21) = *(ptr0 - 21) + 1;
        if(v1 > 15) {
            break;
        }
        else {
            →strcat((char*)(ptr0 - 20), (char*)&gvar_80489D6);
        }
    }
    size_t v2 = →strlen((char*)(ptr0 - 20));
    *(size_t*)(ptr0 - 22) = v2;
    →strcpy((char*)((int*)(*(ptr0 - 22) + (int)ptr0) - 20), (char*)&gvar_80489DA);
    *(ptr0 - 21) = 0;
    while(*(ptr0 + 4) > *(ptr0 - 21)) {
        int v3 = *(ptr0 - 22) + *(ptr0 - 21);
        unsigned char* ptr1 = (unsigned char*)(*(ptr0 + 2) + *(ptr0 - 21));
        if(*ptr1 > 31) {
            ptr1 = (unsigned char*)(*(ptr0 + 2) + *(ptr0 - 21));
            if(*ptr1 > 126) {
                goto loc_8048770;
            }
            else {
                ptr1 = (unsigned int)*(char*)(*(ptr0 + 2) + *(ptr0 - 21)) | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
            }
        }
        else {
        loc_8048770:
            ptr1 = (unsigned int)46 | ((unsigned int)(int*)((int)(int*)((int)ptr1 >>> 8) & 0xffffff) << 8);
        }
        *(char*)((int*)(v3 + (int)ptr0) - 20) = (unsigned char)ptr1;
        *(ptr0 - 21) = *(ptr0 - 21) + 1;
    }
    while(*(ptr0 - 21) <= 15) {
        *(char*)(*(ptr0 - 22) + *(ptr0 - 21) + (int)(ptr0 - 20)) = 32;
        *(ptr0 - 21) = *(ptr0 - 21) + 1;
    }
    int v4 = &gvar_80489DE;
    →strcpy((char*)(*(ptr0 - 21) + *(ptr0 - 22) + (int)(ptr0 - 20)), (char*)&gvar_80489DE);
    →printf((char*)&gvar_80489E0, ptr0 - 20);
    jump v0;
}

int sub_80488FE() {
    int* ptr0;
    do {
        int v0 = hexdump(*(char**)(*(ptr0 - 1) * 4 + *(ptr0 + 3)));
        *(ptr0 - 2) = *(ptr0 - 2) + v0;
        *(ptr0 - 1) = *(ptr0 - 1) + 1;
    }
    while(*(ptr0 + 2) <= *(ptr0 - 1));
    return *(ptr0 - 2);
}
