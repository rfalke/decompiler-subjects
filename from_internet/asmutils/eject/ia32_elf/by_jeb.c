
int start(unsigned char* param0, unsigned int* param1, unsigned int* param2) {
    int v0;
    char v1;
    int v2;
    char v3;
    int v4 = v2;
    unsigned char* ptr0 = param0;
    unsigned int* ptr1 = &param1;
    unsigned int* ptr2 = (unsigned int*)&loc_804810D;
    unsigned char* ptr3 = ptr0;
    int v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 1;
    char v9 = 0;
    char v10 = 0;
    int v11 = -1;
    do {
        v1 = *ptr3 == 0;
        char v12 = *ptr3 > 0;
        char v13 = __parity__(0 - *ptr3);
        char v14 = *ptr3 > 0;
        char v15 = ((0 - *ptr3) & *ptr3) < 0;
        char v16 = (((0 - *ptr3) ^ *ptr3) >>> 4) & 0x1;
        ++ptr3;
        --v11;
    }
    while(~v1 && v11 == 0);
    int v17 = v4;
    unsigned int v18 = *(unsigned int*)(ptr3 - 4);
    char* ptr4 = (char*)0x804812F;
    char v19 = v18 == 0x646363;
    char v20 = (int)v18 < 0x646363;
    char v21 = __parity__((unsigned char)v18 - 99);
    char v22 = v18 < 0x646363;
    char v23 = (((v18 - 0x646363) ^ v18) & (v18 ^ 0x646363)) < 0;
    char v24 = (((v18 - 0x646363) ^ (v18 ^ 0x646363)) >>> 4) & 0x1;
    *(char*)0x804812F = v19 ? 0: 1;
    int v25 = &loc_804810D;
    int v26 = "/cdrom";
    int v27 = "iso9660";
    int v28 = v17;
    int v29 = v17 - 1;
    char v30 = v29 ? 0: 1;
    char v31 = v29 < 0;
    char v32 = __parity__((unsigned char)v29);
    char v33 = ((~v29 ^ ~v28) >>> 4) & 0x1;
    char v34 = ((v29 ^ v28) & v28) < 0;
    if(!v30) {
        ptr2 = param1;
        ptr1 = &param2;
        char v35 = *ptr2 == 0x6463632d;
        char v36 = *ptr2 < 0x6463632d;
        char v37 = __parity__((unsigned char)*ptr2 - 45);
        char v38 = *ptr2 < 0x6463632d;
        char v39 = (((*ptr2 - 0x6463632d) ^ *ptr2) & (*ptr2 ^ 0x6463632d)) < 0;
        char v40 = (((*ptr2 - 0x6463632d) ^ (*ptr2 ^ 0x6463632d)) >>> 4) & 0x1;
        if(!v35) {
            char v41 = *(char*)0x804812F ? 0: 1;
            char v42 = *(char*)0x804812F < 0;
            char v43 = __parity__(*(char*)0x804812F);
            char v44 = 0;
            char v45 = 0;
            if(v41) {
                goto loc_8048091;
            }
            else {
                goto loc_8048088;
            }
        }
        else {
        loc_8048088:
            *(char*)0x804812F = 0;
            v28 = v29;
            --v29;
            char v46 = v29 ? 0: 1;
            char v47 = v29 < 0;
            char v48 = __parity__((unsigned char)v29);
            v33 = ((~v29 ^ ~v28) >>> 4) & 0x1;
            char v49 = ((v29 ^ v28) & v28) < 0;
            ptr2 = (unsigned int*)&loc_804810D;
            if(!v46) {
                ptr2 = param2;
                ptr1 = &v3;
            loc_8048091:
                v28 = v29;
                int v50 = v29 - 1;
                char v51 = v50 ? 0: 1;
                char v52 = v50 < 0;
                char v53 = __parity__((unsigned char)v50);
                v33 = ((~v50 ^ ~v28) >>> 4) & 0x1;
                char v54 = ((v50 ^ v28) & v28) < 0;
                if(!v51) {
                    v26 = *ptr1;
                    ++ptr1;
                    v28 = v50;
                    int v55 = v50 - 1;
                    char v56 = v55 ? 0: 1;
                    char v57 = v55 < 0;
                    char v58 = __parity__((unsigned char)v55);
                    v33 = ((~v55 ^ ~v28) >>> 4) & 0x1;
                    char v59 = ((v55 ^ v28) & v28) < 0;
                    if(!v56) {
                        v27 = *ptr1;
                        ++ptr1;
                        v28 = v55;
                        int v60 = v55 - 1;
                        char v61 = v60 ? 0: 1;
                        char v62 = v60 < 0;
                        char v63 = __parity__((unsigned char)v60);
                        v33 = ((~v60 ^ ~v28) >>> 4) & 0x1;
                        char v64 = ((v60 ^ v28) & v28) < 0;
                        if(!v61) {
                            ptr4 = *ptr1;
                            ++ptr1;
                        }
                    }
                }
            }
        }
    }
    --ptr1;
    *ptr1 = v26;
    --ptr1;
    *ptr1 = ptr2;
    char v65 = *ptr4 ? 0: 1;
    char v66 = *ptr4 < 0;
    char v67 = __parity__(*ptr4);
    char v68 = 0;
    char v69 = 0;
    if(v65) {
        --ptr1;
        *ptr1 = 22;
        v0 = *ptr1;
        ++ptr1;
        interrupt(128);
    }
    int v70 = 0;
    v65 = 1;
    v66 = 0;
    v67 = 1;
    v68 = 0;
    v69 = 0;
    v26 = 0x800;
    --ptr1;
    *ptr1 = 5;
    v0 = *ptr1;
    ++ptr1;
    interrupt(128);
}
