int main(int argc, union { __size32; char *[] *; } argv);

/** address: 0x10000444 */
int main(int argc, union { __size32; char *[] *; } argv)
{
    unsigned int g4_1; 		// r4
    int g5; 		// r5

    if (argc <= 1) {
        if (argc >= 0) {
            if (argc <= 0) {
                g4_1 = *(unsigned char*)g5;
                if (g4_1 != 47) {
                    main(-61, g4_1);
                }
            }
bb0x10000564:
            main(%g3, %g4);
        }
        if (argc >= -72) {
            if (argc < -50) {
                g5 = *(unsigned char*)g5;
                if (argv != g5) {
                    goto bb0x10000564;
                }
                _IO_putc();
            }
            goto bb0x10000564;
        }
        goto bb0x10000564;
    }
    if (argc <= 2) {
        main(-86, 0);
    }
    if (argc >= argv) {
        main(%g3, %g4);
    }
    main(%g3, %g4);
}

