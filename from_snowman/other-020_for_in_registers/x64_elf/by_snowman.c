
void puts(int64_t rdi) {
    return;
}

int64_t main() {
    int32_t ecx1;

    ecx1 = 0;
    while (ecx1 <= 9) {
        puts(0x40011e);
        ++ecx1;
    }
    return 0;
}
