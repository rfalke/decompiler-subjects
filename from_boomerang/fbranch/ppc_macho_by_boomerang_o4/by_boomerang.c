// address: 0x1be4
int main(int argc, char *argv[], char *envp[]) {
    double f0; 		// r32
    double f31; 		// r63
    __size32 g3; 		// r3
    float local0; 		// m[g1 - 48]

    f31 = *(/* machine specific */ (int) LR + 1024);
    scanf(/* machine specific */ (int) LR + 928);
    g3 = printf(/* machine specific */ (int) LR + 932);
    f0 = local0;
    if (f31 == f0) {
        g3 = puts(/* machine specific */ (int) LR + 952);
    }
    f0 = local0;
    if (f31 != f0) {
        g3 = puts(/* machine specific */ (int) LR + 960);
    }
    f0 = local0;
    if (f31 > f0) {
        g3 = puts(/* machine specific */ (int) LR + 972);
    }
    f0 = local0;
    if (f31 == f0) {
        g3 = puts(/* machine specific */ (int) LR + 980);
    }
    f0 = local0;
    if (f31 == f0) {
        g3 = puts(/* machine specific */ (int) LR + 996);
    }
    f0 = local0;
    if (f31 < f0) {
        g3 = puts(/* machine specific */ (int) LR + 1016);
    }
    return g3;
}

