
int start() {
    char v0;
    int v1 = 73;
    int v2 = "             total       used       free     shared    buffers\nMem:      Swap:     ";
    int v3 = 1;
    int v4 = 4;
    int v5 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_804804C() {
    int v0;
    int v1;
    int v2 = 7;
    int result = v0;
    if(!result) {
        *(char*)(v1 + 7) = 48;
        v2 = 6;
    }
    else {
        while(result) {
            int v3 = result % 10;
            result /= 10;
            *(char*)(v2 + v1) = (unsigned char)v3 + 48;
            --v2;
            if(!v2) {
                break;
            }
        }
    }
    char* ptr0 = (char*)(v2 + v1);
    int v4 = v2 + 1;
    result = (unsigned int)32 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
    while(v4 != 0) {
        *ptr0 = (unsigned char)result;
        --ptr0;
        --v4;
    }
    char* ptr1 = ptr0 + 9;
    int v5 = 3;
    do {
        *ptr1 = (unsigned char)result;
        ++ptr1;
        --v5;
    }
    while(v5 == 0);
    return result;
}
