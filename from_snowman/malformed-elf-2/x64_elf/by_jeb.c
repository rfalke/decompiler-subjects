
void @124() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long @19() {
    return 7L;
}

long @29e(long param0, long param1) {
    long result;
    long v0 = 0L;
    initializer_0();
    do {
        result = *(long*)(v0 * 8L + (long)&@99){initializer_1}();
        ++v0;
    }
    while(v0 != 1L);
    return result;
}

long @2c7() {
    →@64();
    hlt();
}

long @2da() {
    long v0 = →@55();
    *(long*)v0 = 4981102551306676041L;
    *(int*)(v0 + 8L) = 975193676;
    *(short*)(v0 + 12L) = 0x292d;
    *(char*)(v0 + 14L) = 0;
    →@34();
    →@50();
    →@1e();
    →@10();
    long v1 = →@11();
    if(((unsigned int)v1 & 0x1)) {
        →@50();
        →@b();
    }
    @2f3();
    →@49();
    return 0L;
}

long @2e() {
    return 0L;
}

long @2f3() {
    long v0 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v1 = →@3b();
    long v2 = →@3b();
    →@16();
    →@5c();
    →@4f();
    long result = *(long*)(__FS_BASE + (long)(long*)0x28) ^ v0;
    if(result) {
        result = →@23();
    }
    return result;
}

void sub_400706() {
    jump gvar_601010;
}
