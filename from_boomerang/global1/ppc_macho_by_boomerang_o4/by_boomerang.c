// address: 0x1ce0
int main(int argc, char *argv[], char *envp[]) {
    *(__size32*)(/* machine specific */ (int) LR + 824) = 12;
    printf(/* machine specific */ (int) LR + 772);
    printf(/* machine specific */ (int) LR + 780);
    return 0;
}

