
int foo1() {
    return foo2();
}

int foo2() {
    b = 12;
    int v0 = *(int*)((char*)&a + 4);
    int v1 = *(int*)&a;
    return →printf("a = %f\n", *(double*)&v1);
}

int main() {
    foo1();
    →printf("b = %i\n", b);
    return 0;
}

int sub_804824E() {
    return gvar_8049558();
}
