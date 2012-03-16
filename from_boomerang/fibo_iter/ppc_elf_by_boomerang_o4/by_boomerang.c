// address: 0x10000484
int main(int argc, char *argv[], char *envp[]) {
    int g0; 		// r0
    int local0; 		// m[g1 - 8]

    printf("Input number: ");
    scanf("%d", &local0);
    g0 = local0;
    if (local0 > 1) {
        if (local0 > 2) {
        }
        g0 = 1;
    }
    printf("fibonacci(%d) = %d\n", local0, g0);
    return 0;
}

