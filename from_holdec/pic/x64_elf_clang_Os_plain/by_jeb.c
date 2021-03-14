
int a_func() {
    return →printf("in func: %d\n");
}

long main() {
    →printf("in main: %d\n", (unsigned long)a_global);
    long v0 = (unsigned long)(a_global + 1);
    ++a_global;
    →printf("in func: %d\n", v0);
    return 0L;
}
