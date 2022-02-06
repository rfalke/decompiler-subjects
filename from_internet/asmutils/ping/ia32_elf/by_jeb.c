
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int* ptr1;
    int v4;
    int v5 = v2;
    int v6 = v2;
    int v7 = v5 - 1;
    char v8 = v7 ? 0: 1;
    char v9 = v7 < 0;
    char v10 = __parity__((unsigned char)v7);
    char v11 = ((~v7 ^ ~v6) >>> 4) & 0x1;
    char v12 = ((v7 ^ v6) & v6) < 0;
    if(!v8) {
        int v13 = param0;
        int v14 = param1;
        param1 = 11;
        param0 = &gvar_8048054;
        int v15 = 134512970;
        int v16 = sub_804811E((int)ptr1, v4);
        *(int*)((char*)&gvar_8048148 + 2) = 2;
        v2 = v4;
        int v17 = 1;
        int v18 = 3;
        int v19 = 2;
        ptr1 = &v19;
        v1 = 1;
        int v20 = 102;
        v0 = 102;
        ptr0 = &v19;
        interrupt(128);
    }
    v1 = v3;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_804811E() {
    int v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    while(1) {
        int v4 = 0;
        while(1) {
            v2 = (unsigned int)*(char*)(v3 + v0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            ++v3;
            unsigned char v5 = (unsigned char)v2;
            v2 = (unsigned int)((unsigned char)v2 - 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
            if(v5 < 48) {
                break;
            }
            else {
                v4 = v4 * 10 + v2;
            }
        }
        *(char*)(v1 + 4) = (unsigned char)v4;
    }
}

void sub_804813F() {
}
