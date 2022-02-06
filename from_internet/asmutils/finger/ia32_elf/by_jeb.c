
int sub_804804C() {
    char v0;
    int v1 = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    int v7 = &loc_80485A5;
    int v8 = 5;
    int v9 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

int sub_80484FE(int param0, int param1) {
    char* ptr0;
    int v0;
    *ptr0 = (unsigned char)v0 / 10 + 48;
    *(ptr0 + 1) = (unsigned char)v0 % 10 + 48;
    *(ptr0 + 2) = 58;
    return param1;
}

int sub_804851A(int param0) {
    int result;
    unsigned int v0 = gvar_8048666;
    sub_8048538(param0);
    if(v0) {
        &loc_8048560();
    }
    return result;
}

unsigned char sub_8048538(int param0) {
    unsigned char* ptr0;
    unsigned char* ptr1;
sub_8048538:
    unsigned char result = *ptr0;
    ++ptr0;
    if(*ptr1 == result) {
        int v0 = param0;
        --ptr0;
        unsigned char* ptr2 = ptr1;
        while(param0 != 0) {
            char v1 = *ptr0 == *ptr1;
            ++ptr0;
            ++ptr1;
            --param0;
            if(!v1) {
                break;
            }
        }
        ptr1 = ptr2;
        if(param0 || *ptr0 != 58) {
            param0 = v0;
            goto loc_804853D;
        }
        else {
            return result;
        }
    }
    else {
    loc_804853D:
        do {
            result = *ptr0;
            ++ptr0;
            if(result == 10) {
                goto sub_8048538;
            }
        }
        while(result);
        return 0;
    }
}
