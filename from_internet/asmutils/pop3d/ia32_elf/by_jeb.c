
int start(int param0, unsigned int param1, char* param2) {
    int* ptr0;
    char* ptr1;
    int v0;
    int* ptr2;
    int v1;
    char v2;
    char* ptr3;
    int v3;
    char v4;
    char v5;
    char* ptr4 = ptr3;
    char v6 = ptr4 == 3;
    char v7 = (int)ptr4 < 3;
    char v8 = __parity__((unsigned char)ptr4 - 3);
    char v9 = (unsigned int)ptr4 < 3;
    char v10 = (int)(int*)((int)(int*)((int)(int*)(ptr4 - 3) ^ (int)ptr4) & (int)(int*)((int)ptr4 ^ 0x3)) < 0;
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)(ptr4 - 3) ^ (int)(int*)((int)ptr4 ^ 0x3)) >>> 4) & 0x1);
    if(v6) {
        int v12 = param0;
        gvar_8048EC8 = param1;
        ptr4 = param2;
        gvar_805A0ED = 0;
        gvar_805A0EE = 0;
        while(1) {
            int v13 = (unsigned int)*ptr4 | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
            ++ptr4;
            unsigned char v14 = (unsigned char)v13;
            v13 = (unsigned int)((unsigned char)v13 - 48) | ((unsigned int)((v13 >>> 8) & 0xffffff) << 8);
            char v15 = (unsigned char)v13 ? 0: 1;
            char v16 = (v13 >>> 7) & 0x1;
            char v17 = __parity__((unsigned char)v13);
            char v18 = (((v14 ^ 0x30) ^ (unsigned char)v13) >>> 4) & 0x1;
            char v19 = v14 < 48;
            v2 = (((unsigned char)v13 ^ v14) & (v14 ^ 0x30)) < 0;
            if(v19) {
                break;
            }
            else {
                v15 = (unsigned char)v13 == 9;
                v16 = (unsigned char)v13 < 9;
                v17 = __parity__((unsigned char)v13 - 9);
                v19 = (unsigned char)v13 < 9;
                v2 = ((((unsigned char)v13 - 9) ^ (unsigned char)v13) & ((unsigned char)v13 ^ 0x9)) < 0;
                char v20 = ((((unsigned char)v13 - 9) ^ ((unsigned char)v13 ^ 0x9)) >>> 4) & 0x1;
                if(!v19 && !v15) {
                    break;
                }
                else {
                    int v21 = v3;
                    int v22 = v3 * 10;
                    int v23 = v3 * 10;
                    v3 = v13 + v22;
                    char v24 = v3 ? 0: 1;
                    char v25 = v3 < 0;
                    char v26 = __parity__((unsigned char)v3);
                    char v27 = (((v13 ^ v23) ^ v3) >>> 4) & 0x1;
                    char v28 = __carry__(v13, v23);
                    char v29 = ((v3 ^ v23) & ~(v13 ^ v23)) < 0;
                }
            }
        }
        char v30 = (unsigned char)v3;
        v3 = (unsigned int)(unsigned char)(v3 >>> 8) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8);
        int v31 = (unsigned int)(unsigned char)v3 | ((unsigned int)v30 << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        int v32 = (unsigned int)(unsigned char)v3 | ((unsigned int)v30 << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        char v33 = (v32 >>> 16) & 0x1;
        char v34 = v2;
        char v35 = (unsigned int)(v31 * 0x10000) ? 0: 1;
        char v36 = (v31 >>> 15) & 0x1;
        char v37 = 1;
        unsigned int v38 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v31 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        gvar_805A111 = (unsigned int)2 | ((unsigned int)(((unsigned int)0 | ((unsigned int)(unsigned short)v31 << 8) | ((unsigned int)0 << 24)) & 0xffffff) << 8);
        unsigned char* ptr5 = gvar_8048EC8;
        do {
            ++ptr5;
            v4 = *ptr5 ? 0: 1;
            char v39 = *ptr5 < 0;
            char v40 = __parity__(*ptr5);
            char v41 = *ptr5 < 0;
            char v42 = 0;
            char v43 = 0;
        }
        while(!v4);
        unsigned char* ptr6 = ptr5 - 1;
        v6 = *ptr6 == 47;
        v7 = *ptr6 < 47;
        v8 = __parity__(*ptr6 - 47);
        v9 = *ptr6 < 47;
        v10 = (((*ptr6 - 47) ^ *ptr6) & (*ptr6 ^ 0x2f)) < 0;
        v11 = (((*ptr6 - 47) ^ (*ptr6 ^ 0x2f)) >>> 4) & 0x1;
        if(!v6) {
            v1 = 52;
            ptr2 = (int*)&gvar_80481CF;
            v0 = 1;
            param2 = (char*)0x4;
            ptr1 = (char*)0x4;
            ptr0 = &v5;
            interrupt(128);
        }
        param2 = (char*)0x6;
        param1 = 1;
        param0 = 2;
        ptr2 = &param0;
        v0 = 1;
        ptr3 = (char*)0x66;
        ptr1 = (char*)0x66;
        ptr0 = &param0;
        interrupt(128);
    }
    v1 = 27;
    ptr2 = (int*)&gvar_8048100;
    v0 = 1;
    ptr3 = (char*)0x4;
    ptr1 = (char*)0x4;
    ptr0 = &param0;
    interrupt(128);
}

int sub_8048279(int param0, int param1) {
    char v0;
    int v1 = sub_8048292(param0, param1);
    int v2 = 1;
    int v3 = 134512890;
    unsigned int v4 = gvar_805A10D;
    int v5 = 4;
    int v6 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048292(int param0, int param1) {
    char v0;
    int v1;
    unsigned int v2;
    char v3;
    int v4;
    int* ptr0 = &v0;
    unsigned int v5 = v2;
    int v6 = param0;
    int v7 = param1;
    int v8 = v4;
    int* ptr1 = &v0;
    char* ptr2 = (char*)&gvar_805A12F;
    do {
        int v9 = 0;
        unsigned int v10 = v2 % *(int*)&a_OK_asmutils_po[175];
        unsigned int v11 = v2 / *(int*)&a_OK_asmutils_po[175];
        unsigned char v12 = (unsigned char)v10;
        param1 = (unsigned int)((unsigned char)v10 + 48) | ((unsigned int)((v10 >>> 8) & 0xffffff) << 8);
        char v13 = (unsigned char)v10 + 48 ? 0: 1;
        char v14 = (param1 >>> 7) & 0x1;
        char v15 = __parity__((unsigned char)param1);
        char v16 = (((v12 ^ 0x30) ^ (unsigned char)param1) >>> 4) & 0x1;
        char v17 = v12 >= 208;
        char v18 = (((unsigned char)param1 ^ v12) & ~(v12 ^ 0x30)) < 0;
        *ptr2 = (unsigned char)param1;
        --ptr2;
        v2 = v11;
        v3 = v2 ? 0: 1;
        char v19 = v2 >= 0x80000000;
        char v20 = __parity__((unsigned char)v2);
        char v21 = 0;
        char v22 = 0;
    }
    while(!v3);
    int v23 = &gvar_805A12F;
    int v24 = &gvar_805A12F;
    int* ptr3 = (int*)(&gvar_805A12F - (int)ptr2);
    char v25 = ptr3 ? 0: 1;
    char v26 = (int)ptr3 < 0;
    char v27 = __parity__((unsigned char)ptr3);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 ^ &gvar_805A12F) ^ (int)ptr3) >>> 4) & 0x1);
    char v29 = (unsigned int)ptr2 > &gvar_805A12F;
    char v30 = (int)(int*)((int)(int*)((int)ptr3 ^ &gvar_805A12F) & (int)(int*)((int)ptr2 ^ &gvar_805A12F)) < 0;
    char* ptr4 = ptr2;
    int* ptr5 = (int*)(ptr2 + 1);
    char v31 = ptr5 ? 0: 1;
    char v32 = (int)ptr5 < 0;
    char v33 = __parity__((unsigned char)ptr5);
    char v34 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x1) ^ (int)ptr5) >>> 4) & 0x1);
    char v35 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x1)) < 0;
    int* ptr6 = ptr5;
    unsigned int v36 = gvar_805A10D;
    int v37 = 4;
    int v38 = 4;
    int v39 = 4;
    int* ptr7 = &v1;
    interrupt(128);
}

int sub_80482D6(int param0, int param1) {
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
    int v8 = 31;
    int v9 = "+OK asmutils pop3 server ready\n\n\nFrom+OK\n+OK  octets\n+OK User name accepted, password please\n+OK Sayonara!\n+OK Mailbox open,  messages\n-ERR not implemented.\nHmm, nice try!\n.\n\n\n";
    unsigned int v10 = gvar_805A10D;
    int v11 = 4;
    int v12 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

char sub_80482EE() {
    char v0 = 1;
    char v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 0;
    int v5 = &gvar_8049EDC;
    int v6 = 134586075;
    int v7 = 0x100;
    unsigned char v8 = gvar_8049EDC;
    int v9 = 0;
    int v10 = 134520541;
    char v11 = v8 == 32;
    char v12 = (char)v8 < 32;
    char v13 = __parity__(v8 - 32);
    char v14 = v8 < 32;
    char v15 = (((v8 - 32) ^ v8) & (v8 ^ 0x20)) < 0;
    char v16 = (((v8 - 32) ^ (v8 ^ 0x20)) >>> 4) & 0x1;
    jump v11 ? &sub_804831C: &sub_8048304;
}

int* sub_8048304(int* param0) {
    unsigned char v0;
    unsigned char* ptr0;
    unsigned char* ptr1;
    while(1) {
        if(v0 != 10) {
            *ptr0 = v0;
            ++ptr0;
            param0 = (int*)((char*)param0 - 1);
            if(param0) {
                v0 = *ptr1;
                ++ptr1;
                jump v0 != 32 ? &sub_8048304: &sub_804831C;
            }
        }
        break;
    }
    gvar_805A0F9 = (int*)(ptr1 - 134520542);
    sub_804834D();
    return (int*)(ptr1 - 134520542);
}

int sub_80484BF() {
    char v0;
    int v1 = 0;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = 134516428;
    int v9 = 5;
    int v10 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}
