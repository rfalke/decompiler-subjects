
long gcd(long param0, long param1) {
    return !(unsigned int)param1 ? (unsigned long)(unsigned int)param0: gcd((unsigned long)(unsigned int)param1, (unsigned long)((unsigned int)((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (int)(unsigned int)param1), (unsigned long)((unsigned int)((unsigned long)(unsigned int)param0 | ((unsigned long)((unsigned int)param0 >> 31) << 32)) % (int)(unsigned int)param1));
}
