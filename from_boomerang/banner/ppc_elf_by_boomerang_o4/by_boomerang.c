// address: 0x10000468
int main(int argc, char *argv[], char *envp[]) {
    void *g1; 		// r1
    int g3; 		// r3
    int g31; 		// r31
    __size32 g5; 		// r5
    __size32 g9; 		// r9
    char local0; 		// m[g1 - 112]

    g3 = malloc(12);
    *(__size32*)(g3 + 4) = 0x10000990;
    g3 = *(g3 + 4);
    g3 = strlen(g3);
    g31 = g3;
    if (g3 > 10) {
        g31 = 10;
    }
    if (0 < g31) {
    }
    g9 = (ROTL(g31) & 0xfffffff9) - 1;
    if ( !ADDFLAGSX0(g9, ROTL(g31) & 0xfffffff9, -1)) {
        g5 = *(unsigned char*)(g1 + g9 - 112);
        if (g5 == 32) {
            *(__size8*)(g1 + g9 - 112) = 0;
            if (g5 < 32) {
                goto L2;
            }
        }
    }
L2:
    puts(&local0);
}

