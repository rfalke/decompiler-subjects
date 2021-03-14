
int fib() {
    int result;
    int v0;
    if(v0 > 1) {
        int v1 = fib();
        int v2 = fib();
        result = v2 + v1;
    }
    else {
        result = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    int v0;
    int v1;
    void* ptr0;
    int v2;
    →printf("Input number: ", v0, v1, ptr0);
    →scanf((char*)&gvar_80484FB, &v2, v1, ptr0);
    int v3 = fib();
    →printf("fibonacci(%d) = %d\n", v2, v3);
    return 0;
}

void sub_80482BC() {
    jump gvar_8049600;
}

void sub_8048386() {
}
