
void __get_GOT() {
}

int __start_main(int param0) {
    int v0;
    int v1;
    char v2;
    char v3;
    int v4 = v0;
    int v5 = param0;
    int* ptr0 = (int*)(v5 * 4 + (int)&v2);
    int v6 = &..@198.get_GOT;
    int v7 = &..@198.get_GOT;
    int v8 = &_GLOBAL_OFFSET_TABLE_;
    char v9 = 0;
    char v10 = 0;
    char v11 = 1;
    char v12 = 1;
    char v13 = 0;
    char v14 = 0;
    int v15 = &_end2;
    _end2 = ptr0;
    int* ptr1 = &v3;
    int __status = v4(v5, (int)&v3, (int)ptr0);
    int* ptr2 = &v1;
    /*NO_RETURN*/ exit(__status);
}

int __system_call(int param0, int param1, unsigned int* param2, unsigned int* param3, int param4, unsigned int* param5, unsigned int* param6) {
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v0;
    char v1;
    unsigned int* ptr2;
    int v2;
    int v3;
    unsigned int* ptr3;
    unsigned int* ptr4;
    unsigned int* ptr5 = &v1;
    int v4 = v3;
    unsigned int* ptr6 = ptr3;
    unsigned int* ptr7 = ptr4;
    int v5 = v2;
    unsigned int* ptr8 = &v1;
    int* ptr9 = &ptr2;
    unsigned int* ptr10 = ptr8;
    char* ptr11 = *ptr10;
    char v6 = *ptr11;
    int v7 = 0;
    char v8 = *ptr11 ? 0: 1;
    char v9 = v6 < 0;
    char v10 = __parity__(v6);
    char v11 = 0;
    char v12 = 0;
    if(!v8) {
        if(!v9) {
            int v13 = &..@109.get_GOT;
            ptr5 = (unsigned int*)&..@109.get_GOT;
            int v14 = &_GLOBAL_OFFSET_TABLE_;
            char v15 = 0;
            char v16 = 0;
            char v17 = 1;
            char v18 = 1;
            char v19 = 0;
            char v20 = 0;
            int v21 = &__cc;
            v8 = __cc ? 0: 1;
            v9 = __cc >= 128;
            v10 = __parity__(__cc);
            v12 = __cc < 0;
            v11 = 0;
            char v22 = 0;
            if(v8) {
                goto __system_call.cdecl;
            }
            else {
                v2 = v4;
                ptr5 = ptr4;
                ptr4 = ptr3;
                ptr3 = ptr5;
                v0 = param1;
                ptr1 = param2;
                ptr0 = param3;
            }
        }
        else {
        __system_call.cdecl:
            v2 = param1;
            ptr3 = param2;
            ptr4 = param3;
            v0 = param4;
            ptr1 = param5;
            ptr0 = param6;
        }
    }
    unsigned int* ptr12 = ptr8;
    int v23 = *ptr12;
    int v24 = (unsigned int)*(char*)(v23 + 1);
    interrupt(128);
}

unsigned char _fastcall() {
    unsigned char result;
    *(int*)&__cc = result;
    return result;
}

void exit(int __status) {
    int v0;
    int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v1;
    unsigned int* ptr3;
    unsigned int* ptr4;
    int v2 = __system_call(v0, __status, ptr1, ptr2, v1, ptr3, ptr4);
    *ptr0 = *ptr0 + v2;
}

__pid_t fork() {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    char* ptr2;
    unsigned int* ptr3;
    int v2;
    unsigned int* ptr4;
    int v3 = /*BAD_CALL!*/ __system_call(v0, v1, ptr3, ptr0, v2, ptr1, ptr4);
    char v4 = (unsigned char)v3;
    char v5 = *ptr2;
    *ptr2 = *ptr2 + v4;
    __system_call(v0, v1, ptr3, ptr0, v2, ptr1, ptr4);
}

char* getenv(char* __name) {
    char* result;
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char* ptr0;
    char* ptr1 = ptr0;
    int v5 = v3;
    int v6 = v2;
    int v7 = v4;
    int* ptr2 = &v1;
    char* ptr3 = ptr0;
    int v8 = v4;
    if(!__cc) {
        ptr3 = __name;
    }
    unsigned int* ptr4 = _end2;
    char* ptr5 = ptr3;
    int v9 = -1;
    do {
        v0 = ptr3[0] == 0;
        ++ptr3;
        --v9;
    }
    while(~v0 && v9 == 0);
    while(1) {
        int v10 = -2 - v9;
        char* ptr6 = ptr5;
        result = *ptr4;
        char v11 = result ? 0: 1;
        if(!v11) {
            while(v10 != 0) {
                v11 = ptr6[0] == result[0];
                ++ptr6;
                ++result;
                --v10;
                if(!v11) {
                    break;
                }
            }
            if(!v11) {
                ++ptr4;
                continue;
            }
            else {
                ++result;
            }
        }
        return result;
    }
    return result;
}

__gid_t getgid() {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    unsigned int* ptr1;
    unsigned int* ptr2;
    int v3;
    unsigned int* ptr3;
    unsigned int* ptr4;
    __gid_t v4 = (__gid_t)__system_call(v0, v2, ptr1, ptr2, v3, ptr3, ptr4);
    *ptr0 = (unsigned char)(v1 >>> 8) + *ptr0;
}

int itoa(int param0, char* param1, unsigned int param2) {
    unsigned int v0;
    int v1;
    char* ptr0;
    int result = v1;
    char* ptr1 = ptr0;
    if(!__cc) {
        ptr1 = param1;
        v0 = param2;
    }
    itoa.printB(v0);
    *ptr1 = 0;
    return result;
}

unsigned int itoa.printB(unsigned int param0) {
    unsigned int v0;
    unsigned int v1;
    char* ptr0;
    unsigned int result = v1 / param0;
    unsigned int v2 = v1 % param0;
    if(result) {
        result = (unsigned int)itoa.printB((int)v2);
        v2 = v0;
    }
    v2 = (unsigned int)((unsigned char)v2 + 48) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    if((unsigned char)v2 > 57) {
        v2 = (unsigned int)((unsigned char)v2 + 39) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8);
    }
    *ptr0 = (unsigned char)v2;
    return result;
}

unsigned int main() {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    char v1;
    int v2 = v0;
    unsigned int* ptr3 = &v1;
    void* ptr4 = (void*)&loc_804901B;
    _fastcall();
    size_t v3 = strlen(s);
    len = v3;
    unsigned int v4 = (unsigned int)&open((int)fname, 66, 384);
    fd = v4;
    &write((int)fd, (int)s, (int)len);
    &loc_804922E((int)fd);
    unsigned int v5 = (unsigned int)&open((int)fname, 0);
    fd = v5;
    134517315((int)fd, 0, 0);
    unsigned int v6 = (unsigned int)&read((int)fd, &buf, (int)len);
    len = v6;
    &loc_804922E((int)fd);
    sub_804926D(fname, ptr0, ptr1, (int)ptr4, ptr2, ptr3);
    &write(1, &buf, (int)len);
    unsigned int v7 = (unsigned int)&read(0, &buf, 10);
    len = v7;
    &write(1, &buf, (int)len);
    return len;
}

int memcmp(void* __s1, void* __s2, size_t __n) {
    int result;
    void* ptr0;
    void* ptr1;
    size_t v0;
    int v1;
    size_t v2 = v0;
    int v3 = v1;
    char v4 = __cc ? 0: 1;
    char v5 = __cc < 0;
    if(v4) {
        ptr1 = __s1;
        ptr0 = __s2;
        v0 = __n;
    }
    while(v0 != 0) {
        v4 = *(char*)ptr1 == *(char*)ptr0;
        v5 = *(unsigned char*)ptr1 < *(unsigned char*)ptr0;
        ptr1 = (void*)((int)ptr1 + 1);
        ptr0 = (void*)((int)ptr0 + 1);
        --v0;
        if(!v4) {
            break;
        }
    }
    if(!v4) {
        result = v5 ? -1: 1;
    }
    return result;
}

void* memcpy(void* __dest, void* __src, size_t __n) {
    int v0;
    size_t v1;
    void* ptr0;
    int v2;
    void* ptr1;
    void* result = ptr1;
    size_t v3 = v1;
    void* ptr2 = ptr0;
    int v4 = v2;
    int* ptr3 = &v0;
    void* ptr4 = ptr1;
    void* ptr5 = ptr0;
    int v5 = v2;
    if(!__cc) {
        ptr4 = __dest;
        ptr5 = __src;
        v1 = __n;
    }
    while(v1 != 0) {
        *(char*)ptr4 = *(char*)ptr5;
        ptr5 = (void*)((int)ptr5 + 1);
        ptr4 = (void*)((int)ptr4 + 1);
        --v1;
    }
    return result;
}

void* memset(void* __s, int __c, size_t __n) {
    size_t v0;
    void* ptr0;
    int v1;
    void* result = ptr0;
    int v2 = v1;
    void* ptr1 = ptr0;
    if(!__cc) {
        ptr1 = __s;
        v2 = __c;
        v0 = __n;
    }
    void* ptr2 = ptr1;
    while(v0 != 0) {
        *(char*)ptr2 = (unsigned char)v2;
        ptr2 = (void*)((int)ptr2 + 1);
        --v0;
    }
    return result;
}

int mkdir(char* __path, __mode_t __mode) {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    __system_call(v0, (int)__path, (unsigned int*)__mode, ptr1, v1, ptr2, ptr3);
    *ptr0 = (int*)(*ptr0 + (int)&v0);
}

int printf(char* __format, ...) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int* ptr0 = &v0;
    char v7 = &v0 == 0x1000;
    char v8 = (int)&v1 < 0;
    char v9 = __parity__((unsigned char)&v0);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x1000) ^ (int)&v1) >>> 4) & 0x1);
    char v11 = (unsigned int)&v0 < 0x1000;
    char v12 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v1) & (int)(int*)((int)&v0 ^ 0x1000)) < 0;
    char* ptr1 = &v1;
    int v13 = v3;
    int v14 = v5;
    int v15 = v4;
    int v16 = v6;
    char* ptr2 = &v1;
    int v17 = v0;
    char* ptr3 = &v1;
    int* ptr4 = &v2;
    char v18 = &v0 ? 0: 1;
    char v19 = (int)&v0 < 0;
    char v20 = __parity__((unsigned char)&v0);
    char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x1020) ^ (int)&v0) >>> 4) & 0x1);
    char v22 = (unsigned int)&v2 >= 0xffffefe0;
    char v23 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int*)~(int)(int*)((int)&v2 ^ 0x1020)) < 0;
    int v24 = sprintf(&v1, __format);
    int* ptr5 = &v0;
    char v25 = &v0 == 0x1020;
    char v26 = (int)&v2 < 0;
    char v27 = __parity__((unsigned char)&v0 - 32);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x1020) ^ (int)&v2) >>> 4) & 0x1);
    char v29 = (unsigned int)&v0 < 0x1020;
    char v30 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x1020)) < 0;
    int v31 = v24;
    char* ptr6 = &v1;
    int v32 = 1;
    int v33 = 4;
    int v34 = 4;
    int* ptr7 = &v2;
    interrupt(128);
}

int rmdir(char* __path) {
    int v0;
    int v1;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v2;
    unsigned int* ptr2;
    unsigned int* ptr3;
    int v3 = __system_call(v0, (int)__path, ptr0, ptr1, v2, ptr2, ptr3);
    *(int*)v3 = *(int*)v3 + v1;
}

__sighandler_t signal(int __sig, __sighandler_t __handler) {
    int v0;
    unsigned int* ptr0;
    unsigned int* ptr1;
    int v1;
    unsigned int* ptr2;
    __system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
    /*BAD_CALL!*/ __system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
    __sighandler_t v2 = (__sighandler_t)__system_call(v0, __sig, (unsigned int*)__handler, ptr0, v1, ptr1, ptr2);
}

int sprintf(char* __s, char* __format, ...) {
    unsigned int v0;
    unsigned int v1;
    char* ptr0;
    int v2;
    int v3;
    int v4;
    char v5;
    char i;
    int v6;
    int v7;
    int v8;
    char v9;
    int v10 = (unsigned int)i | ((unsigned int)v3 << 8);
    int v11 = v7;
    int v12 = v6;
    int v13 = v4;
    int* ptr1 = &v2;
    unsigned int* ptr2 = &v5;
    char* ptr3 = __format;
    char* ptr4 = __s;
    char* ptr5 = __s;
sprintf.boucle:
    do {
        i = ptr3[0];
        ++ptr3;
        if(i) {
            if(i != 37) {
                ptr4[0] = i;
                ++ptr4;
                goto sprintf.boucle;
            }
            else {
                ptr0 = *ptr2;
                i = ptr3[0];
                ++ptr3;
                v1 = 10;
            }
            if(i != 100) {
                v1 = 16;
                if(i != 120) {
                    v1 = 8;
                    if(i != 111) {
                        v0 = 2;
                        v1 = 2;
                        if(i != 98) {
                            if(i == 99) {
                                ptr4[0] = i;
                                ++ptr4;
                            }
                            else if(i == 115 && !ptr0) {
                                ++ptr2;
                            }
                            else if(i == 115) {
                                for(i = *ptr0; *ptr0; i = *ptr0) {
                                    ptr4[0] = i;
                                    ++ptr4;
                                    ++ptr0;
                                }
                                ++ptr2;
                            }
                            goto sprintf.boucle;
                        }
                    }
                }
            }
            v0 = (unsigned int)i | ((unsigned int)v3 << 8);
            unsigned int v14 = v1;
            unsigned int* ptr6 = ptr2;
            char* ptr7 = ptr0;
            int* ptr8 = &ptr5;
            int v15 = v8;
            char* ptr9 = ptr3;
            char* ptr10 = ptr4;
            itoa.printB(v1);
            ptr4[0] = 0;
            char* ptr11 = ptr10;
            ptr3 = ptr9;
            v8 = v15;
            ptr2 = ptr6;
            v3 = (unsigned int)((v0 >>> 8) & 0xffffff);
            do {
                v9 = (unsigned char)ptr11[0] < 1;
                ++ptr11;
            }
            while(!v9);
            ptr4 = ptr11 - 1;
            ++ptr2;
            goto sprintf.boucle;
        }
    }
    while(i);
    ptr4[0] = 0;
    return (int)((char*)((int)(int*)(ptr4 + 1) - (int)ptr5) - 1);
}

int start() {
    int v0;
    /*NO_RETURN*/ __start_main(v0);
}

size_t strlen(char* __s) {
    char* ptr0;
    int v0;
    char v1;
    int v2 = v0;
    if(!__cc) {
        ptr0 = __s;
    }
    int v3 = 0;
    do {
        v1 = (unsigned char)ptr0[v3] < 1;
        ++v3;
    }
    while(!v1);
    return (size_t)(v3 - 1);
}

long strtol(char* __nptr, char** __endptr, int __base) {
    int v0;
    char* ptr0;
    int v1;
    char** ptr1;
    int v2 = v0;
    int v3 = v1;
    char* ptr2 = ptr0;
    char** ptr3 = ptr1;
    int v4 = v0;
    if(!__cc) {
        ptr2 = __nptr;
        ptr3 = __endptr;
        v1 = __base;
    }
    if(!v1) {
        v4 = 10;
        v1 = 10;
    }
    long result = 0;
    int v5 = 0;
    while(ptr2[0] == 32) {
        ++ptr2;
    }
    if(*(short*)&ptr2[0] == 30768) {
        v4 = 16;
        v1 = 16;
        ptr2 += 2;
    }
    do {
        v5 = (unsigned int)(ptr2[0] - 48) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
        if((unsigned char)ptr2[0] < 48) {
            return result;
        }
        if((unsigned char)v5 > 9) {
            v5 = (unsigned int)((unsigned char)v5 - 7) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            if((unsigned char)v5 > 35) {
                v5 = (unsigned int)((unsigned char)v5 - 32) | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
            }
        }
        result = (long)((int)(result * v1) + v5);
        ++ptr2;
    }
    while(ptr3 != ptr2);
    return result;
}

int sub_804926D(int param0, unsigned int* param1, unsigned int* param2, int param3, unsigned int* param4, unsigned int* param5) {
    int v0;
    int* ptr0;
    int v1;
    __system_call(v0, param0, param1, param2, param3, param4, param5);
    *ptr0 = *ptr0 + v1;
}

int uname(int param0, unsigned int* param1, unsigned int* param2, int param3, unsigned int* param4, unsigned int* param5) {
    int v0;
    int v1;
    int v2;
    __system_call(v0, param0, param1, param2, param3, param4, param5);
    *(int*)(v1 - 24) = *(int*)(v1 - 24) + v2;
}
