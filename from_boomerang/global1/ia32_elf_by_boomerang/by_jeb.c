
int foo1() {
    return foo2();
}

int foo2() {
    b = 12;
    return →printf("a = %i\n", a);
}

int main() {
    foo1();
    →printf("b = %i\n", b);
    return 0;
}

int sub_804824E() {
    return gvar_8049548();
}
