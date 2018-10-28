int main(int argc, char *argv[]);
__size32 f(unsigned int param1, unsigned int param2, __size32 param3);

/** address: 0x08048310 */
int main(int argc, char *argv[])
{
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{5}
    unsigned int ebx_2; 		// r27{6}
    __size32 ecx; 		// r25
    union { __size32; __size32 *; } esp; 		// r28
    unsigned int local2; 		// ebx_1{5}

    ecx = (esp + 4);
    ebx = 0;
    local2 = ebx;
    do {
        ebx_1 = local2;
        ebx_2 = ebx_1 + 1;
        ecx = f(ebx_1, ebx_1, ecx);
        local2 = ebx_2;
    } while (ebx_1 + 1 != 10);
    return 0;
}

/** address: 0x0804843b */
__size32 f(unsigned int param1, unsigned int param2, __size32 param3)
{
    int ecx; 		// r25
    __size32 local4; 		// param3{7}

    local4 = param3;
    if ((unsigned int)(param1 - 2) <= 5) {
        ecx = printf("%d signed in range\n", param1);
        local4 = ecx;
    }
    param3 = local4;
    if ((unsigned int)(param2 - 2) > 5) {
        return param3;
    }
    printf("%d unsigned in range\n", param2);
    return;
}

