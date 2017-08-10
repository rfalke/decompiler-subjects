
void swap(int32_t* rdi, int32_t* rsi) {
    int32_t eax3;

    eax3 = *rdi;
    *rdi = *rsi;
    *rsi = eax3;
    return;
}
