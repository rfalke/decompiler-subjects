
void L2() {
}

int start() {
    int result;
    unsigned int v0 = (unsigned int)(result + 1);
    if(!v0) {
        L2();
        return result;
    }
    unsigned int v1 = v0;
    result = (int)(v0 + 2);
    char v2 = result ? 0: 1;
    char v3 = result < 0;
    char v4 = __parity__((unsigned char)result);
    char v5 = (((v1 ^ 0x2) ^ result) >>> 4) & 0x1;
    char v6 = v1 >= 0xfffffffe;
    char v7 = ((result ^ v1) & ~(v1 ^ 0x2)) < 0;
}
