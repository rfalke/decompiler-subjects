
int start(unsigned char* param0, unsigned char* param1, unsigned char* param2) {
    unsigned char* ptr0;
    int v0;
    unsigned char* ptr1;
    int v1;
    char v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    gvar_80483EF = 1;
    int v9 = v1;
    int v10 = v1;
    int v11 = v9 - 1;
    char v12 = v11 ? 0: 1;
    char v13 = v11 < 0;
    char v14 = __parity__((unsigned char)v11);
    char v15 = ((~v11 ^ ~v10) >>> 4) & 0x1;
    char v16 = ((v11 ^ v10) & v10) < 0;
    unsigned char* ptr2 = param0;
    unsigned int* ptr3 = &param1;
    int v17 = v11;
    int v18 = v11 - 1;
    char v19 = v18 ? 0: 1;
    char v20 = v18 < 0;
    char v21 = __parity__((unsigned char)v18);
    char v22 = ((~v18 ^ ~v17) >>> 4) & 0x1;
    char v23 = ((v18 ^ v17) & v17) < 0;
    if(!v20) {
        ptr2 = param1;
        ptr3 = &param2;
        v17 = v18;
        int v24 = v18 - 1;
        char v25 = v24 ? 0: 1;
        char v26 = v24 < 0;
        char v27 = __parity__((unsigned char)v24);
        v22 = ((~v24 ^ ~v17) >>> 4) & 0x1;
        char v28 = ((v24 ^ v17) & v17) < 0;
        if(!v26) {
            ptr1 = param2;
            v0 = 0;
            v19 = 1;
            v20 = 0;
            v21 = 1;
            v23 = 0;
            v8 = 0;
            param2 = (unsigned char*)0x5;
            ptr0 = (unsigned char*)0x5;
            ptr3 = &v2;
            interrupt(128);
        }
        gvar_80483EB = 0;
        int v29 = &gvar_8048203;
        char v30 = *ptr2 == 101;
        char v31 = *ptr2 < 101;
        char v32 = __parity__(*ptr2 - 101);
        char v33 = *ptr2 < 101;
        char v34 = (((*ptr2 - 101) ^ *ptr2) & (*ptr2 ^ 0x65)) < 0;
        v22 = (((*ptr2 - 101) ^ (*ptr2 ^ 0x65)) >>> 4) & 0x1;
        if(!v30) {
            v29 = &gvar_8048312;
            v19 = *ptr2 == 100;
            v20 = *ptr2 < 100;
            v21 = __parity__(*ptr2 - 100);
            v8 = *ptr2 < 100;
            v23 = (((*ptr2 - 100) ^ *ptr2) & (*ptr2 ^ 0x64)) < 0;
            v22 = (((*ptr2 - 100) ^ (*ptr2 ^ 0x64)) >>> 4) & 0x1;
            if(!v19) {
                goto loc_80480AA;
            }
        }
        v29();
        ptr1 = NULL;
        v19 = 1;
        v20 = 0;
        v21 = 1;
        v23 = 0;
        v8 = 0;
        param1 = (unsigned char*)0x1;
        ptr0 = (unsigned char*)0x1;
        ptr3 = &param2;
        interrupt(128);
    }
loc_80480AA:
    --ptr3;
    *ptr3 = 21;
    int v35 = 21;
    v0 = &gvar_804804C;
    *ptr3 = 1;
    ptr1 = *ptr3;
    *ptr3 = 4;
    ptr0 = *ptr3;
    ++ptr3;
    interrupt(128);
}
