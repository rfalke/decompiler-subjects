
int main(int param0, int param1) {
    →puts(param0 == 2 && **(unsigned int*)(param1 + 4) ? *(char*)(*(int*)(param1 + 4) + 1) != 97 ? "no \'a\'": "got an \'a\'": "not enough args or too small");
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_80490E7() {
}
