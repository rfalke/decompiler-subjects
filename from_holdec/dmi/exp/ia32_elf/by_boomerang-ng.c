int main(int argc, char *argv[]);
__size32 intermediate_1_cmp_with_are_constant(int param1);
__size32 intermediate_2_cmp_with_extra(int param1);
__size32 intermediate_3_division_by_multiplication();
__size32 intermediate_4_swap_with_xor();
__size32 advanced_1_boolean_minization(__size32 param1, __size32 param2, __size32 param3);

/** address: 0x08048370 */
int main(int argc, char *argv[])
{
    unsigned char al; 		// r8
    unsigned char al_1; 		// r8{0}
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    int edx; 		// r26
    int edx_1; 		// r26

    eax_1 = intermediate_1_cmp_with_are_constant(argc);
    eax_2 = intermediate_2_cmp_with_extra(argc);
    eax_3 = intermediate_3_division_by_multiplication();
    eax_4 = intermediate_4_swap_with_xor();
    al_1 =  (argc == ((unsigned int) ((unsigned int)(argc * 0x55555556) >> 32) - (argc >> 31)) * 3) ? 1 : 0;
    al =  (argc == 0) ? 1 : 0;
    eax = advanced_1_boolean_minization(0 >> 8 & 0xffffff | (al),  ~argc & 0x1, (al_1));
    edx = *argv;
    edx_1 = (int) *edx;
    exit(eax_1 + eax_2 + eax_3 + eax_4 + eax + edx_1);
    return;
}

/** address: 0x080484eb */
__size32 intermediate_1_cmp_with_are_constant(int param1)
{
    if ( ~(param1 != 1 || param1 != 2)) {
        puts("not reached");
    }
    if ( ~(param1 != 1 || param1 <= 2)) {
        puts("not reached");
    }
    if ( ~(param1 >= 0 || param1 <= 0)) {
        puts("not reached");
    }
    return 0;
}

/** address: 0x08048551 */
__size32 intermediate_2_cmp_with_extra(int param1)
{
    if ( ~(param1 <= 10 || param1 > 19 || param1 == 30)) {
        puts("!=30 is always true");
    }
    if ( ~) {
        puts("!=2 is always true");
    }
    if ( ~(param1 <= 10 || param1 <= 9)) {
        puts(">9 is always true");
    }
    return 0;
}

/** address: 0x080485be */
__size32 intermediate_3_division_by_multiplication()
{
    putchar();
    return 0;
}

/** address: 0x080485e4 */
__size32 intermediate_4_swap_with_xor()
{
    putchar();
    putchar();
    return 0;
}

/** address: 0x0804861a */
__size32 advanced_1_boolean_minization(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24

    if ( ~(param1 != 0 || param2 != 0) && param3 != 0) {
bb0x8048652:
        eax = 1;
    }
    else {
        if ( ~ && param3 != 0) {
            goto bb0x8048652;
        }
        else {
            if (param1 == 0 || param2 != 0) {
                eax = 0;
            }
            else {
                goto bb0x8048652;
            }
        }
    }
    return eax;
}

