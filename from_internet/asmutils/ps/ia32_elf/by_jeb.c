
int start(int param0, int param1) {
    char v0;
    int v1 = "PID\tTTY\tSTAT\tRSS\tCOMMAND\n";
    int v2 = sub_8048176("PID\tTTY\tSTAT\tRSS\tCOMMAND\n", param1);
    int v3 = "/proc/";
    int v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 1;
    char v8 = 0;
    char v9 = 0;
    int v10 = 5;
    int v11 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_8048111(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int result;
    int v4 = result;
    int v5 = param0;
    int v6 = param1;
    int v7 = v2;
    int* ptr0 = &v1;
    do {
        int v8 = param0;
        int v9 = -1;
        v0 = v3;
        while(v9 != 0) {
            char v10 = *(char*)v3 == 0;
            ++v3;
            --v9;
            if(!~v10) {
                break;
            }
        }
        --param0;
    }
    while(param0);
    sub_8048176(v0, param1);
    sub_8048176(&gvar_80481E4, param1);
    return result;
}

int sub_8048132(int param0, int param1) {
    int v0;
    unsigned char v1;
    int v2;
    int v3;
    unsigned char* ptr0;
    int result = (unsigned int)v1 | ((unsigned int)v2 << 8);
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr1 = &v0;
    unsigned char* ptr2 = ptr0;
    while(1) {
        v1 = *ptr2;
        ++ptr2;
        if(!v1) {
            break;
        }
        else if(v1 == 32) {
            *(char*)(ptr2 - 1) = 0;
        }
    }
    unsigned char* ptr3 = (unsigned char*)&gvar_80481E6;
    while(1) {
        v1 = *ptr3;
        ++ptr3;
        if(!v1) {
            return result;
        }
        int v7 = sub_8048111((int)v1, param1);
    }
    return result;
}

int sub_804815A() {
    char* ptr0;
    int v0 = 0;
    do {
        v0 = (unsigned int)*ptr0 | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8);
        if((unsigned char)v0) {
            v0 = (unsigned int)(unsigned char)v0 | ((unsigned int)((unsigned char)(v0 >>> 8) + 1) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
        }
        return (unsigned int)(unsigned short)(unsigned char)(v0 >>> 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    }
    while((unsigned char)v0 <= 57);
    v0 = (unsigned int)(unsigned char)v0 | ((unsigned int)((unsigned char)(v0 >>> 8) + 1) << 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
    return (unsigned int)(unsigned short)(unsigned char)(v0 >>> 8) | ((unsigned int)(unsigned short)(v0 >>> 16) << 16);
}

int sub_8048176(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int v4 = v2;
    int v5 = param0;
    int v6 = param1;
    int v7 = v3;
    int* ptr1 = &v0;
    int v8 = param0;
    int v9 = sub_8048188();
    int v10 = 1;
    int v11 = 4;
    int v12 = 4;
    int* ptr2 = &v1;
    interrupt(128);
}

int sub_8048188() {
    int v0;
    char v1;
    char* ptr0;
    int result = (unsigned int)v1 | ((unsigned int)v0 << 8);
    int v2 = -1;
    do {
        ++v2;
        v1 = *ptr0;
        ++ptr0;
    }
    while(v1);
    return result;
}

int sub_8048196(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    char* ptr0;
    char* ptr1;
    int result = v1;
    int v3 = param0;
    int v4 = param1;
    int v5 = v2;
    int* ptr2 = &v0;
    sub_8048188();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr0 = *ptr1;
        ++ptr1;
        ++ptr0;
    }
    return result;
}

int sub_80481A3(int param0, int param1) {
    int v0;
    int v1;
    char* ptr0;
    int v2;
    int v3;
    int result = v1;
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr1 = &v0;
    sub_8048188();
    char* ptr2 = ptr0;
    char* ptr3 = (char*)(param1 + v2);
    sub_8048188();
    for(int i = param1 + 1; i != 0; --i) {
        *ptr3 = *ptr2;
        ++ptr2;
        ++ptr3;
    }
    return result;
}
