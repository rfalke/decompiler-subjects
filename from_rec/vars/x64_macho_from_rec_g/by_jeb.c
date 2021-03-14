
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

int* _func(int* param0) {
    *param0 = 1;
    *(char*)(param0 + 4) = 107;
    *(long*)(param0 + 6) = 10L;
    return param0;
}

int* _func2() {
    *(int*)&_gs1 = 1;
    gvar_100001108 = &_gs1;
    gvar_100001110 = 107;
    gvar_100001118 = 10L;
    *gvar_100001108 = 2;
    int* result = *(unsigned long*)(gvar_100001108 + 8L);
    *result = 3;
    return result;
}

int* _main() {
    _func((int*)&_gs1);
    return _func2();
}

long start() {
    long v0;
    char v1;
    long v2 = 0L;
    for(long* i = (long*)((unsigned long)(((unsigned int)v0 + 1) * 8) + (long)&v1); *i; ++i) {
    }
    int* ptr0 = _main();
    →_exit();
    hlt();
}
