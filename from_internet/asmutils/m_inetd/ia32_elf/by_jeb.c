
int start(int param0, int param1, int param2) {
    int* ptr0;
    unsigned int v0;
    char v1;
    unsigned int v2;
    unsigned int v3 = v2;
    char v4 = v3 == 4;
    char v5 = (int)v3 < 4;
    char v6 = __parity__((unsigned char)v3 - 4);
    char v7 = v3 < 4;
    char v8 = (((v3 - 4) ^ v3) & (v3 ^ 0x4)) < 0;
    char v9 = (((v3 - 4) ^ (v3 ^ 0x4)) >>> 4) & 0x1;
    if(v5 == v8) {
        v4 = v3 == 5;
        v5 = (int)v3 < 5;
        v6 = __parity__((unsigned char)v3 - 5);
        v7 = v3 < 5;
        v8 = (((v3 - 5) ^ v3) & (v3 ^ 0x5)) < 0;
        v9 = (((v3 - 5) ^ (v3 ^ 0x5)) >>> 4) & 0x1;
        if((v4 || v5 != v8)) {
            if(v5 == v8) {
                gvar_80492A1 = (unsigned char)v3;
                gvar_8049299 = 134517361;
            }
            int v10 = param0;
            int v11 = param1;
            int v12 = sub_8048236();
            gvar_8049291 = v12;
            int v13 = param2;
            int v14 = sub_8048236();
            param2 = v14;
            param1 = 6;
            param0 = 1;
            v2 = 2;
            int* ptr1 = &v2;
            v1 = 1;
            int v15 = 0;
            unsigned int v16 = 102;
            v0 = 102;
            ptr0 = &v2;
            interrupt(128);
        }
    }
    v1 = 1;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_804821E() {
    int* ptr0;
    char* ptr1;
    unsigned int v0;
    int v1 = 0;
    do {
        unsigned int v2 = v0 % 10;
        v0 /= 10;
        ptr0 = ptr0 - 1;
        *ptr0 = (unsigned int)((unsigned char)v2 + 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        ++v1;
    }
    while(v0);
    while(1) {
        int v3 = *ptr0;
        ++ptr0;
        *ptr1 = (unsigned char)v3;
        jump v1 != 1 ? &loc_8048231: &sub_8048235;
    }
}

void sub_8048235() {
}

int sub_8048236() {
    char* ptr0;
    int result = 0;
    int v0 = 0;
    int v1 = 10;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        unsigned char v2 = (unsigned char)v0;
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if(v2 < 48 || (unsigned char)v0 > 9) {
            return result;
        }
        result = result * 10 + v0;
    }
    return result;
}

char sub_8048253() {
    char* ptr0;
    char* ptr1;
    while(1) {
        char v0 = *ptr0;
        ++ptr0;
        if(!v0) {
            return 0;
        }
        *ptr1 = v0;
        ++ptr1;
    }
    return 0;
}
