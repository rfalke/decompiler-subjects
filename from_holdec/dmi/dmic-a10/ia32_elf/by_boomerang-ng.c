int main(int argc, char *argv[]);
__size32 sum5(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5);

/** address: 0x080483f7 */
int main(int argc, char *argv[])
{
    __size32 eax; 		// r24

    eax = sum5(1, 2, 3, 4, 5);
    return eax;
}

/** address: 0x080483db */
__size32 sum5(__size32 param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5)
{
    __size32 edx; 		// r26

    edx = param1 + param2 + param3 + param4;
    return param5 + param1 + param2 + param3 + param4;
}

