
int start(int param0, unsigned short* param1) {
    int* ptr0;
    unsigned short* ptr1;
    int v0;
    int v1;
    int v2;
    int v3;
    char v4;
    int v5 = v3;
    int v6 = param0;
    unsigned short* ptr2 = param1;
    unsigned short* ptr3 = param1;
    char v7 = ptr3 ? 0: 1;
    char v8 = (int)ptr3 < 0;
    char v9 = __parity__((unsigned char)ptr3);
    char v10 = 0;
    char v11 = 0;
    if(!v7) {
        v7 = *ptr3 == 11565;
        v8 = *ptr3 < 11565;
        v9 = __parity__((unsigned char)*ptr3 - 45);
        v11 = *ptr3 < 11565;
        v10 = (((*ptr3 - 11565) ^ *ptr3) & (*ptr3 ^ 0x2d2d)) < 0;
        char v12 = (((*ptr3 - 11565) ^ (*ptr3 ^ 0x2d2d)) >>> 4) & 0x1;
        if(v7) {
            v7 = *(int*)(ptr3 + 1) == 0x706c6568;
            v8 = *(int*)(ptr3 + 1) < 0x706c6568;
            v9 = __parity__((unsigned char)*(int*)(ptr3 + 1) - 104);
            v11 = *(unsigned int*)(ptr3 + 1) < 0x706c6568;
            v10 = (((*(int*)(ptr3 + 1) - 0x706c6568) ^ *(int*)(ptr3 + 1)) & (*(int*)(ptr3 + 1) ^ 0x706c6568)) < 0;
            v12 = (((*(int*)(ptr3 + 1) - 0x706c6568) ^ (*(int*)(ptr3 + 1) ^ 0x706c6568)) >>> 4) & 0x1;
            if(v7) {
                v2 = &gvar_804805A;
                v1 = 214;
            }
            else {
                v7 = *(int*)(ptr3 + 1) == 1936876918;
                v8 = *(int*)(ptr3 + 1) < 1936876918;
                v9 = __parity__((unsigned char)*(int*)(ptr3 + 1) - 118);
                v11 = *(unsigned int*)(ptr3 + 1) < 1936876918;
                v10 = (((*(int*)(ptr3 + 1) - 1936876918) ^ *(int*)(ptr3 + 1)) & (*(int*)(ptr3 + 1) ^ 0x73726576)) < 0;
                v12 = (((*(int*)(ptr3 + 1) - 1936876918) ^ (*(int*)(ptr3 + 1) ^ 0x73726576)) >>> 4) & 0x1;
                if(!v7) {
                    goto loc_804847F;
                }
                else {
                    v2 = &gvar_8048130;
                    v1 = 19;
                }
            }
            v0 = 2;
            param1 = (unsigned short*)0x4;
            ptr1 = (unsigned short*)0x4;
            ptr0 = &v4;
            interrupt(128);
        loc_804847F:
            param1 = (unsigned short*)0x1;
            ptr1 = (unsigned short*)0x1;
            ptr0 = &v4;
            interrupt(128);
        }
    }
    v1 = 67;
    v2 = &gvar_8048143;
    v0 = 1;
    param1 = (unsigned short*)0x4;
    ptr1 = (unsigned short*)0x4;
    ptr0 = &v4;
    interrupt(128);
}

void sub_8048484(int param0, unsigned char param1) {
}

int sub_8048491(int param0, int param1) {
    char v0;
    char* ptr0;
    int v1;
    char v2;
    char v3;
    unsigned int v4;
    char v5;
    char* ptr1;
    int* ptr2 = &v0;
    unsigned int v6 = v4;
    int v7 = param0;
    int v8 = param1;
    int v9 = v1;
    int* ptr3 = &v0;
    unsigned int v10 = 10;
    unsigned int v11 = 10;
    unsigned int* ptr4 = &ptr0;
    unsigned int v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 0;
    do {
        int v18 = 0;
        unsigned int v19 = v4 % 10;
        unsigned int v20 = v4 / 10;
        unsigned int v21 = v19;
        --ptr4;
        *ptr4 = &loc_80484A3;
        /*BAD_CALL!*/ sub_8048484(param0, (unsigned char)v21);
        --ptr4;
        *ptr4 = param1;
        ++v12;
        v5 = v4 ? 0: 1;
        char v22 = v4 >= 0x80000000;
        char v23 = __parity__(v3);
        char v24 = 0;
        char v25 = 0;
    }
    while(!v5);
    char v26 = 0;
    gvar_804851B = v12;
    do {
        int v27 = *ptr4;
        ++ptr4;
        *ptr1 = (unsigned char)v27;
        ++ptr1;
        --v12;
        v2 = v12 ? 0: 1;
        char v28 = v12 >= 0x80000000;
        char v29 = __parity__((unsigned char)v12);
        char v30 = 0;
        char v31 = 0;
    }
    while(!v2);
    int v32 = *ptr4;
    ++ptr4;
    int v33 = *ptr4;
    ++ptr4;
    int v34 = *ptr4;
    ptr4 += 2;
    int v35 = *ptr4;
    ++ptr4;
    int v36 = *ptr4;
    ++ptr4;
    int v37 = *ptr4;
    ++ptr4;
    int v38 = *ptr4;
    ++ptr4;
    int v39 = *ptr4;
    ++ptr4;
    jump v39;
}

void sub_80484B9() {
    unsigned int v0;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
    }
    while(*ptr0);
}

int sub_80484C9(int param0) {
    int v0;
    char v1;
    char* ptr0;
    int result = (unsigned int)v1 | ((unsigned int)v0 << 8);
    while(param0 != 0) {
        *ptr0 = 32;
        ++ptr0;
        --param0;
    }
    return result;
}
