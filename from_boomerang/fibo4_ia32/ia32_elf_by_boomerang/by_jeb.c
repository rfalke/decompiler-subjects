
unsigned int fib() {
    unsigned int result;
    unsigned int v0;
    if((int)v0 > 1) {
        int v1 = fib();
        int v2 = fib();
        result = (unsigned int)(v2 + v1);
    }
    else {
        result = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    →printf("Input number: ");
    →scanf(&gvar_80484FB);
    int v0 = fib();
    →printf("fibonacci(%d) = %d\n");
    return 0;
}

int sub_80482C2() {
    return gvar_8049600();
}
