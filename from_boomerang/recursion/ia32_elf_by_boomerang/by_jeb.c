
int g(int param0) {
    int result = →printf("g(%d)\n", param0);
    if(param0 > 1) {
        result = f(param0 - 1);
    }
    return result;
}

int h(int param0) {
    int result = →printf("h(%d)\n", param0);
    if(param0 > 0) {
        result = i(param0 - 1);
    }
    return result;
}

int i(int param0) {
    return →printf("i(%d)\n", param0);
}

int j(int param0) {
    int result = →printf("j(%d)\n", param0);
    if(param0 > 1) {
        result = k(param0);
    }
    return result;
}

int k(int param0) {
    int result = →printf("k(%d)\n", param0);
    if(param0 > 1) {
        result = e(param0 - 1);
    }
    return result;
}

int l(int param0) {
    int result = →printf("l(%d)\n", param0);
    if(param0 > 1) {
        result = b(param0 + 2);
    }
    return result;
}

int main(int param0) {
    →printf("a(%d)\n", param0);
    b(param0 * 3);
    return 0;
}

void sub_8048298() {
    jump gvar_804980C;
}

void sub_8048352() {
}
