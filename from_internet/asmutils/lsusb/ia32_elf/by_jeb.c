
int start() {
    int v0;
    char v1;
    int* ptr0 = &v0;
    int v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 0;
    int v8 = "/proc/bus/usb/devices";
    int v9 = 5;
    int v10 = 5;
    int* ptr1 = &v1;
    interrupt(128);
}

int sub_804809D(char* param0) {
    char* ptr0;
    void* ptr1;
    void* ptr2;
    int result;
    unsigned char v0;
    unsigned char v1;
    unsigned char v2;
    void* ptr3;
    void* ptr4 = ptr3;
    char* ptr5 = param0;
    unsigned int v3 = 0;
loc_80480B0:
    char* ptr6 = ptr5;
    while(ptr6) {
        void* ptr7 = ptr4;
        char* ptr8 = (char*)&gvar_808839B;
        do {
            result = (unsigned int)*(char*)ptr7 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
            ptr7 = (void*)((int)ptr7 + 1);
            *ptr8 = (unsigned char)result;
            ++ptr8;
            if((unsigned char)result == 10) {
                break;
            }
            else {
                --ptr6;
            }
        }
        while(ptr6);
        *ptr8 = 0;
        ptr4 = ptr7;
        ptr5 = ptr6;
        void* ptr9 = ptr4;
        int v4 = sub_80482CF(8);
        if(!v4) {
            v3 = 1;
            ptr2 = (void*)((int)ptr9 + 8);
            ptr1 = (void*)((int)ptr9 + 8);
            goto loc_80480F9;
        }
        else {
            void* ptr10 = ptr4;
            int v5 = sub_80482CF(9);
            if(!v5) {
                void* ptr11 = (void*)((int)ptr10 + 9);
                do {
                    v5 = (unsigned int)*(char*)ptr11 | ((unsigned int)((v5 >>> 8) & 0xffffff) << 8);
                    ptr11 = (void*)((int)ptr11 + 1);
                }
                while((unsigned char)v5 != 32);
                *(char*)((int)ptr11 - 1) = 0;
                if((v3 < 0 || (v3 ? 0: 1))) {
                    ptr0 = (char*)0x12;
                    do {
                        sub_80482DF(ptr0);
                        ptr0 = param0 - 1;
                    }
                    while(ptr0);
                }
                /*BAD_CALL!*/ sub_80482DF(ptr0);
                sub_80482DF(param0);
                goto loc_80480B0;
            }
            else {
                void* ptr12 = ptr4;
                int v6 = sub_80482CF(17);
                if(!v6) {
                    void* ptr13 = (void*)((int)ptr12 + 17);
                    do {
                        v6 = (unsigned int)*(char*)ptr13 | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
                        ptr13 = (void*)((int)ptr13 + 1);
                    }
                    while((unsigned char)v6 != 10);
                    char* ptr14 = (char*)((int)ptr13 - 1);
                    *ptr14 = 0;
                    sub_80482DF(param0);
                    sub_80482DF(param0);
                    *ptr14 = 10;
                    sub_80482DF(param0);
                    goto loc_80480B0;
                }
                else {
                    void* ptr15 = ptr4;
                    int v7 = sub_80482CF(12);
                    if(!v7) {
                        void* ptr16 = (void*)((int)ptr15 + 12);
                        ptr1 = (void*)((int)ptr15 + 12);
                        do {
                            v7 = (unsigned int)*(char*)ptr16 | ((unsigned int)((v7 >>> 8) & 0xffffff) << 8);
                            ptr16 = (void*)((int)ptr16 + 1);
                        }
                        while((unsigned char)v7 != 10);
                        char* ptr17 = (char*)((int)ptr16 - 1);
                        *ptr17 = 0;
                        sub_80482DF(param0);
                        *ptr17 = 10;
                        goto loc_80480B0;
                    }
                    else {
                        ptr3 = ptr4;
                        result = sub_80482CF(10);
                    }
                }
            }
        }
        if(result) {
            goto loc_80480B0;
        }
        else {
            void* ptr18 = (void*)((int)ptr3 + 62);
            do {
                result = (unsigned int)*(char*)ptr18 | ((unsigned int)((result >>> 8) & 0xffffff) << 8);
                ptr18 = (void*)((int)ptr18 + 1);
            }
            while((unsigned char)result != 10);
            char* ptr19 = (char*)((int)ptr18 - 1);
            *ptr19 = 0;
            sub_80482DF(param0);
            sub_80482DF(param0);
            *ptr19 = 10;
            /*BAD_CALL!*/ sub_80482DF(param0);
            sub_80482DF(param0);
            goto loc_80480B0;
        loc_80480F9:
            do {
                v4 = (unsigned int)*(char*)ptr2 | ((unsigned int)((v4 >>> 8) & 0xffffff) << 8);
                ptr2 = (void*)((int)ptr2 + 1);
            }
            while((unsigned char)v4 != 32);
            *(char*)((int)ptr2 - 1) = 0;
            void* ptr20 = ptr1;
            sub_80482DF(param0);
            ptr1 = ptr20;
            sub_80482DF(param0);
            void* ptr21 = (void*)((int)ptr1 + 23);
            ptr1 = (void*)((int)ptr1 + 23);
            do {
                v2 = *(unsigned char*)ptr21;
                ptr21 = (void*)((int)ptr21 + 1);
            }
            while(v2 != 32);
            *(char*)((int)ptr21 - 1) = 0;
            void* ptr22 = ptr1;
            sub_80482DF(param0);
            ptr1 = ptr22;
            sub_80482DF(param0);
            void* ptr23 = (void*)((int)ptr1 + 15);
            ptr1 = (void*)((int)ptr1 + 15);
            do {
                v0 = *(unsigned char*)ptr23;
                ptr23 = (void*)((int)ptr23 + 1);
            }
            while(v0 == 32);
            do {
                v0 = *(unsigned char*)ptr23;
                ptr23 = (void*)((int)ptr23 + 1);
            }
            while(v0 != 32);
            *(char*)((int)ptr23 - 1) = 0;
            void* ptr24 = ptr1;
            sub_80482DF(param0);
            ptr1 = ptr24;
            sub_80482DF(param0);
            void* ptr25 = (void*)((int)ptr1 + 8);
            ptr1 = (void*)((int)ptr1 + 8);
            do {
                v1 = *(unsigned char*)ptr25;
                ptr25 = (void*)((int)ptr25 + 1);
            }
            while(v1 != 32);
            *(char*)((int)ptr25 - 1) = 0;
            /*BAD_CALL!*/ sub_80482DF(param0);
            char* ptr26 = (char*)(4 - result);
            if((int)ptr26 > 0) {
                do {
                    sub_80482DF(ptr26);
                    ptr26 = param0 - 1;
                }
                while(ptr26);
            }
            sub_80482DF(ptr26);
            sub_80482DF(param0);
            /*BAD_CALL!*/ sub_80482DF(param0);
            ptr6 = ptr5;
        }
    }
    return result;
}

int sub_80482CF(int param0) {
    unsigned char* ptr0;
    unsigned char* ptr1;
    int result = 0;
    char v0 = 1;
    char v1 = 0;
    while(param0 != 0) {
        v0 = *ptr0 == *ptr1;
        v1 = *ptr0 < *ptr1;
        ++ptr0;
        ++ptr1;
        --param0;
        if(!v0) {
            break;
        }
    }
    if(!v0) {
        result = v1 ? -1: 1;
    }
    return result;
}

void sub_80482DF(char* param0) {
    char v0;
    char* ptr0;
    if(ptr0) {
        char* ptr1 = param0;
        char* ptr2 = ptr0;
        char* ptr3 = NULL;
        char v1 = 1;
        char v2 = 0;
        char v3 = 1;
        char v4 = 0;
        char v5 = 0;
        while(1) {
            v0 = *ptr0;
            ++ptr0;
            char v6 = v0 ? 0: 1;
            char v7 = v0 < 0;
            char v8 = __parity__(v0);
            char v9 = 0;
            char v10 = 0;
            if(v6) {
                break;
            }
            else {
                char* ptr4 = ptr3;
                ++ptr3;
                char v11 = ptr3 ? 0: 1;
                char v12 = (int)ptr3 < 0;
                char v13 = __parity__((unsigned char)ptr3);
                char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
                char v15 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x1)) < 0;
            }
        }
        ptr0 = ptr2;
        ptr2 = ptr3;
        char* ptr5 = ptr3;
        param0 = ptr0;
        int v16 = 1;
        int v17 = 4;
        v0 = 4;
        int v18 = 0;
        int* ptr6 = &ptr2;
        interrupt(128);
    }
}
