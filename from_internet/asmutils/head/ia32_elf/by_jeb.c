
int start(int param0, int param1, int param2) {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    int v7;
    unsigned short* ptr0;
    int v8;
    gvar_804811E = 0;
    gvar_804811A = 10;
    int v9 = 0;
    int v10 = 0;
    char v11 = 1;
    char v12 = 0;
    char v13 = 1;
    char v14 = 0;
    char v15 = 0;
    int v16 = v8;
    int v17 = v8;
    int v18 = v16 - 1;
    char v19 = v18 ? 0: 1;
    char v20 = v18 < 0;
    char v21 = __parity__((unsigned char)v18);
    char v22 = ((~v18 ^ ~v17) >>> 4) & 0x1;
    char v23 = ((v18 ^ v17) & v17) < 0;
    int v24 = param0;
    unsigned int* ptr1 = &param1;
    if(!v19) {
        while(1) {
            unsigned short* ptr2 = *ptr1;
            ++ptr1;
            ptr0 = ptr2;
            char v25 = ptr0 ? 0: 1;
            char v26 = (int)ptr0 < 0;
            char v27 = __parity__((unsigned char)ptr0);
            char v28 = 0;
            char v29 = 0;
            if(v25) {
                break;
            }
            else {
                char v30 = *ptr0 == 28205;
                char v31 = *ptr0 < 28205;
                char v32 = __parity__((unsigned char)*ptr0 - 45);
                char v33 = *ptr0 < 28205;
                char v34 = (((*ptr0 - 28205) ^ *ptr0) & (*ptr0 ^ 0x6e2d)) < 0;
                v22 = (((*ptr0 - 28205) ^ (*ptr0 ^ 0x6e2d)) >>> 4) & 0x1;
                if(!v30) {
                    char v35 = *ptr0 == 25389;
                    char v36 = *ptr0 < 25389;
                    char v37 = __parity__((unsigned char)*ptr0 - 45);
                    char v38 = *ptr0 < 25389;
                    char v39 = (((*ptr0 - 25389) ^ *ptr0) & (*ptr0 ^ 0x632d)) < 0;
                    v22 = (((*ptr0 - 25389) ^ (*ptr0 ^ 0x632d)) >>> 4) & 0x1;
                    if(!v35) {
                        v7 = 0;
                        v6 = 1;
                        v5 = 0;
                        v4 = 1;
                        v3 = 0;
                        v2 = 0;
                        --ptr1;
                        *ptr1 = 5;
                        v1 = *ptr1;
                        ++ptr1;
                        interrupt(128);
                    }
                    v0 = *ptr1;
                    *ptr1 = &loc_8048071;
                    int v40 = /*BAD_CALL!*/ sub_8048106();
                    gvar_804811E = v40;
                }
                else {
                    v0 = *ptr1;
                    *ptr1 = &loc_804807E;
                    int v41 = /*BAD_CALL!*/ sub_8048106();
                    gvar_804811A = v41;
                }
            }
        }
    }
    v7 = 0x8048122;
    int v42 = 0;
    v6 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    int v43 = 0x2000;
    ptr0 = NULL;
    --ptr1;
    *ptr1 = 3;
    v1 = *ptr1;
    ++ptr1;
    interrupt(128);
}

int sub_8048106() {
    char* ptr0;
    int v0 = 0;
    int result = 0;
    while(1) {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if(!(unsigned char)v0) {
            return result;
        }
        v0 = (unsigned int)((unsigned char)v0 - 48) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        result = result * 10 + v0;
    }
    return result;
}
