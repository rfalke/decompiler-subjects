
int main(unsigned int param0) {
    test(0xfffffffb);
    test(0xfffffffe);
    test(0);
    test(param0);
    test(5);
    return 0;
}

int sub_804824E() {
    return gvar_804956C();
}

int test(unsigned int param0) {
    if((int)param0 < -2) {
        param0 = 0xfffffffe;
    }
    else if((int)param0 > 3) {
        param0 = 3;
    }
    return →printf("MinMax result %d\n", param0);
}
