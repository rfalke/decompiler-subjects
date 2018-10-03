int main(int argc, char *argv[]);

/** address: 0x0804842d */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24
    unsigned int local1; 		// m[esp - 8]

    eax = strlen(0x8048530);
    local1 = 0;
    while (local1 < eax) {
        putchar();
        local1++;
    }
    putchar();
    return 0;
}

