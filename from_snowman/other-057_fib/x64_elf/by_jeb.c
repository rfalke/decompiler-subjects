
long fib(long param0) {
    long result;
    if((int)(unsigned int)param0 <= 1) {
        result = (unsigned long)(unsigned int)param0;
    }
    else {
        long v0 = fib((unsigned long)((unsigned int)param0 - 1));
        long v1 = fib((unsigned long)((unsigned int)param0 - 2));
        result = (unsigned long)((unsigned int)v1 + (unsigned int)v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long main() {
    long result;
    long v0 = fib(5L);
    →printf((char*)&gvar_4005F4);
    return result;
}

long sub_4003D6() {
    return gvar_600950();
}

long sub_4004B9() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6372 = 1;
}

void sub_4004CA() {
}

long sub_4004DA() {
    return register_tm_clones();
}
