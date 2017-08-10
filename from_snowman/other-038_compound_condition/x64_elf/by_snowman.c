
void g() {
    return;
}

void h() {
    return;
}

void f(int32_t edi, int32_t esi, int32_t edx, int32_t ecx) {
    if (edi && esi || edx && ecx) {
        g();
    } else {
        h();
    }
    if ((edi || esi) && (edx || ecx)) {
        g();
    }
    if (edi || (esi && edx || ecx)) {
        h();
    }
    return;
}
