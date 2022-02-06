
int g(unsigned int param0) {
    int result;
    →printf("g(%d)\n");
    if((int)param0 > 1) {
        result = f(param0 - 1);
    }
    return result;
}

int h(unsigned int param0) {
    int result;
    →printf("h(%d)\n");
    if((int)param0 > 0) {
        result = i((int)(param0 - 1));
    }
    return result;
}

int i(int param0) {
    int result;
    →printf("i(%d)\n");
    return result;
}

int j(unsigned int param0) {
    int result;
    →printf("j(%d)\n");
    if((int)param0 > 1) {
        result = k(param0);
    }
    return result;
}

int k(unsigned int param0) {
    int result;
    →printf("k(%d)\n");
    if((int)param0 > 1) {
        result = e(param0 - 1);
    }
    return result;
}

int l(unsigned int param0) {
    int result;
    →printf("l(%d)\n");
    if((int)param0 > 1) {
        result = b(param0 + 2);
    }
    return result;
}

int main(int param0) {
    →printf("a(%d)\n");
    b(param0 * 3);
    return 0;
}

int sub_804829E() {
    return gvar_804980C();
}
