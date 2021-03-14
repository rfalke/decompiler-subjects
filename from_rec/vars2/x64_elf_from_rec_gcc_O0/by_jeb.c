
int* func(int* param0) {
    *param0 = 1;
    *(char*)(param0 + 2) = 107;
    *(long*)(param0 + 4) = 10L;
    return param0;
}

int* main() {
    return func((int*)&gs1);
}
