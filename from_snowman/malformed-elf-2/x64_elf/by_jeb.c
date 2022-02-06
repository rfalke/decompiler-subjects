
void @124() {
}

long @19() {
    return 7L;
}

long @29e(long param0, long param1, long param2) {
    long result;
    unsigned long v0 = 0L;
    initializer_0();
    do {
        *(long*)(v0 * 8L + (long)&@99){initializer_1}();
        ++v0;
    }
    while(v0 != 1L);
    return result;
}

long @2c7(long param0, long param1) {
    long v0;
    void* ptr0;
    char v1;
    long v2;
    long v3 = 0L;
    char v4 = 1;
    char v5 = 0;
    char v6 = 1;
    char v7 = 0;
    char v8 = 0;
    long v9 = param1;
    long v10 = v0;
    long* ptr1 = &v1;
    char v11 = &v0 ? 0: 1;
    char v12 = (long)&v0 < 0L;
    char v13 = __parity__((unsigned char)&v0);
    char v14 = 0;
    char v15 = 0;
    long v16 = v2;
    long* ptr2 = &v16;
    long* ptr3 = &v16;
    long v17 = &@124;
    long v18 = &@29e;
    long v19 = &@2da;
    long* ptr4 = &ptr0;
    →@64();
    hlt();
}

long @2da() {
    int v0;
    long* ptr0;
    →@55();
    *ptr0 = 4981102551306676041L;
    *(int*)(ptr0 + 1) = 975193676;
    *(short*)((char*)ptr0 + 12L) = 0x292d;
    *(char*)((char*)ptr0 + 14L) = 0;
    →@34();
    →@50();
    →@1e();
    →@10();
    →@11();
    if((v0 & 0x1)) {
        →@50();
        →@b();
    }
    @2f3();
    →@49();
    return 0L;
}

long @2f3() {
    long v0 = *(long*)(__FS_BASE + (long)(long*)0x28);
    →@3b();
    →@3b();
    →@16();
    →@5c();
    →@4f();
    long result = *(long*)(__FS_BASE + (long)(long*)0x28) ^ v0;
    if(result) {
        →@23();
    }
    return result;
}

long sub_400706() {
    return gvar_601010();
}

long sub_4008A9() {
    long v0;
    long v1 = v0;
    @19();
    @57 = 1;
}

void sub_4008BA() {
}

long sub_4008CA() {
    return @2e();
}
