
int start(int param0, unsigned short* param1, unsigned char* param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    int v5;
    unsigned char v6;
    int v7;
    char v8;
    int v9 = 0;
    char v10 = 1;
    char v11 = 0;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    unsigned char* ptr0 = (unsigned char*)0x3;
    unsigned char* ptr1 = (unsigned char*)0x3;
    int v15 = v7;
    int* ptr2 = &param0;
    int v16 = v15;
    int v17 = v15 - 1;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = ((~v17 ^ ~v16) >>> 4) & 0x1;
    char v22 = ((v17 ^ v16) & v16) < 0;
    if(!v18) {
        int v23 = param0;
        unsigned short* ptr3 = param1;
        ptr2 = &param2;
        char v24 = *ptr3 == 28205;
        char v25 = *ptr3 < 28205;
        char v26 = __parity__((unsigned char)*ptr3 - 45);
        char v27 = *ptr3 < 28205;
        char v28 = (((*ptr3 - 28205) ^ *ptr3) & (*ptr3 ^ 0x6e2d)) < 0;
        char v29 = (((*ptr3 - 28205) ^ (*ptr3 ^ 0x6e2d)) >>> 4) & 0x1;
        if(v24) {
            v16 = v17;
            --v17;
            char v30 = v17 ? 0: 1;
            char v31 = v17 < 0;
            char v32 = __parity__((unsigned char)v17);
            v21 = ((~v17 ^ ~v16) >>> 4) & 0x1;
            char v33 = ((v17 ^ v16) & v16) < 0;
            if(v30) {
                goto loc_804807D;
            }
            else {
                unsigned char* ptr4 = param2;
                ptr2 = &v8;
                char v34 = 1;
                char v35 = 0;
                char v36 = 1;
                char v37 = 0;
                char v38 = 0;
                unsigned char v39 = *ptr4;
                v6 = (unsigned char)(*ptr4 - 48);
                v5 = 0;
                char v40 = *ptr4 == 48;
                char v41 = v6 >= 128;
                char v42 = __parity__(v6);
                v21 = (((v39 ^ 0x30) ^ v6) >>> 4) & 0x1;
                char v43 = v39 < 48;
                char v44 = (char)((v6 ^ v39) & (v39 ^ 0x30)) < 0;
                if(v43 || v40) {
                    goto loc_804807D;
                }
                else {
                    v4 = v6 == 8;
                    v3 = (char)v6 < 8;
                    v2 = __parity__(v6 - 8);
                    v1 = v6 < 8;
                    v0 = (((v6 - 8) ^ v6) & (v6 ^ 0x8)) < 0;
                    v21 = (((v6 - 8) ^ (v6 ^ 0x8)) >>> 4) & 0x1;
                    if(!v1 && !v4) {
                        goto loc_804807D;
                    }
                    else {
                        param2 = (unsigned char*)0x8;
                        ptr1 = (unsigned char*)0x8;
                        ptr2 = &v8;
                    }
                }
            }
        }
        else {
            char v45 = *ptr3 == 25389;
            char v46 = *ptr3 < 25389;
            char v47 = __parity__((unsigned char)*ptr3 - 45);
            char v48 = *ptr3 < 25389;
            char v49 = (((*ptr3 - 25389) ^ *ptr3) & (*ptr3 ^ 0x632d)) < 0;
            v21 = (((*ptr3 - 25389) ^ (*ptr3 ^ 0x632d)) >>> 4) & 0x1;
            if(v45) {
                v16 = 0;
                v9 = 1;
                char v50 = 0;
                char v51 = 0;
                char v52 = 0;
                v21 = 0;
                char v53 = 0;
            }
            goto loc_804807D;
        }
    }
    else {
    loc_804807D:
        int v54 = 0;
        v4 = 1;
        v3 = 0;
        v2 = 1;
        v0 = 0;
        v1 = 0;
        v6 = 0;
        v5 = 128;
    }
    int v55 = 134512849;
    --ptr2;
    *ptr2 = 103;
    int v56 = *ptr2;
    ++ptr2;
    interrupt(128);
}
