
void fun_90(uint64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

/* f(A, B) */
int64_t _Z1f1A1B(int64_t rdi, int64_t rsi, int64_t rdx) {
    return rsi;
}

/* g() */
void _Z1gv() {
    uint64_t rcx1;

    fun_90(rcx1 & 0xffffffff00000000 & 0xffff0000ffffffff & 0xff00ffffffffffff, _Z1f1A1B, _Z1f1A1B);
}
