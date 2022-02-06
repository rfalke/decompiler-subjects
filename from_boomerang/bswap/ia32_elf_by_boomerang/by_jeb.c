
int bswap(int param0) {
    return (unsigned int)(unsigned char)(param0 >>> 24) | ((unsigned int)(unsigned char)(param0 >>> 16) << 8) | ((unsigned int)(unsigned char)(param0 >>> 8) << 16) | ((unsigned int)(unsigned char)param0 << 24);
}

int main() {
    int v0 = bswap(0x12345678);
    →printf("Output is %x\n");
    return 0;
}

int sub_8048296() {
    return gvar_8049588();
}
