
int start() {
    char v0;
    int v1 = 24;
    int v2 = 24;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048083() {
    char v0;
    int v1 = 134512935;
    int v2 = 64;
    int v3 = 80;
    int v4 = 80;
    int* ptr0 = &v0;
    interrupt(128);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80480D4(int* param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1 = &ptr0;
    int result = v0;
    int* ptr2 = param0;
    int v2 = param1;
    int v3 = v1;
    int* ptr3 = &ptr0;
    char v4 = v0 ? 0: 1;
    char v5 = v0 < 0;
    char v6 = __parity__((unsigned char)v0);
    char v7 = 0;
    char v8 = 0;
    if(!v5) {
        int v9 = &gvar_80481A7;
        int v10 = &gvar_80481A7;
        int v11 = v1;
        int v12 = sub_8048108((int)param0, param1);
        v12 = (unsigned int)9 | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
        gvar_80481A7 = 9;
        int v13 = 134513064;
        int v14 = v11;
        int* ptr4 = &v11;
        char v15 = 4;
        int v16 = 1;
        int v17 = 4;
        int v18 = 4;
        int* ptr5 = &v11;
        interrupt(128);
    }
    return result;
}

int sub_8048108() {
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
        jump v1 != 1 ? &loc_804811B: &sub_804811F;
    }
}

void sub_804811F() {
}
