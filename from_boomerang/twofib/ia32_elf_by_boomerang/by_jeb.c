
int main() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    →printf("Enter number: ", v0, v1, v2);
    →scanf((char*)&gvar_8048553, &v3, v1, v2);
    v0 = v3;
    twofib(&v4);
    →printf("Fibonacci of %d is %d\n", v3, v4);
    return 0;
}

void sub_80482B4() {
    jump gvar_804965C;
}

void sub_804836E() {
}

void sub_80484B6() {
}

int* twofib(int* param0) {
    int v0;
    int v1;
    int v2;
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
    int* ptr0 = param0;
    *ptr0 = v1;
    *(ptr0 + 1) = v0;
    return param0;
}
