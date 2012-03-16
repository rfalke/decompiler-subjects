// address: 0x1c20
int main(int argc, char *argv[], char *envp[]) {
    int g0; 		// r0
    int g0_1; 		// r0{92}
    int g10; 		// r10
    int g11; 		// r11
    int g12; 		// r12
    int g3; 		// r3
    int g4; 		// r4
    int g8; 		// r8
    int g9; 		// r9

L-1:
    g0 = 1;
    if (argc > 1) {
L-1:
        g0_1 = g0;
        if (g0_1 == 0) {
L-1:
            g0 = *(/* machine specific */ (int) LR + 1032);
L-1:
            if (g0_1 == 0) {
L-1:
                g11 = *(/* machine specific */ (int) LR + 1024);
L-1:
                if (g0_1 == 0) {
L-1:
                    g10 = *(/* machine specific */ (int) LR + 1016);
L-1:
                    if (g0_1 == 0) {
L-1:
                        g8 = *(/* machine specific */ (int) LR + 1008);
L-1:
                        if (g0_1 <= 0) {
L-1:
                            g3 = 0;
                            g12 = *(/* machine specific */ (int) LR + 1032);
                            if (g0 != g12) {
L-1:
                                if (g3 == 0) {
L-1:
                                    g3 = /* machine specific */ (int) LR + 968;
L-1:
                                    puts(g3);
L-1:
                                }
L-1:
                                g3 = /* machine specific */ (int) LR + 960;
                                goto L-1;
                            }
L-1:
                            g4 = *(/* machine specific */ (int) LR + 1024);
                            if (g11 != g4) {
                                goto L-1;
                            }
L-1:
                            g0 = *(/* machine specific */ (int) LR + 1016);
                            if (g10 != g0) {
                                goto L-1;
                            }
L-1:
                            g9 = *(/* machine specific */ (int) LR + 1008);
L-1:
                            g3 = 0;
                            if (g8 != g9) {
                                goto L-1;
                            }
L-1:
                            g3 = 1;
                            goto L-1;
                        }
L-1:
                        g3 = 0;
                        g4 = *(/* machine specific */ (int) LR + 1036);
                        if (g0 != g4) {
                            goto L-1;
                        }
L-1:
                        g0 = *(/* machine specific */ (int) LR + 1028);
                        if (g11 != g0) {
                            goto L-1;
                        }
L-1:
                        g11 = *(/* machine specific */ (int) LR + 1020);
                        if (g10 != g11) {
                            goto L-1;
                        }
L-1:
                        g9 = *(/* machine specific */ (int) LR + 1012);
                        goto L-1;
                    }
L-1:
                    g8 = *(/* machine specific */ (int) LR + 1012);
                    goto L-1;
                }
L-1:
                g10 = *(/* machine specific */ (int) LR + 1020);
                goto L-1;
            }
L-1:
            g11 = *(/* machine specific */ (int) LR + 1028);
            goto L-1;
        }
L-1:
        g0 = *(/* machine specific */ (int) LR + 1036);
        goto L-1;
    }
L-1:
    g0 = 0;
    goto L-1;
}

