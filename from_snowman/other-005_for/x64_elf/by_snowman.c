
void puts(int64_t rdi) {
    return;
}

int64_t main() {
    int32_t v1;

    v1 = 0;
    while (v1 <= 9) {
        puts("Hello!\n");
        ++v1;
    }
    return 0;
}
