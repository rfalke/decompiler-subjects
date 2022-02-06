
unsigned int fib(unsigned int param0) {
    unsigned int result1;
    unsigned int result = param0;
    if((int)result <= 1) {
        result1 = 1;
        if(result != 1) {
            return result;
        }
    }
    else {
        unsigned int v0 = (unsigned int)fib(result - 1);
        result = v0;
        int v1 = fib(v0 - 1);
        →printf((char*)&gvar_80484E7, v1 + result);
        result1 = result;
    }
    return result1;
}

int main() {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3;
    unsigned int v4;
    →printf("Input number: ");
    →scanf((char*)&gvar_80484E7, &v1, v2, v3);
    unsigned int v5 = v4;
    if((int)v5 <= 1) {
        v0 = 1;
        if(v5 != 1) {
            v0 = v5;
            →printf("fibonacci(%d) = %d\n", v4, v0);
            return 0;
        }
    }
    else {
        unsigned int v6 = fib(v5 - 1);
        v5 = v6;
        unsigned int v7 = fib(v6 - 1);
        →printf((char*)&gvar_80484E7, v7 + v5, v2, v3);
        v0 = v5;
    }
    →printf("fibonacci(%d) = %d\n", v4, v0);
    return 0;
}

int sub_8048272() {
    return gvar_80495F4();
}
