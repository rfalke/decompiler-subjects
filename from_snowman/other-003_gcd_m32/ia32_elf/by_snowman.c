
int32_t gcd(int32_t a1, int32_t a2) {
    int32_t eax3;

    if (a2) {
        eax3 = gcd(a2, a1 % a2);
    } else {
        eax3 = a1;
    }
    return eax3;
}
