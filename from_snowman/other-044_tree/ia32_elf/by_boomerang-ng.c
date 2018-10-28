int main(int argc, char *argv[]);
__size32 printout(union { int *; __size32; } param1);
__size32 insert(union { int; __size32 *; } param1, union { int *; int; } param2);

/** address: 0x08048515 */
int main(int argc, char *argv[])
{
    int *eax; 		// r24
    int *eax_2; 		// r24{4}
    int eax_4; 		// r24{8}
    int edx; 		// r26
    int esp; 		// r28
    int local0; 		// m[esp - 8]

    local0 = 1;
    while (local0 <= 10) {
        eax_2 = malloc(12);
        *(__size32*)(eax_2 + 4) = 0;
        edx = *(eax_2 + 4);
        *(__size32*)(eax_2 + 8) = edx;
        eax_4 = rand();
        *(int*)eax_2 = eax_4;
        insert((esp - 16), eax_2);
        local0++;
    }
    eax = printout(0);
    return eax;
}

/** address: 0x080484c8 */
__size32 printout(union { int *; __size32; } param1)
{
    int eax; 		// r24
    __size32 eax_1; 		// r24{2}
    __size32 eax_2; 		// r24{0}
    int eax_3; 		// r24{5}
    __size32 eax_4; 		// r24{7}
    __size32 eax_7; 		// r24{0}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    __size32 local5; 		// eax{10}

    eax_1 = *(param1 + 8);
    if (eax_1 != 0) {
        printout(eax_2);
    }
    eax_3 = *param1;
    ecx = printf("%d\n", eax_3); /* Warning: also results in edx */
    eax_4 = *(param1 + 4);
    local5 = eax_4;
    if (eax_4 != 0) {
        eax = printout(eax_7); /* Warning: also results in ecx, edx */
        local5 = eax;
    }
    eax = local5;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804845d */
__size32 insert(union { int; __size32 *; } param1, union { int *; int; } param2)
{
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{4}
    union { __size32; int *; } eax_2; 		// r24{11}
    int eax_3; 		// r24{12}
    union { __size32; int *; } eax_4; 		// r24{17}
    int eax_5; 		// r24{18}
    __size32 eax_8; 		// r24{0}
    union { __size32 *; int; } edx; 		// r26
    int local4; 		// eax{21}

    eax_1 = *param1;
    if (eax_1 != 0) {
        edx = *param2;
        eax_2 = *param1;
        eax_3 = *eax_2;
        if (edx >= eax_3) {
            edx = *param2;
            eax_4 = *param1;
            eax_5 = *eax_4;
            local4 = eax_5;
            if (edx > eax_5) {
                eax = insert(eax_8 + 4, param2); /* Warning: also results in edx */
                local4 = eax;
            }
        }
        else {
            eax = insert(eax + 8, param2); /* Warning: also results in edx */
            local4 = eax;
        }
    }
    else {
        eax = param1;
        edx = param2;
        *(__size32*)param1 = param2;
        local4 = eax;
    }
    eax = local4;
    return eax; /* WARNING: Also returning: edx := edx */
}

