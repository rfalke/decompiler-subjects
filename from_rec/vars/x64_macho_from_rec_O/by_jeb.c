
long  stub helpers() {
    /*BAD_CALL!*/ dyld_stub_binder();
}

void _func(int* param0) {
    *param0 = 1;
    *(char*)(param0 + 4) = 107;
    *(long*)(param0 + 6) = 10L;
}

long _func2() {
    gvar_100001108 = &_gs1;
    gvar_100001110 = 107;
    gvar_100001118 = 10L;
    *(int*)&_gs1 = 3;
    return &_gs1;
}

long _main() {
    _func((int*)&_gs1);
    return _func2();
}

long start() {
    long v0;
    char v1;
    long v2 = 0L;
    for(long* i = (long*)((unsigned long)(((unsigned int)v0 + 1) * 8) + (long)&v1); *i; ++i) {
    }
    long v3 = _main();
    →_exit();
    hlt();
}
