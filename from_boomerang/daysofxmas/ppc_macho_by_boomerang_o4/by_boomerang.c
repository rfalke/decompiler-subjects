// address: 0x19b8
int main(int argc, char *argv[], union { char *[] * x5; unsigned char * x6; } envp) {
    __size32 g10; 		// r10
    int g12; 		// r12
    union { unsigned int x371; char x372; char x368; char x364; char x360; char x356; char x352; char x348; char x344; char x340; char x336; char x332; char x328; char x324; char x320; char x316; char x312; char x308; char x304; char x300; char x296; char x292; char x290; char x288; char x286; char x278; char x276; char x274; char x272; char x264; char x262; char x260; char x258; char x250; char x248; char x246; char x244; char x236; char x234; char x232; char x230; char x222; char x220; char x218; char x216; char x208; char x206; char x204; char x202; char x194; char x192; char x190; char x188; char x180; char x178; char x176; char x174; char x166; char x164; char x162; char x160; char x152; char x150; char x148; char x146; char x138; char x136; char x134; char x132; char x124; char x122; char x120; char x118; char x110; char x108; char x106; char x104; char x96; char x94; char x92; char x90; char x82; char x80; char x78; char x76; char x68; char x66; char x64; char x62; char x54; char x52; char x50; char x48; char x40; char x38; char x36; char x34; char x24; char x22; char x20; char x16; } g2; 		// r2
    __size8 *g29; 		// r29
    union { unsigned int x283; char x284; char x270; char x256; char x242; char x228; char x214; char x200; char x186; char x172; char x158; char x144; char x130; char x116; char x102; char x88; char x74; char x60; char x46; char x32; char x10; } g4_1; 		// r4
    union { unsigned int x7; char x8; } g5_1; 		// r5
    int g8; 		// r8

L-1:
    if (argc <= 1) {
L-1:
        if (argc >= 0) {
L-1:
            if (argc <= 0) {
L-1:
                g2 = *(unsigned char*)envp;
                if ((int) g2 == 47) {
L-1:
L-1:
                }
L-1:
                main(-61, (int) g2, /* machine specific */ (int) LR + 1528);
            }
L-1:
L-1:
            main(g3, g4, g5);
        }
L-1:
        if (argc >= -72) {
L-1:
            if (argc >= -50) {
L-1:
                goto L-1;
            }
L-1:
            g5_1 = *(unsigned char*)envp;
            if (argv != (int) g5_1) {
L-1:
                goto L-1;
            }
L-1:
            g4_1 = *(unsigned char*)(envp + 31);
            g10 = *(/* machine specific */ (int) LR + 1688);
            g8 = *(g10 + 96);
            *(int*)(g10 + 96) = g8 - 1;
            if (g8 - 1 >= 0) {
L-1:
                g29 = *(g10 + 88);
                *(__size8*)g29 = (char) (int) g4_1;
                *(void **)(g10 + 88) = g29 + 1;
L-1:
                goto L-1;
            }
L-1:
            g12 = *(g10 + 112);
            if (g8 - 1 < g12 || (int) g4_1 == 10) {
L-1:
                __swbuf();
L-1:
                goto L-1;
            }
            goto L-1;
        }
L-1:
        goto L-1;
    }
L-1:
    if (argc > 2) {
L-1:
        if (argc >= argv) {
L-1:
            main(-94, argc - 27, envp);
        }
L-1:
        main(argc + 1, argv, envp);
    }
L-1:
    main(-86, 0, envp + 1);
}

