int main(int argc, char *argv[]);

/** address: 0x0804840b */
int main(int argc, char *argv[])
{
    if ( ~( ~(argv != 0 && argc == 2) && (argv == 0 || argc != 42))) {
        puts("Should be expressed as argv!=null && (argc==2 || argc==42)");
    }
    if (argv != 0 && argc == 2) {
        puts("Also if order is different");
    }
    return 0;
}

