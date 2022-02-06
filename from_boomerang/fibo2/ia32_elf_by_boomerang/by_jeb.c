
// Stale decompilation - Refresh this view to re-decompile this code
int fib1(int param0) {
    return fib2(param0);
}

unsigned int fib2(unsigned int param0) {
    unsigned int result;
    if((int)param0 <= 1) {
        result = param0;
    }
    else {
        int v0 = fib1((int)(param0 - 1));
        int v1 = fib1((int)(param0 - 2));
        result = (unsigned int)(v1 + v0);
    }
    return result;
}

int main() {
    int v0;
    →printf("Input number: ");
    →scanf((char*)&gvar_804849F);
    int v1 = fib1(v0);
    →printf("fibonacci(%d) = %d\n", v0, v1);
    return 0;
}

int sub_8048272() {
    return gvar_80495AC();
}
