int main(int argc, char *argv[]);

/** address: 0x0804842d */
int main(int argc, char *argv[])
{
    int eax; 		// r24
    unsigned int eax_1; 		// r24{2}
    unsigned int local1; 		// m[esp - 8]

    eax_1 = strlen("Hello, World!");
    local1 = 0;
    while (local1 < eax_1) {
        eax = *(unsigned char*)(local1 + 0x8048530);
        putchar((int) (unsigned char) eax);
        local1++;
    }
    putchar('\n');
    return 0;
}

