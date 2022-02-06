
int start(int param0, unsigned char* param1, unsigned char* param2) {
    int v0;
    int v1;
    unsigned char* ptr0;
    int v2;
    char v3;
    unsigned char* ptr1 = (unsigned char*)0x804804D;
    *(char*)&gvar_804818F = 10;
    int v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 1;
    char v8 = 0;
    char v9 = 0;
    int v10 = v2;
    unsigned int* ptr2 = &param0;
    int v11 = v10;
    int v12 = v10 - 1;
    char v13 = v12 ? 0: 1;
    char v14 = v12 < 0;
    char v15 = __parity__((unsigned char)v12);
    char v16 = ((~v12 ^ ~v11) >>> 4) & 0x1;
    char v17 = ((v12 ^ v11) & v11) < 0;
    if(!v13) {
        int v18 = param0;
        ptr0 = param1;
        ptr2 = &param2;
        char v19 = *ptr0 == 45;
        char v20 = *ptr0 < 45;
        char v21 = __parity__(*ptr0 - 45);
        char v22 = *ptr0 < 45;
        char v23 = (((*ptr0 - 45) ^ *ptr0) & (*ptr0 ^ 0x2d)) < 0;
        v16 = (((*ptr0 - 45) ^ (*ptr0 ^ 0x2d)) >>> 4) & 0x1;
        if(v19) {
            unsigned char* ptr3 = ptr0;
            ptr1 = ptr3 + 1;
            char v24 = *ptr1 == 110;
            char v25 = *ptr1 < 110;
            char v26 = __parity__(*ptr1 - 110);
            char v27 = *ptr1 < 110;
            char v28 = (((*ptr1 - 110) ^ *ptr1) & (*ptr1 ^ 0x6e)) < 0;
            char v29 = (((*ptr1 - 110) ^ (*ptr1 ^ 0x6e)) >>> 4) & 0x1;
            if(v24) {
                ptr1 = param2;
                ptr2 = &v3;
            }
            unsigned int v30 = 0;
            int v31 = 0;
            char v32 = 1;
            char v33 = 0;
            char v34 = 1;
            char v35 = 0;
            char v36 = 0;
            while(1) {
                v31 = (unsigned int)*ptr1 | ((unsigned int)((v31 >>> 8) & 0xffffff) << 8);
                ++ptr1;
                unsigned char v37 = (unsigned char)v31;
                v31 = (unsigned int)((unsigned char)v31 - 48) | ((unsigned int)((v31 >>> 8) & 0xffffff) << 8);
                char v38 = (unsigned char)v31 ? 0: 1;
                char v39 = (v31 >>> 7) & 0x1;
                char v40 = __parity__((unsigned char)v31);
                v16 = (((v37 ^ 0x30) ^ (unsigned char)v31) >>> 4) & 0x1;
                char v41 = v37 < 48;
                char v42 = (((unsigned char)v31 ^ v37) & (v37 ^ 0x30)) < 0;
                if(v41) {
                    break;
                }
                else {
                    char v43 = (unsigned char)v31 == 9;
                    char v44 = (unsigned char)v31 < 9;
                    char v45 = __parity__((unsigned char)v31 - 9);
                    char v46 = (unsigned char)v31 < 9;
                    char v47 = ((((unsigned char)v31 - 9) ^ (unsigned char)v31) & ((unsigned char)v31 ^ 0x9)) < 0;
                    v16 = ((((unsigned char)v31 - 9) ^ ((unsigned char)v31 ^ 0x9)) >>> 4) & 0x1;
                    if(!v43 && v44 == v47) {
                        break;
                    }
                    else {
                        unsigned int v48 = v30;
                        int v49 = v30 * 10;
                        v11 = v30 * 10;
                        v30 = (unsigned int)(v31 + v49);
                        char v50 = v30 ? 0: 1;
                        char v51 = v30 >= 0x80000000;
                        char v52 = __parity__((unsigned char)v30);
                        char v53 = (((v31 ^ v11) ^ v30) >>> 4) & 0x1;
                        char v54 = __carry__(v31, v11);
                        char v55 = ((v30 ^ v11) & ~(v31 ^ v11)) < 0;
                    }
                }
            }
            gvar_804818F = v30;
            unsigned char* ptr4 = *ptr2;
            ++ptr2;
            ptr0 = ptr4;
            v13 = ptr0 ? 0: 1;
            v14 = (int)ptr0 < 0;
            v15 = __parity__((unsigned char)ptr0);
            v17 = 0;
            v9 = 0;
            if(v13) {
                goto loc_804809E;
            }
        }
        v1 = 0;
        v13 = 1;
        v14 = 0;
        v15 = 1;
        v17 = 0;
        v9 = 0;
        --ptr2;
        *ptr2 = 5;
        v0 = *ptr2;
        ++ptr2;
        interrupt(128);
    }
loc_804809E:
    v1 = 134562195;
    ptr0 = NULL;
    --ptr2;
    *ptr2 = 108;
    v0 = *ptr2;
    ++ptr2;
    interrupt(128);
}

void sub_80480FA(unsigned int param0) {
    unsigned int v0 = param0;
    char* ptr0 = (char*)&gvar_8048193;
    char* ptr1 = (char*)&gvar_804C193;
    for(int i = param0 - &gvar_804C193; i != 0; --i) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
    }
}
