
int main() {
    int v0 = test(4, 5, 6);
    →printf("Result for 4, 5, 6: %d\n", v0);
    int v1 = test(6, 5, 4);
    →printf("Result for 6, 5, 4: %d\n", v1);
    int v2 = test(4, 6, 5);
    →printf("Result for 4, 6, 5: %d\n", v2);
    int v3 = test(6, 4, 5);
    →printf("Result for 6, 4, 5: %d\n", v3);
    return 0;
}

void sub_8048298() {
    jump gvar_8049638;
}

void sub_8048352() {
}

int test(int param0, int param1, int param2) {
    return param0 < param1 || param1 < param2 ? 1: 0;
}
