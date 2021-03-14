
void __fsr(int param0, int param1) {
}

void _mcount() {
}

int addem(int param0, int param1, int param2, int* param3) {
    int result = param0 + param1 + param2;
    *param3 = param0 + param1 + param2;
    return result;
}

int main() {
    int v0;
    passem(5, 10, 40, &v0);
    →printf("Fifty five is %d\n", v0);
    return 0;
}

int passem(int param0, int param1, int param2, int* param3) {
    return addem(param0, param1, param2, param3);
}

int sub_80487C9() {
    jump gvar_80499DC;
}

int sub_804886D() {
    call();
    hlt();
}
