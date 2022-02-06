
int main(unsigned int param0) {
    test(0xfffffffb);
    test(0xfffffffe);
    test(0);
    test(param0);
    test(5);
    return 0;
}

int sub_804824E() {
    return gvar_804957C();
}

int test(unsigned int param0) {
    unsigned int v0 = (unsigned int)(-2 - (unsigned int)((-2 - param0) & (-1 - ((param0 >> 31) + (unsigned int)(param0 > 0xfffffffe)))));
    return →printf("MinMax result %d\n", (((v0 >> 31) - (unsigned int)(v0 < 3)) & (v0 - 3)) + 3);
}
