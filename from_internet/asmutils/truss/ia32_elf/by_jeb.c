
int start(int param0) {
    int* ptr0;
    int v0;
    int v1;
    char v2;
    int v3 = v1;
    int* ptr1 = (int*)(v3 * 4 + (int)&v2);
    int v4 = v3;
    int v5 = v3 - 1;
    char v6 = v5 ? 0: 1;
    char v7 = v5 < 0;
    char v8 = __parity__((unsigned char)v5);
    char v9 = ((~v5 ^ ~v4) >>> 4) & 0x1;
    char v10 = ((v5 ^ v4) & v4) < 0;
    if(!v6) {
        int v11 = param0;
        param0 = 2;
        v0 = 2;
        ptr0 = &v2;
        interrupt(128);
    }
    int v12 = 1;
    v1 = 1;
    v0 = 1;
    ptr0 = &param0;
    interrupt(128);
}

char sub_8048B47(int param0) {
    int v0;
    int v1 = v0;
    unsigned char* ptr0 = (unsigned char*)(v0 + 7);
    int v2 = 8;
    do {
        unsigned char v3 = (unsigned char)(((unsigned char)param0 & 0xf) + 48);
        if(((unsigned char)param0 & 0xf) != 9 && (char)v3 >= 57) {
            v3 += 39;
        }
        *ptr0 = v3;
        --ptr0;
        param0 >>>= 4;
        if(!param0) {
            break;
        }
        else {
            --v2;
        }
    }
    while(v2);
    unsigned char* ptr1 = ptr0;
    char* ptr2 = (char*)(v1 - 1);
    for(int i = 1 - (unsigned int)(v2 - 9); i != 0; --i) {
        *ptr2 = *ptr1;
        ++ptr1;
        ++ptr2;
    }
    *(char*)((int)ptr2 - (unsigned int)(v2 - 9)) = 0;
    return (char)(0 - (unsigned int)(v2 - 9));
}
