
int start() {
    int v0;
    int v1;
    char v2;
    char v3;
    int v4 = v0;
    int* ptr0 = &v2;
    int* ptr1 = &v2;
    char v5 = &v0 ? 0: 1;
    char v6 = (int)&v0 < 0;
    char v7 = __parity__((unsigned char)&v0);
    char v8 = 0;
    char v9 = 0;
    int v10 = v4;
    int v11 = v10 * 2;
    int v12 = v11 * 2;
    int* ptr2 = (int*)(v12 + (int)&v2);
    int* ptr3 = &v3;
    int v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 1;
    char v17 = 0;
    char v18 = 0;
    int v19 = 0;
    int v20 = 0;
    int v21 = 0;
    int* ptr4 = &v21;
    int* ptr5 = &v3;
    int* ptr6 = &v2;
    int* ptr7 = &v1;
    v1 = v4;
    int v22 = 0x88;
    int v23 = 0;
    interrupt(128);
}

int sub_80484AE() {
    return gvar_8049A04();
}

int sub_8048620() {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = (unsigned int*)&gvar_80499F8;
    if(gvar_80499F8) {
        do {
            result = *ptr0();
            ++ptr0;
        }
        while(*ptr0);
    }
    return result;
}

void sub_8048650() {
}

int sub_8048660(int param0, int param1, unsigned int param2) {
    char v0;
    int v1;
    int v2 = v1;
    →sprintf(&v0, "%08lX:", param1);
    if((int)param2 > 16) {
        param2 = 16;
    }
    unsigned int i;
    for(i = 0; (int)i < (int)param2; ++i) {
        int v3 = (unsigned int)*(char*)(i + param0);
        →sprintf((char*)((int)(int*)(i * 2 + (int)&v0) + (i + 9)), " %02lX");
    }
    while(1) {
        unsigned int v4 = i;
        ++i;
        if((int)v4 > 15) {
            break;
        }
        else {
            →strcat(&v0, (char*)&gvar_80489D6);
        }
    }
    size_t v5 = →strlen(&v0);
    →strcpy((char*)((int)&v0 + v5), (char*)&gvar_80489DA);
    for(i = 0; (int)i < (int)param2; ++i) {
        unsigned int v6 = (unsigned int)(v5 + i);
        unsigned char* ptr0 = (unsigned char*)(i + param0);
        if(*ptr0 > 31) {
            ptr0 = (unsigned char*)(i + param0);
            if(*ptr0 > 126) {
                goto loc_8048770;
            }
            else {
                ptr0 = (unsigned int)*(char*)(i + param0) | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
            }
        }
        else {
        loc_8048770:
            ptr0 = (unsigned int)46 | ((unsigned int)(int*)((int)(int*)((int)ptr0 >>> 8) & 0xffffff) << 8);
        }
        *(char*)(v6 + (int)&v0) = (char)ptr0;
    }
    while((int)i <= 15) {
        *(char*)((int)(int*)((int)&v0 + v5) + i) = ' ';
        ++i;
    }
    →strcpy((char*)((int)(int*)((int)&v0 + v5) + i), (char*)&gvar_80489DE);
    return →printf((char*)&gvar_80489E0, &v0);
}

int sub_80487F0(int param0) {
    int result;
    char v0;
    unsigned int v1;
    char v2;
    int v3 = sub_8048950(param0, &v0);
    if(!v3) {
        →perror((char*)param0);
        result = 1;
    }
    else {
        FILE* __stream = →fopen((char*)param0, (char*)&gvar_80489E4);
        if(!__stream) {
            →perror((char*)param0);
            result = 1;
        }
        else {
            int v4 = 0;
            while(v1 > (unsigned int)v4) {
                size_t v5 = →fread(&v2, 1, 16, __stream);
                if(!v5) {
                    break;
                }
                else {
                    sub_8048660((int)&v2, v4, v5);
                    v4 = (int)(v5 + v4);
                }
            }
            →fclose(__stream);
            result = 0;
        }
    }
    return result;
}

int sub_80488E0(unsigned int param0, int param1) {
    int result = 0;
    for(unsigned int i = 1; (int)i < (int)param0; ++i) {
        int v0 = sub_80487F0(*(int*)(i * 4 + param1));
        result += v0;
    }
    return result;
}

int sub_8048950(int param0, int param1) {
    return →_xstat();
}

int sub_8048980() {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = (unsigned int*)&gvar_80499EC;
    if(*(int*)&gvar_80499EC != -1) {
        do {
            result = *ptr0();
            --ptr0;
        }
        while(*ptr0 != -1);
    }
    return result;
}

void sub_80489B0() {
}
