void forever();

// address: 0x80483eb
int main(int argc, char *argv[], char *envp[]) {
    __size32 ebp; 		// r29
    __size32 esp; 		// r28

    forever(pc, ebp, argc, argv, envp, esp - 4);
    return 0;
}

// address: 0x80483c4
void forever() {
    int local0; 		// m[esp - 16]
    int local3; 		// m[esp - 16]{28}

L-1:
    local0 = 0;
L-1:
    local3 = local0;
    local0 = local3 + 1;
    printf("i=%d\n", local3);
    goto L-1;
}

