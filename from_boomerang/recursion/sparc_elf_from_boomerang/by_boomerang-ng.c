union { void (int) x13; void (int) x5; void * (char *, int) x12; unsigned int[]; void * (char *, int) x11; void (); } global_0x00010790;
int main(int argc, char *argv[]);
__size32 b(unsigned int param1);
__size32 c(unsigned int param1);
__size32 d(int param1);
__size32 f(int param1);
__size32 h(int param1);
__size32 j(int param1);
__size32 l(int param1);
__size32 e(int param1);
__size32 g(int param1);
__size32 i(int param1);
__size32 k(int param1);

/** address: 0x000107ac */
int main(int argc, char *argv[])
{
    printf("a(%d)\n", argc);
    b(argc + argc + argc);
    return 0;
}

/** address: 0x000107f4 */
__size32 b(unsigned int param1)
{
    __size32 g1; 		// r1

    printf("b(%d)\n", param1);
    g1 = c(param1 - 1);
    return g1;
}

/** address: 0x00010830 */
__size32 c(unsigned int param1)
{
    unsigned int g1; 		// r1

    printf("c(%d)\n", param1);
    g1 = param1;
    if (param1 <= 6) {
        g1 = global_0x00010790[param1];
        switch(param1) {
        case 0:
        case 1:
        case 2:
            g1 = d(2);
            return g1;
        case 3:
            g1 = f(3);
            return g1;
        case 4:
            g1 = h(4);
            return g1;
        case 5:
            g1 = j(5);
            return g1;
        case 6:
            g1 = l(6);
            return g1;
        }
    }
    return g1;
}

/** address: 0x000108e0 */
__size32 d(int param1)
{
    int g1; 		// r1

    printf("d(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = e(param1 - 1);
    }
    return g1;
}

/** address: 0x00010968 */
__size32 f(int param1)
{
    int g1; 		// r1

    printf("f(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = g(param1 - 1);
    }
    return g1;
}

/** address: 0x00010a00 */
__size32 h(int param1)
{
    int g1; 		// r1

    printf("h(%d)\n", param1);
    g1 = param1;
    if (param1 > 0) {
        g1 = i(param1 - 1);
    }
    return g1;
}

/** address: 0x00010a74 */
__size32 j(int param1)
{
    int g1; 		// r1

    printf("j(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = k(param1);
    }
    return g1;
}

/** address: 0x00010b04 */
__size32 l(int param1)
{
    int g1; 		// r1

    printf("l(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = b(param1 + 2);
    }
    return g1;
}

/** address: 0x0001092c */
__size32 e(int param1)
{
    __size32 g1; 		// r1

    printf("e(%d)\n", param1);
    g1 = c(param1 >> 1);
    return g1;
}

/** address: 0x000109b4 */
__size32 g(int param1)
{
    int g1; 		// r1

    printf("g(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = f(param1 - 1);
    }
    return g1;
}

/** address: 0x00010a4c */
__size32 i(int param1)
{
    printf("i(%d)\n", param1);
    return 0x10c00;
}

/** address: 0x00010ab8 */
__size32 k(int param1)
{
    int g1; 		// r1

    printf("k(%d)\n", param1);
    g1 = param1;
    if (param1 > 1) {
        g1 = e(param1 - 1);
    }
    return g1;
}

