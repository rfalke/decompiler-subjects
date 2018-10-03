int main(int argc, char *argv[]);

/** address: 0x08048310 */
int main(int argc, char *argv[])
{
    if (argc == 3) {
        puts("hello");
    }
    return argc - 3;
}

