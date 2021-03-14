
int f() {
    int v0 = 20;
    int v1 = h();
    if(v1) {
        int v2 = g(1, 2, 3, 4);
        v0 = v2 + 20;
    }
    v0 += 10;
    return g(v0, v0, v0, v0);
}

int g(int param0, int param1, int param2, int param3) {
    return param0 + param1 + (param2 + param3);
}

int h() {
    return 1;
}
