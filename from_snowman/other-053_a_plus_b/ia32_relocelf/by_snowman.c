
int32_t f(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fadd qword [ebp-0x10]");
    return a4;
}
