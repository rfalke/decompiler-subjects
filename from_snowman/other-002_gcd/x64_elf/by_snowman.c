
int64_t gcd(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (esi) {
        rax3 = gcd(esi, edi % esi);
    } else {
        *reinterpret_cast<int32_t*>(&rax3) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    return rax3;
}
