// address: 0x10000434
int main(int argc, char *argv[], char *envp[]) {
    __size32 g0; 		// r0
    int g10; 		// r10
    int g11; 		// r11
    int g8; 		// r8
    int g9; 		// r9

L-1:
    if (argc <= 1) {
L-1:
        flags = SUBFLAGSNS(0, 0, 7);
        g0 = 0x10000418;
L-1:
        g11 = 0x10000420;
L-1:
        if (flags) {
L-1:
            g10 = 0x10000424;
            if (flags) {
L-1:
            }
L-1:
            g8 = 0x1000042c;
            if (flags) {
L-1:
            }
L-1:
            g0 = 0;
L-1:
            if (g11 == 0x1000041c) {
L-1:
                g9 = 0x1000042c;
                if (g10 != 0x10000424) {
L-1:
                }
L-1:
                if (g8 != g9) {
                    goto L-1;
                }
L-1:
                g0 = 1;
L-1:
                if (g0 == 0) {
L-1:
                }
L-1:
                puts("Pass");
L-1:
            }
            goto L-1;
        }
L-1:
        g10 = 0x10000428;
        if (flags) {
            goto L-1;
        }
L-1:
        g8 = 0x10000430;
        if (flags) {
            goto L-1;
        }
L-1:
        if (g0 == 0x10000418) {
L-1:
            if (g11 != 0x10000420) {
                goto L-1;
            }
L-1:
L-1:
            g9 = 0x10000430;
            goto L-1;
        }
L-1:
        puts("Failed!");
L-1:
    }
L-1:
    flags = SUBFLAGSNS(1, 0, 7);
    g0 = 0x10000414;
    g11 = 0x1000041c;
    goto L-1;
}

