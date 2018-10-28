int main(int argc, char *argv[]);

/** address: 0x10000434 */
int main(int argc, char *argv[])
{
    __size32 g0; 		// r0
    __size32 g0_1; 		// r0{9}
    int g10; 		// r10
    int g11; 		// r11
    int g8; 		// r8
    int g9; 		// r9

    if (argc <= 1) {
        flags = SUBFLAGSNS(0, 0, 7);
        g0 = 0x10000418;
        g11 = 0x10000420;
bb0x10000468:
        g0_1 = g0;
        if (flags) {
            g10 = 0x10000424;
            if (flags) {
bb0x10000478:
                g8 = 0x10000430;
                if (flags) {
bb0x100004e0:
                    g0 = 0;
                    if (g11 == 0x1000041c) {
                        g9 = 0x1000042c;
                        if (g10 != 0x10000424) {
bb0x10000508:
                            if (g0 == 0) {
bb0x1000049c:
                                puts("Failed!");
                            }
                            puts("Pass");
                        }
bb0x10000584:
                        g0 = 0;
                        if (g8 != g9) {
                            goto bb0x10000508;
                        }
                        g0 = 1;
                        goto bb0x10000508;
                    }
                    goto bb0x10000508;
                }
bb0x10000484:
                g0 = 0;
                if (g0_1 == 0x10000418) {
                    if (g11 != 0x10000420 || g10 != 0x10000428) {
                        goto bb0x10000508;
                    }
                    g9 = 0x10000430;
                    goto bb0x10000584;
                }
                goto bb0x1000049c;
            }
bb0x100004d4:
            g8 = 0x1000042c;
            if (flags) {
                goto bb0x10000484;
            }
            goto bb0x100004e0;
        }
        g10 = 0x10000428;
        if (flags) {
            goto bb0x100004d4;
        }
        goto bb0x10000478;
    }
    flags = SUBFLAGSNS(1, 0, 7);
    g0 = 0x10000414;
    g11 = 0x1000041c;
    goto bb0x10000468;
}

