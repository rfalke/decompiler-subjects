
long fib(long param0) {
    long result;
    int v0 = (unsigned int)param0;
    if(v0 <= 1) {
        result = (unsigned long)v0;
    }
    else {
        long v1 = fib((unsigned long)(v0 - 1));
        long v2 = fib((unsigned long)(v0 - 2));
        result = (unsigned long)((unsigned int)v1 + (unsigned int)v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    long v0 = fib(5L);
    return →printf((char*)&gvar_4005F4, v0 & 0xffffffffL);
}

void sub_4003D0() {
    jump gvar_600950;
}
