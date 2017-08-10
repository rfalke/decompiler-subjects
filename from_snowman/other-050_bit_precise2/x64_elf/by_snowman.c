
int64_t g64;

void fun_4000d4() {
    int64_t rax1;
    signed char bl2;

    *reinterpret_cast<signed char*>(&rax1) = bl2;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1) = 2;
    g64 = rax1;
}
