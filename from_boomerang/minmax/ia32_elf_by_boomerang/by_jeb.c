
void __fsr(int param0, int param1) {
}

void _mcount() {
}

int main(int param0) {
    int v0 = param0;
    if(v0 > 3) {
        v0 = 3;
    }
    else if(v0 < -2) {
        v0 = -2;
    }
    →printf("MinMax adjusted number of arguments is %d\n", v0);
    return 0;
}

int sub_8048795() {
    jump gvar_8049984;
}

int sub_8048839() {
    call();
    hlt();
}
