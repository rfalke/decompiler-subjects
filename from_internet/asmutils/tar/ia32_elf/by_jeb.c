
int sub_80480E5() {
    char* ptr0;
    char* ptr1;
    unsigned int v0;
    int v1 = 0;
    int result = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 8;
    do {
        v1 = (unsigned int)*ptr1 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        if(!*ptr1) {
            return result;
        }
        char v8 = (unsigned char)v1 == 32;
        char v9 = (unsigned char)v1 < 32;
        char v10 = __parity__((unsigned char)v1 - 32);
        char v11 = (unsigned char)v1 < 32;
        char v12 = ((((unsigned char)v1 - 32) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x20)) < 0;
        char v13 = ((((unsigned char)v1 - 32) ^ ((unsigned char)v1 ^ 0x20)) >>> 4) & 0x1;
        if(!v8) {
            unsigned char v14 = (unsigned char)v1;
            v1 = (unsigned int)((unsigned char)v1 - 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
            char v15 = (unsigned char)v1 ? 0: 1;
            char v16 = (v1 >>> 7) & 0x1;
            char v17 = __parity__((unsigned char)v1);
            char v18 = (((v14 ^ 0x30) ^ (unsigned char)v1) >>> 4) & 0x1;
            char v19 = v14 < 48;
            char v20 = (((unsigned char)v1 ^ v14) & (v14 ^ 0x30)) < 0;
            if(!v19) {
                char v21 = (unsigned char)v1 == 7;
                char v22 = (unsigned char)v1 < 7;
                char v23 = __parity__((unsigned char)v1 - 7);
                char v24 = (unsigned char)v1 < 7;
                char v25 = ((((unsigned char)v1 - 7) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x7)) < 0;
                v18 = ((((unsigned char)v1 - 7) ^ ((unsigned char)v1 ^ 0x7)) >>> 4) & 0x1;
                if((v24 || v21)) {
                    int v26 = result;
                    int v27 = result * 8;
                    int v28 = (unsigned int)((unsigned long long)v26 >>> 29L);
                    int v29 = v27;
                    result = v27 + v1;
                    char v30 = result ? 0: 1;
                    char v31 = result < 0;
                    char v32 = __parity__((unsigned char)result);
                    char v33 = (((v1 ^ v29) ^ result) >>> 4) & 0x1;
                    char v34 = __carry__(v1, v29);
                    char v35 = ((result ^ v29) & ~(v1 ^ v29)) < 0;
                    goto loc_8048106;
                }
            }
            char v36 = 1;
            char v37 = 0;
            char v38 = 1;
            char v39 = 0;
            char v40 = 0;
            int v41 = 253;
            v7 = 1;
            result = 1;
            int* ptr2 = &ptr0;
            interrupt(128);
        }
    loc_8048106:
        ++ptr1;
    }
    while((unsigned int)ptr1 < v0);
    return result;
}

int sub_8048118() {
    int v0 = sub_80480E5();
    gvar_8048B33 = v0;
    return sub_8048144();
}

int sub_8048144() {
    int v0 = sub_80480E5();
    gvar_8048B1B = v0;
    int v1 = sub_80480E5();
    gvar_8048B23 = v1;
    int result = sub_80480E5();
    gvar_8048B2B = result;
    return result;
}

int sub_804816C(int param0, int param1) {
    int v0;
    char v1;
    int v2;
    int v3;
    int result = (unsigned int)v1 | ((unsigned int)v2 << 8);
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr0 = &v0;
    char* ptr1 = (char*)&gvar_80489B3;
    char* ptr2 = (char*)&gvar_8048C10;
    int v7 = 156;
    do {
        v1 = *ptr2;
        ++ptr2;
        *ptr1 = v1;
        ++ptr1;
        --v7;
    }
    while(v7 && (v1 ? 1: 0));
    char* ptr3 = ptr1 - 1;
    char* ptr4 = (char*)&gvar_8048AB7;
    v7 = (unsigned int)100 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
    do {
        v1 = *ptr4;
        ++ptr4;
        *ptr3 = v1;
        ++ptr3;
        --v7;
    }
    while(v7 && (v1 ? 1: 0));
    *ptr3 = 0;
    return result;
}

int sub_8048194() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 0x200;
    int v8 = &gvar_8048AB7;
    int v9 = *(int*)0x8048867;
    int v10 = 3;
    int v11 = 3;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048205() {
    int v0;
    unsigned short* ptr0;
    char v1 = (((*ptr0 - 45) ^ (*ptr0 ^ 0x2d)) >>> 4) & 0x1;
    if(*ptr0 != 45) {
        int v2 = 0;
        char v3 = 1;
        char v4 = 0;
        char v5 = 1;
        char v6 = 0;
        char v7 = 0;
        int v8 = 5;
        int v9 = 5;
        int* ptr1 = &v0;
        interrupt(128);
    }
    *(int*)0x8048867 = 0;
    return 0;
}

int sub_8048227() {
    char v0;
    int v1 = *(int*)0x8048867;
    int v2 = 6;
    int v3 = 6;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_80484FD(int param0) {
    char v0;
    char* ptr0;
    unsigned int v1;
    int v2 = 0;
    unsigned int v3 = 8;
    unsigned int v4 = 8;
    unsigned int* ptr1 = &v2;
    int v5 = param0;
    int counter = param0 - 1;
    char v6 = counter ? 0: 1;
    char v7 = counter < 0;
    char v8 = __parity__((unsigned char)counter);
    char v9 = ((~counter ^ ~v5) >>> 4) & 0x1;
    char v10 = ((counter ^ v5) & v5) < 0;
    do {
        int v11 = 0;
        unsigned int v12 = v1 % 8;
        v1 /= 8;
        unsigned char v13 = (unsigned char)v12;
        int v14 = (unsigned int)((unsigned char)v12 + 48) | ((unsigned int)((v12 >>> 8) & 0xffffff) << 8);
        char v15 = (unsigned char)v12 + 48 ? 0: 1;
        char v16 = (v14 >>> 7) & 0x1;
        char v17 = __parity__((unsigned char)v14);
        char v18 = (((v13 ^ 0x30) ^ (unsigned char)v14) >>> 4) & 0x1;
        char v19 = v13 >= 208;
        char v20 = (((unsigned char)v14 ^ v13) & ~(v13 ^ 0x30)) < 0;
        --ptr1;
        *ptr1 = v14;
        --counter;
    }
    while(counter);
    do {
        int v21 = *ptr1;
        ++ptr1;
        *ptr0 = (unsigned char)v21;
        ++ptr0;
        int v22 = v21;
        v0 = v22 ? 0: 1;
        char v23 = v22 < 0;
        char v24 = __parity__((unsigned char)v22);
        char v25 = 0;
        char v26 = 0;
    }
    while(!v0);
    int v27 = *ptr1;
    /*BAD_CALL!*/ v27();
}

int sub_8048514() {
    int v0 = 128;
    int* ptr0 = (int*)&gvar_8048AB7;
    while(v0 != 0) {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    return 0;
}

char sub_8048522() {
    char v0;
    char* ptr0;
    char* ptr1;
    do {
        v0 = *ptr0;
        ++ptr0;
        *ptr1 = v0;
        ++ptr1;
    }
    while(v0);
    return 0;
}

int sub_8048529() {
    char v0;
    int v1 = 0x8048873;
    int v2 = 134515059;
    int v3 = 107;
    int v4 = 107;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048622() {
    char v0;
    char v1 = 1;
    char v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 0;
    int v6 = 0;
    int v7 = 32;
    char* ptr0 = (char*)&gvar_8048B4B;
    int v8 = &gvar_8048B4B;
    int v9 = 8;
    int v10 = 8;
    do {
        *ptr0 = 32;
        ++ptr0;
        --v10;
    }
    while(v10 == 0);
    char* ptr1 = (char*)&gvar_8048AB7;
    int v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 0;
    int counter = 0x200;
    do {
        v7 = (unsigned int)*ptr1 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
        ++ptr1;
        int v17 = v6;
        v6 += v7;
        char v18 = v6 ? 0: 1;
        char v19 = v6 < 0;
        char v20 = __parity__((unsigned char)v6);
        char v21 = (((v7 ^ v17) ^ v6) >>> 4) & 0x1;
        char v22 = __carry__(v7, v17);
        char v23 = ((v6 ^ v17) & ~(v7 ^ v17)) < 0;
        --counter;
    }
    while(counter);
    int v24 = v7;
    int v25 = v6;
    int v26 = v24;
    int v27 = v8;
    counter = 7;
    int v28 = sub_80484FD(7);
    int v29 = 0;
    char v30 = 1;
    char v31 = 0;
    char v32 = 1;
    char v33 = 0;
    char v34 = 0;
    int v35 = 0x200;
    int v36 = &gvar_8048AB7;
    int v37 = *(int*)0x8048867;
    v8 = 4;
    int v38 = 4;
    int* ptr2 = &v0;
    interrupt(128);
}

int sub_804865E() {
}

int sub_8048660() {
    return sub_80484FD(11);
}

void sub_8048788() {
    unsigned int v0 = gvar_8048EAF;
    unsigned int v1 = gvar_8048EAF;
    char v2 = v1 ? 0: 1;
    char v3 = v1 >= 0x80000000;
    char v4 = __parity__((unsigned char)v1);
    char v5 = 0;
    char v6 = 0;
    jump v2 ? &sub_80487A5: &sub_8048792;
}

int sub_80487A5() {
    int result;
    int v0 = &loc_80487C3();
    sub_8048799(v0);
    return result;
}

unsigned int sub_80487B2(unsigned int param0) {
    unsigned int result = gvar_8048EAF;
    *(unsigned int*)(param0 - 4) = gvar_8048EAF;
    gvar_8048EAF = (unsigned int*)(param0 - 4);
    return result;
}
