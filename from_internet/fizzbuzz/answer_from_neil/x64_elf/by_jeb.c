
long main() {
    __int128 v0;
    __int128 v1;
    __int128 v2;
    __int128 v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    __int128 v9;
    __int128 v10;
    unsigned int v11 = 1;
    unsigned long v12 = 1L;
    void* ptr0 = (void*)0x40407E;
    vmovdqa(v9, gvar_4020C0);
    vmovdqa(v10, gvar_4020E0);
    unsigned long v13 = 1L;
    vmovdqa(v0, v9);
    vmovdqa(v9, gvar_4020D0);
    vmovdqa(v1, v10);
    vmovdqa(v2, v9);
    vmovdqa(v3, v9);
    do {
        long v14 = v13 + 2L;
        long v15 = v13 + 2L;
        long v16 = v13 + 2L;
        long v17 = v13 + 2L;
        long v18 = v13 + 1L;
        long v19 = v13 + 1L;
        long v20 = v13 + 1L;
        long v21 = v13 + 1L;
        long v22 = v13 + 1L;
        unsigned long v23 = v13;
        unsigned long v24 = v13;
        →sprintf((char*)&buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n");
        unsigned long v25 = v13 * 10L;
        unsigned long v26 = v13 * 10L;
        v13 = v25;
        if(v12 < v25) {
            do {
                void* __dest = ptr0;
                ptr0 = (void*)((size_t)v8 + (long)ptr0);
                →memcpy(__dest, (void*)&buf, (size_t)v8);
                if((unsigned long)ptr0 >= 0x414060L) {
                    void* __buf = (void*)&out;
                loc_4011F0:
                    do {
                        →write(1L, __buf, (size_t)(0x414060L - (long)__buf));
                        if(!(v5 ? 0: 1) && v6 >= 0) {
                            __buf = (void*)((long)v7 + (long)__buf);
                            if((unsigned long)__buf < 0x414060L) {
                                goto loc_4011F0;
                            }
                            else {
                                break;
                            }
                        }
                    }
                    while((unsigned long)__buf < 0x414060L);
                    void* ptr1 = ptr0;
                    ptr0 = (void*)((long)ptr0 - 0x10000L);
                    →memcpy((void*)&out, (void*)0x414060, (size_t)((long)ptr1 - 0x414060L));
                }
                unsigned __int128* ptr2 = &v0;
                char* ptr3 = (char*)&buf;
            loc_401165:
                do {
                    do {
                        ptr3 = (char*)((long)(char*)(*(int*)ptr2 + v11) + (long)ptr3);
                        char v27 = *ptr3;
                        if(*ptr3 == 54 || v27 < 54) {
                            ptr2 = (unsigned __int128*)((char*)ptr2 + 4L);
                            *ptr3 = v27 + 3;
                            if(ptr2 != &v4) {
                                goto loc_401165;
                            }
                        }
                        else {
                            char* ptr4 = ptr3 - 1L;
                            *ptr3 = v27 - 7;
                            char v28 = *(ptr3 - 1L);
                            if(*(ptr3 - 1L) == 57) {
                                do {
                                    v28 = *(ptr4 - 1L);
                                    --ptr4;
                                    *(ptr4 + 1L) = 48;
                                }
                                while(v28 == 57);
                            }
                            ptr2 = (unsigned __int128*)((char*)ptr2 + 4L);
                            *ptr4 = v28 + 1;
                        }
                        break loc_401165;
                    }
                    while(1);
                }
                while(ptr2 != &v4);
                v12 += 3L;
            }
            while(v12 < v26);
        }
        ++v11;
    }
    while(v11 != 20);
    return 0L;
}

long sub_401026() {
    return gvar_404010();
}

long sub_40128D() {
    return 0L;
}

long sub_4012CF() {
    return 0L;
}

long sub_4012FD() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_401310() {
}
