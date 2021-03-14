
int cparam(int param0, int param1) {
    if(param0 < 0) {
        param1 = 0;
    }
    return param0 + param1;
}

int main(int param0) {
    int v0 = cparam(param0 - 3, 2);
    →printf("Result is %d\n", v0);
    return 0;
}

void sub_8048298() {
    jump gvar_804957C;
}

void sub_8048352() {
}
