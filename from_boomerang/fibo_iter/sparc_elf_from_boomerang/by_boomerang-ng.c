int main(int argc, char *argv[]);
void fib();

/** address: 0x00010704 */
int main(int argc, char *argv[])
{
    int local0; 		// m[o6 - 20]

    printf("Input number: ");
    scanf("%d", &local0);
    fib();
    printf("fibonacci(%d) = %d\n", local0, local0);
    return 0;
}

/** address: 0x000106c4 */
void fib()
{
    if (flags) {
    }
    else {
        if ( ~flags) {
            do {
            } while (flags);
        }
    }
    return;
}

