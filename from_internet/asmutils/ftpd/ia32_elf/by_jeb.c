
int start(int param0, unsigned int param1, unsigned int param2) {
    int* ptr0;
    unsigned int v0;
    int v1;
    unsigned int v2;
    char v3;
    unsigned int v4 = v2;
    char v5 = v4 == 3;
    char v6 = (int)v4 < 3;
    char v7 = __parity__((unsigned char)v4 - 3);
    char v8 = v4 < 3;
    char v9 = (((v4 - 3) ^ v4) & (v4 ^ 0x3)) < 0;
    char v10 = (((v4 - 3) ^ (v4 ^ 0x3)) >>> 4) & 0x1;
    if(!v8) {
        int v11 = param0;
        gvar_8048FA8 = param1;
        unsigned int v12 = param2;
        int v13 = 1;
        v1 = 17;
        param2 = 48;
        v0 = 48;
        ptr0 = &v3;
        interrupt(128);
    }
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    v8 = 0;
    int v19 = 0;
    v1 = 1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v10 = 0;
    v9 = 0;
    v2 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

int sub_8048358() {
    unsigned int v0;
    unsigned int v1 = gvar_8048D71;
    gvar_804B3AD = v0;
    gvar_804B3B5 = v1;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 1;
    unsigned int v9 = v1;
    char v10 = v9 ? 0: 1;
    char v11 = v9 >= 0x80000000;
    char v12 = __parity__((unsigned char)v9);
    char v13 = 0;
    char v14 = 0;
    jump v10 ? &sub_8048370: &sub_804836F;
}

void sub_804836F(int param0) {
}

int sub_8048370() {
    short v0 = 3;
    gvar_804B3B1 = 3;
    gvar_804B3B9 = 3;
    int v1 = &gvar_804B3AD;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 168;
    interrupt(128);
}

int sub_8048AB6(int param0, int param1) {
    int result;
    char* ptr0;
    int v0;
    while(1) {
        result = (unsigned int)*ptr0;
        ++ptr0;
        unsigned char v1 = (unsigned char)result;
        result = (unsigned int)((unsigned char)result - 48) | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        if(v1 < 48) {
            return result;
        }
        param1 = (unsigned int)(unsigned char)param1 | ((unsigned int)(unsigned char)(v0 >>> 8) << 8) | ((unsigned int)(unsigned short)(param1 >>> 16) << 16);
        v0 = ((unsigned int)((unsigned char)v0 * 10) | ((unsigned int)((unsigned char)(((unsigned short)(unsigned char)v0 * 10) >>> 8) | (unsigned char)(param1 >>> 8)) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16)) + result;
    }
    return result;
}

unsigned int sub_8048ACC(int param0, int param1) {
    int v0;
    char* ptr0;
    unsigned int v1;
    unsigned int result = v1;
    if(!v1) {
        v0 = param1;
        if(!v0) {
            *ptr0 = (unsigned char)v0 + 48;
            return result;
        }
    }
    else {
        sub_8048ACC();
        *ptr0 = (unsigned char)v0 + 48;
    }
    return result;
}

int sub_8048AF6() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        unsigned char v1 = (unsigned char)v0;
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if(v1 < 48) {
            return result;
        }
        result = result * 10 + v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_8048B0C(int param0, int param1) {
    int v0;
    int v1;
    unsigned int v2;
    unsigned int result = v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr0 = &v0;
    unsigned char* ptr1 = (unsigned char*)&gvar_8048FAD;
    unsigned int v6 = v2;
    while(1) {
        v2 = (unsigned int)10 | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
        unsigned char* ptr2 = ptr1;
        while(v6 != 0) {
            char v7 = (unsigned char)v2 == *ptr1;
            ++ptr1;
            --v6;
            if(!~v7) {
                break;
            }
        }
        int* ptr3 = (int*)((int)ptr1 - (int)ptr2);
        if(*(char*)((char*)((int)ptr2 + (int)ptr3) - 1) != 10) {
            sub_8048B78((int)v6, param1);
            return result;
        }
        unsigned int v8 = 1;
        unsigned int v9 = v6;
        int v10 = 14;
        if(gvar_8048FAC == 2) {
            v8 = 2;
            v10 = 13;
        }
        int* ptr4 = (int*)((int)ptr3 - v8);
        sub_8048B78(v10, param1);
        v2 = (unsigned int)sub_8048B8E(param0, param1);
        v6 = v9;
        if(!v6) {
            return result;
        }
        ptr1 = (unsigned char*)((int)(int*)(v2 + (int)ptr2) + (int)ptr4);
    }
    return result;
}

char sub_8048B5D() {
    int v0 = 0x400;
    unsigned char* ptr0 = (unsigned char*)&gvar_804AFAD;
    while(v0 != 0) {
        char v1 = *ptr0 == 32;
        ++ptr0;
        --v0;
        if(!~v1) {
            break;
        }
    }
    while(v0 != 0) {
        char v2 = *ptr0 == 13;
        ++ptr0;
        --v0;
        if(!~v2) {
            break;
        }
    }
    *(char*)(ptr0 - 1) = 0;
    return 13;
}

int sub_8048B78(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0 = &v0;
    int v7 = v3;
    int v8 = param0;
    int v9 = param1;
    int v10 = v2;
    int* ptr1 = &v0;
    int v11 = v4;
    int v12 = v5;
    int v13 = v6;
    int v14 = 4;
    int v15 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_8048B7F(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned char v5 = gvar_8048D79;
    ++gvar_8048D79;
    char v6 = gvar_8048D79 ? 0: 1;
    char v7 = gvar_8048D79 >= 128;
    char v8 = __parity__(gvar_8048D79);
    char v9 = (((v5 ^ 0x1) ^ gvar_8048D79) >>> 4) & 0x1;
    char v10 = (char)((gvar_8048D79 ^ v5) & ~(v5 ^ 0x1)) < 0;
    int* ptr0 = &v0;
    int v11 = v3;
    int v12 = param0;
    int v13 = param1;
    int v14 = v2;
    int* ptr1 = &v0;
    int v15 = v4;
    int v16 = 4;
    int v17 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

void sub_8048B88() {
    ++gvar_8048D79;
}

int sub_8048B8E(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0 = &v0;
    int v5 = v2;
    int v6 = param0;
    int v7 = param1;
    int v8 = v3;
    int* ptr1 = &v0;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    char* ptr2 = (char*)&gvar_804805F;
    int v15 = &gvar_804805F;
    do {
        v9 = (unsigned int)*ptr2 | ((unsigned int)((v9 >>> 8) & 0xffffff) << 8);
        ++ptr2;
        int v16 = v15;
        v15 += v9;
        char v17 = v15 ? 0: 1;
        char v18 = v15 < 0;
        char v19 = __parity__((unsigned char)v15);
        char v20 = (((v9 ^ v16) ^ v15) >>> 4) & 0x1;
        char v21 = __carry__(v9, v16);
        char v22 = ((v15 ^ v16) & ~(v9 ^ v16)) < 0;
        --param0;
    }
    while(param0);
    param0 = (unsigned int)*ptr2;
    int v23 = v15;
    int v24 = param0;
    int v25 = v23;
    int v26 = v4;
    int v27 = 4;
    int v28 = 4;
    int* ptr3 = &v1;
    interrupt(128);
}

unsigned char sub_8048BBF() {
    unsigned char v0;
    unsigned char* ptr0;
    do {
        v0 = *ptr0;
        ++ptr0;
    }
    while(v0 != 10);
    return 10;
}

int sub_8048BC5() {
    char* ptr0;
    int result;
sub_8048BC5:
    do {
        result = (unsigned int)*ptr0 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if((unsigned char)result == 32) {
            goto sub_8048BC5;
        }
    }
    while((unsigned char)result == 9);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048BD4() {
    int v0;
    unsigned int v1;
    unsigned int v2 = gvar_8048D60;
    while(1) {
        int v3 = /*BAD_CALL!*/ sub_8048BC5();
        if((unsigned char)v3 != 59) {
            sub_8048CF0(v0, v1);
            if(v0) {
                sub_8048CF0(v0, v1);
                if(v0) {
                    goto loc_8048C05;
                }
                else {
                    gvar_8048D64 = v2;
                }
            }
            else {
                gvar_8048D64 = 0;
            }
            return 19;
        }
    loc_8048C05:
        sub_8048BBF();
    }
}

unsigned char* sub_8048C29(int param0) {
    unsigned char* ptr0;
    unsigned char* ptr1;
    unsigned char* ptr2;
    int v0;
    unsigned int v1;
    char v2;
    gvar_8048D68 = 0;
    unsigned char* ptr3 = ptr1;
    unsigned char* ptr4 = ptr2;
    unsigned char* ptr5 = ptr3;
    unsigned char* ptr6 = gvar_8048D64;
    if(ptr6) {
        int v3 = sub_8048BC5();
        unsigned char* ptr7 = ptr6;
        char v4 = *ptr6 == 42;
        char v5 = *ptr6 < 42;
        char v6 = __parity__(*ptr6 - 42);
        char v7 = *ptr6 < 42;
        char v8 = (((*ptr6 - 42) ^ *ptr6) & (*ptr6 ^ 0x2a)) < 0;
        if(!v4) {
            int v9 = sub_8048CF0(v0, v1);
            if(v0) {
                return (unsigned char*)0x14;
            }
        }
        unsigned char* ptr8 = ptr7;
        unsigned char* ptr9 = ptr4;
        unsigned char* ptr10 = ptr6;
        int* ptr11 = (int*)(ptr6 + 1);
        char v10 = ptr11 ? 0: 1;
        char v11 = (int)ptr11 < 0;
        char v12 = __parity__((unsigned char)ptr11);
        char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ 0x1) ^ (int)ptr11) >>> 4) & 0x1);
        char v14 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr10) & (int*)~(int)(int*)((int)ptr10 ^ 0x1)) < 0;
        int v15 = sub_8048BC5();
        int v16 = sub_8048AF6();
        gvar_8048D69 = v16;
        int* ptr12 = ptr11;
        unsigned char* ptr13 = (unsigned char*)((unsigned char*)ptr11 + 1);
        char v17 = ptr13 ? 0: 1;
        char v18 = (int)ptr13 < 0;
        char v19 = __parity__((unsigned char)ptr13);
        char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 ^ 0x1) ^ (int)ptr13) >>> 4) & 0x1);
        char v21 = (int)(int*)((int)(int*)((int)ptr13 ^ (int)ptr12) & (int*)~(int)(int*)((int)ptr12 ^ 0x1)) < 0;
        int v22 = /*BAD_CALL!*/ sub_8048BC5();
        int v23 = (unsigned int)((v22 >>> 8) & 0xffffff);
        unsigned char* ptr14 = ptr13;
        do {
            unsigned char v24 = *ptr13;
            ++ptr13;
            char v25 = v24 == 33;
            char v26 = (char)v24 < 33;
            char v27 = __parity__(v24 - 33);
            v2 = v24 < 33;
            char v28 = (((v24 - 33) ^ v24) & (v24 ^ 0x21)) < 0;
            char v29 = (((v24 - 33) ^ (v24 ^ 0x21)) >>> 4) & 0x1;
        }
        while(!v2);
        unsigned char* ptr15 = ptr13;
        char* ptr16 = (char*)(ptr13 - 1);
        char v30 = ptr16 ? 0: 1;
        char v31 = (int)ptr16 < 0;
        char v32 = __parity__((unsigned char)ptr16);
        char v33 = (((char*)~(int)ptr16 ^ (unsigned char*)~(int)ptr15) >>> 4) & 0x1;
        char v34 = (int)(int*)((int)(int*)((int)ptr16 ^ (int)ptr15) & (int)ptr15) < 0;
        *ptr16 = 0;
        unsigned char* ptr17 = ptr14;
        unsigned char* ptr18 = ptr14;
        ptr14 = (unsigned char*)0xC;
        unsigned char* ptr19 = (unsigned char*)0xC;
        int* ptr20 = &ptr0;
        interrupt(128);
    }
    return (unsigned char*)0x14;
}

int sub_8048CA2() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    unsigned int v7 = gvar_8048FA8;
    int v8 = 5;
    int v9 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048CF0(int param0, unsigned int param1) {
    unsigned char* ptr0;
    unsigned int v0;
    unsigned int v1;
    unsigned char* ptr1;
    int result;
    sub_8048D0C();
    sub_8048D0C();
    if(v0 < v1) {
        v0 = v1;
    }
    unsigned char* ptr2 = ptr0;
    while(v0 != 0) {
        char v2 = *ptr1 == *ptr2;
        ++ptr1;
        ++ptr2;
        --v0;
        if(!v2) {
            return result;
        }
    }
    return result;
}

void sub_8048D0C() {
    char v0;
    unsigned char* ptr0;
    int v1 = 0;
    do {
        ++v1;
        v0 = *ptr0 < 33;
        ++ptr0;
    }
    while(!v0);
}
