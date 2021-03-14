
int a_func() {
    int v0;
    int v1;
    int v2;
    return →printf("in func: %d\n", a_global, v0, &loc_8049181, v1, v2);
}

int main() {
    int v0;
    →printf("in main: %d\n", a_global, v0, &loc_80491AB);
    ++a_global;
    a_func();
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049097() {
}
