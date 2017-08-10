
int64_t f(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int32_t r9d, int32_t a7, int32_t a8, int32_t a9) {
    int64_t rax10;

    *reinterpret_cast<int32_t*>(&rax10) = edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    return rax10;
}

int64_t main() {
    f(1, 2, 3, 4, 5, 6, 7, 8, 9);
    return 0;
}
