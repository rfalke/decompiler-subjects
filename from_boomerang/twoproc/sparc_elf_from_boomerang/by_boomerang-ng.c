int main(int argc, char *argv[]);
__size32 proc1(__size32 param1, __size32 param2);

/** address: 0x00010620 */
int main(int argc, char *argv[])
{
    int o0; 		// r8

    o0 = proc1(11, 4);
    o0 = printf("%i\n", o0);
    return o0;
}

/** address: 0x00010618 */
__size32 proc1(__size32 param1, __size32 param2)
{
    return param1 - param2;
}

