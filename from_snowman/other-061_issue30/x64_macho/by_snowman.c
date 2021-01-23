
int64_t _f(int32_t edi) {
    int64_t rax2;
    int64_t rcx3;
    int64_t rdx4;
    int64_t rax5;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(_f);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(_f);
    if (edi != _f) {
        rcx3 = edi + 1;
        *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(_f);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(_f);
        do {
            rax5 = rdx4 * rdx4;
            --edi;
            rdx4 = rcx3 + rax5 - 1;
            --rcx3;
        } while (!reinterpret_cast<int1_t>(edi == _f));
        rax2 = rax5 + rcx3;
    }
    return rax2;
}
