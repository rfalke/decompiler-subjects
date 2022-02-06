
int start(int param0, int param1) {
    char v0;
    int v1 = sub_80481FE(param0, param1);
    int v2 = gvar_8048343;
    int v3 = 0;
    int v4 = 134553487;
    int v5 = /*BAD_CALL!*/ sub_804830A(0, v2);
    short v6 = (unsigned short)(v5 >>> 16);
    short v7 = 0x1bb0;
    int v8 = param1;
    short* ptr0 = (short*)&gvar_804834F;
    while(v8 != 0) {
        *ptr0 = 0x1bb0;
        ++ptr0;
        --v8;
    }
    short v9 = sub_8048160();
    int v10 = gvar_8048343;
    int v11 = 0;
    int v12 = &gvar_804834F;
    int v13 = sub_8048318(0, v10);
    int v14 = 1;
    int v15 = &gvar_804834B;
    int v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 1;
    char v20 = 0;
    char v21 = 0;
    int v22 = 3;
    int v23 = 3;
    int* ptr1 = &v0;
    interrupt(128);
}

short sub_8048160() {
    short* ptr0;
    int v0 = sub_80482F0(513);
    int v1 = 64;
    do {
        *ptr0 = 475;
        ++ptr0;
        --v1;
    }
    while(v1 == 0);
    while(1) {
        int v2 = 10;
        short v3 = (short)sub_80482F0(523);
        *ptr0 = 221;
        short* ptr1 = ptr0 + 1;
        int v4 = 62;
        v3 = (unsigned int)32 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)(v3 >>> 16) << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        while(v4 != 0) {
            *ptr1 = (unsigned short)v3;
            ++ptr1;
            --v4;
        }
        v3 = (unsigned int)222 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        *ptr1 = (unsigned short)v3;
        v3 = (unsigned int)3 | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        *(char*)((char*)ptr1 + 3) = (unsigned char)v3;
        *(char*)((char*)ptr1 + 5) = (unsigned char)v3;
        jump v2 != 1 ? &loc_8048177: &sub_804819E;
    }
}

int sub_804819E() {
    short* ptr0;
    int v0 = sub_80482F0(524);
    int v1 = 64;
    v0 = (unsigned int)475 | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    while(v1 != 0) {
        *ptr0 = (unsigned short)v0;
        ++ptr0;
        --v1;
    }
    *(char*)((char*)ptr0 + 1) = 3;
    *(char*)((char*)ptr0 + 3) = 3;
    int v2 = sub_80482F0(1037);
    while(1) {
        *(char*)((char*)ptr0 + 5) = (unsigned char)v2;
    }
}

int sub_80481FE(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v3;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr1 = &v0;
    int v8 = 2;
    int v9 = "/dev/vcsa";
    int v10 = 5;
    int v11 = 5;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_80482A7(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v3;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr1 = &v0;
    int v8 = 134593523;
    int v9 = 21506;
    int v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    int v16 = 54;
    int v17 = 54;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_804830A(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    int v3 = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v2;
    int* ptr1 = &v0;
    int v7 = sub_8048326(param0);
    char v8 = 1;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    int v13 = 180;
    interrupt(128);
}

int sub_8048318(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    int v3 = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v2;
    int* ptr1 = &v0;
    int v7 = sub_8048326(param0);
    char v8 = 1;
    char v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 0;
    int v13 = 181;
    interrupt(128);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048326(int param0) {
    return sub_80482F0(param0);
}
