int main(int argc, char *argv[]);

/** address: 0x10000468 */
int main(int argc, char *argv[])
{
    __size32 g1; 		// r1
    __size32 g26; 		// r26
    __size32 g26_1; 		// r26{7}
    __size32 g26_2; 		// r26{31}
    __size32 g29; 		// r29
    __size32 g29_1; 		// r29{16}
    __size32 g29_2; 		// r29{26}
    int g3; 		// r3
    __size32 g30; 		// r30
    int g31; 		// r31
    int g5; 		// r5
    int g9; 		// r9
    int g9_1; 		// r9{20}
    int g9_2; 		// r9{21}
    char local0; 		// m[g1 - 112]
    __size32 local1; 		// g26_1{7}
    __size32 local2; 		// g29_1{16}
    int local3; 		// g9_1{20}

    g26 = 1;
    g3 = malloc(12);
    local1 = g26;
    *(__size32*)(g3 + 4) = 0x10000990;
    g30 = g3 + 4;
    do {
        g26_1 = local1;
        g3 = *g30;
        g3 = strlen(g3);
        g31 = g3;
        if (g3 > 10) {
            g31 = 10;
        }
        g29 = 0;
        local2 = g29;
        do {
            g29_1 = local2;
            if (0 < g31) {
            }
            g9 = (ROTL(g31) & ~0x7) - 1;
            local3 = g9;
            if ( ~ADDFLAGSX0(g9, ROTL(g31) & ~0x7, -1)) {
                do {
                    g9_1 = local3;
                    g9_2 = g9_1 - 1;
                    g5 = *(unsigned char*)(g1 + g9_1 - 112);
                    local3 = g9_2;
                    if (g5 == 32) {
                        *(__size8*)(g1 + g9_1 - 112) = 0;
                    }
                } while ((int)g5 >= 32);
            }
            g29_2 = g29_1 + 1;
            puts(&local0);
            local2 = g29_2;
        } while (g29_1 + 1 <= 6);
        g30 += 4;
        puts("");
        g26_2 = g26_1 - 1;
        local1 = g26_2;
    } while (ADDFLAGSX0(g26_1 - 1, g26_1 - 1, -1));
    return 0;
}

