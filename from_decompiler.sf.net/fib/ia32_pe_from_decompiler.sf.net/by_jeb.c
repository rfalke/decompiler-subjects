
int start(int param0, int param1, int param2, int param3) {
    char v0;
    int v1;
    sub_401000(9);
    int v2 = sub_401000(8);
    return sub_401050((unsigned int)(v2 + v1), &v0, 100);
}

int sub_401000(int param0) {
    int v0;
    int v1;
    if(param0 < 1) {
        return 1;
    }
    int v2 = sub_401000(param0 - 2, v1);
    int v3 = sub_401000(param0 - 1, v0);
    return v3 + v2;
}

int sub_401050(unsigned int param0, char* param1, int param2) {
    char* ptr0 = param1;
    int result = param2;
    int* ptr1 = (int*)((char*)(result + (int)ptr0) - 1);
    if((unsigned int)ptr0 < (unsigned int)ptr1) {
        unsigned int v0 = param0;
        do {
            result = (unsigned int)((unsigned char)v0 - (unsigned char)v0 / 10 * 10 + 48) | ((unsigned int)(((v0 - v0 / 10 * 10) >>> 8) & 0xffffff) << 8);
            *ptr0 = (unsigned char)v0 - (unsigned char)v0 / 10 * 10 + 48;
            ++ptr0;
            v0 /= 10;
        }
        while((unsigned int)ptr0 < (unsigned int)ptr1);
    }
    *ptr0 = 0;
    return result;
}
