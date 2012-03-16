// address: 0x10000444
int main(int argc, char *argv[], union { char *[] * x5; unsigned char * x6; } envp) {
    unsigned int g4_1; 		// r4
    unsigned int g5_1; 		// r5

L-1:
    if (argc <= 1) {
L-1:
        if (argc < 0) {
L-1:
            if (argc < -72) {
L-1:
L-1:
                main(g3, g4, g5);
            }
L-1:
            if (argc >= -50) {
L-1:
                goto L-1;
            }
L-1:
            g5_1 = *(unsigned char*)envp;
            if (argv == g5_1) {
L-1:
                _IO_putc();
L-1:
            }
L-1:
            goto L-1;
        }
L-1:
        if (argc > 0) {
L-1:
            goto L-1;
        }
L-1:
        g4_1 = *(unsigned char*)envp;
        if (g4_1 == 47) {
L-1:
        }
L-1:
        main(-61, g4_1, 0x10000a1c);
    }
L-1:
    if (argc <= 2) {
L-1:
        main(-86, 0, envp + 1);
    }
L-1:
    if (argc < argv) {
L-1:
        main(g3, g4, g5);
    }
L-1:
L-1:
    main(g3, g4, g5);
}

