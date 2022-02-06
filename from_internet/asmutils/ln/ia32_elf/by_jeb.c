
char start(unsigned short* param0, unsigned short* param1, unsigned short* param2, unsigned short* param3) {
    int* ptr0;
    unsigned short* ptr1;
    unsigned short* ptr2;
    unsigned short* ptr3;
    char v0;
    unsigned int v1;
    char v2;
    int v3;
    char v4;
    unsigned int v5 = v1;
    unsigned short* ptr4 = param0;
    do {
        v0 = *(char*)ptr4;
        ptr4 = (unsigned short*)((char*)ptr4 + 1);
        v2 = v0 ? 0: 1;
        char v6 = v0 < 0;
        char v7 = __parity__(v0);
        char v8 = 0;
        char v9 = 0;
    }
    while(!v2);
    char v10 = v5 == 3;
    char v11 = (int)v5 < 3;
    char v12 = __parity__((unsigned char)v5 - 3);
    char v13 = v5 < 3;
    char v14 = (((v5 - 3) ^ v5) & (v5 ^ 0x3)) < 0;
    char v15 = (((v5 - 3) ^ (v5 ^ 0x3)) >>> 4) & 0x1;
    if(!v13) {
        unsigned short* ptr5 = param1;
        unsigned short* ptr6 = param2;
        v10 = *(char*)(ptr4 - 2) == 115;
        v11 = *(char*)(ptr4 - 2) < 115;
        v12 = __parity__(*(char*)(ptr4 - 2) - 115);
        v13 = *(unsigned char*)(ptr4 - 2) < 115;
        v14 = (((*(char*)(ptr4 - 2) - 115) ^ *(char*)(ptr4 - 2)) & (*(char*)(ptr4 - 2) ^ 0x73)) < 0;
        v15 = (((*(char*)(ptr4 - 2) - 115) ^ (*(char*)(ptr4 - 2) ^ 0x73)) >>> 4) & 0x1;
        if(!v10) {
            v10 = *ptr5 == 29485;
            v11 = *ptr5 < 29485;
            v12 = __parity__((unsigned char)*ptr5 - 45);
            v13 = *ptr5 < 29485;
            v14 = (((*ptr5 - 29485) ^ *ptr5) & (*ptr5 ^ 0x732d)) < 0;
            v15 = (((*ptr5 - 29485) ^ (*ptr5 ^ 0x732d)) >>> 4) & 0x1;
            if(v10) {
                ptr5 = param3;
                ptr3 = param3;
                ptr2 = ptr6;
                param3 = (unsigned short*)0x53;
                ptr1 = (unsigned short*)0x53;
                ptr0 = &v4;
                interrupt(128);
            }
            ptr3 = ptr6;
            ptr2 = ptr5;
            param2 = (unsigned short*)0x9;
            ptr1 = (unsigned short*)0x9;
            ptr0 = &param3;
            interrupt(128);
        }
        unsigned short* ptr7 = ptr5;
        ptr5 = ptr6;
        ptr6 = ptr7;
        ptr2 = ptr5;
        param2 = (unsigned short*)0xA;
        ptr1 = (unsigned short*)0xA;
        ptr0 = &param3;
        interrupt(128);
    }
    ptr2 = (unsigned int)v0 | ((unsigned int)v3 << 8);
    param0 = (unsigned short*)0x1;
    ptr1 = (unsigned short*)0x1;
    ptr0 = &param1;
    interrupt(128);
}
