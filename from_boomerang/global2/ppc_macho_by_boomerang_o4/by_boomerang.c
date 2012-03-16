// address: 0x1ca4
int main(int argc, char *argv[], char *envp[]) {
    *(__size32*)(/* machine specific */ (int) LR + 888) = 12;
    printf(/* machine specific */ (int) LR + 832);
    printf(/* machine specific */ (int) LR + 840);
    return 0;
}

