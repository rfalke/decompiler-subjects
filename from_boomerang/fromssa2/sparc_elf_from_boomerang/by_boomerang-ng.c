int main(int argc, char *argv[]);

/** address: 0x00010684 */
int main(int argc, char *argv[])
{
    __size32 local0; 		// o0_1{2}
    int o0; 		// r8
    __size32 o0_1; 		// r8{2}
    __size32 o0_2; 		// r8{4}

    o0 = 0;
    local0 = o0;
    do {
        o0_1 = local0;
        printf("%d ", o0_1 + 1);
        o0_2 = o0_1 + 1;
        local0 = o0_2;
    } while (o0_1 + 1 <= 9);
    printf("a is %d, x is %d\n", o0_1 + 1, o0_1 + 1);
    return 0;
}

