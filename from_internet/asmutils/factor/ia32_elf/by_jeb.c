
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    char v10;
    char v11;
    int v12 = v8;
    int v13 = param0;
    int v14 = 134513156;
    int v15 = param1;
    unsigned int* ptr0 = &v11;
    int v16 = v15;
    char v17 = v16 ? 0: 1;
    char v18 = v16 < 0;
    char v19 = __parity__((unsigned char)v16);
    char v20 = 0;
    char v21 = 0;
    if(!v17) {
        do {
            --ptr0;
            *ptr0 = &loc_80481A6;
            v7 = /*BAD_CALL!*/ sub_8048068();
            int v22 = *ptr0;
            ++ptr0;
            v6 = v22;
            v10 = v6 ? 0: 1;
            v5 = v6 < 0;
            v4 = __parity__((unsigned char)v6);
            v3 = 0;
            v2 = 0;
        }
        while(!v10);
        int v23 = v7;
        int v24 = v9;
        v1 = v23;
        --ptr0;
        *ptr0 = 1;
        v0 = *ptr0;
        ++ptr0;
        interrupt(128);
    }
    int v25 = 134513180;
    v6 = 95;
    int v26 = 0;
    char v27 = 1;
    char v28 = 0;
    char v29 = 1;
    char v30 = 0;
    char v31 = 0;
    int v32 = 1;
    v1 = 0;
    v10 = 1;
    v5 = 0;
    v4 = 1;
    v3 = 0;
    v2 = 0;
    param1 = 3;
    v0 = 3;
    ptr0 = &v11;
    interrupt(128);
}

int sub_8048068() {
    char v0;
    __SyntheticTypeUnknown v1;
    __SyntheticTypeUnknownF v2;
    int v3;
    unsigned char* ptr0;
    unsigned int* ptr1;
    __int128 v4;
    unsigned int v5;
    int v6;
    __SyntheticTypeUnknownF v7 = (double)gvar_80481FD;
    __SyntheticTypeUnknownF v8 = 0.0;
    while(1) {
        unsigned char v9 = *ptr0;
        ++ptr0;
        if(!v9) {
            break;
        }
        else {
            v8 *= v7;
            unsigned char v10 = v9;
            v9 -= 48;
            if(v10 < 48 || v9 >= 10) {
                break;
            }
            else {
                *(int*)(ptr1 + 3) = (unsigned int)v9;
                v8 += (double)*(int*)(ptr1 + 3);
            }
        }
    }
    do {
        *(void*)(ptr1 + 3) = v8;
    }
    while((short)(unsigned short)*(int*)(ptr1 + 5) >= 16447);
    int v11 = sub_8048151();
    __SyntheticTypeUnknownF v12 = v7;
    fcom(1.0, v4);
    fnstsw((unsigned short)v11);
    if(((unsigned char)(v11 >>> 8) & 0x45) == 1) {
        fcompp(1.0, v12);
        *ptr1 = 2;
        sub_804804C();
        *ptr1 = *ptr1 + 1;
        sub_804804C();
        *(char*)ptr1 = 5;
        int v13 = sub_804804C();
        v0 = 6;
        fcom(1.0, v12);
        fnstsw((unsigned short)v13);
        if(!((unsigned char)(v13 >>> 8) & 0x40)) {
            *(char*)ptr1 = 7;
            char v14 = 5;
            int v15 = 1111639590;
            do {
                ptr0 = *ptr1;
                v15 = __rol__(v15, 4);
                int v16 = *ptr1;
                *ptr1 = (v15 & 0xf) + *ptr1;
                if(__carry__(v15 & 0xf, v16)) {
                    sub_804814F();
                    v0 = 0;
                    fcompp(v1[v0], v1[v0 + 1]);
                    return sub_804818B();
                }
            loc_80480F1:
                while(1) {
                    v1[v14 + 1] = v1[v14];
                    *(__int128*)(ptr1 + 3) = v1[v14];
                    v1[v14] = (double)*(long long*)ptr1;
                    v1[v14] = v1[v14 + 2] / v1[v14];
                    v6 = *(int*)(ptr1 + 4);
                    v5 = (unsigned int)(16414 - *(int*)(ptr1 + 5));
                    if(v5 < 0x80000000 && (unsigned int)(v6 >>> (v5 & 0x1f)) < (unsigned int)ptr0) {
                        sub_804814F();
                        v0 = 0;
                        fcompp(v1[v0], v1[v0 + 1]);
                        return sub_804818B();
                    }
                    v3 = *(int*)(ptr1 + 3);
                    if((int)v5 <= 0) {
                        v6 = v3;
                        v3 = 0;
                    }
                }
            }
            while((v3 << ((0 - v5) & 0x1f)) | (unsigned int)((((unsigned long long)v3 | ((unsigned long long)v6 << 32)) << ((0 - v5) & 0x1f)) >>> 32L));
            if(*ptr1 != ptr0) {
                v15 = __ror__(v15, 4);
                *ptr1 = ptr0;
            }
            ffree(v1[v14 + 2]);
            --v14;
            v1[v14] = (double)*(long long*)ptr1;
            sub_804814F();
            v12 = v2 / v12;
            ptr0 = *ptr1;
            goto loc_80480F1;
        }
    }
    else {
        sub_804814F();
        v0 = 0;
    }
    fcompp(v1[v0], v1[v0 + 1]);
    return sub_804818B();
}

void sub_804814F() {
}

int sub_8048151() {
    int v0;
    char v1;
    __SyntheticTypeUnknownF v2;
    unsigned char v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    __SyntheticTypeUnknownF v7 = v5;
    char v8 = 7;
    __SyntheticTypeUnknownF v9 = v7;
    char v10 = 6;
    __SyntheticTypeUnknownF v11 = (double)gvar_80481FD;
    unsigned int* ptr0 = (unsigned int*)(v0 + 56);
    unsigned int* ptr1 = (unsigned int*)(v0 + 56);
    unsigned int* ptr2 = ptr0;
    unsigned char* ptr3 = (unsigned char*)((unsigned char*)ptr0 - 1);
    char v12 = ptr3 ? 0: 1;
    char v13 = (int)ptr3 < 0;
    char v14 = __parity__((unsigned char)ptr3);
    char v15 = (((unsigned char*)~(int)ptr3 ^ (unsigned int*)~(int)ptr2) >>> 4) & 0x1;
    char v16 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr2) & (int)ptr2) < 0;
    do {
        __SyntheticTypeUnknownF v17 = v9;
        char v18 = 5;
        __SyntheticTypeUnknownF v19 = v17;
        v40[v41] = fprem(v19, v11);
        *ptr1 = (int)v4;
        __SyntheticTypeUnknownF v20 = v2 - v4;
        ftst(v20);
        fnstsw((unsigned short)v6);
        __SyntheticTypeUnknownF v21 = v20;
        char v22 = 6;
        v9 = v21 / v11;
        char v23 = 48;
        v6 = (unsigned int)(*(char*)ptr1 + 48) | ((unsigned int)((v6 >>> 8) & 0xffffff) << 8);
        char v24 = *(char*)ptr1 + 48 ? 0: 1;
        char v25 = (v6 >>> 7) & 0x1;
        char v26 = __parity__((unsigned char)v6);
        char v27 = (((*(char*)ptr1 ^ 0x30) ^ (unsigned char)v6) >>> 4) & 0x1;
        char v28 = *(unsigned char*)ptr1 >= 208;
        char v29 = (((unsigned char)v6 ^ 0x30) & ~(*(char*)ptr1 ^ 0x30)) < 0;
        *ptr3 = (unsigned char)v6;
        --ptr3;
        v6 = (unsigned int)(unsigned char)v6 | ((unsigned int)((unsigned char)(v6 >>> 8) & 0x40) << 8) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
        v1 = (unsigned char)(v6 >>> 8) ? 0: 1;
        char v30 = (v6 >>> 15) & 0x1;
        char v31 = __parity__((unsigned char)(v6 >>> 8));
        char v32 = 0;
        char v33 = 0;
    }
    while(v1);
    fcompp(v11, v9);
    *ptr3 = v3;
    char v34 = v3 == 32;
    if(!v34) {
        *(unsigned char*)ptr1 = v3;
        ptr1 = (unsigned int*)((char*)ptr1 + 1);
        unsigned char* ptr4 = ptr3;
        ++ptr3;
        char v35 = ptr3 ? 0: 1;
        char v36 = (int)ptr3 < 0;
        char v37 = __parity__((unsigned char)ptr3);
        char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 ^ 0x1) ^ (int)ptr3) >>> 4) & 0x1);
        char v39 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr4) & (int*)~(int)(int*)((int)ptr4 ^ 0x1)) < 0;
    }
}

int sub_804818B() {
    char v0;
    int v1 = 1;
    int v2 = 4;
    int v3 = 4;
    int* ptr0 = &v0;
    interrupt(128);
}
