
int32_t g(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;

    return eax5;
}

int32_t h(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;

    return eax5;
}

void f(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t eax9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t eax14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t eax19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;

    while (a1) {
        ++a2;
    }
    do {
        if (!a1) 
            break;
        ++a2;
    } while (a2 != a3);
    goto addr_80481c4_7;
    while (eax9 = h(v5, v6, v7, v8), !!eax9) {
        ++a1;
    }
    while ((eax14 = g(v10, v11, v12, v13), !!eax14) && (eax19 = h(v15, v16, v17, v18), !!eax19)) {
        ++a1;
    }
    do {
        v20 = a3;
        v21 = a2;
        v22 = a1;
        v23 = a4;
        f(v23, v22, v21, v20);
        eax24 = g(v23, v22, v21, v20);
    } while (eax24);
    do {
        if (a1) 
            break;
        eax25 = g(v23, v22, v21, v20);
        a4 = eax25;
        if (a4) 
            goto addr_8048192_17;
    } while (a1);
    goto addr_804819f_19;
    f(a4, a3, a2, a1);
    addr_80481c8_21:
    return;
    addr_8048192_17:
    h(v23, v22, v21, v20);
    do {
        addr_804819f_19:
        eax26 = g(v23, v22, v21, v20);
        if (eax26 - a2) 
            break;
        eax27 = g(v23, v22, v21, v20);
        if (!eax27) 
            goto addr_80481c8_21;
        eax28 = h(v23, v22, v21, v20);
    } while (eax28);
    goto addr_80481c2_24;
    goto addr_80481c8_21;
    addr_80481c2_24:
    goto addr_80481c8_21;
    addr_80481c4_7:
    goto addr_80481c8_21;
}
