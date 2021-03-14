
void func(int* param0) {
    *param0 = 1;
    *(char*)(param0 + 2) = 107;
    *(long*)(param0 + 4) = 10L;
}

void main() {
    *(int*)&gs1 = 1;
    gvar_6010E8 = 107;
    gvar_6010F0 = 10L;
}
