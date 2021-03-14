
long gcd(long param0, long param1) {
    int v0 = (unsigned int)param0;
    int v1 = (unsigned int)param1;
    return (unsigned int)param1 ? gcd(param1 & 0xffffffffL, (((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (long)(unsigned int)param1) & 0xffffffffL, (((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (long)(unsigned int)param1) & 0xffffffffL): param0 & 0xffffffffL;
}

long main() {
    for(int i = 0; i <= 9; ++i) {
        gcd((long)i, ((unsigned long)(i * 2) + 1L) & 0xffffffffL);
    }
    return 0L;
}
