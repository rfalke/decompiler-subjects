
size_t main() {
    size_t v0;
    unsigned int v1;
    →scanf((char*)&gvar_80486B8, &v0);
    →scanf((char*)&gvar_80486B8, &v1);
    if(v0 != 5) {
        →fwrite("Not Equal\n", 1, 10, stdout);
        if((int)v0 < 5) {
            →fwrite("Greater\n", 1, 8, stdout);
            if((int)v0 < 5) {
                goto loc_80484EE;
            }
        }
        goto loc_80484C4;
    }
    else {
        →fwrite("Equal\n", 1, 6, stdout);
    loc_80484C4:
        →fwrite("Less or Equal\n", 1, 14, stdout);
        if((int)v0 <= 5) {
        loc_80484EE:
            →fwrite("Greater or Equal\n", 1, 17, stdout);
            if((int)v0 <= 5) {
                goto loc_8048520;
            }
        }
        →fwrite("Less\n", 1, 5, stdout);
    }
loc_8048520:
    if(v1 < 5) {
        →fwrite("Greater Unsigned\n", 1, 17, stdout);
        if(v1 < 5) {
            goto loc_8048596;
        }
        else {
            goto loc_804856C;
        }
    }
    else {
    loc_804856C:
        →fwrite("Less or Equal Unsigned\n", 1, 23, stdout);
        if(v1 <= 5) {
        loc_8048596:
            →fwrite("Carry Clear\n", 1, 12, stdout);
            if(v1 <= 5) {
                goto loc_80485C5;
            }
        }
        →fwrite("Carry Set\n", 1, 10, stdout);
    }
loc_80485C5:
    size_t result = v0;
    if((int)result <= 5) {
        →fwrite("Minus\n", 1, 6, stdout);
        result = v0;
    }
    if((int)result > 5) {
        result = →fwrite("Plus\n", 1, 5, stdout);
    }
    return result;
}

int start(int param0, int param1) {
    int v0;
    char v1;
    void* ptr0;
    int v2;
    int v3 = 0;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    int v9 = v0;
    int* ptr1 = &v1;
    char v10 = &v0 ? 0: 1;
    char v11 = (int)&v0 < 0;
    char v12 = __parity__((unsigned char)&v0);
    char v13 = 0;
    char v14 = 0;
    int v15 = v2;
    int* ptr2 = &v15;
    int* ptr3 = &v15;
    int v16 = param1;
    int v17 = &finalizer_0;
    int v18 = &initializer_0;
    int* ptr4 = &v1;
    int v19 = &main;
    int* ptr5 = &ptr0;
    int v20 = →__libc_start_main();
    hlt();
}

int sub_80482BA() {
    return gvar_8049840();
}
