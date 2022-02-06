
int start(int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    int v1;
    char v2;
    int v3 = sub_8048172();
    int v4 = v1;
    int v5 = v1;
    int v6 = v4 - 1;
    char v7 = v6 ? 0: 1;
    char v8 = v6 < 0;
    char v9 = __parity__((unsigned char)v6);
    char v10 = ((~v6 ^ ~v5) >>> 4) & 0x1;
    char v11 = ((v6 ^ v5) & v5) < 0;
    int v12 = param0;
    unsigned int v13 = param1;
    char v14 = v13 ? 0: 1;
    char v15 = v13 >= 0x80000000;
    char v16 = __parity__((unsigned char)v13);
    char v17 = 0;
    char v18 = 0;
    if(v14) {
        param1 = 1;
        v0 = 1;
        ptr0 = &v2;
        interrupt(128);
    }
    gvar_80482F3 = v13;
    int v19 = 0;
    v14 = 1;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    v18 = 0;
    param1 = 5;
    v0 = 5;
    ptr0 = &v2;
    interrupt(128);
}

void sub_8048109() {
    int v0 = 8;
}

int sub_804810F(unsigned int param0) {
    unsigned int v0;
    int v1;
    unsigned int v2 = v0 % param0;
    unsigned int v3 = v2;
    int v4 = v1 - 1;
    char v5 = v4 ? 0: 1;
    if(!v5) {
        v29 = (unsigned int)sub_804810F();
    }
}

int sub_804812A(int param0, unsigned int param1) {
    char v0;
    gvar_8048363 = param1;
    int v1 = 1;
    int v2 = &gvar_8048363;
    int v3 = 1;
    int v4 = 4;
    int v5 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_8048141() {
}

int sub_804814B() {
    int result;
    sub_8048141();
    return result;
}

int sub_8048157() {
    int result;
    sub_8048141();
    return result;
}

int sub_8048161() {
    int result;
    sub_8048141();
    return result;
}

int sub_8048172() {
    gvar_80482F7 = 1732584193;
    gvar_80482FB = 4023233417;
    gvar_80482FF = 2562383102;
    gvar_8048303 = 271733878;
    gvar_8048307 = 3285377520;
    gvar_804830B = 0;
    gvar_804830F = 0;
    return 0;
}

int sub_804819A(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result = v2;
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr0 = &v1;
    int* ptr1 = (int*)&gvar_8048313;
    int* ptr2 = (int*)&gvar_80482F7;
    unsigned int v7 = 5;
    unsigned int v8 = 5;
    do {
        *ptr1 = *ptr2;
        ++ptr2;
        ++ptr1;
        --v8;
    }
    while(v8 == 0);
    unsigned int v9 = 0;
    do {
        v7 = v9;
        v0 = sub_804814B();
    loc_804823C:
        while(1) {
            gvar_8048323 = gvar_804831F;
            gvar_804831F = gvar_804831B;
            gvar_804831B = __rol__(gvar_8048317, 30);
            gvar_8048317 = gvar_8048313;
            gvar_8048313 = (unsigned int)(v0 + param1);
            v9 = v7 + 1;
            if(v9 >= 80) {
                gvar_80482F7 += gvar_8048313;
                gvar_80482FB += gvar_8048317;
                gvar_80482FF += gvar_804831B;
                gvar_8048303 += gvar_804831F;
                gvar_8048307 += gvar_8048323;
                return result;
            }
            if(v9 >= 16) {
                *(unsigned int*)((v9 & 0xf) * 4 + (int)&gvar_8048327) = __rol__(((*(unsigned int*)((((v9 & 0xf) + 13) & 0xf) * 4 + (int)&gvar_8048327) ^ *(unsigned int*)((((v9 & 0xf) + 8) & 0xf) * 4 + (int)&gvar_8048327)) ^ *(unsigned int*)((((v9 & 0xf) + 2) & 0xf) * 4 + (int)&gvar_8048327)) ^ *(unsigned int*)((v9 & 0xf) * 4 + (int)&gvar_8048327), 1);
            }
            if(v9 >= 60) {
                v7 = v9;
                v0 = sub_8048157();
            }
            else if(v9 >= 40) {
                v7 = v9;
                v0 = sub_8048161();
            }
        }
    }
    while(v9 < 20);
    v7 = v9;
    v0 = sub_8048157();
    goto loc_804823C;
}

int sub_8048283() {
    int* ptr0 = (int*)&gvar_8048367;
    int v0 = 16;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    while(v0 == 0);
    return 0;
}

int sub_8048290() {
    int result;
    int* ptr0 = (int*)&gvar_8048327;
    int v0 = 16;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v0;
    }
    while(v0 == 0);
    return result;
}

int sub_804829F() {
    unsigned int v0;
    int* ptr0;
    int v1 = sub_8048290();
    int* ptr1 = (int*)(v0 - 64);
    int counter = 16;
    int result = v1;
    do {
        int v2 = *ptr0;
        ++ptr0;
        *ptr1 = (unsigned int)(unsigned char)(v2 >>> 24) | ((unsigned int)(unsigned char)(v2 >>> 16) << 8) | ((unsigned int)(unsigned char)(v2 >>> 8) << 16) | ((unsigned int)(unsigned char)v2 << 24);
        ++ptr1;
        --counter;
    }
    while(counter);
    return result;
}

int sub_80482B3() {
    int v0;
    int v1;
    int v2;
    gvar_804830F += v0;
    *(char*)((int)&gvar_8048367 + v0) = 128;
    int result = sub_804829F();
    while((unsigned int)result >= 64) {
        int v3 = sub_804819A(v1, v2);
        if(v3 == 64) {
            sub_8048283();
            return sub_8048290();
        }
        result = sub_804829F();
    }
    if((unsigned int)result >= 56) {
        sub_804819A(v1, v2);
        sub_8048283();
        result = sub_8048290();
    }
    return result;
}
