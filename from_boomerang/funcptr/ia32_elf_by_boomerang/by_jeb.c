
int hello() {
    int v0;
    int v1;
    int v2;
    return →printf("Hello, ", v0, v1, v2);
}

int main() {
    hello();
    world();
    return 0;
}

void sub_8048248() {
    jump gvar_80494D4;
}

int sub_804825E() {
    /*BAD_CALL!*/ sub_8048248();
}

int sub_804826E() {
    /*BAD_CALL!*/ sub_8048248();
}

void sub_80482FA() {
}

int world() {
    int v0;
    int v1;
    int v2;
    return →printf("world!\n", v0, v1, v2);
}
