
int start(int param0, int param1) {
    int v0;
    int v1;
    unsigned char* ptr0;
    int v2;
    unsigned char* ptr1 = ptr0;
    unsigned int* ptr2 = &param0;
    unsigned char* ptr3 = ptr1;
    unsigned char* ptr4 = ptr1 - 1;
    char v3 = ptr4 ? 0: 1;
    char v4 = (int)ptr4 < 0;
    char v5 = __parity__((unsigned char)ptr4);
    char v6 = (((unsigned char*)~(int)ptr4 ^ (unsigned char*)~(int)ptr3) >>> 4) & 0x1;
    char v7 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr3) & (int)ptr3) < 0;
    if(!v3) {
        int v8 = param0;
        ptr2 = &param1;
        while(1) {
            unsigned char* ptr5 = *ptr2;
            ++ptr2;
            ptr4 = ptr5;
            char v9 = ptr4 ? 0: 1;
            char v10 = (int)ptr4 < 0;
            char v11 = __parity__((unsigned char)ptr4);
            char v12 = 0;
            char v13 = 0;
            if(v9) {
                break;
            }
            else {
                char v14 = *ptr4 == 45;
                char v15 = *ptr4 < 45;
                char v16 = __parity__(*ptr4 - 45);
                char v17 = *ptr4 < 45;
                char v18 = (((*ptr4 - 45) ^ *ptr4) & (*ptr4 ^ 0x2d)) < 0;
                char v19 = (((*ptr4 - 45) ^ (*ptr4 ^ 0x2d)) >>> 4) & 0x1;
                if(v14) {
                    unsigned char* ptr6 = ptr4 + 1;
                    char v20 = *ptr6 == 45;
                    char v21 = *ptr6 < 45;
                    char v22 = __parity__(*ptr6 - 45);
                    char v23 = *ptr6 < 45;
                    char v24 = (((*ptr6 - 45) ^ *ptr6) & (*ptr6 ^ 0x2d)) < 0;
                    char v25 = (((*ptr6 - 45) ^ (*ptr6 ^ 0x2d)) >>> 4) & 0x1;
                    if(!v20) {
                        --ptr2;
                        *ptr2 = &loc_80482CE;
                        int v26 = /*BAD_CALL!*/ sub_8048364(v2);
                    }
                    else {
                        ptr3 = ptr6;
                        int* ptr7 = (int*)(ptr6 + 1);
                        char v27 = ptr7 ? 0: 1;
                        char v28 = (int)ptr7 < 0;
                        char v29 = __parity__((unsigned char)ptr7);
                        char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x1) ^ (int)ptr7) >>> 4) & 0x1);
                        char v31 = (int)(int*)((int)(int*)((int)ptr7 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x1)) < 0;
                        --ptr2;
                        *ptr2 = &loc_80482D6;
                        /*BAD_CALL!*/ sub_80483E9();
                    }
                }
            }
        }
    }
    --ptr2;
    *ptr2 = &loc_80482DD;
    /*BAD_CALL!*/ sub_8048412();
    char v32 = gvar_8048916 ? 0: 1;
    char v33 = gvar_8048916 >= 128;
    char v34 = __parity__(gvar_8048916);
    char v35 = gvar_8048916 < 0;
    char v36 = 0;
    char v37 = 0;
    if(!v32) {
        int v38 = &gvar_804809D;
        int v39 = 27;
        --ptr2;
        *ptr2 = &loc_80482F5;
        int v40 = /*BAD_CALL!*/ sub_804845B();
        v1 = 67;
        v2 = &gvar_804810C;
        --ptr2;
        *ptr2 = 1;
        ptr4 = *ptr2;
        *ptr2 = 4;
        v0 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
    v32 = gvar_8048915 ? 0: 1;
    v33 = gvar_8048915 >= 128;
    v34 = __parity__(gvar_8048915);
    v35 = gvar_8048915 < 0;
    v36 = 0;
    v37 = 0;
    if(!v32) {
        int v41 = &gvar_80480B8;
        int v42 = 26;
        --ptr2;
        *ptr2 = &loc_8048324;
        int v43 = /*BAD_CALL!*/ sub_804845B();
        v1 = 80;
        v2 = &gvar_804814F;
        --ptr2;
        *ptr2 = 1;
        ptr4 = *ptr2;
        *ptr2 = 4;
        v0 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
    --ptr2;
    *ptr2 = 1;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}

int sub_8048364(int param0) {
    int v0;
    int result;
    int v1 = result;
    int v2 = 6;
    int counter = 6;
    unsigned char* ptr0 = (unsigned char*)(v0 - 1);
    do {
        ++ptr0;
        if(!*ptr0) {
            return result;
        }
        if(*ptr0 == 97) {
            ++gvar_8048914;
            gvar_8048912 = 10;
            ++gvar_8048913;
        }
        if(*ptr0 == 108 && !result) {
            gvar_8048912 = 10;
            gvar_8048913 = 0;
        }
        if(*ptr0 == 116) {
            ++gvar_8048918;
            ++gvar_804891B;
        }
        if(*ptr0 == 117) {
            ++gvar_8048919;
            ++gvar_804891B;
        }
        if(*ptr0 == 119) {
            ++gvar_804891A;
            ++gvar_804891B;
        }
        if(*ptr0 == 112) {
            ++gvar_8048910;
        }
        --counter;
    }
    while(counter);
    return result;
}

void sub_80483E9() {
    unsigned int* ptr0;
    if(*ptr0 == 2020175477) {
        ++gvar_8048915;
        ++gvar_8048917;
    }
    if(*ptr0 == 0x74656e69) {
        ++gvar_8048916;
        ++gvar_8048917;
    }
}

void sub_8048412() {
    char v0 = gvar_804891B ? 0: 1;
    char v1 = gvar_804891B >= 128;
    char v2 = __parity__(gvar_804891B);
    char v3 = gvar_804891B < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804841B: &sub_804842D;
}

void sub_804841B() {
    ++gvar_8048918;
    ++gvar_8048919;
    ++gvar_804891A;
}

void sub_804842D() {
    char v0 = gvar_8048914 ? 0: 1;
    char v1 = gvar_8048914 >= 128;
    char v2 = __parity__(gvar_8048914);
    char v3 = gvar_8048914 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8048436: &sub_8048445;
}

int sub_804845B() {
    char v0;
    int v1 = 1;
    int v2 = 4;
    int v3 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

void sub_80484B0() {
    char v0 = gvar_8048918 ? 0: 1;
    char v1 = gvar_8048918 >= 128;
    char v2 = __parity__(gvar_8048918);
    char v3 = gvar_8048918 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80484D9: &sub_80484B9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80484B9(int param0, int param1) {
    int v0 = 6;
    char* ptr0 = (char*)&gvar_8048085;
    char* ptr1 = (char*)&gvar_8049ACA;
    while(v0 != 0) {
        *ptr1 = *ptr0;
        ++ptr0;
        ++ptr1;
        --v0;
    }
    /*BAD_CALL!*/ sub_8048553(0, param1);
}

void sub_80484D9() {
    char v0 = gvar_8048919 ? 0: 1;
    char v1 = gvar_8048919 >= 128;
    char v2 = __parity__(gvar_8048919);
    char v3 = gvar_8048919 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8048502: &sub_80484E2;
}

int sub_8048568(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int* ptr0 = &v0;
    int v6 = v3;
    int v7 = param0;
    int v8 = param1;
    int v9 = v1;
    int* ptr1 = &v0;
    int v10 = v4;
    int v11 = v2;
    int v12 = v5;
    int v13 = 32;
    int v14 = 0;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    int v20 = 0x100;
    char* ptr2 = (char*)&gvar_804991C;
    while(v20 != 0) {
        *ptr2 = 32;
        ++ptr2;
        --v20;
    }
    int v21 = v12;
    int v22 = v11;
    int v23 = v10;
    int v24 = v9;
    int v25 = v8;
    int v26 = v7;
    int v27 = v6;
    int v28 = &gvar_804991C;
    int v29 = 1;
    int v30 = &gvar_804991C;
    v6 = 3;
    int v31 = 3;
    int* ptr3 = &v0;
    interrupt(128);
}
