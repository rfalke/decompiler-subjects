int main(int argc, char *argv[]);
__size32 fib(int param1);

/** address: 0x00001cf0 */
int main(int argc, char *argv[])
{
    int g3; 		// r3
    __size32 g31; 		// r31
    int local0; 		// m[g1 - 32]

    printf(/* machine specific */ (int) LR + 720);
    %g9 = scanf(/* machine specific */ (int) LR + 736);
    g3 = fib(local0); /* Warning: also results in g31 */
    *(__size32*)(g30 + 68) = g3;
    printf(g31 + 740);
    return 0;
}

/** address: 0x00001c78 */
__size32 fib(int param1)
{
    __size32 g1; 		// r1
    __size32 g29; 		// r29
    __size32 g29_1; 		// r29{0}
    int g3; 		// r3
    __size32 g30; 		// r30
    __size32 g9; 		// r9

    g30 = g1 - 96;
    if (param1 <= 1) {
    }
    else {
        fib(param1 - 1);
        g3 = fib(g9 - 2); /* Warning: also results in g9, g29_1, g30 */
        g29 = g29_1 + g3;
        *(__size32*)(g30 + 64) = g29_1 + g3;
    }
    g3 = *(g30 + 64);
    return param1; /* WARNING: Also returning: g30 := param1, g3 := g3, g9 := g9, g29 := param1, g29 := param1, g29 := g29, g30 := param1, g30 := param1, g30 := g30, g31 := param1 */
}

