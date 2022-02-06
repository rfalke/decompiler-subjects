
void __i686.get_pc_thunk.bx() {
}

unsigned int fibo_normal(unsigned int param0) {
    unsigned int result;
    if((int)param0 > 1) {
        int v0 = fibo_normal(param0 - 1);
        int v1 = fibo_normal(param0 - 2);
        result = (unsigned int)(v1 + v0);
    }
    else {
        result = param0;
    }
    return result;
}

unsigned int fibo_return_on_stack(unsigned int param0) {
    unsigned int result;
    int v0;
    if((int)param0 > 1) {
        fibo_return_on_stack(param0 - 1);
        fibo_return_on_stack(param0 - 2);
        result = (unsigned int)(v0 * 2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int fibo_wrapper_return_on_stack(int param0) {
    int result;
    fibo_return_on_stack(param0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int main() {
    unsigned int v0;
    →printf("Input number: ");
    →__isoc99_scanf();
    int v1 = fibo_normal((int)v0);
    unsigned int v2 = fibo_return_on_stack(v0);
    →printf("fibonacci(%d) = %d %d\n");
    return 0;
}

int sub_804830E() {
    return gvar_8049798();
}
