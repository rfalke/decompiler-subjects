
int main() {
    →printf("lea1 should=0x55667788 is=0x%08x\n", 0x55667788);
    →printf("lea2 should=0x11227788 is=0x%08x\n", 0x11227788);
    →printf("lea3 should=0x00007788 is=0x%08x\n", 0x7788);
    →printf("lea4 should=0x11227788 is=0x%08x\n", 0x11227788);
    return 0;
}

void sub_8049030() {
    jump gvar_804C008;
}

void sub_8049127() {
}
