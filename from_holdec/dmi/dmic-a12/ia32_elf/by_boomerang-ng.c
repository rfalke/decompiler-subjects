int main(int argc, char *argv[]);

/** address: 0x0804840b */
int main(int argc, char *argv[])
{
    if ((unsigned int)argc > 7) {
bb0x804849d:
        puts("all other cases");
        break;
    }
    switch(argc) {
    case 0:
bb0x8048431:
        puts("0 or 1");
        break;
    case 1:
        goto bb0x8048431;
    case 2:
        puts("2");
        break;
    case 3:
        puts("3");
        break;
    case 4:
        puts("4");
        break;
    case 5:
        puts("5");
        break;
    case 6:
        goto bb0x804849d;
    case 7:
        puts("7");
        break;
    }
    return 0;
}

