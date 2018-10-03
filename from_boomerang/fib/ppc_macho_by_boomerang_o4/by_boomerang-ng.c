int main(int argc, char *argv[]);
__size32 fib(int param1);

/** address: 0x00001d20 */
int main(int argc, char *argv[])
{
    int g31; 		// r31

    fib(10);
    printf(g31 + 720);
    return 0;
}

/** address: 0x00001d68 */
__size32 fib(int param1)
{
    __size32 g29; 		// r29
    int g3; 		// r3
    int g30; 		// r30
    int local5; 		// param1{0}

    g30 = param1;
    local5 = param1;
    if (param1 > 1) {
        g30 = fib(param1 - 1);
        g3 = fib(g30 - 2); /* Warning: also results in g29, g30 */
        g3 = g29 + g3;
        local5 = g3;
    }
    param1 = local5;
    return param1; /* WARNING: Also returning: g30 := param1, g3 := param1, g29 := param1, g29 := param1, g29 := g29, g30 := param1, g30 := param1, g30 := g30, g31 := param1 */
}

