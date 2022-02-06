
int cparam(unsigned int param0, int param1) {
    if(param0 >= 0x80000000) {
        param1 = 0;
    }
    return param0 + param1;
}

int main(unsigned int param0) {
    int v0 = cparam(param0 - 3, 2);
    →printf("Result is %d\n");
    return 0;
}

int sub_804829E() {
    return gvar_804957C();
}
