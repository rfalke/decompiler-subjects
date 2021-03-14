
int a_func() {
    return →printf("in func: %d\n");
}

long main() {
    →printf("in main: %d\n", (unsigned long)a_global);
    ++a_global;
    a_func();
    return 0L;
}
