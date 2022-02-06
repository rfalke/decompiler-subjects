
int main() {
    test(4, 5, 6);
    →printf("Result for 4, 5, 6: %d\n");
    test(6, 5, 4);
    →printf("Result for 6, 5, 4: %d\n");
    test(4, 6, 5);
    →printf("Result for 4, 6, 5: %d\n");
    int v0 = test(6, 4, 5);
    →printf("Result for 6, 4, 5: %d\n");
    return 0;
}

int sub_804829E() {
    return gvar_8049638();
}

int test(unsigned int param0, unsigned int param1, unsigned int param2) {
    return (int)param0 >= (int)param1 && (int)param1 >= (int)param2 ? 0: 1;
}
