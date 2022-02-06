
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char v6;
    int v7 = v4;
    int v8 = param0;
    int v9 = param1;
    int v10 = param1;
    char v11 = v10 ? 0: 1;
    char v12 = v10 < 0;
    char v13 = __parity__((unsigned char)v10);
    char v14 = 0;
    char v15 = 0;
    if(!v11) {
        int v16 = v10;
        int v17 = v5;
        v5 = v16;
        v3 = 4;
        v2 = &gvar_804813E;
        v1 = 1;
        param1 = 4;
        v0 = 4;
        ptr0 = &v6;
        interrupt(128);
    }
    v3 = 188;
    v2 = &gvar_8048142;
    v1 = 1;
    param1 = 4;
    v0 = 4;
    ptr0 = &v6;
    interrupt(128);
}

int sub_804812B() {
    char* ptr0;
    int result = 0;
    int v0 = 0;
    while(1) {
        result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)result) {
            return result;
        }
        result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        v0 = v0 * 10 + result;
    }
    return result;
}
