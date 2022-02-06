
void __fsr(int param0, int param1) {
}

void _mcount() {
}

int main(unsigned int param0) {
    unsigned int v0 = param0;
    if((int)v0 < -2) {
        v0 = 0xfffffffe;
    }
    else if((int)v0 > 3) {
        v0 = 3;
    }
    →printf("MinMax adjusted number of arguments is %d\n", v0);
    return 0;
}

int sub_804879A() {
    return gvar_8049984();
}
