
long gcd(long param0, long param1) {
    int v0 = (unsigned int)param0;
    int v1 = (unsigned int)param1;
    return !(unsigned int)param1 ? param0 & 0xffffffffL: gcd(param1 & 0xffffffffL, (((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (long)(unsigned int)param1) & 0xffffffffL, (((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (long)(unsigned int)param1) & 0xffffffffL);
}
