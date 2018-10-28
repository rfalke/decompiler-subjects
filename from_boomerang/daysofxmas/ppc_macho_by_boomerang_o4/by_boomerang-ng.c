int main(int argc, union { __size32; char *[] *; } argv);

/** address: 0x000019b8 */
int main(int argc, union { __size32; char *[] *; } argv)
{
    int g10; 		// r10
    int g12; 		// r12
    union { unsigned int; char; } g2; 		// r2
    union { __size32; __size8 *; } g29; 		// r29
    union { unsigned int; char; } g4_1; 		// r4
    union { unsigned int; char; } g5_2; 		// r5{21}
    union { __size32; unsigned char *; } g5_4; 		// r5{2}
    int g8; 		// r8

    if (argc > 1) {
        if (argc <= 2) {
            main(-86, 0);
        }
        if (argc < argv) {
            main(argc + 1, argv);
        }
        main(-94, argc - 27);
    }
    if (argc < 0) {
        if (argc < -72) {
bb0x1b5c:
            main(%g3, %g4);
        }
        if (argc < -50) {
            g5_2 = *(unsigned char*)g5_4;
            if (argv == (int) g5_2) {
                g4_1 = *(unsigned char*)(g5_4 + 31);
                g10 = *(/* machine specific */ (int) LR + 1688);
                g8 = *(g10 + 96);
                *(int*)(g10 + 96) = g8 - 1;
                if (g8 < 1) {
                    g12 = *(g10 + 112);
                    if ( ~(g8 - 1 < g12 || (int) g4_1 == 10)) {
                        goto bb0x1afc;
                    }
                    __swbuf();
bb0x1b1c:
bb0x1ba8:
                }
bb0x1afc:
                g29 = *(g10 + 88);
                *(__size8*)g29 = (char) (int) g4_1;
                *(__size32*)(g10 + 88) = g29 + 1;
                goto bb0x1b1c;
            }
            goto bb0x1b5c;
        }
        goto bb0x1b5c;
    }
    if (argc > 0) {
        goto bb0x1b5c;
    }
    g2 = *(unsigned char*)g5_4;
    if ((int) g2 == 47) {
        goto bb0x1ba8;
    }
    main(-61, (int) g2);
}

