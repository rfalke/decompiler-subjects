
int gcd(long param0, long param1) {
    return (unsigned int)param1 ? (int)gcd((unsigned long)(unsigned int)param1, (unsigned long)((unsigned int)((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (int)(unsigned int)param1), (unsigned long)((unsigned int)((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (int)(unsigned int)param1)): (unsigned long)(unsigned int)param0;
}

long main() {
    unsigned int v0 = 0;
    do {
        gcd((long)v0, (long)(v0 * 2 + 1));
        ++v0;
    }
    while((int)v0 <= 9);
    return 0L;
}
