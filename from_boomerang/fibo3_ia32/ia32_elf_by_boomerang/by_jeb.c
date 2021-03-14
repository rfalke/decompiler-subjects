
int fib(int param0) {
    int result;
    if(param0 > 1) {
        int v0 = fib(param0 - 1);
        int v1 = fib(param0 - 2);
        result = v1 + v0;
    }
    else {
        result = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    int v0;
    int v1;
    int v2;
    int v3;
    →printf("Input number: ", v0, v1, v2);
    →scanf((char*)&gvar_8048517, &v3, v1, v2);
    int v4 = fib(v3);
    →printf("fibonacci(%d) = %d\n", v3, v4);
    return 0;
}

void sub_80482BC() {
    jump gvar_804961C;
}

void sub_8048386() {
}
