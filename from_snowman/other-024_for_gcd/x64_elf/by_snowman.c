
int64_t gcd(int32_t edi, int32_t esi) {
    int64_t rax3;

    if (!esi) {
        *reinterpret_cast<int32_t*>(&rax3) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    } else {
        rax3 = gcd(esi, edi % esi);
    }
    return rax3;
}

int64_t main() {
    int32_t v1;
    int64_t rax2;

    v1 = 0;
    while (v1 <= 9) {
        *reinterpret_cast<int32_t*>(&rax2) = v1 + v1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        gcd(v1, static_cast<int32_t>(rax2 + 1));
        ++v1;
    }
    return 0;
}
