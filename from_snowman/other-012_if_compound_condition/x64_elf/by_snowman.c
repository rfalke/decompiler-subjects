
void g() {
    return;
}

void h() {
    return;
}

void f(int32_t edi, int32_t esi, int32_t edx) {
    if (!edi || (!esi || !edx)) {
        h();
    } else {
        g();
    }
    return;
}
