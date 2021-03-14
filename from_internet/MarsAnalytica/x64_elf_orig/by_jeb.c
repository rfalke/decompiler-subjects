
long start(long param0, int* param1) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    int* ptr0;
    long v5;
    long v6;
    sub_7F6AC0();
    sub_7F68B0((char*)v2, param0, v2, 0L, v3, v4, (long)((long)param1 + param0), v2, ptr0, v5, v6, v0);
    jump v1;
}

char* sub_7F6872(int* param0, long param1, long param2, unsigned int param3) {
    unsigned int v0;
    unsigned long v1;
    char* result = (char*)(v1 + (long)param0);
    param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
    if(param3 > 5 && v1 <= 18446744073709551612L) {
        unsigned int v2 = param3 - 4;
        do {
            param2 = (unsigned long)*(int*)result;
            result += 4L;
            v0 = v2;
            v2 -= 4;
            *param0 = (unsigned int)param2;
            ++param0;
        }
        while(v0 >= 4);
        param3 = v2 + 4;
        param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if(param3) {
            goto loc_7F689E;
        }
    }
    else {
    loc_7F689E:
        do {
            ++result;
            *(char*)param0 = (unsigned char)param2;
            --param3;
            param2 = (unsigned long)*result | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            param0 = (int*)((char*)param0 + 1L);
        }
        while(param3);
    }
    return result;
}

long sub_7F68B0(char* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7, int* param8, long param9, long param10, long param11) {
    int v0;
    long v1;
    int v0;
    unsigned long v2;
    char v3;
    long v4;
    char v5;
    long v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int* ptr0;
    long v11;
    int* ptr1;
    long v12;
    long v13 = v6;
    if((unsigned char)param4 == 8) {
    loc_7F68C6:
        while(1) {
            param2 = (unsigned long)*(char*)param1 | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            int v14 = v10;
            v10 *= 2;
            v5 = __carry__(v10, v14);
            if(!v10) {
                int v15 = *(int*)param1;
                long v16 = param1;
                param1 -= -4L;
                v10 = (unsigned int)((unsigned long)v16 < 18446744073709551612L) + v15 + v15;
                v5 = __carry__(v10, v15);
                param2 = (unsigned long)*(char*)param1 | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            if(!v5) {
                break;
            }
            else {
                ++param1;
                *param0 = (unsigned char)param2;
                ++param0;
            }
        }
        while(1) {
            long v17 = v13((long)param0, param1, param2, param3, param4);
            unsigned int v18 = (unsigned int)((unsigned int)v17 * 2 + (unsigned int)v5);
            int v19 = v10;
            v10 *= 2;
            char v20 = __carry__(v10, v19);
            if(!v10) {
                int v21 = *ptr1;
                param1 = (long)(ptr1 + 1);
                v10 = (unsigned int)((unsigned long)ptr1 < 18446744073709551612L) + v21 + v21;
                v20 = __carry__(v10, v21);
                v4 = (unsigned long)*(char*)param1 | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            if(v20) {
                if(v18 >= 3) {
                    v4 &= 0xffL;
                    ++param1;
                    int v22 = ~(((v18 - 3) * 0x100) | (unsigned int)v4);
                    if(!v22) {
                        *param8 = (unsigned int)param0 - (unsigned int)param7;
                        jump param11;
                    }
                    else {
                        v3 = v22 & 0x1;
                        v2 = (unsigned long)(v22 >> 1);
                        if(v3) {
                            v12((long)ptr0, param1, v4, v1, param4);
                            v0 = (unsigned int)v3 + v9 + v9;
                            sub_7F6872(ptr0, param1, v11, (unsigned int)((unsigned int)(v2 < 0xfffffffffffffb00L) + v0 + 2));
                            goto loc_7F68C6;
                        }
                        else {
                            goto loc_7F6929;
                        }
                    }
                }
                else {
                    int v23 = v10;
                    v10 *= 2;
                    v3 = __carry__(v10, v23);
                    if(!v10) {
                        int v24 = *(int*)param1;
                        long v25 = param1;
                        param1 -= -4L;
                        v10 = (unsigned int)((unsigned long)v25 < 18446744073709551612L) + v24 + v24;
                        v3 = __carry__(v10, v24);
                    }
                }
                if(!v3) {
                loc_7F6929:
                    v1 = (unsigned long)(v7 + 1);
                    int v26 = v10;
                    v10 *= 2;
                    v3 = __carry__(v10, v26);
                    if(!v10) {
                        int v27 = *(int*)param1;
                        long v28 = param1;
                        param1 -= -4L;
                        v10 = (unsigned int)((unsigned long)v28 < 18446744073709551612L) + v27 + v27;
                        v3 = __carry__(v10, v27);
                    }
                    if(!v3) {
                        break;
                    }
                }
                v12((long)ptr0, param1, v4, v1, param4);
                v0 = (unsigned int)v3 + v9 + v9;
                sub_7F6872(ptr0, param1, v11, (unsigned int)((unsigned int)(v2 < 0xfffffffffffffb00L) + v0 + 2));
                goto loc_7F68C6;
            }
            else {
                long v29 = v12((long)ptr0, param1, v4);
                v5 = __carry__((unsigned int)v29 * 2, (unsigned int)v29);
            }
        }
        do {
            v12((long)ptr0, param1, v4, v1, param4);
            v1 = (unsigned long)(v8 * 2);
            int v30 = v10;
            v10 *= 2;
            v3 = __carry__(v10, v30);
            if(!v10) {
                int v31 = *ptr1;
                param1 = (long)(ptr1 + 1);
                v10 = (unsigned int)((unsigned long)ptr1 < 18446744073709551612L) + v31 + v31;
                v3 = __carry__(v10, v31);
            }
        }
        while(!v3);
        v0 = (unsigned int)v1 + 2;
        sub_7F6872(ptr0, param1, v11, (unsigned int)((unsigned int)(v2 < 0xfffffffffffffb00L) + v0 + 2));
        goto loc_7F68C6;
    }
    else {
        *param8 = (unsigned int)param0 - (unsigned int)param7;
        jump param11;
    }
}

long sub_7F6AC0() {
    /*BAD_CALL!*/ &loc_7F6A55();
}
