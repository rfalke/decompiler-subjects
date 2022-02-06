
int start(void* param0, void* param1, void* param2) {
    void* ptr0;
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int* ptr1;
    int v3;
    char v4;
    int v5 = v3;
    int v6 = v3;
    int v7 = v5 - 1;
    char v8 = v7 ? 0: 1;
    char v9 = v7 < 0;
    char v10 = __parity__((unsigned char)v7);
    char v11 = ((~v7 ^ ~v6) >>> 4) & 0x1;
    char v12 = ((v7 ^ v6) & v6) < 0;
    void* ptr2 = param0;
    if(!v8) {
        void* ptr3 = param1;
        ptr1 = &param2;
        v8 = ptr3 ? 0: 1;
        v9 = (int)ptr3 < 0;
        v10 = __parity__((unsigned char)ptr3);
        v12 = 0;
        char v13 = 0;
        if(!v8) {
            unsigned int v14 = sub_80480BE();
            gvar_80480E6 = v14;
            ptr3 = param2;
            ptr1 = &v4;
            v8 = ptr3 ? 0: 1;
            v9 = (int)ptr3 < 0;
            v10 = __parity__((unsigned char)ptr3);
            v12 = 0;
            v13 = 0;
            if(!v8) {
                unsigned int v15 = sub_80480BE();
                gvar_80480E2 = v15;
                v2 = gvar_80480E6;
                v1 = gvar_80480E2;
                v0 = 0;
                v8 = 1;
                v9 = 0;
                v10 = 1;
                v12 = 0;
                v13 = 0;
                ptr0 = (void*)0x61;
                ptr1 = &v4;
                interrupt(128);
            }
        }
        --ptr1;
        *ptr1 = 1;
        v0 = 1;
        ++ptr1;
        --ptr1;
        *ptr1 = 1;
        ptr0 = *ptr1;
        ++ptr1;
        interrupt(128);
    }
    v2 = 27;
    v1 = &gvar_804804C;
    v0 = 1;
    ptr0 = (void*)0x4;
    ptr1 = &param1;
    interrupt(128);
}

unsigned int sub_80480BE() {
    unsigned char* ptr0;
    unsigned char* ptr1 = ptr0;
    int v0 = 0;
    unsigned int v1 = 0;
    if(*ptr0 == 45) {
        v0 = (unsigned int)*ptr0;
        ++ptr0;
    }
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)v0) {
            break;
        }
        else {
            v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
            v1 = (unsigned int)(v1 * 10 + v0);
        }
    }
    return *ptr1 == 45 ? (unsigned int)(0 - v1): v1;
}
