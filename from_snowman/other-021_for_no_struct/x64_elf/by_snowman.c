
int64_t main() {
    signed char* ecx1;

    ecx1 = reinterpret_cast<signed char*>(0);
    while (reinterpret_cast<int32_t>(ecx1) <= 9) {
        *ecx1 = 7;
        ++ecx1;
    }
    return 0;
}
