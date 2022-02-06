
long f() {
    return 10L;
}

long g(int param0) {
    return (unsigned long)param0;
}

long main() {
    long v0 = f();
    g((unsigned int)v0 ? 1L: 0L);
    return 0L;
}

long sub_400456() {
    return gvar_6009E0();
}

long sub_400529() {
    long v0;
    long v1 = v0;
    deregister_tm_clones();
    completed.6392 = 1;
}

void sub_40053A() {
}

long sub_40054A() {
    return register_tm_clones();
}
