
int add_one(int param0) {
    int v0 = param0;
    jump &loc_80492BA;
}

int main(unsigned int param0) {
    int v0;
    int* ptr0;
    void* ptr1;
    int* ptr2 = &param0;
    char v1 = &v0 ? 0: 1;
    char v2 = (int)&v0 < 0;
    char v3 = __parity__((unsigned char)&v0);
    char v4 = 0;
    char v5 = 0;
    int v6 = v0;
    int* ptr3 = &ptr0;
    int* ptr4 = &param0;
    char v7 = param0 == 2;
    char v8 = (int)param0 < 2;
    char v9 = __parity__((unsigned char)param0 - 2);
    char v10 = param0 < 2;
    char v11 = (((param0 - 2) ^ param0) & (param0 ^ 0x2)) < 0;
    char v12 = (((param0 - 2) ^ (param0 ^ 0x2)) >>> 4) & 0x1;
    if(!v7) {
        not_endless_loop();
        int v13 = add_one(42);
        →printf("42+1=%d\n");
        int v14 = sub_804929A();
        →printf("constant: 0x%08x = %d equal=%d\n");
        return 0;
    }
    int* ptr5 = &ptr1;
    int v15 = /*NO_RETURN*/ sub_80491E6();
}

void not_endless_loop() {
}

int sub_8049036() {
    return gvar_804C008();
}

void sub_8049107() {
}

int sub_804913C() {
    return 0;
}

void sub_8049188() {
}

int sub_80491BD() {
    int result = deregister_tm_clones();
    completed.6844 = 1;
    return result;
}

void sub_80491D8() {
}

void sub_80491E6() {
    // Decompilation error
}

int sub_804929A() {
    int v0 = 0xbbc10300;
    int v1 = 0x5000000;
    int v2 = 0xbbc10300;
    int v3 = -1061092608;
    char v4 = 0;
    char v5 = 1;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    char v9 = 0;
    jump &loc_804929C;
}
