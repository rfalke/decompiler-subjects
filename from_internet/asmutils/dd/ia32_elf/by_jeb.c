
// Stale decompilation - Refresh this view to re-decompile this code
int start(void* param0, unsigned short* param1) {
    int* ptr0;
    int v0;
    int* ptr1;
    int* ptr2;
    unsigned short* ptr3;
    int* ptr4 = (int*)0x1;
    int* ptr5 = (int*)0x1;
    int* ptr6 = NULL;
    char v1 = 1;
    char v2 = 0;
    char v3 = 1;
    char v4 = 0;
    char v5 = 0;
    unsigned short* ptr7 = ptr3;
    unsigned short* ptr8 = ptr3;
    int* ptr9 = (int*)((char*)ptr7 - 1);
    char v6 = ptr9 ? 0: 1;
    char v7 = (int)ptr9 < 0;
    char v8 = __parity__((unsigned char)ptr9);
    char v9 = (((int*)~(int)ptr9 ^ (unsigned short*)~(int)ptr8) >>> 4) & 0x1;
    char v10 = (int)(int*)((int)(int*)((int)ptr9 ^ (int)ptr8) & (int)ptr8) < 0;
    if(v6) {
        ptr2 = (int*)0x2D;
        int v11 = &gvar_804804C;
        ptr1 = (int*)0x1;
        v0 = (int)(void*)0x4;
        ptr0 = &param1;
        interrupt(128);
    }
    gvar_804836C = 2;
    while(1) {
        unsigned short* ptr10 = param1;
        unsigned short* ptr11 = param1;
        char v12 = ptr11 ? 0: 1;
        char v13 = (int)ptr11 < 0;
        char v14 = __parity__((unsigned char)ptr11);
        char v15 = 0;
        char v16 = 0;
        if(v12) {
            break;
        }
        else {
            param1 = (unsigned short*)&loc_80480A9;
            if(*ptr11 == 0x666f) {
                int v17 = 32833;
                int v18 = 420;
                unsigned char v19 = sub_8048149();
                v0 = sub_804832F();
                *ptr2 = v0;
                jump param1;
            }
            else if(*ptr11 != 0x6669) {
                int v20 = &gvar_8048367;
                if(*(int*)ptr11 == 1853189987) {
                    unsigned char v19 = sub_8048149();
                    v0 = sub_804832F();
                    *ptr2 = v0;
                    jump param1;
                }
                else {
                    int v21 = 134513515;
                    if(*ptr11 == 29538) {
                        unsigned char v19 = sub_8048149();
                        v0 = sub_804832F();
                        *ptr2 = v0;
                        jump param1;
                    }
                    else {
                        int v22 = &gvar_804836F;
                        if(*(int*)ptr11 == 1885956979) {
                            unsigned char v19 = sub_8048149();
                            v0 = sub_804832F();
                            *ptr2 = v0;
                            jump param1;
                        }
                        else {
                            ptr2 = (int*)&gvar_8048373;
                            if(*(int*)ptr11 == 0x6b656573) {
                                unsigned char v19 = sub_8048149();
                                v0 = sub_804832F();
                                *ptr2 = v0;
                                jump param1;
                            }
                            else if(*(int*)ptr11 == 0x766e6f63) {
                                ptr11 = (unsigned short*)((char*)ptr11 + 5);
                                if(*(int*)ptr11 == 1668184435) {
                                    gvar_8048381 = 1;
                                }
                                else if(*(int*)ptr11 == 0x62617773) {
                                    gvar_8048382 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else {
                int v23 = 0x8000;
                int* ptr12 = (int*)0x1;
                int* ptr13 = ptr2;
                int* ptr14 = (int*)0x1;
                sub_8048116();
                int* ptr15 = ptr13;
                int v24 = 0;
                ptr6 = ptr15;
                int v25 = 0;
                ptr5 = ptr2;
                ptr2 = NULL;
            }
        }
    }
    unsigned short* ptr16 = *(unsigned int*)0x804836B;
    param1 = *(unsigned int*)0x804836B;
    ptr8 = ptr16;
    int* ptr17 = (int*)((char*)ptr16 + &gvar_804838B);
    v6 = ptr17 ? 0: 1;
    v7 = (int)ptr17 < 0;
    v8 = __parity__((unsigned char)ptr17);
    v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ &gvar_804838B) ^ (int)ptr17) >>> 4) & 0x1);
    v5 = (unsigned int)ptr8 >= 0xf7fb7c75;
    v10 = (int)(int*)((int)(int*)((int)ptr17 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ &gvar_804838B)) < 0;
    ptr1 = ptr17;
    v0 = (int)(void*)0x2D;
    ptr0 = &param1;
    interrupt(128);
}

int sub_8048116() {
    char v0;
    int v1;
    int v2;
    unsigned char v3 = sub_8048149();
    int v4 = v1;
    int v5 = v2;
    int v6 = v4;
    int v7 = 5;
    int v8 = 5;
    int* ptr0 = &v0;
    interrupt(128);
}

unsigned char sub_8048149() {
    int v0;
    unsigned char v1;
    unsigned char* ptr0;
    do {
        v1 = *ptr0;
        ++ptr0;
        char v2 = v1 ? 0: 1;
        char v3 = v1 >= 128;
        char v4 = __parity__(v1);
        char v5 = 0;
        char v6 = 0;
        if(v2) {
            int v7 = 1;
            int v8 = 1;
            v1 = 1;
            int v9 = 0;
            int* ptr1 = &v0;
            interrupt(128);
            return;
        }
        char v10 = (((v1 - 61) ^ (v1 ^ 0x3d)) >>> 4) & 0x1;
    }
    while(v1 != 61);
    return 61;
}

void sub_80482A7() {
    char v0 = gvar_8048382 & 0x1 ? 0: 1;
    char v1 = (char)(gvar_8048382 & 0x1) < 0;
    char v2 = __parity__(gvar_8048382 & 0x1);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_80482C7: &sub_80482B0;
}

int sub_80482B0(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int* ptr0 = &v0;
    int v6 = v5;
    int v7 = param0;
    int v8 = param1;
    int v9 = v1;
    int* ptr1 = &v0;
    int v10 = v3;
    int v11 = v2;
    int v12 = v4;
    short* ptr2 = (short*)&gvar_804838B;
    short* ptr3 = (short*)&gvar_804838B;
    int v13 = param0 - &gvar_804838B;
    int counter = param0 - &gvar_804838B;
    char v14 = counter ? 0: 1;
    char v15 = counter < 0;
    char v16 = __parity__((unsigned char)counter);
    char v17 = 0;
    char v18 = 0;
    if(!v14) {
        do {
            v5 = (unsigned int)*ptr2 | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
            ++ptr2;
            char v19 = (unsigned char)(v5 >>> 8);
            v5 = (unsigned int)v19 | ((unsigned int)(unsigned char)v5 << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
            *ptr3 = (unsigned short)v5;
            ++ptr3;
            --counter;
        }
        while(counter);
    }
}

void sub_80482C7() {
}

int sub_80482C8() {
    char v0;
    int v1 = &gvar_804838B;
    unsigned int v2 = gvar_8048377;
    int v3 = sub_8048318();
    int v4 = 0;
    char v5 = 1;
    char v6 = 0;
    char v7 = 1;
    char v8 = 0;
    char v9 = 0;
    int v10 = (unsigned int)gvar_804837F * 4;
    unsigned int v11 = (unsigned int)((unsigned int)gvar_804837F * 4);
    unsigned int v12 = (unsigned int)(v10 + 2109483);
    char v13 = v12 ? 0: 1;
    char v14 = v12 >= 0x80000000;
    char v15 = __parity__((unsigned char)v12);
    char v16 = (((v11 ^ 0x20302b) ^ v12) >>> 4) & 0x1;
    char v17 = v11 >= 0xffdfcfd5;
    char v18 = (int)((v12 ^ v11) & ~(v11 ^ 0x20302b)) < 0;
    gvar_804838B = v12;
    int* ptr0 = (int*)0x804838F;
    int v19 = 170684009;
    *(int*)0x804838F = 170684009;
    int* ptr1 = (int*)0x8048393;
    unsigned int v20 = gvar_804837B;
    int v21 = sub_8048318();
    int v22 = 0;
    char v23 = 1;
    char v24 = 0;
    char v25 = 1;
    char v26 = 0;
    char v27 = 0;
    int v28 = (unsigned int)gvar_8048380 * 4;
    unsigned int v29 = (unsigned int)((unsigned int)gvar_8048380 * 4);
    int v30 = v28 + 2109483;
    char v31 = v30 ? 0: 1;
    char v32 = v30 < 0;
    char v33 = __parity__((unsigned char)v30);
    char v34 = (((v29 ^ 0x20302b) ^ v30) >>> 4) & 0x1;
    char v35 = v29 >= 0xffdfcfd5;
    char v36 = ((v30 ^ v29) & ~(v29 ^ 0x20302b)) < 0;
    *(int*)0x8048393 = v30;
    int* ptr2 = (int*)0x8048397;
    int v37 = 175404399;
    *(int*)0x8048397 = 175404399;
    int* ptr3 = (int*)0x804839B;
    unsigned int v38 = &gvar_804838B;
    int* ptr4 = (int*)0x804839B;
    int* ptr5 = (int*)0x804839B;
    int* ptr6 = (int*)0x10;
    char v39 = 0;
    char v40 = 0;
    char v41 = 0;
    char v42 = 0;
    char v43 = 0;
    char v44 = 0;
    int v45 = 2;
    unsigned int v46 = 4;
    unsigned int v47 = 4;
    int* ptr7 = &v0;
    interrupt(128);
}

int sub_8048318() {
    char v0;
    char* ptr0;
    unsigned int v1;
    unsigned int v2 = 10;
    int* ptr1 = &v0;
    int v3 = 0;
    do {
        --ptr1;
        *ptr1 = (unsigned int)((unsigned char)v1 % 10 + 48) | ((unsigned int)(((v1 % 10) >>> 8) & 0xffffff) << 8);
        ++v3;
        v1 /= 10;
    }
    while(v1);
    while(1) {
        int v4 = *ptr1;
        ++ptr1;
        *ptr0 = (unsigned char)v4;
        jump v3 != 1 ? &loc_804832A: &sub_804832E;
    }
}

void sub_804832E() {
}

int sub_804832F() {
    int v0;
    char* ptr0;
    int v1 = 0;
    int result = 0;
    char v2 = 1;
    char v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 0;
    while(1) {
        v1 = (unsigned int)*ptr0 | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
        ++ptr0;
        if((unsigned char)v1) {
            char v7 = (unsigned char)v1 == 57;
            char v8 = (unsigned char)v1 < 57;
            char v9 = __parity__((unsigned char)v1 - 57);
            char v10 = (unsigned char)v1 < 57;
            char v11 = ((((unsigned char)v1 - 57) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x39)) < 0;
            char v12 = ((((unsigned char)v1 - 57) ^ ((unsigned char)v1 ^ 0x39)) >>> 4) & 0x1;
            if((v10 || v7)) {
                v1 = (unsigned int)((unsigned char)v1 - 48) | ((unsigned int)((v1 >>> 8) & 0xffffff) << 8);
                int v13 = result;
                int v14 = result * 10;
                int v15 = result * 10;
                result = v1 + v14;
                char v16 = result ? 0: 1;
                char v17 = result < 0;
                char v18 = __parity__((unsigned char)result);
                char v19 = __carry__(v1, v15);
                char v20 = ((result ^ v15) & ~(v1 ^ v15)) < 0;
                continue;
            }
            else {
                char v21 = (unsigned char)v1 == 119;
                char v22 = (unsigned char)v1 < 119;
                char v23 = __parity__((unsigned char)v1 - 119);
                char v24 = (unsigned char)v1 < 119;
                char v25 = ((((unsigned char)v1 - 119) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x77)) < 0;
                if(!v21) {
                    char v26 = (unsigned char)v1 == 98;
                    char v27 = (unsigned char)v1 < 98;
                    char v28 = __parity__((unsigned char)v1 - 98);
                    char v29 = (unsigned char)v1 < 98;
                    char v30 = ((((unsigned char)v1 - 98) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x62)) < 0;
                    if(!v26) {
                        char v31 = (unsigned char)v1 == 107;
                        char v32 = (unsigned char)v1 < 107;
                        char v33 = __parity__((unsigned char)v1 - 107);
                        char v34 = (unsigned char)v1 < 107;
                        char v35 = ((((unsigned char)v1 - 107) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x6b)) < 0;
                        if(!v31) {
                            char v36 = (unsigned char)v1 == 109;
                            char v37 = (unsigned char)v1 < 109;
                            char v38 = __parity__((unsigned char)v1 - 109);
                            char v39 = (unsigned char)v1 < 109;
                            char v40 = ((((unsigned char)v1 - 109) ^ (unsigned char)v1) & ((unsigned char)v1 ^ 0x6d)) < 0;
                            char v41 = ((((unsigned char)v1 - 109) ^ ((unsigned char)v1 ^ 0x6d)) >>> 4) & 0x1;
                            if(v36) {
                                result *= 0x400;
                            }
                            else {
                                int v42 = 1;
                                int v43 = 1;
                                int v44 = 1;
                                int* ptr1 = &v0;
                                interrupt(128);
                            }
                        }
                        result *= 2;
                    }
                    result *= 0x100;
                }
                result *= 2;
            }
        }
        return result;
    }
    return result;
}
