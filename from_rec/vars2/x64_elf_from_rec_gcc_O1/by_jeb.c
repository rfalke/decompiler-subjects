
void func(int* param0) {
    *param0 = 1;
    *(char*)(param0 + 2) = 107;
    *(long*)(param0 + 4) = 10L;
}

long main() {
    long result;
    func((int*)&gs1);
    return result;
}
