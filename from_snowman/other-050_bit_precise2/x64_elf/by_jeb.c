
long start() {
    char v0;
    long v1 = (unsigned long)v0 | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    *(long*)0x64 = (unsigned long)v0 | ((unsigned long)2 << 8) | ((unsigned long)((v1 >>> 16L) & 0xffffffffffffL) << 16);
}
