
int start(int param0, int param1) {
    int v0;
    unsigned short* ptr0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    unsigned short* ptr1;
    int v7;
    char v8;
    int v9 = v7;
    int v10 = param0;
    unsigned int* ptr2 = &param1;
    int v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 0;
    int v17 = 0;
    int v18 = -1;
    char v19 = 0;
    char v20 = 1;
    char v21 = 1;
    char v22 = 1;
    char v23 = 0;
    do {
        int v24 = v18;
        ++v18;
        char v25 = v18 ? 0: 1;
        char v26 = v18 < 0;
        char v27 = __parity__((unsigned char)v18);
        char v28 = (((v24 ^ 0x1) ^ v18) >>> 4) & 0x1;
        char v29 = ((v18 ^ v24) & ~(v24 ^ 0x1)) < 0;
        unsigned short* ptr3 = *ptr2;
        ++ptr2;
        ptr1 = ptr3;
        char v30 = ptr1 ? 0: 1;
        char v31 = (int)ptr1 < 0;
        char v32 = __parity__((unsigned char)ptr1);
        char v33 = 0;
        char v34 = 0;
        if(v30) {
            goto loc_804804C;
        }
        else {
            v8 = *ptr1 == 25389;
            char v35 = *ptr1 < 25389;
            char v36 = __parity__((unsigned char)*ptr1 - 45);
            char v37 = *ptr1 < 25389;
            char v38 = (((*ptr1 - 25389) ^ *ptr1) & (*ptr1 ^ 0x632d)) < 0;
            v28 = (((*ptr1 - 25389) ^ (*ptr1 ^ 0x632d)) >>> 4) & 0x1;
        }
    }
    while(v8);
    unsigned short* ptr4 = ptr1;
    char v39 = ptr1 ? 0: 1;
    char v40 = (int)ptr1 < 0;
    char v41 = __parity__((unsigned char)ptr1);
    char v42 = 0;
    char v43 = 0;
    if(v40) {
        v6 = v18 ? 0: 1;
        v5 = v18 < 0;
        v4 = __parity__((unsigned char)v18);
        v3 = 0;
        v2 = 0;
        if(v6) {
            int v44 = 438;
            --ptr2;
            *ptr2 = 66;
            v1 = 66;
            ptr0 = ptr4;
            *ptr2 = 5;
            v0 = *ptr2;
            ++ptr2;
            interrupt(128);
        }
    }
    v1 = 0;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    ptr0 = ptr4;
    --ptr2;
    *ptr2 = 30;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
loc_804804C:
    ptr0 = NULL;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    --ptr2;
    *ptr2 = 1;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}
