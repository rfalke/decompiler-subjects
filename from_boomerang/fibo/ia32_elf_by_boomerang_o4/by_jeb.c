
void _mcount() {
}

unsigned int fib(unsigned int param0) {
    unsigned int result;
    if((int)param0 > 1) {
        int v0 = fib(param0 - 1);
        int v1 = fib(param0 - 2);
        result = (unsigned int)(v1 + v0);
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
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4;
    →printf("Input number: ", v4, v3);
    →scanf((char*)&gvar_80488C7, &v1, v2);
    if((int)v1 > 1) {
        unsigned int v5 = fib(v1 - 1);
        unsigned int v6 = fib(v1 - 2);
        v0 = v6 + v5;
    }
    else {
        v0 = v1;
    }
    →printf("fibonacci(%d) = %d\n", v1, v0);
    return 0;
}

int sub_8048672() {
    return gvar_80498E8();
}
