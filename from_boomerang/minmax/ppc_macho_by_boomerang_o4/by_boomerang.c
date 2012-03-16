// address: 0x1d30
int main(int argc, char *argv[], char *envp[]) {
    __size32 g4; 		// r4

    g4 = argc;
    if (argc < -2) {
        g4 = -2;
    }
    if (g4 > 3) {
    }
    printf(/* machine specific */ (int) LR + 664);
    return 0;
}

