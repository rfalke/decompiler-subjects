
int32_t g() {
    int32_t eax1;

    return eax1;
}

int32_t h() {
    int32_t eax1;

    return eax1;
}

void f(int32_t edi, int32_t esi, int32_t edx, int32_t ecx) {
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;

    v5 = edi;
    v6 = esi;
    v7 = edx;
    v8 = ecx;
    while (v5) {
        while (eax9 = h(), !!eax9) {
            ++v6;
            if (v6 == v7) 
                goto addr_40021a_6;
        }
        ++v6;
    }
    while (v6 + v5 != v7) {
        while (eax10 = h(), !!eax10) {
            do {
                if (v5) {
                    v8 = v7;
                }
                eax11 = g();
            } while (eax11 && (eax12 = h(), !!eax12));
            --v5;
        }
        while (eax13 = g(), !!eax13) {
            eax14 = h();
            if (!eax14) 
                goto addr_400208_20;
            ++v5;
            if (!v8) 
                goto addr_40020a_22;
            if (!v5) {
                v8 = 20;
            }
        }
        continue;
        addr_400208_20:
        continue;
        addr_40020a_22:
    }
    addr_40021b_27:
    return;
    addr_40021a_6:
    goto addr_40021b_27;
}
