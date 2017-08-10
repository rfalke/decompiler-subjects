
int32_t g(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;

    return eax5;
}

int32_t h(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;

    return eax5;
}

void f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int64_t rcx12;
    int64_t rdx13;
    int64_t rsi14;
    int64_t rdi15;
    int32_t eax16;
    int32_t eax17;
    int64_t rcx18;
    int64_t rdx19;
    int64_t rsi20;
    int64_t rdi21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;

    v5 = *reinterpret_cast<int32_t*>(&rdi);
    v6 = *reinterpret_cast<int32_t*>(&rsi);
    v7 = *reinterpret_cast<int32_t*>(&rdx);
    v8 = *reinterpret_cast<int32_t*>(&rcx);
    while (v5) {
        ++v6;
    }
    do {
        if (!v5) 
            break;
        ++v6;
    } while (v6 != v7);
    goto addr_400253_7;
    while (eax9 = h(rdi, rsi, rdx, rcx), !!eax9) {
        ++v5;
    }
    while ((eax10 = g(rdi, rsi, rdx, rcx), !!eax10) && (eax11 = h(rdi, rsi, rdx, rcx), !!eax11)) {
        ++v5;
    }
    do {
        *reinterpret_cast<int32_t*>(&rcx12) = v7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx13) = v6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rsi14) = v5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi15) = v8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        f(rdi15, rsi14, rdx13, rcx12);
        eax16 = g(rdi15, rsi14, rdx13, rcx12);
    } while (eax16);
    do {
        if (v5) 
            break;
        eax17 = g(rdi15, rsi14, rdx13, rcx12);
        v8 = eax17;
        if (v8) 
            goto addr_40020d_17;
    } while (v5);
    goto addr_40021f_19;
    *reinterpret_cast<int32_t*>(&rcx18) = v5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx19) = v6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi20) = v7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi21) = v8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = 0;
    f(rdi21, rsi20, rdx19, rcx18);
    addr_400257_21:
    return;
    addr_40020d_17:
    h(rdi15, rsi14, rdx13, rcx12);
    do {
        addr_40021f_19:
        eax22 = g(rdi15, rsi14, rdx13, rcx12);
        if (eax22 - v6) 
            break;
        eax23 = g(rdi15, rsi14, rdx13, rcx12);
        if (!eax23) 
            goto addr_400257_21;
        eax24 = h(rdi15, rsi14, rdx13, rcx12);
    } while (eax24);
    goto addr_400251_24;
    goto addr_400257_21;
    addr_400251_24:
    goto addr_400257_21;
    addr_400253_7:
    goto addr_400257_21;
}
