
void g(int32_t* rdi, int32_t* rsi, int32_t* rdx) {
    int64_t rax4;
    int64_t rax5;

    *reinterpret_cast<int32_t*>(&rax4) = *rdi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *rdi = static_cast<int32_t>(rax4 + 1);
    *reinterpret_cast<int32_t*>(&rax5) = *rsi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    *rsi = static_cast<int32_t>(rax5 - 1);
    *rdx = *rdi * *rsi;
    return;
}

void f(int32_t edi, int32_t esi, int32_t edx) {
    void* rbp4;
    int32_t v5;
    int32_t v6;
    int32_t v7;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = edi;
    v6 = esi;
    v7 = edx;
    while (v5 && (v6 && v7)) {
        g(reinterpret_cast<int64_t>(rbp4) - 4, reinterpret_cast<int64_t>(rbp4) - 8, reinterpret_cast<int64_t>(rbp4) - 12);
    }
    return;
}
