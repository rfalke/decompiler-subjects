int main(int argc, char *argv[]);

/** address: 0x00001c20 */
int main(int argc, char *argv[])
{
    int g0; 		// r0
    int g0_1; 		// r0{6}
    __size32 g0_2; 		// r0{11}
    __size32 g0_3; 		// r0{8}
    int g10; 		// r10
    int g11; 		// r11
    int g12; 		// r12
    int g3; 		// r3
    int g4; 		// r4
    int g8; 		// r8
    int g9; 		// r9
    __size32 local0; 		// g0_2{11}

    g0 = 1;
    if (argc > 1) {
bb0x1c50:
        g0_1 = g0;
        if (g0_1 == 0) {
            g0 = *(/* machine specific */ (int) LR + 1032);
            local0 = g0;
bb0x1c6c:
            g0_2 = local0;
            if (g0_1 == 0) {
                g11 = *(/* machine specific */ (int) LR + 1024);
bb0x1c84:
                if (g0_1 == 0) {
                    g10 = *(/* machine specific */ (int) LR + 1016);
bb0x1c9c:
                    if (g0_1 == 0) {
                        g8 = *(/* machine specific */ (int) LR + 1008);
bb0x1cb4:
                        if (g0_1 <= 0) {
                            g3 = 0;
                            g12 = *(/* machine specific */ (int) LR + 1032);
                            if (g0_2 != g12) {
bb0x1d40:
                                if (g3 == 0) {
                                    g3 = /* machine specific */ (int) LR + 968;
bb0x1d5c:
                                    puts(g3);
                                }
                                g3 = /* machine specific */ (int) LR + 960;
                                goto bb0x1d5c;
                            }
                            g4 = *(/* machine specific */ (int) LR + 1024);
                            if (g11 != g4) {
                                goto bb0x1d40;
                            }
                            g0 = *(/* machine specific */ (int) LR + 1016);
                            if (g10 != g0) {
                                goto bb0x1d40;
                            }
                            g9 = *(/* machine specific */ (int) LR + 1008);
bb0x1d34:
                            g3 = 0;
                            if (g8 != g9) {
                                goto bb0x1d40;
                            }
                            g3 = 1;
                            goto bb0x1d40;
                        }
                        g3 = 0;
                        g4 = *(/* machine specific */ (int) LR + 1036);
                        if (g0_2 != g4) {
                            goto bb0x1d40;
                        }
                        g0 = *(/* machine specific */ (int) LR + 1028);
                        if (g11 != g0) {
                            goto bb0x1d40;
                        }
                        g11 = *(/* machine specific */ (int) LR + 1020);
                        if (g10 != g11) {
                            goto bb0x1d40;
                        }
                        g9 = *(/* machine specific */ (int) LR + 1012);
                        goto bb0x1d34;
                    }
                    g8 = *(/* machine specific */ (int) LR + 1012);
                    goto bb0x1cb4;
                }
                g10 = *(/* machine specific */ (int) LR + 1020);
                goto bb0x1c9c;
            }
            g11 = *(/* machine specific */ (int) LR + 1028);
            goto bb0x1c84;
        }
        g0_3 = *(/* machine specific */ (int) LR + 1036);
        local0 = g0_3;
        goto bb0x1c6c;
    }
    g0 = 0;
    goto bb0x1c50;
}

