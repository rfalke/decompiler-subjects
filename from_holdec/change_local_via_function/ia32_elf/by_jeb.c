
int inc(int* param0) {
    *param0 = *param0 + 1;
    return 0;
}

int main() {
    int v0;
    char v1;
    int v2 = v0;
    int* ptr0 = &v1;
    int v3 = 41;
    inc(&v3);
    →printf("The answer should be 42 and is %d\n", v3);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_80490D7() {
}
