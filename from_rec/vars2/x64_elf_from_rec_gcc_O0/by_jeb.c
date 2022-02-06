
int* func(int* param0) {
    int* ptr0 = param0;
    *ptr0 = 1;
    *(char*)(ptr0 + 2) = 107;
    int* result = ptr0;
    *(long*)(result + 4) = 10L;
    return result;
}

int* main() {
    return func((int*)&gs1);
}
