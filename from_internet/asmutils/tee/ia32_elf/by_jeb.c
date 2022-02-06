
int start(unsigned char* param0, unsigned char* param1) {
    unsigned char* ptr0;
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned char* ptr1;
    unsigned char* ptr2;
    int v6;
    unsigned char* ptr3;
    char v7;
    int v8 = &gvar_804A0FF;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    int v15 = v6;
    int v16 = v6;
    int v17 = v15 - 1;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = ((~v17 ^ ~v16) >>> 4) & 0x1;
    char v22 = ((v17 ^ v16) & v16) < 0;
    unsigned int* ptr4 = &param1;
    if(!v18) {
        ptr2 = (unsigned char*)0x241;
        ptr1 = param1;
        ptr4 = &ptr3;
        unsigned char* ptr5 = ptr1;
        unsigned char v23 = *ptr5;
        unsigned char* ptr6 = ptr5 + 1;
        v5 = v23 == 45;
        v4 = (char)v23 < 45;
        v3 = __parity__(v23 - 45);
        v2 = v23 < 45;
        v1 = (((v23 - 45) ^ v23) & (v23 ^ 0x2d)) < 0;
        v21 = (((v23 - 45) ^ (v23 ^ 0x2d)) >>> 4) & 0x1;
        if(v5) {
            while(1) {
                v23 = *ptr6;
                ++ptr6;
                char v24 = v23 ? 0: 1;
                char v25 = v23 >= 128;
                char v26 = __parity__(v23);
                char v27 = 0;
                char v28 = 0;
                if(v24) {
                    break;
                }
                else {
                    char v29 = v23 == 97;
                    char v30 = (char)v23 < 97;
                    char v31 = __parity__(v23 - 97);
                    char v32 = v23 < 97;
                    char v33 = (((v23 - 97) ^ v23) & (v23 ^ 0x61)) < 0;
                    v21 = (((v23 - 97) ^ (v23 ^ 0x61)) >>> 4) & 0x1;
                    if(v29) {
                        ptr2 = (unsigned char*)0x441;
                    }
                    else {
                        v5 = v23 == 105;
                        v4 = (char)v23 < 105;
                        v3 = __parity__(v23 - 105);
                        v2 = v23 < 105;
                        v1 = (((v23 - 105) ^ v23) & (v23 ^ 0x69)) < 0;
                        v21 = (((v23 - 105) ^ (v23 ^ 0x69)) >>> 4) & 0x1;
                        if(v5) {
                            param1 = ptr2;
                            v0 = 0;
                            v5 = 1;
                            v4 = 0;
                            v3 = 1;
                            v1 = 0;
                            v2 = 0;
                            ptr2 = (unsigned char*)&loc_80480EF;
                            ptr1 = (unsigned char*)0xD;
                            param0 = (unsigned char*)0x43;
                            ptr0 = (unsigned char*)0x43;
                            ptr4 = &param1;
                            interrupt(128);
                        }
                        ptr1 = NULL;
                        param1 = (unsigned char*)0x1;
                        ptr0 = (unsigned char*)0x1;
                        ptr4 = &ptr3;
                        interrupt(128);
                    }
                }
            }
            unsigned char* ptr7 = ptr3;
            ptr4 = &v7;
            ptr1 = ptr7;
            v5 = ptr1 ? 0: 1;
            v4 = (int)ptr1 < 0;
            v3 = __parity__((unsigned char)ptr1);
            v1 = 0;
            v2 = 0;
            if(v5) {
                goto loc_80480B1;
            }
        }
        v0 = 436;
        --ptr4;
        *ptr4 = 5;
        ptr0 = *ptr4;
        ++ptr4;
        interrupt(128);
    }
loc_80480B1:
    int v34 = 0;
    char v35 = 1;
    char v36 = 0;
    char v37 = 1;
    char v38 = 0;
    char v39 = 0;
    gvar_804A0FF = 0;
    v8 = 134521091;
    int v40 = 0;
    char v41 = 1;
    char v42 = 0;
    char v43 = 1;
    char v44 = 0;
    char v45 = 0;
    v0 = 0x2000;
    ptr2 = (unsigned char*)0x80480FF;
    ptr1 = NULL;
    v5 = 1;
    v4 = 0;
    v3 = 1;
    v1 = 0;
    v2 = 0;
    --ptr4;
    *ptr4 = 3;
    ptr0 = *ptr4;
    ++ptr4;
    interrupt(128);
}
