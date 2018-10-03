int main(int argc, char *argv[]);
void forever();

/** address: 0x080483eb */
int main(int argc, char *argv[])
{
    __size32 ebp; 		// r29
    __size32 esp; 		// r28

    forever(esp - 4, ebp, pc, argc, argv);
    return 0;
}

/** address: 0x080483c4 */
void forever()
{
    int local0; 		// m[esp - 16]
    int local3; 		// m[esp - 16]{0}
    int local4; 		// m[esp - 16]{0}
    int local8; 		// local3{0}

    local0 = 0;
    local8 = local0;
bb0x80483d1:
    local3 = local8;
    local4 = local3 + 1;
    printf("i=%d\n", local3);
    local8 = local4;
    goto bb0x80483d1;
}

