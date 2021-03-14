
void _mcount() {
}

int fib(int param0) {
    int result;
    if(param0 > 1) {
        int v0 = fib(param0 - 1);
        int v1 = fib(param0 - 2);
        result = v1 + v0;
    }
    else {
        result = param0;
    }
    return result;
}

void fini_dummy() {
}

void init_dummy() {
}

int main() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    →printf("Input number: ", v4, v3);
    →scanf((char*)&gvar_80488C7, &v1, v2);
    if(v1 > 1) {
        int v5 = fib(v1 - 1);
        int v6 = fib(v1 - 2);
        v0 = v6 + v5;
    }
    else {
        v0 = v1;
    }
    →printf("fibonacci(%d) = %d\n", v1, v0);
    return 0;
}

int sub_804866D() {
    jump gvar_80498E8;
}

int sub_804873C() {
    call();
    hlt();
}

int sub_8048812() {
    int v0;
    int* ptr0;
    int v1;
    →printf("fibonacci(%d) = %d\n", *(ptr0 - 1), v1);
    jump v0;
}
