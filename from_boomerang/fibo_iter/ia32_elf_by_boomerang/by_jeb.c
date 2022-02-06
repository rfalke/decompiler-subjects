
unsigned int fib(unsigned int param0) {
    unsigned int result = param0;
    if((int)param0 > 1) {
        unsigned int v0 = 1;
        unsigned int v1 = 1;
        if((int)param0 > 2) {
            unsigned int v2 = param0 - 2;
            do {
                unsigned int v3 = v0;
                v0 += v1;
                --v2;
                v1 = v3;
            }
            while(v2);
        }
        result = v0;
    }
    return result;
}

int main() {
    unsigned int v0;
    →printf("Input number: ");
    →scanf((char*)&gvar_804848B);
    unsigned int v1 = fib(v0);
    →printf("fibonacci(%d) = %d\n", v0, v1);
    return 0;
}

int sub_8048272() {
    return gvar_8049598();
}
