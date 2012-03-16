// address: 0x1cc4
int main(int argc, char *argv[], char *envp[]) {
    *(__size32*)(/* machine specific */ (int) LR + 856) = 12;
    printf(/* machine specific */ (int) LR + 796);
    printf(/* machine specific */ (int) LR + 808);
    return 0;
}

