
int gcd(int param0, int param1) {
    return !param1 ? param0: gcd(param1, (unsigned int)((unsigned long long)param0 | ((unsigned long long)(param0 >> 31) << 32)) % param1);
}
