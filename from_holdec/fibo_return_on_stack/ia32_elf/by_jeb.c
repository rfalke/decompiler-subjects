
void __i686.get_pc_thunk.bx() {
}

int fibo_normal(int param0) {
    int result;
    if(param0 > 1) {
        int v0 = fibo_normal(param0 - 1);
        int v1 = fibo_normal(param0 - 2);
        result = v1 + v0;
    }
    else {
        result = param0;
    }
    return result;
}

int fibo_return_on_stack(int param0) {
    int result;
    int v0;
    if(param0 > 1) {
        fibo_return_on_stack(param0 - 1);
        fibo_return_on_stack(param0 - 2);
        result = v0 * 2;
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
    int v0;
    →printf("Input number: ");
    →__isoc99_scanf();
    int v1 = fibo_normal(v0);
    int v2 = fibo_return_on_stack(v0);
    →printf("fibonacci(%d) = %d %d\n", v0, v1, v2);
    return 0;
}

void sub_8048308() {
    jump gvar_8049798;
}
