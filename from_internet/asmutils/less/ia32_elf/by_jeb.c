
int start(unsigned int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    int v1;
    unsigned int v2;
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
    unsigned int v13 = param0;
    if(!v8) {
        v2 = param1;
        v1 = 0;
        v8 = 1;
        v9 = 0;
        v10 = 1;
        v12 = 0;
        char v14 = 0;
        param1 = 5;
        v0 = 5;
        ptr0 = &v4;
        interrupt(128);
    }
    int v15 = 134513669;
    v1 = 21505;
    v2 = gvar_80483A9;
    param0 = 54;
    v0 = 54;
    ptr0 = &param1;
    interrupt(128);
}

int sub_80480A4() {
    char v0;
    int v1 = 1;
    int v2 = &gvar_8048394;
    int v3 = 1;
    int v4 = 4;
    int v5 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048289(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    int v3 = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v2;
    int* ptr1 = &v0;
    int v7 = 134521949;
    int v8 = 134521949;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    int v15 = 0x2000;
    int v16 = 134513757;
    unsigned int v17 = gvar_80483A9;
    int v18 = 3;
    int v19 = 3;
    int* ptr2 = &v8;
    interrupt(128);
}

int sub_80482D0(int* param0, int param1) {
    unsigned int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    unsigned char v1;
    int* ptr3 = &ptr0;
    int result = (unsigned int)v1 | ((unsigned int)v0 << 8);
    int* ptr4 = param0;
    int v2 = param1;
    int* ptr5 = ptr2;
    int* ptr6 = &ptr0;
    char v3 = 0;
    unsigned char* ptr7 = (unsigned char*)0x804A45D;
    unsigned int* ptr8 = gvar_8048451;
    unsigned int* ptr9 = gvar_8048451;
    int* ptr10 = (int*)((char*)ptr9 - 134521949);
    int v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 1;
    char v8 = 0;
    char v9 = 0;
    unsigned int* ptr11 = ptr8;
    do {
        v1 = *ptr7;
        ++ptr7;
        char v10 = v1 == 10;
        char v11 = (char)v1 < 10;
        char v12 = __parity__(v1 - 10);
        char v13 = v1 < 10;
        char v14 = (((v1 - 10) ^ v1) & (v1 ^ 0xa)) < 0;
        char v15 = (((v1 - 10) ^ (v1 ^ 0xa)) >>> 4) & 0x1;
        if(!v10) {
            char v16 = v1 == 9;
            char v17 = (char)v1 < 9;
            char v18 = __parity__(v1 - 9);
            char v19 = v1 < 9;
            char v20 = (((v1 - 9) ^ v1) & (v1 ^ 0x9)) < 0;
            char v21 = (((v1 - 9) ^ (v1 ^ 0x9)) >>> 4) & 0x1;
            if(v16) {
                v4 |= 7;
                char v22 = v4 ? 0: 1;
                char v23 = v4 < 0;
                char v24 = __parity__((unsigned char)v4);
                char v25 = 0;
                char v26 = 0;
            }
            ++v4;
            if((unsigned short)v4 >= (short)gvar_80483FF) {
                goto loc_80482FB;
            }
        }
        else {
        loc_80482FB:
            ++ptr8;
            char v27 = ptr8 == ptr11;
            char v28 = (int)ptr8 > (int)ptr11;
            char v29 = __parity__((unsigned char)ptr11 - (unsigned char)ptr8);
            char v30 = ptr8 > ptr11;
            char v31 = (int)(int*)((int)(int*)((int)(int*)((int)ptr11 - (int)ptr8) ^ (int)ptr11) & (int)(int*)((int)ptr8 ^ (int)ptr11)) < 0;
            if((v27 || v28 != v31)) {
                unsigned int* ptr12 = ptr11;
                int* ptr13 = (int*)(ptr11 + 0x100);
                char v32 = ptr13 ? 0: 1;
                char v33 = (int)ptr13 < 0;
                char v34 = __parity__((unsigned char)ptr13);
                char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 ^ 0x400) ^ (int)ptr13) >>> 4) & 0x1);
                char v36 = (unsigned int)ptr12 >= 0xfffffc00;
                char v37 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr12) & (int*)~(int)(int*)((int)ptr12 ^ 0x400)) < 0;
                int* ptr14 = ptr13;
                int v38 = 45;
                int v39 = 45;
                int* ptr15 = &ptr1;
                interrupt(128);
            }
            *ptr8 = ptr7;
            ++gvar_8048455;
            v4 = 0;
        }
        ptr10 = (int*)((char*)ptr10 - 1);
    }
    while(ptr10);
    return result;
}

int sub_804831E() {
    unsigned int v0 = gvar_8048451;
    unsigned int v1 = gvar_8048459;
    unsigned int v2 = gvar_8048455;
    unsigned int v3 = gvar_8048455;
    unsigned int v4 = v2 - v1;
    char v5 = v4 ? 0: 1;
    char v6 = v4 >= 0x80000000;
    char v7 = __parity__((unsigned char)v4);
    char v8 = (((v1 ^ v3) ^ v4) >>> 4) & 0x1;
    char v9 = v1 > v3;
    char v10 = (int)((v4 ^ v3) & (v1 ^ v3)) < 0;
    unsigned int v11 = v4;
    unsigned int v12 = v1;
    int v13 = (int)(v1 * 4);
    char v14 = (v12 >>> 30) & 0x1;
    char v15 = v10;
    char v16 = v13 ? 0: 1;
    char v17 = v13 < 0;
    char v18 = __parity__((unsigned char)v13);
    unsigned int v19 = v0;
    int v20 = v13 + v0;
    char v21 = v20 ? 0: 1;
    char v22 = v20 < 0;
    char v23 = __parity__((unsigned char)v20);
    char v24 = (((v13 ^ v19) ^ v20) >>> 4) & 0x1;
    char v25 = __carry__(v13, v19);
    char v26 = ((v20 ^ v19) & ~(v13 ^ v19)) < 0;
    unsigned int v27 = (unsigned int)gvar_80483FD;
    char v28 = v4 == v27;
    char v29 = (int)v4 < (int)v27;
    char v30 = __parity__((unsigned char)v4 - (unsigned char)v27);
    char v31 = v4 < v27;
    char v32 = (int)(((v4 - v27) ^ v4) & (v4 ^ v27)) < 0;
    char v33 = (((v4 - v27) ^ (v4 ^ v27)) >>> 4) & 0x1;
    jump v28 || v29 != v32 ? &sub_8048345: &sub_8048343;
}

void sub_8048343() {
}

int sub_8048345(int param0, int param1) {
    unsigned int* ptr0;
    int v0 = param0;
    int v1 = param1;
    unsigned int v2 = *ptr0;
    unsigned int v3 = *(ptr0 + 1);
    unsigned int v4 = *(ptr0 + 1);
    unsigned int v5 = v3;
    unsigned int v6 = v3 - v2;
    char v7 = v6 ? 0: 1;
    char v8 = v6 >= 0x80000000;
    char v9 = __parity__((unsigned char)v6);
    char v10 = (((v2 ^ v5) ^ v6) >>> 4) & 0x1;
    char v11 = v2 > v5;
    char v12 = (int)((v2 ^ v5) & (v6 ^ v5)) < 0;
    int v13 = 1;
    int v14 = 4;
    int v15 = 4;
    int* ptr1 = &v4;
    interrupt(128);
}

int sub_804836C() {
    char v0;
    char* ptr0;
    int v1;
    int v2 = 10;
    int* ptr1 = &v0;
    int v3 = 0;
    if(!v1) {
        ptr1 = &v2;
        v2 = 48;
        v3 = 1;
    }
    else {
        while(v1) {
            int v4 = v1 % 10;
            v1 /= 10;
            --ptr1;
            *ptr1 = (unsigned int)((unsigned char)v4 | 0x30) | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
            ++v3;
        }
    }
    while(1) {
        int v5 = *ptr1;
        ++ptr1;
        *ptr0 = (unsigned char)v5;
        jump v3 != 1 ? &loc_804838B: &sub_804838F;
    }
}

void sub_804838F(int param0, int param1, int param2, int param3, int param4) {
}
