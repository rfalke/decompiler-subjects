int main(int argc, char *argv[]);

/** address: 0x0804840b */
int main(int argc, char *argv[])
{
    if ((unsigned int)argc > 7) {
bb0x804849d:
        puts("all other cases");
        return 0;
    }
    switch(argc) {
    case 0:
bb0x8048431:
        puts("0 or 1");
        return 0;
    case 1:
        goto bb0x8048431;
    case 2:
        puts("2");
        return 0;
    case 3:
        puts("3");
        return 0;
    case 4:
        puts("4");
        return 0;
    case 5:
        puts("5");
        return 0;
    case 6:
        goto bb0x804849d;
    case 7:
        puts("7");
        return 0;
    }
    return 0;
}

