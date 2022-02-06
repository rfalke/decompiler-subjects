
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

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    int* ptr0;
    →printf("Input number: ");
    →scanf(&gvar_8048517);
    int v0 = fib((int)ptr0);
    →printf("fibonacci(%d) = %d\n");
    return 0;
}

int sub_80482C2() {
    return gvar_804961C();
}
