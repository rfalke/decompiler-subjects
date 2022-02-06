
int gcd(int param0, unsigned int param1) {
    return !param1 ? param0: gcd((int)param1, (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % (int)param1);
}
