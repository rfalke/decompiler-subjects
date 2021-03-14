
int bswap(int param0) {
    return (unsigned int)(unsigned char)(param0 >>> 24) | ((unsigned int)(unsigned char)(param0 >>> 16) << 8) | ((unsigned int)(unsigned char)(param0 >>> 8) << 16) | ((unsigned int)(unsigned char)param0 << 24);
}

int main() {
    int v0 = bswap(0x12345678);
    →printf("Output is %x\n", v0);
    return 0;
}

void sub_8048290() {
    jump gvar_8049588;
}

void sub_8048342() {
}

int sub_8048432(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v0;
    do {
        *(int*)(v4 * 4 + v2 - 224)();
        v1 = v4;
        --v4;
    }
    while(v1);
    return finalizer_0(v3, 0);
}
