
int start() {
    char v0;
    int v1 = 2;
    int v2 = &loc_80480FB;
    int v3 = 5;
    int v4 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

char* sub_804804C(int param0, int param1) {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    char* ptr1;
    char* ptr2;
    char* result = ptr2;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    int* ptr3 = &v0;
    int v6 = v2;
    if(param1) {
        sub_804804C((int)ptr2);
        *ptr1 = (unsigned char)ptr0 + *ptr1;
        *ptr1 = *ptr1 & 0x3;
        sub_804804C(v6);
    }
    else {
        int v7 = *(int*)ptr1;
        if(!(unsigned char)v7) {
            v7 = -640;
        }
        else if((unsigned char)v7 == 2) {
            v7 = (unsigned int)640 | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
        }
        else if((unsigned char)v7 != 1) {
            int v8 = -1;
            v7 = -1;
        }
        int v9 = *(int*)(ptr1 + 4) + v7;
        *(char*)(v9 + v2) = 14;
        *(int*)(ptr1 + 4) = v9;
        int counter = 0xffff;
        do {
            --counter;
        }
        while(counter);
    }
    return result;
}
