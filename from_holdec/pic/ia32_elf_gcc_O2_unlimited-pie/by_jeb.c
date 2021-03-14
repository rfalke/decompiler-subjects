
int a_func() {
    return →printf("in func: %d\n", a_global);
}

int main() {
    →printf("in main: %d\n", a_global);
    ++a_global;
    a_func();
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_80490E7() {
}
