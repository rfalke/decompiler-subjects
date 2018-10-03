int main(int argc, char *argv[]);
__size32 fibo_normal(int param1);
__size32 fibo_return_on_stack(int param1);

/** address: 0x0804849e */
int main(int argc, char *argv[])
{
    int eax; 		// r24
    int eax_1; 		// r24{0}
    int local0; 		// m[esp - 16]

    printf("Input number: ");
    __isoc99_scanf();
    eax_1 = fibo_normal(local0);
    eax = fibo_return_on_stack(local0);
    printf("fibonacci(%d) = %d %d\n", local0, eax_1, eax);
    return 0;
}

/** address: 0x08048414 */
__size32 fibo_normal(int param1)
{
    int eax; 		// r24
    __size32 eax_1; 		// r24{0}

    if (param1 <= 1) {
        eax = param1;
    }
    else {
        eax_1 = fibo_normal(param1 - 1);
        eax = fibo_normal(param1 - 2);
        eax = eax_1 + eax;
    }
    return eax;
}

/** address: 0x0804844d */
__size32 fibo_return_on_stack(int param1)
{
    int eax; 		// r24

    if (param1 > 1) {
        fibo_return_on_stack(param1 - 1);
        fibo_return_on_stack(param1 - 2);
        eax = param1 + param1 - 3;
    }
    return eax;
}

