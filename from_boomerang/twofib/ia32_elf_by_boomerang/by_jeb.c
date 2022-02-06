
int main() {
    int v0;
    →printf("Enter number: ");
    →scanf(&gvar_8048553);
    twofib(&v0);
    →printf("Fibonacci of %d is %d\n");
    return 0;
}

int sub_80482BA() {
    return gvar_804965C();
}

int* twofib(int* param0) {
    int v0;
    int v1;
    unsigned int v2;
    if(!v2) {
        v1 = 0;
        v0 = 1;
    }
    else {
        twofib((int)&v1, v2 - 1);
        int v3 = v1;
        v1 = v0;
        v0 += v3;
    }
    int v4 = v0;
    int* ptr0 = param0;
    *ptr0 = v1;
    *(ptr0 + 1) = v4;
    return param0;
}
