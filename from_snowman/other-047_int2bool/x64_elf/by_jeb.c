
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

void sub_400450() {
    jump gvar_6009E0;
}
