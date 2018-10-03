int main(int argc, char *argv[]);

/** address: 0x08048310 */
int main(int argc, char *argv[])
{
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{0}
    unsigned int ebx_2; 		// r27{0}
    union { __size32; char *; } local0; 		// m[esp - 48]
    unsigned int local1; 		// ebx_1{0}

    if (argc > 0) {
        ebx = 0;
        local1 = ebx;
        do {
            ebx_1 = local1;
            local0 = *(argv + ebx_1 * 4);
            ebx_2 = ebx_1 + 1;
            puts(local0);
            local1 = ebx_2;
        } while (argc != ebx_1 + 1);
    }
    return 0;
}

