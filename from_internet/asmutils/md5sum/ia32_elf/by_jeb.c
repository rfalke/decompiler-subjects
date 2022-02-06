
int start(int param0, int param1, unsigned int param2, unsigned int param3) {
    int* ptr0;
    unsigned int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    int v7;
    char v8;
    int v9 = sub_80482B3(param0, param1);
    int v10 = 0;
    int v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 0;
    int v17 = v7;
    int v18 = v7;
    int v19 = v17 - 1;
    char v20 = v19 ? 0: 1;
    char v21 = v19 < 0;
    char v22 = __parity__((unsigned char)v19);
    char v23 = ((~v19 ^ ~v18) >>> 4) & 0x1;
    char v24 = ((v19 ^ v18) & v18) < 0;
    unsigned int v25 = param2;
    if(!v20) {
        unsigned int v26 = param3;
        v6 = param3;
        char v27 = v6 ? 0: 1;
        char v28 = v6 >= 0x80000000;
        char v29 = __parity__((unsigned char)v6);
        char v30 = 0;
        char v31 = 0;
        if(v27) {
            v6 = 0;
            v5 = 1;
            v4 = 0;
            v3 = 1;
            v2 = 0;
            v1 = 0;
            param3 = 1;
            v0 = 1;
            ptr0 = &v8;
            interrupt(128);
        }
        gvar_804A50F = v6;
        param0 = 0;
        v5 = 1;
        v4 = 0;
        v3 = 1;
        v2 = 0;
        v1 = 0;
        param3 = 5;
        v0 = 5;
        ptr0 = &v8;
        interrupt(128);
    }
    param0 = 134513883;
    int v32 = 0;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v2 = 0;
    v1 = 0;
    param1 = 0x2000;
    v6 = 0;
    param2 = 3;
    v0 = 3;
    ptr0 = &param3;
    interrupt(128);
}

int sub_80482B3(int param0, int param1) {
    int v0;
    int result = v0;
    gvar_8048483 = 1732584193;
    gvar_8048487 = 4023233417;
    gvar_804848B = 2562383102;
    gvar_804848F = 271733878;
    gvar_8048493 = 0;
    gvar_8048497 = 0;
    int* ptr0 = (int*)&gvar_804849B;
    int v1 = 16;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v1;
    }
    while(v1 == 0);
    return result;
}

int sub_80482E2(int param0, int param1) {
    int v0;
    return sub_8048306((~v0 & param1) | (param0 & v0));
}

int sub_804831C(int param0, int param1) {
    int v0;
    int result;
    int v1;
    int v2 = result;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr0 = &v0;
    int v6 = gvar_8048483;
    int v7 = gvar_8048487;
    int v8 = gvar_804848B;
    int v9 = gvar_804848F;
    int* ptr1 = (int*)&gvar_8048123;
    int counter = 4;
    do {
        int v10 = counter;
        int v11 = *ptr1;
        ++ptr1;
        int v12 = v11;
        int v13 = 4;
        do {
            int v14 = v13;
            v6 = v12{sub_80482E2}(v8, v9);
            v9 = v12{sub_80482E2}(v7, v8);
            v8 = v12{sub_80482E2}(v6, v7);
            v7 = v12{sub_80482E2}(v9, v6);
            v13 = v14 - 1;
        }
        while(v13);
        --counter;
    }
    while(counter);
    gvar_8048483 += v6;
    gvar_8048487 += v7;
    gvar_804848B += v8;
    gvar_804848F += v9;
    return result;
}

int sub_80483B8(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    char* ptr0;
    int v1;
    int v2;
    int v3;
    char* ptr1;
    int result = v2;
    unsigned int v4 = param0;
    unsigned int v5 = param1;
    int v6 = v3;
    int* ptr2 = &v1;
    unsigned int v7 = gvar_8048493;
    gvar_8048493 = (unsigned int)(param0 * 8 + v7);
    if((unsigned int)(param0 * 8 + v7) < v7) {
        ++gvar_8048497;
    }
    gvar_8048497 = (unsigned int)((param0 >>> 29) + gvar_8048497);
    if(((v7 >>> 3) & 0x3f)) {
        ptr0 = (char*)(((v7 >>> 3) & 0x3f) + &gvar_804849B);
        v0 = 64;
        if((int)(64 - ((v7 >>> 3) & 0x3f)) <= (int)param0) {
            v0 = param0;
            for(int i = (int)(64 - ((v7 >>> 3) & 0x3f)); i != 0; --i) {
                *ptr0 = *ptr1;
                ++ptr1;
                ++ptr0;
            }
            sub_804831C(0, (int)(64 - ((v7 >>> 3) & 0x3f)));
            param0 = v0 - param1;
            goto loc_80483FE;
        }
    }
    else {
    loc_80483FE:
        ptr0 = (char*)&gvar_804849B;
        while((int)param0 >= 64) {
            v0 = param0;
            char* ptr3 = ptr0;
            int v8 = 16;
            int v9 = 16;
            do {
                *(int*)ptr0 = *(int*)ptr1;
                ptr1 += 4;
                ptr0 += 4;
                --v9;
            }
            while(v9 == 0);
            ptr0 = ptr3;
            sub_804831C(0, (v7 >>> 3) & 0x3f);
            param0 = v0 - 64;
        }
    }
    while(param0 != 0) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
        --param0;
    }
    return result;
}

int sub_804841F(int param0, int param1) {
    int v0;
    int j;
    int v1;
    int v2;
    int* ptr0;
    int v3;
    int result = v2;
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr1 = &v1;
    int* ptr2 = ptr0;
    unsigned int v7 = (unsigned int)((gvar_8048493 >>> 3) & 0x3f);
    *(char*)((int)&gvar_804849B + v7) = 128;
    char* ptr3 = (char*)(v7 + 134513820);
    if((unsigned int)(int)(63 - v7) <= 7) {
        for(int i = (int)(63 - v7); i != 0; --i) {
            *ptr3 = 0;
            ++ptr3;
        }
        int* ptr4 = (int*)&gvar_804849B;
        int v8 = sub_804831C(0, (int)(63 - v7));
        j = 14;
        do {
            *ptr4 = v8;
            ++ptr4;
            --j;
        }
        while(j == 0);
    }
    else {
        v0 = 55 - v7;
        for(j = 55 - v7; j != 0; --j) {
            *ptr3 = 0;
            ++ptr3;
        }
    }
    gvar_80484D3 = gvar_8048493;
    gvar_80484D7 = gvar_8048497;
    sub_804831C(0, v0);
    int* ptr5 = ptr2;
    ptr2 = (int*)0x4;
    int* ptr6 = (int*)0x4;
    int* ptr7 = (int*)&gvar_8048483;
    while(ptr6 != 0) {
        *ptr5 = *ptr7;
        ++ptr7;
        ++ptr5;
        ptr6 = (int*)((char*)ptr6 - 1);
    }
    return result;
}
