
int start() {
    char v0;
    int v1 = "%ntZzTDrXxcpBbhAayjGVWUwulICYmedkHMSs/usr/lib/locale/LC_TIME%m/%d/%y";
    int v2 = 134514144;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = 134514144;
    int v10 = 78;
    int v11 = 78;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_804804C() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = 5;
    int v8 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

unsigned char sub_80482C2() {
    char v0;
    unsigned char* ptr0;
    unsigned char* ptr1;
    unsigned char* ptr2;
    while(1) {
        unsigned char v1 = *ptr0;
        ++ptr0;
        if(!v1) {
            return 0;
        }
        if(v1 == 37 && *ptr0) {
            v1 = *ptr0;
            ++ptr0;
            unsigned char* ptr3 = ptr1;
            unsigned char* ptr4 = ptr2;
            int v2 = 37;
            int v3 = 37;
            do {
                v0 = *ptr4 == v1;
                ++ptr4;
                --v3;
            }
            while(~v0 && v3 == 0);
            ptr1 = ptr3;
            if(v0) {
                int v4 = *(int*)((char*)(((unsigned int)*(char*)((int*)(v3 + (int)ptr2) - 29) | ((unsigned int)((v3 >>> 8) & 0xffffff) << 8)) + (int)ptr2) + 105)((int)ptr0);
                ptr0 = ptr3;
                continue;
            }
            else {
                *ptr1 = 37;
                ++ptr1;
            }
        }
        *ptr1 = v1;
        ++ptr1;
    }
    return 0;
}
